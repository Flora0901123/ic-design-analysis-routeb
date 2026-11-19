#include <cuda_runtime.h>

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/student-mini-v1-cpu-gpu/sources/software/include/numeric_luts.h"

__device__ static const uint16_t *gpu_exp_lut_device;
__device__ static const int16_t *gpu_silu_lut_device;

#ifdef COURSE_PROMOTION_RUNTIME_INLINE
#define COURSE_GPU_FIXED_ATTR __attribute__((always_inline)) inline
#ifdef COURSE_PROMOTION_CANDIDATE_ID
__device__ __attribute__((used)) static volatile const char course_promotion_candidate_identity[] =
    COURSE_PROMOTION_CANDIDATE_ID;
#define COURSE_GPU_CANDIDATE_GUARD() do { \
    if (course_promotion_candidate_identity[0] == '\0') return; \
} while (0)
#endif
#else
#define COURSE_GPU_FIXED_ATTR __attribute__((noinline, optnone))
#define COURSE_GPU_CANDIDATE_GUARD() do { } while (0)
#endif

// chipStar's optimized SPIR-V can materialize these C++ overloads before the
// RV32 archive link. Define them in the device module so O2 never depends on
// an unresolved host/libstdc++ symbol.
__device__ __attribute__((used, always_inline)) inline short abs(short value) {
    return value < 0 ? (short)-value : value;
}
__device__ __attribute__((used, always_inline)) inline int abs(int value) {
    return value < 0 ? -value : value;
}
__device__ __attribute__((used, always_inline)) inline long abs(long value) {
    return value < 0 ? -value : value;
}
__device__ __attribute__((used, noinline, optnone)) long popcount(long value) {
    unsigned long bits = (unsigned long)value;
    bits = bits - ((bits >> 1) & 0x55555555ul);
    bits = (bits & 0x33333333ul) + ((bits >> 2) & 0x33333333ul);
    bits = (bits + (bits >> 4)) & 0x0f0f0f0ful;
    bits += bits >> 8;
    bits += bits >> 16;
    return (long)(bits & 0x3ful);
}

__host__ __device__ static uint32_t gpu_float_bits(float value) {
    union { float f; uint32_t u; } bits = {value};
    return bits.u;
}

// LLVM's SPIR-V optimizer otherwise folds the usual signed-magnitude idiom
// into OpenCL.std s_abs.  The locked chipStar runtime then asks for abs(long)
// and abs(int) from its separate device library before Vortex's final RV32
// link can see our compatibility archive.  Keep just this two-instruction
// boundary opaque; the surrounding promotion primitives remain inlinable.
__host__ __device__ __attribute__((noinline, optnone)) static uint32_t
gpu_signed_magnitude_i32(int32_t value) {
    uint32_t raw = (uint32_t)value;
    uint32_t sign_mask = 0u - (raw >> 31);
    return (raw ^ sign_mask) - sign_mask;
}

__host__ __device__ __attribute__((noinline, optnone)) static uint64_t
gpu_signed_magnitude_i64(int64_t value) {
    uint64_t raw = (uint64_t)value;
    uint64_t sign_mask = UINT64_C(0) - (raw >> 63);
    return (raw ^ sign_mask) - sign_mask;
}

__host__ __device__ COURSE_GPU_FIXED_ATTR static uint64_t gpu_round_even_u64(
    uint64_t numerator, uint64_t denominator
) {
    uint64_t quotient, remainder;
    if (denominator && !(denominator & (denominator - 1u))) {
        unsigned shift = 0;
        for (uint64_t probe = denominator; probe > 1u; probe >>= 1) ++shift;
        quotient = numerator >> shift;
        remainder = numerator & (denominator - 1u);
    } else {
        quotient = numerator / denominator;
        remainder = numerator % denominator;
    }
    uint64_t half = denominator >> 1;
    if (remainder > half || (remainder == half && !(denominator & 1u) &&
                             (quotient & 1u))) ++quotient;
    return quotient;
}

__host__ __device__ COURSE_GPU_FIXED_ATTR static int32_t gpu_round_q11_to_q6(int32_t value) {
    uint32_t magnitude = gpu_signed_magnitude_i32(value);
    uint32_t quotient = magnitude >> 5;
    uint32_t remainder = magnitude & 31u;
    if (remainder > 16u || (remainder == 16u && (quotient & 1u))) ++quotient;
    return value < 0 ? -(int32_t)quotient : (int32_t)quotient;
}

__host__ __device__ uint16_t course_gpu_bf16_rne_bits(float value) {
    uint32_t bits = gpu_float_bits(value);
    uint32_t upper = bits >> 16;
    uint32_t lower = bits & 0xffffu;
    if (lower > 0x8000u || (lower == 0x8000u && (upper & 1u))) ++upper;
    return (uint16_t)upper;
}

