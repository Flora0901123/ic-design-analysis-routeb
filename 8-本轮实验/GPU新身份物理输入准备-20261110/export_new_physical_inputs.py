"""Export a new physical-candidate identity without touching the running GPU.
This script copies inputs and writes configuration/RTL only. It never invokes EDA.
"""
from pathlib import Path
from collections import Counter
import ast,hashlib,json,math,re
O=Path(__file__).resolve().parent
R=O.parents[1]
F=R/'9-GPU复现/整机DMA重建'
B=R/'6-源码引用/原始参考包'
LIB=R/'8-本轮实验/GPU物理依赖公开来源核对-20261109/sky130_fd_sc_hd__tt_025C_1v80.lib'

def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def write(rel,text):
 p=O/rel;assert p.resolve().is_relative_to(O);p.parent.mkdir(parents=True,exist_ok=True)
 p.write_text(text,encoding='utf-8',newline='\n')
def dump(rel,value):write(rel,json.dumps(value,ensure_ascii=False,indent=2)+'\n')
def pins(name,w,d,m,kind='reg'):
 a=(d-1).bit_length();mask=f'input wire [{m-1}:0] wmask0, ' if m>1 else ''
 return f'module {name}(input wire clk0,csb0, {mask}input wire [{a-1}:0] addr0,input wire [{w-1}:0] din0,input wire clk1,csb1,input wire [{a-1}:0] addr1,output {kind} [{w-1}:0] dout1);\n'

