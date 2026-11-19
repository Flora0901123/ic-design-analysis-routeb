read_lef -tech tech.lef
read_lef -library sky130.lef
read_liberty sky130.lib
read_lef -library 32x256.lef
read_liberty 32x256.lib
if {[llength [get_lib_cells */sky130_sram_1kbyte_1rw1r_32x256_8]] != 1} {error "Missing sky130_sram_1kbyte_1rw1r_32x256_8 Liberty"}
if {[[ord::get_db] findMaster sky130_sram_1kbyte_1rw1r_32x256_8] == "NULL"} {error "Missing sky130_sram_1kbyte_1rw1r_32x256_8 LEF"}
read_lef -library 8x1024.lef
read_liberty 8x1024.lib
if {[llength [get_lib_cells */sky130_sram_1kbyte_1rw1r_8x1024_8]] != 1} {error "Missing sky130_sram_1kbyte_1rw1r_8x1024_8 Liberty"}
if {[[ord::get_db] findMaster sky130_sram_1kbyte_1rw1r_8x1024_8] == "NULL"} {error "Missing sky130_sram_1kbyte_1rw1r_8x1024_8 LEF"}
read_lef -library 8x128.lef
read_liberty 8x128.lib
if {[llength [get_lib_cells */routeb_new_1w1r_8x128]] != 1} {error "Missing routeb_new_1w1r_8x128 Liberty"}
if {[[ord::get_db] findMaster routeb_new_1w1r_8x128] == "NULL"} {error "Missing routeb_new_1w1r_8x128 LEF"}
read_lef -library 20x64.lef
read_liberty 20x64.lib
if {[llength [get_lib_cells */routeb_new_1w1r_20x64]] != 1} {error "Missing routeb_new_1w1r_20x64 Liberty"}
if {[[ord::get_db] findMaster routeb_new_1w1r_20x64] == "NULL"} {error "Missing routeb_new_1w1r_20x64 LEF"}
puts ROUTEB_FOUR_SRAM_VIEWS_OPENROAD_PASS
exit
