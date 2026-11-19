"""Full frozen-vector host preflight; never a hardware baseline or performance result."""
from pathlib import Path
import ctypes,hashlib,importlib.util,json,subprocess,sys
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S))
from scripts.export_student_mini_input import encode
spec=importlib.util.spec_from_file_location('topk',R/'3-优化链-P1/optimize_p1.py');m=importlib.util.module_from_spec(spec);spec.loader.exec_module(m)
base=(S/'software/student_mini_scalar.c').read_text().replace(m.NEW_SORT,m.OLD_SORT)
if base.count(m.OLD_SORT)!=1:raise ValueError('source seam mismatch')
out=R/'8-本轮实验/CPU全向量主机预检';out.mkdir(parents=True,exist_ok=True)
class Result(ctypes.Structure):
    _fields_=[('status',ctypes.c_uint32),('count',ctypes.c_uint32),('selected_count',ctypes.c_uint32),('output',ctypes.c_uint16*32),('selected',ctypes.c_uint8*8),('primitive',ctypes.c_int32)]
rows=[json.loads(l) for l in (R/'student-mini-v1-cpu-gpu/data/golden/vectors.jsonl').read_text().splitlines()];summary=[]
for name,text in [('baseline',base),('topk',base.replace(m.OLD_SORT,m.NEW_SORT))]:
    src=out/(name+'.c');src.write_text(text);lib=out/(name+'.so')
    subprocess.run(['gcc','-shared','-fPIC','-O2','-ffp-contract=off','-I',str(S/'software'),str(src),str(S/'software/operator_scalar.c'),'-o',str(lib)],check=True)
    fn=ctypes.CDLL(str(lib)).student_mini_execute;fn.argtypes=[ctypes.c_void_p,ctypes.POINTER(Result)]
    results=[]
    for i,g in enumerate(rows):
        data=ctypes.create_string_buffer(encode(g,i));r=Result();fn(data,ctypes.byref(r));expected=g['golden'];status={'OK':0,'BAD_DESCRIPTOR':1,'BAD_LENGTH':2,'NUMERIC_ERROR':4,'BUS_ERROR':5}[expected['expected_status']]
        adapter=r.status==6 and status==5
        actual={'status':r.status,'bits':list(r.output[:r.count]),'selected':list(r.selected[:r.selected_count]),'primitive':r.primitive}
        checks={'status':r.status==status}
        if expected.get('output_bits') is not None:checks['bits']=actual['bits']==expected['output_bits']
        if g['case']['operator']=='p1' and expected.get('selected_token_ids') is not None:checks['selected']=actual['selected']==[t for ids in expected['selected_token_ids'] for t in ids]
        if expected.get('primitive_witness_result') is not None:checks['primitive']=r.primitive==expected['primitive_witness_result']
        results.append({'ordinal':i,'case':g['case']['id'],'seed':g['seed'],'actual':actual,'checks':checks,'host_status':'TARGET_ADAPTER_REQUIRED' if adapter else 'PASS' if all(checks.values()) else 'FAIL'})
    with (out/(name+'.jsonl')).open('w') as f:
        for row in results:f.write(json.dumps(row)+'\n')
    summary.append({'variant':name,'source_sha256':hashlib.sha256(text.encode()).hexdigest(),'records':len(rows),'pass':sum(x['host_status']=='PASS' for x in results),'adapter_required':sum(x['host_status']=='TARGET_ADAPTER_REQUIRED' for x in results),'fail':sum(x['host_status']=='FAIL' for x in results)})
report={'scope':'host preflight only; no target timing, protocol or physical proof','results':summary}
(out/'summary.json').write_text(json.dumps(report,indent=2));print(json.dumps(report,indent=2));raise SystemExit(any(x['fail'] for x in summary))
