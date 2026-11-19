read_lef -tech sky130.tlef
read_lef -library sky130.lef
read_liberty sky130.lib
read_lef -library sky130_sram_1kbyte_1rw1r_32x256_8.lef
read_liberty sky130_sram_1kbyte_1rw1r_32x256_8.lib
if {[llength [get_lib_cells */sky130_sram_1kbyte_1rw1r_32x256_8]] != 1} {error "Macro Liberty unresolved"}
if {[[ord::get_db] findMaster sky130_sram_1kbyte_1rw1r_32x256_8] == "NULL"} {error "Macro LEF unresolved"}
read_lef -library sky130_sram_1kbyte_1rw1r_8x1024_8.lef
read_liberty sky130_sram_1kbyte_1rw1r_8x1024_8.lib
if {[llength [get_lib_cells */sky130_sram_1kbyte_1rw1r_8x1024_8]] != 1} {error "Macro Liberty unresolved"}
if {[[ord::get_db] findMaster sky130_sram_1kbyte_1rw1r_8x1024_8] == "NULL"} {error "Macro LEF unresolved"}
puts "ROUTEB_OPENROAD_SKY130_AND_MACRO_VIEWS_PASS"
exit
