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

// module imu(
//   input logic reset,
//   input logic SDO, // Serial Data Output
//   input logic clk,
//   output logic SPC, // Serial Port Clock: 10 MHz (pg 14 of IMU datasheet)
//   output logic CS, // Chip Select: SPI enable when 0
//   output logic SDI, // Serial Data Input
//   output data_t curr_data);

//   // states are which set of 8 bit values we are on
//   enum logic [4:0] {START,
//                     CONFIG,
//                     WAIT,
//                     READ,
//                     OUTX_L_G,
//                     OUTX_H_G,
//                     OUTY_L_G,
//                     OUTY_H_G,
//                     OUTZ_L_G,
//                     OUTZ_H_G,
//                     OUTX_L_A,
//                     OUTX_H_A,
//                     OUTY_L_A,
//                     OUTY_H_A,
//                     OUTZ_L_A,
//                     OUTZ_H_A,
//                     DONE} curr_state, next_state;
//   data_t next_data;
  
//   // time in each state
//   logic [3:0] bit_idx;
//   logic clear1;
//   Counter #(4) bit_time(clk, clear1, bit_idx);
//   assign clear1 = bit_idx == 4'd8 || curr_state == WAIT;


//   // time in config state
//   logic [6:0] cfg_idx;
//   logic clear2;
//   Counter #(7) config_time(clk, clear2, cfg_idx);
//   assign clear2 = cfg_idx == 7'd80 || curr_state == START;

//   // time in waiting state
//   // 6.66kHz means we need to wait around 3003 cycles
//   logic [11:0] wait_idx;
//   logic clear3;
//   Counter #(12) wait_time(clk, clear3, wait_idx);
//   assign clear3 = wait_idx == 12'd3003 || curr_state == DONE;

//   // next state logic
//   always_comb begin
//     next_state = curr_state;
//     case (curr_state)
//       START: next_state = (bit_idx == 4'd1) ? CONFIG : START;
//       CONFIG: next_state = (cfg_idx == 7'd80) ? WAIT : CONFIG;
//       WAIT: next_state = (wait_idx == 12'd3003) ? READ : WAIT;
//       READ: next_state = (bit_idx == 4'd8) ? OUTX_L_G : READ;
//       OUTX_L_G: next_state = (bit_idx == 4'd8) ? OUTX_H_G : OUTX_L_G;
//       OUTX_H_G: next_state = (bit_idx == 4'd8) ? OUTY_L_G : OUTX_H_G;
//       OUTY_L_G: next_state = (bit_idx == 4'd8) ? OUTY_H_G : OUTY_L_G;
//       OUTY_H_G: next_state = (bit_idx == 4'd8) ? OUTZ_L_G : OUTY_H_G;
//       OUTZ_L_G: next_state = (bit_idx == 4'd8) ? OUTZ_H_G : OUTZ_L_G;
//       OUTZ_H_G: next_state = (bit_idx == 4'd8) ? OUTX_L_A : OUTZ_H_G;
//       OUTX_L_A: next_state = (bit_idx == 4'd8) ? OUTX_H_A : OUTX_L_A;
//       OUTX_H_A: next_state = (bit_idx == 4'd8) ? OUTY_L_A : OUTX_H_A;
//       OUTY_L_A: next_state = (bit_idx == 4'd8) ? OUTY_H_A : OUTY_L_A;
//       OUTY_H_A: next_state = (bit_idx == 4'd8) ? OUTZ_L_A : OUTY_H_A;
//       OUTZ_L_A: next_state = (bit_idx == 4'd8) ? OUTZ_H_A : OUTZ_L_A;
//       OUTZ_H_A: next_state = (bit_idx == 4'd8) ? DONE : OUTZ_H_A;
//       DONE: next_state = WAIT;
//     endcase
//   end

//   // output logic
//   always_comb begin
//     logic inactive = curr_state == START || curr_state == WAIT || curr_state == DONE;
//     CS = inactive;
//     SPC = inactive || clk;
//     SDI = 1'b0;

//     // read enable then AD[6:0] = 0x22
//     if (curr_state == READ) begin
//       case (bit_idx)
//         4'd0: SDI = 1'b0;
//         // 0x22
//         4'd1: SDI = 1'b1;
//         4'd2: SDI = 1'b0;
//         4'd3: SDI = 1'b1;
//         4'd4: SDI = 1'b0;
//         4'd5: SDI = 1'b0;
//         4'd6: SDI = 1'b0;
//         4'd7: SDI = 1'b1;
//         4'd8: SDI = 1'b0;
//       endcase
//     end

