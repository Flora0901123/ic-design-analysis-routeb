VORTEX_BUILD := /root/.cache/routeb-dma-rebuild/platform-build/f9eb27a104966ea3ba5a4e8ac71f9cdaf57f4dc65875e5b9f04286dfe75329d3/vortex-build
include $(VORTEX_BUILD)/config.mk
ROOT_DIR := $(VORTEX_BUILD)
VORTEX_RT_SRC := $(VORTEX_BUILD)/sw/runtime
VORTEX_RT_LIB := $(VORTEX_BUILD)/sw/runtime
VORTEX_KN_PATH := $(CURDIR)/kernel_compat
PROJECT := student_mini
SRCS := $(CURDIR)/student_mini.cu
HIPCC := $(TOOLDIR)/chipstar/bin/cucc
CONFIGS := -DVX_CFG_FPU_TYPE=STD -DVX_CFG_NUM_CORES=1 -DVX_CFG_NUM_WARPS=2 -DVX_CFG_NUM_THREADS=4 -DVX_CFG_FPU_TYPE=STD
HIPCC_FLAGS += -O2 -ffp-contract=off -fno-builtin -fno-builtin-abs -fno-builtin-labs
VX_CFLAGS += -O2 -ffp-contract=off -I$(VORTEX_BUILD)/sw
VX_LDFLAGS += $(CURDIR)/device_compat.o
include $(VORTEX_HOME)/tests/hip/common.mk
device_compat.o: device_compat.cc
	$(RISCV_TOOLCHAIN_PATH)/bin/$(RISCV_PREFIX)-g++ -march=rv32imaf -mabi=ilp32f -O2 -ffreestanding -fno-builtin -fno-exceptions -fno-rtti -c $< -o $@
$(CURDIR)/kernel_compat/libvortex2.a: $(VORTEX_BUILD)/sw/kernel/libvortex2.a device_compat.o
	mkdir -p $(CURDIR)/kernel_compat
	cp $< $@
	$(RISCV_TOOLCHAIN_PATH)/bin/$(RISCV_PREFIX)-gcc-ar rcs $@ device_compat.o
$(PROJECT): device_compat.o
