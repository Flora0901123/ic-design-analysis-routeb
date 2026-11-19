from pathlib import Path
import json,hashlib,datetime,html,time
from report_evidence import load_gpu_progress,load_physical_progress,load_new_physical_preflight,load_new_physical_mapping,load_physical_followup,render_template
R=Path(__file__).resolve().parents[1]
progress=load_gpu_progress(R);physical=load_physical_progress(R);ffpre=load_new_physical_preflight(R);ffmap=load_new_physical_mapping(R);followup=load_physical_followup(R)
def read(p):return json.loads((R/p).read_text(encoding='utf-8-sig'))
nodes=[]
def n(id,lane,title,status,summary,detail,links=(),seconds=None,time_scope='未记录完整制作耗时'):
 nodes.append(dict(id=id,lane=lane,title=title,status=status,summary=summary,detail=detail,links=list(links),seconds=seconds,time_scope=time_scope,human_time=None))
n('contract',0,'课程合同与评分','done','B 路线 · 20 / 40 / 20 / 20','以教师 rubric 为评分依据：技术报告20、合规正确性40、理解研究20、优化交互20。此图仅展示证据状态，教师尚未评定分数。',['7-审计与验收/老师网页合同快照/rubric.json'])
n('reference',0,'原始参考包 / 离线复核','ref','参考证据 ≠ 本轮重建','保留老师资料与原始参考包。离线校验可证明参考文件与记录一致，不能据此声称当前工程完成物理实现或整机协议验收。',['6-源码引用/原始参考包','8-本轮实验/20261105T084027590707Z-verify-reference-baseline/status.json'])
n('stack',0,'双后端工具栈','partial','VexRiscv RTL / Vortex SimX','Windows + WSL2；CPU RTL、GPU SimX 以及开发版 RTLSIM 已运行。历史实验存在工具版本差异，需要分别保留每次环境指纹。',['1-技术栈与环境/toolchain-snapshot.json','9-GPU复现/rtlsim-optimization/status.json'])
n('freeze',1,'冻结向量与 golden','done','100 案例 × seed 1–10','P1 33例、P2 34例、P3 33例，共100例、每后端每变体1000条记录。使用冻结输入与黄金输出，禁止把缺失或不支持记录算作通过。',['student-mini-v1-cpu-gpu/sources/grading/student-mini'])
n('model',1,'极小 Nano 模型 / 字符表','done','1 层 · hidden 16 · vocab 256','三个算子作为模型注意力及专家计算的元素：P1→DSA/MLA prefill；P2→paged MLA decode；P3→MoE 专家。属于教学极小模型，不能据此宣称完整 DeepSeek 模型部署。',['2-CPU算子与Nano复现','nano.py'])
n('lock',1,'锁定环境与版本审计','partial','5.040 尚无安装通过证据','5.040 官方源码包已保留；当前 status 为 BUILDING，未发现锁定版本适配器通过记录。已有 GPU 开发 RTLSIM 为5.050；不可用新工具的准备工作追认旧结果。',['9-GPU复现/locked-verilator-5.040/status.json','9-GPU复现/locked-verilator-5.040/source.json'])
cp='8-本轮实验/20261029T053512179194Z-cpu-baseline/completion.json'
ct='8-本轮实验/20261029T055241769167Z-cpu-topk/completion.json'
cr='8-本轮实验/全100案例双后端-20261104T134532Z/cpu-rtl/status.json'
gs='8-本轮实验/全100案例双后端-20261104T134332Z/gpu-simx/status-runtime-confirmed.json'
gb='9-GPU复现/rtlsim-optimization/status.json'
gr='8-本轮实验/GPU-RTLSIM四组消融/status.json'
n('cpu',2,'CPU 标量算子 / RTL','done','baseline 与 Top-K 各1000条匹配','VexRiscv 目标端实际运行，位模式与 golden 比较。完成数值证据；协议、资源约束和正式发布资格仍是独立门槛。耗时仅列出一次原始 baseline 构建及执行。',[cp,'8-本轮实验/CPU完整优化对照/summary.json'],read(cp)['elapsed_seconds'],'单次 baseline 构建+执行；其中构建 %.1f s'%read(cp)['build_seconds'])
n('simx',2,'GPU 四组算子 / SimX','partial','每组 970 匹配 + 30 不支持','baseline / Top-K / RNE / combined 各执行1000条，数值失败0，30条 UNSUPPORTED_BUS_INJECTION。SimX 主机墙钟与 aggregate PERF 均不作为 GPU 优化性能结论。',[gs,'9-GPU复现'],read(gs)['elapsed_seconds'],'一次 baseline 已构建后的直接执行')
n('rtlbuild',2,'GPU 开发 RTLSIM 构建','done','Verilator 5.050 · 开发用','实际构建的原生 Vortex RTL 仿真器供开发探针使用。与课程锁定工具、映射硬件及物理包身份尚未完成绑定，构建成功不等于正式验收。',[gb],read(gb)['elapsed_seconds'],'一次开发 RTL 仿真器构建')
n('topk',3,'P1 Top-K 算子优化','partial','CPU 标量有收益；Nano 有退化','CPU 标量全1000条优化对照已保留；等权探索值不代表冻结权重总分。Nano 旧 Top-K 首token退化1.572%，不能把算子收益直接当成会话收益。',['8-本轮实验/CPU完整优化对照/summary.json','8-本轮实验/CPU-Nano四组消融/summary.json'],read(ct)['elapsed_seconds'],'一次 CPU 标量 Top-K 构建+执行；其中构建 %.1f s'%read(ct)['build_seconds'])
n('rne',3,'RNE15 舍入移位优化','done','462,233 个宿主等价用例','用移位和掩码代替特定32768除数下的舍入除法。独立整数参考等价检查462233例通过，仅属宿主语义证据，目标收益由后续 RTL 计数验证。',['8-本轮实验/RNE独立等价检查/result.json'])
n('fallback',3,'Top-K 退化修补决策','partial','v2 / v3 拒绝 · 默认回退基线','有界插入 v2 与 noinline v3 均实际测过，仍退化，保留失败证据。nano.py 的 topk 请求默认选择 baseline；这解决默认选择退化问题，但不构成独立 Top-K 加速成功。combined 分支保持独立。',['8-本轮实验/TopK修补-20261105/修补决策.json','8-本轮实验/TopK修补-20261105/修补说明.md','8-本轮实验/TopK修补-20261105/fallback_check.json'])
n('ablation',4,'CPU Nano 四组消融','partial','组合首token改善 0.792%','同输入“一加一等于几”：baseline 首token3859315，combined 3828746；完整会话7184546→7075832，改善1.513%。四组输出一致。已登记首token主指标，0.792%仍未达2%交互收益门槛。',['8-本轮实验/CPU-Nano四组消融/summary.json'])
n('gpuprobe',4,'GPU RTL 四组探针','partial','4 案例 × 4 变体 = 16 次','同一开发 RTL 库，seed1；组合两个 P1 探针周期94890→92231、239562→232587，减少2.802%/2.912%。包括启动与堆初始化的单案例命令边界，不是完整冻结性能板。',[gr],sum(x['wall_seconds_diagnostic_only'] for x in read(gr)['records']),'16次探针墙钟之和；仅运行成本，不作性能计分')
n('repeat',4,'CPU 独立 RTL 重复验证','done','baseline 100 + combined 100','各100次新启动目标 RTL 均通过，计数无波动。200次属于重复性证据，不增加冻结案例覆盖数量；无完整墙钟日志，不推算制作工时。',['8-本轮实验/Nano基线组合100次重复/summary.json','8-本轮实验/Nano基线组合100次重复/重复验证说明.md'])
n('chat',4,'CPU / GPU 提问与模型边界','partial','√3 回答错误 · 已如实保留','对“根号3等于几”目标运行结果为“我无法获知实时天气。”。两后端11步 token/hidden/logits一致，不等于回答正确；字符表及训练覆盖不足。基准加法回答为“等于二。”。',['2-CPU算子与Nano复现','8-本轮实验'])
n('adapter',5,'GPU 适配器 / 背压 / 恢复','done','独立 RTL 120 个派生探针通过','对真实 memory/status adapter 做请求/响应稳定、忙时START拒绝、sticky fault、新启动清除、复位冲刷及重发测试。120个派生探针，360请求，240主机响应。固定种子延迟探针未复刻原始概率背压；无GPU核及整算子，不能填补整机DMA通过数。',['8-本轮实验/GPU适配器协议-20261105/status.json','8-本轮实验/GPU适配器协议-20261105/transcript.log'])
n('mutation',5,'协议测试灵敏度 / 突变','done','8 / 8 注入缺陷被检测','Icarus 动态回归：正常版本通过，地址、数据、mask、tag、忙启动、响应不稳定、fault缺失、复位不冲刷八个突变均被断言捕获。这是动态测试灵敏度，不是形式证明。',['8-本轮实验/GPU适配器突变-20261105/completion.json'])
n('dma',5,'整机 DMA 三个故障案例','blocked','整机验收仍缺失','缺少 project-banked.v、staged-openram-banked-manifest.json 和对应 SRAM 模型，以及生产脚本依赖。用户确认无其他工程。不能以适配器测试代替整机 DMA 案例。',['8-本轮实验/GPU来源与锁定环境-20261105/physical-source-audit.json'])
n('formal',5,'适配器形式验证','blocked','BMC / SAT / 归纳均超时','三个实际尝试均保留失败证据，未得到证明。动态 RTL 及突变通过不能替代 formal gate。',['8-本轮实验/GPU适配器形式验证-20261105','8-本轮实验/GPU适配器SAT-20261105','8-本轮实验/GPU适配器归纳验证-20261105'])
n('physical',6,'映射硬件 / 物理来源','blocked','50项绑定：12匹配 / 38缺失','参考包物理身份审计：50个关键文件绑定中12个精确SHA匹配、38个文件缺失；当前仿真硬件与参考物理包身份未建立。不得声称本轮完成布局布线、时序或功耗验收。',['8-本轮实验/GPU来源与锁定环境-20261105/physical-source-audit.json'])
n('resources',6,'资源限制 / 功耗 / 异机复现','blocked','本机有结果；正式约束待验','原始CPU completion 显示 aggregate_8gib_cap_validated=false，未完成整机聚合限制资格；面积/功耗不能由周期改善推定。暂无第二台电脑，异机复现尚未开展。',[cp,'00-教师审阅/02-合规与复现检查.md'])
n('promote',6,'正式 baseline / PROMOTE 门','blocked','开发结果不构成正式晋升','需要数值、协议、锁定环境、完整冻结性能板、物理身份及资源门槛共同满足。当前仍 HOLD，不填写晋升通过或虚构优化分数。',['3-优化链-P1/本轮优化总结.md','00-教师审阅/04-未完成事项.md'])
n('audit',7,'证据保留与整理','done','原始证据 / 失败过程保留','整理时仅删除明确可重建缓存；保留原始参考、日志、合规检查、复现与优化失败过程。删除清单及保留文件哈希核对可审查。',['7-审计与验收/整理记录-20261105/整理后保留核对.json','7-审计与验收/整理记录-20261105/删除清单.json'])
n('review',7,'教师审阅 / 评分证据索引','done','22 项评分条目 · 分数待老师评','工作包已设审阅入口、评分证据索引、合规复现检查、优化导航和未完成项。页面的状态数量是展示盘点，不是考核分数。',['00-教师审阅/开始审阅.html','00-教师审阅/01-评分证据索引.md','成果汇报与考核对照.html'])
n('delivery',7,'当前交付状态','partial','可审阅 · HOLD / 未正式发布','已有真实双后端运行、消融、重复验证及适配器证据。整机DMA、形式证明、环境锁定复验、物理资源与正式晋升仍未齐；保留全部边界，交老师据证评分。',['README.md','package_delivery.py','00-教师审阅/04-未完成事项.md'])
edges=[]
def connect(a,*bs):edges.extend([a,b] for b in bs)
connect('contract','freeze','model','lock','review');connect('reference','freeze','physical','audit');connect('stack','cpu','simx','rtlbuild','lock');connect('freeze','cpu','simx','adapter');connect('model','ablation','chat');connect('lock','adapter','promote');connect('cpu','topk','rne','ablation');connect('simx','gpuprobe','chat');connect('rtlbuild','gpuprobe','adapter');connect('topk','fallback','ablation','gpuprobe');connect('rne','ablation','gpuprobe');connect('fallback','repeat','review');connect('ablation','repeat','promote');connect('gpuprobe','promote');connect('repeat','promote','audit');connect('chat','review');connect('adapter','mutation','dma','formal');connect('mutation','promote');connect('dma','promote');connect('formal','promote');connect('physical','promote');connect('resources','promote');connect('promote','delivery');connect('audit','review');connect('review','delivery')
lanes=['资料与合同','冻结与环境','双后端基线','优化与修补','目标端实测','协议与故障','资格与门槛','证据与交付']
# 2026-11-07 continuation: update only from accepting current-source evidence.
new_status=read('8-本轮实验/GPU锁定版适配器-20261107/status.json')
assert new_status['status']=='ADAPTER_RTL_PASS'
for x in nodes:
 if x['id']=='lock':
  x.update(summary='5.040 已安装 · 适配器复跑通过',detail='官方v5.040源码包SHA固定，本机优化版构建完成；120个独立适配器探针通过。版本号对齐，非老师相同二进制。中文路径采用ASCII别名与同字节源码副本。旧GPU性能日志仍属5.050；映射整机尚未锁定复验。',links=['9-GPU复现/locked-verilator-5.040/status.json','8-本轮实验/GPU来源与锁定环境-20261105/acceptance-20261107.json'],seconds=sum(t['seconds'] for t in read('9-GPU复现/locked-verilator-5.040/status.json')['stages']),time_scope='成功安装的4阶段墙钟和；不含此前失败与等待')
 if x['id']=='adapter':
  x['detail']+=' 2026-11-07使用5.040及显式位宽修正后的适配器重新通过，原始源码与工具均有SHA绑定。'
  x.update(links=['8-本轮实验/GPU锁定版适配器-20261107/status.json','8-本轮实验/GPU锁定版适配器-20261107/run.log'],seconds=new_status['elapsed_seconds'],time_scope='5.040适配器编译+运行；120探针，非整机DMA')
 if x['id']=='mutation':
  x.update(links=['8-本轮实验/GPU适配器突变-20261107/completion.json'],seconds=sum(t['elapsed_seconds'] for t in read('8-本轮实验/GPU适配器突变-20261107/completion.json')['records']),time_scope='修正后Icarus正常版与8个突变，9轮墙钟和')
 if x['id']=='dma':
  x.update(summary='三例 × 10 seeds：30条未执行',links=['8-本轮实验/GPU整机DMA预检-20261107/completion.json','8-本轮实验/GPU来源与锁定环境-20261105/physical-source-audit.json'])
 if x['id']=='formal':
  x.update(status='partial',summary='局部安全归纳通过 · 原验收门待齐',detail='对真实全位宽memory/status adapter，内存契约归纳长度2、命令契约长度3证明成功，初始复位，其余输入无附加约束。修复Yosys0.33将状态地址全1常量展开为1位的差异，改显式位宽复制；前后展开与反例保留。证明仅覆盖所列局部安全性质，原组合harness32步/覆盖、GPU核/SRAM/整机活性不在本次证明内。',links=['8-本轮实验/GPU适配器局部契约-20261107/completion.json','8-本轮实验/GPU地址常量兼容修正-20261107/elaboration-comparison.json','7-审计与验收/GPU-DMA协议与环境续做-20261107.md'],seconds=sum(t['elapsed_seconds'] for t in read('8-本轮实验/GPU适配器局部契约-20261107/completion.json')['records']),time_scope='两项成功局部归纳证明墙钟和；不含早期失败')
 if x['id']=='delivery':
  x['detail']='已有真实双后端实测、适配器5.040复验、局部安全归纳与突变证据。整机DMA、原协议验收门、完整冻结性能板、映射物理与资源门槛仍未齐；保持HOLD，交老师据证评分。'

