from pathlib import Path
import json,hashlib
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/整机DMA重建';rows=[json.loads(x) for x in (R/'student-mini-v1-cpu-gpu/data/golden/vectors.jsonl').read_text().splitlines()];targets=[{'ordinal':i,'case_id':x['case']['id'],'seed':x['seed'],'expected_status':x['golden']['expected_status'],'expected_events':x['golden']['expected_events'],'actual_status':'NOT_EXECUTED'} for i,x in enumerate(rows) if x['case']['scenario']=='dma-error'];assert len(targets)==30
(O/'dma-targets.json').write_text(json.dumps({'status':'PENDING_WHOLE_GPU_RUN','records':targets,'physical_reference_identity':False},indent=2))
text='''# 新硬件整机DMA重建（2026-11-08）

当前工作目录：9-GPU复现/整机DMA重建。它是重新生成的功能验证工程，不是老师物理包的缺失原件恢复。

已完成：固定Vortex源码导出ASIC边界；使用sv2v v0.0.12官方发布工具（来源与SHA见sv2v-source.json）；导出project-unmapped.v并生成project-banked.v。按实际可达层次枚举4种RAM、37个实例，生成4种SRAM功能模型与staged-openram-banked-manifest.json。4种模型独立Python参考/Icarus验证共2272检查通过。真实故障窗口volatile读取内核已编译。

SRAM模型依据同步1R1W与掩码写契约重建，定义同地址读写的write-through行为；不是OpenRAM生成/表征模型，没有对应lib/lef/gds，不可用于原物理包面积、时序或功耗验收。manifest只描述生成来源，不预填物理PASS。

整机链路：Vortex真实核→状态/内存适配器→故障窗口译码→外存模型；新内核发起0xE0000000实际读取，仍返回原状态6，只有实际设备DCR故障状态被观察到，才允许在结果汇总中判BUS_ERROR。不得根据输入inject标志直接填写BUS_ERROR。

整机编译曾遇到配置扫描、默认工具5.050与5.040混用、sv2v调度常量函数及5.040 DFG内部错误，原日志与覆盖层源码保留在platform-attempts。使用已验证语义的常量展开和-fno-dfg选项继续构建；该选项影响宿主编译器优化，不修改DUT算法，但仍须实际运行检查。

三例×10seed共30条记录存dma-targets.json，目前为NOT_EXECUTED，不能将文件生成、内核编译或模型单测当成整机DMA完成。后续必须实测总线错误、输出不提交、错误后无新payload DMA，并补正常案例控制及复位重发。

原始老师资料、冻结golden与旧物理报告均未修改；旧预检仍表示原包身份缺件，新重建工程应独立验收。
'''
(O/'重建说明.md').write_text(text,encoding='utf-8');print('Rebuild scope and 30 pending targets recorded')
