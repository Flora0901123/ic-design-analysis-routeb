module mem_contract(input clk);
(* anyseq *) reg rst,clear,iv,rw,rr,ov,err,ordy;
(* anyseq *) reg[63:0] mask;
(* anyseq *) reg[25:0] addr;
(* anyseq *) reg[511:0] data,rdata;
(* anyseq *) reg[9:0] tag,rtag;
wire ready,mv,mrw,sv,mready,fault;wire[63:0] mmask;wire[25:0] ma;wire[511:0] md,sd;wire[9:0] mt,st;
gpu_fault_memory_adapter #(.ADDR_WIDTH(26),.DATA_WIDTH(512),.TAG_WIDTH(10)) dut(.clk_i(clk),.rst_ni(rst),.clear_fault_i(clear),.bus_fault_o(fault),.vx_req_valid_i(iv),.vx_req_ready_o(ready),.vx_req_rw_i(rw),.vx_req_byteen_i(mask),.vx_req_addr_i(addr),.vx_req_data_i(data),.vx_req_tag_i(tag),.vx_rsp_valid_o(sv),.vx_rsp_ready_i(ordy),.vx_rsp_data_o(sd),.vx_rsp_tag_o(st),.mem_req_valid_o(mv),.mem_req_ready_i(rr),.mem_req_rw_o(mrw),.mem_req_byteen_o(mmask),.mem_req_addr_o(ma),.mem_req_data_o(md),.mem_req_tag_o(mt),.mem_rsp_valid_i(ov),.mem_rsp_error_i(err),.mem_rsp_ready_o(mready),.mem_rsp_data_i(rdata),.mem_rsp_tag_i(rtag));
reg past_valid=0;
always @(posedge clk) begin
 past_valid<=1;
 if(!past_valid) assume(!rst);
 if(past_valid) begin
  if(!$past(rst)) begin assert(!mv);assert(!sv);assert(!fault);end
  else begin
   if($past(mv&&!rr)) begin assert(mv);assert({mrw,mmask,ma,md,mt}==$past({mrw,mmask,ma,md,mt}));end
   if($past(ready)) begin assert(mv==$past(iv));if($past(iv))assert({mrw,mmask,ma,md,mt}==$past({rw,mask,addr,data,tag}));end
   if($past(sv&&!ordy)) begin assert(sv);assert({sd,st}==$past({sd,st}));end
   if($past(mready))begin assert(sv==$past(ov));if($past(ov))assert({sd,st}==$past({rdata,rtag}));end
   if($past(ov&&mready&&err))assert(fault);
   else if($past(clear))assert(!fault);
   else assert(fault==$past(fault));
  end
 end
 assert(ready==(!mv||rr));assert(mready==(!sv||ordy));
end
endmodule

module cmd_contract(input clk);
(* anyseq *) reg rst,valid,hostready,dvalid,busy,fault;
(* anyseq *) reg[1:0] kind;
(* anyseq *) reg[11:0] addr;
(* anyseq *) reg[31:0] data,ddata;
wire ready,hv,he,dv,dr,start;wire[31:0] hd,dd;wire[11:0] da;
gpu_status_command_adapter dut(.clk_i(clk),.rst_ni(rst),.host_cmd_valid_i(valid),.host_cmd_ready_o(ready),.host_cmd_kind_i(kind),.host_cmd_addr_i(addr),.host_cmd_data_i(data),.host_rsp_valid_o(hv),.host_rsp_ready_i(hostready),.host_rsp_data_o(hd),.host_rsp_error_o(he),.dcr_req_valid_o(dv),.dcr_req_rw_o(dr),.dcr_req_addr_o(da),.dcr_req_data_o(dd),.dcr_rsp_valid_i(dvalid),.dcr_rsp_data_i(ddata),.start_o(start),.busy_i(busy),.bus_fault_i(fault));
wire accept=valid&&ready;
reg pv=0,ppv=0;
always @(posedge clk)begin
 pv<=1;ppv<=pv;
 if(!pv)assume(!rst);
 if(pv)begin
  if(!$past(rst))begin assert(!hv&&!dv&&!start);end
  else begin
   if($past(hv&&!hostready))begin assert(hv);assert({hd,he}==$past({hd,he}));end
   assert(start==$past(accept&&kind==2));
   if($past(accept&&kind==0))begin assert(dv&&dr);assert({da,dd}==$past({addr,data}));assert(hv&&!he&&hd==0);end
   if($past(accept&&kind==1&&addr!=12'hfff))begin assert(dv&&!dr);assert(da==$past(addr));assert(!hv);end
   if($past(accept&&kind==1&&addr==12'hfff))begin assert(!dv&&!start&&!hv);end
   if($past(accept&&kind==2))begin assert(hv&&!he&&hd==0);end
   if($past(accept&&kind==3))begin assert(hv&&he);end
   if(ppv&&$past(rst,2)&&$past(accept&&kind==1&&addr==12'hfff,2))begin assert(hv&&!he);assert(hd=={30'b0,$past(busy,2),$past(fault,2)});end
  end
 end
 if(kind==2&&busy)assert(!ready);
end
endmodule
