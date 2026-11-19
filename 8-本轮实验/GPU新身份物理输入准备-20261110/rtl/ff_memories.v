// Functional SRAM reconstruction from logical 1r1w/mask contract.
// NOT an OpenRAM generated/characterized physical model; no PPA identity claimed.
module vortex_dp_80x64_w4(input wire clk0,csb0,input wire [3:0] wmask0, input wire[5:0] addr0,input wire[79:0] din0,input wire clk1,csb1,input wire[5:0] addr1,output reg[79:0] dout1);
parameter VERBOSE=0;
(* ram_style = "registers" *) reg[79:0] mem[0:63];
wire[3:0] mask=wmask0;
always @(posedge clk0)if(!csb0)for(integer i=0;i<4;i=i+1)if(mask[i])mem[addr0][i*20+:20]<=din0[i*20+:20];
always @(posedge clk1)if(!csb1)begin
 dout1<=mem[addr1];
 // Same-clock read/write collision: write-through only enabled slices.
 if(!csb0&&addr0==addr1)for(integer i=0;i<4;i=i+1)if(mask[i])dout1[i*20+:20]<=din0[i*20+:20];
end
endmodule

// Functional SRAM reconstruction from logical 1r1w/mask contract.
// NOT an OpenRAM generated/characterized physical model; no PPA identity claimed.
module vortex_sp_32x256_w1(input wire clk0,csb0, input wire[7:0] addr0,input wire[31:0] din0,input wire clk1,csb1,input wire[7:0] addr1,output reg[31:0] dout1);
parameter VERBOSE=0;
(* ram_style = "registers" *) reg[31:0] mem[0:255];
wire[0:0] mask=1'b1;
always @(posedge clk0)if(!csb0)for(integer i=0;i<1;i=i+1)if(mask[i])mem[addr0][i*32+:32]<=din0[i*32+:32];
always @(posedge clk1)if(!csb1)begin
 dout1<=mem[addr1];
 // Same-clock read/write collision: write-through only enabled slices.
 if(!csb0&&addr0==addr1)for(integer i=0;i<1;i=i+1)if(mask[i])dout1[i*32+:32]<=din0[i*32+:32];
end
endmodule

// Functional SRAM reconstruction from logical 1r1w/mask contract.
// NOT an OpenRAM generated/characterized physical model; no PPA identity claimed.
module vortex_sp_32x1024_w4(input wire clk0,csb0,input wire [3:0] wmask0, input wire[9:0] addr0,input wire[31:0] din0,input wire clk1,csb1,input wire[9:0] addr1,output reg[31:0] dout1);
parameter VERBOSE=0;
(* ram_style = "registers" *) reg[31:0] mem[0:1023];
wire[3:0] mask=wmask0;
always @(posedge clk0)if(!csb0)for(integer i=0;i<4;i=i+1)if(mask[i])mem[addr0][i*8+:8]<=din0[i*8+:8];
always @(posedge clk1)if(!csb1)begin
 dout1<=mem[addr1];
 // Same-clock read/write collision: write-through only enabled slices.
 if(!csb0&&addr0==addr1)for(integer i=0;i<4;i=i+1)if(mask[i])dout1[i*8+:8]<=din0[i*8+:8];
end
endmodule

// Functional SRAM reconstruction from logical 1r1w/mask contract.
// NOT an OpenRAM generated/characterized physical model; no PPA identity claimed.
module vortex_sp_64x128_w8(input wire clk0,csb0,input wire [7:0] wmask0, input wire[6:0] addr0,input wire[63:0] din0,input wire clk1,csb1,input wire[6:0] addr1,output reg[63:0] dout1);
parameter VERBOSE=0;
(* ram_style = "registers" *) reg[63:0] mem[0:127];
wire[7:0] mask=wmask0;
always @(posedge clk0)if(!csb0)for(integer i=0;i<8;i=i+1)if(mask[i])mem[addr0][i*8+:8]<=din0[i*8+:8];
always @(posedge clk1)if(!csb1)begin
 dout1<=mem[addr1];
 // Same-clock read/write collision: write-through only enabled slices.
 if(!csb0&&addr0==addr1)for(integer i=0;i<8;i=i+1)if(mask[i])dout1[i*8+:8]<=din0[i*8+:8];
end
endmodule
