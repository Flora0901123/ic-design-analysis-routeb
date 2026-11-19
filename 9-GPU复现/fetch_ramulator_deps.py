from pathlib import Path
import subprocess,json,io,tarfile
R=Path(__file__).resolve().parent;root=R/'vortex/third_party/ramulator/ext';pins=[('yaml-cpp','https://github.com/jbeder/yaml-cpp.git','yaml-cpp-0.7.0'),('spdlog','https://github.com/gabime/spdlog.git','v1.11.0'),('argparse','https://github.com/p-ranav/argparse.git','v2.9')];records=[]
for name,url,tag in pins:
    dest=root/name;git=['git','-c','http.proxy=http://127.0.0.1:7890','-c','core.autocrlf=false','-c','safe.directory='+dest.as_posix()]
    if not (dest/'.git').exists():subprocess.run(git+['clone','--depth','1','--branch',tag,url,str(dest)],check=True)
    blob=subprocess.check_output(git+['-C',str(dest),'archive','--format=tar','HEAD'])
    with tarfile.open(fileobj=io.BytesIO(blob)) as archive:
        for item in archive.getmembers():
            path=dest/item.name
            if not path.resolve().is_relative_to(dest.resolve()):raise ValueError('invalid archive')
            if item.isfile():path.parent.mkdir(parents=True,exist_ok=True);path.write_bytes(archive.extractfile(item).read())
    records.append({'name':name,'tag':tag,'commit':subprocess.check_output(git+['-C',str(dest),'rev-parse','HEAD'],text=True).strip()})
(R/'ramulator-dependency-sources.json').write_text(json.dumps(records,indent=2));print(json.dumps(records,indent=2))