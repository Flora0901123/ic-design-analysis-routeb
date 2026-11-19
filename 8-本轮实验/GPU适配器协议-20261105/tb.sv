module tb;
 logic clk=0,rst=0;always #5 clk=~clk;
 logic [1:0] rv,mready,sv,sready,mv,merror,mr,vr,vready,fault;
 logic [1:0] rw,mrw;
 logic [63:0] be[2],mbe[2];logic [25:0] addr[2],ma[2];logic [511:0] data[2],md[2],rd[2],vd[2];logic [9:0] tag[2],mt[2],rt[2],vt[2];
 logic cv=0,cr,hv,hr=1,he,dv,dr,ds=0,start,busy=0;logic [1:0] kind=0;logic[11:0] ca=0,da;logic[31:0] cd=0,hd,dd,sd=0;
 integer checks=0,stalls=0,holds=0,resets=0,reqs=0,rsps=0,starts=0;
 for(genvar p=0;p<2;p++)begin
 gpu_fault_memory_adapter #(.ADDR_WIDTH(26),.DATA_WIDTH(512),.TAG_WIDTH(10)) mem(.clk_i(clk),.rst_ni(rst),.clear_fault_i(start),.bus_fault_o(fault[p]),.vx_req_valid_i(rv[p]),.vx_req_ready_o(vready[p]),.vx_req_rw_i(rw[p]),.vx_req_byteen_i(be[p]),.vx_req_addr_i(addr[p]),.vx_req_data_i(data[p]),.vx_req_tag_i(tag[p]),.vx_rsp_valid_o(vr[p]),.vx_rsp_ready_i(sready[p]),.vx_rsp_data_o(vd[p]),.vx_rsp_tag_o(vt[p]),.mem_req_valid_o(mv[p]),.mem_req_ready_i(mready[p]),.mem_req_rw_o(mrw[p]),.mem_req_byteen_o(mbe[p]),.mem_req_addr_o(ma[p]),.mem_req_data_o(md[p]),.mem_req_tag_o(mt[p]),.mem_rsp_valid_i(sv[p]),.mem_rsp_error_i(merror[p]),.mem_rsp_ready_o(mr[p]),.mem_rsp_data_i(rd[p]),.mem_rsp_tag_i(rt[p]));
 end
 gpu_status_command_adapter cmd(.clk_i(clk),.rst_ni(rst),.host_cmd_valid_i(cv),.host_cmd_ready_o(cr),.host_cmd_kind_i(kind),.host_cmd_addr_i(ca),.host_cmd_data_i(cd),.host_rsp_valid_o(hv),.host_rsp_ready_i(hr),.host_rsp_data_o(hd),.host_rsp_error_o(he),.dcr_req_valid_o(dv),.dcr_req_rw_o(dr),.dcr_req_addr_o(da),.dcr_req_data_o(dd),.dcr_rsp_valid_i(ds),.dcr_rsp_data_i(sd),.start_o(start),.busy_i(busy),.bus_fault_i(|fault));
 task tick; @(posedge clk);#1; endtask
 task reset_all;
 @(negedge clk);rst=0;rv=0;sv=0;cv=0;hr=1;mready=0;sready=0;ds=0;busy=0;tick();tick();
 @(negedge clk);rst=1;tick();assert(!hv && vr==0 && mv==0 && fault==0)else $fatal(1,"reset did not flush state");resets++;
 endtask
 task status_read(input integer value,input integer hold_cycles);
 @(negedge clk);kind=1;ca=12'hfff;cv=1;hr=0;assert(cr)else $fatal(1,"status not ready");tick();@(negedge clk);cv=0;tick();assert(hv && hd==value && !he && !dv)else $fatal(1,"status response mismatch %x expected %x",hd,value);
 repeat(hold_cycles)begin tick();assert(hv && hd==value && !he)else $fatal(1,"host response changed under hold");holds++;end
 @(negedge clk);hr=1;tick();assert(!hv)else $fatal(1,"duplicate host completion");rsps++;
 endtask
 task launch;
 @(negedge clk);kind=2;cv=1;hr=0;busy=1;#1;assert(!cr)else $fatal(1,"accepted START while busy");repeat(3)begin tick();assert(!start && !hv)else $fatal(1,"spurious busy START");end
 @(negedge clk);busy=0;#1;assert(cr)else $fatal(1,"start not ready");tick();assert(start && hv)else $fatal(1,"start missing");starts++;
 @(negedge clk);cv=0;hr=1;tick();assert(!hv && !start)else $fatal(1,"duplicate start response");
 endtask
 task transfer(input integer port,input integer seed,input integer delay_cycles,input integer err);
 logic[511:0] expected_data;logic[9:0] expected_tag;logic[25:0] expected_addr;
 expected_data={16{32'h516b0000+seed}};expected_tag=10'(seed*3+port);expected_addr=err?26'h3800000:26'(seed+17);
 @(negedge clk);rv[port]=1;rw[port]=0;addr[port]=expected_addr;data[port]=expected_data;be[port]='1;tag[port]=expected_tag;mready[port]=0;tick();assert(mv[port])else $fatal(1,"request missing");reqs++;
 @(negedge clk);rv[port]=0;data[port]=~expected_data;addr[port]=0;tag[port]=0;
 repeat(delay_cycles)begin tick();assert(mv[port] && ma[port]==expected_addr && md[port]==expected_data && mt[port]==expected_tag && mbe[port]=='1 && !mrw[port])else $fatal(1,"request changed during backpressure");stalls++;end
 @(negedge clk);mready[port]=1;tick();assert(!mv[port])else $fatal(1,"duplicate request");
 @(negedge clk);sv[port]=1;merror[port]=err;rd[port]=expected_data;rt[port]=expected_tag;sready[port]=0;tick();assert(vr[port] && vd[port]==expected_data && vt[port]==expected_tag)else $fatal(1,"response payload mismatch");
 @(negedge clk);sv[port]=0;rd[port]=~expected_data;rt[port]=0;
 repeat(delay_cycles+1)begin tick();assert(vr[port] && vd[port]==expected_data && vt[port]==expected_tag && !mr[port])else $fatal(1,"memory response unstable");stalls++;end
 @(negedge clk);sready[port]=1;tick();assert(!vr[port])else $fatal(1,"duplicate memory response");
 if(err)begin assert(fault[port])else $fatal(1,"error not sticky");tick();assert(fault[port])else $fatal(1,"error lost");end
 endtask
 task check_case(input integer ordinal,input integer seed,input integer mode,input integer prob,input integer hold_cycles,input integer reset_reissue);
 integer delay_cycles;
 reset_all();delay_cycles=prob>0?1+(seed%7):0;
 for(integer p=0;p<2;p++)transfer(p,seed,delay_cycles,mode==30);
 status_read(mode==30?1:0,hold_cycles);
 if(reset_reissue)begin
  @(negedge clk);rv=3;sv=3;cv=1;kind=1;ca='1;hr=0;busy=1;tick();
  reset_all();repeat(4)begin tick();assert(!hv && !start && mv==0 && vr==0)else $fatal(1,"spurious post-reset completion");end
 end
 launch();assert(fault==0)else $fatal(1,"new launch did not clear sticky fault");
 transfer(0,seed+100,delay_cycles,0);status_read(0,hold_cycles);
 checks++;$display("ADAPTER_CASE ordinal=%0d seed=%0d mode=%0d req_stall_setting=%0d host_hold_setting=%0d reset_setting=%0d status=PASS scope=ADAPTER_ONLY",ordinal,seed,mode,delay_cycles,hold_cycles,reset_reissue);
 endtask
 initial begin
 for(integer p=0;p<2;p++)begin rw[p]=0;be[p]=0;addr[p]=0;data[p]=0;tag[p]=0;rd[p]=0;rt[p]=0;end
 rv=0;sv=0;sready=0;mready=0;merror=0;
check_case(290,1,30,0,0,0);
check_case(291,2,30,0,0,0);
check_case(292,3,30,0,0,0);
check_case(293,4,30,0,0,0);
check_case(294,5,30,0,0,0);
check_case(295,6,30,0,0,0);
check_case(296,7,30,0,0,0);
check_case(297,8,30,0,0,0);
check_case(298,9,30,0,0,0);
check_case(299,10,30,0,0,0);
check_case(300,1,31,1,0,0);
check_case(301,2,31,1,0,0);
check_case(302,3,31,1,0,0);
check_case(303,4,31,1,0,0);
check_case(304,5,31,1,0,0);
check_case(305,6,31,1,0,0);
check_case(306,7,31,1,0,0);
check_case(307,8,31,1,0,0);
check_case(308,9,31,1,0,0);
check_case(309,10,31,1,0,0);
check_case(310,1,32,0,17,0);
check_case(311,2,32,0,17,0);
check_case(312,3,32,0,17,0);
check_case(313,4,32,0,17,0);
check_case(314,5,32,0,17,0);
check_case(315,6,32,0,17,0);
check_case(316,7,32,0,17,0);
check_case(317,8,32,0,17,0);
check_case(318,9,32,0,17,0);
check_case(319,10,32,0,17,0);
check_case(320,1,33,0,0,1);
check_case(321,2,33,0,0,1);
check_case(322,3,33,0,0,1);
check_case(323,4,33,0,0,1);
check_case(324,5,33,0,0,1);
check_case(325,6,33,0,0,1);
check_case(326,7,33,0,0,1);
check_case(327,8,33,0,0,1);
check_case(328,9,33,0,0,1);
check_case(329,10,33,0,0,1);
check_case(620,1,30,0,0,0);
check_case(621,2,30,0,0,0);
check_case(622,3,30,0,0,0);
check_case(623,4,30,0,0,0);
check_case(624,5,30,0,0,0);
check_case(625,6,30,0,0,0);
check_case(626,7,30,0,0,0);
check_case(627,8,30,0,0,0);
check_case(628,9,30,0,0,0);
check_case(629,10,30,0,0,0);
check_case(630,1,31,1,0,0);
check_case(631,2,31,1,0,0);
check_case(632,3,31,1,0,0);
check_case(633,4,31,1,0,0);
check_case(634,5,31,1,0,0);
check_case(635,6,31,1,0,0);
check_case(636,7,31,1,0,0);
check_case(637,8,31,1,0,0);
check_case(638,9,31,1,0,0);
check_case(639,10,31,1,0,0);
check_case(640,1,32,0,17,0);
check_case(641,2,32,0,17,0);
check_case(642,3,32,0,17,0);
check_case(643,4,32,0,17,0);
check_case(644,5,32,0,17,0);
check_case(645,6,32,0,17,0);
check_case(646,7,32,0,17,0);
check_case(647,8,32,0,17,0);
check_case(648,9,32,0,17,0);
check_case(649,10,32,0,17,0);
check_case(650,1,33,0,0,1);
check_case(651,2,33,0,0,1);
check_case(652,3,33,0,0,1);
check_case(653,4,33,0,0,1);
check_case(654,5,33,0,0,1);
check_case(655,6,33,0,0,1);
check_case(656,7,33,0,0,1);
check_case(657,8,33,0,0,1);
check_case(658,9,33,0,0,1);
check_case(659,10,33,0,0,1);
check_case(950,1,30,0,0,0);
check_case(951,2,30,0,0,0);
check_case(952,3,30,0,0,0);
check_case(953,4,30,0,0,0);
check_case(954,5,30,0,0,0);
check_case(955,6,30,0,0,0);
check_case(956,7,30,0,0,0);
check_case(957,8,30,0,0,0);
check_case(958,9,30,0,0,0);
check_case(959,10,30,0,0,0);
check_case(960,1,31,1,0,0);
check_case(961,2,31,1,0,0);
check_case(962,3,31,1,0,0);
check_case(963,4,31,1,0,0);
check_case(964,5,31,1,0,0);
check_case(965,6,31,1,0,0);
check_case(966,7,31,1,0,0);
check_case(967,8,31,1,0,0);
check_case(968,9,31,1,0,0);
check_case(969,10,31,1,0,0);
check_case(970,1,32,0,17,0);
check_case(971,2,32,0,17,0);
check_case(972,3,32,0,17,0);
check_case(973,4,32,0,17,0);
check_case(974,5,32,0,17,0);
check_case(975,6,32,0,17,0);
check_case(976,7,32,0,17,0);
check_case(977,8,32,0,17,0);
check_case(978,9,32,0,17,0);
check_case(979,10,32,0,17,0);
check_case(980,1,33,0,0,1);
check_case(981,2,33,0,0,1);
check_case(982,3,33,0,0,1);
check_case(983,4,33,0,0,1);
check_case(984,5,33,0,0,1);
check_case(985,6,33,0,0,1);
check_case(986,7,33,0,0,1);
check_case(987,8,33,0,0,1);
check_case(988,9,33,0,0,1);
check_case(989,10,33,0,0,1);$display("ADAPTER_COMPLETE cases=%0d requests=%0d host_responses=%0d stalled_cycles=%0d held_host_cycles=%0d resets=%0d starts=%0d scope=ADAPTER_ONLY",checks,reqs,rsps,stalls,holds,resets,starts);$finish;end
initial begin #1000000;$fatal(1,"timeout");end
endmodule
