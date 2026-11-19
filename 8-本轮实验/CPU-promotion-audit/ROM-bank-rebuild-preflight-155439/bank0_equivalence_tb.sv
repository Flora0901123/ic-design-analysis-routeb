
module tb;
 reg clk=0;
 reg [8:0] addr=0;
 wire [31:0] actual, expected;
 integer i;
 student_mini_cpu_rom_bank_00 dut(.sys_clk(clk), .address(addr), .data(actual));
 bank_reference ref_bank(.sys_clk(clk), .address(addr), .data(expected));
 initial begin
  for(i=0;i<512;i=i+1) begin
   addr=i; #5 clk=1; #1;
   if((^expected)===1'bx || actual!==expected) $fatal(1,"address %0d expected %h actual %h",i,expected,actual);
   #4 clk=0;
  end
  $display("PASS 512");
  $finish;
 end
endmodule
