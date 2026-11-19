
set_thread_count 2
foreach name {sky130 32x256 8x1024 8x128 20x64} {read_liberty $name.lib}
read_db cts.odb
read_sdc constraint.sdc
set_propagated_clock [get_clocks core_clock]
set_wire_rc -signal -layer met3
set_wire_rc -clock -layer met5
set_routing_layers -signal met1-met4 -clock met2-met4
set_global_routing_layer_adjustment met3 0.10
global_route -guide_file route.guide -congestion_report_file congestion.rpt -congestion_report_iter_step 12 -congestion_iterations 36 -allow_congestion -verbose
estimate_parasitics -global_routing
report_worst_slack -max
report_worst_slack -min
write_db global-route.odb
puts ROUTEB_GRT_COMPLETE
exit
