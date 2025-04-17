`default_nettype none

module ChipInterface
  (output logic led_data,
   output logic [7:0] led,
   output logic SDI, // Serial Data Input
   output logic SPC, // Serial Port Clock: 10 MHz (pg 14 of IMU datasheet)
   output logic CS, // Chip Select: SPI enable when 0
   input logic SDO,
   input logic btn_left, btn_right,
   input logic btn_up, btn_down,
   input logic rst_n, clk);

  logic reset;
  data_t data;
  logic matrix[15:0][15:0];

  ws2812 led_module(
    .clock(clk),
    .reset(reset),
    .imu_data(data),
    .matrix(matrix),
    .o_out(led_data));
  imu_multi sensor(
    .reset(reset),
    .SDO(SDO),
    .clk(clk), // pll no longer needed b/c clock division in module
    .CS(CS),
    .SPC(SPC),
    .SDI(SDI),
    .curr_data(data));
  physics simulator(
    .data(data),
    .clk(clk),
    .reset(reset),
    .btn_left(btn_left),
    .btn_right(btn_right),
    .btn_up(btn_up),
    .btn_down(btn_down),
    .matrix(matrix));

  always_comb begin
    led = data[7:0];
    reset = ~rst_n;
  end
endmodule: ChipInterface
