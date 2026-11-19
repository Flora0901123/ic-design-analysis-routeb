from pathlib import Path
import json,hashlib,time,datetime
from report_evidence import load_gpu_progress,load_physical_progress,load_new_physical_preflight,load_new_physical_mapping,load_physical_followup,render_template
R=Path(__file__).resolve().parents[1]
def read(p):return json.loads((R/p).read_text(encoding='utf-8-sig'))
package_plan=read('7-审计与验收/打包预检-20261111/summary.json')
progress=load_gpu_progress(R);physical=load_physical_progress(R);ffpre=load_new_physical_preflight(R);ffmap=load_new_physical_mapping(R);followup=load_physical_followup(R)
EV=[('report','技术报告','5-技术报告/技术报告.md','目标、贡献、结果和边界'),('rubric','老师100分规则','7-审计与验收/老师网页合同快照/rubric.json','20 / 40 / 20 / 20；人工审核'),('full','双后端全量回归','8-本轮实验/全100案例双后端验收结果/summary.json','CPU1000匹配；GPU970匹配'),('cpuop','CPU算子优化对照','8-本轮实验/CPU完整优化对照/summary.json','baseline与Top-K各1000条'),('gpuall','GPU四组完整功能回归','8-本轮实验/GPU四组优化汇总/功能逐条核对摘要.json','四组各1000条，970匹配、30不支持'),('cpu','CPU Nano历史ROM四组消融','8-本轮实验/CPU-Nano四组消融/summary.json','逐token/hidden/logits一致'),('repeat','200次独立RTL会话','8-本轮实验/Nano基线组合100次重复/summary.json','baseline与组合各100次'),('gpu','GPU四组RTLSIM记录','8-本轮实验/GPU-RTLSIM四组消融/status.json','4案例×seed1×4变体，共16次'),('rne','RNE主机组件等价验证','8-本轮实验/RNE独立等价检查/result.json','462233组，主机组件证据'),('qa','根号3真实提问','8-本轮实验/根号3提问结果/result.json','两端执行一致；本题回答错误'),('host','12个冻结问题主机预检','8-本轮实验/Nano冻结问题主机预检/result.json','12/12，不替代目标端执行'),('asm','RISC-V反汇编','8-本轮实验/CPU-Nano四组消融/rne-attention-rne.disasm','rne15与动态除法的调用边界'),('version','RTLSIM构建与版本','9-GPU复现/rtlsim-optimization/status.json','5.050与锁定5.040不同'),('reference','独立参考包校验','8-本轮实验/20261029T062637452237Z-verify-reference-baseline/status.json','离线完整性，不是目标实跑'),('progress','完善与验收状态','7-审计与验收/完善进度.md','已完成事实与剩余门槛'),('setup','环境准备入口','setup.sh','工作副本环境准备')]
EV += [('dma','新重建GPU DMA验收','9-GPU复现/整机DMA重建/验收报告.md','30/30故障+3正常控制；独立硬件身份'),('dmaevents','DMA逐条事件与握手','9-GPU复现/整机DMA重建/dma-event-qualification.json','真实错误响应、空数值结果、无错误后payload请求'),('adapter','5.040适配器复验','8-本轮实验/GPU锁定版适配器-20261107/status.json','120探针、0断言违规'),('formal','适配器局部安全归纳','8-本轮实验/GPU适配器局部契约-20261107/completion.json','2个全位宽模块局部性质通过'),('physical','物理来源审计',physical['path'],physical['note']),('topkfix','Top-K退化修补决策','8-本轮实验/TopK修补-20261105/修补说明.md','v2/v3拒绝，默认回退baseline'),('atlas','工程全景图','工程生产流程全景图.html','模块、证据关联及真实计时；当前数量见全景页') ]
EV.extend([('wholeprotocol','GPU整机协议90条验收','8-本轮实验/GPU整机协议-20261108/验收结论.json','背压/保持/复位各30条，9案例各10seed通过'),('nanofrozen','冻结Nano双端验收','8-本轮实验/Nano冻结问题双端验收-20261108/completion.json','CPU/GPU各12题；81步hidden/logits逐位一致')])
EV.extend([('multicounter','单轮多类硬件计数验收','8-本轮实验/GPU单轮多类计数运行库-20261108/completion.json','4控制通过；外存计数与DMA握手一致，非完整性能板'),('packageplan','提交包清单与展开体积预检','7-审计与验收/打包预检-20261111/summary.json',f"当前展开体积预检约{package_plan['bytes']/1024**3:.2f}GiB。4份重复视图按SHA合并，最终ZIP、CRC和复现待验。")])
EV.append(('movablecpu','CPU可搬移目录复现','8-本轮实验/NanoCPU可搬移运行包-20261109/验收封存.json','12题81步及目标计数一致；独立入口另实跑1题，非异机/新装环境'))
EV.append(('physicalverification','物理来源32项独立复核',physical['verification_path'],'独立逐项复核；原物理身份与PPA仍HOLD'))
EV.append(('physicalhistory','物理来源历史27项','8-本轮实验/GPU物理依赖公开来源核对-20261109/binding-recheck.json','历史审计，最新统计见32项独立复核'))
EV.append(('lockedcontrols','5.040四组16+分派8控制','8-本轮实验/GPU锁定硬件四组候选-20261109/验收结论.json','原P3回退保留；按算子走基线消除控制回退，完整板待验'))
current=progress['current'];full_seal=progress['full_seal'];board_seal=progress['board_seal'];full_numeric=progress['full_numeric'];full_board=progress['full_board']
snapshot=R/'7-审计与验收/成果页更新-20261108'/('回归快照-'+str(time.time_ns())+'.json');snapshot.parent.mkdir(exist_ok=True);snapshot.write_text(json.dumps(current,ensure_ascii=False,indent=2),encoding='utf-8')
EV.append(('numericCurrent','同硬件全量回归快照',snapshot.relative_to(R).as_posix(),progress['numeric_note']))
if full_numeric:EV.append(('gpuNumericSealed','同硬件全1000独立验收','8-本轮实验/GPU同硬件全1000-20261108/验收结论.json','100案例×10seed，逐位/状态/selected/primitive及实际DMA见证'))
if full_board:EV.append(('fullboard','完整1000条候选对照板','8-本轮实验/GPU完整候选板-20261109/验收结论.json','逐case×seed周期/流量/回退齐；没有官方权重，物理、PPA与正式晋升仍HOLD'))
EV.append(('cpuConfirmed','CPU组合3+3重启及12题独立确认','8-本轮实验/CPU-Nano组合最终确认-20261110/验收结论.json','同一5.040/128KiB新配对：首token4.607%、解码7.242%、会话5.826%；PPA仍HOLD'))
EV.append(('ffPreflight','新FF物理输入四态与结构实测',ffpre['path'],ffpre['note'].replace('标准单元映射、布局布线、STA及功耗继续验收。','标准单元映射另有独立收据；布局布线、STA及功耗继续验收。')))
EV.append(('ffMapping','新GPU真实标准单元映射及独立复核',ffmap['path'],ffmap['note']))
EV.extend([('ffSTA','GPU综合后STA及最差路径',followup['sta_log'],followup['sta_note']),('sramRTL','SRAM包装四态事务',followup['wrapper_path'],followup['sram_note']),('sramBinding','整机SRAM宏绑定',followup['binding_path'],followup['sram_note']),('publicSRAM','公开宏原版模型与视图核对',followup['public_sim_path'],'2种原版模型3624条事务通过。'),('publicSRAMViews','公开宏LEF与TT Liberty实读',followup['public_view_path'],'2种宏通过LEF端口核对与OpenSTA库文件实读。'),('publicSRAMGDS','公开宏GDS交叉核对',followup['public_layout_path'],'2种宏的GDS结构与相同提交的功能、抽象及时序视图匹配。')])
EV.extend([('publicSRAMMapping','公开 SRAM 包装器综合实测','8-本轮实验/GPU公开实宏综合入口预检-20261112-v2/status.json','两种实宏的锁存器和宏接口通过 Yosys 映射。'),('newSRAMLayoutDiagnostics','新 8×128 宏版图诊断','8-本轮实验/GPU-SRAM宏生成-20261111/run-20261112-135027/8x128/layout-diagnostics/status.json','保留真实 GDS、LEF、SPICE，14 项 DRC 与 LVS 差异待修。')])
EV.extend([('generatedSRAMModels','新 SRAM 视图与四态实测','8-本轮实验/GPU-SRAM宏生成-20261111/run-20261112-175857/independent-check/status.json','两种开发宏的 1,702 条四态事务通过，物理 DRC/LVS 待修。'),('allSRAMOpenROAD','四种 SRAM 同库实读','8-本轮实验/GPU-SRAM宏生成-20261111/run-20261112-175857/openroad-four-views/status.json','采用 2,000 DBU/µm，四种 LEF 与 Liberty 均由 OpenROAD 成功加载。')])
EV.extend([('realSRAMGpuLink','新 GPU 实宏综合和链接','8-本轮实验/GPU新实宏标准单元映射-20261112-221037/openroad-link/status.json','OpenROAD 验证 164 个真实宏实例，物理签核 HOLD。'),('realSRAMGpuSTA','新 GPU 实宏网表 10 ns STA','8-本轮实验/GPU新实宏标准单元映射-20261112-221037/openroad-prelayout-sta/status.json','理想时钟、无寄生，setup −326.54 ns、hold +0.31 ns，最差 setup 从 rst_ni 出发。'),('newSRAMLatestDRC','新导出 20×64 DRC/LVS','8-本轮实验/GPU-SRAM宏生成-20261111/run-20261112-175857/20x64/recheck-magic-8.3.306/status.json','本版 GDS/SPICE 实测 12 项 DRC，LVS 报告 10 项。'),('publicSRAMFallback','公开实宏按通道替代','8-本轮实验/GPU公开SRAM独立通道替代预检-20261112/status.json','1,702 条四态事务通过，宏外形面积增至 33.086 mm²，保留为后备。')])
EV.append(('realSRAMPreplacementRepair','10 ns 布局前缓冲修复','8-本轮实验/GPU新实宏标准单元映射-20261112-221037/openroad-preplacement-repair/status.json','setup −326.54 → −11.95 ns，hold +0.31 ns；33,751 个缓冲器，工具报告面积 +2.1%。'))
EV.extend([('fmaArithmeticProof','FMA 算术等价证明','8-本轮实验/GPU-FMA分组进位候选-20261112/status.json','26、52、110 位 SAT 证明通过，流水级与延迟保持。'),('fmaConeSTA','FMA 定点 STA','8-本轮实验/GPU-FMA候选实宏映射-20261112-224536/openroad-fma-cone/status.json','同一 10 ns 下 setup −11.95 → +1.58 ns，布局前。'),('fmaWholeSTA','FMA 候选整机 STA','8-本轮实验/GPU-FMA候选实宏映射-20261112-224536/openroad-fma-timing/status.json','整机最差 setup −7.42 ns、hold +0.31 ns，尚未签核。')])
EV.extend([('repair20Model','20×64 修复版模型事务','8-本轮实验/GPU-SRAM宏生成-20261111/geometry-repair-run-20261112-224711/20x64/independent-model/status.json','原冻结四态 667 条通过。'),('repair20Drc','20×64 修复版井区坐标','8-本轮实验/GPU-SRAM宏生成-20261111/geometry-repair-run-20261112-224711/20x64/recheck-magic-8.3.306-20261114/drc-location-loaded-top.log','Metal3 间距违规消除；剩余 11 项 nwell.7。')])
delivery=progress['delivery']
if delivery:
    EV.append(('frozenDelivery','本机冻结包与复现验收',delivery['path'],'CPU RTL 12题、GPU 从 ZIP 复跑1000条、洁净工具链迁移六例及冻结 ZIP 完整性均通过。'))