__host__ __device__ uint16_t course_gpu_exp_neg_q15(int32_t delta_q5_11) {
    if (delta_q5_11 > 0) delta_q5_11 = 0;
    if (delta_q5_11 < -32768) delta_q5_11 = -32768;
    int32_t index = gpu_round_q11_to_q6(delta_q5_11) + 1024;
#if defined(__HIP_DEVICE_COMPILE__) || defined(__CUDA_ARCH__)
    return gpu_exp_lut_device[index];
#else
    return course_exp_q15_q6_lut[index];
#endif
}

__host__ __device__ int16_t course_gpu_silu_q11(int32_t value_q5_11) {
    if (value_q5_11 > 32767) value_q5_11 = 32767;
    if (value_q5_11 < -32768) value_q5_11 = -32768;
    int32_t index = gpu_round_q11_to_q6(value_q5_11);
    if (index > 1024) index = 1024;
    if (index < -1024) index = -1024;
#if defined(__HIP_DEVICE_COMPILE__) || defined(__CUDA_ARCH__)
    return gpu_silu_lut_device[index + 1024];
#else
    return course_silu_q11_q6_lut[index + 1024];
#endif
}

__host__ __device__ COURSE_GPU_FIXED_ATTR int course_gpu_int32_scale_to_q5_11(
    int32_t value, float scale, int16_t *result
) {
    if (!result) return -1;
    uint32_t bits = gpu_float_bits(scale);
    if ((bits & 0x7f800000u) == 0x7f800000u || !(bits & 0x7fffffffu) ||
        scale < 0x1p-16f || scale > 0x1p16f) return -2;
    int exponent = (int)((bits >> 23) & 0xffu);
    uint64_t significand = UINT64_C(0x800000) | (bits & 0x7fffffu);
    uint64_t magnitude = gpu_signed_magnitude_i64((int64_t)value);
    uint64_t product = magnitude * significand;
    int shift = exponent - 139;
    uint64_t scaled = shift >= 0 ? product << shift
        : gpu_round_even_u64(product, UINT64_C(1) << -shift);
    if (value < 0) *result = scaled >= 32768u ? INT16_MIN : (int16_t)-(int32_t)scaled;
    else *result = scaled >= 32767u ? INT16_MAX : (int16_t)scaled;
    return 0;
}

__host__ __device__ COURSE_GPU_FIXED_ATTR int course_gpu_q22_requantize_int8(
    int64_t value_q22, float scale, int8_t *result
) {
    if (!result) return -1;
    uint32_t bits = gpu_float_bits(scale);
    if ((bits & 0x7f800000u) == 0x7f800000u || !(bits & 0x7fffffffu) ||
        scale < 0x1p-16f || scale > 0x1p16f) return -2;
    if (value_q22 < -INT64_C(140737488355328) ||
        value_q22 > INT64_C(140737488355327)) return -3;
    int exponent = (int)((bits >> 23) & 0xffu);
    uint64_t significand = UINT64_C(0x800000) | (bits & 0x7fffffu);
    uint64_t magnitude = gpu_signed_magnitude_i64(value_q22);
    int shift = 128 - exponent;
    uint64_t numerator;
    if (shift >= 0) {
        if (magnitude > (UINT64_MAX >> shift)) {
            *result = value_q22 < 0 ? INT8_MIN : INT8_MAX;
            return 0;
        }
        numerator = magnitude << shift;
    } else numerator = magnitude >> -shift;
    uint64_t rounded = gpu_round_even_u64(numerator, significand);
    if (value_q22 < 0) *result = rounded >= 128u ? INT8_MIN : (int8_t)-(int32_t)rounded;
    else *result = rounded >= 127u ? INT8_MAX : (int8_t)rounded;
    return 0;
}

#define course_bf16_rne_bits course_gpu_bf16_rne_bits
#define course_exp_neg_q15 course_gpu_exp_neg_q15
#define course_silu_q11 course_gpu_silu_q11
#define course_int32_scale_to_q5_11 course_gpu_int32_scale_to_q5_11
#define course_q22_requantize_int8 course_gpu_q22_requantize_int8

// SPDX-License-Identifier: Apache-2.0
#ifndef STUDENT_MINI_NATIVE_NANO_H
#define STUDENT_MINI_NATIVE_NANO_H
#include <stdint.h>

// Order is explicit; deployment code maps named image segments to these IDs.
enum mini_tensor {
    MINI_EMBEDDING, MINI_LM_HEAD, MINI_FINAL_NORM, MINI_ATTN_NORM, MINI_MOE_NORM,
    MINI_Q_NOPE, MINI_Q_PE, MINI_INDEX_Q, MINI_CKV, MINI_KPE, MINI_INDEX_K,
    MINI_ATTN_OUT, MINI_ROUTER, MINI_GATE, MINI_UP, MINI_DOWN,
    MINI_SHARED_GATE, MINI_SHARED_UP, MINI_SHARED_DOWN, MINI_TENSOR_COUNT
};
typedef struct {
    const int8_t *weight[MINI_TENSOR_COUNT];
    float scale[MINI_TENSOR_COUNT];
} mini_native_model;

