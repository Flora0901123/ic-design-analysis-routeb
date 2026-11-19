#!/bin/sh
export OPENRAM_TECH="/root/.cache/routeb-openram-b2b069c/source/technology:/root/.cache/routeb-openram-b2b069c/source/compiler/../technology"
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__openram_dp_cell.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__openram_dp_cell_dummy.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__openram_dp_cell_replica.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_cell_opt1a.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__openram_sp_cell_opt1a_dummy.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_cell_opt1_ce.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_cell_opt1.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__openram_sp_cell_opt1_replica.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__openram_sp_cell_opt1a_replica.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_colend.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_colend_cent.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_colend_p_cent.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_colenda.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_colenda_cent.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_colenda_p_cent.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_rowend.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_rowenda.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__openram_sp_rowend_replica.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__openram_sp_rowenda_replica.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_corner.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_cornera.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_cornerb.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_wlstrapa.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_wlstrap_ce.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_wlstrap.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_wlstrap_p_ce.mag .
cp /root/.cache/routeb-openram-b2b069c/source/technology/sky130/maglef_lib/sky130_fd_bd_sram__sram_sp_wlstrap_p.mag .
echo "$(date): Starting DRC using Magic /root/.cache/routeb-magic-8.3.306/install/bin/magic"

/root/.cache/routeb-magic-8.3.306/install/bin/magic -dnull -noconsole << EOF
load routeb_new_1w1r_8x128 -dereference
puts "Finished loading cell routeb_new_1w1r_8x128"
cellname delete \(UNNAMED\)
select top cell
expand
puts "Finished expanding"
drc euclidean on
drc check
puts "Finished drc check"
drc catchup
puts "Finished drc catchup"
drc count total
quit -noprompt
EOF
magic_retcode=$?
echo "$(date): Finished ($magic_retcode) DRC using Magic /root/.cache/routeb-magic-8.3.306/install/bin/magic"
exit $magic_retcode
