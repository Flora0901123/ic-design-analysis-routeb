from pathlib import Path
import urllib.request,urllib.error,json,hashlib,time
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU物理依赖公开来源核对-20261109';O.mkdir(exist_ok=True);expected='ec0e1067a35c8bf20b11e58d1e8ac53326067e4dac84a125cc1b917a3518d0d9';repo='The-OpenROAD-Project/OpenROAD-flow-scripts';state={'status':'RUNNING','expected_stdcell_lib_sha256':expected,'requests':[],'teacher_physical_identity_established':False}
def get(url):
 t=time.monotonic()
 try:
  with urllib.request.urlopen(urllib.request.Request(url,headers={'User-Agent':'RouteB-local-source-audit','Accept':'application/vnd.github+json'}),timeout=40) as response:data=response.read()
  state['requests'].append({'url':url,'bytes':len(data),'seconds':time.monotonic()-t,'sha256':hashlib.sha256(data).hexdigest(),'status':'OK'});return data
 except Exception as e:state['requests'].append({'url':url,'seconds':time.monotonic()-t,'status':'FAILED','error':str(e)});return None
commit=get(f'https://api.github.com/repos/{repo}/commits/aabf2a')
if commit:
 meta=json.loads(commit);rev=meta['sha'];(O/'commit.json').write_bytes(commit)
else:
 meta_bytes=get(f'https://api.github.com/repos/{repo}/commits/master')
 if meta_bytes:meta=json.loads(meta_bytes);rev=meta['sha'];(O/'fallback-commit.json').write_bytes(meta_bytes)
 else:rev=None
if rev:
 url=f'https://raw.githubusercontent.com/{repo}/{rev}/flow/platforms/sky130hd/lib/sky130_fd_sc_hd__tt_025C_1v80.lib';data=get(url)
 if data:
  f=O/'sky130_fd_sc_hd__tt_025C_1v80.lib';f.write_bytes(data);actual=hashlib.sha256(data).hexdigest();state.update(resolved_commit=rev,source_url=url,actual_sha256=actual,exact_bound_hash_match=actual==expected,status='EXACT_PUBLIC_STDCELL_BINDING_RECOVERED' if actual==expected else 'PUBLIC_LIB_FOUND_BUT_BOUND_HASH_DIFFERS')
 else:state['status']='PUBLIC_LIB_FETCH_FAILED'
else:state['status']='PUBLIC_COMMIT_FETCH_FAILED'
(O/'completion.json').write_text(json.dumps(state,ensure_ascii=False,indent=2),encoding='utf-8');print(json.dumps(state,ensure_ascii=False,indent=2))