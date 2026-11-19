yosys read_verilog -sv snapshot/project-physical.v snapshot/gpu_fault_physical_top.sv snapshot/gpu_status_command_adapter.sv snapshot/gpu_fault_memory_adapter.sv snapshot/vortex_banked_large_sram_wrappers.sv rtl/ff_memories.v
yosys hierarchy -check -top vortex_physical_top
yosys synth -top vortex_physical_top
yosys write_rtlil generic-checkpoint.il
yosys read_liberty -lib sky130.lib
yosys dfflibmap -liberty sky130.lib
yosys abc -liberty sky130.lib
yosys clean
yosys hierarchy -check -top vortex_physical_top
yosys check -assert
yosys tee -o stat.json stat -json -liberty sky130.lib
yosys write_verilog -noattr ff-mapped.v
