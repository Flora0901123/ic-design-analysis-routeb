from pathlib import Path
import hashlib,json,sys
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path[:0]=[str(S),str(S/'shared/python')]
from soc_ai_labs.student_mini_nano_runtime import MiniNanoRuntime
from scripts.export_student_mini_native_image import pack
checkpoint=next((R/'8-本轮实验/历史原始证据归档/native-nano').glob('*/ptq.npz'));inputs=json.loads((checkpoint.parent/'inputs.json').read_text());card=json.loads((R/'student-mini-v1-cpu-gpu/data/nano/model-card.json').read_text());digest=hashlib.sha256(checkpoint.read_bytes()).hexdigest()
if digest!=card['deployment']['quantized_sha256']:raise ValueError('not the frozen PTQ model')
rt=MiniNanoRuntime.from_npz(checkpoint);sessions=json.loads((R/'student-mini-v1-cpu-gpu/data/nano/sessions.json').read_text())['cpu']['sessions'];rows=[]
for case in sessions:
    blob,manifest=pack(rt,inputs['tokenizer'],case['question']);tokens=rt.generate(manifest['prompt_tokens']);rows.append({'question':case['question'],'domain':case['domain'],'actual_tokens':tokens,'expected_tokens':case['expected_tokens'],'pass':tokens==case['expected_tokens'],'expected_text':case['expected_text']})
result={'scope':'host reference verification only, neither CPU nor GPU target execution','checkpoint_sha256':digest,'frozen_checkpoint_match':True,'cases':rows,'passed':sum(x['pass'] for x in rows),'total':len(rows)};out=R/'8-本轮实验/Nano冻结问题主机预检';out.mkdir(exist_ok=True);(out/'result.json').write_text(json.dumps(result,ensure_ascii=False,indent=2));print(json.dumps({'passed':result['passed'],'total':result['total'],'checkpoint_match':True}));raise SystemExit(result['passed']!=result['total'])