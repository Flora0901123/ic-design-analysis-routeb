`timescale 1ns/1ps
module tb;
parameter integer READ_SETTLE_NS=1;
reg clk=0,csb0=1,csb1=1;
always #5 clk=~clk;
reg [6:0] wa,ra;
reg [63:0] data,expected,known;
reg [7:0] mask;
wire [63:0] dout;
integer fd,rc,n,we,re,expect_unknown;
vortex_sp_64x128_w8 dut(.clk0(clk),.csb0(csb0),.addr0(wa),.din0(data),.clk1(clk),.csb1(csb1),.addr1(ra),.dout1(dout),.wmask0(mask));
// 4-state simulator required. Only test stimulus writes initialize storage.
initial begin
 if(READ_SETTLE_NS<1 || READ_SETTLE_NS>4)$fatal(1,"Read settle must fit within low half-cycle");
 fd=$fopen("verification/vortex_sp_64x128_w8.vectors","r");if(!fd)$fatal(1,"vector file missing");n=0;
 while(!$feof(fd))begin
  rc=$fscanf(fd,"%d %d %d %d %h %h %h %h %d\n",we,re,wa,ra,data,mask,expected,known,expect_unknown);
  if(rc==9)begin
   csb0=!(we);csb1=!re;
   @(posedge clk);#1;
   if ((dout & known) !== (expected & known)) $fatal(1,"Known-bit mismatch at record %0d",n);
 if (expect_unknown && !$isunknown(dout)) $fatal(1,"Uninitialized state was forced known/zero at record %0d",n);
   @(negedge clk);#(READ_SETTLE_NS);
   
   n=n+1;
  end else if(rc!=-1)$fatal(1,"malformed vectors");
 end
 $display("PASS ff vortex_sp_64x128_w8: %0d records",n);$finish;
end
endmodule
