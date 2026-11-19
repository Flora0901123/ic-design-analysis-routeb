from pathlib import Path
import subprocess,json,os,hashlib,shutil
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/locked-verilator-5.040';W=Path('/tmp/routeb-verilator-5040-source/verilator-5.040');state=json.loads((O/'status.json').read_text());shutil.copyfile(O/'status.json',O/'status-first-attempt.json');shutil.copyfile(O/'build.log',O/'build-first-attempt.log');state.update(status='BUILDING',previous_error=state.pop('error',None));(O/'status.json').write_text(json.dumps(state,indent=2))
try:
 for name,cmd in [('build-resume',['make','-j2']),('install',['make','install'])]:
  with (O/(name+'.log')).open('w') as f:p=subprocess.run(cmd,cwd=W,stdout=f,stderr=subprocess.STDOUT,timeout=600)
  state['stages'].append({'stage':name,'exit_code':p.returncode});assert p.returncode==0,name
 dest=Path(state['prefix']);version=subprocess.check_output([str(dest/'bin/verilator'),'--version'],text=True);assert 'Verilator 5.040' in version
 state.update(status='INSTALLED',version=version.strip(),binaries={n:hashlib.sha256((dest/'bin'/n).read_bytes()).hexdigest() for n in ['verilator','verilator_bin']})
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
(O/'status.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2))
