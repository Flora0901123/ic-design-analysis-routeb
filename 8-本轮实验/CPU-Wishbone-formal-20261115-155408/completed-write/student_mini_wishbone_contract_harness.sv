
module student_mini_wishbone_contract_harness(input wire clk);
  (* anyseq *) reg reset_n, request, wr, accept, reply;
  (* anyseq *) reg [29:0] address;
  (* anyseq *) reg [31:0] data, reply_data;
  wire ack, err, req_valid, req_write, rsp_ready;
  wire [7:0] req_address;
  wire [31:0] result, req_data;
  litex_wishbone_csr_bridge dut(
    .clk_i(clk), .rst_ni(reset_n), .wb_cyc_i(request), .wb_stb_i(request),
    .wb_we_i(wr), .wb_adr_i(address), .wb_dat_w_i(data), .wb_sel_i(4'hf),
    .wb_dat_r_o(result), .wb_ack_o(ack), .wb_err_o(err),
    .csr_req_valid_o(req_valid), .csr_req_ready_i(accept), .csr_write_o(req_write),
    .csr_addr_o(req_address), .csr_wdata_o(req_data), .csr_rsp_valid_i(reply),
    .csr_rsp_ready_o(rsp_ready), .csr_rdata_i(reply_data));
  reg seen = 0;
  reg pending = 0, transferred = 0, completed = 0;
  reg saved_wr;
  reg [29:0] saved_address;
  reg [31:0] saved_data, returned_data;
  reg blocked = 0, waiting_reply = 0, rebooted = 0;
  always @(posedge clk) begin
    seen <= 1;
    if (!seen) assume(!reset_n);
    if (!reset_n) begin
      if (pending) rebooted <= 1;
      pending <= 0;
      transferred <= 0;
      assert(!(ack && saved_wr));
      completed <= 0;
      blocked <= 0;
      waiting_reply <= 0;
    end else begin
      if (seen) begin
        assume(!err);
        assume(req_valid == (pending && !transferred));
        assume(rsp_ready == (pending && transferred));
        assume(ack == completed);
        if (req_valid) begin
          assume(req_write == saved_wr);
          assume(req_address == (saved_address[5:0])*4);
          assume(req_data == saved_data);
        end
        if (ack) assume(result == returned_data);
        if (pending || completed) begin
          assume(request);
          assume({wr,address,data} == {saved_wr,saved_address,saved_data});
        end
      end
      assert(!(ack && saved_wr));
      completed <= 0;
      if (!pending && !completed && request) begin
        pending <= 1;
        saved_wr <= wr;
        saved_address <= address;
        saved_data <= data;
      end
      if (pending && !transferred && !accept) blocked <= 1;
      if (pending && !transferred && accept) transferred <= 1;
      if (pending && transferred && !reply) waiting_reply <= 1;
      if (pending && transferred && reply) begin
        pending <= 0;
        transferred <= 0;
        completed <= 1;
        returned_data <= reply_data;
      end




    end
  end
endmodule
