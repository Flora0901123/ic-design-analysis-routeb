from pathlib import Path
import json,hashlib,shutil,re,os
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU单轮多类计数运行库-20261108';s=json.loads((O/'validation-v3.json').read_text());b=json.loads((O/'build.json').read_text());assert s['status']=='POST_KERNEL_MULTICLASS_4_CONTROL_PASS';assert {x['ordinal'] for x in s['records']}=={0,100,330,660}
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
for x in s['records']:
 f=O/f"probe-v3-{x['ordinal']:04d}.log";assert sha(f)==x['log_sha256'];text=f.read_text();blocks=re.findall(r'ROUTEB_PERF_CLASS_BEGIN group=(\d+)\n(.*?)ROUTEB_PERF_CLASS_END group=\1 code=0',text,re.S)
 assert [v[0] for v in blocks]==['0','4','7'];assert len(set(tuple(re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',body,re.M)[0]) for group,body in blocks))==1
 reads=len(re.findall(r'^DMA_REQ .*write=0 ',text,re.M));writes=len(re.findall(r'^DMA_REQ .*write=1 ',text,re.M));assert (reads,writes)==(x['memory_reads'],x['memory_writes'])
 assert x['dma_handshake_counts_match'] and x['target_counts_identical']
assert sha(O/'runtime/libvortex.so')==b['library_sha256']
for original,h in b['parent_bindings'].items():assert sha(Path(original))==h
W=Path(next(iter(b['parent_bindings']))).parent
for name in ['librtlsim.so','libvortex-rtlsim.so']:
 f=O/'runtime'/name;src=W/'vortex-build/sw/runtime'/name
 if f.is_symlink():
  assert f.resolve()==src.resolve();temp=f.with_suffix(f.suffix+'.materialized');shutil.copyfile(src,temp);assert sha(temp)==sha(src);os.replace(temp,f)
 else:assert sha(f)==sha(src)
 f.chmod(0o755)
(O/'runtime/libvortex.so').chmod(0o755)
(O/'验收说明.md').write_text('''# 单轮多类GPU硬件计数采集

4个控制案例（P1最小/最大、P2、P3）各独立进程、一次内核执行，之后读取MPM类0/4/7。真实目标数值、P1所选token、周期与指令数均与原基线相同。4例外存读写计数均与DMA_REQ实际已接受握手完全一致。

改动仅位于主机公共perf.cpp的报告函数，复制原实现后依次读取三类，未修改目标RTL、内核或编译选项。读计数阶段没有再次发射目标内核。runtime包含实际派生libvortex.so和字节不变的两个RTLSIM运行库；已将Linux链接物化为普通文件，便于Windows打包。

这是一套通过控制测试的采集方法，并非完整性能板，不代表目标加速、物理身份、PPA或PROMOTE。完整case×seed结果仍须真实执行。

两次验证器失败及初次LD_PRELOAD观察器未生效记录均保留；最终结论以validation-v3.json及4份probe-v3日志为准。
''',encoding='utf-8')
for name in ['build_gpu_multiclass_runtime.py','probe_gpu_multiclass_runtime.py']:
 shutil.copyfile(R/'7-审计与验收'/name,O/name)
files={p.relative_to(O).as_posix():sha(p) for p in O.rglob('*') if p.is_file() and p.name not in ['evidence-sha256.json','completion.json']}
(O/'evidence-sha256.json').write_text(json.dumps(files,ensure_ascii=False,indent=2))
result={'status':'POST_KERNEL_MULTICLASS_4_CONTROL_SEALED','controls':4,'kernel_launches_per_control':1,'mpm_classes':[0,4,7],'numeric_and_target_counts_identical':True,'memory_counters_match_actual_DMA_handshakes':True,'formal_performance_board':False,'target_speedup_claim':False,'parent_bindings':b['parent_bindings'],'runtime_library_sha256':{p.name:sha(p) for p in (O/'runtime').iterdir()},'artifacts':len(files)}
(O/'completion.json').write_text(json.dumps(result,ensure_ascii=False,indent=2));print(json.dumps(result,ensure_ascii=False,indent=2))