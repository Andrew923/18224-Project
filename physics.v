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
	parameter NUM_PARTICLES = 3;
	parameter MASS0 = 1.0;
	parameter MASS1 = 0.5;
	parameter SPRING = 0.5;
	parameter DAMPING = 0.3;
	parameter TIME_STEP = 0.2;
	parameter FORCE_MAG = 2.0;
	shortreal center_px;
	shortreal center_py;
	shortreal center_px_old;
	shortreal center_py_old;
	shortreal center_vx;
	shortreal center_vy;
	shortreal center_ax;
	shortreal center_ay;
	shortreal peripheral0_px;
	shortreal peripheral0_py;
	shortreal peripheral0_px_old;
	shortreal peripheral0_py_old;
	shortreal peripheral0_vx;
	shortreal peripheral0_vy;
	shortreal peripheral0_ax;
	shortreal peripheral0_ay;
	shortreal peripheral1_px;
	shortreal peripheral1_py;
	shortreal peripheral1_px_old;
	shortreal peripheral1_py_old;
	shortreal peripheral1_vx;
	shortreal peripheral1_vy;
	shortreal peripheral1_ax;
	shortreal peripheral1_ay;
	shortreal peripheral2_px;
	shortreal peripheral2_py;
	shortreal peripheral2_px_old;
	shortreal peripheral2_py_old;
	shortreal peripheral2_vx;
	shortreal peripheral2_vy;
	shortreal peripheral2_ax;
	shortreal peripheral2_ay;
	shortreal center_rest0;
	shortreal center_rest1;
	shortreal center_rest2;
	shortreal periph_rest0;
	shortreal periph_rest1;
	shortreal periph_rest2;
	shortreal force_x;
	shortreal force_y;
	always @(posedge clk)
		if (reset) begin
			center_px <= 8;
			center_py <= 8;
			center_px_old <= 8;
			center_py_old <= 8;
			center_vx <= 0;
			center_vy <= 0;
			center_ax <= 0;
			center_ay <= 0;
			peripheral0_px <= 8;
			peripheral0_py <= 6;
			peripheral0_px_old <= 8;
			peripheral0_py_old <= 6;
			peripheral0_vx <= 0;
			peripheral0_vy <= 0;
			peripheral0_ax <= 0;
			peripheral0_ay <= 0;
			peripheral1_px <= 6;
			peripheral1_py <= 10;
			peripheral1_px_old <= 6;
			peripheral1_py_old <= 10;
			peripheral1_vx <= 0;
			peripheral1_vy <= 0;
			peripheral1_ax <= 0;
			peripheral1_ay <= 0;
			peripheral2_px <= 10;
			peripheral2_py <= 10;
			peripheral2_px_old <= 10;
			peripheral2_py_old <= 10;
			peripheral2_vx <= 0;
			peripheral2_vy <= 0;
			peripheral2_ax <= 0;
			peripheral2_ay <= 0;
			center_rest0 <= 2;
			center_rest1 <= 2;
			center_rest2 <= 2;
			periph_rest0 <= 4.47;
			periph_rest1 <= 4;
			periph_rest2 <= 4.47;
		end
		else begin
			if (btn_left) begin
				force_x <= -FORCE_MAG;
				force_y <= 0.0;
			end
			else if (btn_right) begin
				force_x <= FORCE_MAG;
				force_y <= 0.0;
			end
			else if (btn_up) begin
				force_x <= 0.0;
				force_y <= FORCE_MAG;
			end
			else if (btn_down) begin
				force_x <= 0.0;
				force_y <= -FORCE_MAG;
			end
			else begin
				force_x <= 0.0;
				force_y <= 0.0;
			end
			center_ax <= force_x / MASS0;
			center_ay <= force_y / MASS0;
			center_px <= ((2 * center_px) - center_px_old) + ((center_ax * TIME_STEP) * TIME_STEP);
			center_py <= ((2 * center_py) - center_py_old) + ((center_ay * TIME_STEP) * TIME_STEP);
			center_px_old <= center_px;
			center_py_old <= center_py;
			center_vx <= (center_px - center_px_old) / TIME_STEP;
			center_vy <= (center_py - center_py_old) / TIME_STEP;
			peripheral0_ax = 0.0;
			peripheral0_ay = 0.0;
			peripheral1_ax = 0.0;
			peripheral1_ay = 0.0;
			peripheral2_ax = 0.0;
			peripheral2_ay = 0.0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < NUM_PARTICLES; i = i + 1)
					begin
						dir_x = center.px - (i == 0 ? peripheral0_px : (i == 1 ? peripheral1_px : peripheral2_px));
						dir_y = center.py - (i == 0 ? peripheral0_py : (i == 1 ? peripheral1_py : peripheral2_py));
						distance = $sqrt((dir_x * dir_x) + (dir_y * dir_y));
						if (distance > 0.0) begin
							dir_x = dir_x / distance;
							dir_y = dir_y / distance;
							displacement = distance - (i == 0 ? center_rest0 : (i == 1 ? center_rest1 : center_rest2));
							rel_vel_x = center.vx - (i == 0 ? peripheral0_vx : (i == 1 ? peripheral1_vx : peripheral2_vx));
							rel_vel_y = center.vy - (i == 0 ? peripheral0_vy : (i == 1 ? peripheral1_vy : peripheral2_vy));
							damping = DAMPING * ((rel_vel_x * dir_x) + (rel_vel_y * dir_y));
							force_x = ((SPRING * displacement) + damping) * dir_x;
							force_y = ((SPRING * displacement) + damping) * dir_y;
							if (i == 0) begin
								peripheral0_ax = periphal0_ax + force_x;
								peripheral0_ay = periphal0_ay + force_y;
							end
							else if (i == 1) begin
								peripheral1_ax = periphal1_ax + force_x;
								peripheral1_ay = periphal1_ay + force_y;
							end
							else if (i == 2) begin
								peripheral2_ax = periphal2_ax + force_x;
								peripheral2_ay = periphal2_ay + force_y;
							end
						end
					end
			end
			begin : sv2v_autoblock_2
				reg signed [31:0] i;
				for (i = 0; i < NUM_PARTICLES; i = i + 1)
					begin : sv2v_autoblock_3
						reg signed [31:0] j;
						j = (i + 1) % NUM_PARTICLES;
						dir_x = peripheral[i].px - peripheral[j].px;
						dir_y = peripheral[i].py - peripheral[j].py;
						distance = $sqrt((dir_x * dir_x) + (dir_y * dir_y));
						if (distance > 0.0) begin
							dir_x = dir_x / distance;
							dir_y = dir_y / distance;
							displacement = distance - (i == 0 ? periph_rest0 : (i == 1 ? periph_rest1 : periph_rest2));
							rel_vel_x = (i == 0 ? peripheral0_vx : (i == 1 ? peripheral1_vx : peripheral2_vx)) - (j == 0 ? peripheral0_vx : (j == 1 ? peripheral1_vx : peripheral2_vx));
							rel_vel_y = (i == 0 ? peripheral0_vy : (i == 1 ? peripheral1_vy : peripheral2_vy)) - (j == 0 ? peripheral0_vy : (j == 1 ? peripheral1_vy : peripheral2_vy));
							damping = DAMPING * ((rel_vel_x * dir_x) + (rel_vel_y * dir_y));
							spring_x = ((SPRING * displacement) + damping) * dir_x;
							spring_y = ((SPRING * displacement) + damping) * dir_y;
							if (i == 0) begin
								peripheral0_ax = periphal0_ax - spring_x;
								peripheral0_ay = periphal0_ay - spring_y;
							end
							else if (i == 1) begin
								peripheral1_ax = periphal1_ax - spring_x;
								peripheral1_ay = periphal1_ay - spring_y;
							end
							else if (i == 2) begin
								peripheral2_ax = periphal2_ax - spring_x;
								peripheral2_ay = periphal2_ay - spring_y;
							end
							if (j == 0) begin
								peripheral0_ax = periphal0_ax + spring_x;
								peripheral0_ay = periphal0_ay + spring_y;
							end
							else if (j == 1) begin
								peripheral1_ax = periphal1_ax + spring_x;
								peripheral1_ay = periphal1_ay + spring_y;
							end
							else if (j == 2) begin
								peripheral2_ax = periphal2_ax + spring_x;
								peripheral2_ay = periphal2_ay + spring_y;
							end
						end
					end
			end
			peripheral0_ax = force_x / MASS1;
			peripheral0_ay = force_y / MASS1;
			peripheral0_px <= ((2.0 * peripheral0_px) - peripheral0_px_old) + ((accel_x * TIME_STEP) * TIME_STEP);
			peripheral0_py <= ((2.0 * peripheral0_py) - peripheral0_py_old) + ((accel_y * TIME_STEP) * TIME_STEP);
			peripheral0_px_old <= peripheral0_px;
			peripheral0_py_old <= peripheral0_py;
			peripheral0_vx <= (peripheral0_px - peripheral0_px_old) / TIME_STEP;
			peripheral0_vy <= (peripheral0_py - peripheral0_py_old) / TIME_STEP;
			peripheral1_ax = force_x / MASS1;
			peripheral1_ay = force_y / MASS1;
			peripheral1_px <= ((2.0 * peripheral1_px) - peripheral1_px_old) + ((accel_x * TIME_STEP) * TIME_STEP);
			peripheral1_py <= ((2.0 * peripheral1_py) - peripheral1_py_old) + ((accel_y * TIME_STEP) * TIME_STEP);
			peripheral1_px_old <= peripheral1_px;
			peripheral1_py_old <= peripheral1_py;
			peripheral1_vx <= (peripheral1_px - peripheral1_px_old) / TIME_STEP;
			peripheral1_vy <= (peripheral1_py - peripheral1_py_old) / TIME_STEP;
			peripheral2_ax = force_x / MASS1;
			peripheral2_ay = force_y / MASS1;
			peripheral2_px <= ((2.0 * peripheral2_px) - peripheral2_px_old) + ((accel_x * TIME_STEP) * TIME_STEP);
			peripheral2_py <= ((2.0 * peripheral2_py) - peripheral2_py_old) + ((accel_y * TIME_STEP) * TIME_STEP);
			peripheral2_px_old <= peripheral2_px;
			peripheral2_py_old <= peripheral2_py;
			peripheral2_vx <= (peripheral2_px - peripheral2_px_old) / TIME_STEP;
			peripheral2_vy <= (peripheral2_py - peripheral2_py_old) / TIME_STEP;
			if (center_px < 0.0) begin
				center_px <= 0.0;
				center_vx <= -0.5 * center_vx;
			end
			else if (center_px >= 16.0) begin
				center_px <= 16.0 - 1e-9;
				center_vx <= -0.5 * center_vx;
			end
			if (center_py < 0.0) begin
				center_py <= 0.0;
				center_vy <= -0.5 * center_vy;
			end
			else if (center_py >= 16.0) begin
				center_py <= 16.0 - 1e-9;
				center_vy <= -0.5 * center_vy;
			end
			if (peripheral0_px < 0.0) begin
				peripheral0_px <= 0.0;
				peripheral0_vx <= -0.5 * peripheral0_vx;
			end
			else if (peripheral0_px >= 16.0) begin
				peripheral0_px <= 16.0 - 1e-9;
				peripheral0_vx <= -0.5 * peripheral0_vx;
			end
			if (peripheral0_py < 0.0) begin
				peripheral0_py <= 0.0;
				peripheral0_vy <= -0.5 * peripheral0_vy;
			end
			else if (peripheral0_py >= 16.0) begin
				peripheral0_py <= 16.0 - 1e-9;
				peripheral0_vy <= -0.5 * peripheral0_vy;
			end
			if (peripheral1_px < 0.0) begin
				peripheral1_px <= 0.0;
				peripheral1_vx <= -0.5 * peripheral1_vx;
			end
			else if (peripheral1_px >= 16.0) begin
				peripheral1_px <= 16.0 - 1e-9;
				peripheral1_vx <= -0.5 * peripheral1_vx;
			end
			if (peripheral1_py < 0.0) begin
				peripheral1_py <= 0.0;
				peripheral1_vy <= -0.5 * peripheral1_vy;
			end
			else if (peripheral1_py >= 16.0) begin
				peripheral1_py <= 16.0 - 1e-9;
				peripheral1_vy <= -0.5 * peripheral1_vy;
			end
			if (peripheral2_px < 0.0) begin
				peripheral2_px <= 0.0;
				peripheral2_vx <= -0.5 * peripheral2_vx;
			end
			else if (peripheral2_px >= 16.0) begin
				peripheral2_px <= 16.0 - 1e-9;
				peripheral2_vx <= -0.5 * peripheral2_vx;
			end
			if (peripheral2_py < 0.0) begin
				peripheral2_py <= 0.0;
				peripheral2_vy <= -0.5 * peripheral2_vy;
			end
			else if (peripheral2_py >= 16.0) begin
				peripheral2_py <= 16.0 - 1e-9;
				peripheral2_vy <= -0.5 * peripheral2_vy;
			end
		end
	always @(*) begin : sv2v_autoblock_4
		reg [0:1] _sv2v_jump;
		_sv2v_jump = 2'b00;
		matrix = 0;
		begin : sv2v_autoblock_5
			reg signed [31:0] y;
			begin : sv2v_autoblock_6
				reg signed [31:0] _sv2v_value_on_break;
				for (y = 0; y < 16; y = y + 1)
					if (_sv2v_jump < 2'b10) begin
						_sv2v_jump = 2'b00;
						begin : sv2v_autoblock_7
							reg signed [31:0] x;
							begin : sv2v_autoblock_8
								reg signed [31:0] _sv2v_value_on_break;
								reg [0:1] _sv2v_jump_1;
								_sv2v_jump_1 = _sv2v_jump;
								for (x = 0; x < 16; x = x + 1)
									if (_sv2v_jump < 2'b10) begin
										_sv2v_jump = 2'b00;
										dx = x - center_px;
										dy = y - center_py;
										dist_sq = (dx * dx) + (dy * dy);
										if (dist_sq <= 4) begin
											matrix[(y * 16) + x] = 1'b1;
											_sv2v_jump = 2'b01;
										end
										if (_sv2v_jump == 2'b00) begin : sv2v_autoblock_9
											reg signed [31:0] i;
											begin : sv2v_autoblock_10
												reg signed [31:0] _sv2v_value_on_break;
												reg [0:1] _sv2v_jump_2;
												_sv2v_jump_2 = _sv2v_jump;
												for (i = 0; i < NUM_PARTICLES; i = i + 1)
													if (_sv2v_jump < 2'b10) begin
														_sv2v_jump = 2'b00;
														dx = x - (i == 0 ? peripheral0_px : (i == 1 ? peripheral1_px : peripheral2_px));
														dy = y - (i == 0 ? peripheral0_py : (i == 1 ? peripheral1_py : peripheral2_py));
														dist_sq = (dx * dx) + (dy * dy);
														if (dist_sq <= 4) begin
															matrix[(y * 16) + x] = 1'b1;
															_sv2v_jump = 2'b10;
														end
														_sv2v_value_on_break = i;
													end
												if (!(_sv2v_jump < 2'b10))
													i = _sv2v_value_on_break;
												if (_sv2v_jump != 2'b11)
													_sv2v_jump = _sv2v_jump_2;
											end
										end
										_sv2v_value_on_break = x;
									end
								if (!(_sv2v_jump < 2'b10))
									x = _sv2v_value_on_break;
								if (_sv2v_jump != 2'b11)
									_sv2v_jump = _sv2v_jump_1;
							end
						end
						_sv2v_value_on_break = y;
					end
				if (!(_sv2v_jump < 2'b10))
					y = _sv2v_value_on_break;
				if (_sv2v_jump != 2'b11)
					_sv2v_jump = 2'b00;
			end
		end
	end
endmodule