# Only genuine, separate recorded executions are included. No human-hour extrapolation.
# Fresh reconstructed DMA boundary has its own hardware identity.
for x in nodes:
 if x['id']=='dma':
  x.update(status='done',summary='新重建边界 30/30 · 3条正常控制',detail='已生成新的宏绑定RTL网表、manifest与4种SRAM功能模型，37宏实例；2272模型检查通过。三例DMA各10seed实际运行，设备DCR故障与错误请求/响应可观测，数值输出为空，错误后无新输入payload请求；3条正常控制golden匹配。属于新功能硬件，不是原老师物理包身份复原，不与旧SimX970条拼接为正式baseline。',links=['9-GPU复现/整机DMA重建/验收报告.md','9-GPU复现/整机DMA重建/DMA验收结论.json','9-GPU复现/整机DMA重建/dma-event-qualification.json','9-GPU复现/整机DMA重建/staged-openram-banked-manifest.json'],seconds=sum(t['seconds'] for t in read('9-GPU复现/整机DMA重建/whole-gpu-runs/status.json')['records']),time_scope='新重建边界30条DMA+3条正常控制的33次运行墙钟和')
 if x['id']=='delivery':x['detail']='新增新重建GPU宏绑定边界DMA功能30/30、3条正常控制golden匹配；网表、manifest、功能SRAM与总线证据保留。原物理身份、完整冻结性能板、原协议覆盖和资源签核仍未齐，正式发布保持HOLD。'

