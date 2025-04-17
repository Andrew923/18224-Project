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
	wire signed [15:0] cx;
	wire signed [15:0] cy;
	wire signed [15:0] cm;
	wire signed [15:0] cvx;
	wire signed [15:0] cvy;
	wire signed [15:0] p0x;
	wire signed [15:0] p0y;
	wire signed [15:0] p0m;
	wire signed [15:0] p0vx;
	wire signed [15:0] p0vy;
	wire signed [15:0] p1x;
	wire signed [15:0] p1y;
	wire signed [15:0] p1m;
	wire signed [15:0] p1vx;
	wire signed [15:0] p1vy;
	wire signed [15:0] p2x;
	wire signed [15:0] p2y;
	wire signed [15:0] p2m;
	wire signed [15:0] p2vx;
	wire signed [15:0] p2vy;
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
	genvar yy;
	genvar xx;
	wire [1023:0] valid;
	generate
		for (yy = 0; yy < 16; yy = yy + 1) begin : genblk1
			for (xx = 0; xx < 16; xx = xx + 1) begin : genblk1
				radius_check c(
					.x(xx),
					.y(yy),
					.x1(cx >> 4),
					.y1(cy >> 4),
					.valid(valid[(((yy << 4) + xx) << 2) + 0])
				);
				radius_check p0(
					.x(xx),
					.y(yy),
					.x1(p0x >> 4),
					.y1(p0y >> 4),
					.valid(valid[(((yy << 4) + xx) << 2) + 1])
				);
				radius_check p1(
					.x(xx),
					.y(yy),
					.x1(p1x >> 4),
					.y1(p1y >> 4),
					.valid(valid[(((yy << 4) + xx) << 2) + 2])
				);
				radius_check p2(
					.x(xx),
					.y(yy),
					.x1(p2x >> 4),
					.y1(p2y >> 4),
					.valid(valid[(((yy << 4) + xx) << 2) + 3])
				);
			end
		end
	endgenerate
	always @(*) begin : sv2v_autoblock_1
		reg signed [15:0] y;
		for (y = 0; y < 16; y = y + 1)
			begin : sv2v_autoblock_2
				reg signed [15:0] x;
				for (x = 0; x < 16; x = x + 1)
					next_matrix[(y * 16) + x] = ((valid[(((y << 4) + x) << 2) + 0] || valid[(((y << 4) + x) << 2) + 1]) || valid[(((y << 4) + x) << 2) + 2]) || valid[(((y << 4) + x) << 2) + 3];
			end
	end
	always @(posedge clk)
		if (reset)
			matrix <= 0;
		else if (wait_idx == 0)
			matrix <= next_matrix;
endmodule
