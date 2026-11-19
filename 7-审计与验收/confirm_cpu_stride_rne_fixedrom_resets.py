"""A finite, preregistered 3+3 fresh-reset confirmation of one eligible fixed-ROM pair."""
import argparse,json,pathlib,queue,signal,os,subprocess,threading,time,statistics
from qualification_resource_guard import prepare,join,snapshot
from seal_cpu_stride_rne_fixedrom_2x2 import parse,trace,sha
prepare();join();R=pathlib.Path(__file__).resolve().parents[1]
def main():
    ap=argparse.ArgumentParser();ap.add_argument('sealed_2x2',type=pathlib.Path);a=ap.parse_args();summary=json.loads((a.sealed_2x2/'summary.json').read_text());assert summary['combination_ttft_two_percent_and_no_other_metric_regression'] is True
    folders={r['variant']:pathlib.Path(r['work']) for r in summary['records'] if r['variant'] in ['baseline','stride_rne15']};expected=trace(folders['baseline']/'console-000.log');out=R/'8-本轮实验'/('CPU-Nano固定ROM-组合有限重启-'+str(time.time_ns()));out.mkdir()
    plan=[(i,name) for i in range(3) for name in ['baseline','stride_rne15']];state={'status':'RUNNING','registration':'three independent fresh RTL resets per variant; interleaved order fixed before first reset','planned_repeats_per_variant':3,'primary_metric':'ttft_cycles','source_2x2':str(a.sealed_2x2),'records':[],'resource_before':snapshot()};bindings={}
    for name,p in folders.items():
        files=[p/'soc/gateware/obj_dir/Vsim',p/'soc/software/bios/bios.bin',p/'student_mini_native_nano.c',p/'image/image.bin',*list((p/'soc/gateware').glob('*.init'))];bindings[name]={str(f):sha(f) for f in files}
    def save():state['resources']=snapshot();(out/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
    save();(out/'bindings.json').write_text(json.dumps(bindings,indent=2))
    try:
        for run,name in plan:
            work=folders[name];gate=work/'soc/gateware';log=out/(name+'-%02d.log'%run);child=subprocess.Popen([str(gate/'obj_dir/Vsim')],cwd=gate,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True,errors='replace',start_new_session=True);q=queue.Queue()
            def drain(proc,qq):
                for line in proc.stdout:qq.put(line)
                qq.put(None)
            threading.Thread(target=drain,args=(child,q),daemon=True).start();deadline=time.monotonic()+600;complete=False
            try:
                with log.open('w',buffering=1) as f:
                    while time.monotonic()<deadline:
                        try:line=q.get(timeout=.5)
                        except queue.Empty:continue
                        if line is None:break
                        f.write(line)
                        if line.startswith('STUDENT_NATIVE_CPU_COMPLETE '):complete=True;break
            finally:
                if child.poll() is None:os.killpg(child.pid,signal.SIGTERM);child.wait(timeout=10)
            assert complete and trace(log)==expected
            row=parse(log);row.update(variant=name,run=run,complete=True,full_token_hidden_logits_bit_identical=True,log_sha256=sha(log));state['records'].append(row);save();print(json.dumps({'completed':len(state['records']),'variant':name,'run':run}),flush=True)
        assert all(sha(pathlib.Path(p))==h for d in bindings.values() for p,h in d.items())
        metrics={name:{k:{'mean':statistics.mean(r[k] for r in state['records'] if r['variant']==name),'min':min(r[k] for r in state['records'] if r['variant']==name),'max':max(r[k] for r in state['records'] if r['variant']==name),'stdev':statistics.pstdev(r[k] for r in state['records'] if r['variant']==name)} for k in ['ttft_cycles','per_token_decode_cycles','session_cycles']} for name in folders}
        improvement={k:100*(metrics['baseline'][k]['mean']-metrics['stride_rne15'][k]['mean'])/metrics['baseline'][k]['mean'] for k in metrics['baseline']};state.update(status='FINITE_FRESH_RESETS_3_PLUS_3_PASS',metrics=metrics,improvement_percent=improvement,ttft_two_percent_and_no_other_metric_regression=improvement['ttft_cycles']>=2 and all(v>=0 for v in improvement.values()),formal_promote=False,physical_ppa='HOLD')
    except Exception as e:state.update(status='FAILED',error=repr(e))
    save();print(json.dumps({'out':str(out),**state},ensure_ascii=False,indent=2));return 0 if state['status']=='FINITE_FRESH_RESETS_3_PLUS_3_PASS' else 1
if __name__=='__main__':raise SystemExit(main())
