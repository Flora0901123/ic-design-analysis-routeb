"""Read-only source-archive inspection. Extraction and receipts stay below this new directory."""
from pathlib import Path, PureWindowsPath
import hashlib,json,re,subprocess

OUT=Path(__file__).resolve().parent
ROOT=OUT.parents[1]
ARCHIVE=ROOT.parent/'集成电路设计与分析/open-soc-ai-labs (1).7z'
SEVEN=Path(r'C:\Program Files\7-Zip\7z.exe')
PRIOR=ROOT/'8-本轮实验/GPU生成规则物理恢复-20261110'


def sha(data):return hashlib.sha256(data).hexdigest()
def run(args):
 r=subprocess.run(args,stdout=subprocess.PIPE,stderr=subprocess.PIPE)
 if r.returncode:raise RuntimeError((args,r.returncode,r.stderr.decode('utf-8',errors='replace')))
 return r.stdout

def dump(path,x):path.write_text(json.dumps(x,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')

def main():
 original_hash=sha(ARCHIVE.read_bytes())
 prior_manifest_hash=sha((PRIOR/'MANIFEST.sha256').read_bytes())
 listing=run([str(SEVEN),'l','-slt','-ba','-sccUTF-8',str(ARCHIVE)]).decode('utf-8-sig').replace('\r\n','\n')
 (OUT/'archive-listing.txt').write_text(listing,encoding='utf-8',newline='\n')
 entries=[]
 for block in listing.split('\n\n'):
  d=dict(re.findall(r'^([^=\n]+?) = (.*)$',block,re.M))
  if not d.get('Path'):continue
  p=PureWindowsPath(d['Path'])
  assert not p.is_absolute() and p.parts[0]=='open-soc-ai-labs' and '..' not in p.parts and ':' not in d['Path']
  assert not any('link' in k.lower() for k in d),d
  entries.append(d)
 dump(OUT/'archive-entries.json',entries)
 extracted=OUT/'extracted'
 extracted.mkdir(exist_ok=True)
 output=run([str(SEVEN),'x','-y','-bb0','-sccUTF-8','-o'+str(extracted),str(ARCHIVE)])
 (OUT/'extraction.log').write_bytes(output)
 repo=extracted/'open-soc-ai-labs'
 files=[p for p in repo.rglob('*') if p.is_file()]
 assert len(files)==sum('D' not in e.get('Attributes','') for e in entries)
 unresolved=[b for b in json.loads((PRIOR/'binding-recheck.json').read_text(encoding='utf-8'))['bindings'] if b['status']=='UNMATCHED']
 targets={b['expected_sha256']:b['original_bound_path'] for b in unresolved}
 pattern=re.compile(rb'gpu_constraint|vortex_(?:sp|dp)|staged-openram|OpenRAM|sky130|flat_3_place|part_fast28|gpu-top-config|gpu-cut-synthesis',re.I)
 matches=[];filescan=[]
 for p in files:
  if '.git' in p.relative_to(repo).parts:continue
  data=p.read_bytes();h=sha(data)
  if h in targets:matches.append({'kind':'worktree-file','file':str(p.relative_to(OUT)),'sha256':h,'original_bound_path':targets[h]})
  if pattern.search(data) or p.suffix.lower() in ('.sdc','.lef','.lib'):
   filescan.append({'path':p.relative_to(repo).as_posix(),'sha256':h,'size':len(data),
                   'matched_terms':sorted(set(m.group().decode('ascii') for m in pattern.finditer(data)))})
 git=['git','--no-optional-locks','--git-dir='+str(repo/'.git'),'--work-tree='+str(repo)]
 gitlog=run(git+['log','--all','--format=%H %cI %s']).decode('utf-8',errors='replace')
 (OUT/'git-log.txt').write_text(gitlog,encoding='utf-8',newline='\n')
 objects=run(git+['cat-file','--batch-all-objects','--batch-check=%(objectname) %(objecttype) %(objectsize)']).decode('ascii').splitlines()
 blobs=[line.split() for line in objects if line.split()[1]=='blob']
 (OUT/'git-object-index.txt').write_text('\n'.join(objects)+'\n',encoding='utf-8',newline='\n')
 git_content_hits=[]
 for oid,_,size in blobs:
  data=run(git+['cat-file','blob',oid]);h=sha(data)
  assert len(data)==int(size)
  if h in targets:matches.append({'kind':'git-blob','oid':oid,'sha256':h,'original_bound_path':targets[h]})
  if pattern.search(data):git_content_hits.append({'oid':oid,'sha256':h,'bytes':len(data),
                   'matched_terms':sorted(set(m.group().decode('ascii') for m in pattern.finditer(data)))})
 assert sha(ARCHIVE.read_bytes())==original_hash
 assert sha((PRIOR/'MANIFEST.sha256').read_bytes())==prior_manifest_hash
 result={'status':'ARCHIVE_AND_GIT_INSPECTED','archive':str(ARCHIVE),'archive_sha256':original_hash,
         'archive_bytes':ARCHIVE.stat().st_size,'entries':len(entries),'files':len(files),
         'non_git_files':sum('.git' not in p.relative_to(repo).parts for p in files),
         'uncompressed_file_bytes':sum(p.stat().st_size for p in files),
         'filename_hits':[e['Path'] for e in entries if re.search(r'gpu|sdc|openram|sky130|sram|constraint|vortex|flat_3_place|quad\.v',e['Path'],re.I)],
         'worktree_content_hits':filescan,'git_objects':len(objects),'git_blobs_scanned':len(blobs),'git_content_hits':git_content_hits,
         'git_log':gitlog.splitlines(),'remaining_binding_checks':len(unresolved),'new_exact_matches':matches,
         'prior_binding_matches':32,'total_binding_matches':32+len(matches),'archive_unchanged':True,'prior_experiment_manifest_unchanged':True,
         'eda_commands_run':[],'downloads':[]}
 dump(OUT/'archive-audit.json',result)
 print(json.dumps({k:result[k] for k in ('status','entries','files','non_git_files','git_objects','git_blobs_scanned','worktree_content_hits','git_content_hits','new_exact_matches','total_binding_matches')},ensure_ascii=True))

if __name__=='__main__':main()
