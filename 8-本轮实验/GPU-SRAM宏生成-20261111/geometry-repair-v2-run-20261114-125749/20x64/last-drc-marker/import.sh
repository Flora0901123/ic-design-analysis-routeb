#!/bin/sh
export OPENRAM_TECH="/root/.cache/routeb-openram-b2b069c/source/technology:/root/.cache/routeb-openram-b2b069c/source/compiler/../technology"
echo "$(date): Starting GDS to MAG using Magic /root/.cache/routeb-magic-8.3.306/install/bin/magic"

/root/.cache/routeb-magic-8.3.306/install/bin/magic -dnull -noconsole << EOF
drc off
set VDD vdd
set GND gnd
set SUB gnd
gds warning default
gds flatglob *_?mos_m*
gds flatglob sky130_fd_bd_sram__sram_sp_cell_fom_serifs
gds flatglob sky130_fd_bd_sram__sram_sp_cell
gds flatglob sky130_fd_bd_sram__openram_sp_cell_opt1_replica_cell
gds flatglob sky130_fd_bd_sram__openram_sp_cell_opt1a_replica_cell
gds flatglob sky130_fd_bd_sram__sram_sp_cell_opt1_ce
gds flatglob sky130_fd_bd_sram__openram_sp_cell_opt1_replica_ce
gds flatglob sky130_fd_bd_sram__openram_sp_cell_opt1a_replica_ce
gds flatglob sky130_fd_bd_sram__sram_sp_wlstrap_ce
gds flatglob sky130_fd_bd_sram__sram_sp_wlstrap_p_ce
gds flatten true
gds ordering true
gds read routeb_new_1w1r_20x64.gds
puts "Finished reading gds routeb_new_1w1r_20x64.gds"
load routeb_new_1w1r_20x64
puts "Finished loading cell routeb_new_1w1r_20x64"
cellname delete \(UNNAMED\)
writeall force
quit -noprompt
EOF
