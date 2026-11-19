from pathlib import Path
import json
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/整机DMA重建';q=json.loads((O/'dma-event-qualification.json').read_text(encoding='utf-8'));assert q['status']=='RECONSTRUCTED_GPU_DMA_FUNCTIONAL_PASS';assert {(x['case_id'],x['seed']) for x in q['records'] if x['case_id'].endswith('-30')}=={(f'P{i}-MINI-30',s) for i in range(1,4) for s in range(1,11)}
link='9-GPU复现/整机DMA重建/验收报告.md'
p=R/'HANDOFF.md';s=p.read_text(encoding='utf-8-sig');s='> 最新（2026-11-08）：新重建宏绑定GPU的DMA功能验收已通过：P1/P2/P3-MINI-30各10seed，30/30，另3条正常控制位精确匹配。新网表、4种功能SRAM模型、manifest、设备状态与总线握手日志均已保留。属于新重建功能边界，不代表原老师物理身份或物理签核；旧SimX970条不与新30条拼作正式1000条。先读 `'+link+'`。原缺件预检和历史失败记录继续保留。\n\n'+s;p.write_text(s,encoding='utf-8')
p=R/'README.md';s=p.read_text(encoding='utf-8-sig');s+='\n2026-11-08：[新重建GPU整机DMA功能验收](9-GPU复现/整机DMA重建/验收报告.md)：30/30故障记录通过，3条正常控制golden匹配；4种SRAM功能模型2272检查通过。原物理身份、正式baseline/PROMOTE仍HOLD。\n';p.write_text(s,encoding='utf-8')
p=R/'00-教师审阅/04-未完成事项.md';s=p.read_text(encoding='utf-8-sig');s=s.replace('1. GPU三类整机DMA故障注入（30条仍未执行）及原32步协议/覆盖验收。已补独立适配器5.040下120探针、局部安全归纳与8个动态突变；这些不替代整机资格。','1. 原映射物理身份绑定与原32步协议/覆盖验收。2026-11-08已完成新重建宏绑定GPU的3个DMA故障案例各10seed，30/30功能通过，另3条正常控制golden匹配；不据此追认原物理身份或完整冻结baseline。');s+='\n新增：[新硬件DMA功能验收与原物理包的边界](../9-GPU复现/整机DMA重建/验收报告.md)。\n';p.write_text(s,encoding='utf-8')
p=R/'00-教师审阅/01-评分证据索引.md';s=p.read_text(encoding='utf-8-sig');s+='\n## 2026-11-08增量证据\n\n[新重建GPU DMA功能验收](../9-GPU复现/整机DMA重建/验收报告.md)：P1/P2/P3-MINI-30×seed1–10共30/30，3条正常控制golden匹配；错误请求/响应、DCR故障、无数值提交及无错误后payload访问均有日志。网表/manifest/4种SRAM功能模型及实际二进制已保留。新硬件功能验证不等于原物理身份、完整性能板或正式晋升，不预填分数。\n';p.write_text(s,encoding='utf-8')
p=R/'00-教师审阅/开始审阅.html';s=p.read_text(encoding='utf-8-sig');s=s.replace('<ol>','<p><a href="../9-GPU复现/整机DMA重建/验收报告.md">2026-11-08：新重建GPU DMA功能验收 30/30 ↗</a></p><ol>');p.write_text(s,encoding='utf-8')
p=R/'7-审计与验收/build_project_panorama.py';s=p.read_text(encoding='utf-8-sig');anchor="timings=[dict(id=x['id']";patch='''# Fresh reconstructed DMA boundary has its own hardware identity.
for x in nodes:
 if x['id']=='dma':
  x.update(status='done',summary='新重建边界 30/30 · 3条正常控制',detail='已生成新的宏绑定RTL网表、manifest与4种SRAM功能模型，37宏实例；2272模型检查通过。三例DMA各10seed实际运行，设备DCR故障与错误请求/响应可观测，数值输出为空，错误后无新输入payload请求；3条正常控制golden匹配。属于新功能硬件，不是原老师物理包身份复原，不与旧SimX970条拼接为正式baseline。',links=['9-GPU复现/整机DMA重建/验收报告.md','9-GPU复现/整机DMA重建/DMA验收结论.json','9-GPU复现/整机DMA重建/dma-event-qualification.json','9-GPU复现/整机DMA重建/staged-openram-banked-manifest.json'],seconds=sum(t['seconds'] for t in read('9-GPU复现/整机DMA重建/whole-gpu-runs/status.json')['records']),time_scope='新重建边界30条DMA+3条正常控制的33次运行墙钟和')
 if x['id']=='delivery':x['detail']='新增新重建GPU宏绑定边界DMA功能30/30、3条正常控制golden匹配；网表、manifest、功能SRAM与总线证据保留。原物理身份、完整冻结性能板、原协议覆盖和资源签核仍未齐，正式发布保持HOLD。'
''';assert anchor in s;s=s.replace(anchor,patch+'\n'+anchor);s=s.replace("snapshot='2026-11-07'","snapshot='2026-11-08'");p.write_text(s,encoding='utf-8')
p=R/'5-技术报告/工程全景模板.html';s=p.read_text(encoding='utf-8-sig').replace('2026.11.07','2026.11.08').replace('2026-11-07','2026-11-08').replace('整机 DMA / 原协议门：未完成','新DMA功能30/30 · 原协议门待齐');p.write_text(s,encoding='utf-8')
p=R/'7-审计与验收/build_fresh_dma_platform.py';s=p.read_text(encoding='utf-8-sig');s=s.replace("print('platform build exit',code)","print('platform build exit',code)\nraise SystemExit(code)");p.write_text(s,encoding='utf-8')
print('Teacher navigation and panorama synchronized to fresh DMA functional result')
