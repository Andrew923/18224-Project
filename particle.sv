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
    parameter REST2=4*16)
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
        0 : begin
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
        1: begin
          ax <= force_x / MASS;
        end
        2: begin
          ay <= force_y / MASS;
        end
        3: begin
          px <= 2 * px - px_old + ax * TIME_STEP * TIME_STEP;
        end
        4: begin
          py <= 2 * py - py_old + ay * TIME_STEP * TIME_STEP;
        end
        5: begin
          px_old <= px;
        end
        6: begin
          py_old <= py;
        end
        7: begin
          vx <= (px - px_old) / TIME_STEP;
        end
        8: begin
          vy <= (py - py_old) / TIME_STEP;
        end
        //////////////////////////////
        // Phases 9-11: mass 0 distance
        //////////////////////////////
        9: begin
          dx0 <= px - x0;
        end
        10: begin
          dy0 <= py - y0;
        end
        11: begin
          d0 <= dx0 * dx0 + dy0 + dy0; // no sqrt :(
        end
        //////////////////////////////
        // Phases 12-16: parameter update
        //////////////////////////////
        5: begin
          if (d0 > 0) begin
            dx0 <= dx0 / d0;
            dy0 <= dy0 / d0;
            displace0 <= d0 - REST0;
            rel_vel_x0 <= vx - vx0;
            rel_vel_y0 <= vy - vy0;
          end
        end
        6: begin
          // Phase 6: mass 0 damping
          if (d0 > 0) begin
            damp0 <= DAMPING * (rel_vel_x0 * dx0 + rel_vel_y0 * dy0);
          end
        end
        7: begin
          // Phase 7: mass 0 force update
          if (d0 > 0) begin
            ax <= ax + ((SPRING * displace0 + damp0) * dx0);
            ay <= ay + ((SPRING * displace0 + damp0) * dy0);
          end
        end
        8: begin
          // Phase 8: mass 1 delta
          dx1 <= px - x1;
          dy1 <= py - y1;
        end
        9: begin
          // Phase 9: mass 1 distance
          d1 <= dx1 * dx1 + dy1 + dy1;
        end
        10: begin
          // Phase 10: mass 1 relative
          if (d1 > 0) begin
            dx1 <= dx1 / d1;
            dy1 <= dy1 / d1;
            displace1 <= d1 - REST1;
            rel_vel_x1 <= vx - vx1;
            rel_vel_y1 <= vy - vy1;
          end
        end
        11: begin
          // Phase 11: mass 1 damping
          if (d1 > 0) begin
            damp1 <= DAMPING * (rel_vel_x1 * dx1 + rel_vel_y1 * dy1);
          end
        end
        12: begin
          // Phase 12: mass 1 force update
          if (d1 > 0) begin
            ax <= ax + ((SPRING * displace1 + damp1) * dx1);
            ay <= ay + ((SPRING * displace1 + damp1) * dy1);
          end
        end
        13: begin
          // Phase 13: mass 2 delta
          dx2 <= px - x2;
          dy2 <= py - y2;
        end
        14: begin
          // Phase 14: mass 2 distance
          d2 <= dx2 * dx2 + dy2 + dy2;
        end
        15: begin
          // Phase 15: mass 2 relative
          if (d2 > 0) begin
            dx2 <= dx2 / d2;
            dy2 <= dy2 / d2;
            displace2 <= d2 - REST2;
            rel_vel_x2 <= vx - vx2;
            rel_vel_y2 <= vy - vy2;
          end
        end
        16: begin
          // Phase 16: mass 2 damping
          if (d2 > 0) begin
            damp2 <= DAMPING * (rel_vel_x2 * dx2 + rel_vel_y2 * dy2);
          end
        end
        17: begin
          // Phase 17: mass 2 force update
          if (d2 > 0) begin
            ax <= ax + ((SPRING * displace2 + damp2) * dx2);
            ay <= ay + ((SPRING * displace2 + damp2) * dy2);
          end
        end
        18: begin
          // Phase 18: left boundary check
          if (px < 0) begin
            px <= 0;
            vx <= vx * -8;
          end
        end
        19: begin
          // Phase 19: right boundary check
          if (px >= 16) begin
            px <= 15;
            vx <= vx * -8;
          end
        end
        20: begin
          // Phase 20: top boundary check
          if (py < 0) begin
            py <= 0;
            vy <= vy * -8;
          end
        end
        21: begin
          // Phase 21: bottom boundary check
          if (py >= 16) begin
            py <= 15;
            vy <= vy * -8;
          end
        end
      endcase

    end
  end

endmodule: particle
