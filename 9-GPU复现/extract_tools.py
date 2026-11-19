from pathlib import Path
import hashlib,json,tarfile,shutil
R=Path(__file__).resolve().parents[1];base=R/'9-GPU复现';records=json.loads((base/'toolchain-downloads.json').read_text());plan=json.loads((base/'toolchain-download-plan.json').read_text());good={x['path']:x for x in records};tools=base/'tools';tools.mkdir(exist_ok=True);results=[]
for component in ['chipstar','libc32','libcrt32','llvm-vortex','pocl','riscv32-gnu-toolchain','verilator']:
    parts=sorted(x['path'] for x in plan['files'] if x['path'].startswith(component+'/'))
    if not parts or not all(x in good for x in parts):results.append({'component':component,'status':'WAITING_DOWNLOAD'});continue
    if (tools/component/'.routeb-extracted.json').exists():results.append({'component':component,'status':'ALREADY_EXTRACTED'});continue
    archive=base/(component+'.joined.tar.bz2')
    with archive.open('wb') as dst:
        for part in parts:
            p=base/'downloads'/part
            if hashlib.sha256(p.read_bytes()).hexdigest()!=good[part]['sha256']:raise ValueError('download changed')
            with p.open('rb') as src:shutil.copyfileobj(src,dst)
    with tarfile.open(archive,'r:bz2') as tar:
        for item in tar.getmembers():
            target=(tools/item.name).resolve()
            if not target.is_relative_to(tools.resolve()):raise ValueError('unsafe archive path')
        tar.extractall(tools,filter='data')
    marker=tools/component/'.routeb-extracted.json';marker.write_text(json.dumps({'parts':[good[x] for x in parts]},indent=2));results.append({'component':component,'status':'EXTRACTED'})
(base/'toolchain-extraction.json').write_text(json.dumps(results,indent=2));print(json.dumps(results,indent=2))