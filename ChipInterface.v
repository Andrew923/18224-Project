`default_nettype none
module ChipInterface (
	led_data,
	led,
	SDI,
	SPC,
	CS,
	SDO,
	btn_left,
	btn_right,
	btn_up,
	btn_down,
	rst_n,
	clk
);
	output wire led_data;
	output reg [7:0] led;
	output wire SDI;
	output wire SPC;
	output wire CS;
	input wire SDO;
	input wire btn_left;
	input wire btn_right;
	input wire btn_up;
	input wire btn_down;
	input wire rst_n;
	input wire clk;
	reg reset;
	wire locked;
	wire clk10;
	wire [95:0] data;
	ws2812_demo led_module(
		.clock(clk),
		.reset(reset),
		.imu_data(data),
		.o_out(led_data)
	);
	pll spc_clock(
		.clk(clk),
		.clk10(clk10),
		.locked(locked)
	);
	imu sensor(
		.reset(reset),
		.SDO(SDO),
		.clk(clk10),
		.CS(CS),
		.SPC(SPC),
		.SDI(SDI),
		.curr_data(data)
	);
	always @(*) begin
		led = data[95:88];
		reset = ~locked || ~rst_n;
	end
endmodule
