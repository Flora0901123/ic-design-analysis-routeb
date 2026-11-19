
set_thread_count 2
foreach lib {sky130 32x256 8x1024 8x128 20x64} {read_liberty $lib.lib}
read_db global-route.odb
read_sdc constraint.sdc
set_propagated_clock [get_clocks core_clock]
set_routing_layers -signal met1-met4 -clock met2-met4
read_guides route.guide
puts ROUTEB_DRT_START
detailed_route -output_drc detailed-drc.rpt -output_guide_coverage guide-coverage.csv -verbose 1
puts ROUTEB_DRT_RETURNED
write_db detailed.odb
write_def detailed.def
write_verilog detailed.v
if {[detailed_route_num_drvs] == 0} {
    write_abstract_lef -bloat_occupied_layers block.lef
}
puts ROUTEB_DRT_OUTPUTS_COMPLETE
exit
