
set_thread_count 2
foreach name {sky130 8x1024} { read_liberty $name.lib }
read_db floor.odb
read_sdc constraints.sdc
set_dont_use {sky130_fd_sc_hd__*probe* sky130_fd_sc_hd__lpflow*}
set_wire_rc -signal -layer met3
set_wire_rc -clock -layer met5
clock_tree_synthesis -buf_list {sky130_fd_sc_hd__clkbuf_2 sky130_fd_sc_hd__clkbuf_4 sky130_fd_sc_hd__clkbuf_8} -root_buf sky130_fd_sc_hd__clkbuf_8 -sink_clustering_enable -repair_clock_nets
detailed_placement
check_placement
set_propagated_clock [all_clocks]
estimate_parasitics -placement
report_worst_slack -max
report_worst_slack -min
report_cts
write_db cts.odb
puts ROUTEB_CTS_COMPLETE
set_routing_layers -signal met1-met4 -clock met2-met4
global_route -guide_file q1.route.guide -congestion_iterations 25 -verbose
estimate_parasitics -global_routing
report_worst_slack -max
report_worst_slack -min
write_db global-route.odb
puts ROUTEB_GRT_COMPLETE
exit
