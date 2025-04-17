`default_nettype none

// module for General Counter
module Counter
    # (parameter WIDTH = 4)
    (input logic clock,
     input logic clear,
     output logic [WIDTH-1:0] Q);

    // synchronous clear
    always_ff @(posedge clock)
        if (clear) begin
            Q <= '0;
        end
        else begin
          Q <= Q + 1;
        end
endmodule : Counter

// changes on negedge (for SPI)
module Counter_neg
    # (parameter WIDTH = 4)
    (input logic clock,
     input logic clear,
     output logic [WIDTH-1:0] Q);

    // synchronous clear
    always_ff @(negedge clock)
        if (clear) begin
            Q <= '0;
        end
        else begin
          Q <= Q + 1;
        end
endmodule : Counter_neg

// async clear
module Counter_async
    # (parameter WIDTH = 4)
    (input logic clock,
     input logic clear,
     output logic [WIDTH-1:0] Q);

    // asynchronous clear
    always_ff @(posedge clear)
        Q <= '0;
    always_ff @(posedge clock)
        Q <= Q + 1;
endmodule : Counter_async

// edge detector
module edge_det
    (input logic signal,
     input logic clk,
     output logic edge_seen);

    logic old_signal;
    always_ff @(posedge clk)
        old_signal <= signal;

    assign edge_seen = ~old_signal & signal;
        
endmodule: edge_det

// checks if points in radius 2
module radius_check
    (input shortint x, y, x1, y1,
     output logic valid);

    shortint dx, dy;
    always_comb begin
        dx = x - x1;
        dy = y - y1;

        // hard code cases because this probably synthesizes
        // better than Euclidean distance
        valid = ((dx == 0 && dy == -2)
              || (dx == 0 && dy == -1)
              || (dx == 0 && dy == 0)
              || (dx == 0 && dy == 1)
              || (dx == 0 && dy == 2)
              || (dx == 1 && dy == -1)
              || (dx == 1 && dy == 0)
              || (dx == 1 && dy == 1)
              || (dx == -1 && dy == -1)
              || (dx == -1 && dy == 0)
              || (dx == -1 && dy == 1)
              || (dx == 2 && dy == 0)
              || (dx == -2 && dy == 0));
    end
    
endmodule: radius_check
