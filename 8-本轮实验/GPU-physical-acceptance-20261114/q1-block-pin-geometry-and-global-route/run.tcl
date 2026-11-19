
set_thread_count 2
foreach name {sky130 8x1024} {read_liberty $name.lib}
read_db floor.odb
read_sdc constraints.sdc
set_propagated_clock [all_clocks]
set_wire_rc -signal -layer met3
set_wire_rc -clock -layer met5
set fp [open io.tcl r]
set content [read $fp]
close $fp

foreach line [split $content "\n"] {
    if {[string match "dict set student_mini_pins *" $line]} {eval $line}
}
set block [ord::get_db_block]
set dbu [$block getDbUnitsPerMicron]
set die [$block getDieArea]
set maxx [expr {double([$die xMax])/$dbu}]
set maxy [expr {double([$die yMax])/$dbu}]
set changed 0
foreach bt [$block getBTerms] {
    if {[$bt getSigType] in {POWER GROUND}} {continue}
    set key [string map [list [format %c 92] ""] [$bt getName]]
    lassign [dict get $student_mini_pins $key] layer x y sx sy
    set x2 [expr {max(0.70,min($maxx-0.70,$x))}]
    set y2 [expr {max(0.70,min($maxy-0.70,$y))}]
    if {$x2 != $x || $y2 != $y} {
       place_pin -pin_name [$bt getName] -layer $layer -location [list $x2 $y2] -pin_size [list $sx $sy]
       incr changed
    }
    foreach bp [$bt getBPins] {
        foreach box [$bp getBoxes] {
            if {[$box xMin] < 0 || [$box yMin] < 0 || [$box xMax] > [$die xMax] || [$box yMax] > [$die yMax]} {
                error "Outside rectangle [$bt getName] [$box xMin] [$box yMin] [$box xMax] [$box yMax]"
            }
        }
    }
}
puts "ROUTEB_PIN_GEOMETRY_PASS moved=$changed"
global_connect
check_power_grid -net VDD
check_power_grid -net VSS
set_routing_layers -signal met1-met4 -clock met2-met4
global_route -guide_file q1.route.guide -congestion_iterations 25 -verbose
estimate_parasitics -global_routing
report_worst_slack -max
report_worst_slack -min
write_db global-route.odb
puts ROUTEB_GRT_COMPLETE
exit
