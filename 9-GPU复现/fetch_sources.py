"""Fetch exact course sources; proxy is explicit and applies to this invocation only."""
import argparse,hashlib,json,os,pathlib,subprocess
R=pathlib.Path(__file__).resolve().parents[1]
a=argparse.ArgumentParser();a.add_argument('--proxy');args=a.parse_args()
lock=R/'student-mini-v1-cpu-gpu/sources/third_party/sources.lock.json';cfg=json.loads(lock.read_text(encoding='utf-8'));out=R/'9-GPU复现';results=[]
for name in ['vortex','vortex-toolchain-prebuilt']:
    item=next(x for x in cfg['sources'] if x['name']==name);dest=out/name
    git=['git','-c','safe.directory='+dest.as_posix()]
    if args.proxy:git+=['-c','http.proxy='+args.proxy]
    with (out/(name+'-fetch-native.log')).open('w',encoding='utf-8') as log:
        try:
            subprocess.run(git+['init',str(dest)],check=True,stdout=log,stderr=log)
            subprocess.run(git+['-C',str(dest),'fetch','--depth','1',item['url'],item['commit']],check=True,stdout=log,stderr=log,timeout=300)
            subprocess.run(git+['-C',str(dest),'checkout','--detach',item['commit']],check=True,stdout=log,stderr=log)
            actual=subprocess.check_output(git+['-C',str(dest),'rev-parse','HEAD'],text=True).strip()
            results.append({'name':name,'expected':item['commit'],'actual':actual,'source_ready':actual==item['commit']})
        except Exception as e:results.append({'name':name,'source_ready':False,'error':str(e)})
    (out/'source-status.json').write_text(json.dumps({'lock_sha256':hashlib.sha256(lock.read_bytes()).hexdigest(),'sources':results,'gpu_execution':False},indent=2),encoding='utf-8')
print(json.dumps(results,indent=2))
