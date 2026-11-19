from pathlib import Path
import shutil,hashlib,json,time,os

def restore(cache_receipt,output_directory):
    start=time.monotonic();C=Path(cache_receipt['cache']);C.mkdir(exist_ok=True);aliases={};copied=0
    for x in cache_receipt['records']:
        f=C/x['name'];source=Path(x['source']);expected=x['sha256']
        if f.exists():assert hashlib.sha256(f.read_bytes()).hexdigest()==expected,('existing cache corrupted',f)
        else:
            assert hashlib.sha256(source.read_bytes()).hexdigest()==expected,('locked source changed',source)
            if expected in aliases:os.link(aliases[expected],f)
            else:shutil.copyfile(source,f)
            assert hashlib.sha256(f.read_bytes()).hexdigest()==expected;copied+=1
        aliases[expected]=f
    result={'status':'LOCKED_HOST_LIBRARY_CACHE_VERIFIED','files':len(cache_receipt['records']),'restored_files':copied,'seconds':time.monotonic()-start,'path':str(C),'reason':'RAM cache is ephemeral across WSL shutdown; restore only SHA-identical locked bytes'}
    (Path(output_directory)/('cache-restoration-'+str(time.time_ns())+'.json')).write_text(json.dumps(result,indent=2));return C