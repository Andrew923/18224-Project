`default_nettype none
// Overview:
// Initial states begin with configuration
// which requires SPI writes. Then, we
// continuously read fields in a loop.

// Struct to hold all relevant IMU data
// Addresses of data:
// - OUTX_L_G 0x22 1
// - OUTX_H_G 0x23 2
// - OUTY_L_G 0x24 3
// - OUTY_H_G 0x25 4
// - OUTZ_L_G 0x26 5
// - OUTZ_H_G 0x27 6
// - OUTX_L_A 0x28 7
// - OUTX_H_A 0x29 8
// - OUTY_L_A 0x2A 9
// - OUTY_H_A 0x2B 10
// - OUTZ_L_A 0x2C 11
// - OUTZ_H_A 0x2D 12
typedef struct packed {
  logic [15:0] pitch; // OUTX_{L, H}_G
  logic [15:0] roll; // OUTY_{L, H}_G
  logic [15:0] yaw; // OUTZ_{L, H}_G
  logic [15:0] x; // OUTX_{L, H}_A
  logic [15:0] y; // OUTY_{L, H}_A
  logic [15:0] z; // OUTZ_{L, H}_A
} data_t;

// usage internal spi module for each chunk of stuff to do
module imu(
  input logic reset,
  input logic SDO, // Serial Data Output
  input logic clk,
  output logic SPC, // Serial Port Clock: 10 MHz (pg 14 of IMU datasheet)
  output logic CS, // Chip Select: SPI enable when 0
  output logic SDI, // Serial Data Input
  output data_t curr_data);

  enum logic [4:0] {CTRL9_XL,
                    CTRL4_C,
                    CTRL2_G,
                    CTRL1_XL,
                    WAIT,
                    OUTX_L_G,
                    OUTX_H_G,
                    OUTY_L_G,
                    OUTY_H_G,
                    OUTZ_L_G,
                    OUTZ_H_G,
                    OUTX_L_A,
                    OUTX_H_A,
                    OUTY_L_A,
                    OUTY_H_A,
                    OUTZ_L_A,
                    OUTZ_H_A,
                    DONE} curr_state, next_state;
  data_t next_data;

  // internal spi module does the hard work
  logic [7:0] addr, wdata, rdata;
  logic read, enable, done;
  spi spi_internal(
    .addr(addr),
    .wdata(wdata),
    .read(read),
    .clk(clk),
    .enable(enable),
    .reset(reset),
    .SDO(SDO),
    .SPC(SPC),
    .CS(CS),
    .SDI(SDI),
    .rdata(rdata),
    .done(done));

  // interfacing with internal spi module
  always_ff @(posedge clk) begin
    enable <= (curr_state != WAIT && curr_state != DONE);
    read <= (curr_state != CTRL9_XL &&
            curr_state != CTRL4_C &&
            curr_state != CTRL2_G &&
            curr_state != CTRL1_XL);

    // addresses of registers from datasheet
    case (curr_state)
      CTRL9_XL: addr <= 8'h18;
      CTRL4_C: addr <= 8'h13;
      CTRL2_G: addr <= 8'h11;
      CTRL1_XL: addr <= 8'h10;
      OUTX_L_G: addr <= 8'h22;
      OUTX_H_G: addr <= 8'h23;
      OUTY_L_G: addr <= 8'h24;
      OUTY_H_G: addr <= 8'h25;
      OUTZ_L_G: addr <= 8'h26;
      OUTZ_H_G: addr <= 8'h27;
      OUTX_L_A: addr <= 8'h28;
      OUTX_H_A: addr <= 8'h29;
      OUTY_L_A: addr <= 8'h2A;
      OUTY_H_A: addr <= 8'h2B;
      OUTZ_L_A: addr <= 8'h1E;
      OUTZ_H_A: addr <= 8'h0F;
    endcase

    // writing states
    case (curr_state)
      CTRL9_XL: wdata <= 8'b1110_0010;
      CTRL4_C: wdata <= 8'b0000_0100;
      CTRL2_G: wdata <= 8'b0101_0000;
      CTRL1_XL: wdata <= 8'b0101_0000;
    endcase

  end

  always_ff @(posedge clk) begin
    // reading states
    case (curr_state)
      WAIT: next_data <= 96'd0;
      OUTX_L_G: if (rdata != 8'd0) next_data.pitch[7:0] <= rdata;
      OUTX_H_G: if (rdata != 8'd0) next_data.pitch[15:8] <= rdata;
      OUTY_L_G: if (rdata != 8'd0) next_data.roll[7:0] <= rdata;
      OUTY_H_G: if (rdata != 8'd0) next_data.roll[15:8] <= rdata;
      OUTZ_L_G: if (rdata != 8'd0) next_data.yaw[7:0] <= rdata;
      OUTZ_H_G: if (rdata != 8'd0) next_data.yaw[15:8] <= rdata;
      OUTX_L_A: if (rdata != 8'd0) next_data.x[7:0] <= rdata;
      OUTX_H_A: if (rdata != 8'd0) next_data.x[15:8] <= rdata;
      OUTY_L_A: if (rdata != 8'd0) next_data.y[7:0] <= rdata;
      OUTY_H_A: if (rdata != 8'd0) next_data.y[15:8] <= rdata;
      OUTZ_L_A: if (rdata != 8'd0) next_data.z[7:0] <= rdata;
      OUTZ_H_A: if (rdata != 8'd0) next_data.z[15:8] <= rdata;
    endcase
  end

  // counter to rate limit a bit and not overload imu
  // parameter WAIT_CYCLES = 3003;
  parameter WAIT_CYCLES = 1_000_000;
  logic [$clog2(WAIT_CYCLES+1):0] wait_idx;
  logic clear;
  Counter #($clog2(WAIT_CYCLES+1)+1) wait_time(clk, clear, wait_idx);
  assign clear = curr_state == OUTZ_H_A || curr_state == CTRL1_XL;

  // next state logic
  always_comb begin
    next_state = curr_state;
    case (curr_state)
      CTRL9_XL: next_state = (done) ? CTRL4_C : CTRL9_XL;
      CTRL4_C: next_state = (done) ? CTRL2_G : CTRL4_C;
      CTRL2_G: next_state = (done) ? CTRL1_XL: CTRL2_G;
      CTRL1_XL: next_state = (done) ? WAIT : CTRL1_XL;
      WAIT: next_state = (wait_idx == WAIT_CYCLES) ? OUTX_L_G : WAIT;
      OUTX_L_G: next_state = (done) ? OUTX_H_G : OUTX_L_G;
      OUTX_H_G: next_state = (done) ? OUTY_L_G : OUTX_H_G;
      OUTY_L_G: next_state = (done) ? OUTY_H_G : OUTY_L_G;
      OUTY_H_G: next_state = (done) ? OUTZ_L_G : OUTY_H_G;
      OUTZ_L_G: next_state = (done) ? OUTZ_H_G : OUTZ_L_G;
      OUTZ_H_G: next_state = (done) ? OUTX_L_A : OUTZ_H_G;
      OUTX_L_A: next_state = (done) ? OUTX_H_A : OUTX_L_A;
      OUTX_H_A: next_state = (done) ? OUTY_L_A : OUTX_H_A;
      OUTY_L_A: next_state = (done) ? OUTY_H_A : OUTY_L_A;
      OUTY_H_A: next_state = (done) ? OUTZ_L_A : OUTY_H_A;
      OUTZ_L_A: next_state = (done) ? OUTZ_H_A : OUTZ_L_A;
      OUTZ_H_A: next_state = (done) ? DONE : OUTZ_H_A;
      DONE: next_state = WAIT;
    endcase
  end

  always_ff @(posedge clk) begin
    if (reset) begin
      curr_state <= CTRL9_XL;
      curr_data <= 96'd0;
    end
    else begin
      curr_state <= next_state;
      if (next_state == DONE) curr_data <= next_data;
    end
  end

endmodule: imu
