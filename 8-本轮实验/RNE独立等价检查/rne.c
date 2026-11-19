#include <stdint.h>
int64_t baseline_rne(int64_t n, int64_t d) {
    uint64_t a=n<0 ? (uint64_t)(-(n+1))+1u : (uint64_t)n;
    uint64_t q=a/(uint64_t)d, r=a%(uint64_t)d;
    if(r*2u>(uint64_t)d || (r*2u==(uint64_t)d && (q&1u))) ++q;
    return n<0 ? -(int64_t)q : (int64_t)q;
}
int64_t candidate_rne(int64_t n) {
    /* B2: n/32768 RNE via shift+mask, bit-exact with rne_div(n,32768). */
    uint64_t a=n<0 ? (uint64_t)(-(n+1))+1u : (uint64_t)n;
    uint64_t q=a>>15, r=a&0x7fffu;
    if(r>0x4000u || (r==0x4000u && (q&1u))) ++q;
    return n<0 ? -(int64_t)q : (int64_t)q;
}