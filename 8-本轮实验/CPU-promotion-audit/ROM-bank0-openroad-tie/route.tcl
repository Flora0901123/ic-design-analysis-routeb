
set_thread_count 2
read_lef -tech -library tech.lef
read_lef -library sky130.lef
read_liberty sky130.lib
read_verilog bank.v
link_design student_mini_cpu_rom_bank_00
read_sdc constraint.sdc
initialize_floorplan -die_area {0 0 300 300} -core_area {10 10 290 290} -site unithd
make_tracks
set_wire_rc -signal -layer met2
set_wire_rc -clock -layer met4
place_pins -hor_layers met3 -ver_layers met2
global_placement -density 0.30
estimate_parasitics -placement
repair_design
detailed_placement
check_placement
clock_tree_synthesis -buf_list sky130_fd_sc_hd__clkbuf_4
detailed_placement
check_placement
set_propagated_clock [all_clocks]
set_routing_layers -signal met1-met4 -clock met2-met4
global_route
estimate_parasitics -global_routing
report_worst_slack -max
report_worst_slack -min
puts ROUTEB_ROM_GLOBAL_ROUTE_COMPLETE
detailed_route -output_drc route.drc
check_antennas
write_db routed.odb
write_def routed.def
puts ROUTEB_ROM_DETAIL_ROUTE_COMPLETE
exit
