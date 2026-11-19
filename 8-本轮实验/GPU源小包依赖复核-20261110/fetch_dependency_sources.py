"""Fetch only small official fixed-commit dependency sources; never execute them."""
from pathlib import Path
import hashlib,json,urllib.request
O=Path(__file__).resolve().parent
commit='b2b069ce119d1488cbe6883b2240bceb5c7ce29a'
paths=['README.md','compiler/options.py','compiler/globals.py','technology/sky130/tech/tech.py']
records=[]
for p in paths:
 url=f'https://raw.githubusercontent.com/VLSIDA/OpenRAM/{commit}/{p}'
 request=urllib.request.Request(url,headers={'User-Agent':'RouteB-read-only-dependency-audit'})
 with urllib.request.urlopen(request,timeout=30) as response:
  data=response.read(200000)
 assert len(data)<200000
 target=O/'official-source'/p
 target.parent.mkdir(parents=True,exist_ok=True)
 target.write_bytes(data)
 records.append({'repository':'https://github.com/VLSIDA/OpenRAM','commit':commit,'url':url,'file':target.relative_to(O).as_posix(),'bytes':len(data),'sha256':hashlib.sha256(data).hexdigest(),'purpose':'dependency-inspection-only; not a recovered macro physical view'})
receipt={'status':'FOUR_SMALL_OFFICIAL_SOURCE_FILES_ONLY','commit':commit,'downloaded_bytes':sum(r['bytes'] for r in records),'records':records,'executed':False,'original_binding_matches_added':0}
(O/'official-source-receipt.json').write_text(json.dumps(receipt,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
print(json.dumps({'status':receipt['status'],'downloaded_bytes':receipt['downloaded_bytes'],'new_binding_matches':0}))