# 2026-11-08: sealed whole-platform protocol and dual-target frozen Nano evidence.
protocol=read('8-本轮实验/GPU整机协议-20261108/验收结论.json');assert protocol['status']=='WHOLE_GPU_PROTOCOL_90_PASS'
frozen=read('8-本轮实验/Nano冻结问题双端验收-20261108/completion.json');assert frozen['status']=='FROZEN_NANO_DUAL_TARGET_12_PASS'
for x in nodes:
 if x['id']=='formal':
  x.update(status='done',summary='原32步安全 / 12覆盖 / 8突变通过',detail='真实fault适配器局部归纳通过；另将原generic命令/两个512位内存接口分区，保留全部原断言与假设。命令32步BMC、内存初始检查+归纳通过，12覆盖可达、8原突变被检出。GPU核、SRAM与全系统活性不在该形式证明范围。',links=['8-本轮实验/GPU原协议门-20261108/smt32/completion.json','8-本轮实验/GPU适配器局部契约-20261107/completion.json'],seconds=x['seconds']+read('8-本轮实验/GPU原协议门-20261108/smt32/completion.json')['elapsed_seconds'],time_scope='两项局部归纳与原组合协议门成功选中运行墙钟和；不含早期失败')
 if x['id']=='adapter':
  x.update(summary='120局部探针 + 90整机协议通过',detail='局部适配器120探针之外，新宏绑定Vortex整机的P1/P2/P3 × MINI-31/32/33 × 10seed共90条通过：背压、响应保持、忙态64周期复位重发各30条；稳定性违例0，命令响应数相等，数值输出匹配。物理身份仍单独核验。',links=['8-本轮实验/GPU整机协议-20261108/验收结论.json','8-本轮实验/GPU锁定版适配器-20261107/status.json'],seconds=x['seconds']+sum(r['seconds'] for r in read('8-本轮实验/GPU整机协议-20261108/status.json')['records']),time_scope='120局部探针编译运行+90条整机协议逐条墙钟和；不含整机构建，不当作项目历时')
 if x['id']=='chat':
  x.update(summary='冻结12题双端通过；扩展√3仍答错',detail='同一冻结模型和输入，CPU RTL/GPU SimX各12题通过，81步token、1296个hidden值和20736个logits值逐位一致。问候、自我介绍、天气诚实回退和固定加法覆盖齐；根号3扩展回答错误保留。SimX不用于GPU性能结论，开放表达质量仍需教师审核。',seconds=read('8-本轮实验/Nano冻结问题GPU目标-20261108/status.json')['elapsed_seconds']+read('8-本轮实验/Nano冻结问题CPU目标-20261108/status.json')['elapsed_seconds'],time_scope='GPU12题全流程+本次CPU恢复5题流程；不含迁移前CPU7题，非双端完整总工时')
 if x['id']=='lock':x['detail']='官方5.040来源与SHA固定，适配器120探针、新宏绑定整机DMA30条及协议90条实际使用5.040。旧5.050性能数据保留版本边界，不追认；原物理硬件身份仍未建立。'
 if x['id']=='physical':x.update(summary='压缩复核：26/50匹配，24仍缺',detail='原审计未展开部分.gz视图。按原SHA解压复核后新增14项精确匹配，现26/50；仍缺SRAM LIB/LEF等及部分绑定版本。保留恢复文件和原失败审计。不能据此声称原物理身份已建立或本轮已完成PPA。',links=['8-本轮实验/GPU压缩物理视图复核-20261108/completion.json','8-本轮实验/GPU来源与锁定环境-20261105/physical-source-audit.json'])
 if x['id']=='resources':x.update(status='partial',summary='新验收2vCPU/8GiB限制已启用',detail='恢复的GPU整机协议与CPU冻结题进程置于同一cgroup，CPU配额2核、内存8GiB、swap为0；实际峰值和OOM计数留存。旧记录不追认资源资格。面积、功耗/能耗与异机复现仍未闭合。',links=['8-本轮实验/GPU整机协议-20261108/status.json','8-本轮实验/资源限制-20261108/activation.json'])
 if x['id']=='delivery':x['detail']='已补原适配器形式门、新DMA30/30、整机协议90/90及冻结Nano双端各12题。GPU同硬件全1000条仍在执行，完整性能板、原物理身份、能耗和最终封包复现待齐，保持HOLD。'

