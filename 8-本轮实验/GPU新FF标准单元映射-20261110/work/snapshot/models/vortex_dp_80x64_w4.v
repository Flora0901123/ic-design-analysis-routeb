// Functional SRAM reconstruction from logical 1r1w/mask contract.
// NOT an OpenRAM generated/characterized physical model; no PPA identity claimed.
module vortex_dp_80x64_w4(input wire clk0,csb0,input wire [3:0] wmask0, input wire[5:0] addr0,input wire[79:0] din0,input wire clk1,csb1,input wire[5:0] addr1,output reg[79:0] dout1);
parameter VERBOSE=0;
reg[79:0] mem[0:63];
wire[3:0] mask=wmask0;
always @(posedge clk0)if(!csb0)for(integer i=0;i<4;i=i+1)if(mask[i])mem[addr0][i*20+:20]<=din0[i*20+:20];
always @(posedge clk1)if(!csb1)begin
 dout1<=mem[addr1];
 // Same-clock read/write collision: write-through only enabled slices.
 if(!csb0&&addr0==addr1)for(integer i=0;i<4;i=i+1)if(mask[i])dout1[i*20+:20]<=din0[i*20+:20];
end
endmodule
