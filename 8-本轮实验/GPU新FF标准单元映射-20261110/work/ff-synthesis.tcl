# Future EDA entry point; not executed by export. Run from this new candidate directory.
if {![info exists ::env(SKY130_LIB)]} {error "Set SKY130_LIB to a SHA-verified real Liberty file"}
yosys read_verilog -sv snapshot/project-physical.v snapshot/gpu_fault_physical_top.sv snapshot/gpu_status_command_adapter.sv snapshot/gpu_fault_memory_adapter.sv snapshot/vortex_banked_large_sram_wrappers.sv rtl/ff_memories.v
yosys hierarchy -check -top vortex_physical_top
yosys synth -top vortex_physical_top
yosys dfflibmap -liberty $::env(SKY130_LIB)
yosys abc -liberty $::env(SKY130_LIB)
yosys clean
yosys check -assert
yosys stat -liberty $::env(SKY130_LIB)
file mkdir synth-output
yosys write_verilog -noattr synth-output/ff-mapped.v

yosys tee -o synth-output/stat.json stat -json -liberty $::env(SKY130_LIB)
