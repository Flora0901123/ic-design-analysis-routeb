#include <stdint.h>
static void baseline(unsigned visible,unsigned k,int *scores,unsigned *ids) {
 unsigned count=visible; (void)count; (void)k;

                for(unsigned i=0;i<visible;++i)for(unsigned j=i+1;j<visible;++j)
                    if(scores[ids[j]]>scores[ids[i]] || (scores[ids[j]]==scores[ids[i]] && ids[j]<ids[i])) {
                        unsigned t=ids[i];ids[i]=ids[j];ids[j]=t;
                    }
                
}
static void candidate(unsigned visible,unsigned k,int *scores,unsigned *ids) {
 unsigned count=visible; (void)count; (void)k;

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
                
}

#include <assert.h>
#include <stdio.h>
#include <stdint.h>
static uint64_t patterns, checks;
static unsigned n;
static unsigned perm[8];
static void verify(unsigned mask) {
    int scores[8];
    int rank=0;
    for (unsigned i=0;i<n;i++) {
        if (i && (mask & (1u<<(i-1)))) rank++;
        scores[perm[i]]=rank;
    }
    patterns++;
    for (unsigned k=0;k<=4;k++) {
        unsigned a[8], b[8];
        for (unsigned i=0;i<n;i++) a[i]=b[i]=i;
        baseline(n,k,scores,a);
        candidate(n,k,scores,b);
        for (unsigned i=0;i<n && i<k;i++) assert(a[i]==b[i]);
        checks++;
    }
}
static void visit(unsigned i, unsigned used) {
    if (i==n) {
        for (unsigned mask=0;mask<(1u<<(n?n-1:0));mask++) {
            int canonical=1;
            for (unsigned j=1;j<n;j++)
                if (!(mask & (1u<<(j-1))) && perm[j-1]>perm[j]) {canonical=0;break;}
            if (canonical) verify(mask);
        }
        return;
    }
    for (unsigned j=0;j<n;j++) if (!(used&(1u<<j))) {
        perm[i]=j;
        visit(i+1,used|(1u<<j));
    }
}
int main(void) {
    for (n=0;n<=8;n++) visit(0,0);
    printf("%llu %llu\n",(unsigned long long)patterns,(unsigned long long)checks);
}
