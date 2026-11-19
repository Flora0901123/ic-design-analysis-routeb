from pathlib import Path
import json,subprocess,os
R=Path(__file__).resolve().parent;third=R/'vortex/third_party';ram=third/'ramulator';build=ram/'build';build.mkdir(exist_ok=True);status=[]
commands=[('ramulator-configure',['cmake','-S',str(ram),'-B',str(build),'-DFETCHCONTENT_SOURCE_DIR_YAML-CPP='+str(ram/'ext/yaml-cpp'),'-DFETCHCONTENT_SOURCE_DIR_SPDLOG='+str(ram/'ext/spdlog'),'-DFETCHCONTENT_SOURCE_DIR_ARGPARSE='+str(ram/'ext/argparse')]),('ramulator-build',['cmake','--build',str(build),'--target','ramulator','--parallel','2']),('softfloat',['make','-j2','-C',str(third),'softfloat']),('cocogfx',['make','-j2','-C',str(third),'cocogfx'])]
for stage,cmd in commands:
    (R/'thirdparty-build-status.json').write_text(json.dumps({'stage':stage,'status':'RUNNING','completed':status},indent=2))
    with (R/(stage+'.log')).open('w') as log:result=subprocess.run(cmd,stdout=log,stderr=subprocess.STDOUT)
    status.append({'stage':stage,'exit_code':result.returncode})
    if result.returncode:
        (R/'thirdparty-build-status.json').write_text(json.dumps({'stage':stage,'status':'FAILED','completed':status},indent=2));raise SystemExit(result.returncode)
(R/'thirdparty-build-status.json').write_text(json.dumps({'status':'BUILT','completed':status},indent=2));print('third-party libraries built')