"""Replay the connection checks for the staged GPU top and blocks under WSL."""
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile

def sha(path):
    with path.open('rb') as src:
        return hashlib.file_digest(src, 'sha256').hexdigest()

def load(path):
    return json.loads(path.read_text(encoding='utf-8'))

decl=re.compile(r'^(input|output|inout|wire)\s+(?:\[\s*(-?\d+)\s*:\s*(-?\d+)\s*\]\s*)?(.+?)\s*;$',re.S)
header=re.compile(r'^module\s+(\S+)\s*\(')
inst=re.compile(r'^(\S+)\s+(\S+)\s*\((.*)\)\s*;$',re.S)
pins=re.compile(r'\.\s*(\\[^\s]+|[\w$]+(?:\[-?\d+\])?)\s*\(([^()]*)\)',re.S)
ref=re.compile(r'^(\\\S+|[^\s{}\[\],]+)(?:\s*\[\s*(-?\d+)\s*(?::\s*(-?\d+)\s*)?\])?$')
constant=re.compile(r"(\d+)'([bhd])([0-9a-fxz]+)$",re.I)
TOP='vortex_physical_top'
def clean(net):return net.removeprefix('\\')
def bits(msb,lsb):return list(range(msb,lsb+(1 if msb<=lsb else -1),1 if msb<=lsb else -1))
def expression(x,d):
 x=x.strip()
 if not x:return []
 if x.startswith('{') and x.endswith('}'):
  return [v for k in x[1:-1].split(',') for v in expression(k,d)]
 m=constant.fullmatch(x)
 if m:
  width,base,value=m.groups()
  assert not any(c in value.lower() for c in 'xz'),x
  return ['CONST:'+b for b in f"{int(value,{'b':2,'h':16,'d':10}[base.lower()]):0{int(width)}b}"]
 m=ref.fullmatch(x)
 if not m:raise ValueError('unhandled expression '+repr(x[:350]))
 name,hi,lo=m.groups();name=clean(name)
 if hi is not None:
  return [f'{name}[{i}]' for i in bits(int(hi),int(lo if lo is not None else hi))]
 return [name] if name not in d else [f'{name}[{i}]' for i in d[name]]
def statements(path):
 current=[]
 for line in path.open():
  if not current and (not line.strip() or line.lstrip().startswith('//')):continue
  if not current and line.strip()=='endmodule':
   yield 'endmodule';continue
  current.append(line)
  if line.rstrip().endswith(';'):
   yield ''.join(current).strip();current=[]
 assert not current
def declarations(path):
 data={}
 for text in statements(path):
  if text.startswith('module '):
   name=header.match(text)[1];d={}; ports={};data[name]=(d,ports);continue
  m=decl.match(text)
  if not m:continue
  mode,msb,lsb,raw=m.groups(); name=clean(raw.strip())
  if msb is not None:
   v=bits(int(msb),int(lsb));assert name not in d or d[name]==v,(name,d.get(name),v)
   d[name]=v
  if mode!='wire':
   assert name not in ports or ports[name]==mode,(name,ports.get(name),mode)
   ports[name]=mode
 return data
