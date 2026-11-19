void pick(int *scores,unsigned visible,unsigned *ids,unsigned *nout){unsigned count=visible;int prefill=1;for(unsigned i=0;i<visible;i++)ids[i]=i;        if(prefill) {
            /* Stable bounded insertion: retain only the best four IDs. */
            for(unsigned i=1;i<visible;++i) {
                unsigned token=ids[i], pos=i<4?i:4;
                while(pos && (scores[token]>scores[ids[pos-1]] ||
                      (scores[token]==scores[ids[pos-1]] && token<ids[pos-1]))) {
                    if(pos<4) ids[pos]=ids[pos-1];
                    --pos;
                }
                if(pos<4) ids[pos]=token;
            }
            if(count>4) count=4;
        }*nout=count;}