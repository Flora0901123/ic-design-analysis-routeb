"""Independent completion check; reads existing target evidence, never reruns it."""
from pathlib import Path
import json,hashlib,re,statistics,datetime
R=Path(__file__).resolve().parents[1];E=R/'8-本轮实验';F=E/'CPU-Nano固定ROM-组合冻结12题-1794286018612642703';Q=E/'CPU-Nano固定ROM-组合有限重启-1794285753919289018';A=E/'CPU-Nano固定ROM-StrideRNE2x2-1794284177187099883';G=E/'Nano冻结问题双端验收-20261108';O=E/'CPU-Nano组合最终确认-20261110';O.mkdir(exist_ok=True);sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();bindings={}
def bind(p):
 p=Path(p);assert p.is_file();rel=p.relative_to(R).as_posix();bindings[rel]=sha(p);return p
def read(p):return json.loads(bind(p).read_text(encoding='utf-8-sig'))
def local(p):
 for prefix in ['/mnt/d/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付','/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付']:
  if p.startswith(prefix+'/'):return R/p[len(prefix)+1:]
 return Path(p)
def trace(p):
 t=bind(p).read_text(encoding='utf-8',errors='replace');rows=re.findall(r'^STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+).*?hidden=([0-9a-f,]+) logits=([0-9a-f,]+)$',t,re.M);assert rows and [int(x[0]) for x in rows]==list(range(len(rows)));assert all(len(x[2].split(','))==16 and len(x[3].split(','))==256 for x in rows);assert 'STUDENT_NATIVE_CPU_COMPLETE ' in t;return rows,t
if (O/'验收结论.json').exists():
 old=json.loads((O/'evidence-sha256.json').read_text());assert all(sha(R/p)==h for p,h in old.items());print('existing independent confirmation verified, unchanged');raise SystemExit(0)
a=read(A/'summary.json');f=read(F/'status.json');q=read(Q/'status.json');assert a['status']=='FIXED_ROM_2X2_VERIFIED' and f['status']=='FROZEN_COMBO_FIXEDROM_12_PASS' and q['status']=='FINITE_FRESH_RESETS_3_PLUS_3_PASS'
for folder in [A,F]:
 for rel,h in read(folder/'evidence-sha256.json').items():
  target=folder/rel
  if not target.is_file():target=R/rel
  assert sha(bind(target))==h
for group in read(Q/'bindings.json').values():
 for p,h in group.items():assert sha(bind(local(p)))==h
sources={x['variant']:local(x['work']) for x in a['records']};reference,_=trace(sources['baseline']/'console-000.log');assert len(reference)==5;metrics={}
for variant in ['baseline','stride_rne15']:
 values=[]
 for index in range(3):
  rows,text=trace(Q/f'{variant}-{index:02d}.log');assert rows==reference;record=next(x for x in q['records'] if x['variant']==variant and x['run']==index);assert sha(Q/f'{variant}-{index:02d}.log')==record['log_sha256'];elapsed=[(int(h)<<32)|int(l) for h,l in re.findall(r'^STUDENT_NATIVE_TOKEN .*?elapsed_cycles=(\d+):(\d+)',text,re.M)];summary=re.findall(r'^STUDENT_NATIVE_CPU status=(\d+) count=(\d+) cycles=(\d+):(\d+)',text,re.M);assert len(summary)==1 and summary[0][:2]==('0',str(len(rows))) and len(elapsed)==len(rows);m={'ttft_cycles':elapsed[0],'per_token_decode_cycles':statistics.mean(b-a for a,b in zip(elapsed,elapsed[1:])),'session_cycles':(int(summary[0][2])<<32)|int(summary[0][3])};assert all(m[k]==record[k] for k in m);values.append(m)
 assert all(v==values[0] for v in values);metrics[variant]=values[0]
assert len(q['records'])==6 and len(f['records'])==12 and {x['index'] for x in f['records']}==set(range(12));g=read(G/'completion.json');total=0;basegate=sources['baseline']/'soc/gateware'
def uncomment(raw):
 token=re.compile(rb'"(?:\\.|[^"\\])*"|/\*.*?\*/|//[^\n]*',re.S)
 return token.sub(lambda m:b' ' if m[0].startswith((b'//',b'/*')) else m[0],raw)
for row in f['records']:
 n=f"{row['index']:02d}";actual,text=trace(F/n/'console.log');expected,_=trace(G/n/'cpu-console.log');assert actual==expected and sha(F/n/'console.log')==row['console_sha256'];assert [int(x[1]) for x in actual]==row['tokens'];work=local(row['work']);gate=work/'soc/gateware';assert sha(bind(gate/'obj_dir/Vsim'))==a['simulator_sha256'];assert sha(bind(work/'student_mini_native_nano.c'))==f['candidate_source_sha256'];m=read(work/'image/manifest.json');old=next(x for x in g['records'] if x['index']==row['index']);assert sha(bind(work/'image/image.bin'))==m['image_sha256']==old['image_sha256'] and m['contains_expected_tokens'] is False
 for name in ['sim.v','sim_header.h','sim_init.cpp','sim_config.js']:
  left=bind(gate/name).read_bytes();right=bind(basegate/name).read_bytes();assert (uncomment(left)==uncomment(right)) if name=='sim.v' else left==right
 assert read(work/'rom-policy.json')['capacity_bytes']==131072;total+=len(actual)
assert total==81;gains={k:100*(1-metrics['stride_rne15'][k]/metrics['baseline'][k]) for k in metrics['baseline']};assert gains['ttft_cycles']>=2 and all(x>=0 for x in gains.values());assert not a['formal_promote'] and not f['formal_promote'] and not q['formal_promote'];bind(__file__)
result={'status':'CPU_COMBO_RESET3X2_FROZEN12_INDEPENDENTLY_SEALED','date':datetime.datetime.now(datetime.timezone(datetime.timedelta(hours=8))).date().isoformat(),'fresh_interleaved_resets_per_variant':3,'frozen_questions_passed':12,'token_steps_compared':81,'hidden_bf16_values_compared':1296,'logit_bf16_values_compared':20736,'all_inputs_match_frozen_images':True,'target_input_contains_expected_answers':False,'same_compiled_simulator':a['simulator_sha256'],'rom_capacity_bytes':131072,'metrics':metrics,'cycle_reduction_percent':gains,'primary_metric':'ttft_cycles','primary_threshold_reached':True,'repeat_counters_identical':True,'formal_promote':False,'physical_ppa':'HOLD','performance_scope':'one preregistered question, matched new ROM/model; frozen12 validates correctness, not historical timing speedup','evidence_files':len(bindings)}
(O/'evidence-sha256.json').write_text(json.dumps(bindings,ensure_ascii=False,indent=2),encoding='utf-8');(O/'验收结论.json').write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf-8');print(json.dumps(result,ensure_ascii=False,indent=2))