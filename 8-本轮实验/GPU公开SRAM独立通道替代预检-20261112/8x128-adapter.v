module routeb_new_1w1r_8x128(
  input wire clk0, csb0, input wire [6:0] addr0,
  input wire [7:0] din0, input wire clk1, csb1,
  input wire [6:0] addr1, output wire [7:0] dout1
);
  wire [7:0] raw_read;
  assign dout1 = raw_read[7:0];
  sky130_sram_1kbyte_1rw1r_8x1024_8 mem (
    .clk0(clk0), .csb0(csb0), .web0(1'b0), .wmask0(1'b1),
    .addr0({3'b0, addr0}), .din0(din0), .dout0(),
    .clk1(clk1), .csb1(csb1), .addr1({3'b0, addr1}), .dout1(raw_read)
  );
endmodule
