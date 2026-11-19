"""Download only required toolchain blobs from the exact locked Git tree."""
import argparse,hashlib,json,pathlib,urllib.request,subprocess,urllib.error
R=pathlib.Path(__file__).resolve().parents[1];out=R/'9-GPU复现';a=argparse.ArgumentParser();a.add_argument('--proxy');a.add_argument('--download',action='store_true');args=a.parse_args()
opener=urllib.request.build_opener(urllib.request.ProxyHandler({'http':args.proxy,'https':args.proxy}) if args.proxy else urllib.request.ProxyHandler())
commit='d0e3fed1dbc4bbc882ea7d453d339b8dde874c13'
req=urllib.request.Request(f'https://api.github.com/repos/vortexgpgpu/vortex-toolchain-prebuilt/git/trees/{commit}?recursive=1',headers={'User-Agent':'RouteB-reproduction','Accept':'application/vnd.github+json'})
try:tree=json.load(opener.open(req,timeout=45))
except urllib.error.HTTPError as error:
    if error.code!=403:raise
    repo=out/'toolchain-metadata';git=['git','-c','safe.directory='+repo.as_posix()]
    if args.proxy:git+=['-c','http.proxy='+args.proxy]
    subprocess.run(git+['init',str(repo)],check=True,capture_output=True)
    subprocess.run(git+['-C',str(repo),'fetch','--filter=blob:none','--depth','1','https://github.com/vortexgpgpu/vortex-toolchain-prebuilt.git',commit],check=True,timeout=120)
    listing=subprocess.check_output(git+['-C',str(repo),'ls-tree','-r',commit],text=True)
    tree={'sha':commit,'truncated':False,'source':'git filtered fetch; GitHub API rate-limited','tree':[]}
    for line in listing.splitlines():
        mode,kind,digest,path=line.split(None,3);tree['tree'].append({'type':kind,'sha':digest,'path':path})
(out/'toolchain-tree.json').write_text(json.dumps(tree,indent=2),encoding='utf-8')
if tree.get('truncated'):raise RuntimeError('incomplete Git tree')
components=['riscv32-gnu-toolchain','llvm-vortex','pocl','chipstar','verilator','libcrt32','libc32']
files=[x for x in tree['tree'] if x['type']=='blob' and any(x['path'].startswith(c+'/ubuntu/focal/') or x['path'].startswith(c+'/') and c in ['libcrt32','libc32'] for c in components)]
plan={'locked_commit':commit,'files':files,'download_bytes':sum(x.get('size',0) for x in files)};(out/'toolchain-download-plan.json').write_text(json.dumps(plan,indent=2))
print(json.dumps({'files':len(files),'bytes':plan['download_bytes'],'paths':[x['path'] for x in files]},indent=2),flush=True)
if args.download:
    records=[]
    for item in files:
        p=out/'downloads'/item['path'];p.parent.mkdir(parents=True,exist_ok=True)
        def digest_file(path):
            blob=hashlib.sha1(('blob '+str(path.stat().st_size)+'\0').encode());s256=hashlib.sha256()
            with path.open('rb') as stream:
                while chunk:=stream.read(1024*1024):blob.update(chunk);s256.update(chunk)
            return blob.hexdigest(),s256.hexdigest()
        valid=p.exists() and digest_file(p)[0]==item['sha']
        if p.exists() and not valid:
            rejected=p.with_suffix(p.suffix+'.rejected');p.replace(rejected)
            print('retained rejected download '+item['path'],flush=True)
        for attempt in range(3):
            if valid:break
            url=f'https://raw.githubusercontent.com/vortexgpgpu/vortex-toolchain-prebuilt/{commit}/{item["path"]}?routeb_retry={attempt}'
            req=urllib.request.Request(url,headers={'User-Agent':'RouteB-reproduction','Accept-Encoding':'identity','Cache-Control':'no-cache'})
            partial=p.with_suffix(p.suffix+'.partial')
            with opener.open(req,timeout=180) as response,partial.open('wb') as f:
                length=response.headers.get('Content-Length');written=0
                while data:=response.read(1024*1024):f.write(data);written+=len(data)
            if length and written!=int(length):
                print('truncated response, retrying '+item['path'],flush=True);continue
            if digest_file(partial)[0]!=item['sha']:
                print('blob mismatch, retrying '+item['path'],flush=True);continue
            partial.replace(p);valid=True
        if not valid:raise ValueError('locked Git blob mismatch after retries: '+item['path'])
        blobhex,s256hex=digest_file(p)
        records.append({'path':item['path'],'git_blob':blobhex,'sha256':s256hex,'bytes':p.stat().st_size});(out/'toolchain-downloads.json').write_text(json.dumps(records,indent=2));print('verified '+item['path'],flush=True)
