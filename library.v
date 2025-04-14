`default_nettype none
module Counter (
	clock,
	clear,
	Q
);
	parameter WIDTH = 4;
	input wire clock;
	input wire clear;
	output reg [WIDTH - 1:0] Q;
	always @(posedge clock)
		if (clear)
			Q <= 1'sb0;
		else
			Q <= Q + 1;
endmodule
module Counter_neg (
	clock,
	clear,
	Q
);
	parameter WIDTH = 4;
	input wire clock;
	input wire clear;
	output reg [WIDTH - 1:0] Q;
	always @(negedge clock)
		if (clear)
			Q <= 1'sb0;
		else
			Q <= Q + 1;
endmodule
module Counter_async (
	clock,
	clear,
	Q
);
	parameter WIDTH = 4;
	input wire clock;
	input wire clear;
	output reg [WIDTH - 1:0] Q;
	always @(posedge clock or posedge clear)
		if (clear)
			Q <= 1'sb0;
		else
			Q <= Q + 1;
endmodule
