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
#ifndef STUDENT_MINI_SCALAR_H
#define STUDENT_MINI_SCALAR_H
#include <stdint.h>
// Input-only wire record: 32 little-endian words, then fixed INT8 tensors.
// No golden values or expected status are present in the executable input.
#define STUDENT_MINI_RECORD_BYTES 1936u
typedef struct {
    uint32_t status, count, selected_count;
    uint16_t output[32];
    uint8_t selected[8];
    int32_t primitive;
} student_mini_result;
__device__ void student_mini_execute(const uint8_t *record, student_mini_result *result);
#endif

// SPDX-License-Identifier: Apache-2.0
// Conservative, serial full-vector B0. Host execution is preflight only.

__device__ static uint32_t word(const uint8_t *p, unsigned i) {
    p+=4*i;
    return (uint32_t)p[0]|((uint32_t)p[1]<<8)|((uint32_t)p[2]<<16)|((uint32_t)p[3]<<24);
}
__device__ static float real(const uint8_t *p,unsigned i) {
    union {uint32_t u;float f;} v={.u=word(p,i)};
    return v.f;
}
__device__ static int valid_scale(float f) { return f>=0x1p-16f && f<=0x1p16f; }
__device__ static int64_t rne(int64_t n,int64_t d) {
    uint64_t m=gpu_signed_magnitude_i64(n);
    uint64_t q=m/(uint64_t)d,r=m%(uint64_t)d;
    if (r*2u>(uint64_t)d || (r*2u==(uint64_t)d && (q&1u))) ++q;
    return n<0 ? -(int64_t)q : (int64_t)q;
}
typedef struct {int32_t max,sum;int64_t value[8];unsigned valid;} state;
__device__ static void update(state *s,int32_t score,const int8_t *v) {
    if (!s->valid) {
        s->valid=1;s->max=score;s->sum=32768;
        for(unsigned j=0;j<8;++j)s->value[j]=(int32_t)v[j]*32768;
        return;
    }
    int32_t m=s->max>score?s->max:score;
    int32_t a=course_exp_neg_q15(s->max-m),b=course_exp_neg_q15(score-m);
    s->sum=(int32_t)rne((int64_t)s->sum*a,32768)+b;
    for(unsigned j=0;j<8;++j)s->value[j]=rne(s->value[j]*a,32768)+(int32_t)v[j]*b;
    s->max=m;
}
__device__ static void merge(state *a,const state *b) {
    if(!b->valid)return;
    if(!a->valid){*a=*b;return;}
    int32_t m=a->max>b->max?a->max:b->max;
    int32_t x=course_exp_neg_q15(a->max-m),y=course_exp_neg_q15(b->max-m);
    a->sum=(int32_t)(rne((int64_t)a->sum*x,32768)+rne((int64_t)b->sum*y,32768));
    for(unsigned j=0;j<8;++j)a->value[j]=rne(a->value[j]*x,32768)+rne(b->value[j]*y,32768);
    a->max=m;
}
__device__ static int32_t dot(const int8_t *a,const int8_t *b,unsigned n) {
    int32_t sum=0;
    for(unsigned j=0;j<n;++j)sum+=(int32_t)a[j]*b[j];
    return sum;
}
__device__ void student_mini_execute(const uint8_t *p,student_mini_result *r) {
    for(unsigned zero=0;zero<sizeof(*r);++zero)((uint8_t *)r)[zero]=0;
    unsigned op=word(p,1),rows=word(p,4),n=word(p,5),k=word(p,6),splits=word(p,7);
    const int8_t *x=(const int8_t *)(p+128),*keys=x+32,*v=keys+96,*iq=v+64,*ik=iq+16;
    const int8_t *gate=ik+64,*up=gate+512,*down=up+512;
    if(word(p,0)!=0x31494e4d || op<1 || op>3){r->status=1;return;}
    if(op<3) {
        if(!rows || rows>2 || !n || n>8){r->status=2;return;}
        if((word(p,10)!=1 && word(p,10)!=4) || (op==1 && (!k || k>4)) ||
           (op==2 && splits!=1 && splits!=2 && splits!=4)){r->status=1;return;}
        if(op==2 && splits>n){r->status=2;return;}
        if(!valid_scale(real(p,21)) || !valid_scale(real(p,22))){r->status=4;return;}
    } else {
        if(!rows || rows>2 || word(p,8)!=16 || word(p,9)!=16){r->status=1;return;}
        for(unsigned i=0;i<rows;++i)if(word(p,14+i)>=2){r->status=1;return;}
        for(unsigned i=16;i<=20;++i)if(!valid_scale(real(p,i))){r->status=4;return;}
    }
    // Bus-fault injection belongs to the target adapter, never to this kernel.
    // 6 means unavailable witness, deliberately NOT the golden BUS_ERROR (5).
    if(word(p,12)&1u){
        // Reserved unmapped address is decoded by the external RTL bridge.
        const volatile uint32_t* fault_probe=(const volatile uint32_t*)(uintptr_t)0xe0000000u;
        volatile uint32_t fault_data=*fault_probe;
        (void)fault_data;
        r->status=6;return;
      }
    if(op<3) {
        for(unsigned row=0;row<rows;++row) {
            unsigned visible=word(p,11)?n-rows+row+1:n;
            unsigned ids[8];int32_t scores[8];
            for(unsigned i=0;i<visible;++i){ids[i]=i;scores[i]=dot(iq+row*8,ik+i*8,8);}
            unsigned count=visible;
            if(op==1) {
                for(unsigned i=0;i<visible;++i)for(unsigned j=i+1;j<visible;++j)
                    if(scores[ids[j]]>scores[ids[i]] || (scores[ids[j]]==scores[ids[i]] && ids[j]<ids[i])) {
                        unsigned t=ids[i];ids[i]=ids[j];ids[j]=t;
                    }
                if(count>k)count=k;
                for(unsigned i=0;i<count;++i)r->selected[r->selected_count++]=(uint8_t)ids[i];
            }
            state total={0};
            unsigned chunk=op==1?count:(count+splits-1)/splits;
            for(unsigned start=0;start<count;start+=chunk) {
                state partial={0};
                for(unsigned i=start;i<start+chunk && i<count;++i) {
                    unsigned token=ids[i];int16_t score;
                    course_int32_scale_to_q5_11(dot(x+row*12,keys+token*12,12),real(p,21),&score);
                    update(&partial,score,v+token*8);
                }
                merge(&total,&partial);
            }
            for(unsigned j=0;j<8;++j) {
                int64_t q=rne(total.value[j]*65536,total.sum);
                // Weighted average of INT8 values is in [-128,127]; its Q16
                // quotient fits INT32. Avoid an unavailable RV32 int64->float
                // helper without changing either rounding boundary.
                float scaled=((float)(int32_t)q/65536.0f)*real(p,22);
                r->output[r->count++]=course_bf16_rne_bits(scaled);
            }
        }
    } else {
        for(unsigned row=0;row<rows;++row) {
            unsigned expert=word(p,14+row);int8_t intermediate[16];
            for(unsigned j=0;j<16;++j) {
                int16_t g,u;
                course_int32_scale_to_q5_11(dot(x+row*16,gate+expert*256+j*16,16),real(p,16)*real(p,17),&g);
                course_int32_scale_to_q5_11(dot(x+row*16,up+expert*256+j*16,16),real(p,16)*real(p,18),&u);
                course_q22_requantize_int8((int64_t)course_silu_q11(g)*u,real(p,19),&intermediate[j]);
            }
            float route=real(p,23+row),scale=(real(p,19)*real(p,20))*route;
            for(unsigned j=0;j<16;++j) {
                int32_t acc=dot(intermediate,down+expert*256+j*16,16);
                r->output[r->count++]=route==0.0f?0:course_bf16_rne_bits((float)acc*scale);
            }
        }
    }
    if(word(p,25)==1)r->primitive=(int32_t)rne((int32_t)word(p,26),word(p,27));
    if(word(p,25)==2){int32_t z=(int32_t)word(p,28);r->primitive=z<-128?-128:z>127?127:z;}
}

