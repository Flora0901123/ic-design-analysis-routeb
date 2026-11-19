"""Reparse the actual mapped Verilog independently and compare full leaf statistics."""
from pathlib import Path
import hashlib,json,subprocess,time,signal,os,shutil,datetime,re
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU新FF标准单元映射-20261110-v2';S=R/'8-本轮实验/GPU新身份物理输入准备-20261110'
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
def read(p):return json.loads(p.read_text(encoding='utf-8-sig'))
receipt=O/'验收结论.json';manifest=O/'evidence-sha256.json'
if receipt.exists():
 for name,h in read(manifest).items():assert sha(R/name)==h,('sealed mapping changed',name)
 print('UNCHANGED_SEALED_MAPPING');raise SystemExit(0)
st=read(O/'status.json');assert st['status']=='FF_GPU_STANDARD_CELL_MAPPING_PASS_NOT_PHYSICAL_SIGNOFF'
assert sha(O/'ff-mapped.v')==st['mapped_netlist_sha256'] and not st['physical_signoff'] and not st['STA_executed']
lib=R/'8-本轮实验/GPU物理依赖公开来源核对-20261109/sky130_fd_sc_hd__tt_025C_1v80.lib'
for name,h in read(O/'input-sha256.json').items():assert sha(lib if name=='sky130.lib' else S/name)==h,('source changed',name)
W=Path('/root/.cache/routeb-mapped-independent-20261110');W.mkdir(exist_ok=False)
shutil.copy2(O/'ff-mapped.v',W/'mapped.v');shutil.copy2(lib,W/'sky130.lib')
script='read_liberty -lib sky130.lib\nread_verilog mapped.v\nhierarchy -check -top vortex_physical_top\ncheck -assert\ntee -o independent-stat.json stat -json -liberty sky130.lib\n'
(W/'check.ys').write_text(script);(O/'independent-check.ys').write_text(script)
start=time.monotonic()
with (O/'independent-check.log').open('w') as log:
 p=subprocess.Popen(['yosys','-s','check.ys'],cwd=W,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
 try:code=p.wait(timeout=240)
 except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError('independent check timeout')
assert code==0,('independent read/check failed',code)
shutil.copy2(W/'independent-stat.json',O/'independent-stat.json');fresh=read(O/'independent-stat.json');original=read(O/'stat.json');d=fresh['design'];old=original['design']
for key in ['num_memories','num_memory_bits','num_processes','num_cells','num_cells_by_type']:assert d[key]==old[key],('leaf statistic mismatch',key)
assert d['num_memories']==d['num_processes']==0 and d['num_cells']>0
assert abs(d['area']-old['area'])<max(1e-5,old['area']*1e-9)
libcells=set(re.findall(r'\bcell\s*\(\s*"?([\w]+)"?\s*\)',lib.read_text()))
assert set(d['num_cells_by_type']) <= libcells and all(n.startswith('sky130_fd_sc_hd__') for n in d['num_cells_by_type'])
raw=(O/'independent-check.log').read_text();assert 'Found and reported 0 problems.' in raw and 'ERROR:' not in raw
files=[p for p in O.iterdir() if p.is_file()];files+=[Path(__file__).resolve(),R/'7-审计与验收/run_new_gpu_ff_mapping_v2.py',lib]
manifest.write_text(json.dumps({p.relative_to(R).as_posix():sha(p) for p in sorted(files)},ensure_ascii=False,indent=2))
result=dict(status='NEW_FF_GPU_STANDARD_CELL_MAPPING_INDEPENDENTLY_SEALED_NOT_PPA',sealed_at=datetime.datetime.now(datetime.timezone.utc).isoformat(),mapped_netlist_sha256=sha(O/'ff-mapped.v'),independent_reparse_seconds=time.monotonic()-start,synthesis_seconds=st['seconds'],standard_cell_count=d['num_cells'],library_cell_area_um2=d['area'],library_cell_area_mm2=d['area']/1e6,mapped_cell_types=len(d['num_cells_by_type']),unresolved_leaf_types=0,remaining_memories=0,remaining_processes=0,source_library_sha256=sha(lib),hierarchy_check='PASS',four_state_preflight_seal='8-本轮实验/GPU新物理入口实测-20261110-v2/验收结论.json',full_mapped_functional_equivalence=False,place_route_executed=False,STA_executed=False,power_energy_measured=False,original_physical_identity=False,physical_signoff=False,formal_promotion='HOLD',limits='Cell library area is synthesis area only, not routed die/core area. FF storage cost is retained; no original physical identity or resource eligibility claimed.',evidence_manifest_sha256=sha(manifest),resources=snapshot())
receipt.write_text(json.dumps(result,ensure_ascii=False,indent=2));print(json.dumps({k:v for k,v in result.items() if k!='resources'},ensure_ascii=False,indent=2))