TOPLEVEL_LANG = verilog
VERILOG_SOURCES = $(shell pwd)/imu.sv $(shell pwd)/library.sv
TOPLEVEL = imu
MODULE = imu_test
SIM = verilator
EXTRA_ARGS += --trace --trace-structs -Wno-fatal
include $(shell cocotb-config --makefiles)/Makefile.sim
