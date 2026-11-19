from pathlib import Path
import subprocess,json,hashlib
R=Path(__file__).resolve().parents[1]; lock=R/'student-mini-v1-cpu-gpu/sources/third_party/sources.lock.json';cfg=json.loads(lock.read_text());out=R/'9-GPU复现';report=[]
for name in ['vortex','vortex-toolchain-prebuilt']:
    item=next(x for x in cfg['sources'] if x['name']==name);dest=out/name
    with (out/(name+'-fetch.log')).open('w') as log:
        try:
            if not (dest/'.git/config').exists():subprocess.run(['git','init',str(dest)],check=True,stdout=log,stderr=log)
            subprocess.run(['git','-c','safe.directory='+str(dest),'-C',str(dest),'fetch','--depth','1',item['url'],item['commit']],check=True,stdout=log,stderr=log,timeout=180)
            subprocess.run(['git','-c','safe.directory='+str(dest),'-C',str(dest),'checkout','--detach',item['commit']],check=True,stdout=log,stderr=log)
            actual=subprocess.check_output(['git','-c','safe.directory='+str(dest),'-C',str(dest),'rev-parse','HEAD'],text=True).strip()
            report.append({'name':name,'commit':actual,'expected':item['commit'],'source_ready':actual==item['commit']})
        except Exception as e:report.append({'name':name,'source_ready':False,'error':str(e)})
    (out/'source-status.json').write_text(json.dumps({'lock_sha256':hashlib.sha256(lock.read_bytes()).hexdigest(),'sources':report,'gpu_execution':False},indent=2))
print(json.dumps(report,indent=2))