E={k:{'title':t,'path':p,'note':n,'sha256':hashlib.sha256((R/p).read_bytes()).hexdigest()} for k,t,p,n in EV}
M=[('环境与参考来源整理','done','独立副本、环境记录及参考包核对具备。','reference'),('CPU算子全量数值回归','done','baseline与Top-K各100案例×10seed，1000条匹配。','cpuop'),('GPU算子全量数值回归','partial','四组各970条匹配；30条DMA故障注入不支持。','gpuall'),('CPU Nano真实执行','done','真实RTL输出和逐token中间值已记录。','cpu'),('GPU Nano真实执行','done','根号3已在SimX整模型真实执行；质量另验。','qa'),('Top-K与RNE优化实现','done','保持数值合同的补丁、单项及组合快照具备。','report'),('开发消融与机制验证','done','CPU四组、反汇编及GPU四组开发探针完成。','gpu'),('CPU各100次独立重复','done','基线与组合各100次，完整输出及周期一致。','repeat'),('GPU完整RTL性能板','partial','已测4案例×seed1，完整case×seed及回退板待补。','gpu'),('独立协议与DMA故障验收','todo','适配器协议、故障注入、背压及恢复证据未齐。','progress'),('锁定版本与物理来源绑定','partial','工具5.050与锁定5.040不同；映射物理一致性待验。','version'),('资源、流量及能耗','partial','有部分CPU计数；匹配硬件的面积和能耗待补。','cpuop'),('Nano覆盖与回答质量','partial','12个问题仅主机预检；根号3目标实测答错。','host'),('完整优化晋升门槛','todo','当前HOLD，各项正式验收条件尚未闭环。','progress'),('报告与证据导航','done','贡献、失败记录、原始日志及SHA可追溯。','report'),('最终封装与复现验收','partial','有脚本和本机证据，最终包及干净环境仍待验。','setup')]
M[9]=('适配器与新DMA功能验证','done','原协议安全、12覆盖及8突变通过；新DMA30条、正常控制3条、整机背压/保持/复位90条通过。仅限新功能边界，物理身份单列。','wholeprotocol')
M[12]=('Nano覆盖与回答质量','partial','冻结12题双端实际执行，81步hidden/logits逐位一致；根号3扩展题仍答错，开放表达质量继续保留缺口。','nanofrozen')
M[10]=('锁定版本与物理来源绑定','partial','5.040已用于新整机；旧5.050性能不追认。'+physical['note'],'physical')
M[5]=('Top-K与RNE实现及退化审计','done','实现、等价检查与失败决策具备；独立Nano Top-K尚无提速，默认回退基线。','topkfix')
M[2]=('GPU算子全量数值回归','partial',progress['numeric_note']+' 旧SimX四组各970匹配/30不支持单独保留。','numericCurrent')
if full_numeric:M[2]=('GPU算子全量数值回归','done','新宏绑定baseline：100案例×10seed全部通过独立验收；旧SimX四组与新结果分别保留，其他候选资格另验。','gpuNumericSealed')
M[8]=('GPU完整RTL性能板','partial',progress['board_note'],'lockedcontrols')
M[15]=('最终封装与复现验收','partial','CPU从 ZIP 复跑12题、GPU洁净工具链迁移六例通过；GPU全量及最终冻结包待验。','movablecpu')
if delivery:M[15]=('最终封装与复现验收','done','本机 CPU/GPU 复跑及冻结 ZIP 校验通过；异机实测待有第二台电脑。','frozenDelivery')
if full_board:M[8]=('GPU完整RTL性能板','done','同硬件100案例×10seed候选板已独立封存，逐条周期/流量/回退齐全；没有补造权重，收益计分与晋升仍HOLD。','fullboard')
# Evidence readiness, not grades. Optimization entries are expanded per platform.
ROWS={
'report':[
('report_story','done','报告已交代目标、实现、结果与限制。','表达质量仍由老师审核。','report'),
('report_spec','done','平台、单位、版本差异和测量边界已标注。','准确披露版本差异，不代表已修复合规缺口。','version'),
('report_figures','done','结论可定位源码差异、日志与SHA。','最终封包时再核验链接。','gpu'),
('report_delivery','partial','贡献和引用有说明，已有运行脚本。','最终包、统一入口及复现说明需收尾。','setup')],
'correctness':[
('contract','partial','数值格式、RNE与边界有验证；版本有记录。','已补5.040和新宏绑定硬件；功能模型无原OpenRAM物理视图，原物理身份未建立。','rne'),
('cases','partial','CPU两组各1000匹配；GPU四组各970匹配。','新硬件DMA30/30、整机协议90/90与原适配器形式门通过；同硬件全量回归仍在执行，原物理身份待齐，不能拼接旧SimX结果。','full'),
('nano','partial','双端冻结各12题通过，81步hidden/logits一致；CPU四组和200次重复具备。','冻结题覆盖已补齐；根号3扩展题仍答错，开放表达质量单独审核。','nanofrozen'),
('reproduction','partial','输入、seed、脚本、日志与SHA已保存。','最终封装和干净环境复现待验；当前仅有本机已实测证据。','repeat')],
'understanding':[
('principles','done','解释P1/P2/P3、数值舍入与平台差异。','原理说明对应实际代码，老师人工评价。','report'),
('bottleneck','partial','有CPU计数、反汇编和GPU开发RTL计数。','GPU完整性能板、流量及资源分析不足。','cpuop'),
('experiment','done','同输入、同模型、四组消融、控制案例及200次重复。','开发探针和正式性能板分开判断。','gpu'),
('reflection','done','保留退化、弱收益、模型答错和替代解释。','资源代价仍作为未完成项保留。','cpu')],
'optimization':[
('operator_gain','CPU','partial','全量Top-K对照，P1探索性等权加速比1.073982。','非正式冻结性能板统计；完整正确性及来源门槛未齐。','cpuop'),
('operator_gain','GPU','partial','两个P1开发RTL探针组合周期减少2.802%/2.912%。','只测4案例×seed1，不外推正式板或收益分。','gpu'),
('promotion','CPU','todo','父SHA、源码差异和HOLD状态已保存。','待补门槛的HOLD不等于“完整正确但收益不足”的有效HOLD。','progress'),
('promotion','GPU','todo','父子版本功能回归及开发RTL计数已具备。','已补5.040新DMA与适配器证据；原适配器形式门及整机协议90条通过；物理、完整性能和资源副作用仍未齐。','progress'),
('attribution','CPU','partial','RNE等价、四组消融与反汇编具备。','P3周期变化仍保留布局/缓存等替代解释。','asm'),
('attribution','GPU','partial','四组RTL探针及P2/P3控制案例具备。','启动与代码生成效应未完全排除，需完整计数。','gpu'),
('nano_gain','CPU','partial','新5.040/128KiB公平配对TTFT减少4.607%；3+3独立重启一致，候选12题81步逐位通过。','收益仅对应预登记单输入的新基线；物理/PPA和正式资格仍HOLD，旧ROM结果另列。','cpuConfirmed'),
('nano_gain','GPU','todo','有整模型真实执行证据。','没有GPU Nano优化前后的交互性能对照。','qa'),
('side_effects','CPU','partial','已有部分指令和I/D-bus流量对照。','面积、功耗/能耗和硬件对应关系待补。','cpuop'),
('side_effects','GPU','todo','已有开发RTL周期和指令计数。','尚无完整流量、面积、能耗与资源约束验收。','version')]}
# Update every affected rubric claim from the same independently verified gates.
case_have='CPU两组各1000匹配；旧GPU SimX四组各970匹配/30不支持。'
if full_numeric:case_have+=' 新宏绑定baseline另有1000条独立封存，三种候选未据此追认。'
case_gap=progress['numeric_note']+' '+physical['note']+' 六baseline与正式资格仍分别验收。'
ROWS['correctness'][1]=('cases','partial',case_have,case_gap,'gpuNumericSealed' if full_numeric else 'numericCurrent')
ROWS['optimization'][1]=('operator_gain','GPU','partial','新5.040同硬件16+8控制通过；原始组合两个P1控制减少2.083%/2.624%。',progress['board_note']+' 未提供官方冻结权重，不计算官方加权收益。','fullboard' if full_board else 'lockedcontrols')
ROWS['optimization'][3]=('promotion','GPU','todo',progress['board_note'],'新DMA与协议门已通过；'+physical['note']+' 权重、PPA与正式晋升仍HOLD。','fullboard' if full_board else 'lockedcontrols')
ROWS['optimization'][5]=('attribution','GPU','partial','5.040四组16控制与分派8控制保留；P3和纯TopK的P2按合同回退原基线。',progress['board_note']+' 启动和代码生成影响保留，不能归因为单函数净收益。','fullboard' if full_board else 'lockedcontrols')
ROWS['optimization'][9]=('side_effects','GPU','partial' if full_board else 'todo','完整候选板逐条外存读写及回退已封存。' if full_board else '三类MPM计数4控制通过；P2 RNE额外访存已保留。','面积、功耗/能耗与原物理身份仍待验。' if full_board else progress['board_note']+' 面积、功耗/能耗仍待验。','fullboard' if full_board else 'multicounter')
if full_board:ROWS['understanding'][1]=('bottleneck','partial','CPU计数与反汇编、新GPU完整候选板周期/外存计数已具备。','官方权重未提供；PPA及能耗分析仍不足。','fullboard')
if delivery:
    ROWS['report'][3] = (
        'report_delivery', 'done',
        '技术报告记录贡献与引用，统一审计入口、冻结包和复现命令均已提供。',
        '完整物理验收与异机复现的缺项见教师审阅清单。',
        'frozenDelivery',
    )
    ROWS['correctness'][3] = (
        'reproduction', 'partial',
        '本机冻结包已验容量、CRC 与逐文件 SHA。CPU RTL 从空目录复跑 12 题，GPU RTLSIM 基线复跑 1,000/1,000，另有 6 条洁净工具链迁移控制。',
        '异机及原物理包完整复现仍待执行。',
        'frozenDelivery',
    )