// All tensors are complete arrays, never checksums. Hardware backends must
// execute these calls on their named target; NULL callbacks mean scalar C only.
typedef int (*mini_attention_fn)(void *user, unsigned prefill, unsigned rows,
    unsigned length, const int8_t *query, const int8_t *keys,
    const int8_t *index_query, const int8_t *index_keys,
    float score_scale, float index_scale, float value_scale, uint16_t *output);
typedef int (*mini_expert_fn)(void *user, unsigned expert, const int8_t *input,
    float input_scale, const mini_native_model *model, uint16_t *output);
typedef struct {
    void *user;
    mini_attention_fn attention;
    mini_expert_fn expert;
    void (*step_complete)(void *user, unsigned step, uint32_t token);
} mini_native_backend;
typedef struct {
    float cache[32][12], index_cache[32][8];
    float hidden[32][16], normalized[32][16], queries[32][12], index_queries[32][8];
    int8_t ki[32][12], iki[32][8], qi[32][12], iqi[32][8];
    uint16_t attended[32][8];
} mini_native_workspace;
typedef struct {
    unsigned count, p1_calls, p2_calls, p3_calls;
    uint32_t tokens[12];
    uint16_t final_hidden[12][16];
    uint16_t logits[12][256];
    // Caller owns placement. RV32 firmware puts this in SDRAM, not the 8 KiB stack.
    mini_native_workspace workspace;
} mini_native_result;

__device__ int mini_native_scalar_attention(void *, unsigned, unsigned, unsigned,
    const int8_t *, const int8_t *, const int8_t *, const int8_t *,
    float, float, float, uint16_t *);
__device__ int mini_native_scalar_expert(void *, unsigned, const int8_t *, float,
    const mini_native_model *, uint16_t *);
__device__ int mini_native_generate(const mini_native_model *, const uint32_t *, unsigned,
    const mini_native_backend *, mini_native_result *);
#endif

// SPDX-License-Identifier: Apache-2.0
// Native one-layer autoregressive model. No answer/intent/position table.
// Compile without fast-math or FP contraction: binary32 boundaries are the ABI.

__device__ static float bf(uint16_t x) {
    union { uint32_t u; float f; } v = {.u=(uint32_t)x << 16};
    return v.f;
}
__device__ static float rounded(float x) { return bf(course_bf16_rne_bits(x)); }
__device__ static float clamp(float x) { return x < 0x1p-16f ? 0x1p-16f : x > 0x1p16f ? 0x1p16f : x; }
__device__ static int32_t rne_float(float x) {
    int32_t q=(int32_t)x;
    if(x < (float)q) --q;
    float r=x-(float)q;
    return q+(r>0.5f || (r==0.5f && (q&1)));
}
__device__ static int64_t rne_div(int64_t n, int64_t d) {
    uint64_t a=gpu_signed_magnitude_i64(n);
    uint64_t q=a/(uint64_t)d, r=a%(uint64_t)d;
    if(r*2u>(uint64_t)d || (r*2u==(uint64_t)d && (q&1u))) ++q;
    return n<0 ? -(int64_t)q : (int64_t)q;
}
__device__ static float quantize(const float *x, unsigned n, int8_t *out) {
    float peak=0;
    for(unsigned i=0;i<n;++i) { float a=x[i]<0 ? -x[i] : x[i]; if(a>peak) peak=a; }
    float s=peak ? clamp(peak/127.0f) : 1.0f;
    for(unsigned i=0;i<n;++i) {
        int32_t q=rne_float(x[i]/s);
        out[i]=(int8_t)(q < -128 ? -128 : q > 127 ? 127 : q);
    }
    return s;
}
__device__ static void matmul(const mini_native_model *m, unsigned id, const float *x,
                   unsigned in, unsigned out, unsigned transpose, float *y) {
    int8_t a[16];
    float s=quantize(x,in,a)*m->scale[id];
    for(unsigned j=0;j<out;++j) {
        int32_t acc=0;
        for(unsigned k=0;k<in;++k)
            acc+=(int32_t)a[k]*m->weight[id][transpose ? j*in+k : k*out+j];
        y[j]=rounded((float)acc*s);
    }
}
__device__ static void norm(const mini_native_model *m, unsigned id, const float *x, float *y) {
    float sum=0;
    for(unsigned j=0;j<16;++j) sum+=x[j]*x[j];
    float target=sum/16.0f+0.000001f, root=target>1.0f ? target : 1.0f;
    for(unsigned j=0;j<12;++j) root=0.5f*(root+target/root);
    for(unsigned j=0;j<16;++j) y[j]=rounded((x[j]/root)*((float)m->weight[id][j]*m->scale[id]));
}
__device__ static void rope(float *x, unsigned position) {
    for(unsigned pair=0;pair<2;++pair) {
        float a=(float)position*(pair ? 0.01f : 1.0f);
        while(a>3.14159265358979323846f) a-=6.28318530717958647692f;
        float a2=a*a;
        float s=-0.0000000250521084f;
        s=0.0000027557319224f+a2*s; s=-0.0001984126984127f+a2*s;
        s=0.0083333333333333f+a2*s; s=-0.1666666666666667f+a2*s;
        s=a*(1.0f+a2*s);
        float c=0.0000000020876757f;
        c=-0.0000002755731922f+a2*c; c=0.0000248015873016f+a2*c;
        c=-0.0013888888888889f+a2*c; c=0.0416666666666667f+a2*c;
        c=-0.5f+a2*c; c=1.0f+a2*c;
        float even=x[2*pair], odd=x[2*pair+1];
        x[2*pair]=rounded(even*c-odd*s); x[2*pair+1]=rounded(even*s+odd*c);
    }
}

