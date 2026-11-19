
set_thread_count 2
read_db floorplan.odb
set block [ord::get_db_block]
set fh [open macro-supply.tsv w]
puts $fh "instance	master	pin	type	shape_count	pre_connect	post_connect"
set before [dict create]
foreach inst [$block getInsts] {
    if {![[$inst getMaster] isBlock]} {continue}
    foreach pin [$inst getITerms] {
        if {[$pin getSigType] ni {POWER GROUND}} {continue}
        set net [$pin getNet]
        dict set before $pin [expr {$net eq "NULL" ? "-" : [$net getName]}]
    }
}
source connect_openram_power.tcl
set covered 0
set count 0
foreach inst [$block getInsts] {
    if {![[$inst getMaster] isBlock]} {continue}
    incr count
    set per_macro 0
    foreach pin [$inst getITerms] {
        if {[$pin getSigType] ni {POWER GROUND}} {continue}
        set mterm [$pin getMTerm]
        set role [$mterm getSigType]
        set name [$mterm getName]
        set net [$pin getNet]
        set actual [expr {$net eq "NULL" ? "-" : [$net getName]}]
        set expected [expr {$role eq "POWER" ? "VDD" : "VSS"}]
        set shapes [llength [$pin getGeometries]]
        puts $fh [join [list [$inst getName] [[$inst getMaster] getName] $name $role $shapes [dict get $before $pin] $actual] "	"]
        if {$expected ne $actual || $shapes<1} {error "Incorrect macro supply: [$inst getName]/$name"}
        incr per_macro
        incr covered
    }
    if {$per_macro!=2} {error "Unexpected number of supply ports on [$inst getName]"}
}
close $fh
if {$count!=164 || $covered!=328} {error "Incorrect macro supply pin count"}
puts "ROUTEB_LOGICAL_MACRO_SUPPLIES_328_PASS"
exit