groups=[]
for d in read('7-审计与验收/老师网页合同快照/rubric.json')['dimensions']:
 lookup={x['id']:x for x in d['items']};items=[]
 for x in ROWS[d['id']]:
  if d['id']=='optimization':key,platform,status,have,gap,e=x
  else:key,status,have,gap,e=x;platform=''
  it=lookup[key];items.append(dict(title=it['title'],points=it['points'],platform=platform,status=status,have=have,gap=gap,evidence=e,requirement=it['evidence']))
 assert sum(x['points'] for x in items)==d['points']
 groups.append(dict(id=d['id'],title=d['title'],points=d['points'],question=d['question'],items=items))
counts={s:sum(x[1]==s for x in M) for s in ['done','partial','todo']};assert counts==progress['counts']
D=dict(pageDate=datetime.datetime.now(datetime.timezone(datetime.timedelta(hours=8))).date().isoformat(),experimentDateNote='各实验日期与版本见对应原始证据',completion=progress['completion'],counts=counts,milestones=[dict(title=t,status=s,detail=d,evidence=e) for t,s,d,e in M],evidence=E,rubric=groups,cpu=read('8-本轮实验/CPU-Nano四组消融/summary.json')['runs'],gpu=read('8-本轮实验/GPU-RTLSIM四组消融/status.json'))
assert D['gpu']['status']=='COMPLETE' and sum(len(x['items']) for x in groups)==22
D['cpu_measurement_scope']='历史ROM四组数据；fixedROM公平配对须有独立新收据，不以旧周期追认。'
D['topk_history']=D['cpu']['topk']
D['cpu']['topk']=dict(D['cpu']['baseline'])
D['cpu']['topk']['selection_note']='verified baseline fallback; zero standalone Top-K gain'
D['rubric_readiness']={status:dict(items=sum(x['status']==status for g in groups for x in g['items']),weight=sum(x['points'] for g in groups for x in g['items'] if x['status']==status)) for status in ['done','partial','todo','gap']}
D['wholeprotocol']=read('8-本轮实验/GPU整机协议-20261108/验收结论.json');assert D['wholeprotocol']['status']=='WHOLE_GPU_PROTOCOL_90_PASS'
D['nano_frozen']=read('8-本轮实验/Nano冻结问题双端验收-20261108/completion.json');assert D['nano_frozen']['status']=='FROZEN_NANO_DUAL_TARGET_12_PASS'
D['movable_cpu']=read('8-本轮实验/NanoCPU可搬移运行包-20261109/验收封存.json')
D['package_plan']=delivery['package'] if delivery else package_plan
D['frozen_delivery_verified']=bool(delivery)
D['physical_recovery']=physical['receipt']
D['new_physical_preflight']=ffpre['receipt']
D['new_physical_mapping']=ffmap['receipt']
D['new_physical_followup']=followup['summary']
D['gpu_numeric_progress']={'status':current['status'],'records_validated':len(current['records']),'goal':1000,'independently_sealed':full_numeric,'status_sha256':progress['current_sha256'],'note':progress['numeric_note'],'evidence':'gpuNumericSealed' if full_numeric else 'numericCurrent'}
D['gpu_candidate_progress']={'independently_sealed':full_board,'note':progress['board_note'],'official_weighted_gain':None,'formal_promotion':'HOLD','evidence':'fullboard' if full_board else 'lockedcontrols'}
D['protocol32']=read('8-本轮实验/GPU原协议门-20261108/smt32/completion.json')
D['dma']=read('9-GPU复现/整机DMA重建/DMA验收结论.json');assert D['dma']['dma_records_passed']==30
template=(R/'5-技术报告/成果页模板.html').read_text(encoding='utf-8-sig')
replacements={'__PAGE_DATE__':D['pageDate'],'__PACKAGE_GIB__':f"{D['package_plan']['bytes']/1024**3:.2f}",'__NUMERIC_COUNT__':len(current['records']),'__NUMERIC_COMPLETION_NOTE__':progress['numeric_note'],'__NUMERIC_EVIDENCE__':'gpuNumericSealed' if full_numeric else 'numericCurrent','__BOARD_EVIDENCE__':'fullboard' if full_board else 'lockedcontrols','__GPU_BASELINE_SCOPE__':progress['numeric_note'],'__GPU_FULL_BOARD_SCOPE__':progress['board_note'],'__PHYSICAL_NOTE__':physical['note']+' '+ffmap['note']+' '+followup['sta_note']+' '+followup['sram_note'],'__PHYSICAL_MISSING__':physical['missing'],'__GPU_BOARD_GATE__':'逐条周期/流量/回退已封存；无官方权重，计分仍HOLD' if full_board else '16+8控制已验；完整1000条候选板待独立封存','__NUMERIC_ROADMAP__':progress['numeric_note']+' '+physical['note'],'__BOARD_ROADMAP__':progress['board_note']+' 官方冻结权重未提供；面积、功耗及能耗继续验收。','__COMPLETION_ROUND__':round(D['completion']),'__COMPLETION_EXACT__':f"{D['completion']:g}",'__DONE_COUNT__':counts['done'],'__PARTIAL_COUNT__':counts['partial'],'__TODO_COUNT__':counts['todo'],'__DONE_PERCENT__':f"{100*counts['done']/16:g}",'__PARTIAL_PERCENT__':f"{100*counts['partial']/16:g}",'__TODO_PERCENT__':f"{100*counts['todo']/16:g}"}
(R/'成果汇报与考核对照.html').write_text(render_template(template,replacements,'__DATA__',D),encoding='utf-8',newline='\n')
(R/'成果汇报数据.json').write_text(json.dumps(D,ensure_ascii=False,indent=2),encoding='utf-8')
print(json.dumps(dict(html=str(R/'成果汇报与考核对照.html'),completion=D['completion'],milestones=counts,rubric_items=22),ensure_ascii=False))
