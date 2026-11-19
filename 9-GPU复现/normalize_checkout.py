from pathlib import Path
import os,subprocess,json,tarfile,io
R=Path(__file__).resolve().parent;root=R/'vortex';repos=[]
for folder,dirs,names in os.walk(root):
    p=Path(folder)
    if '.git' in dirs or '.git' in names:repos.append(p)
    dirs[:]=[d for d in dirs if d!='.git']
results=[]
for repo in repos:
    git=['git','-c','safe.directory='+repo.as_posix(),'-c','core.autocrlf=false','-C',str(repo)]
    raw=subprocess.check_output(git+['archive','--format=tar','HEAD'])
    links=[]
    with tarfile.open(fileobj=io.BytesIO(raw)) as archive:
        for item in archive.getmembers():
            target=repo/item.name
            if not target.resolve().is_relative_to(repo.resolve()):raise ValueError('unsafe path')
            if item.isfile():target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes(archive.extractfile(item).read())
            elif item.issym():links.append({'path':str(target.relative_to(root)),'target':item.linkname})
    (R/(repo.name+'-links.json')).write_text(json.dumps(links,indent=2))
    head=subprocess.check_output(git+['rev-parse','HEAD'],text=True).strip();results.append({'path':str(repo.relative_to(R)),'commit':head,'checkout':'raw locked Git archive bytes, no checkout text conversion; symlinks recorded separately'})
(R/'source-checkouts.json').write_text(json.dumps(results,indent=2));print('normalized',len(results),'locked repositories')