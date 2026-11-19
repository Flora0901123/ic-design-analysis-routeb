from pathlib import Path
import shutil
R=Path(r'C:\Users\Camellia\Desktop\集成电路设计与分析-RouteB交付')
p=R/'setup.sh';s=p.read_text().replace('python3 "$HERE/reproduce.py" verify-reference','''if ! python3 "$HERE/reproduce.py" verify-reference; then
  echo 'Reference integrity FAILED; logs retained. Environment preparation may continue, but formal evidence remains invalid.'
fi''');p.write_text(s,encoding='utf-8',newline='\n')
shutil.copy2(Path(__file__).with_name('routeb_reproduce.py'),R/'reproduce.py')
(R/'archive_history.py').write_text('''from pathlib import Path
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
''',encoding='utf-8',newline='\n')
p=R/'7-审计与验收/完善进度.md';s=p.read_text();s+='''
## 本轮新发现

独立副本的verify_release实际返回失败：CPU/GPU各1000条发布记录数值重比对仍PASS，但 `sources/integration/litex/bios/Makefile` 与发布MANIFEST不一致。此差异来自本轮复制前的老师资料目录现状。本轮未修改原目录；不得再宣称整个包SHA零问题。后续适配也必须单独记录，并且不改写发布MANIFEST掩盖差异。

安装脚本已修复CRLF；参考完整性失败会明确记录，允许继续开发环境准备，但不因此判定正式合规。
''';p.write_text(s,encoding='utf-8',newline='\n')
print('corrected reference audit status')
