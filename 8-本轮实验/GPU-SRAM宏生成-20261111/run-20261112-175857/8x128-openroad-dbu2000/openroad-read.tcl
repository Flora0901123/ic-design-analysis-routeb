read_lef -tech tech.lef
read_lef -library sky130.lef
read_lef -library macro.lef
read_liberty macro.lib
if {[llength [get_lib_cells */routeb_new_1w1r_8x128]] != 1} {error "Missing macro Liberty"}
if {[[ord::get_db] findMaster routeb_new_1w1r_8x128] == "NULL"} {error "Missing macro LEF"}
puts ROUTEB_8X128_LEF_LIBERTY_PASS
exit
