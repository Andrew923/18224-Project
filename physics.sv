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
  shortint cx, cy, cm, cvx, cvy;
  shortint p0x, p0y, p0m, p0vx, p0vy;
  shortint p1x, p1y, p1m, p1vx, p1vy;
  shortint p2x, p2y, p2m, p2vx, p2vy;

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

  // generate radius checks for each point
  genvar yy, xx;
  logic [1023:0] valid;
  generate
    for (yy = 0; yy < 16; yy++) begin
      for (xx = 0; xx < 16; xx++) begin
        radius_check c(xx, yy, (cx >> 4), (cy >> 4), valid[(((yy << 4) + xx) << 2) + 0]);
        radius_check p0(xx, yy, (p0x >> 4), (p0y >> 4), valid[(((yy << 4) + xx) << 2) + 1]);
        radius_check p1(xx, yy, (p1x >> 4), (p1y >> 4), valid[(((yy << 4) + xx) << 2) + 2]);
        radius_check p2(xx, yy, (p2x >> 4), (p2y >> 4), valid[(((yy << 4) + xx) << 2) + 3]);
      end
    end
  endgenerate

  always_comb begin
    // check if within radius 2 to any particle
    for (shortint y = 0; y < 16; y++) begin
      for (shortint x = 0; x < 16; x++) begin
        next_matrix[y][x] = (valid[(((y << 4) + x) << 2) + 0]
                          || valid[(((y << 4) + x) << 2) + 1]
                          || valid[(((y << 4) + x) << 2) + 2]
                          || valid[(((y << 4) + x) << 2) + 3]);
      end
    end
    
  end

  always_ff @(posedge clk) begin
    if (reset)
      matrix <= 0;
    else begin
      if (wait_idx == 0)
        matrix <= next_matrix;
    end
  end

endmodule: physics
