
set_thread_count 2
read_db placed.odb
set b [ord::get_db_block]
set inst2q [dict create]
set f [open assignment.tsv r]
while {[gets $f row]>=0} {
  lassign [split $row "\t"] inst_name q
  dict set inst2q $inst_name $q
}
close $f
set counts {0 0 0 0}
foreach inst [$b getInsts] {
  set name [string map [list "\\" ""] [$inst getName]]
  if {![dict exists $inst2q $name]} {error "Unbound cell $name"}
  set q [dict get $inst2q $name]
  odb::dbIntProperty_create $inst partition_id $q
  dict unset inst2q $name
  lset counts $q [expr {[lindex $counts $q]+1}]
}
if {[dict size $inst2q]>0} {error "Unused instance assignments"}
puts "ROUTEB_FIXED_PARTITIONS $counts"
set renames [open renames.tsv w]
set renamed 0
foreach n [$b getNets] {
  set name [$n getName]
  if {[llength [$n getBTerms]]>0 || ![regexp {[\[\]]} $name]} {continue}
  set new routeb_original_bit_[$n getId]
  if {[$b findNet $new] ne "NULL"} {error "Name collision $new"}
  $n rename $new
  if {[$n getName] ne $new} {error "Cannot rename $name"}
  puts $renames "$name\t$new"
  incr renamed
}
close $renames
puts "ROUTEB_SCALAR_RENAMES $renamed"
write_partition_verilog -port_prefix part_ -module_suffix _q fixed-quad.v
puts ROUTEB_SCALAR_PORTS_EXPORTED
exit
