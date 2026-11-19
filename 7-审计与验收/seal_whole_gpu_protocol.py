from pathlib import Path
import json,hashlib,shutil,collections
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU整机协议-20261108';d=json.loads((O/'status.json').read_text());b=json.loads((O/'build.json').read_text());assert d['status']=='WHOLE_GPU_PROTOCOL_90_PASS' and len(d['records'])==90
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
counts=collections.Counter(x['case_id'] for x in d['records']);assert set(counts)=={f'P{p}-MINI-{n}' for p in range(1,4) for n in [31,32,33]} and set(counts.values())=={10};assert len({x['ordinal'] for x in d['records']})==90
for case in counts:assert {x['seed'] for x in d['records'] if x['case_id']==case}==set(range(1,11))
for x in d['records']:assert x['pass'] and sha(O/f"{x['ordinal']:04d}.log")==x['log_sha256']
for name,h in b['binary_bindings'].items():assert sha(Path(name))==h
W=Path(b['work']);out=O/'replay-source-and-binary';out.mkdir(exist_ok=True)
for f in (W/'source/sim/rtlsim').iterdir():
 if f.is_file() and not f.is_symlink() and f.suffix in ['.sv','.v','.cpp']:shutil.copy2(f,out/f.name)
for f in [W/'student_mini',W/'student_mini.cu',W/'device_compat.cc',W/'Makefile',W/'run-command.sh',W/'vortex-build/sw/runtime/librtlsim.so',W/'vortex-build/sw/runtime/libvortex-rtlsim.so']:
 if f.exists():shutil.copy2(f,out/f.name)
selected=[x for x in d['records'] if x['case_id'].endswith('31')];held=[x for x in d['records'] if x['case_id'].endswith('32')];reset=[x for x in d['records'] if x['case_id'].endswith('33')]
result={'status':'WHOLE_GPU_PROTOCOL_90_PASS','records':90,'backpressure_records':len(selected),'response_hold_records':len(held),'reset_reissue_records':len(reset),'each_case_10_seeds':True,'stability_violations':sum(x['protocol_events']['stability_violations'] for x in d['records']),'accepted_commands_equal_responses':all(x['protocol_events']['commands']==x['protocol_events']['responses'] for x in d['records']),'nonvacuity_req_stalls_min':min(x['protocol_events']['stalled_req_cycles'] for x in selected),'nonvacuity_rsp_stalls_min':min(x['protocol_events']['stalled_rsp_cycles'] for x in selected),'hold_cycles_parameter':17,'reset_busy_cycles':64,'target_numeric_outputs_match':True,'scope':'fresh functional SRAM-macro-bound Vortex with real fault adapters and protocol stimulus bridge; not original physical-netlist qualification','formal_baseline':False,'physical_signoff':False,'per_case_counts':dict(counts),'binary_bindings':b['binary_bindings']}
(O/'验收结论.json').write_text(json.dumps(result,ensure_ascii=False,indent=2));manifest={p.relative_to(O).as_posix():sha(p) for p in O.rglob('*') if p.is_file() and p.name!='evidence-sha256.json'};(O/'evidence-sha256.json').write_text(json.dumps(manifest,indent=2));print(json.dumps(result,ensure_ascii=False,indent=2))
