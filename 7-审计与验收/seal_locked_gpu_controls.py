from pathlib import Path
import json,hashlib,re,shutil
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU锁定硬件四组候选-20261109';a=json.loads((O/'control-status.json').read_text());b=json.loads((O/'routed-control-status-v2.json').read_text());assert a['status']=='LOCKED_SAME_MODEL_16_CONTROL_PASS' and len(a['records'])==16;assert b['status']=='OPERATOR_DISPATCH_8_CONTROL_PASS' and len(b['records'])==8;sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();assert all(sha(Path(p))==h for p,h in b['bindings'].items())
for status,folder in [(a,'controls'),(b,'routed-controls-v2')]:
 for row in status['records']:
  f=O/folder/f"{row['variant']}-{row['ordinal']:04d}.log";assert sha(f)==row['log_sha256'];text=f.read_text();blocks=re.findall(r'ROUTEB_PERF_CLASS_BEGIN group=(\d+)\n(.*?)ROUTEB_PERF_CLASS_END group=\1 code=0',text,re.S);assert [g for g,body in blocks]==['0','4','7'];perf=[re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',body,re.M) for g,body in blocks];assert all(v==perf[0] for v in perf) and perf[0]==[(str(row['instructions']),str(row['cycles']))];assert len(re.findall(r'^DMA_REQ .*write=0 ',text,re.M))==row['external_read_beats'];assert len(re.findall(r'^DMA_REQ .*write=1 ',text,re.M))==row['external_write_beats']
for row in b['records']:
 if row['ordinal']==660 or (row['variant']=='topk' and row['ordinal']==330):
  base=next(x for x in a['records'] if x['ordinal']==row['ordinal'] and x['variant']=='baseline');assert all(row[k]==base[k] for k in ['cycles','instructions','external_read_beats','external_write_beats'])
for n in ['build_locked_gpu_candidates.py','run_locked_gpu_ablation.py','route_locked_gpu_candidate.py','run_locked_gpu_routed_controls.py']:shutil.copy2(R/'7-审计与验收'/n,O/n)
(O/'控制结论说明.md').write_text('''# 5.040同模型控制与分派修补

原始四组4案例×seed1，共16次真实独立目标执行，输出均与golden一致，三类计数的周期/指令一致，外存计数与实际DMA握手一致。基线搬移程序的4控制周期、指令与原生产程序一致。

原始组合P1周期：95244→93260（2.083%）；239990→233692（2.624%）。原始P3却为193616→193864，回退0.128%；原TopK P3回退0.078%。这两项未隐藏，也未默认晋升。

保守分派另有8次真实控制通过。运行时只读取输入描述符的magic、算子、n/k和故障标志，不读取测试编号、seed、golden或问题答案。纯TopK只作用于有选择空间的P1；P2/P3走原基线。组合P1使用TopK/RNE（无选择收益时只RNE），P2使用RNE，P3走原基线。

分派后两个P3控制和纯TopK P2的周期、指令、外存读写均与基线相同。最小P1 TopK为0收益，组合仅RNE改善1.764%，不冒充超过2%。P2组合RNE的读请求有增加，完整流量约束与全量回退板仍需继续。

首次分派验证器错误假定最小P1仍应选择TopK，实际目标正确走基线；失败验证器与原始日志保留，最终以routed-control-status-v2.json为准。全部仍是开发控制，未组成完整100案例×10seed板，未补造老师权重，原物理身份/PPA和正式PROMOTE仍HOLD。
''',encoding='utf-8')
files={p.relative_to(O).as_posix():sha(p) for p in O.rglob('*') if p.is_file() and p.name not in ['evidence-sha256.json','验收结论.json']};(O/'evidence-sha256.json').write_text(json.dumps(files,ensure_ascii=False,indent=2));result={'status':'LOCKED_16_AND_ROUTED_8_CONTROLS_SEALED','raw_ablation_controls':16,'routed_controls':8,'numeric_outputs_match':True,'all_memory_counters_match_DMA_handshakes':True,'P3_control_regression_removed_by_operator_dispatch':True,'pure_TopK_P2_control_uses_baseline':True,'raw_P3_combined_regression_pct':0.12808858772002107,'routed_P3_cycle_regression_pct':0,'formal_performance_board':False,'teacher_physical_identity':False,'formal_promotion':'HOLD','artifacts':len(files)};(O/'验收结论.json').write_text(json.dumps(result,ensure_ascii=False,indent=2));print(json.dumps(result,ensure_ascii=False,indent=2))