
set_thread_count 2
foreach lib {sky130 8x1024} {read_liberty $lib.lib}
read_db global-route.odb
read_sdc constraint.sdc
set_propagated_clock [get_clocks clk]
set_routing_layers -signal met1-met4 -clock met2-met4
read_guides q1.route.guide
puts ROUTEB_Q1_DRT_START
detailed_route -output_drc detailed-drc.rpt -output_guide_coverage guide-coverage.csv -verbose 1
puts ROUTEB_Q1_DRT_RETURNED
write_db detailed.odb
write_def detailed.def
write_verilog detailed.v
if {[drt::get_num_violations] == 0} {
    write_abstract_lef -bloat_occupied_layers q1.lef
}
puts ROUTEB_Q1_OUTPUTS_COMPLETE
exit
