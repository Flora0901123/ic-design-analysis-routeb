module routeb_new_1w1r_20x64(
  input wire clk0, csb0, input wire [5:0] addr0,
  input wire [19:0] din0, input wire clk1, csb1,
  input wire [5:0] addr1, output wire [19:0] dout1
);
  wire [31:0] raw_read;
  assign dout1 = raw_read[19:0];
  sky130_sram_1kbyte_1rw1r_32x256_8 mem (
    .clk0(clk0), .csb0(csb0), .web0(1'b0), .wmask0(4'b1111),
    .addr0({2'b0, addr0}), .din0({12'b0, din0}), .dout0(),
    .clk1(clk1), .csb1(csb1), .addr1({2'b0, addr1}), .dout1(raw_read)
  );
endmodule
