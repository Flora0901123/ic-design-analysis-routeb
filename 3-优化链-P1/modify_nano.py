from pathlib import Path

p = Path(__file__).resolve().parents[1] / "student-mini-v1-cpu-gpu/sources/software/student_mini_native_nano.c"
txt = p.read_text()

# 1. 加 rne15 函数（在 rne_div 后）
anchor = """static int64_t rne_div(int64_t n, int64_t d) {
    uint64_t a=n<0 ? (uint64_t)(-(n+1))+1u : (uint64_t)n;
    uint64_t q=a/(uint64_t)d, r=a%(uint64_t)d;
    if(r*2u>(uint64_t)d || (r*2u==(uint64_t)d && (q&1u))) ++q;
    return n<0 ? -(int64_t)q : (int64_t)q;
}"""
r15 = anchor + """
static int64_t rne15(int64_t n) {
    /* B2: n/32768 RNE via shift+mask, bit-exact with rne_div(n,32768). */
    uint64_t a=n<0 ? (uint64_t)(-(n+1))+1u : (uint64_t)n;
    uint64_t q=a>>15, r=a&0x7fffu;
    if(r>0x4000u || (r==0x4000u && (q&1u))) ++q;
    return n<0 ? -(int64_t)q : (int64_t)q;
}"""
if anchor not in txt:
    print("ERROR: rne_div anchor not found")
else:
    txt = txt.replace(anchor, r15, 1)

# 2. 替换 attention 里 rne_div(x,32768) -> rne15(x)
repls = [
    ("rne_div((int64_t)denominator*old,32768)", "rne15((int64_t)denominator*old)"),
    ("rne_div(numerator[j]*old,32768)", "rne15(numerator[j]*old)"),
]
for old, new in repls:
    if old in txt:
        txt = txt.replace(old, new)
    else:
        print("WARN not found:", old)

# 3. 排序：冒泡 -> 选择取前4
old_sort = """        if(prefill) {
            for(unsigned i=0;i<visible;++i) for(unsigned j=i+1;j<visible;++j)
                if(scores[ids[j]]>scores[ids[i]] || (scores[ids[j]]==scores[ids[i]] && ids[j]<ids[i])) {
                    unsigned tmp=ids[i]; ids[i]=ids[j]; ids[j]=tmp;
                }
            if(count>4) count=4;
        }"""
new_sort = """        if(prefill) {
            /* B1: selection sort for top-4 only (O(visible*4) vs O(visible^2)). */
            unsigned limit = count < 4 ? count : 4;
            for(unsigned i=0;i<limit;++i) {
                unsigned best=i;
                for(unsigned j=i+1;j<visible;++j)
                    if(scores[ids[j]]>scores[ids[best]] || (scores[ids[j]]==scores[ids[best]] && ids[j]<ids[best]))
                        best=j;
                if(best!=i){unsigned tmp=ids[i]; ids[i]=ids[best]; ids[best]=tmp;}
            }
            if(count>4) count=4;
        }"""
if old_sort not in txt:
    print("ERROR: sort block not found")
else:
    txt = txt.replace(old_sort, new_sort)

p.write_text(txt)
print("OK: Nano attention optimized (selection top-4 + rne15 shift)")
