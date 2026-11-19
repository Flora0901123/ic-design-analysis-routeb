
set_thread_count 1
foreach lib {sky130 32x256 8x1024 8x128 20x64} {read_liberty $lib.lib}
read_db input.odb
read_sdc constraint.sdc
set_propagated_clock [get_clocks core_clock]
set_routing_layers -signal met1-met4 -clock met2-met4
read_guides route.guide
file mkdir checkpoints
set_debug_level DRT snapshot 1
detailed_route_debug -snapshot_dir checkpoints
puts ROUTEB_DETAIL_ROUTING_START
detailed_route -output_drc route-drc.rpt -drc_report_iter_step 1 -output_guide_coverage guide-coverage.csv -verbose 1
set count [detailed_route_num_drvs]
puts "ROUTEB_ROUTER_RETURNED drc=$count"
write_db routed.odb.new
file rename -force routed.odb.new routed.odb
write_def routed.def
write_verilog routed.v
check_placement
check_power_grid -net VDD
check_power_grid -net VSS
check_antennas -report_violating_nets -report_file antenna.rpt
if {$count == 0} {
    write_abstract_lef -bloat_occupied_layers block.lef
}
puts ROUTEB_DETAIL_EXPORT_COMPLETE
exit
