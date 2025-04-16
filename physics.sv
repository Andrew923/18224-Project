`default_nettype none

// Note: this doesn't work with Yosys sadly so
// I've destructured the variables center and peripheral
// Reals also don't work!
// 
// stores position, old position and velocity
// typedef struct {
//   shortreal px;
//   shortreal py;
//   shortreal px_old; // needed for Verlet integration
//   shortreal py_old;
//   shortreal vx;
//   shortreal vy;
//   shortreal ax;
//   shortreal ay;
// } particle_t;

// implements soft-body physics
// Warning: bad style b/c translation sucks
module physics(
  input data_t data,
  input logic clk,
  input logic reset,
  input logic btn_left, btn_right, btn_up, btn_down,
  output logic matrix[15:0][15:0]
);
  logic next_matrix[15:0][15:0];

  // particle attributes
  int cx, cy, cm, cvx, cvy;
  int p0x, p0y, p0m, p0vx, p0vy;
  int p1x, p1y, p1m, p1vx, p1vy;
  int p2x, p2y, p2m, p2vx, p2vy;

  // center particle with 3 peripheral
  particle #(
    .MASS(1*16),
    .INIT_X(8*16),
    .INIT_Y(8*16),
    .REST0(2*16),
    .REST1(2*16),
    .REST2(2*16),
    .PHASE_OFFSET(0)
  ) center(
    p0x, p0y, p0m, p0vx, p0vy,
    p1x, p1y, p1m, p1vx, p1vy,
    p2x, p2y, p2m, p2vx, p2vy,
    btn_left, btn_right, btn_up, btn_down,
    clk,
    reset,
    cx, cy, cm, cvx, cvy    
  );

  particle #(
    .MASS(8),
    .INIT_X(8*16),
    .INIT_Y(6*16),
    .REST0(2*16),
    .REST1(71), // 71 = 4.47 * 16
    .REST2(71),
    .PHASE_OFFSET(100)
  ) peripheral0(
    cx, cy, cm, cvx, cvy,    
    p1x, p1y, p1m, p1vx, p1vy,
    p2x, p2y, p2m, p2vx, p2vy,
    btn_left, btn_right, btn_up, btn_down,
    clk,
    reset,
    p0x, p0y, p0m, p0vx, p0vy
  );

  particle #(
    .MASS(8),
    .INIT_X(6*16),
    .INIT_Y(10*16),
    .REST0(71),
    .REST1(2*16),
    .REST2(71),
    .PHASE_OFFSET(200)
  ) peripheral1(
    p0x, p0y, p0m, p0vx, p0vy,
    cx, cy, cm, cvx, cvy,    
    p2x, p2y, p2m, p2vx, p2vy,
    btn_left, btn_right, btn_up, btn_down,
    clk,
    reset,
    p1x, p1y, p1m, p1vx, p1vy
  );

  particle #(
    .MASS(8),
    .INIT_X(10*16),
    .INIT_Y(10*16),
    .REST0(71),
    .REST1(71),
    .REST2(2*16),
    .PHASE_OFFSET(300)
  ) peripheral2(
    p0x, p0y, p0m, p0vx, p0vy,
    p1x, p1y, p1m, p1vx, p1vy,
    cx, cy, cm, cvx, cvy,    
    btn_left, btn_right, btn_up, btn_down,
    clk,
    reset,
    p2x, p2y, p2m, p2vx, p2vy
  );

  // counter to rate limit matrix updates
  parameter WAIT_CYCLES = 10_000;
  logic [$clog2(WAIT_CYCLES+1):0] wait_idx;
  logic clear;
  Counter #($clog2(WAIT_CYCLES+1)+1) wait_time(clk, clear, wait_idx);
  assign clear = reset;

  //////////////////////////////
  // Matrix output logic (glow around particles)
  //////////////////////////////
  // always_comb begin
  //   next_matrix = 0;
  //   for (int y = 0; y < 16; y++) begin
  //     for (int x = 0; x < 16; x++) begin
  //       if (((x - (cx >> 4)) <= 2 && (x - (cx >> 4)) >= -2)
  //         && ((y - (cy >> 4)) <= 2 && (y - (cy >> 4)) >= -2)
  //         && ((x - (cx >> 4)) + (y - (cy >> 4)) <= 3)
  //         && ((x - (cx >> 4)) - (y - (cy >> 4)) <= 3)
  //         && ((y - (cy >> 4)) - (x - (cx >> 4)) <= 3)
  //         && ((x - (cx >> 4)) + (y - (cy >> 4)) >= -3)) begin
  //         next_matrix[y][x] = 1'b1;
  //       end
  //       else if (((x - (p0x >> 4)) <= 2 && (x - (p0x >> 4)) >= -2)
  //         && ((y - (p0y >> 4)) <= 2 && (y - (p0y >> 4)) >= -2)
  //         && ((x - (p0x >> 4)) + (y - (p0y >> 4)) <= 3)
  //         && ((x - (p0x >> 4)) - (y - (p0y >> 4)) <= 3)
  //         && ((y - (p0y >> 4)) - (x - (p0x >> 4)) <= 3)
  //         && ((x - (p0x >> 4)) + (y - (p0y >> 4)) >= -3)) begin
  //         next_matrix[y][x] = 1'b1;
  //       end
  //       else if (((x - (p1x >> 4)) <= 2 && (x - (p1x >> 4)) >= -2)
  //         && ((y - (p1y >> 4)) <= 2 && (y - (p1y >> 4)) >= -2)
  //         && ((x - (p1x >> 4)) + (y - (p1y >> 4)) <= 3)
  //         && ((x - (p1x >> 4)) - (y - (p1y >> 4)) <= 3)
  //         && ((y - (p1y >> 4)) - (x - (p1x >> 4)) <= 3)
  //         && ((x - (p1x >> 4)) + (y - (p1y >> 4)) >= -3)) begin
  //         next_matrix[y][x] = 1'b1;
  //       end
  //       else if (((x - (p1x >> 4)) <= 2 && (x - (p1x >> 4)) >= -2)
  //         && ((y - (p1y >> 4)) <= 2 && (y - (p1y >> 4)) >= -2)
  //         && ((x - (p1x >> 4)) + (y - (p1y >> 4)) <= 3)
  //         && ((x - (p1x >> 4)) - (y - (p1y >> 4)) <= 3)
  //         && ((y - (p1y >> 4)) - (x - (p1x >> 4)) <= 3)
  //         && ((x - (p1x >> 4)) + (y - (p1y >> 4)) >= -3)) begin
  //         next_matrix[y][x] = 1'b1;
  //       end
  //     end
  //   end
  // end

  always_ff @(posedge clk) begin
    if (reset)
      matrix <= 0;
    else begin
      if (wait_idx == (256 << 2)) begin
        matrix <= next_matrix;
        next_matrix <= 0;
      end
      // slightly pipelined to check one condition for one pixel per cycle
      if (wait_idx < (256 << 2)) begin
        // basically check if within radius 2
        int y = (wait_idx >> 4) & 15;
        int x = wait_idx & 15;
        // if ((dx <= 2 && dx >= -2) && (dy <= 2 && dy >= -2) && (dx + dy <= 3) && (dx - dy <= 3) && (dy - dx <= 3) && (dx + dy >= -3))
        case (wait_idx[9:8])
          0: begin
            if (((x - (cx >> 4)) <= 2 && (x - (cx >> 4)) >= -2)
              && ((y - (cy >> 4)) <= 2 && (y - (cy >> 4)) >= -2)
              && ((x - (cx >> 4)) + (y - (cy >> 4)) <= 3)
              && ((x - (cx >> 4)) - (y - (cy >> 4)) <= 3)
              && ((y - (cy >> 4)) - (x - (cx >> 4)) <= 3)
              && ((x - (cx >> 4)) + (y - (cy >> 4)) >= -3)) begin
              next_matrix[y][x] <= 1'b1;
            end
          end
          1: begin
            if (((x - (p0x >> 4)) <= 2 && (x - (p0x >> 4)) >= -2)
              && ((y - (p0y >> 4)) <= 2 && (y - (p0y >> 4)) >= -2)
              && ((x - (p0x >> 4)) + (y - (p0y >> 4)) <= 3)
              && ((x - (p0x >> 4)) - (y - (p0y >> 4)) <= 3)
              && ((y - (p0y >> 4)) - (x - (p0x >> 4)) <= 3)
              && ((x - (p0x >> 4)) + (y - (p0y >> 4)) >= -3)) begin
              next_matrix[y][x] <= 1'b1;
            end
          end
          2: begin
            if (((x - (p1x >> 4)) <= 2 && (x - (p1x >> 4)) >= -2)
              && ((y - (p1y >> 4)) <= 2 && (y - (p1y >> 4)) >= -2)
              && ((x - (p1x >> 4)) + (y - (p1y >> 4)) <= 3)
              && ((x - (p1x >> 4)) - (y - (p1y >> 4)) <= 3)
              && ((y - (p1y >> 4)) - (x - (p1x >> 4)) <= 3)
              && ((x - (p1x >> 4)) + (y - (p1y >> 4)) >= -3)) begin
              next_matrix[y][x] <= 1'b1;
            end
          end
          3: begin
            if (((x - (p1x >> 4)) <= 2 && (x - (p1x >> 4)) >= -2)
              && ((y - (p1y >> 4)) <= 2 && (y - (p1y >> 4)) >= -2)
              && ((x - (p1x >> 4)) + (y - (p1y >> 4)) <= 3)
              && ((x - (p1x >> 4)) - (y - (p1y >> 4)) <= 3)
              && ((y - (p1y >> 4)) - (x - (p1x >> 4)) <= 3)
              && ((x - (p1x >> 4)) + (y - (p1y >> 4)) >= -3)) begin
              next_matrix[y][x] <= 1'b1;
            end
          end
        endcase
      end
    end
  end

endmodule: physics