__device__ int mini_native_scalar_attention(void *user, unsigned prefill, unsigned rows,
    unsigned length, const int8_t *query, const int8_t *keys,
    const int8_t *iq, const int8_t *ik, float score_scale, float index_scale,
    float value_scale, uint16_t *output) {
    (void)user;
    if(!rows || rows>length || length>32) return -1;
    for(unsigned row=0;row<rows;++row) {
        unsigned visible=length-rows+row+1, ids[32], count=visible;
        int16_t scores[32];
        for(unsigned t=0;t<visible;++t) {
            ids[t]=t;
            int32_t a=0;
            for(unsigned j=0;j<8;++j) a+=(int32_t)iq[row*8+j]*ik[t*8+j];
            if(course_int32_scale_to_q5_11(a,index_scale,&scores[t])) return -2;
        }
        if(prefill) {
            for(unsigned i=0;i<visible;++i) for(unsigned j=i+1;j<visible;++j)
                if(scores[ids[j]]>scores[ids[i]] || (scores[ids[j]]==scores[ids[i]] && ids[j]<ids[i])) {
                    unsigned tmp=ids[i]; ids[i]=ids[j]; ids[j]=tmp;
                }
            if(count>4) count=4;
        }
        int32_t maximum=0, denominator=0;
        int64_t numerator[8]={0};
        for(unsigned t=0;t<count;++t) {
            int32_t a=0; unsigned token=ids[t]; int16_t score;
            for(unsigned j=0;j<12;++j) a+=(int32_t)query[row*12+j]*keys[token*12+j];
            if(course_int32_scale_to_q5_11(a,score_scale,&score)) return -2;
            if(!t) {
                maximum=score; denominator=32768;
                for(unsigned j=0;j<8;++j) numerator[j]=(int32_t)keys[token*12+j]*32768;
            } else {
                int32_t next=maximum>score ? maximum : score;
                int32_t old=course_exp_neg_q15(maximum-next), added=course_exp_neg_q15(score-next);
                denominator=(int32_t)rne_div((int64_t)denominator*old,32768)+added;
                for(unsigned j=0;j<8;++j) numerator[j]=rne_div(numerator[j]*old,32768)+(int32_t)keys[token*12+j]*added;
                maximum=next;
            }
        }
        for(unsigned j=0;j<8;++j) {
            int32_t q=(int32_t)rne_div(numerator[j]*65536,denominator);
            output[row*8+j]=course_bf16_rne_bits(((float)q/65536.0f)*value_scale);
        }
    }
    return 0;
}

__device__ int mini_native_scalar_expert(void *user, unsigned expert, const int8_t *x,
    float input_scale, const mini_native_model *m, uint16_t *out) {
    (void)user;
    if(expert>2) return -1;
    unsigned gate=expert==2 ? MINI_SHARED_GATE : MINI_GATE;
    unsigned up=expert==2 ? MINI_SHARED_UP : MINI_UP;
    unsigned down=expert==2 ? MINI_SHARED_DOWN : MINI_DOWN;
    unsigned offset=expert==2 ? 0 : expert*256;
    int8_t intermediate[16];
    for(unsigned j=0;j<16;++j) {
        int32_t ga=0, ua=0; int16_t g,u;
        for(unsigned k=0;k<16;++k) {
            ga+=(int32_t)x[k]*m->weight[gate][offset+k*16+j];
            ua+=(int32_t)x[k]*m->weight[up][offset+k*16+j];
        }
        if(course_int32_scale_to_q5_11(ga,input_scale*m->scale[gate],&g) ||
           course_int32_scale_to_q5_11(ua,input_scale*m->scale[up],&u) ||
           course_q22_requantize_int8((int64_t)course_silu_q11(g)*u,0x1p-6f,&intermediate[j])) return -2;
    }
    for(unsigned j=0;j<16;++j) {
        int32_t acc=0;
        for(unsigned k=0;k<16;++k) acc+=(int32_t)intermediate[k]*m->weight[down][offset+k*16+j];
        out[j]=course_bf16_rne_bits((float)acc*(0x1p-6f*m->scale[down]));
    }
    return 0;
}

