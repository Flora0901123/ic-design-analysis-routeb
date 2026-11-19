from pathlib import Path
import json,hashlib
R=Path(__file__).resolve().parents[1]
def read(p):return json.loads((R/p).read_text(encoding='utf-8'))
EV=[('report','技术报告','5-技术报告/技术报告.md','目标、贡献、结果和边界'),('rubric','老师100分规则','7-审计与验收/老师网页合同快照/rubric.json','20 / 40 / 20 / 20；人工审核'),('full','双后端全量回归','8-本轮实验/全100案例双后端验收结果/summary.json','CPU1000匹配；GPU970匹配'),('cpuop','CPU算子优化对照','8-本轮实验/CPU完整优化对照/summary.json','baseline与Top-K各1000条'),('gpuall','GPU四组完整功能回归','8-本轮实验/GPU四组优化汇总/功能逐条核对摘要.json','四组各1000条，970匹配、30不支持'),('cpu','CPU Nano四组消融','8-本轮实验/CPU-Nano四组消融/summary.json','逐token/hidden/logits一致'),('repeat','200次独立RTL会话','8-本轮实验/Nano基线组合100次重复/summary.json','baseline与组合各100次'),('gpu','GPU四组RTLSIM记录','8-本轮实验/GPU-RTLSIM四组消融/status.json','4案例×seed1×4变体，共16次'),('rne','RNE主机组件等价验证','8-本轮实验/RNE独立等价检查/result.json','462233组，主机组件证据'),('qa','根号3真实提问','8-本轮实验/根号3提问结果/result.json','两端执行一致；本题回答错误'),('host','12个冻结问题主机预检','8-本轮实验/Nano冻结问题主机预检/result.json','12/12，不替代目标端执行'),('asm','RISC-V反汇编','8-本轮实验/CPU-Nano四组消融/rne-attention-rne.disasm','rne15与动态除法的调用边界'),('version','RTLSIM构建与版本','9-GPU复现/rtlsim-optimization/status.json','5.050与锁定5.040不同'),('reference','独立参考包校验','8-本轮实验/20261029T062637452237Z-verify-reference-baseline/status.json','离线完整性，不是目标实跑'),('progress','完善与验收状态','7-审计与验收/完善进度.md','已完成事实与剩余门槛'),('setup','环境准备入口','setup.sh','工作副本环境准备')]
EV += [('dma','新重建GPU DMA验收','9-GPU复现/整机DMA重建/验收报告.md','30/30故障+3正常控制；独立硬件身份'),('dmaevents','DMA逐条事件与握手','9-GPU复现/整机DMA重建/dma-event-qualification.json','真实错误响应、空数值结果、无错误后payload请求'),('adapter','5.040适配器复验','8-本轮实验/GPU锁定版适配器-20261107/status.json','120探针、0断言违规'),('formal','适配器局部安全归纳','8-本轮实验/GPU适配器局部契约-20261107/completion.json','2个全位宽模块局部性质通过'),('physical','物理来源审计','8-本轮实验/GPU来源与锁定环境-20261105/physical-source-audit.json','12/50精确匹配，38缺失；原物理身份未建立'),('topkfix','Top-K退化修补决策','8-本轮实验/TopK修补-20261105/修补说明.md','v2/v3拒绝，默认回退baseline'),('atlas','工程全景图','工程生产流程全景图.html','26模块、49关联及真实计时') ]
E={k:{'title':t,'path':p,'note':n,'sha256':hashlib.sha256((R/p).read_bytes()).hexdigest()} for k,t,p,n in EV}
M=[('环境与参考来源整理','done','独立副本、环境记录及参考包核对具备。','reference'),('CPU算子全量数值回归','done','baseline与Top-K各100案例×10seed，1000条匹配。','cpuop'),('GPU算子全量数值回归','partial','四组各970条匹配；30条DMA故障注入不支持。','gpuall'),('CPU Nano真实执行','done','真实RTL输出和逐token中间值已记录。','cpu'),('GPU Nano真实执行','done','根号3已在SimX整模型真实执行；质量另验。','qa'),('Top-K与RNE优化实现','done','保持数值合同的补丁、单项及组合快照具备。','report'),('开发消融与机制验证','done','CPU四组、反汇编及GPU四组开发探针完成。','gpu'),('CPU各100次独立重复','done','基线与组合各100次，完整输出及周期一致。','repeat'),('GPU完整RTL性能板','partial','已测4案例×seed1，完整case×seed及回退板待补。','gpu'),('独立协议与DMA故障验收','todo','适配器协议、故障注入、背压及恢复证据未齐。','progress'),('锁定版本与物理来源绑定','partial','工具5.050与锁定5.040不同；映射物理一致性待验。','version'),('资源、流量及能耗','partial','有部分CPU计数；匹配硬件的面积和能耗待补。','cpuop'),('Nano覆盖与回答质量','partial','12个问题仅主机预检；根号3目标实测答错。','host'),('完整优化晋升门槛','todo','当前HOLD，各项正式验收条件尚未闭环。','progress'),('报告与证据导航','done','贡献、失败记录、原始日志及SHA可追溯。','report'),('最终封装与复现验收','partial','有脚本和本机证据，最终包及干净环境仍待验。','setup')]
M[9]=('适配器与新DMA功能验证','partial','适配器120探针、局部归纳及新边界DMA30/30+3正常控制已完成；原协议安全/12项覆盖/8项突变已通过；整机背压恢复及物理身份未闭合。','dma')
M[10]=('锁定版本与物理来源绑定','partial','5.040已安装并用于新整机；原5.050性能结果不追认，原物理身份仍待验。','physical')
M[5]=('Top-K与RNE实现及退化审计','done','实现、等价检查与失败决策具备；独立Nano Top-K尚无提速，默认回退基线。','topkfix')
# Evidence readiness, not grades. Optimization entries are expanded per platform.
ROWS={
'report':[
('report_story','done','报告已交代目标、实现、结果与限制。','表达质量仍由老师审核。','report'),
('report_spec','done','平台、单位、版本差异和测量边界已标注。','准确披露版本差异，不代表已修复合规缺口。','version'),
('report_figures','done','结论可定位源码差异、日志与SHA。','最终封包时再核验链接。','gpu'),
('report_delivery','partial','贡献和引用有说明，已有运行脚本。','最终包、统一入口及复现说明需收尾。','setup')],
'correctness':[
('contract','partial','数值格式、RNE与边界有验证；版本有记录。','已补5.040和新宏绑定硬件；功能模型无原OpenRAM物理视图，原物理身份未建立。','rne'),
('cases','partial','CPU两组各1000匹配；GPU四组各970匹配。','新硬件DMA30/30和3条控制通过，适配器120探针/局部归纳具备；不能与旧SimX970条拼成同一正式1000条。原协议32步安全、12覆盖、8突变已通过；整机协议与硬件身份仍待齐。','full'),
('nano','partial','双平台真实输出，CPU四组及200次重复一致。','根号3答错；目标端冻结问题覆盖与回答质量待补。','qa'),
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
('promotion','GPU','todo','父子版本功能回归及开发RTL计数已具备。','已补5.040新DMA与适配器证据；原适配器协议门已通过；整机协议、物理、完整性能与资源门槛未齐。','progress'),
('attribution','CPU','partial','RNE等价、四组消融与反汇编具备。','P3周期变化仍保留布局/缓存等替代解释。','asm'),
('attribution','GPU','partial','四组RTL探针及P2/P3控制案例具备。','启动与代码生成效应未完全排除，需完整计数。','gpu'),
('nano_gain','CPU','gap','P1首token减少0.792%，会话减少1.513%。','主指标不足2%；不改用decode的2.350%追认主指标。','repeat'),
('nano_gain','GPU','todo','有整模型真实执行证据。','没有GPU Nano优化前后的交互性能对照。','qa'),
('side_effects','CPU','partial','已有部分指令和I/D-bus流量对照。','面积、功耗/能耗和硬件对应关系待补。','cpuop'),
('side_effects','GPU','todo','已有开发RTL周期和指令计数。','尚无完整流量、面积、能耗与资源约束验收。','version')]}
groups=[]
for d in read('7-审计与验收/老师网页合同快照/rubric.json')['dimensions']:
 lookup={x['id']:x for x in d['items']};items=[]
 for x in ROWS[d['id']]:
  if d['id']=='optimization':key,platform,status,have,gap,e=x
  else:key,status,have,gap,e=x;platform=''
  it=lookup[key];items.append(dict(title=it['title'],points=it['points'],platform=platform,status=status,have=have,gap=gap,evidence=e,requirement=it['evidence']))
 assert sum(x['points'] for x in items)==d['points']
 groups.append(dict(id=d['id'],title=d['title'],points=d['points'],question=d['question'],items=items))
