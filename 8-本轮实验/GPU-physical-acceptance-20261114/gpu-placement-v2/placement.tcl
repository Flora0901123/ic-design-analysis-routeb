
set_thread_count 2
foreach lib {sky130.lib 32x256.lib 8x1024.lib 8x128.lib 20x64.lib} {
    read_liberty $lib
}
read_db floorplan.odb
read_sdc constraints.sdc
set_wire_rc -signal -layer met3
set_wire_rc -clock -layer met5
repair_design -pre_placement
make_tracks
place_pins -hor_layers met3 -ver_layers met2
global_placement -density 0.42
detailed_placement
check_placement -verbose
puts ROUTEB_GPU_STANDARD_CELL_PLACEMENT_PASS
write_db placed.odb
estimate_parasitics -placement
report_worst_slack -max
report_worst_slack -min
report_checks -path_delay max -group_path_count 1 -format full_clock_expanded
puts ROUTEB_GPU_ESTIMATED_PLACEMENT_STA_COMPLETE
exit
