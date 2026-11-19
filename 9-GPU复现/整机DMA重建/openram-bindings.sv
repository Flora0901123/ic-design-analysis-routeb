// Generated from a hash-bound Vortex SRAM plan.  Do not hand-edit.
module VX_sp_ram_asic #(
    parameter DATAW = 1,
    parameter SIZE  = 1,
    parameter WRENW = 1,
    parameter ADDRW = $clog2(SIZE)
) (
    input wire               clk,
    input wire               reset,
    input wire               read,
    input wire               write,
    input wire [WRENW-1:0]   wren,
    input wire [ADDRW-1:0]   addr,
    input wire [DATAW-1:0]   wdata,
    output wire [DATAW-1:0]  rdata
);
  wire [DATAW-1:0] macro_rdata;
  reg read_seen_q;

  always @(posedge clk) begin
    if (reset) read_seen_q <= 1'b0;
    else if (read) read_seen_q <= 1'b1;
  end
  assign rdata = (reset || !read_seen_q) ? {DATAW{1'b0}} : macro_rdata;

  generate
    if (DATAW == 32 && SIZE == 256 && WRENW == 1) begin : g_vortex_sp_32x256_w1
      vortex_sp_32x256_w1 u_macro (
        .clk0(clk), .csb0(~(write && |wren)),
        .addr0(addr), .din0(wdata),
        .clk1(clk), .csb1(~read), .addr1(addr), .dout1(macro_rdata)
      );
    end else
    if (DATAW == 32 && SIZE == 1024 && WRENW == 4) begin : g_vortex_sp_32x1024_w4
      vortex_sp_32x1024_w4 u_macro (
        .clk0(clk), .csb0(~(write && |wren)),
        .wmask0(wren),
        .addr0(addr), .din0(wdata),
        .clk1(clk), .csb1(~read), .addr1(addr), .dout1(macro_rdata)
      );
    end else
    if (DATAW == 64 && SIZE == 128 && WRENW == 8) begin : g_vortex_sp_64x128_w8
      vortex_sp_64x128_w8 u_macro (
        .clk0(clk), .csb0(~(write && |wren)),
        .wmask0(wren),
        .addr0(addr), .din0(wdata),
        .clk1(clk), .csb1(~read), .addr1(addr), .dout1(macro_rdata)
      );
    end else begin : g_unsupported_shape
      // The hierarchy enumerator rejects this branch before physical build.
      assign macro_rdata = {DATAW{1'bx}};
    end
  endgenerate
endmodule

// Generated from a hash-bound Vortex SRAM plan.  Do not hand-edit.
module VX_dp_ram_asic #(
    parameter DATAW = 1,
    parameter SIZE  = 1,
    parameter WRENW = 1,
    parameter ADDRW = $clog2(SIZE)
) (
    input wire               clk,
    input wire               reset,
    input wire               read,
    input wire               write,
    input wire [WRENW-1:0]   wren,
    input wire [ADDRW-1:0]   waddr,
    input wire [DATAW-1:0]   wdata,
    input wire [ADDRW-1:0]   raddr,
    output wire [DATAW-1:0]  rdata
);
  wire [DATAW-1:0] macro_rdata;
  reg read_seen_q;

  always @(posedge clk) begin
    if (reset) read_seen_q <= 1'b0;
    else if (read) read_seen_q <= 1'b1;
  end
  assign rdata = (reset || !read_seen_q) ? {DATAW{1'b0}} : macro_rdata;

  generate
    if (DATAW == 80 && SIZE == 64 && WRENW == 4) begin : g_vortex_dp_80x64_w4
      vortex_dp_80x64_w4 u_macro (
        .clk0(clk), .csb0(~(write && |wren)),
        .wmask0(wren),
        .addr0(waddr), .din0(wdata),
        .clk1(clk), .csb1(~read), .addr1(raddr), .dout1(macro_rdata)
      );
    end else begin : g_unsupported_shape
      // The hierarchy enumerator rejects this branch before physical build.
      assign macro_rdata = {DATAW{1'bx}};
    end
  endgenerate
endmodule