counts={s:sum(x[1]==s for x in M) for s in ['done','partial','todo']};assert counts==dict(done=8,partial=7,todo=1)
D=dict(pageDate='2026-11-08',experimentDate='2026-11-08',completion=(counts['done']+counts['partial']*.5)/len(M)*100,counts=counts,milestones=[dict(title=t,status=s,detail=d,evidence=e) for t,s,d,e in M],evidence=E,rubric=groups,cpu=read('8-本轮实验/CPU-Nano四组消融/summary.json')['runs'],gpu=read('8-本轮实验/GPU-RTLSIM四组消融/status.json'))
assert D['gpu']['status']=='COMPLETE' and sum(len(x['items']) for x in groups)==22
D['topk_history']=D['cpu']['topk']
D['cpu']['topk']=dict(D['cpu']['baseline'])
D['cpu']['topk']['selection_note']='verified baseline fallback; zero standalone Top-K gain'
D['rubric_readiness']={status:dict(items=sum(x['status']==status for g in groups for x in g['items']),weight=sum(x['points'] for g in groups for x in g['items'] if x['status']==status)) for status in ['done','partial','todo','gap']}
D['protocol32']=read('8-本轮实验/GPU原协议门-20261108/smt32/completion.json')
D['dma']=read('9-GPU复现/整机DMA重建/DMA验收结论.json');assert D['dma']['dma_records_passed']==30
raw=json.dumps(D,ensure_ascii=False,separators=(',',':')).replace('</','<'+chr(92)+'/')
template=(R/'5-技术报告/成果页模板.html').read_text(encoding='utf-8-sig')
(R/'成果汇报与考核对照.html').write_text(template.replace('__DATA__',raw),encoding='utf-8',newline='\n')
(R/'成果汇报数据.json').write_text(json.dumps(D,ensure_ascii=False,indent=2),encoding='utf-8')
print(json.dumps(dict(html=str(R/'成果汇报与考核对照.html'),completion=D['completion'],milestones=counts,rubric_items=22),ensure_ascii=False))
