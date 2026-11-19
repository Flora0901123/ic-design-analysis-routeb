# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vrtlsim_shim.mk

default: /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/rtlsim-optimization/librtlsim.so

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /tmp/routeb-verilator/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?=
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?=

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vrtlsim_shim
# Module prefix (from --prefix)
VM_MODPREFIX = Vrtlsim_shim
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
  -std=c++17 -Wall -Wextra -Wfatal-errors -Wno-array-bounds -fPIC -Wno-maybe-uninitialized -fno-tree-loop-distribute-patterns -I/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/student-mini-v1-cpu-gpu/sources/build/student-mini/native-gpu/a6e2b2f44258a0a7f694d57f18f00ea059d99b7767d103b29dbe9f2b4c5dac17/vortex-build/sw -I/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/student-mini-v1-cpu-gpu/sources/build/student-mini/native-gpu/a6e2b2f44258a0a7f694d57f18f00ea059d99b7767d103b29dbe9f2b4c5dac17/vortex-build/hw -I/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/sim/common -I/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/sw/common -I/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/third_party/softfloat/source/include -I/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/third_party/ramulator/ext/spdlog/include -I/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/third_party/ramulator/ext/yaml-cpp/include -I/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/third_party/ramulator/src -DVX_CFG_XLEN=32 -DVX_CFG_XLEN_32 -DVX_CFG_NUM_CORES=1 -DVX_CFG_NUM_WARPS=2 -DVX_CFG_NUM_THREADS=4 -DVX_CFG_FPU_TYPE=STD -DSIMULATION -DSV_DPI -O2 -DNDEBUG -DPERF_ENABLE \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
  -shared /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/third_party/softfloat/build/Linux-x86_64-GCC/softfloat.a -Wl,-rpath,/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/third_party/ramulator  -L/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/third_party/ramulator -lramulator \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
  dpi_float \
  dpi_util \
  cout_drainer \
  dram_sim \
  elf_loader \
  host_monitor \
  mem \
  processor \
  rvfloats \
  softfloat_ext \
  util \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
  ../../../student-mini-v1-cpu-gpu/sources/build/student-mini/native-gpu/a6e2b2f44258a0a7f694d57f18f00ea059d99b7767d103b29dbe9f2b4c5dac17/vortex-build/sim/rtlsim \
  ../../vortex/hw/dpi \
  ../../vortex/sim/common \
  ../../vortex/sim/rtlsim \
  ../../vortex/sw/common \

### Default rules...
# Include list of all generated classes
include Vrtlsim_shim_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

dpi_float.o: /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/hw/dpi/dpi_float.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
dpi_util.o: /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/hw/dpi/dpi_util.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
cout_drainer.o: /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/sim/common/cout_drainer.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
dram_sim.o: /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/sim/common/dram_sim.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
elf_loader.o: /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/sim/common/elf_loader.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
host_monitor.o: /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/sim/common/host_monitor.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
mem.o: /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/sim/common/mem.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
processor.o: /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/sim/rtlsim/processor.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
rvfloats.o: /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/sw/common/rvfloats.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
softfloat_ext.o: /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/sw/common/softfloat_ext.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
util.o: /mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/vortex/sw/common/util.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<

### Link rules... (from --exe)
/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/9-GPU复现/rtlsim-optimization/librtlsim.so: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@

# Verilated -*- Makefile -*-
