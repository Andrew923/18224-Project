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
	parameter PHASE_OFFSET = 0;
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
				PHASE_OFFSET + 0:
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
				PHASE_OFFSET + 1: ax <= force_x / MASS;
				PHASE_OFFSET + 2: ay <= force_y / MASS;
				PHASE_OFFSET + 3: px <= ((2 * px) - px_old) + ((ax * TIME_STEP) * TIME_STEP);
				PHASE_OFFSET + 4: py <= ((2 * py) - py_old) + ((ay * TIME_STEP) * TIME_STEP);
				PHASE_OFFSET + 5: px_old <= px;
				PHASE_OFFSET + 6: py_old <= py;
				PHASE_OFFSET + 7: vx <= (px - px_old) / TIME_STEP;
				PHASE_OFFSET + 8: vy <= (py - py_old) / TIME_STEP;
				PHASE_OFFSET + 9: dx0 <= px - x0;
				PHASE_OFFSET + 10: dy0 <= py - y0;
				PHASE_OFFSET + 11: d0 <= ((dx0 * dx0) + dy0) + dy0;
				PHASE_OFFSET + 12:
					if (d0 > 0)
						dx0 <= dx0 / d0;
				PHASE_OFFSET + 13:
					if (d0 > 0)
						dy0 <= dy0 / d0;
				PHASE_OFFSET + 14:
					if (d0 > 0)
						displace0 <= d0 - REST0;
				PHASE_OFFSET + 15:
					if (d0 > 0)
						rel_vel_x0 <= vx - vx0;
				PHASE_OFFSET + 16:
					if (d0 > 0)
						rel_vel_y0 <= vy - vy0;
				PHASE_OFFSET + 17:
					if (d0 > 0)
						damp0 <= DAMPING * ((rel_vel_x0 * dx0) + (rel_vel_y0 * dy0));
				PHASE_OFFSET + 18:
					if (d0 > 0)
						ax <= ax + (((SPRING * displace0) + damp0) * dx0);
				PHASE_OFFSET + 19:
					if (d0 > 0)
						ay <= ay + (((SPRING * displace0) + damp0) * dy0);
				PHASE_OFFSET + 20: dx1 <= px - x1;
				PHASE_OFFSET + 21: dy1 <= py - y1;
				PHASE_OFFSET + 22: d1 <= ((dx1 * dx1) + dy1) + dy1;
				PHASE_OFFSET + 23:
					if (d1 > 0)
						dx1 <= dx1 / d1;
				PHASE_OFFSET + 24:
					if (d1 > 0)
						dy1 <= dy1 / d1;
				PHASE_OFFSET + 25:
					if (d1 > 0)
						displace1 <= d1 - REST1;
				PHASE_OFFSET + 26:
					if (d1 > 0)
						rel_vel_x1 <= vx - vx1;
				PHASE_OFFSET + 27:
					if (d1 > 0)
						rel_vel_y1 <= vy - vy1;
				PHASE_OFFSET + 28:
					if (d1 > 0)
						damp1 <= DAMPING * ((rel_vel_x1 * dx1) + (rel_vel_y1 * dy1));
				PHASE_OFFSET + 29:
					if (d1 > 0)
						ax <= ax + (((SPRING * displace1) + damp1) * dx1);
				PHASE_OFFSET + 30:
					if (d1 > 0)
						ay <= ay + (((SPRING * displace1) + damp1) * dy1);
				PHASE_OFFSET + 31: dx2 <= px - x2;
				PHASE_OFFSET + 32: dy2 <= py - y2;
				PHASE_OFFSET + 33: d2 <= ((dx2 * dx2) + dy2) + dy2;
				PHASE_OFFSET + 34:
					if (d2 > 0)
						dx2 <= dx2 / d2;
				PHASE_OFFSET + 35:
					if (d2 > 0)
						dy2 <= dy2 / d2;
				PHASE_OFFSET + 36:
					if (d2 > 0)
						displace2 <= d2 - REST2;
				PHASE_OFFSET + 37:
					if (d2 > 0)
						rel_vel_x2 <= vx - vx2;
				PHASE_OFFSET + 38:
					if (d2 > 0)
						rel_vel_y2 <= vy - vy2;
				PHASE_OFFSET + 39:
					if (d2 > 0)
						damp2 <= DAMPING * ((rel_vel_x2 * dx2) + (rel_vel_y2 * dy2));
				PHASE_OFFSET + 40:
					if (d2 > 0)
						ax <= ax + (((SPRING * displace2) + damp2) * dx2);
				PHASE_OFFSET + 41:
					if (d2 > 0)
						ay <= ay + (((SPRING * displace2) + damp2) * dy2);
				PHASE_OFFSET + 42:
					if (px < 0) begin
						px <= 0;
						vx <= vx * -8;
					end
				PHASE_OFFSET + 43:
					if (px >= 16) begin
						px <= 15;
						vx <= vx * -8;
					end
				PHASE_OFFSET + 44:
					if (py < 0) begin
						py <= 0;
						vy <= vy * -8;
					end
				PHASE_OFFSET + 45:
					if (py >= 16) begin
						py <= 15;
						vy <= vy * -8;
					end
			endcase
endmodule
