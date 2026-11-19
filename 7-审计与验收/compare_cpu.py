from pathlib import Path
import hashlib,json,math
R=Path(__file__).resolve().parents[1];runs=R/'8-本轮实验';reports=[]
for folder in runs.glob('*-cpu-*'):
    p=folder/'official-numeric-report.json'
    if p.exists():reports.append((folder,json.loads(p.read_text())))
bases=[x for x in reports if x[0].name.endswith('-baseline')];opts=[x for x in reports if x[0].name.endswith('-topk')]
if not bases or not opts:raise SystemExit('Awaiting complete baseline and candidate official reports')
odir,o=max(opts,key=lambda x:x[0].name)
opt_state=json.loads((odir/'status.json').read_text())
bases=[x for x in bases if json.loads((x[0]/'status.json').read_text()).get('python_executable')==opt_state.get('python_executable') and json.loads((x[0]/'status.json').read_text())['candidate_sha256']==opt_state['baseline_sha256'] and x[0].name<odir.name]
if not bases:raise ValueError('no earlier matching parent source/interpreter')
bdir,b=max(bases,key=lambda x:x[0].name)
brows={(x['case']['id'],x['seed']):x for x in b['records']};orows={(x['case']['id'],x['seed']):x for x in o['records']}
if brows.keys()!=orows.keys():raise ValueError('case/seed sets differ')
joined=[]
for key in sorted(brows):
    x,y=brows[key],orows[key]
    if x['inputs']!=y['inputs'] or x['golden']!=y['golden']:raise ValueError('different workload')
    bc=x['observation']['cycles'];oc=y['observation']['cycles']
    joined.append({'case':key[0],'seed':key[1],'operator':x['case']['operator'],'expected_status':x['golden']['expected_status'],'baseline_cycles':bc,'candidate_cycles':oc,'speedup_ratio':bc/oc,'latency_reduction_pct':100*(1-oc/bc),'regression_over_5pct':oc>bc*1.05,'baseline_numeric_match':x['observation']['numeric_match'],'candidate_numeric_match':y['observation']['numeric_match']})
out=runs/'CPU完整优化对照';out.mkdir(exist_ok=True)
summary=[]
for op in ['p1','p2','p3']:
    rows=[x for x in joined if x['operator']==op];ratio=math.exp(sum(math.log(x['speedup_ratio']) for x in rows)/len(rows))
    summary.append({'operator':op,'records':len(rows),'baseline_mean_cycles':sum(x['baseline_cycles'] for x in rows)/len(rows),'candidate_mean_cycles':sum(x['candidate_cycles'] for x in rows)/len(rows),'exploratory_equal_weight_geomean_ratio':ratio,'exploratory_gain_pct':100*(ratio-1),'regressions_over_5pct':sum(x['regression_over_5pct'] for x in rows)})
result={'parent_run':str(bdir.relative_to(R)),'candidate_run':str(odir.relative_to(R)),'parent_source_sha256':json.loads((bdir/'status.json').read_text())['candidate_sha256'],'candidate_source_sha256':json.loads((odir/'status.json').read_text())['candidate_sha256'],'records':len(joined),'numerically_matching':sum(x['candidate_numeric_match'] is True for x in joined),'summary':summary,'promotion':'HOLD_PENDING_GATES','formal_score':'NOT_EVALUATED','missing_gates':['teacher frozen performance weights not located in provided package','protocol/formal qualification','physical and source identity','resource constraints and side effects','Nano gain'],'scope':'all supplied case/seed ratios equally weighted for exploration; includes error/protocol cases; not the official frozen performance board'}
(out/'summary.json').write_text(json.dumps(result,ensure_ascii=False,indent=2));(out/'joined.json').write_text(json.dumps(joined,ensure_ascii=False,indent=2));print(json.dumps(result,ensure_ascii=False,indent=2))