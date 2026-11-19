
set_thread_count 1
read_db route-checkpoint-initial.odb
set block [ord::get_db_block]
set total 0
set routed 0
foreach net [$block getNets] {
 if {[$net getSigType] in {POWER GROUND}} {continue}
 incr total
 if {[$net getWire] ne "NULL"} {incr routed}
}
puts "ROUTEB_CHECKPOINT_READBACK nets=$total wired=$routed insts=[llength [$block getInsts]]"
exit
