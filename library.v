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
	always @(posedge clear) Q <= 1'sb0;
	always @(posedge clock) Q <= Q + 1;
endmodule
module edge_det (
	signal,
	clk,
	edge_seen
);
	input wire signal;
	input wire clk;
	output wire edge_seen;
	reg old_signal;
	always @(posedge clk) old_signal <= signal;
	assign edge_seen = ~old_signal & signal;
endmodule
