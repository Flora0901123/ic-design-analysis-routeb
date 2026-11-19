"""Route B auditable runner: reference verification and fresh CPU replay."""
import argparse, datetime, hashlib, json, os, pathlib, re, subprocess, sys
R=pathlib.Path(__file__).resolve().parent
P=R/'student-mini-v1-cpu-gpu'; S=P/'sources'
def sha(p): return hashlib.sha256(p.read_bytes()).hexdigest()
def save(p,x): p.write_text(json.dumps(x,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
def command(cmd,cwd,log,env=None):
    with log.open('w',encoding='utf-8') as f:
        proc=subprocess.run([str(c) for c in cmd],cwd=cwd,env=env,stdout=f,stderr=subprocess.STDOUT)
    if proc.returncode: raise RuntimeError(f'command failed ({proc.returncode}): {log}')
def main():
    a=argparse.ArgumentParser(); a.add_argument('action',choices=['verify-reference','doctor','cpu']);a.add_argument('--limit',type=int,default=1000);a.add_argument('--variant',choices=['baseline','topk'],default='baseline');args=a.parse_args()
    stamp=datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%dT%H%M%S%fZ')
    out=R/'8-本轮实验'/f'{stamp}-{args.action}-{args.variant}';out.mkdir(parents=True)
    state={'action':args.action,'variant':args.variant,'status':'RUNNING','formal_baseline':False,'promotion':'NOT_EVALUATED'};save(out/'status.json',state)
    try:
        if args.action=='verify-reference':
            reference=R/'6-源码引用/原始参考包'
            if not reference.exists():raise RuntimeError('missing immutable reference package')
            command([sys.executable,reference/'verify_release.py'],reference,out/'verify.log')
            state['reference_path']=str(reference)
            state.update(status='REFERENCE_OFFLINE_VERIFIED',scope='reference package only, no target execution')
        elif args.action=='doctor':
            import shutil
            state.update(status='DIAGNOSTIC_ONLY',tools={x:shutil.which(x) for x in ['verilator','riscv64-unknown-elf-gcc','clang','make']},python=sys.executable,venv_exists=(S/'.venv/bin/python').exists())
        else:
            if not 1<=args.limit<=1000: raise ValueError('limit must be 1..1000')
            if sys.platform!='linux': raise RuntimeError('CPU replay requires WSL Linux')
            import importlib.util
            spec=importlib.util.spec_from_file_location('legacy_topk',R/'3-优化链-P1/optimize_p1.py');m=importlib.util.module_from_spec(spec);spec.loader.exec_module(m)
            scalar=S/'software/student_mini_scalar.c'; original=scalar.read_bytes()
            baseline=original.decode();state['original_source_sha256']=sha(scalar)
            if m.NEW_SORT in baseline: baseline=baseline.replace(m.NEW_SORT,m.OLD_SORT)
            if m.OLD_SORT not in baseline: raise RuntimeError('unknown source baseline')
            golden=[json.loads(l) for l in (P/'data/golden/vectors.jsonl').read_text().splitlines()]
            state.update(records_expected=args.limit,scope='fresh CPU target transcript, protocol/formal and physical gates separate',golden_sha256=sha(P/'data/golden/vectors.jsonl'),baseline_sha256=hashlib.sha256(baseline.encode()).hexdigest())
            try:
                candidate=baseline if args.variant=='baseline' else baseline.replace(m.OLD_SORT,m.NEW_SORT)
                scalar.write_text(candidate);(out/'student_mini_scalar.c').write_text(candidate)
                state['candidate_sha256']=sha(scalar)
                import difflib
                (out/'source.diff').write_text(''.join(difflib.unified_diff(baseline.splitlines(True),candidate.splitlines(True),fromfile='baseline',tofile=args.variant)))
                # New output directory for every run: never silently read an old console.
                vectors=S/'vectors.jsonl';vectors.write_bytes((P/'data/golden/vectors.jsonl').read_bytes())
                py=pathlib.Path(os.environ.get('COURSE_PYTHON',str(S/'.venv/bin/python')))
                state['python_executable']=str(py)
                env=dict(os.environ,PATH=str(py.parent)+':'+os.environ.get('PATH',''),PYTHON=str(py),COURSE_VERILATOR_BIN='/usr/bin/verilator')
                command([py,S/'scripts/export_student_mini_input.py','--vectors',vectors,'--output',out/'input-images'],S,out/'export.log',env)
                exported=json.loads((out/'export.log').read_text().strip().splitlines()[-1])['work']
                command([py,S/'scripts/run_student_mini_cpu.py','--input-dir',exported,'--limit',args.limit],S,out/'run.log',env)
                text=(out/'run.log').read_text(); work=json.JSONDecoder().raw_decode(text[text.index('{'):])[0]['work']; work=pathlib.Path(work)
                import shutil
                for name in ['console.log','completion.json','inputs.json','build.log']:
                    if (work/name).exists():shutil.copy2(work/name,out/name)
                console=(out/'console.log').read_text();rows=m.parse_console(console);joined=[]
                sys.path.insert(0,str(S))
                from scripts.assemble_student_mini_cpu_results import parse as strict_parse,join as official_join
                strict_rows=strict_parse(console,args.limit)
                state['strict_transcript_validation']='PASS'
                if args.limit==1000:save(out/'official-numeric-report.json',official_join(golden,strict_rows))
                for line in console.splitlines():
                    match=re.search(r'STUDENT_CPU ordinal=(\d+).*?primitive=(-?\d+)',line)
                    if match and int(match[1]) in rows: rows[int(match[1])]['primitive']=int(match[2])
                for i in range(args.limit):
                    g=golden[i]; actual=rows.get(i);expected=g['golden'];ok=actual is not None
                    if actual:
                        statuses={'OK':0,'BAD_DESCRIPTOR':1,'BAD_LENGTH':2,'NUMERIC_ERROR':4,'BUS_ERROR':5}
                        expected_status=expected.get('expected_status')
                        ok=ok and expected_status is not None and actual['status']==statuses.get(expected_status,expected_status)
                        if expected.get('output_bits') is not None:ok=ok and actual['bits']==expected['output_bits']
                        if g['case']['operator']=='p1' and expected.get('selected_token_ids') is not None:ok=ok and actual['selected']==[t for ids in expected['selected_token_ids'] for t in ids]
                        if expected.get('primitive_witness_result') is not None:
                            ok=ok and actual.get('primitive')==expected['primitive_witness_result']
                    joined.append({'ordinal':i,'case':g['case'],'seed':g['seed'],'inputs':g['inputs'],'golden':expected,'actual':actual,'basic_numeric_status_pass':ok,'additional_witness_protocol_validation':'PENDING'})
                with (out/'joined.jsonl').open('w',encoding='utf-8') as f:
                    for row in joined:f.write(json.dumps(row,ensure_ascii=False)+'\n')
                state.update(status='TRANSCRIPT_COLLECTED',records_observed=len(rows),basic_numeric_status_failures=sum(not x['basic_numeric_status_pass'] for x in joined),full_correctness='PENDING_WITNESS_AND_PROTOCOL',completion_marker='STUDENT_CPU_COMPLETE ' in console)
            finally:scalar.write_bytes(original)
        save(out/'status.json',state)
    except Exception as e:
        state.update(status='FAILED',error=f'{type(e).__name__}: {e}');save(out/'status.json',state);print(json.dumps(state,ensure_ascii=False));return 1
    finally:
        save(out/'artifacts.json',{p.name:sha(p) for p in out.iterdir() if p.is_file() and p.name!='artifacts.json'})
    print(json.dumps({'out':str(out),**state},ensure_ascii=False,indent=2));return 0
if __name__=='__main__':raise SystemExit(main())
