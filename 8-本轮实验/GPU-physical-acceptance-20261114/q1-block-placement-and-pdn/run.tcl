
set_thread_count 2
foreach name {sky130 32x256 8x1024 8x128 20x64} { read_liberty $name.lib }
read_db floor.odb
read_sdc constraints.sdc
set_dont_use {sky130_fd_sc_hd__*probe* sky130_fd_sc_hd__lpflow*}
set_wire_rc -signal -layer met3
set_wire_rc -clock -layer met5
global_placement -density 0.30
detailed_placement
check_placement
puts ROUTEB_Q1_LEGAL_PLACEMENT
source macro-power.tcl
source pdn.tcl
pdngen
check_power_grid -net VDD
check_power_grid -net VSS
puts ROUTEB_Q1_POWER_GRID_CHECKED
estimate_parasitics -placement
report_worst_slack -max
report_worst_slack -min
write_db placed-pdn.odb
puts ROUTEB_Q1_STAGE_COMPLETE
exit
