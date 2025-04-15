`default_nettype none

// Note: because of lack of floats, treat
// integers like int >> 4 where lowest
// 4 bits are decimal points

// handles logic for specific particle
// in 16x16 grid
module particle
  #(parameter MASS=1*16,
    parameter INIT_X=8*16,
    parameter INIT_Y=8*16,
    parameter REST0=4*16, // rest lengths for each particle
    parameter REST1=4*16,
    parameter REST2=4*16,
    parameter PHASE_OFFSET=0)
(
  // handles influence from 3 particles
  input int x0, y0, m0, vx0, vy0, 
  input int x1, y1, m1, vx1, vy1, 
  input int x2, y2, m2, vx2, vy2, 
  // input data_t data,
  input logic btn_left, btn_right, btn_up, btn_down, // TODO: temporary control
  input logic clk,
  input logic reset,
  output int x, y, m, vel_x, vel_y
);

  // simulation parameters
  parameter SPRING = 8;
  parameter DAMPING = 5;
  parameter TIME_STEP = 2;
  parameter FORCE_MAG = 32;

  // store position, velocity, acceleration
  int px;
  int py;
  int px_old; // needed for Verlet integration
  int py_old;
  int vx;
  int vy;
  int ax;
  int ay;
  int force_x, force_y;

  // temporary variables used during updating
  int dx0, dy0, dx1, dy1, dx2, dy2; // deltas
  int d0, d1, d2; // distances
  int displace0, displace1, displace2;
  int rel_vel_x0, rel_vel_x1, rel_vel_x2; // relative velocity
  int rel_vel_y0, rel_vel_y1, rel_vel_y2; // for dampening
  int damp0, damp1, damp2; // dampened amount

  // counter for pipelining stages
  parameter TOTAL_CYCLES = 1_000_000;
  logic [$clog2(TOTAL_CYCLES+1):0] idx;
  logic clear;
  Counter #($clog2(TOTAL_CYCLES+1)+1) counter(clk, clear, idx);
  assign clear = reset;

  // outputs
  always_comb begin
    x = px;
    y = py;
    m = MASS;
    vel_x = vx;
    vel_y = vy;
  end
  
  // sequential updates
  always_ff @(posedge clk) begin
    //////////////////////////////
    // Initalization
    //////////////////////////////
    if (reset) begin
      px <= INIT_X;
      py <= INIT_Y;
      px_old <= INIT_X;
      py_old <= INIT_Y;
      vx <= 0;
      vy <= 0;
      ax <= 0;
      ay <= 0;
    end
    else begin // update function in python version
      //////////////////////////////
      // Updating phases
      //////////////////////////////
      case (idx)
        PHASE_OFFSET + 0: begin
          // Phase 0: force update
          // TODO: temporary button logic
          if (btn_left) begin
            force_x <= -FORCE_MAG;
            force_y <= 0;
          end
          else if (btn_right) begin
            force_x <= FORCE_MAG;
            force_y <= 0;
          end
          else if (btn_up) begin
            force_x <= 0;
            force_y <= FORCE_MAG;
          end
          else if (btn_down) begin
            force_x <= 0;
            force_y <= -FORCE_MAG;
          end
          else begin
            force_x <= 0;
            force_y <= 0;
          end
        end
        //////////////////////////////
        // Phases 1-8: parameter update
        //////////////////////////////
        PHASE_OFFSET + 1: begin
          ax <= force_x / MASS;
        end
        PHASE_OFFSET + 2: begin
          ay <= force_y / MASS;
        end
        PHASE_OFFSET + 3: begin
          px <= 2 * px - px_old + ax * TIME_STEP * TIME_STEP;
        end
        PHASE_OFFSET + 4: begin
          py <= 2 * py - py_old + ay * TIME_STEP * TIME_STEP;
        end
        PHASE_OFFSET + 5: begin
          px_old <= px;
        end
        PHASE_OFFSET + 6: begin
          py_old <= py;
        end
        PHASE_OFFSET + 7: begin
          vx <= (px - px_old) / TIME_STEP;
        end
        PHASE_OFFSET + 8: begin
          vy <= (py - py_old) / TIME_STEP;
        end

        //////////////////////////////
        // Phases 9-11: distance mass 0
        //////////////////////////////
        PHASE_OFFSET + 9: begin
          dx0 <= px - x0;
        end
        PHASE_OFFSET + 10: begin
          dy0 <= py - y0;
        end
        PHASE_OFFSET + 11: begin
          d0 <= dx0 * dx0 + dy0 + dy0; // no sqrt :(
        end
        //////////////////////////////
        // Phases 12-16: parameter update
        //////////////////////////////
        PHASE_OFFSET + 12: begin
          if (d0 > 0) begin
            dx0 <= dx0 / d0;
          end
        end
        PHASE_OFFSET + 13: begin
          if (d0 > 0) begin
            dy0 <= dy0 / d0;
          end
        end
        PHASE_OFFSET + 14: begin
          if (d0 > 0) begin
            displace0 <= d0 - REST0;
          end
        end
        PHASE_OFFSET + 15: begin
          if (d0 > 0) begin
            rel_vel_x0 <= vx - vx0;
          end
        end
        PHASE_OFFSET + 16: begin
          if (d0 > 0) begin
            rel_vel_y0 <= vy - vy0;
          end
        end
        //////////////////////////////
        // Phases 17-19: damping
        //////////////////////////////
        PHASE_OFFSET + 17: begin
          if (d0 > 0) begin
            damp0 <= DAMPING * (rel_vel_x0 * dx0 + rel_vel_y0 * dy0);
          end
        end
        PHASE_OFFSET + 18: begin
          if (d0 > 0) begin
            ax <= ax + ((SPRING * displace0 + damp0) * dx0);
          end
        end
        PHASE_OFFSET + 19: begin
          if (d0 > 0) begin
            ay <= ay + ((SPRING * displace0 + damp0) * dy0);
          end
        end

        //////////////////////////////
        // Phases 20-22: distance mass 1
        //////////////////////////////
        PHASE_OFFSET + 20: begin
          dx1 <= px - x1;
        end
        PHASE_OFFSET + 21: begin
          dy1 <= py - y1;
        end
        PHASE_OFFSET + 22: begin
          d1 <= dx1 * dx1 + dy1 + dy1; // no sqrt :(
        end
        //////////////////////////////
        // Phases 23-27: parameter update
        //////////////////////////////
        PHASE_OFFSET + 23: begin
          if (d1 > 0) begin
            dx1 <= dx1 / d1;
          end
        end
        PHASE_OFFSET + 24: begin
          if (d1 > 0) begin
            dy1 <= dy1 / d1;
          end
        end
        PHASE_OFFSET + 25: begin
          if (d1 > 0) begin
            displace1 <= d1 - REST1;
          end
        end
        PHASE_OFFSET + 26: begin
          if (d1 > 0) begin
            rel_vel_x1 <= vx - vx1;
          end
        end
        PHASE_OFFSET + 27: begin
          if (d1 > 0) begin
            rel_vel_y1 <= vy - vy1;
          end
        end
        //////////////////////////////
        // Phases 28-30: damping
        //////////////////////////////
        PHASE_OFFSET + 28: begin
          if (d1 > 0) begin
            damp1 <= DAMPING * (rel_vel_x1 * dx1 + rel_vel_y1 * dy1);
          end
        end
        PHASE_OFFSET + 29: begin
          if (d1 > 0) begin
            ax <= ax + ((SPRING * displace1 + damp1) * dx1);
          end
        end
        PHASE_OFFSET + 30: begin
          if (d1 > 0) begin
            ay <= ay + ((SPRING * displace1 + damp1) * dy1);
          end
        end

        //////////////////////////////
        // Phases 31-33: distance mass 2
        //////////////////////////////
        PHASE_OFFSET + 31: begin
          dx2 <= px - x2;
        end
        PHASE_OFFSET + 32: begin
          dy2 <= py - y2;
        end
        PHASE_OFFSET + 33: begin
          d2 <= dx2 * dx2 + dy2 + dy2; // no sqrt :(
        end
        //////////////////////////////
        // Phases 34-38: parameter update
        //////////////////////////////
        PHASE_OFFSET + 34: begin
          if (d2 > 0) begin
            dx2 <= dx2 / d2;
          end
        end
        PHASE_OFFSET + 35: begin
          if (d2 > 0) begin
            dy2 <= dy2 / d2;
          end
        end
        PHASE_OFFSET + 36: begin
          if (d2 > 0) begin
            displace2 <= d2 - REST2;
          end
        end
        PHASE_OFFSET + 37: begin
          if (d2 > 0) begin
            rel_vel_x2 <= vx - vx2;
          end
        end
        PHASE_OFFSET + 38: begin
          if (d2 > 0) begin
            rel_vel_y2 <= vy - vy2;
          end
        end
        //////////////////////////////
        // Phases 39-41: damping
        //////////////////////////////
        PHASE_OFFSET + 39: begin
          if (d2 > 0) begin
            damp2 <= DAMPING * (rel_vel_x2 * dx2 + rel_vel_y2 * dy2);
          end
        end
        PHASE_OFFSET + 40: begin
          if (d2 > 0) begin
            ax <= ax + ((SPRING * displace2 + damp2) * dx2);
          end
        end
        PHASE_OFFSET + 41: begin
          if (d2 > 0) begin
            ay <= ay + ((SPRING * displace2 + damp2) * dy2);
          end
        end

        //////////////////////////////
        // Phases 42-45: boundary checks
        //////////////////////////////
        PHASE_OFFSET + 42: begin
          if (px < 0) begin
            px <= 0;
            vx <= vx * -8;
          end
        end
        PHASE_OFFSET + 43: begin
          if (px >= 16) begin
            px <= 15;
            vx <= vx * -8;
          end
        end
        PHASE_OFFSET + 44: begin
          if (py < 0) begin
            py <= 0;
            vy <= vy * -8;
          end
        end
        PHASE_OFFSET + 45: begin
          if (py >= 16) begin
            py <= 15;
            vy <= vy * -8;
          end
        end
      endcase

    end
  end

endmodule: particle
