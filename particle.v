`default_nettype none
module particle (
	x0,
	y0,
	m0,
	vx0,
	vy0,
	x1,
	y1,
	m1,
	vx1,
	vy1,
	x2,
	y2,
	m2,
	vx2,
	vy2,
	btn_left,
	btn_right,
	btn_up,
	btn_down,
	clk,
	reset,
	x,
	y,
	m,
	vel_x,
	vel_y
);
	parameter MASS = 16;
	parameter INIT_X = 128;
	parameter INIT_Y = 128;
	parameter REST0 = 64;
	parameter REST1 = 64;
	parameter REST2 = 64;
	input wire signed [31:0] x0;
	input wire signed [31:0] y0;
	input wire signed [31:0] m0;
	input wire signed [31:0] vx0;
	input wire signed [31:0] vy0;
	input wire signed [31:0] x1;
	input wire signed [31:0] y1;
	input wire signed [31:0] m1;
	input wire signed [31:0] vx1;
	input wire signed [31:0] vy1;
	input wire signed [31:0] x2;
	input wire signed [31:0] y2;
	input wire signed [31:0] m2;
	input wire signed [31:0] vx2;
	input wire signed [31:0] vy2;
	input wire btn_left;
	input wire btn_right;
	input wire btn_up;
	input wire btn_down;
	input wire clk;
	input wire reset;
	output reg signed [31:0] x;
	output reg signed [31:0] y;
	output reg signed [31:0] m;
	output reg signed [31:0] vel_x;
	output reg signed [31:0] vel_y;
	parameter SPRING = 8;
	parameter DAMPING = 5;
	parameter TIME_STEP = 2;
	parameter FORCE_MAG = 32;
	reg signed [31:0] px;
	reg signed [31:0] py;
	reg signed [31:0] px_old;
	reg signed [31:0] py_old;
	reg signed [31:0] vx;
	reg signed [31:0] vy;
	reg signed [31:0] ax;
	reg signed [31:0] ay;
	reg signed [31:0] force_x;
	reg signed [31:0] force_y;
	reg signed [31:0] dx0;
	reg signed [31:0] dy0;
	reg signed [31:0] dx1;
	reg signed [31:0] dy1;
	reg signed [31:0] dx2;
	reg signed [31:0] dy2;
	reg signed [31:0] d0;
	reg signed [31:0] d1;
	reg signed [31:0] d2;
	reg signed [31:0] displace0;
	reg signed [31:0] displace1;
	reg signed [31:0] displace2;
	reg signed [31:0] rel_vel_x0;
	reg signed [31:0] rel_vel_x1;
	reg signed [31:0] rel_vel_x2;
	reg signed [31:0] rel_vel_y0;
	reg signed [31:0] rel_vel_y1;
	reg signed [31:0] rel_vel_y2;
	reg signed [31:0] damp0;
	reg signed [31:0] damp1;
	reg signed [31:0] damp2;
	parameter TOTAL_CYCLES = 1000000;
	wire [$clog2(TOTAL_CYCLES + 1):0] idx;
	wire clear;
	Counter #(.WIDTH($clog2(TOTAL_CYCLES + 1) + 1)) counter(
		.clock(clk),
		.clear(clear),
		.Q(idx)
	);
	assign clear = reset;
	always @(*) begin
		x = px;
		y = py;
		m = MASS;
		vel_x = vx;
		vel_y = vy;
	end
	always @(posedge clk)
		if (reset) begin
			px <= INIT_X;
			py <= INIT_Y;
			px_old <= INIT_X;
			py_old <= INIT_Y;
			vx <= 0;
			vy <= 0;
			ax <= 0;
			ay <= 0;
		end
		else
			case (idx)
				0:
					if (btn_left) begin
						force_x <= -FORCE_MAG;
						force_y <= 0;
					end
					else if (btn_right) begin
						force_x <= FORCE_MAG;
						force_y <= 0;
					end
					else if (btn_up) begin
						force_x <= 0;
						force_y <= FORCE_MAG;
					end
					else if (btn_down) begin
						force_x <= 0;
						force_y <= -FORCE_MAG;
					end
					else begin
						force_x <= 0;
						force_y <= 0;
					end
				1: begin
					ax <= force_x / MASS;
					ay <= force_y / MASS;
					px <= ((2 * px) - px_old) + ((ax * TIME_STEP) * TIME_STEP);
					py <= ((2 * py) - py_old) + ((ay * TIME_STEP) * TIME_STEP);
					px_old <= px;
					py_old <= py;
					vx <= (px - px_old) / TIME_STEP;
					vy <= (py - py_old) / TIME_STEP;
				end
				2: begin
					dx0 <= px - x0;
					dy0 <= py - y0;
				end
				3: d0 <= ((dx0 * dx0) + dy0) + dy0;
				4:
					if (d0 > 0) begin
						dx0 <= dx0 / d0;
						dy0 <= dy0 / d0;
						displace0 <= d0 - REST0;
						rel_vel_x0 <= vx - vx0;
						rel_vel_y0 <= vy - vy0;
					end
				5:
					if (d0 > 0)
						damp0 <= DAMPING * ((rel_vel_x0 * dx0) + (rel_vel_y0 * dy0));
				6:
					if (d0 > 0) begin
						ax <= ax + (((SPRING * displace0) + damp0) * dx0);
						ay <= ay + (((SPRING * displace0) + damp0) * dy0);
					end
				7: begin
					dx1 <= px - x1;
					dy1 <= py - y1;
				end
				8: d1 <= ((dx1 * dx1) + dy1) + dy1;
				9:
					if (d1 > 0) begin
						dx1 <= dx1 / d1;
						dy1 <= dy1 / d1;
						displace1 <= d1 - REST1;
						rel_vel_x1 <= vx - vx1;
						rel_vel_y1 <= vy - vy1;
					end
				10:
					if (d1 > 0)
						damp1 <= DAMPING * ((rel_vel_x1 * dx1) + (rel_vel_y1 * dy1));
				11:
					if (d1 > 0) begin
						ax <= ax + (((SPRING * displace1) + damp1) * dx1);
						ay <= ay + (((SPRING * displace1) + damp1) * dy1);
					end
				12: begin
					dx2 <= px - x2;
					dy2 <= py - y2;
				end
				13: d2 <= ((dx2 * dx2) + dy2) + dy2;
				14:
					if (d2 > 0) begin
						dx2 <= dx2 / d2;
						dy2 <= dy2 / d2;
						displace2 <= d2 - REST2;
						rel_vel_x2 <= vx - vx2;
						rel_vel_y2 <= vy - vy2;
					end
				15:
					if (d2 > 0)
						damp2 <= DAMPING * ((rel_vel_x2 * dx2) + (rel_vel_y2 * dy2));
				16:
					if (d2 > 0) begin
						ax <= ax + (((SPRING * displace2) + damp2) * dx2);
						ay <= ay + (((SPRING * displace2) + damp2) * dy2);
					end
				17:
					if (px < 0) begin
						px <= 0;
						vx <= vx * -8;
					end
				18:
					if (px >= 16) begin
						px <= 15;
						vx <= vx * -8;
					end
				19:
					if (py < 0) begin
						py <= 0;
						vy <= vy * -8;
					end
				20:
					if (py >= 16) begin
						py <= 15;
						vy <= vy * -8;
					end
			endcase
endmodule
