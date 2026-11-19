// Functional SRAM reconstruction from logical 1r1w/mask contract.
// NOT an OpenRAM generated/characterized physical model; no PPA identity claimed.
module vortex_sp_32x256_w1(input wire clk0,csb0, input wire[7:0] addr0,input wire[31:0] din0,input wire clk1,csb1,input wire[7:0] addr1,output reg[31:0] dout1);
parameter VERBOSE=0;
reg[31:0] mem[0:255];
wire[0:0] mask=1'b1;
always @(posedge clk0)if(!csb0)for(integer i=0;i<1;i=i+1)if(mask[i])mem[addr0][i*32+:32]<=din0[i*32+:32];
always @(posedge clk1)if(!csb1)begin
 dout1<=mem[addr1];
 // Same-clock read/write collision: write-through only enabled slices.
 if(!csb0&&addr0==addr1)for(integer i=0;i<1;i=i+1)if(mask[i])dout1[i*32+:32]<=din0[i*32+:32];
end
endmodule