for x in nodes:
 if x['id']=='resources':x.update(summary='2vCPU/8GiB；三类计数4控制通过',detail=x['detail']+' 单轮执行后读取MPM0/4/7，4个控制的外存读写数与实际DMA握手一致；原目标周期/指令不变。完整流量与PPA仍待齐。',links=x['links']+['8-本轮实验/GPU单轮多类计数运行库-20261108/completion.json'])
 if x['id']=='delivery':x.update(summary='清单展开1.83GiB；最终ZIP待验',detail=x['detail']+' 打包规则已排除可重建编译缓存，保留实际二进制、输入、源码和原始日志；工作区删除0文件，最终ZIP和干净环境待验。',links=x['links']+['7-审计与验收/打包预检-20261108/completion.json'])

for x in nodes:
 if x['id']=='physical':x.update(summary=f"来源恢复{physical['exact']}/{physical['total']}匹配，{physical['missing']}仍缺",detail=physical['note']+' 在历史压缩视图26项及标准单元LIB27项核对之后，按发布生成规则恢复5项精确SHA匹配；旧审计作为历史保留。',links=[physical['path'],physical['verification_path'],'8-本轮实验/GPU生成规则物理恢复-20261110/completion.json','8-本轮实验/GPU物理依赖公开来源核对-20261109/binding-recheck.json','8-本轮实验/GPU压缩物理视图复核-20261108/completion.json'])
 if x['id']=='delivery':x.update(summary='CPU可搬移12题通过；最终包待验',detail='新目录CPU12题81步token/hidden/logits与目标计数一致，独立入口另实跑1题；无旧构建模块依赖。当前提交清单约2.04GiB，最终ZIP/CRC、完整环境及GPU全量仍待验，保持HOLD。',links=x['links']+['8-本轮实验/NanoCPU可搬移运行包-20261109/验收封存.json','7-审计与验收/打包预检-20261109/completion.json'])

