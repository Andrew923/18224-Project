`default_nettype none
module imu (
	reset,
	SDO,
	clk,
	SPC,
	CS,
	SDI,
	curr_data
);
	input wire reset;
	input wire SDO;
	input wire clk;
	output wire SPC;
	output wire CS;
	output wire SDI;
	output reg [95:0] curr_data;
	reg [4:0] curr_state;
	reg [4:0] next_state;
	reg [95:0] next_data;
	reg [7:0] addr;
	reg [7:0] wdata;
	wire [7:0] rdata;
	reg read;
	reg enable;
	wire done;
	spi spi_internal(
		.addr(addr),
		.wdata(wdata),
		.read(read),
		.clk(clk),
		.enable(enable),
		.reset(reset),
		.SDO(SDO),
		.SPC(SPC),
		.CS(CS),
		.SDI(SDI),
		.rdata(rdata),
		.done(done)
	);
	wire next_enable;
	assign next_enable = ((curr_state != next_state) && (next_state != 5'd5)) && (next_state != 5'd18);
	always @(posedge clk) begin
		enable <= next_enable;
		read <= (((curr_state != 5'd1) && (curr_state != 5'd2)) && (curr_state != 5'd3)) && (curr_state != 5'd4);
		case (curr_state)
			5'd1: addr <= 8'h18;
			5'd2: addr <= 8'h13;
			5'd3: addr <= 8'h11;
			5'd4: addr <= 8'h10;
			5'd6: addr <= 8'h22;
			5'd7: addr <= 8'h23;
			5'd8: addr <= 8'h24;
			5'd9: addr <= 8'h25;
			5'd10: addr <= 8'h26;
			5'd11: addr <= 8'h27;
			5'd12: addr <= 8'h28;
			5'd13: addr <= 8'h29;
			5'd14: addr <= 8'h2a;
			5'd15: addr <= 8'h2b;
			5'd16: addr <= 8'h1e;
			5'd17: addr <= 8'h0f;
		endcase
		case (curr_state)
			5'd1: wdata <= 8'b11100010;
			5'd2: wdata <= 8'b00000100;
			5'd3: wdata <= 8'b01010000;
			5'd4: wdata <= 8'b01010000;
		endcase
	end
	always @(posedge clk)
		case (curr_state)
			5'd5: next_data <= 96'd0;
			5'd6: next_data[87:80] <= rdata;
			5'd7: next_data[95:88] <= rdata;
			5'd8: next_data[71:64] <= rdata;
			5'd9: next_data[79:72] <= rdata;
			5'd10: next_data[55:48] <= rdata;
			5'd11: next_data[63:56] <= rdata;
			5'd12: next_data[39:32] <= rdata;
			5'd13: next_data[47:40] <= rdata;
			5'd14: next_data[23:16] <= rdata;
			5'd15: next_data[31:24] <= rdata;
			5'd16: next_data[7:0] <= rdata;
			5'd17: next_data[15:8] <= rdata;
		endcase
	parameter WAIT_CYCLES = 1000000;
	wire [$clog2(WAIT_CYCLES + 1):0] wait_idx;
	wire clear;
	Counter #(.WIDTH($clog2(WAIT_CYCLES + 1) + 1)) wait_time(
		.clock(clk),
		.clear(clear),
		.Q(wait_idx)
	);
	assign clear = (curr_state == 5'd17) || (curr_state == 5'd4);
	parameter STATE_DELAY = 2;
	wire [$clog2(STATE_DELAY + 1):0] delay;
	wire clear2;
	Counter #(.WIDTH($clog2(STATE_DELAY + 1) + 1)) delay_time(
		.clock(clk),
		.clear(clear2),
		.Q(delay)
	);
	edge_det done_edge(
		.signal(done),
		.clk(clk),
		.edge_seen(clear2)
	);
	always @(*) begin
		next_state = curr_state;
		case (curr_state)
			5'd0: next_state = 5'd1;
			5'd1: next_state = (delay == STATE_DELAY ? 5'd2 : 5'd1);
			5'd2: next_state = (delay == STATE_DELAY ? 5'd3 : 5'd2);
			5'd3: next_state = (delay == STATE_DELAY ? 5'd4 : 5'd3);
			5'd4: next_state = (delay == STATE_DELAY ? 5'd5 : 5'd4);
			5'd5: next_state = (wait_idx == WAIT_CYCLES ? 5'd6 : 5'd5);
			5'd6: next_state = (delay == STATE_DELAY ? 5'd7 : 5'd6);
			5'd7: next_state = (delay == STATE_DELAY ? 5'd8 : 5'd7);
			5'd8: next_state = (delay == STATE_DELAY ? 5'd9 : 5'd8);
			5'd9: next_state = (delay == STATE_DELAY ? 5'd10 : 5'd9);
			5'd10: next_state = (delay == STATE_DELAY ? 5'd11 : 5'd10);
			5'd11: next_state = (delay == STATE_DELAY ? 5'd12 : 5'd11);
			5'd12: next_state = (delay == STATE_DELAY ? 5'd13 : 5'd12);
			5'd13: next_state = (delay == STATE_DELAY ? 5'd14 : 5'd13);
			5'd14: next_state = (delay == STATE_DELAY ? 5'd15 : 5'd14);
			5'd15: next_state = (delay == STATE_DELAY ? 5'd16 : 5'd15);
			5'd16: next_state = (delay == STATE_DELAY ? 5'd17 : 5'd16);
			5'd17: next_state = (delay == STATE_DELAY ? 5'd18 : 5'd17);
			5'd18: next_state = 5'd5;
		endcase
	end
	always @(posedge clk)
		if (reset) begin
			curr_state <= 5'd0;
			curr_data <= 96'd0;
		end
		else begin
			curr_state <= next_state;
			if (next_state == 5'd18)
				curr_data <= next_data;
		end
endmodule
