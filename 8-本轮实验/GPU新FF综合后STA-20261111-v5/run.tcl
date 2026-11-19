if {[catch {

read_liberty sky130.lib
read_verilog mapped.v
link_design vortex_physical_top
read_sdc constraints.sdc
puts "ROUTEB_STA_CONSTRAINTS_LOADED"
check_setup -verbose
report_worst_slack -max
report_worst_slack -min
report_tns

report_checks -path_delay max -group_path_count 1 -format full_clock_expanded

write_sdc actual-constraints.sdc
puts "ROUTEB_STA_ANALYSIS_COMPLETE"
} msg]} {puts stderr "ROUTEB_STA_FAILED: $msg";exit 1}
exit 0
