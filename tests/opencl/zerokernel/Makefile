ROOT_DIR := $(realpath ../../..)
include $(ROOT_DIR)/config.mk

PROJECT := zerokernel

SRC_DIR := $(VORTEX_HOME)/tests/opencl/$(PROJECT)

SRCS := $(SRC_DIR)/main.cc

common.h: $(SRC_DIR)/common.h
	cp $< $@

kernel.cl: $(SRC_DIR)/kernel.cl
	cp $< $@
	
KERNEL_SRCS := kernel.cl common.h

OPTS ?= -n64

include ../common.mk
VX_CFLAGS := $(patsubst -O3,-O0,$(VX_CFLAGS))
CXXFLAGS := $(filter-out -O2, $(CXXFLAGS))
CXXFLAGS += -O0
