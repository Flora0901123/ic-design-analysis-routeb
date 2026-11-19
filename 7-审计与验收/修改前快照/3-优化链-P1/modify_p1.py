from pathlib import Path

p = Path("/home/camellia/socai/student-mini-v1-cpu-gpu/sources/software/student_mini_scalar.c")
txt = p.read_text()

old = """            if(op==1) {
                for(unsigned i=0;i<visible;++i)for(unsigned j=i+1;j<visible;++j)
                    if(scores[ids[j]]>scores[ids[i]] || (scores[ids[j]]==scores[ids[i]] && ids[j]<ids[i])) {
                        unsigned t=ids[i];ids[i]=ids[j];ids[j]=t;
                    }
                if(count>k)count=k;
                for(unsigned i=0;i<count;++i)r->selected[r->selected_count++]=(uint8_t)ids[i];
            }"""

new = """            if(op==1) {
                /* B1 optimization: selection sort for top-k only (O(visible*k))
                   instead of full bubble sort (O(visible^2)). Same stable
                   tie-break (equal score -> smaller token id first). */
                unsigned limit = count < k ? count : k;
                for(unsigned i=0;i<limit;++i) {
                    unsigned best=i;
                    for(unsigned j=i+1;j<visible;++j)
                        if(scores[ids[j]]>scores[ids[best]] || (scores[ids[j]]==scores[ids[best]] && ids[j]<ids[best]))
                            best=j;
                    if(best!=i){unsigned t=ids[i];ids[i]=ids[best];ids[best]=t;}
                }
                if(count>k)count=k;
                for(unsigned i=0;i<count;++i)r->selected[r->selected_count++]=(uint8_t)ids[i];
            }"""

if old not in txt:
    print("ERROR: old block not found")
else:
    txt = txt.replace(old, new)
    p.write_text(txt)
    print("OK: P1 sort optimized (bubble -> selection top-k)")
