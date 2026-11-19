add_global_connection -net VDD -inst_pattern {.*} -pin_pattern {vccd1} -power
add_global_connection -net VSS -inst_pattern {.*} -pin_pattern {vssd1} -ground
global_connect
