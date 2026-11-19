// New candidate. Single shared clock required. Low-phase latch; not edge-waveform equivalent.
module vortex_dp_80x64_w4(input wire clk0,csb0, input wire [3:0] wmask0, input wire [5:0] addr0,input wire [79:0] din0,input wire clk1,csb1,input wire [5:0] addr1,output reg [79:0] dout1);
parameter VERBOSE=0;
wire [3:0] mask=wmask0;
wire [3:0] write_en,collision;
wire [79:0] raw_data;
reg read_q;
reg [3:0] collision_q;
reg [79:0] bypass_data_q;
always @(posedge clk1) begin
 read_q <= !csb1;
 if(!csb1) begin collision_q <= collision; bypass_data_q <= din0; end
end
genvar s;
generate for(s=0;s<4;s=s+1) begin:g_slice
 assign write_en[s] = !csb0 && mask[s];
 assign collision[s] = !csb1 && write_en[s] && (addr0==addr1);
 // Never ask a raw SRAM to read and write the same word concurrently.
 routeb_new_1w1r_20x64 u_raw(.clk0(clk0),.csb0(!write_en[s]),.addr0(addr0),.din0(din0[s*20+:20]),
   .clk1(clk1),.csb1(csb1 || collision[s]),.addr1(addr1),.dout1(raw_data[s*20+:20]));
end endgenerate
integer k;
// Intentional low-level latch holds the output through idle/X phases of OpenRAM.
always @* if(!clk1 && read_q) begin
 for(k=0;k<4;k=k+1) dout1[k*20+:20] = collision_q[k] ? bypass_data_q[k*20+:20] : raw_data[k*20+:20];
end
endmodule

// New candidate. Single shared clock required. Low-phase latch; not edge-waveform equivalent.
module vortex_sp_32x256_w1(input wire clk0,csb0, input wire [7:0] addr0,input wire [31:0] din0,input wire clk1,csb1,input wire [7:0] addr1,output reg [31:0] dout1);
parameter VERBOSE=0;
wire [0:0] mask=1'b1;
wire [0:0] write_en,collision;
wire [31:0] raw_data;
reg read_q;
reg [0:0] collision_q;
reg [31:0] bypass_data_q;
always @(posedge clk1) begin
 read_q <= !csb1;
 if(!csb1) begin collision_q <= collision; bypass_data_q <= din0; end
end
genvar s;
generate for(s=0;s<1;s=s+1) begin:g_slice
 assign write_en[s] = !csb0 && mask[s];
 assign collision[s] = !csb1 && write_en[s] && (addr0==addr1);
 // Never ask a raw SRAM to read and write the same word concurrently.
 routeb_new_1w1r_32x256 u_raw(.clk0(clk0),.csb0(!write_en[s]),.addr0(addr0),.din0(din0[s*32+:32]),
   .clk1(clk1),.csb1(csb1 || collision[s]),.addr1(addr1),.dout1(raw_data[s*32+:32]));
end endgenerate
integer k;
// Intentional low-level latch holds the output through idle/X phases of OpenRAM.
always @* if(!clk1 && read_q) begin
 for(k=0;k<1;k=k+1) dout1[k*32+:32] = collision_q[k] ? bypass_data_q[k*32+:32] : raw_data[k*32+:32];
end
endmodule

// New candidate. Single shared clock required. Low-phase latch; not edge-waveform equivalent.
module vortex_sp_32x1024_w4(input wire clk0,csb0, input wire [3:0] wmask0, input wire [9:0] addr0,input wire [31:0] din0,input wire clk1,csb1,input wire [9:0] addr1,output reg [31:0] dout1);
parameter VERBOSE=0;
wire [3:0] mask=wmask0;
wire [3:0] write_en,collision;
wire [31:0] raw_data;
reg read_q;
reg [3:0] collision_q;
reg [31:0] bypass_data_q;
always @(posedge clk1) begin
 read_q <= !csb1;
 if(!csb1) begin collision_q <= collision; bypass_data_q <= din0; end
end
genvar s;
generate for(s=0;s<4;s=s+1) begin:g_slice
 assign write_en[s] = !csb0 && mask[s];
 assign collision[s] = !csb1 && write_en[s] && (addr0==addr1);
 // Never ask a raw SRAM to read and write the same word concurrently.
 routeb_new_1w1r_8x1024 u_raw(.clk0(clk0),.csb0(!write_en[s]),.addr0(addr0),.din0(din0[s*8+:8]),
   .clk1(clk1),.csb1(csb1 || collision[s]),.addr1(addr1),.dout1(raw_data[s*8+:8]));
end endgenerate
integer k;
// Intentional low-level latch holds the output through idle/X phases of OpenRAM.
always @* if(!clk1 && read_q) begin
 for(k=0;k<4;k=k+1) dout1[k*8+:8] = collision_q[k] ? bypass_data_q[k*8+:8] : raw_data[k*8+:8];
end
endmodule

// New candidate. Single shared clock required. Low-phase latch; not edge-waveform equivalent.
module vortex_sp_64x128_w8(input wire clk0,csb0, input wire [7:0] wmask0, input wire [6:0] addr0,input wire [63:0] din0,input wire clk1,csb1,input wire [6:0] addr1,output reg [63:0] dout1);
parameter VERBOSE=0;
wire [7:0] mask=wmask0;
wire [7:0] write_en,collision;
wire [63:0] raw_data;
reg read_q;
reg [7:0] collision_q;
reg [63:0] bypass_data_q;
always @(posedge clk1) begin
 read_q <= !csb1;
 if(!csb1) begin collision_q <= collision; bypass_data_q <= din0; end
end
genvar s;
generate for(s=0;s<8;s=s+1) begin:g_slice
 assign write_en[s] = !csb0 && mask[s];
 assign collision[s] = !csb1 && write_en[s] && (addr0==addr1);
 // Never ask a raw SRAM to read and write the same word concurrently.
 routeb_new_1w1r_8x128 u_raw(.clk0(clk0),.csb0(!write_en[s]),.addr0(addr0),.din0(din0[s*8+:8]),
   .clk1(clk1),.csb1(csb1 || collision[s]),.addr1(addr1),.dout1(raw_data[s*8+:8]));
end endgenerate
integer k;
// Intentional low-level latch holds the output through idle/X phases of OpenRAM.
always @* if(!clk1 && read_q) begin
 for(k=0;k<8;k=k+1) dout1[k*8+:8] = collision_q[k] ? bypass_data_q[k*8+:8] : raw_data[k*8+:8];
end
endmodule
