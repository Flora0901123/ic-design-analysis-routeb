
set_thread_count 2
foreach name {sky130 8x1024} {read_liberty $name.lib}
read_db floor.odb
read_sdc constraints.sdc
set_propagated_clock [all_clocks]
set_routing_layers -signal met1-met4 -clock met2-met4
read_guides q1.route.guide
pin_access
puts ROUTEB_DRT_PIN_ACCESS_COMPLETED
detailed_route -output_drc q1.drc.rpt -output_guide_coverage q1.coverage.csv -droute_end_iter 3 -verbose 1
puts ROUTEB_DRT_RETURNED
write_db detailed.odb
exit