for x in nodes:
 if x['id']=='gpuprobe':x.update(summary='新5.040四组16次；分派8次修补',detail='新模型4案例seed1四组输出一致，原始组合P1减少2.083%/2.624%，但P3回退0.128%。按算子分派后8控制通过，P3及纯TopK P2走原基线，周期/指令/访存相同。最小P1没有选择收益时保守回退，P2 RNE额外访存保留。完整板由接续任务在基线封存后运行，不代表PROMOTE。',links=['8-本轮实验/GPU锁定硬件四组候选-20261109/验收结论.json','8-本轮实验/GPU锁定硬件四组候选-20261109/control-status.json','8-本轮实验/GPU锁定硬件四组候选-20261109/routed-control-status-v2.json'],seconds=read('8-本轮实验/GPU锁定硬件四组候选-20261109/control-status.json')['elapsed_seconds']+read('8-本轮实验/GPU锁定硬件四组候选-20261109/routed-control-status-v2.json')['elapsed_seconds'],time_scope='新16对照+8分派控制墙钟；不含旧5.050对照、首次验证器失败或人工耗时')
 if x['id']=='delivery':x.update(seconds=read('8-本轮实验/NanoCPU可搬移运行包-20261109/completion.json')['elapsed_seconds'],time_scope='新目录12题CPU实跑墙钟；不含独立入口单题、封包或人工耗时',links=['8-本轮实验/NanoCPU可搬移运行包-20261109/completion.json']+x['links'])

