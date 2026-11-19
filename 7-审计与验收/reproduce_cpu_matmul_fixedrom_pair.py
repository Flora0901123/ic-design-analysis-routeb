"""One-command fixed-ROM matmul4 pair; run under WSL root with the installed locked toolchain."""
import argparse,json,pathlib,subprocess,sys,time
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=pathlib.Path(__file__).resolve().parents[1]
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--repeat',type=int,default=1);ap.add_argument('--question',default='一加一等于几');a=ap.parse_args()
    assert 1<=a.repeat<=100
    out=R/'8-本轮实验'/('CPU-Nano固定ROM一键复现-'+str(time.time_ns()));out.mkdir()
    state={'status':'RUNNING','question':a.question,'repeat_per_variant':a.repeat,'resource_before':snapshot(),'primary_metric':'ttft','formal_promote':False}
    def save(): (out/'driver-status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
    def run(label,args):
        with (out/(label+'.log')).open('w') as f:
            p=subprocess.run([sys.executable,*map(str,args)],stdout=f,stderr=subprocess.STDOUT)
        if p.returncode:raise RuntimeError(label+' failed; see '+str(out/(label+'.log')))
        return json.loads((out/(label+'.log')).read_text())
    save()
    try:
        runner=R/'7-审计与验收/run_cpu_matmul_fixedrom_trial.py'
        baseline=run('baseline',[runner,'--variant','baseline','--repeat',a.repeat,'--question',a.question]);state['baseline']=baseline['out'];save()
        candidate=run('candidate',[runner,'--variant','matmul4','--repeat',a.repeat,'--question',a.question,'--reuse-from',baseline['out']]);state['candidate']=candidate['out'];save()
        summary=run('seal',[R/'7-审计与验收/summarize_cpu_fixedrom_matmul.py',baseline['out'],candidate['out'],'--out',out]);state.update(status=summary['status'],summary=str(out/'summary.json'))
    except Exception as e:state.update(status='FAILED',error=str(e))
    finally:state['resource_final']=snapshot();save()
    print(json.dumps({'out':str(out),**state},ensure_ascii=False,indent=2));return 0 if state['status']=='FIXED_ROM_PAIR_VERIFIED' else 1
if __name__=='__main__':raise SystemExit(main())
