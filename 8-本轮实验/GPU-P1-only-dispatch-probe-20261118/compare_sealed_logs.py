from pathlib import Path
import hashlib,json,struct,sys
r=next(Path('/mnt/d/Users/Camellia/Desktop').glob('*-RouteB*')); x=next(r.glob('8-*')); a=next(r.glob('7-*'))
sys.path.insert(0,str(a))
from route_locked_gpu_candidate import choose
def read(p):return json.loads(p.read_text(encoding='utf-8-sig'))
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
old=next(x.glob('GPU*20261109/source-and-apps')).parent
base=next(x.glob('GPU*1000-20261108/replay-source-and-binary')).parent
out=x/'GPU-P1-only-dispatch-probe-20261118'
pilot=read(out/'status.json')
assert len(pilot['records'])==4
inputs=(base/'replay-source-and-binary/inputs.bin').read_bytes()
assert sha(base/'replay-source-and-binary/inputs.bin')==pilot['input_sha256']
src=old/'status.json'; bas=base/'status.json'
candidate_receipt=next(old.glob('*\u7ed3\u8bba.json'))
base_receipt=next(base.glob('*\u7ed3\u8bba.json'))
assert read(candidate_receipt)['status_sha256']==sha(src) and read(base_receipt)['status_sha256']==sha(bas)
board=read(src)['records']; reference=read(bas)['records']
assert len(board)==len(reference)==1000
old_index=read(old/'evidence-sha256.json')
base_index=read(base/'evidence-sha256.json')
rows=[]
for i,(c,b) in enumerate(zip(board,reference)):
    assert c['ordinal']==b['ordinal']==i and c['parent_cycles']==b['cycles']
    record=inputs[i*1936:(i+1)*1936]
    assert hashlib.sha256(record).hexdigest()==c['input_record_sha256']
    ordinal=f'{i:04d}.log'
    assert c['log_sha256']==old_index[ordinal]==sha(old/ordinal)
    assert base_index[ordinal]==sha(base/ordinal)
    op=struct.unpack_from('<I',record,4)[0]
    new=choose(record[:128],'baseline' if op==2 else 'combined')
    old_selection=choose(record[:128],'combined')
    assert old_selection==c['selected_implementation']
    assert new==old_selection or new=='baseline'
    rows.append({'ordinal':i,'case_id':c['case_id'],'seed':c['seed'],'old_selected':old_selection,'selected':new,
                 'expected_cycles':b['cycles'] if new=='baseline' else c['cycles'],
                 'expected_external_beats':(c['parent_read_beats']+c['parent_write_beats']) if new=='baseline' else (c['external_read_beats']+c['external_write_beats']),
                 'baseline_external_beats':c['parent_read_beats']+c['parent_write_beats'],'baseline_cycles':b['cycles']})
for probe in pilot['records']:
    row=rows[probe['ordinal']]
    assert probe['cycles']==row['expected_cycles'] and probe['external_beats']==row['expected_external_beats']
traffic=[row['ordinal'] for row in rows if row['expected_external_beats']*100>105*row['baseline_external_beats']]
regress=[row['ordinal'] for row in rows if row['expected_cycles']*100>105*row['baseline_cycles']]
summary={'scope':'Counterfactual dispatch comparison from independently sealed logs; four fresh control runs reported separately','formal_promotion':'HOLD','fresh_controls':4,'rows':rows,'expected_extra_traffic_over_5_pct':traffic,'expected_cycle_regressions_over_5_pct':regress,'old_traffic_over_5_pct':len(read(candidate_receipt)['total_external_beat_increases_over_5_percent']),'changed_dispatch':sum(row['selected']!=row['old_selected'] for row in rows),'official_weighted_gain':None,'source_hashes':{'baseline_status':sha(bas),'candidate_status':sha(src),'control_receipt':sha(out/'status.json')}}
(out/'sealed-log-comparison.json').write_text(json.dumps(summary,indent=2)+'\n')
print({k:v for k,v in summary.items() if k!='rows'},flush=True)
