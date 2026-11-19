"""Pure-Python independent bit reference and slice model; emits future 4-state RTL benches.
No simulator, synthesis or OpenRAM process is launched here.
"""
from pathlib import Path
import json,random,runpy,hashlib
O=Path(__file__).resolve().parent
contract=json.loads((O/'export-contract.json').read_text(encoding='utf-8'))

def write(rel,text):
 p=O/rel;p.parent.mkdir(parents=True,exist_ok=True);p.write_text(text,encoding='utf-8',newline='\n')

def packed(bits):
 value=sum((x or 0)<<k for k,x in enumerate(bits));known=sum((x is not None)<<k for k,x in enumerate(bits))
 return value,known

class BitReference:
 def __init__(self,w,d,m):self.w=w;self.d=d;self.m=m;self.mem=[[None]*w for _ in range(d)];self.out=[None]*w
 def step(self,we,re,wa,ra,data,mask):
  if we:
   for bit in range(self.w):
    if (mask>>(bit//(self.w//self.m)))&1:self.mem[wa][bit]=(data>>bit)&1
  if re:self.out=self.mem[ra].copy()
  return packed(self.out)

class SliceCandidate:
 def __init__(self,w,d,m):
  self.w=w;self.d=d;self.m=m;self.sw=w//m;self.mem=[[(0,0) for _ in range(d)] for _ in range(m)];self.out=(0,0);self.suppressed=0
 def falling_phase(self,we,re,wa,ra,data,mask):
  values=[]
  for s in range(self.m):
   enabled=we and bool((mask>>s)&1);collision=bool(re and enabled and wa==ra)
   raw_read=bool(re and not collision)
   assert not(raw_read and enabled and wa==ra)
   if collision:self.suppressed+=1
   val=(data>>(s*self.sw))&((1<<self.sw)-1)
   if re:values.append((val,(1<<self.sw)-1) if collision else self.mem[s][ra])
   if enabled:self.mem[s][wa]=(val,(1<<self.sw)-1)
  if re:self.out=(sum(v<<(s*self.sw) for s,(v,k) in enumerate(values)),sum(k<<(s*self.sw) for s,(v,k) in enumerate(values)))
  return self.out

records=[]
for row in contract['macro_mapping']:
 name=row['macro_name'];w=row['data_width'];d=row['depth'];m=row['write_enable_width'];sw=w//m
 ref=BitReference(w,d,m);candidate=SliceCandidate(w,d,m);rng=random.Random(20261110+w*13+d)
 operations=[(0,1,0,0,0,0),(0,0,0,0,0,0),(1,1,0,0,rng.getrandbits(w),1)]
 # Real writes initialize the test memory. They are not RTL initial blocks or ASIC power-up claims.
 operations += [(1,0,a,0,rng.getrandbits(w),(1<<m)-1) for a in range(d)]
 operations += [(0,1,0,a,0,0) for a in range(d)]
 # Exhaust every write-mask value at a same-address collision, including zero masks.
 operations += [(1,1,0,0,rng.getrandbits(w),mask) for mask in range(1<<m)]
 # Idle/hold intervals represent reset of outer control: there is no macro reset pin.
 operations += [(0,0,0,0,rng.getrandbits(w),rng.randrange(1<<m)) for _ in range(8)]
 operations += [(rng.randrange(2),rng.randrange(2),rng.randrange(d),rng.randrange(d),rng.getrandbits(w),rng.randrange(1<<m)) for _ in range(512)]
 vector_lines=[];unknown=0;known_checks=0
 for op in operations:
  old=packed(ref.out)
  assert candidate.out==old,'OpenRAM retained output before falling phase must be prior read result'
  expected=ref.step(*op)
  actual=candidate.falling_phase(*op)
  assert actual==expected,(name,op,actual,expected)
  ev,known=expected;unknown_flag=int(known!=(1<<w)-1)
  unknown+=unknown_flag;known_checks+=known.bit_count()
  we,re,wa,ra,data,mask=op
  vector_lines.append(f'{we} {re} {wa} {ra} {data:x} {mask:x} {ev:x} {known:x} {unknown_flag}')
 write(f'verification/{name}.vectors','\n'.join(vector_lines)+'\n')
 for backend in ('ff','openram'):
  maskport=',.wmask0(mask)' if m>1 else ''
  compare='''if ((dout & known) !== (expected & known)) $fatal(1,"Known-bit mismatch at record %0d",n);
 if (expect_unknown && !$isunknown(dout)) $fatal(1,"Uninitialized state was forced known/zero at record %0d",n);'''
  poscheck=compare if backend=='ff' else ''
  fallcheck=compare if backend=='openram' else ''
  tb=f'''`timescale 1ns/1ps
module tb;
parameter integer READ_SETTLE_NS=1;
reg clk=0,csb0=1,csb1=1;
always #5 clk=~clk;
reg [{(d-1).bit_length()-1}:0] wa,ra;
reg [{w-1}:0] data,expected,known;
reg [{m-1}:0] mask;
wire [{w-1}:0] dout;
integer fd,rc,n,we,re,expect_unknown;
{name} dut(.clk0(clk),.csb0(csb0),.addr0(wa),.din0(data),.clk1(clk),.csb1(csb1),.addr1(ra),.dout1(dout){maskport});
// 4-state simulator required. Only test stimulus writes initialize storage.
initial begin
 if(READ_SETTLE_NS<1 || READ_SETTLE_NS>4)$fatal(1,"Read settle must fit within low half-cycle");
 fd=$fopen("verification/{name}.vectors","r");if(!fd)$fatal(1,"vector file missing");n=0;
 while(!$feof(fd))begin
  rc=$fscanf(fd,"%d %d %d %d %h %h %h %h %d\\n",we,re,wa,ra,data,mask,expected,known,expect_unknown);
  if(rc==9)begin
   csb0=!(we{" && mask[0]" if m==1 else ""});csb1=!re;
   @(posedge clk);#1;
   {poscheck}
   @(negedge clk);#(READ_SETTLE_NS);
   {fallcheck}
   n=n+1;
  end else if(rc!=-1)$fatal(1,"malformed vectors");
 end
 $display("PASS {backend} {name}: %0d records",n);$finish;
end
endmodule
'''
  write(f'verification/tb_{name}_{backend}.sv',tb)
 records.append({'macro_name':name,'transactions':len(operations),'known_bit_comparisons':known_checks,
                 'unknown_output_transactions':unknown,'all_masks_exhausted':1<<m,
                 'raw_same_address_reads_suppressed':candidate.suppressed,'python_bit_reference_vs_slice_model':'PASS'})
# Execute only our own data-only configs. They import pathlib and assign options; no OpenRAM import.
configs=[]
for p in sorted((O/'openram-configs').glob('*.py')):
 x=runpy.run_path(str(p))
 assert x['num_rw_ports']==0 and x['num_w_ports']==1 and x['num_r_ports']==1
 assert x['write_size'] is None and x['word_size'] in (8,20,32)
 assert x['num_words']/x['words_per_row']<=512
 assert x['check_lvsdrc'] and not x['use_nix'] and x['netlist_only'] is False
 configs.append({'file':p.relative_to(O).as_posix(),'sha256':hashlib.sha256(p.read_bytes()).hexdigest(),'data_only_config_execution':'PASS'})
result={'status':'PYTHON_CONTRACT_CHECKS_PASS_RTL_SIMULATION_NOT_RUN','shape_results':records,
 'transactions':sum(x['transactions'] for x in records),'known_bit_comparisons':sum(x['known_bit_comparisons'] for x in records),
 'configs_checked':configs,'four_state_rtl_simulation_executed':False,'EDA_executed':False,
 'scope':'Independent bit-level semantic reference compared with a separate slice/halfcycle transaction model. This is not a proof of the emitted RTL or real OpenRAM models.',
 'remaining_gates':['Run emitted benches against FF RTL in a four-state simulator, including unknown initial contents.',
   'Run OpenRAM wrappers first with the labeled test surrogate, then with actual generated macro simulation models; recheck model pin names, edge polarity and access delays.',
   'Prove common-clock tie and output hold/latch timing; test all masked same-address cases and idle cycles.',
   'Replay whole-GPU ports under the new backend and protocol/reset cases; OpenRAM halfcycle phase differs from the original posedge model.',
   'Run hierarchy/check with no unresolved arithmetic modules, then actual standard-cell mapping and physical closure; no PPA acceptance before this.']}
write('semantic-precheck.json',json.dumps(result,ensure_ascii=False,indent=2)+'\n')
print(json.dumps({'status':result['status'],'transactions':result['transactions'],'known_bit_comparisons':result['known_bit_comparisons'],'config_count':len(configs)}))
