
set_thread_count 2
foreach name {sky130 32x256 8x1024 8x128 20x64} {read_liberty $name.lib}
read_db floor.odb
read_sdc constraint.sdc
set_dont_use {sky130_fd_sc_hd__*probe* sky130_fd_sc_hd__lpflow*}
set_wire_rc -signal -layer met3
set_wire_rc -clock -layer met5
global_placement -density 0.30
detailed_placement
check_placement
puts ROUTEB_PLACEMENT_LEGAL
source macro-power.tcl
source pdn.tcl
pdngen
check_power_grid -net VDD
check_power_grid -net VSS
write_db placed-pdn.odb
puts ROUTEB_PDN_CHECKED
clock_tree_synthesis -buf_list {sky130_fd_sc_hd__clkbuf_2 sky130_fd_sc_hd__clkbuf_4 sky130_fd_sc_hd__clkbuf_8} -root_buf sky130_fd_sc_hd__clkbuf_8 -sink_clustering_enable -repair_clock_nets
detailed_placement
check_placement
global_connect
check_power_grid -net VDD
check_power_grid -net VSS
set_propagated_clock [get_clocks core_clock]
write_db cts.odb
puts ROUTEB_CTS_COMPLETE
set_routing_layers -signal met1-met4 -clock met2-met4
global_route -guide_file route.guide -congestion_iterations 30 -verbose
estimate_parasitics -global_routing
report_worst_slack -max
report_worst_slack -min
write_db global-route.odb
puts ROUTEB_GRT_COMPLETE
exit