# These two scopes advance only after the same independent evidence gates as the achievements page.
snapshot=R/'7-审计与验收/成果页更新-20261108'/('全景回归快照-'+str(time.time_ns())+'.json');snapshot.parent.mkdir(exist_ok=True);snapshot.write_text(json.dumps(progress['current'],ensure_ascii=False,indent=2),encoding='utf-8')
numeric_evidence='8-本轮实验/GPU同硬件全1000-20261108/验收结论.json' if progress['full_numeric'] else snapshot.relative_to(R).as_posix()
board_evidence='8-本轮实验/GPU完整候选板-20261109/验收结论.json' if progress['full_board'] else '8-本轮实验/GPU锁定硬件四组候选-20261109/验收结论.json'
n('gpunumeric',2,'新宏绑定 GPU 全1000数值回归','done' if progress['full_numeric'] else 'partial',f"{len(progress['current']['records'])}/1000 · "+('独立封存' if progress['full_numeric'] else '检查点'),progress['numeric_note']+' 与旧SimX四组数据分开；不自动追认其余候选或老师原物理身份。',[numeric_evidence])
n('fullboard',4,'新同硬件完整候选对照板','done' if progress['full_board'] else 'partial','1000条独立封存' if progress['full_board'] else '完整板待独立封存',progress['board_note']+' 官方冻结权重未提供，不计算官方加权收益；物理、PPA与正式晋升仍HOLD。',[board_evidence])
connect('freeze','gpunumeric');connect('dma','gpunumeric');connect('gpunumeric','fullboard');connect('gpuprobe','fullboard');connect('fullboard','promote')
for x in nodes:
 if x['id']=='gpuprobe':x['detail']=x['detail'].replace('完整板由接续任务在基线封存后运行，不代表PROMOTE。',progress['board_note']+' 不代表PROMOTE。')
 if x['id']=='resources':x['detail']=x['detail'].replace('完整流量与PPA仍待齐。',('完整候选板外存读写已封存；PPA与能耗仍待齐。' if progress['full_board'] else '完整流量与PPA仍待齐。'))
 if x['id']=='delivery':x.update(detail='新DMA30/30、整机协议90条及冻结Nano双端各12题均通过。'+progress['numeric_note']+' '+progress['board_note']+' '+physical['note']+' CPU可搬移12题及独立入口1题通过；最终ZIP/CRC、完整环境与正式晋升仍HOLD。',links=x['links']+[numeric_evidence,board_evidence])
 if x['id']=='ablation':x.update(title='CPU Nano 历史四组消融',summary='旧ROM历史首token改善0.792%',detail=x['detail']+' 此处为历史ROM边界；fixedROM公平配对须以其独立新收据判断，不据此追认。')
