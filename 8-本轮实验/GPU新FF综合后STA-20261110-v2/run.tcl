if {[catch {
set_thread_count 2
read_liberty sky130.lib
read_verilog mapped.v
link_design vortex_physical_top
read_sdc constraints.sdc
puts "ROUTEB_STA_CONSTRAINTS_LOADED"
check_setup -verbose
report_worst_slack -max
report_worst_slack -min
report_tns
report_clock_min_period
report_checks -path_delay min_max -group_path_count 5 -format full_clock_expanded
report_check_types -max_slew -max_capacitance -max_fanout
write_sdc actual-constraints.sdc
puts "ROUTEB_STA_ANALYSIS_COMPLETE"
} msg]} {puts stderr "ROUTEB_STA_FAILED: $msg";exit 1}
exit 0