//     // Configuration steps:
//     // 1. DEVICE_CONF = 1 in CTRL9_XL (18h)
//     // 2. I2C_disable = 1 in CTRL4_C (13h)
//     // 3. ODR_XL = 1010 in CTRL1_XL (10h)
//     // 4. ODR_G = 1010 in CTRL2_G (11h)
//     if (curr_state == CONFIG) begin
//       case (cfg_idx)
//         7'd0: SDI = 1'b0;
//         // // CTRL1_XL (10h)
//         // 7'd1: SDI = 1'b0;
//         // 7'd2: SDI = 1'b0;
//         // 7'd3: SDI = 1'b0;
//         // 7'd4: SDI = 1'b1;
//         // 7'd5: SDI = 1'b0;
//         // 7'd6: SDI = 1'b0;
//         // 7'd7: SDI = 1'b0;
//         // 7'd8: SDI = 1'b0;
//         // WHO_AM_I
//         7'd1: SDI = 1'b0;
//         7'd2: SDI = 1'b0;
//         7'd3: SDI = 1'b0;
//         7'd4: SDI = 1'b0;
//         7'd5: SDI = 1'b1;
//         7'd6: SDI = 1'b1;
//         7'd7: SDI = 1'b1;
//         7'd8: SDI = 1'b1;
//         // CTRL1_XL = 1010_0000
//         7'd9: SDI = 1'b1;
//         7'd10: SDI = 1'b0;
//         7'd11: SDI = 1'b1;
//         7'd12: SDI = 1'b0;
//         7'd13: SDI = 1'b0;
//         7'd14: SDI = 1'b0;
//         7'd15: SDI = 1'b0;
//         7'd16: SDI = 1'b0;
//         // CTRL2_G = 1010_0000
//         7'd17: SDI = 1'b1;
//         7'd18: SDI = 1'b0;
//         7'd19: SDI = 1'b1;
//         7'd20: SDI = 1'b0;
//         7'd21: SDI = 1'b0;
//         7'd22: SDI = 1'b0;
//         7'd23: SDI = 1'b0;
//         7'd24: SDI = 1'b0;
//         // CTRL3_C = 0000_0100
//         7'd25: SDI = 1'b0;
//         7'd26: SDI = 1'b0;
//         7'd27: SDI = 1'b0;
//         7'd28: SDI = 1'b0;
//         7'd29: SDI = 1'b0;
//         7'd30: SDI = 1'b1;
//         7'd31: SDI = 1'b0;
//         7'd32: SDI = 1'b0;
//         // CTRL4_C = 0000_0100
//         7'd33: SDI = 1'b0;
//         7'd34: SDI = 1'b0;
//         7'd35: SDI = 1'b0;
//         7'd36: SDI = 1'b0;
//         7'd37: SDI = 1'b0;
//         7'd38: SDI = 1'b1;
//         7'd39: SDI = 1'b0;
//         7'd40: SDI = 1'b0;
//         // CTRL5_C = 0000_0000
//         7'd41: SDI = 1'b0;
//         7'd42: SDI = 1'b0;
//         7'd43: SDI = 1'b0;
//         7'd44: SDI = 1'b0;
//         7'd45: SDI = 1'b0;
//         7'd46: SDI = 1'b0;
//         7'd47: SDI = 1'b0;
//         7'd48: SDI = 1'b0;
//         // CTRL6_C = 0000_0000
//         7'd49: SDI = 1'b0;
//         7'd50: SDI = 1'b0;
//         7'd51: SDI = 1'b0;
//         7'd52: SDI = 1'b0;
//         7'd53: SDI = 1'b0;
//         7'd54: SDI = 1'b0;
//         7'd55: SDI = 1'b0;
//         7'd56: SDI = 1'b0;
//         // CTRL7_G = 0000_0000
//         7'd57: SDI = 1'b0;
//         7'd58: SDI = 1'b0;
//         7'd59: SDI = 1'b0;
//         7'd60: SDI = 1'b0;
//         7'd61: SDI = 1'b0;
//         7'd62: SDI = 1'b0;
//         7'd63: SDI = 1'b0;
//         7'd64: SDI = 1'b0;
//         // CTRL8_XL = 0000_0000
//         7'd65: SDI = 1'b0;
//         7'd66: SDI = 1'b0;
//         7'd67: SDI = 1'b0;
//         7'd68: SDI = 1'b0;
//         7'd69: SDI = 1'b0;
//         7'd70: SDI = 1'b0;
//         7'd71: SDI = 1'b0;
//         7'd72: SDI = 1'b0;
//         // CTRL9_XL = 1110_0010
//         7'd73: SDI = 1'b1;
//         7'd74: SDI = 1'b1;
//         7'd75: SDI = 1'b1;
//         7'd76: SDI = 1'b0;
//         7'd77: SDI = 1'b0;
//         7'd78: SDI = 1'b0;
//         7'd79: SDI = 1'b1;
//         7'd80: SDI = 1'b0;
//       endcase
//     end
//   end

//   // input logic (capture on rising edge)
//   always_ff @(posedge clk) begin
//     case(curr_state)
//       WAIT: next_data <= 96'd0;
//       OUTX_L_G: next_data.pitch[4'd8 - bit_idx] <= SDO;
//       OUTX_H_G: next_data.pitch[4'd16 - bit_idx] <= SDO;
//       OUTY_L_G: next_data.roll[4'd8 - bit_idx] <= SDO;
//       OUTY_H_G: next_data.roll[4'd16 - bit_idx] <= SDO;
//       OUTZ_L_G: next_data.yaw[4'd8 - bit_idx] <= SDO;
//       OUTZ_H_G: next_data.yaw[4'd16 - bit_idx] <= SDO;
//       OUTX_L_A: next_data.x[4'd8 - bit_idx] <= SDO;
//       OUTX_H_A: next_data.x[4'd16 - bit_idx] <= SDO;
//       OUTY_L_A: next_data.y[4'd8 - bit_idx] <= SDO;
//       OUTY_H_A: next_data.y[4'd16 - bit_idx] <= SDO;
//       OUTZ_L_A: next_data.z[4'd8 - bit_idx] <= SDO;
//       OUTZ_H_A: next_data.z[4'd16 - bit_idx] <= SDO;
//     endcase
//   end

//   // Note: "[SDI, SDO] lines are driven at the falling
//   // edge of SPC and should be captured at the rising
//   // edge of SPC"
//   always_ff @(posedge clk) begin
//     if (reset) begin
//       curr_state <= START;
//       curr_data <= 96'd0;
//     end
//     else begin
//       curr_state <= next_state;
//       if (next_state == DONE) curr_data <= next_data;
//     end
//   end
// endmodule: imu

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