__device__ int mini_native_generate(const mini_native_model *m, const uint32_t *prompt,
    unsigned prompt_count, const mini_native_backend *backend, mini_native_result *result) {
    if(!m || !prompt || !result || !prompt_count || prompt_count+12>32) return -1;
    for(unsigned i=0;i<MINI_TENSOR_COUNT;++i)
        if(!m->weight[i] || !(m->scale[i]>=0x1p-16f && m->scale[i]<=0x1p16f)) return -1;
    for(unsigned i=0;i<prompt_count;++i) if(prompt[i]>=256) return -1;
    if(backend) return -1; // This device projection has static scalar dispatch only.
    
    
    void *user=0;
    for(unsigned i=0;i<sizeof(*result);++i)((uint8_t *)result)[i]=0;
    float (*cache)[12]=result->workspace.cache, (*index_cache)[8]=result->workspace.index_cache;
    float (*hidden)[16]=result->workspace.hidden, (*normalized)[16]=result->workspace.normalized;
    float (*queries)[12]=result->workspace.queries, (*index_queries)[8]=result->workspace.index_queries;
    int8_t (*ki)[12]=result->workspace.ki, (*iki)[8]=result->workspace.iki;
    int8_t (*qi)[12]=result->workspace.qi, (*iqi)[8]=result->workspace.iqi;
    uint16_t (*attended)[8]=result->workspace.attended;
    unsigned length=0;
    for(unsigned step=0;step<12;++step) {
        unsigned rows=step ? 1 : prompt_count, start=length;
        length+=rows;
        for(unsigned row=0;row<rows;++row) {
            unsigned token=step ? result->tokens[step-1] : prompt[row];
            for(unsigned j=0;j<16;++j) hidden[row][j]=rounded((float)m->weight[MINI_EMBEDDING][token*16+j]*m->scale[MINI_EMBEDDING]);
            norm(m,MINI_ATTN_NORM,hidden[row],normalized[row]);
            matmul(m,MINI_CKV,normalized[row],16,8,0,cache[start+row]);
            matmul(m,MINI_KPE,normalized[row],16,4,0,cache[start+row]+8);
            rope(cache[start+row]+8,start+row);
            matmul(m,MINI_INDEX_K,normalized[row],16,8,0,index_cache[start+row]);
            matmul(m,MINI_Q_NOPE,normalized[row],16,8,0,queries[row]);
            matmul(m,MINI_Q_PE,normalized[row],16,4,0,queries[row]+8);
            rope(queries[row]+8,start+row);
            matmul(m,MINI_INDEX_Q,normalized[row],16,8,0,index_queries[row]);
        }
        float ks=quantize(&cache[0][0],length*12,&ki[0][0]);
        float iks=quantize(&index_cache[0][0],length*8,&iki[0][0]);
        float qs=quantize(&queries[0][0],rows*12,&qi[0][0]);
        float iqs=quantize(&index_queries[0][0],rows*8,&iqi[0][0]);
        float score=clamp((qs*ks)/3.4641016151377544f), index=clamp(iqs*iks);
        if(mini_native_scalar_attention(user,step==0,rows,length,&qi[0][0],&ki[0][0],&iqi[0][0],&iki[0][0],score,index,ks,&attended[0][0])) return -2;
        if(step) ++result->p2_calls; else ++result->p1_calls;
        for(unsigned row=0;row<rows;++row) {
            float value[8], projected[16], router[2]; int8_t activation[16]; uint16_t routed[16], shared[16];
            for(unsigned j=0;j<8;++j) value[j]=bf(attended[row][j]);
            matmul(m,MINI_ATTN_OUT,value,8,16,0,projected);
            for(unsigned j=0;j<16;++j) hidden[row][j]=rounded(hidden[row][j]+projected[j]);
            norm(m,MINI_MOE_NORM,hidden[row],normalized[row]);
            matmul(m,MINI_ROUTER,normalized[row],16,2,0,router);
            unsigned expert=router[1]>router[0] ? 1 : 0;
            float s=quantize(normalized[row],16,activation);
            if(mini_native_scalar_expert(user,expert,activation,s,m,routed) || mini_native_scalar_expert(user,2,activation,s,m,shared)) return -3;
            result->p3_calls+=2;
            for(unsigned j=0;j<16;++j) hidden[row][j]=rounded(hidden[row][j]+(bf(routed[j])+bf(shared[j])));
        }
        float final[16], logits[256];
        norm(m,MINI_FINAL_NORM,hidden[rows-1],final);
        matmul(m,MINI_LM_HEAD,final,16,256,1,logits);
        unsigned best=0;
        for(unsigned j=0;j<16;++j) result->final_hidden[step][j]=course_bf16_rne_bits(final[j]);
        for(unsigned j=0;j<256;++j) {
            result->logits[step][j]=course_bf16_rne_bits(logits[j]);
            if(logits[j]>logits[best]) best=j;
        }
        result->tokens[result->count++]=best;
        
        if(best==4) break;
    }
    return 0;
}

