// SPDX-License-Identifier: Apache-2.0
// Observation only, after kernel completion. No target answer or workload is generated here.
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <dlfcn.h>
#include "VX_types.h"
extern "C" int vx_dev_close(void* device) {
  const char* file=std::getenv("ROUTEB_VX_RUNTIME_LIB");
  void* lib=file?dlopen(file,RTLD_LAZY|RTLD_NOLOAD):nullptr;
  using Close=int(*)(void*);using Query=int(*)(void*,uint32_t,uint32_t,uint32_t,uint64_t*);
  auto close_fn=(Close)(lib?dlsym(lib,"vx_dev_close"):dlsym(RTLD_NEXT,"vx_dev_close"));
  auto query_fn=(Query)(lib?dlsym(lib,"vx_mpm_query"):dlsym(RTLD_NEXT,"vx_mpm_query"));
  if(!close_fn || close_fn==vx_dev_close) {std::fprintf(stderr,"ROUTEB_MPM_ERROR close symbol unavailable\n");return -1;}
  if(query_fn) {
    struct Counter {uint32_t group,csr;const char* name;};
    const Counter fields[]={
      {0,VX_CSR_MCYCLE,"cycles"},{0,VX_CSR_MINSTRET,"instructions"},
      {VX_DCR_MPM_CLASS_DCACHE,VX_CSR_MPM_DCACHE_READS,"dcache_reads"},
      {VX_DCR_MPM_CLASS_DCACHE,VX_CSR_MPM_DCACHE_WRITES,"dcache_writes"},
      {VX_DCR_MPM_CLASS_DCACHE,VX_CSR_MPM_DCACHE_MISS_R,"dcache_read_misses"},
      {VX_DCR_MPM_CLASS_DCACHE,VX_CSR_MPM_DCACHE_MISS_W,"dcache_write_misses"},
      {VX_DCR_MPM_CLASS_MEM,VX_CSR_MPM_MEM_READS,"memory_reads"},
      {VX_DCR_MPM_CLASS_MEM,VX_CSR_MPM_MEM_WRITES,"memory_writes"}
    };
    std::fprintf(stdout,"ROUTEB_MPM_BEGIN\n");
    for(const auto& f:fields) {uint64_t value=0;int code=query_fn(device,f.group,f.csr,0,&value);std::fprintf(stdout,"ROUTEB_MPM group=%u csr=%u name=%s value=%llu code=%d\n",f.group,f.csr,f.name,(unsigned long long)value,code);}
    std::fprintf(stdout,"ROUTEB_MPM_END\n");std::fflush(stdout);
  } else std::fprintf(stderr,"ROUTEB_MPM_ERROR query symbol unavailable\n");
  return close_fn(device);
}