for x in nodes:
 if x['id']=='ablation':x.update(summary='新固定ROM组合TTFT改善4.607%',detail='5.040/128KiB新基线下，stride与RNE15的2x2组合TTFT改善4.607%，decode7.242%，会话5.826%。3+3交错独立重启三指标各组完全相同，12冻结题81步完整张量一致。旧ROM0.792%是历史结果，不混比。布局/取指交互保留，物理/PPA仍HOLD。',links=['8-本轮实验/CPU-Nano组合最终确认-20261110/验收结论.json','8-本轮实验/CPU-Nano固定ROM-StrideRNE2x2-1794284177187099883/summary.json'])

n('ffpreflight',6,'新FF物理输入 / 四态与结构实测','done','4形状 · 5326条 · 已独立封存',ffpre['note'].replace('标准单元映射、布局布线、STA及功耗继续验收。','标准单元映射另有独立收据；布局布线、STA及功耗继续验收。')+' 检查范围：未初始化X、写掩码、同址读写和输出保持，以及hierarchy/proc/check；不代表映射网表整机等价或PPA签核。',[ffpre['path']],ffpre['receipt']['recorded_seconds'],'4种形状编译+四态运行+整机层级/进程检查实测墙钟；不含准备与失败尝试')
connect('dma','ffpreflight');connect('ffpreflight','physical','resources');connect('ffpreflight','promote')
for x in nodes:
 if x['id']=='physical':x['detail']+=' '+ffpre['note'].replace('标准单元映射、布局布线、STA及功耗继续验收。','标准单元映射另有独立收据；布局布线、STA及功耗继续验收。')

n('ffmapping',6,'新FF标准单元映射 / 独立重读','done','154.7万单元 · 21.096mm²综合面积',ffmap['note'],[ffmap['path']],ffmap['receipt']['synthesis_seconds']+ffmap['receipt']['independent_reparse_seconds'],'成功映射1168.48秒+独立网表重读127.60秒；不含首次路径失败与人工准备')
connect('ffpreflight','ffmapping');connect('ffmapping','physical','resources','promote')
for x in nodes:
 if x['id']=='physical':x['detail']+=' '+ffmap['note']

n('ffsta',6,'整机FF综合后STA','partial','10 ns目标 · setup裕量 −2121.78 ns',followup['sta_note'],[followup['sta_path'],followup['sta_log']],followup['sta_seconds'],'固定网表单元延迟分析，含最差setup路径')
n('sramrtl',6,'SRAM包装与整机宏绑定','partial','5326条四态事务 · 164个宏实例',followup['sram_note']+' 两种新宏的 1,702 条四态事务通过。OpenROAD 已链接整机 164 个实宏；10 ns 布局前缓冲修复后 setup −11.95 ns，原为 −326.54 ns。FMA 候选路径 setup +1.58 ns，整机 −7.42 ns。新宏 DRC/LVS 仍有违规。',[followup['binding_path'],followup['wrapper_path'],followup['public_sim_path'],followup['public_view_path'],followup['public_layout_path'],'8-本轮实验/GPU公开实宏综合入口预检-20261112-v2/status.json','8-本轮实验/GPU-SRAM宏生成-20261111/run-20261112-135027/8x128/layout-diagnostics/status.json','8-本轮实验/GPU-SRAM宏生成-20261111/run-20261112-175857/independent-check/status.json','8-本轮实验/GPU-SRAM宏生成-20261111/run-20261112-175857/openroad-four-views/status.json','8-本轮实验/GPU新实宏标准单元映射-20261112-221037/openroad-link/status.json','8-本轮实验/GPU新实宏标准单元映射-20261112-221037/openroad-prelayout-sta/status.json','8-本轮实验/GPU-SRAM宏生成-20261111/run-20261112-175857/20x64/recheck-magic-8.3.306/status.json','8-本轮实验/GPU-SRAM宏生成-20261111/run-20261112-175857/8x128/recheck-magic-8.3.306/status.json','8-本轮实验/GPU公开SRAM独立通道替代预检-20261112/status.json','8-本轮实验/GPU新实宏标准单元映射-20261112-221037/openroad-preplacement-repair/status.json','8-本轮实验/GPU-FMA候选实宏映射-20261112-224536/openroad-fma-cone/status.json','8-本轮实验/GPU-FMA候选实宏映射-20261112-224536/openroad-fma-timing/status.json'],followup['sram_seconds'],'4形状仿真与整机层级/端口检查墙钟之和')
connect('ffmapping','ffsta');connect('ffsta','sramrtl');connect('sramrtl','physical','resources')

