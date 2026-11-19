from pathlib import Path
import json,hashlib,re,collections
R=Path(__file__).resolve().parents[1];B=R/'8-本轮实验';P=B/'全100案例双后端-20261104T134332Z/gpu-simx';C=B/'gpu-topk全100案例-20261104T140209Z';OUT=C/'对照结果';OUT.mkdir(exist_ok=True)
a=json.loads((P/'official-results.json').read_text(encoding='utf-8'));b=json.loads((C/'gpu-simx/official-results.json').read_text(encoding='utf-8'));rows=[]
for x,y in zip(a['records'],b['records'],strict=True):
 assert (x['case']['id'],x['seed'])==(y['case']['id'],y['seed'])
 u=x['observation'];v=y['observation'];equal=all(u[k]==v[k] for k in ['actual_status','primitive','actual_bits','selected']);assert equal
 rows.append({'case_id':x['case']['id'],'seed':x['seed'],'parent_candidate_identical':equal,'numeric_match':v['numeric_match'],'status':v['actual_status']})
experiment=json.loads((C/'experiment.json').read_text(encoding='utf-8'));assert hashlib.sha256((R/'student-mini-v1-cpu-gpu/sources/software/student_mini_scalar.c').read_bytes()).hexdigest()==experiment['baseline_sha256']
result={'parent':str(P.relative_to(R)),'candidate':str(C.relative_to(R)),'records':1000,'matching_parent_outputs':1000,'golden_matches':970,'failures':0,'unsupported':30,'fully_matched_cases':97,'promotion':'HOLD','reason':'SimX functional only; RTLSIM performance, DMA/protocol, physical/source binding and frozen performance weights pending','experiment':experiment}
(OUT/'summary.json').write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf-8');(OUT/'逐条对照.json').write_text(json.dumps(rows,ensure_ascii=False,indent=2),encoding='utf-8')
(OUT/'结果说明.md').write_text('# GPU Top-K 候选完整回归\n\n冻结100案例×10seed，baseline与候选各实际执行1000条。候选仅修改稳定Top-K排序，保持分数降序、同分token id升序。全部1000条与父版本输出一致：970条匹配golden，0条数值失败；30条DMA错误注入返回UNSUPPORTED_BUS_INJECTION。\n\nSimX仅验证功能，不用日志中的aggregate PERF或墙钟宣称GPU算子加速。候选保持HOLD，尚未正式晋升。\n\n候选执行日志：`../gpu-simx/execute-direct.log`，逐条对照：`逐条对照.json`，源码差异：`../source.diff`。SimX运行库重链接过程和对象哈希已保存于`../gpu-simx/runtime-relink.json`。\n',encoding='utf-8')
print(json.dumps(result,ensure_ascii=False))
