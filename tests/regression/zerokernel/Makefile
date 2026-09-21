ROOT_DIR := $(realpath ../../..)
include $(ROOT_DIR)/config.mk

PROJECT := zerokernel

SRC_DIR := $(VORTEX_HOME)/tests/regression/$(PROJECT)

SRCS := $(SRC_DIR)/main.cpp

VX_SRCS := $(SRC_DIR)/kernel.cpp

OPTS ?= -n64

include ../common.mk
VX_CFLAGS := $(patsubst -O3,-O0,$(VX_CFLAGS))
CXXFLAGS := $(filter-out -O2, $(CXXFLAGS))
CXXFLAGS += -O0
