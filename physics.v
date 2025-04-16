`default_nettype none
module physics (
	data,
	clk,
	reset,
	btn_left,
	btn_right,
	btn_up,
	btn_down,
	matrix
);
	input wire [95:0] data;
	input wire clk;
	input wire reset;
	input wire btn_left;
	input wire btn_right;
	input wire btn_up;
	input wire btn_down;
	output reg [255:0] matrix;
	reg [255:0] next_matrix;
	wire signed [31:0] cx;
	wire signed [31:0] cy;
	wire signed [31:0] cm;
	wire signed [31:0] cvx;
	wire signed [31:0] cvy;
	wire signed [31:0] p0x;
	wire signed [31:0] p0y;
	wire signed [31:0] p0m;
	wire signed [31:0] p0vx;
	wire signed [31:0] p0vy;
	wire signed [31:0] p1x;
	wire signed [31:0] p1y;
	wire signed [31:0] p1m;
	wire signed [31:0] p1vx;
	wire signed [31:0] p1vy;
	wire signed [31:0] p2x;
	wire signed [31:0] p2y;
	wire signed [31:0] p2m;
	wire signed [31:0] p2vx;
	wire signed [31:0] p2vy;
	particle #(
		.MASS(16),
		.INIT_X(128),
		.INIT_Y(128),
		.REST0(32),
		.REST1(32),
		.REST2(32),
		.PHASE_OFFSET(0)
	) center(
		.x0(p0x),
		.y0(p0y),
		.m0(p0m),
		.vx0(p0vx),
		.vy0(p0vy),
		.x1(p1x),
		.y1(p1y),
		.m1(p1m),
		.vx1(p1vx),
		.vy1(p1vy),
		.x2(p2x),
		.y2(p2y),
		.m2(p2m),
		.vx2(p2vx),
		.vy2(p2vy),
		.btn_left(btn_left),
		.btn_right(btn_right),
		.btn_up(btn_up),
		.btn_down(btn_down),
		.clk(clk),
		.reset(reset),
		.x(cx),
		.y(cy),
		.m(cm),
		.vel_x(cvx),
		.vel_y(cvy)
	);
	particle #(
		.MASS(8),
		.INIT_X(128),
		.INIT_Y(96),
		.REST0(32),
		.REST1(71),
		.REST2(71),
		.PHASE_OFFSET(100)
	) peripheral0(
		.x0(cx),
		.y0(cy),
		.m0(cm),
		.vx0(cvx),
		.vy0(cvy),
		.x1(p1x),
		.y1(p1y),
		.m1(p1m),
		.vx1(p1vx),
		.vy1(p1vy),
		.x2(p2x),
		.y2(p2y),
		.m2(p2m),
		.vx2(p2vx),
		.vy2(p2vy),
		.btn_left(btn_left),
		.btn_right(btn_right),
		.btn_up(btn_up),
		.btn_down(btn_down),
		.clk(clk),
		.reset(reset),
		.x(p0x),
		.y(p0y),
		.m(p0m),
		.vel_x(p0vx),
		.vel_y(p0vy)
	);
	particle #(
		.MASS(8),
		.INIT_X(96),
		.INIT_Y(160),
		.REST0(71),
		.REST1(32),
		.REST2(71),
		.PHASE_OFFSET(200)
	) peripheral1(
		.x0(p0x),
		.y0(p0y),
		.m0(p0m),
		.vx0(p0vx),
		.vy0(p0vy),
		.x1(cx),
		.y1(cy),
		.m1(cm),
		.vx1(cvx),
		.vy1(cvy),
		.x2(p2x),
		.y2(p2y),
		.m2(p2m),
		.vx2(p2vx),
		.vy2(p2vy),
		.btn_left(btn_left),
		.btn_right(btn_right),
		.btn_up(btn_up),
		.btn_down(btn_down),
		.clk(clk),
		.reset(reset),
		.x(p1x),
		.y(p1y),
		.m(p1m),
		.vel_x(p1vx),
		.vel_y(p1vy)
	);
	particle #(
		.MASS(8),
		.INIT_X(160),
		.INIT_Y(160),
		.REST0(71),
		.REST1(71),
		.REST2(32),
		.PHASE_OFFSET(300)
	) peripheral2(
		.x0(p0x),
		.y0(p0y),
		.m0(p0m),
		.vx0(p0vx),
		.vy0(p0vy),
		.x1(p1x),
		.y1(p1y),
		.m1(p1m),
		.vx1(p1vx),
		.vy1(p1vy),
		.x2(cx),
		.y2(cy),
		.m2(cm),
		.vx2(cvx),
		.vy2(cvy),
		.btn_left(btn_left),
		.btn_right(btn_right),
		.btn_up(btn_up),
		.btn_down(btn_down),
		.clk(clk),
		.reset(reset),
		.x(p2x),
		.y(p2y),
		.m(p2m),
		.vel_x(p2vx),
		.vel_y(p2vy)
	);
	parameter WAIT_CYCLES = 10000;
	wire [$clog2(WAIT_CYCLES + 1):0] wait_idx;
	wire clear;
	Counter #(.WIDTH($clog2(WAIT_CYCLES + 1) + 1)) wait_time(
		.clock(clk),
		.clear(clear),
		.Q(wait_idx)
	);
	assign clear = reset;
	always @(posedge clk)
		if (reset)
			matrix <= 0;
		else begin
			if (wait_idx == 1024) begin
				matrix <= next_matrix;
				next_matrix <= 0;
			end
			if (wait_idx < 1024) begin : sv2v_autoblock_1
				reg signed [31:0] y;
				reg signed [31:0] x;
				y = wait_idx >> 4;
				x = wait_idx & 15;
				case (wait_idx[9:8])
					0:
						if ((((((((x - (cx >> 4)) <= 2) && ((x - (cx >> 4)) >= -2)) && (((y - (cy >> 4)) <= 2) && ((y - (cy >> 4)) >= -2))) && (((x - (cx >> 4)) + (y - (cy >> 4))) <= 3)) && (((x - (cx >> 4)) - (y - (cy >> 4))) <= 3)) && (((y - (cy >> 4)) - (x - (cx >> 4))) <= 3)) && (((x - (cx >> 4)) + (y - (cy >> 4))) >= -3))
							next_matrix[(y * 16) + x] <= 1'b1;
					1:
						if ((((((((x - (p0x >> 4)) <= 2) && ((x - (p0x >> 4)) >= -2)) && (((y - (p0y >> 4)) <= 2) && ((y - (p0y >> 4)) >= -2))) && (((x - (p0x >> 4)) + (y - (p0y >> 4))) <= 3)) && (((x - (p0x >> 4)) - (y - (p0y >> 4))) <= 3)) && (((y - (p0y >> 4)) - (x - (p0x >> 4))) <= 3)) && (((x - (p0x >> 4)) + (y - (p0y >> 4))) >= -3))
							next_matrix[(y * 16) + x] <= 1'b1;
					2:
						if ((((((((x - (p1x >> 4)) <= 2) && ((x - (p1x >> 4)) >= -2)) && (((y - (p1y >> 4)) <= 2) && ((y - (p1y >> 4)) >= -2))) && (((x - (p1x >> 4)) + (y - (p1y >> 4))) <= 3)) && (((x - (p1x >> 4)) - (y - (p1y >> 4))) <= 3)) && (((y - (p1y >> 4)) - (x - (p1x >> 4))) <= 3)) && (((x - (p1x >> 4)) + (y - (p1y >> 4))) >= -3))
							next_matrix[(y * 16) + x] <= 1'b1;
					3:
						if ((((((((x - (p1x >> 4)) <= 2) && ((x - (p1x >> 4)) >= -2)) && (((y - (p1y >> 4)) <= 2) && ((y - (p1y >> 4)) >= -2))) && (((x - (p1x >> 4)) + (y - (p1y >> 4))) <= 3)) && (((x - (p1x >> 4)) - (y - (p1y >> 4))) <= 3)) && (((y - (p1y >> 4)) - (x - (p1x >> 4))) <= 3)) && (((x - (p1x >> 4)) + (y - (p1y >> 4))) >= -3))
							next_matrix[(y * 16) + x] <= 1'b1;
				endcase
			end
		end
endmodule