// Generated input-only native Nano ABI. No expected token array.
#ifndef STUDENT_MINI_NATIVE_IMAGE_H
#define STUDENT_MINI_NATIVE_IMAGE_H
#define COURSE_STUDENT_MINI_NATIVE_NANO 1
#define COURSE_NANO_IMAGE_PRESENT 1
#define COURSE_NANO_PREFILL_TOPK 4
#define COURSE_NANO_PAGE_SIZE 4
#define COURSE_NANO_MODEL_LAYERS 1u
#define COURSE_NANO_MODEL_HIDDEN 16u
#define COURSE_NANO_MODEL_HEADS 1u
#define COURSE_NANO_MODEL_KV_LATENT 12u
#define COURSE_NANO_MODEL_EXPERTS 2u
#define COURSE_NANO_MODEL_ACTIVE_EXPERTS 1u
#define COURSE_NANO_MODEL_INTERMEDIATE 16u
#define COURSE_NANO_MODEL_VOCAB 256u
#define COURSE_NANO_MODEL_CONTEXT 32u
#define COURSE_NANO_MODEL_MAX_GENERATED_TOKENS 12u
#define COURSE_NANO_MODEL_D_NOPE 8u
#define COURSE_NANO_MODEL_D_ROPE 4u
#define COURSE_NANO_MODEL_INDEXER_DIM 8u
#define COURSE_NANO_MODEL_VALUE_DIM 8u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_CKV_OFFSET 0u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_CKV_SIZE 128u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_INDEX_K_OFFSET 128u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_INDEX_K_SIZE 128u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_INDEX_Q_OFFSET 256u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_INDEX_Q_SIZE 128u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_KPE_OFFSET 384u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_KPE_SIZE 64u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_NORM_OFFSET 448u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_NORM_SIZE 16u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_OUT_OFFSET 512u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_OUT_SIZE 128u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_Q_NOPE_OFFSET 640u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_Q_NOPE_SIZE 128u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_Q_PE_OFFSET 768u
#define COURSE_NANO_SEGMENT_WEIGHT_ATTENTION_Q_PE_SIZE 64u
#define COURSE_NANO_SEGMENT_WEIGHT_DOWN_OFFSET 832u
#define COURSE_NANO_SEGMENT_WEIGHT_DOWN_SIZE 512u
#define COURSE_NANO_SEGMENT_WEIGHT_EMBEDDING_OFFSET 1344u
#define COURSE_NANO_SEGMENT_WEIGHT_EMBEDDING_SIZE 4096u
#define COURSE_NANO_SEGMENT_WEIGHT_FINAL_NORM_OFFSET 5440u
#define COURSE_NANO_SEGMENT_WEIGHT_FINAL_NORM_SIZE 16u
#define COURSE_NANO_SEGMENT_WEIGHT_GATE_OFFSET 5504u
#define COURSE_NANO_SEGMENT_WEIGHT_GATE_SIZE 512u
#define COURSE_NANO_SEGMENT_WEIGHT_LM_HEAD_OFFSET 6016u
#define COURSE_NANO_SEGMENT_WEIGHT_LM_HEAD_SIZE 4096u
#define COURSE_NANO_SEGMENT_WEIGHT_MOE_NORM_OFFSET 10112u
#define COURSE_NANO_SEGMENT_WEIGHT_MOE_NORM_SIZE 16u
#define COURSE_NANO_SEGMENT_WEIGHT_ROUTER_OFFSET 10176u
#define COURSE_NANO_SEGMENT_WEIGHT_ROUTER_SIZE 32u
#define COURSE_NANO_SEGMENT_WEIGHT_SHARED_DOWN_OFFSET 10240u
#define COURSE_NANO_SEGMENT_WEIGHT_SHARED_DOWN_SIZE 256u
#define COURSE_NANO_SEGMENT_WEIGHT_SHARED_GATE_OFFSET 10496u
#define COURSE_NANO_SEGMENT_WEIGHT_SHARED_GATE_SIZE 256u
#define COURSE_NANO_SEGMENT_WEIGHT_SHARED_UP_OFFSET 10752u
#define COURSE_NANO_SEGMENT_WEIGHT_SHARED_UP_SIZE 256u
#define COURSE_NANO_SEGMENT_WEIGHT_UP_OFFSET 11008u
#define COURSE_NANO_SEGMENT_WEIGHT_UP_SIZE 512u
#define COURSE_NANO_SEGMENT_RTL_P3_LAYER0_WEIGHTS_OFFSET 11520u
#define COURSE_NANO_SEGMENT_RTL_P3_LAYER0_WEIGHTS_SIZE 2304u
#define COURSE_NANO_SEGMENT_SCALES_FP32_OFFSET 13824u
#define COURSE_NANO_SEGMENT_SCALES_FP32_SIZE 76u
#define COURSE_NANO_SEGMENT_TOKENIZER_OFFSETS_U32_OFFSET 13952u
#define COURSE_NANO_SEGMENT_TOKENIZER_OFFSETS_U32_SIZE 1028u
#define COURSE_NANO_SEGMENT_TOKENIZER_BYTES_OFFSET 15040u
#define COURSE_NANO_SEGMENT_TOKENIZER_BYTES_SIZE 314u
#define COURSE_NANO_SEGMENT_USER_UTF8_OFFSET 15360u
#define COURSE_NANO_SEGMENT_USER_UTF8_SIZE 9u
#define COURSE_NANO_SEGMENT_PROMPT_TOKENS_U32_OFFSET 15424u
#define COURSE_NANO_SEGMENT_PROMPT_TOKENS_U32_SIZE 24u
#define COURSE_NANO_SEGMENT_GENERATED_TOKENS_U32_OFFSET 15488u
#define COURSE_NANO_SEGMENT_GENERATED_TOKENS_U32_SIZE 48u
#define COURSE_NANO_SEGMENT_KV_CACHE_BF16_OFFSET 15552u
#define COURSE_NANO_SEGMENT_KV_CACHE_BF16_SIZE 2048u
#define COURSE_NANO_SEGMENT_DESCRIPTORS_OFFSET 17600u
#define COURSE_NANO_SEGMENT_DESCRIPTORS_SIZE 256u
#define COURSE_NANO_SEGMENT_OPERATOR_SCRATCH_OFFSET 17856u
#define COURSE_NANO_SEGMENT_OPERATOR_SCRATCH_SIZE 1048576u
#define COURSE_NANO_SCALE_ATTENTION_CKV_INDEX 0u
#define COURSE_NANO_SCALE_ATTENTION_INDEX_K_INDEX 1u
#define COURSE_NANO_SCALE_ATTENTION_INDEX_Q_INDEX 2u
#define COURSE_NANO_SCALE_ATTENTION_KPE_INDEX 3u
#define COURSE_NANO_SCALE_ATTENTION_NORM_INDEX 4u
#define COURSE_NANO_SCALE_ATTENTION_OUT_INDEX 5u
#define COURSE_NANO_SCALE_ATTENTION_Q_NOPE_INDEX 6u
#define COURSE_NANO_SCALE_ATTENTION_Q_PE_INDEX 7u
#define COURSE_NANO_SCALE_DOWN_INDEX 8u
#define COURSE_NANO_SCALE_EMBEDDING_INDEX 9u
#define COURSE_NANO_SCALE_FINAL_NORM_INDEX 10u
#define COURSE_NANO_SCALE_GATE_INDEX 11u
#define COURSE_NANO_SCALE_LM_HEAD_INDEX 12u
#define COURSE_NANO_SCALE_MOE_NORM_INDEX 13u
#define COURSE_NANO_SCALE_ROUTER_INDEX 14u
#define COURSE_NANO_SCALE_SHARED_DOWN_INDEX 15u
#define COURSE_NANO_SCALE_SHARED_GATE_INDEX 16u
#define COURSE_NANO_SCALE_SHARED_UP_INDEX 17u
#define COURSE_NANO_SCALE_UP_INDEX 18u
#define COURSE_NANO_TOKEN_PAD 0u
#define COURSE_NANO_TOKEN_BOS 1u
#define COURSE_NANO_TOKEN_USER 2u
#define COURSE_NANO_TOKEN_ASSISTANT 3u
#define COURSE_NANO_TOKEN_EOS 4u
#define COURSE_NANO_TOKEN_UNK 5u
#define COURSE_NANO_PROMPT_TOKENS 6u
#endif