timings=[dict(id=x['id'],label=x['title'],seconds=x['seconds'],scope=x['time_scope'],source=x['links'][0]) for x in nodes if x['seconds'] is not None]
next(t for t in timings if t['id']=='topk')['source']=ct
timings.append(dict(id='cpu',label='CPU 1000条重新执行',seconds=read(cr)['elapsed_seconds'],scope='缓存构建后的另一次独立执行',source=cr))
for x in nodes:
 if x['id']=='topk': x['links'].append(ct)
 if x['id']=='chat': x['links']=['8-本轮实验/Nano冻结问题双端验收-20261108/completion.json','8-本轮实验/根号3提问结果/result.json','8-本轮实验/根号3提问结果/跨后端核对.json']
 x['evidence']=[dict(path=p,exists=(R/p).exists(),sha256=hashlib.sha256((R/p).read_bytes()).hexdigest() if (R/p).is_file() and (R/p).suffix.lower()!='.html' else None) for p in x['links']]
if progress['delivery']:
    for node in nodes:
        if node['id']=='delivery':
            node['summary']='本机冻结包与 CPU/GPU 复现通过'
            node['detail']='CPU RTL 12题、GPU 1000条 ZIP 复跑、洁净工具迁移六例通过；归档尺寸、CRC 与逐文件 SHA 已核验。物理与正式晋升仍待验。'
            path=progress['delivery']['path']
            node['links'].append(path)
            node['evidence'].append({'path':path,'exists':True,'sha256':hashlib.sha256((R/path).read_bytes()).hexdigest()})
data=dict(title='Route B · CPU + GPU 工程生产流程全景',completion=progress['completion'],counts=progress['counts'],gpu_numeric_progress={'status':progress['current']['status'],'records_validated':len(progress['current']['records']),'independently_sealed':progress['full_numeric'],'status_sha256':progress['current_sha256']},gpu_candidate_progress={'independently_sealed':progress['full_board'],'official_weighted_gain':None,'formal_promotion':'HOLD'},frozen_delivery_verified=bool(progress['delivery']),physical_recovery=physical['receipt'],new_physical_preflight=ffpre['receipt'],new_physical_mapping=ffmap['receipt'],new_physical_followup=followup['summary'],snapshot=datetime.datetime.now(datetime.timezone(datetime.timedelta(hours=8))).date().isoformat(),nodes=nodes,edges=edges,lanes=lanes,timings=timings,total_recorded_seconds=sum(x['seconds'] for x in timings),timing_note='仅为下列互不重复的已记录运行墙钟之和，不是整个项目耗时；不包含人工、未记录实验或失败尝试。')
missing=[p for x in nodes for p in x['links'] if not (R/p).exists()]
if missing:raise RuntimeError('Missing evidence: '+repr(missing))
(R/'工程全景数据.json').write_text(json.dumps(data,ensure_ascii=False,indent=2),encoding='utf-8')
template=(R/'5-技术报告/工程全景模板.html').read_text(encoding='utf-8')
(R/'工程生产流程全景图.html').write_text(render_template(template,{'__PAGE_DATE__':data['snapshot'],'__NUMERIC_COUNT__':len(progress['current']['records']),'__GPU_BASELINE_SCOPE__':progress['numeric_note'],'__GPU_FULL_BOARD_SCOPE__':progress['board_note'],'__PHYSICAL_NOTE__':physical['note'],'__PHYSICAL_EXACT__':physical['exact'],'__PHYSICAL_TOTAL__':physical['total'],'__PHYSICAL_MISSING__':physical['missing'],'__COMPLETION_EXACT__':f"{progress['completion']:g}"},'__PROJECT_DATA__',data),encoding='utf-8')
print(json.dumps(dict(nodes=len(nodes),edges=len(edges),timings=len(timings),recorded_seconds=data['total_recorded_seconds'],missing=missing),ensure_ascii=False))


