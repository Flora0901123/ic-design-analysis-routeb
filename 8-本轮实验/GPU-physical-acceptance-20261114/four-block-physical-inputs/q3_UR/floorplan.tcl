
set_thread_count 2
read_lef -tech -library tech.lef
foreach name {sky130 32x256 8x1024 8x128 20x64} {
    read_lef -library $name.lef
    read_liberty $name.lib
}
read_verilog block.v
link_design $::env(ROUTEB_BLOCK)
read_sdc constraint.sdc
initialize_floorplan -die_area {0 0 3925.64 3925.64} -core_area {10 10 3915.64 3915.64} -site unithd
make_tracks
source macro-placement.tcl
source io.tcl
set block [ord::get_db_block]
set total 0
set pins 0
foreach bt [$block getBTerms] {
    if {[$bt getSigType] in {POWER GROUND}} { continue }
    incr total
    if {[llength [$bt getBPins]]} {incr pins}
}
if {$total != $pins} {error "Unplaced block ports: $pins of $total"}
set macros 0
foreach inst [$block getInsts] {
  if {[[$inst getMaster] isBlock]} {incr macros}
}
puts "ROUTEB_BLOCK_PREFLIGHT_PASS macros=$macros signal_ports=$pins"
write_db block-floorplan.odb
exit
