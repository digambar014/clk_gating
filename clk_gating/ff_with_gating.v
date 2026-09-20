module ff_with_gating (
    input clk,
    input rst,
    input d,
    input enable,
    output reg q
);

wire gated_clk;

assign gated_clk = clk & enable;

always @(posedge gated_clk) begin
    if (rst)
        q <= 0;
    else
        q <= d;
end

endmodule

