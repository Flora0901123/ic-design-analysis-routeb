// Mini GPU physical boundary: two independent 512-bit ports, 26-bit addresses,
// 10-bit tags. Proves adapters only, not GPU core or DRAM implementation.
module student_mini_gpu_adapters_harness;
  (* gclk *) reg clk;
  reg past_valid=0;
  (* anyseq *) reg rst_n;
  always @(posedge clk) begin past_valid<=1; if(!past_valid) assume(!rst_n); end
  for(genvar port=1;port<2;port=port+1) begin: ports
    (* anyseq *) reg valid,rw,ready,response_valid,response_ready;
    (* anyseq *) reg [63:0] mask;
    (* anyseq *) reg [25:0] address;
    (* anyseq *) reg [511:0] data,response_data;
    (* anyseq *) reg [9:0] tag,response_tag;
    wire req_ready,req_valid,req_rw,rsp_ready,rsp_valid;
    wire [63:0] req_mask;
    wire [25:0] req_address;
    wire [511:0] req_data,rsp_data;
    wire [9:0] req_tag,rsp_tag;
    vortex_memory_adapter #(.ADDR_WIDTH(26),.DATA_WIDTH(512),.TAG_WIDTH(10)) memory_adapter (
      .clk_i(clk),.rst_ni(rst_n),.vx_req_valid_i(valid),.vx_req_ready_o(req_ready),
      .vx_req_rw_i(rw),.vx_req_byteen_i(mask),.vx_req_addr_i(address),.vx_req_data_i(data),.vx_req_tag_i(tag),
      .vx_rsp_valid_o(rsp_valid),.vx_rsp_ready_i(response_ready),.vx_rsp_data_o(rsp_data),.vx_rsp_tag_o(rsp_tag),
      .mem_req_valid_o(req_valid),.mem_req_ready_i(ready),.mem_req_rw_o(req_rw),.mem_req_byteen_o(req_mask),
      .mem_req_addr_o(req_address),.mem_req_data_o(req_data),.mem_req_tag_o(req_tag),
      .mem_rsp_valid_i(response_valid),.mem_rsp_ready_o(rsp_ready),.mem_rsp_data_i(response_data),.mem_rsp_tag_i(response_tag));
    always @(posedge clk) if(past_valid) begin
      assert(req_ready==(!req_valid || ready));assert(rsp_ready==(!rsp_valid || response_ready));
      if(!$past(rst_n)) begin assert(!req_valid);assert(!rsp_valid);end
      else begin
        if($past(req_ready)) begin
          assert(req_valid==$past(valid));
          if($past(valid)) assert({req_rw,req_mask,req_address,req_data,req_tag}==$past({rw,mask,address,data,tag}));
        end else begin
          assert(req_valid);assert({req_rw,req_mask,req_address,req_data,req_tag}==$past({req_rw,req_mask,req_address,req_data,req_tag}));
        end
        if($past(rsp_ready)) begin
          assert(rsp_valid==$past(response_valid));
          if($past(response_valid)) assert({rsp_data,rsp_tag}==$past({response_data,response_tag}));
        end else begin assert(rsp_valid);assert({rsp_data,rsp_tag}==$past({rsp_data,rsp_tag}));end
      end
      if(rst_n && $past(rst_n)) begin
        if($past(valid && !req_ready)) begin assume(valid);assume({rw,mask,address,data,tag}==$past({rw,mask,address,data,tag}));end
        if($past(response_valid && !rsp_ready)) begin assume(response_valid);assume({response_data,response_tag}==$past({response_data,response_tag}));end
      end
      cover(rst_n && req_valid && !ready);
      cover(rst_n && rsp_valid && !response_ready);
      cover(rst_n && req_valid && ready && valid && req_ready);
      cover(!rst_n && $past(rst_n && req_valid));
    end
  end
endmodule
