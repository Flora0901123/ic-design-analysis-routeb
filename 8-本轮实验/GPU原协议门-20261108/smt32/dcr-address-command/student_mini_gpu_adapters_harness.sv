// Mini GPU physical boundary: two independent 512-bit ports, 26-bit addresses,
// 10-bit tags. Proves adapters only, not GPU core or DRAM implementation.
module student_mini_gpu_adapters_harness;
  (* gclk *) reg clk;
  reg past_valid=0;
  (* anyseq *) reg rst_n;
  (* anyseq *) reg host_valid,host_rsp_ready,busy,dcr_rsp_valid;
  (* anyseq *) reg [1:0] host_kind;
  (* anyseq *) reg [11:0] host_addr;
  (* anyseq *) reg [31:0] host_data,dcr_rsp_data;
  wire host_ready,host_rsp_valid,host_error,dcr_valid,dcr_rw,start;
  wire [11:0] dcr_addr;
  wire [31:0] host_rsp_data,dcr_data;
  reg [1:0] phase=0;
  reg [31:0] expected_response=0;
  reg expected_error=0;
  vortex_command_adapter command_adapter (
    .clk_i(clk),.rst_ni(rst_n),.host_cmd_valid_i(host_valid),.host_cmd_ready_o(host_ready),
    .host_cmd_kind_i(host_kind),.host_cmd_addr_i(host_addr),.host_cmd_data_i(host_data),
    .host_rsp_valid_o(host_rsp_valid),.host_rsp_ready_i(host_rsp_ready),
    .host_rsp_data_o(host_rsp_data),.host_rsp_error_o(host_error),
    .dcr_req_valid_o(dcr_valid),.dcr_req_rw_o(dcr_rw),.dcr_req_addr_o(dcr_addr),
    .dcr_req_data_o(dcr_data),.dcr_rsp_valid_i(dcr_rsp_valid),.dcr_rsp_data_i(dcr_rsp_data),
    .start_o(start),.busy_i(busy));
  always @(posedge clk) begin
    past_valid<=1;
    if (!past_valid) assume(!rst_n);
    if (!rst_n) begin phase<=0;expected_response<=0;expected_error<=0;end
    else case(phase)
      0: if(host_valid && host_ready) begin
        expected_response<=0;expected_error<=host_kind==3;
        phase<=host_kind==1?1:2;
      end
      1: if(dcr_rsp_valid) begin expected_response<=dcr_rsp_data;phase<=2;end
      2: if(host_rsp_ready) phase<=0;
    endcase
    if (past_valid) begin
      assert(host_ready==(phase==0 && (host_kind!=2 || !busy)));
      assert(host_rsp_valid==(phase==2));
      if (host_rsp_valid) begin assert(host_rsp_data==expected_response);assert(host_error==expected_error);end
      if (!$past(rst_n)) begin assert(!host_rsp_valid);assert(!dcr_valid);assert(!start);end
      else begin
        assert(start==$past(host_valid && host_ready && host_kind==2));
        assert(dcr_valid==$past(host_valid && host_ready && host_kind<2));
        if(dcr_valid) begin
          assert(dcr_addr==$past(host_addr));assert(dcr_rw==$past(host_kind==0));
          assert(dcr_data==($past(host_kind)==0?$past(host_data):32'b0));
        end
      end
      if(rst_n && $past(rst_n && host_valid && !host_ready)) begin
        assume(host_valid);assume({host_kind,host_addr,host_data}==$past({host_kind,host_addr,host_data}));
      end
      cover(rst_n && host_rsp_valid && host_error);
      cover(rst_n && start);
      cover(rst_n && dcr_valid && !dcr_rw);
      cover(rst_n && host_rsp_valid && !host_rsp_ready);
    end
  end
endmodule
