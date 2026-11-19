create_clock -name core_clock -period 10.000 [get_ports clk_i]
set data_inputs [all_inputs]
set clock_index [lsearch -exact $data_inputs [get_ports clk_i]]
if {$clock_index < 0} {error "clock port not in all_inputs"}
set data_inputs [lreplace $data_inputs $clock_index $clock_index]
set_input_delay 0.5 -clock core_clock $data_inputs
set_output_delay 0.5 -clock core_clock [all_outputs]
