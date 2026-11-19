from pathlib import Path
import json,hashlib,shutil,ast
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/整机DMA重建';q=json.loads((O/'dma-event-qualification.json').read_text());assert q['status']=='RECONSTRUCTED_GPU_DMA_FUNCTIONAL_PASS';assert len(q['records'])==33
run=json.loads((O/'whole-gpu-runs/status.json').read_text());trace=json.loads((O/'trace-build/completion.json').read_text());W=Path(trace['work']);assert all(hashlib.sha256(Path(p).read_bytes()).hexdigest()==v for p,v in trace['new_bindings'].items())
for x in run['records']:assert hashlib.sha256((O/'whole-gpu-runs'/f"{x['ordinal']:04d}.log").read_bytes()).hexdigest()==x['log_sha256']
model=json.loads((O/'model-tests/completion.json').read_text());assert model['status']=='FUNCTIONAL_MODEL_TESTS_PASS'
A=O/'platform-attempts'
for w in W.parent.iterdir():
 if not w.is_dir():continue
 d=A/w.name;d.mkdir(parents=True,exist_ok=True)
 for p in [*w.glob('*.log'),*w.glob('*.json'),*w.glob('*.sh')]:
  if p.is_file():shutil.copyfile(p,d/p.name)
 private=w/'source/sim/rtlsim'
 for n in ['Makefile','processor.cpp','rtlsim_shim.sv','physical-top.sv']:
  p=private/n
  if p.is_file():shutil.copyfile(p,d/n)
B=O/'replay-bin';B.mkdir(exist_ok=True)
for p in [W/'student_mini',W/'vortex-build/sw/runtime/librtlsim.so',W/'vortex-build/sw/runtime/libvortex-rtlsim.so']:
 shutil.copyfile(p,B/p.name);(B/p.name).chmod(0o755)
result={'status':'RECONSTRUCTED_GPU_DMA_FUNCTIONAL_PASS','date':'2026-11-08','dma_cases':3,'dma_seeds_per_case':10,'dma_records_passed':30,'normal_controls_golden_matched':3,'sram_functional_model_shapes':4,'reachable_sram_instances':37,'sram_model_checks':sum(x['checks'] for x in model['records']),'hardware_scope':'fresh SRAM-macro-bound Vortex core + real command/memory fault adapters + external memory bridge','teacher_physical_identity':False,'physical_signoff':False,'formal_baseline':False,'overall_release':'HOLD','evidence':'dma-event-qualification.json','no_mixing_with_old_simx':'Old 970/1000 SimX results are not combined with these 30 records into a formal baseline.'}
(O/'DMA验收结论.json').write_text(json.dumps(result,ensure_ascii=False,indent=2));text='''# 整机DMA功能验收结果（2026-11-08）

已完成**新重建硬件边界**上的三例DMA故障功能验收：P1/P2/P3-MINI-30，各seed1–10，30/30通过。另有3条正常控制案例，输出与golden位精确匹配。对象为Vortex真实核＋SRAM宏绑定＋真实故障适配器＋外存桥，不含厂商AFU/xrt板级表面，也不是原老师物理包身份复原。

## 判据与原始证据

每个故障案例均实际发起0xE0000000故障窗口读取，观测到对应已接受响应及设备DCR故障状态；没有数值结果提交（实际status6、count/selected为空；有效BUS_ERROR由设备故障状态确认），错误响应后无新输入payload区域请求。正常控制必须观测到payload访问，避免空观测通过。

- `DMA验收结论.json`：结论与明确边界。
- `dma-event-qualification.json`：33条事件判据逐项结果。
- `whole-gpu-runs/`：每条实际请求/响应、设备状态、完整输出及SHA。
- `trace-build/`：只读观测代码的修改前后源码、编译日志和二进制绑定。
- `project-banked.v`：新生成的宏绑定RTL网表（不是标准单元布局布线后网表）。
- `staged-openram-banked-manifest.json`、`models/`：4种功能重建SRAM模型、来源及SHA；未冒充OpenRAM原始模型。
- `model-tests/`：独立Python记分板与Icarus验证共2272检查通过。
- `platform-attempts/`：完整核构建、失败过程、覆盖层代码与成功回执。
- `replay-bin/`：本机实际执行的内核程序及仿真库；依赖仍按本机锁定环境提供。

注意：`completion.json`是冻结的构建输入回执，保持原字节以供哈希审计；最终DMA结论以`DMA验收结论.json`为准。旧预检描述原物理包缺件，保留历史不回填通过。

## 尚未完成的资格

功能模型按同步1R1W、掩码写和明确write-through冲突语义重建；37个实例来自实际可达层次。它们没有OpenRAM对应lib/lef/gds，也没有原报告的物理身份。不能据此宣称原物理报告复现、时序/面积/功耗通过，或正式PROMOTE。也不把旧SimX的970条与本轮30条拼成同一冻结硬件1000条通过。新硬件的完整1000条、原协议覆盖门、物理资源与异机验收仍另行开展。

## 本机复核

在WSL中执行`python3 7-审计与验收/run_fresh_dma_cases.py`可重跑33条，随后执行`python3 7-审计与验收/qualify_fresh_dma_events.py`复核全部事件。脚本要求成功构建与观测版源码/二进制哈希一致，否则拒绝执行。重建路径见各export/generate/build/instrument脚本；当前复现已验证范围为本机，不预填异机通过。
''';(O/'验收报告.md').write_text(text,encoding='utf-8')
files=[p for p in O.rglob('*') if p.is_file() and p.name!='验收证据SHA256.json'];(O/'验收证据SHA256.json').write_text(json.dumps({p.relative_to(O).as_posix():hashlib.sha256(p.read_bytes()).hexdigest() for p in files},ensure_ascii=False,indent=2));print(json.dumps(result,ensure_ascii=False))