// SPDX-License-Identifier: Apache-2.0
// Included after the generated device-only mini scalar implementation.
__global__ void student_mini_kernel(const uint16_t *exp_lut,const int16_t *silu_lut,
                                  const uint8_t *input,student_mini_result *output) {
    if(threadIdx.x)return;
    gpu_exp_lut_device=exp_lut;gpu_silu_lut_device=silu_lut;
    student_mini_execute(input+blockIdx.x*STUDENT_MINI_RECORD_BYTES,output+blockIdx.x);
}
static void mini_check(cudaError_t code,const char *where) {
    if(code!=cudaSuccess){fprintf(stderr,"%s: %s\n",where,cudaGetErrorString(code));exit(2);}
}
template<class T> static T *mini_copy(const T *source,size_t count) {
    T *device=nullptr;
    mini_check(cudaMalloc(&device,count*sizeof(T)),"allocate");
    mini_check(cudaMemcpy(device,source,count*sizeof(T),cudaMemcpyHostToDevice),"copy input");
    return device;
}
int main(int argc,char **argv) {
    if(argc<2){fprintf(stderr,"usage: student_mini inputs.bin [start] [count]\n");return 2;}
    FILE *file=fopen(argv[1],"rb");if(!file)return 2;
    fseek(file,0,SEEK_END);long length=ftell(file);rewind(file);
    if(length<=0 || length%STUDENT_MINI_RECORD_BYTES)return 2;
    unsigned total=length/STUDENT_MINI_RECORD_BYTES;
    unsigned start=argc>2?strtoul(argv[2],nullptr,10):0,count=argc>3?strtoul(argv[3],nullptr,10):total;
    if(!count || start>=total || count>total-start)return 2;
    uint8_t *input=(uint8_t *)malloc(count*STUDENT_MINI_RECORD_BYTES);
    fseek(file,start*STUDENT_MINI_RECORD_BYTES,SEEK_SET);
    if(fread(input,STUDENT_MINI_RECORD_BYTES,count,file)!=count)return 2;
    fclose(file);
    auto exp=mini_copy(course_exp_q15_q6_lut,1025);auto silu=mini_copy(course_silu_q11_q6_lut,2049);
    auto device_input=mini_copy(input,count*STUDENT_MINI_RECORD_BYTES);
    student_mini_result *device_output=nullptr;
    mini_check(cudaMalloc(&device_output,count*sizeof(student_mini_result)),"allocate output");
    printf("DMA_BUFFERS input=%llx bytes=%u output=%llx result_size=%zu\n",(unsigned long long)(uintptr_t)device_input,count*STUDENT_MINI_RECORD_BYTES,(unsigned long long)(uintptr_t)device_output,sizeof(student_mini_result));fflush(stdout);
    // One launch per process: the locked command processor's multi-launch
    // issue must not be hidden by replaying results on the host.
    student_mini_kernel<<<count,1>>>(exp,silu,device_input,device_output);
    mini_check(cudaGetLastError(),"launch");mini_check(cudaDeviceSynchronize(),"synchronize");
    auto output=(student_mini_result *)calloc(count,sizeof(student_mini_result));
    mini_check(cudaMemcpy(output,device_output,count*sizeof(student_mini_result),cudaMemcpyDeviceToHost),"copy actual");
    for(unsigned i=0;i<count;++i) {
        const auto &r=output[i];if(r.count>32 || r.selected_count>8)return 3;
        printf("STUDENT_GPU ordinal=%u status=%u primitive=%d bits=",start+i,r.status,r.primitive);
        for(unsigned j=0;j<r.count;++j)printf("%s%04x",j?",":"",r.output[j]);
        printf(" selected=");for(unsigned j=0;j<r.selected_count;++j)printf("%s%u",j?",":"",r.selected[j]);
        printf("\n");
    }
    printf("STUDENT_GPU_COMPLETE start=%u count=%u\n",start,count);fflush(stdout);
    cudaFree(exp);cudaFree(silu);cudaFree(device_input);cudaFree(device_output);free(input);free(output);
    return 0;
}
