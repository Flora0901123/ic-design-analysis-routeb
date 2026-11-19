from pathlib import Path
import subprocess,re,json,hashlib
R=Path(__file__).resolve().parents[1];B=R/'8-本轮实验';OUT=B/'CPU-Nano四组消融';OUT.mkdir(exist_ok=True)
names={'baseline':'nano-baseline-1793253668984369265','topk':'nano-topk-1793255650650794953','rne':'nano-rne-1793800891379470871','combined':'nano-combined-1793254628177918766'}
reports={};traces={};bindings={}
for name,folder in names.items():
 p=B/folder;s=json.loads((p/'status.json').read_text());assert s['status']=='TRANSCRIPTS_COLLECTED' and s['question']=='一加一等于几'
 log=(p/'console-000.log').read_text(errors='replace');traces[name]=re.findall(r'STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+).*?hidden=([0-9a-f,]+) logits=([0-9a-f,]+)',log)
 assert len(traces[name])==5
 elf=p/'soc/software/bios/bios.elf';dis=subprocess.check_output(['riscv64-unknown-elf-objdump','-d',str(elf)],text=True);(OUT/(name+'-bios.disasm')).write_text(dis)
 sections=re.split(r'(?m)^([0-9a-f]+ <[^>]+>:)\n',dis);fns={}
 for i in range(1,len(sections),2):
  title=sections[i];body=sections[i+1]
  if any(k in title for k in ['<rne_div>','<rne15>','<mini_native_scalar_attention.part.0>']):fns[title]=body
 (OUT/(name+'-attention-rne.disasm')).write_text('\n'.join(t+'\n'+b for t,b in fns.items()))
 calls={title:re.findall(r'\b(?:jal|jalr)\b[^\n]*<([^>]+)>',body) for title,body in fns.items()}
 reports[name]={'run':folder,'source_sha256':s['candidate_sha256'],'baseline_sha256':s['baseline_sha256'],'checkpoint_sha256':s['checkpoint_sha256'],'image_sha256':hashlib.sha256((p/'image/image.bin').read_bytes()).hexdigest(),'metrics':s['metrics_mean'],'operator_cycles':s['runs'][0]['operator_cycles'],'tokens':s['runs'][0]['tokens'],'functions_and_calls':calls,'single_trial':True}
 for q in [p/'status.json',p/'console-000.log',elf,p/'student_mini_native_nano.c']:bindings[str(q.relative_to(R))]=hashlib.sha256(q.read_bytes()).hexdigest()
base=reports['baseline']['metrics']
for name,row in reports.items():
 row['reduction_pct_vs_baseline']={k:100*(base[k]-v)/base[k] for k,v in row['metrics'].items()}
 row['hidden_logits_token_identical_to_baseline']=traces[name]==traces['baseline']
 assert row['hidden_logits_token_identical_to_baseline']
assert len({r['checkpoint_sha256'] for r in reports.values()})==1 and len({r['baseline_sha256'] for r in reports.values()})==1 and len({r['image_sha256'] for r in reports.values()})==1
(OUT/'summary.json').write_text(json.dumps({'primary_metric':'ttft_cycles','promotion':'HOLD_PENDING_GATES','runs':reports,'limits':['single input and single trial per build','source size/address layout differs; P3 change is not proof of P3 arithmetic optimization','frozen performance weights and independent protocol/resource gates outstanding']},ensure_ascii=False,indent=2))
(OUT/'证据SHA256.json').write_text(json.dumps(bindings,ensure_ascii=False,indent=2))
print(json.dumps({k:{'metrics':v['metrics'],'reduction_pct':v['reduction_pct_vs_baseline'],'calls':v['functions_and_calls']} for k,v in reports.items()},ensure_ascii=False))
