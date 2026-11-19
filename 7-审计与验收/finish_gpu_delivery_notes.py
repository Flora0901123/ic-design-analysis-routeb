from pathlib import Path
import json
R=Path(__file__).resolve().parents[1];d=json.loads((R/'工程全景数据.json').read_text(encoding='utf-8'))
p=R/'5-技术报告/工程全景图说明.md';s=p.read_text(encoding='utf-8-sig');a=s.index('6项独立运行，');b=s.index('\n\n',a);s=s[:a]+f"当前10项已记录运行/构建/验证样本，共{d['total_recorded_seconds']:.6f}秒（{d['total_recorded_seconds']/60:.2f}分钟）。在原6项基础上新增5.040成功构建四阶段之和、锁定版适配器编译运行、两项局部归纳证明和9轮Icarus回归。每项在“工程全景数据.json”保留原始来源；没有把此前失败、等待或人工耗时补入。"+s[b:];s=s.replace('形式验证超时不算证明通过；','早期形式尝试超时不算证明通过，新局部安全归纳通过只覆盖所列性质；');p.write_text(s,encoding='utf-8')
p=R/'7-审计与验收/GPU-DMA协议与环境续做-20261107.md';s=p.read_text(encoding='utf-8-sig');s=s.replace('## 无法由现有报告补出的门槛','## 新环境恢复修正\n\n打包时开发工作区与安装工具可被排除。先按原初始化流程恢复 student-mini-v1-cpu-gpu，随后执行 `python3 7-审计与验收/apply_gpu_adapter_portability_fix.py`，再运行本节的协议与证明脚本。该补丁校验原始/修正后SHA，重复执行安全；遇到未知源码拒绝覆盖。修正后完整源码也随“GPU地址常量兼容修正”证据目录保留。\n\n锁定版5.040适配器最终状态为 **ADAPTER_RTL_PASS，120探针，0断言违规**。统一本机验收记录为 `8-本轮实验/GPU来源与锁定环境-20261105/acceptance-20261107.json`。\n\n## 无法由现有报告补出的门槛');p.write_text(s,encoding='utf-8')
# Only skip generated caches introduced by this continuation, retaining source archives and logs.
p=R/'package_delivery.py';s=p.read_text(encoding='utf-8-sig');s=s.replace("'vortex-toolchain-prebuilt'}","'vortex-toolchain-prebuilt','build-source','build-5.040-obj'}");p.write_text(s,encoding='utf-8')
print('Updated time documentation and reproducible portability patch')
