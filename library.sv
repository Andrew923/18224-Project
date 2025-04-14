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
    always_ff @(posedge clock, posedge clear)
        if (clear) begin
            Q <= '0;
        end
        else begin
          Q <= Q + 1;
        end
endmodule : Counter_async
