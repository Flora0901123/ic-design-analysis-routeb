from pathlib import Path
import shutil,json,hashlib
R=Path(__file__).resolve().parent; old=Path('/home/camellia/socai/student-mini-v1-cpu-gpu/sources')
out=R/'8-本轮实验/历史原始证据归档';out.mkdir(parents=True,exist_ok=True)
files=[]
for group in ['cpu','native-cpu-run','native-image','native-nano']:
    for p in (old/'build/student-mini'/group).rglob('*'):
        if p.is_file() and (p.name in ['console.log','completion.json','inputs.json','manifest.json','host-golden.json','ptq.npz','image.bin','student_mini_native_image.h']):
            dst=out/p.relative_to(old/'build/student-mini');dst.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(p,dst)
            files.append({'source':str(p),'archive':str(dst.relative_to(out)),'sha256':hashlib.sha256(dst.read_bytes()).hexdigest()})
(out/'index.json').write_text(json.dumps({'scope':'historical artifacts, not freshly executed; source identity requires review','files':files},ensure_ascii=False,indent=2))
print('archived',len(files))
