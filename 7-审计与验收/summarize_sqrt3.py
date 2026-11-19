from pathlib import Path
import json
R=Path(__file__).resolve().parents[1];runs=R/'8-本轮实验';inputs=next((runs/'历史原始证据归档/native-nano').glob('*/inputs.json'));characters=json.loads(inputs.read_text(encoding='utf-8'))['tokenizer']['characters'];reverse={value:key for key,value in characters.items()};question='根号3等于几?';report={'question':question,'unknown_characters':[c for c in question if c not in characters],'platforms':{}}
for prefix,platform in [('nano-baseline-','cpu-vexriscv-rtl'),('sqrt3-vortex-','gpu-vortex-simx')]:
    matches=[]
    for folder in runs.glob(prefix+'*'):
        p=folder/'status.json'
        if not p.exists():continue
        state=json.loads(p.read_text(encoding='utf-8'))
        if state.get('question')==question:matches.append((folder,state))
    if not matches:continue
    folder,state=max(matches,key=lambda x:x[0].name)
    tokens=state.get('tokens') if platform.startswith('gpu') else (state.get('runs') or [{}])[0].get('tokens')
    record={'status':state['status'],'evidence':folder.relative_to(R).as_posix()+'/status.json'}
    if tokens is not None:record.update(tokens=tokens,reply=''.join(reverse.get(t,'[UNK]') for t in tokens if t!=4))
    if 'error' in state:record['error']=state['error']
    if 'stage' in state:record['stage']=state['stage']
    report['platforms'][platform]=record
out=runs/'根号3提问结果';out.mkdir(exist_ok=True);(out/'result.json').write_text(json.dumps(report,ensure_ascii=False,indent=2),encoding='utf-8')
lines=['# 根号3提问实验','',f'输入：{question}','','| 后端 | 实际回复 | 状态 |','|---|---|---|']
for platform,row in report['platforms'].items():lines.append(f"| {platform} | {row.get('reply','尚无设备回复')} | {row['status']} |")
lines+=['','未知输入字符：'+','.join(report['unknown_characters']),'','CPU结果来自VexRiscv RTL。GPU若未出现TARGET_EXECUTED则没有实际设备回复；SimX仅作Vortex功能执行，不计硬件性能。','数学参考：√3≈1.7320508075688772，不是模型本次回复。']
(out/'结果说明.md').write_text('\n'.join(lines)+'\n',encoding='utf-8');print(json.dumps(report,ensure_ascii=False,indent=2))