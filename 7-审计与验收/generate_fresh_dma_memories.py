from pathlib import Path
import sys,subprocess,json,hashlib,shutil,time,re
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.enumerate_vortex_sram_variants import enumerate_rams
from scripts.generate_vortex_openram_bindings import generate
O=R/'9-GPU复现/整机DMA重建';C=Path('/root/.cache/routeb-dma-rebuild');project=O/'project-unmapped.v';t=time.monotonic();assert project.is_file()
q=C/'project-original.v';shutil.copyfile(project,q)
with (O/'enumerate.log').open('w') as f:p=subprocess.run(['yosys','-p',f'read_verilog -sv {q}; hierarchy -check -top Vortex; proc; opt_clean; write_json {C}/original.json'],stdout=f,stderr=subprocess.STDOUT,timeout=300)
assert p.returncode==0,'enumeration failed'
rams=enumerate_rams(json.loads((C/'original.json').read_text()));assert rams
physical=[];variants=[]
for (kind,w,depth,mask),count in sorted(rams.items()):
 name=f'vortex_{"dp" if "dp" in kind else "sp"}_{w}x{depth}_w{mask}'
 variants.append(dict(module=kind,macro_name=name,data_width=w,depth=depth,write_enable_width=mask,instance_count=count,port_topology='1r1w',physical_macro=name not in ['vortex_dp_256x64_w32','vortex_sp_512x64_w64','vortex_sp_512x128_w64']))
for row in variants:
 if row['physical_macro']:physical.append(row)
# The existing wide wrappers split into these real shapes.
for w,depth,mask in [(64,128,8),(128,128,16)]:
 if any(not x['physical_macro'] for x in variants):
  name=f'vortex_sp_{w}x{depth}_w{mask}'
  if not any(x['macro_name']==name for x in physical):physical.append(dict(macro_name=name,data_width=w,depth=depth,write_enable_width=mask))
plan=dict(schema_version=1,profile='fresh-routeb-ASIC-STD-PERF',variants=variants,reference_physical_identity=False)
text,boxes,bindings=generate(plan,project.read_text());(O/'project-banked.v').write_text(text);(O/'macros-blackboxes.v').write_text(boxes);(O/'openram-bindings.sv').write_text(bindings);(O/'openram-banked-logical-plan.json').write_text(json.dumps(plan,indent=2));models=[]
for row in physical:
 name,w,depth,mask=[row[k] for k in ['macro_name','data_width','depth','write_enable_width']];addr=(depth-1).bit_length();maskport=f'input wire [{mask-1}:0] wmask0,' if mask>1 else '';maskwire='wmask0' if mask>1 else "1'b1"
 model=f'''// Functional SRAM reconstruction from logical 1r1w/mask contract.
// NOT an OpenRAM generated/characterized physical model; no PPA identity claimed.
module {name}(input wire clk0,csb0,{maskport} input wire[{addr-1}:0] addr0,input wire[{w-1}:0] din0,input wire clk1,csb1,input wire[{addr-1}:0] addr1,output reg[{w-1}:0] dout1);
parameter VERBOSE=0;
reg[{w-1}:0] mem[0:{depth-1}];
wire[{mask-1}:0] mask={maskwire};
always @(posedge clk0)if(!csb0)for(integer i=0;i<{mask};i=i+1)if(mask[i])mem[addr0][i*{w//mask}+:{w//mask}]<=din0[i*{w//mask}+:{w//mask}];
always @(posedge clk1)if(!csb1)begin
 dout1<=mem[addr1];
 // Same-clock read/write collision: write-through only enabled slices.
 if(!csb0&&addr0==addr1)for(integer i=0;i<{mask};i=i+1)if(mask[i])dout1[i*{w//mask}+:{w//mask}]<=din0[i*{w//mask}+:{w//mask}];
end
endmodule
'''
 p=O/'models'/f'{name}.v';p.parent.mkdir(exist_ok=True);p.write_text(model);models.append({'macro_name':name,'data_width':w,'depth':depth,'write_enable_width':mask,'artifacts':{p.name:{'path':str(p),'sha256':hashlib.sha256(p.read_bytes()).hexdigest()}}})
manifest=dict(schema_version=1,status='FUNCTIONAL_MODELS_GENERATED_PENDING_VALIDATION',physical_qualification=False,teacher_model_identity=False,model_semantics='single-clock-compatible 1R1W synchronous read, per-slice write enable, explicit write-through collision',macros=models)
(O/'staged-openram-banked-manifest.json').write_text(json.dumps(manifest,indent=2));state={'status':'FRESH_MACRO_BINDING_GENERATED','logical_shapes':variants,'physical_model_shapes':len(models),'reference_physical_identity':False,'physical_evidence_complete':False,'seconds':time.monotonic()-t,'artifacts':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in O.glob('*.v')}};(O/'binding-status.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2))

