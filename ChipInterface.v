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
	reg clk10;
	wire [95:0] data;
	wire [255:0] matrix;
	ws2812 led_module(
		.clock(clk),
		.reset(reset),
		.imu_data(data),
		.matrix(matrix),
		.o_out(led_data)
	);
	reg toggle;
	always @(posedge clk) begin
		toggle <= ~toggle;
		if (toggle)
			clk10 <= ~clk10;
	end
	imu sensor(
		.reset(reset),
		.SDO(SDO),
		.clk(clk10),
		.CS(CS),
		.SPC(SPC),
		.SDI(SDI),
		.curr_data(data)
	);
	physics simulator(
		.data(data),
		.clk(clk),
		.reset(reset),
		.btn_left(btn_left),
		.btn_right(btn_right),
		.btn_up(btn_up),
		.btn_down(btn_down),
		.matrix(matrix)
	);
	always @(*) begin
		led = data[95:88];
		reset = ~rst_n;
	end
endmodule
