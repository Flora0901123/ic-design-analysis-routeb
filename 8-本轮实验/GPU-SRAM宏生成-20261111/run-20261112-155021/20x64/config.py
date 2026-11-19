# NEW candidate configuration; no original hash/geometry identity claimed.
from pathlib import Path
word_size = 20
num_words = 64
write_size = None
num_rw_ports = 0
num_w_ports = 1
num_r_ports = 1
num_banks = 1
words_per_row = 1
num_spare_rows = 0
num_spare_cols = 0
tech_name = "sky130"
process_corners = ["TT"]
supply_voltages = [1.8]
temperatures = [25]
only_use_config_corners = True
nominal_corner_only = False
analytical_delay = True
model_name = "elmore"
netlist_only = False
route_supplies = True
perimeter_pins = True
detailed_lef = False
check_lvsdrc = False
inline_lvsdrc = False
use_pex = False
use_nix = False
num_threads = 2
num_sim_threads = 1
output_name = "routeb_new_1w1r_20x64"
output_path = str(Path(__file__).resolve().parents[1] / "openram-output" / "analytical" / "routeb_new_1w1r_20x64")

output_path='/root/.cache/routeb-openram-b2b069c/run-20261112-155021/20x64/views'