def normalized(path):
 info=declarations(path)
 domains={};cells={};nets={}; aliases={}; cnt=0
 def resolve(k):
  while k in aliases: k=aliases[k]
  return k
 def local(mod,value):
  if value.startswith('CONST:'):return (TOP,value)
  if mod in domains and value in domains[mod]:return (TOP,domains[mod][value])
  return (mod,value)
 def connect(net,endpoint):
  nets.setdefault(net,[]).append(endpoint)
 for name,role in info[TOP][1].items():
  for bit in expression(name,info[TOP][0]):connect((TOP,bit),'@'+role+':'+bit)
 for text in statements(path):
  if text.startswith('module '): mod=header.match(text)[1]; words=info[mod][0];continue
  if text=='endmodule' or decl.match(text):continue
  if text.startswith('assign '):
   lhs,rhs=text[len('assign '):-1].split('=',1)
   left,right=expression(lhs,words),expression(rhs,words)
   assert len(left)==len(right),(lhs,rhs)
   for l,r_ in zip(left,right):
    first,second=resolve(local(mod,l)),resolve(local(mod,r_))
    if first!=second:aliases[first]=second
   continue
  item=inst.fullmatch(text)
  if not item:raise ValueError('unhandled statement '+text[:200])
  master,raw,connections=item.groups();name=clean(raw)
  entries=[]; pos=0
  for m in pins.finditer(connections):
   assert not connections[pos:m.start()].strip(' ,\r\n\t'),connections[pos:m.start()][:200]
   pos=m.end()
   pin,value=m.groups()
   entries.append((clean(pin),expression(value,words)))
  assert not connections[pos:].strip(' ,\r\n\t')
  if master in info:
   assert mod==TOP and master not in domains
   dest={};domains[master]=dest
   for pin,actual in entries:
    cooked=expression(chr(92)+pin,info[master][0])
    assert len(cooked)==len(actual),(master,pin,len(cooked),len(actual))
    for b,a in zip(cooked,actual):
     assert b not in dest or dest[b]==a,(master,b,dest.get(b),a)
     dest[b]=a
   continue
  assert name not in cells,name
  cells[name]=master
  for pin,values in entries:
   for i,value in enumerate(values):
    if value.startswith('CONST:'): net=(TOP,value)
    elif mod in domains and value in domains[mod]: net=(TOP,domains[mod][value])
    else: net=(mod,value)
    endpoint=name+'|'+pin+(f'#{i}' if len(values)>1 else '')
    connect(net,endpoint); cnt+=1
 if aliases:
  compact={}
  for net,values in nets.items():
   compact.setdefault(resolve(net),[]).extend(values)
  nets=compact
 total=sum(map(len,nets.values()))
 assert len(cells)>450000 and cnt>1200000
 # Key endpoint categories keep top-level directions and primitive types observable.
 digests={}; examples={}
 for net,values in nets.items():
  grouped=sorted(values)
  key=hashlib.sha256('\n'.join(grouped).encode()).hexdigest()
  assert key not in digests,(net,grouped[:3])
  digests[key]=(net,len(grouped))
  if len(grouped)>1: examples[net]=grouped[:6]
 return cells,digests,examples,cnt,total

def assert_same(reference, actual):
    assert reference[0] == actual[0], 'Instance IDs or masters changed'
    assert reference[1].keys() == actual[1].keys(), 'Electrical endpoint groups changed'
    assert reference[3:5] == actual[3:5], 'Connected port bit counts changed'

def main():
    evidence = Path(__file__).resolve().parent
    root = evidence.parent.parent
    sys.path.insert(0,str(root/'7-\u5ba1\u8ba1\u4e0e\u9a8c\u6536'))
    import qualification_resource_guard as guard
    guard.prepare()
    guard.join()
    source = evidence/'four-quadrant-standard-cell-placement'/'placed.odb'
    revised = evidence/'four-quadrant-equivalent-scalar-export'
    corrected = revised/'fixed-quad.v'
    prepared = evidence/'four-block-physical-inputs'
    reexport = load(revised/'status.json')
    stitched = load(prepared/'stitched-equivalence.json')
    assert sha(source) == reexport['source_placement_sha256']
    assert sha(corrected) == reexport['outputs']['fixed-quad.v']
    assert sha(revised/'status.json') == stitched['parent_equivalence_report_sha256']
    tool = load(evidence/'gpu-floorplan'/'inputs.json')['openroad']
    exe = root/tool['binary']
    assert sha(exe) == tool['binary_sha256']
    with tempfile.TemporaryDirectory(prefix='routeb-gpu-equivalence-replay-') as tmp:
        scratch = Path(tmp)
        shutil.copyfile(source, scratch/'placed.odb')
        (scratch/'export.tcl').write_text('set_thread_count 2\nread_db placed.odb\nwrite_verilog flat.v\nexit\n')
        env = os.environ | {'LD_LIBRARY_PATH': str(exe.parents[2]/'opt/or-tools/lib')}
        subprocess.run([str(exe),'-no_init','-exit','export.tcl'],cwd=scratch,env=env,check=True,timeout=180)
        flat = scratch/'flat.v'
        assert sha(flat) == reexport['flat_reference_sha256']
        reference = normalized(flat)
        fixed = normalized(corrected)
        assert_same(reference, fixed)
        del fixed
        combined = scratch/'combined.v'
        with combined.open('wb') as dest:
            for name, expected in stitched['inputs'].items():
                item = prepared/name
                assert sha(item) == expected
                with item.open('rb') as src:
                    shutil.copyfileobj(src,dest)
                dest.write(b'\n')
        assert_same(reference, normalized(combined))
        print(f'PASS instances={len(reference[0])} electrical_groups={len(reference[1])}'
              f' primitive_bits={reference[3]} chip_bits={reference[4]-reference[3]}')

if __name__ == '__main__':
    main()