#define COURSE_NATIVE_IMAGE_BYTES 1066432
// SPDX-License-Identifier: Apache-2.0
// One real device launch computes the complete autoregressive session.
__global__ void native_nano_kernel(const uint16_t *exp_lut,const int16_t *silu_lut,
    const uint8_t *image,mini_native_result *result,int *status) {
    if(threadIdx.x || blockIdx.x)return;
    gpu_exp_lut_device=exp_lut;gpu_silu_lut_device=silu_lut;
    mini_native_model model;
    const float *scales=(const float *)(image+COURSE_NANO_SEGMENT_SCALES_FP32_OFFSET);
    model.weight[0]=(const int8_t *)(image+1344); model.scale[0]=scales[9];
    model.weight[1]=(const int8_t *)(image+6016); model.scale[1]=scales[12];
    model.weight[2]=(const int8_t *)(image+5440); model.scale[2]=scales[10];
    model.weight[3]=(const int8_t *)(image+448); model.scale[3]=scales[4];
    model.weight[4]=(const int8_t *)(image+10112); model.scale[4]=scales[13];
    model.weight[5]=(const int8_t *)(image+640); model.scale[5]=scales[6];
    model.weight[6]=(const int8_t *)(image+768); model.scale[6]=scales[7];
    model.weight[7]=(const int8_t *)(image+256); model.scale[7]=scales[2];
    model.weight[8]=(const int8_t *)(image+0); model.scale[8]=scales[0];
    model.weight[9]=(const int8_t *)(image+384); model.scale[9]=scales[3];
    model.weight[10]=(const int8_t *)(image+128); model.scale[10]=scales[1];
    model.weight[11]=(const int8_t *)(image+512); model.scale[11]=scales[5];
    model.weight[12]=(const int8_t *)(image+10176); model.scale[12]=scales[14];
    model.weight[13]=(const int8_t *)(image+5504); model.scale[13]=scales[11];
    model.weight[14]=(const int8_t *)(image+11008); model.scale[14]=scales[18];
    model.weight[15]=(const int8_t *)(image+832); model.scale[15]=scales[8];
    model.weight[16]=(const int8_t *)(image+10496); model.scale[16]=scales[16];
    model.weight[17]=(const int8_t *)(image+10752); model.scale[17]=scales[17];
    model.weight[18]=(const int8_t *)(image+10240); model.scale[18]=scales[15];
    *status=mini_native_generate(&model,(const uint32_t *)(image+COURSE_NANO_SEGMENT_PROMPT_TOKENS_U32_OFFSET),COURSE_NANO_PROMPT_TOKENS,nullptr,result);
}
static void native_check(cudaError_t code,const char *where) {
    if(code!=cudaSuccess){fprintf(stderr,"%s: %s\n",where,cudaGetErrorString(code));exit(2);}
}
template<class T> static T *native_copy(const T *source,size_t count) {
    T *device=nullptr;
    native_check(cudaMalloc(&device,count*sizeof(T)),"allocate");
    native_check(cudaMemcpy(device,source,count*sizeof(T),cudaMemcpyHostToDevice),"copy input");
    return device;
}
int main(int argc,char **argv) {
    if(argc!=2)return 2;
    FILE *file=fopen(argv[1],"rb");if(!file)return 2;
    fseek(file,0,SEEK_END);long length=ftell(file);rewind(file);
    if(length!=COURSE_NATIVE_IMAGE_BYTES)return 2;
    auto input=(uint8_t *)malloc(length);
    if(!input || fread(input,1,length,file)!=(size_t)length)return 2;
    fclose(file);
    auto exp=native_copy(course_exp_q15_q6_lut,1025);
    auto silu=native_copy(course_silu_q11_q6_lut,2049);
    auto device_input=native_copy(input,(size_t)length);
    mini_native_result *device_result=nullptr;
    int initial=-99;auto device_status=native_copy(&initial,1);
    native_check(cudaMalloc(&device_result,sizeof(mini_native_result)),"allocate result");
    native_nano_kernel<<<1,1>>>(exp,silu,device_input,device_result,device_status);
    native_check(cudaGetLastError(),"launch");native_check(cudaDeviceSynchronize(),"synchronize");
    auto result=(mini_native_result *)calloc(1,sizeof(mini_native_result));
    native_check(cudaMemcpy(result,device_result,sizeof(*result),cudaMemcpyDeviceToHost),"read result");
    int status=-99;
    native_check(cudaMemcpy(&status,device_status,sizeof(status),cudaMemcpyDeviceToHost),"read status");
    printf("STUDENT_NATIVE_GPU status=%d count=%u\n",status,result->count);
    if(status || !result->count || result->count>12)return 3;
    for(unsigned step=0;step<result->count;++step) {
        printf("STUDENT_NATIVE_TOKEN step=%u token=%u hidden=",step,result->tokens[step]);
        for(unsigned j=0;j<16;++j)printf("%s%04x",j?",":"",result->final_hidden[step][j]);
        printf(" logits=");
        for(unsigned j=0;j<256;++j)printf("%s%04x",j?",":"",result->logits[step][j]);
        printf("\n");
    }
    printf("STUDENT_NATIVE_GPU_COMPLETE count=%u p1=%u p2=%u p3=%u\n",result->count,result->p1_calls,result->p2_calls,result->p3_calls);
    fflush(stdout);
    cudaFree(exp);cudaFree(silu);cudaFree(device_input);cudaFree(device_result);cudaFree(device_status);
    free(input);free(result);
    return 0;
}