def main():
 plan=json.loads((F/'openram-banked-logical-plan.json').read_text(encoding='utf-8'))
 rows=plan['variants'];assert len(rows)==4 and sum(r['instance_count'] for r in rows)==37
 inv=json.loads((O/'reachable-sram-instances.json').read_text(encoding='utf-8'))
 assert inv['available'] and len(inv['instances'])==37
 assert Counter(x['macro_name'] for x in inv['instances'])==Counter({r['macro_name']:r['instance_count'] for r in rows})
 local=['integration/student-mini/gpu_fault_physical_top.sv','integration/student-mini/gpu_status_command_adapter.sv',
        'integration/student-mini/gpu_fault_memory_adapter.sv','shared/rtl/vortex_banked_large_sram_wrappers.sv']
 sources=[F/'project-banked.v',F/'project-unmapped.v',F/'openram-banked-logical-plan.json',F/'staged-openram-banked-manifest.json',
          F/'openram-bindings.sv',F/'platform-producer.py',B/'SPEC.json',LIB,
          B/'sources/scripts/student_mini_gpu_constant_calls.py',*(B/'sources'/p for p in local),
          *(F/'models'/f'{r["macro_name"]}.v' for r in rows)]
 before={str(p):sha(p) for p in sources}
 for p in [F/'project-banked.v',F/'openram-bindings.sv',*(F/'models'/f'{r["macro_name"]}.v' for r in rows)]:
  dest=O/'snapshot'/p.relative_to(F);dest.parent.mkdir(parents=True,exist_ok=True);dest.write_bytes(p.read_bytes())
 for p in local:write('snapshot/'+Path(p).name,(B/'sources'/p).read_text(encoding='utf-8'))
 helper=B/'sources/scripts/student_mini_gpu_constant_calls.py'
 tree=ast.parse(helper.read_text(encoding='utf-8'));fn=next(n for n in tree.body if isinstance(n,ast.FunctionDef) and n.name=='lower_scheduler_constants')
 ns={'re':re};exec(compile(ast.Module(body=[fn],type_ignores=[]),str(helper),'exec'),ns)
 core=(F/'project-banked.v').read_text(encoding='utf-8')
 lowered=ns['lower_scheduler_constants'](core)
 write('snapshot/project-physical.v',lowered)
 clean=re.sub(r'/\*[\s\S]*?\*/|//[^\n]*','',core)
 audit={k:len(re.findall(p,clean)) for k,p in {'DPI':r'DPI','import':r'\bimport\b','real':r'\breal\b','shortreal':r'\bshortreal\b','blackbox':r'\bblackbox\b'}.items()}
 assert not any(audit.values())
 audit['system_calls']=sorted(set(re.findall(r'\$[a-zA-Z_]\w*',clean)))
 audit['scope']='Comment-stripped current project; no synthesis performed.'
 audit['existing_elaboration']='arithmetic-elaboration-existing-evidence.json'
 dump('static-synthesizability-audit.json',audit)
 ff=[];wrappers=[];boxes=[];surrogates=[];mapping=[];raw_counts=Counter()
 for r in rows:
  name=r['macro_name'];w=r['data_width'];d=r['depth'];m=r['write_enable_width'];sw=w//m;a=(d-1).bit_length()
  assert w%m==0 and r['port_topology']=='1r1w'
  source=(F/'models'/f'{name}.v').read_text(encoding='utf-8')
  assert 'initial' not in re.sub(r'//[^\n]*','',source) and 'reset' not in re.sub(r'//[^\n]*','',source)
  ff.append(source.replace(f'reg[{w-1}:0] mem',f'(* ram_style = "registers" *) reg[{w-1}:0] mem'))
  raw=f'routeb_new_1w1r_{sw}x{d}'
  raw_counts[raw]+=m*r['instance_count']
  mask='wmask0' if m>1 else "1'b1"
  text='// New candidate. Single shared clock required. Low-phase latch; not edge-waveform equivalent.\n'+pins(name,w,d,m)
  text+=f'''parameter VERBOSE=0;
wire [{m-1}:0] mask={mask};
wire [{m-1}:0] write_en,collision;
wire [{w-1}:0] raw_data;
reg read_q;
reg [{m-1}:0] collision_q;
reg [{w-1}:0] bypass_data_q;
always @(posedge clk1) begin
 read_q <= !csb1;
 if(!csb1) begin collision_q <= collision; bypass_data_q <= din0; end
end
genvar s;
generate for(s=0;s<{m};s=s+1) begin:g_slice
 assign write_en[s] = !csb0 && mask[s];
 assign collision[s] = !csb1 && write_en[s] && (addr0==addr1);
 // Never ask a raw SRAM to read and write the same word concurrently.
 {raw} u_raw(.clk0(clk0),.csb0(!write_en[s]),.addr0(addr0),.din0(din0[s*{sw}+:{sw}]),
   .clk1(clk1),.csb1(csb1 || collision[s]),.addr1(addr1),.dout1(raw_data[s*{sw}+:{sw}]));
end endgenerate
integer k;
// Intentional low-level latch holds the output through idle/X phases of OpenRAM.
always @* if(!clk1 && read_q) begin
 for(k=0;k<{m};k=k+1) dout1[k*{sw}+:{sw}] = collision_q[k] ? bypass_data_q[k*{sw}+:{sw}] : raw_data[k*{sw}+:{sw}];
end
endmodule
'''
  wrappers.append(text)
  boxes.append('(* blackbox *) '+pins(raw,sw,d,1,'wire')+'endmodule\n')
  surrogate=pins(raw,sw,d,1)
  surrogate+=f'''// TEST SURROGATE ONLY. Not an OpenRAM view and not for synthesis or PPA.
reg [{sw-1}:0] memory[0:{d-1}];
reg [{a-1}:0] wa,ra;
reg [{sw-1}:0] wd;
reg wen,ren;
always @(posedge clk0) begin wa<=addr0;wd<=din0;wen<=!csb0;end
always @(posedge clk1) begin ra<=addr1;ren<=!csb1;dout1<={{ {sw}{{1'bx}} }};end
always @(negedge clk0) if(wen) memory[wa]<=wd;
always @(negedge clk1) if(ren) dout1<=memory[ra];
endmodule
'''
  surrogates.append(surrogate)
  for characterized in (False,True):
   mode='characterized' if characterized else 'analytical'
   config=f'''# NEW candidate configuration; no original hash/geometry identity claimed.
from pathlib import Path
word_size = {sw}
num_words = {d}
write_size = None
num_rw_ports = 0
num_w_ports = 1
num_r_ports = 1
num_banks = 1
words_per_row = {2 if d==1024 else 1}
num_spare_rows = 0
num_spare_cols = 0
tech_name = "sky130"
process_corners = ["TT"]
supply_voltages = [1.8]
temperatures = [25]
only_use_config_corners = True
nominal_corner_only = True
analytical_delay = {not characterized}
model_name = "elmore"
netlist_only = False
route_supplies = True
perimeter_pins = True
detailed_lef = False
check_lvsdrc = True
inline_lvsdrc = False
use_pex = False
use_nix = False
num_threads = 2
num_sim_threads = 1
output_name = "{raw}"
output_path = str(Path(__file__).resolve().parents[1] / "openram-output" / "{mode}" / "{raw}")
'''
   write(f'openram-configs/{raw}_{mode}.py',config)
  mapping.append(dict(r,raw_macro=raw,slice_width=sw,raw_instances_per_logical=m,
     raw_instances_total=m*r['instance_count'],read_data_pin='dout1',write_data_pin='din0',
     write_port=0,read_port=1,write_mask_order='mask[s] controls bits [s*slice_width +: slice_width]',
     collision='Disable read on a writing raw slice at equal addresses; forward the entire slice from captured din0.',
     no_memory_initialization=True,no_macro_reset=True,read_output_hold=True))
 write('rtl/ff_memories.v','\n'.join(ff));write('rtl/openram_wrappers.v','\n'.join(wrappers))
 write('rtl/openram_blackboxes.v','\n'.join(boxes));write('verification/raw_halfcycle_surrogates.v','\n'.join(surrogates))
 write('constraint.sdc','create_clock -name core_clock -period 10.000 [get_ports clk_i]\nset data_inputs [get_ports -filter "direction == input && name != clk_i" *]\nset_input_delay 0.5 -clock core_clock $data_inputs\nset_output_delay 0.5 -clock core_clock [all_outputs]\n')
 write('connect_openram_power.tcl','add_global_connection -net VDD -inst_pattern {.*} -pin_pattern {vccd1} -power\nadd_global_connection -net VSS -inst_pattern {.*} -pin_pattern {vssd1} -ground\nglobal_connect\n')
 files=['snapshot/project-physical.v',*(('snapshot/'+Path(p).name) for p in local)]
 for backend in ('ff','openram'):
  selected=files+(['rtl/ff_memories.v'] if backend=='ff' else ['rtl/openram_wrappers.v','rtl/openram_blackboxes.v'])
  write(f'{backend}-sources.f','\n'.join(selected)+'\n')
  # Deliberately stop at a hierarchy/proc check: full memory_map runs only in separately authorized EDA work.
  write(f'{backend}-preflight.ys','read_verilog -sv '+' '.join(selected)+'\nhierarchy -check -top vortex_physical_top\nproc\ncheck -assert\nstat\n')
 write('ff-synthesis.tcl','''# Future EDA entry point; not executed by export. Run from this new candidate directory.
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
''')
 bits=sum(r['data_width']*r['depth']*r['instance_count'] for r in rows)
 outs=sum(r['data_width']*r['instance_count'] for r in rows)
 readmux=bits-outs;writemux=bits;holdmux=outs
 lib=LIB.read_text(encoding='utf-8');areas={}
 for cell in ('dfxtp_1','mux2_1','dlxtp_1'):
  mat=re.search(r'cell\s*\("?sky130_fd_sc_hd__'+cell+r'"?\)\s*\{',lib);assert mat
  areas[cell]=float(re.search(r'area\s*:\s*([\d.]+)',lib[mat.start():]).group(1))
 lower=(bits+outs)*areas['dfxtp_1'];simple=lower+(readmux+writemux+holdmux)*areas['mux2_1']
 groups=[{'partition':f'memory_group_{q}','instances':[],'bits':0} for q in range(4)]
 for r in rows:
  entries=sorted((x for x in inv['instances'] if x['macro_name']==r['macro_name']),key=lambda x:x['path'])
  for j,e in enumerate(entries):
   g=groups[j%4];g['instances'].append(e['path']);g['bits']+=e['width']*e['depth']
 resources={'memory_bits':bits,'memory_kib':bits/8192,'logical_instances':37,'read_output_bits':outs,
   'ff_count_simple':bits+outs,'read_mux2_count_structural':readmux,'write_feedback_mux2_count_simple':writemux,
   'output_hold_mux2_count_simple':holdmux,'cell_areas_um2':areas,'cell_lib_sha256':sha(LIB),
   'memory_ff_area_floor_um2':lower,'simple_dff_mux_memory_area_um2':simple,
   'memory_only_die_side_um_at_30pct_floor':math.sqrt(lower/.3),
   'memory_only_die_side_um_at_30pct_simple':math.sqrt(simple/.3),
   'scope':'Conservative structural count/area estimate, not synthesis or routed PPA. Excludes GPU logic, decode, clocks, buffering, routing and all physical closure overhead.',
   'memory_partition_budget':groups,'partition_limit':'Budget groups only; no physical cut or clock/port-budget signoff yet.',
   'raw_openram_instance_counts':dict(raw_counts),'raw_openram_instances_total':sum(raw_counts.values())}
 assert bits==398336 and outs==1744 and sum(raw_counts.values())==164
 dump('resource-estimate.json',resources)
 contract={'identity':'new-physical-candidate-from-current-functional-GPU','preferred_semantic_baseline':'ff',
  'original_physical_identity':False,'old_binding_recovery_matches_added':0,'top':'vortex_physical_top',
  'clock_period_ns':10,'shared_clock_required':True,'source_clock_tie_evidence':'snapshot/openram-bindings.sv connects .clk0(clk), .clk1(clk)',
  'power_up':'Uninitialized memory bits and dout remain unspecified/X; never zero-initialized. Testbench initialization writes are stimulus only.',
  'reset':'SRAM modules have no reset. Data and output hold through top resets; outer read_seen_q can mask rdata while reset, without clearing storage.',
  'ff_read':'At enabled rising edge, return post-write merged word for same address; hold dout on disabled reads.',
  'openram_read':'Raw macro reads complete in low phase; low-level output latch retains data through idle/X phases. Whole-GPU timing and cycle-port equivalence still required.',
  'openram_phase_equivalence_claimed':False,'openram_collision_solution':'Split each logical write granule into independent unmasked 1W1R SRAM; mask slice collision read, bypass captured complete slice.',
  'macro_mapping':mapping,'source_sha256':before,'source_unmodified_after_export':all(sha(Path(p))==h for p,h in before.items()),
  'eda_executed':False,'physical_evidence_complete':False,'status':'INPUTS_EXPORTED_PENDING_SEMANTIC_RTL_AND_PHYSICAL_VALIDATION'}
 assert contract['source_unmodified_after_export']
 dump('export-contract.json',contract)
 print(json.dumps({'status':contract['status'],'logical_shapes':4,'logical_instances':37,'memory_bits':bits,'raw_sliced_instances':164,'sources_unchanged':True}))

if __name__=='__main__':main()
