#AUTOPILOT_ROOT ?= /cad/xilinx/vivado/2015.4/Vivado_HLS/2015.4
#AUTOPILOT_MACH ?= lnx64

#AUTOPILOT_TOOL := ${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools
#AUTOPILOT_TECH := ${AUTOPILOT_ROOT}/common/technology

#HLS_IFLAG += -I ${AUTOPILOT_ROOT}/include
#HLS_IFLAG += -I ${AUTOPILOT_ROOT}/include/ap_sysc
#HLS_IFLAG += -I ${AUTOPILOT_TOOL}/systemc/include
#HLS_IFLAG += -I ${AUTOPILOT_TOOL}/auto_cc/include

HLS_IFLAG += -I ../hls_support

# fetch vivado address instead of the local headers constrained to a specific version
VIVADO_HLS_IPATH=$$(vivado_hls -r)/include
HLS_IFLAG += -I ${VIVADO_HLS_IPATH}

# fall back to absolute path if vivado_hls is not in the path
HLS_IFLAG += -I ../hls_support/xilinx_hls_lib_2015_4

HLS_CXXFLAGS = $(HLS_IFLAG) -DC_TEST
HLS_CXXFLAGS += -Wno-unknown-pragmas -Wno-unused-label -Wno-uninitialized -Wno-literal-suffix -Wno-error=int-in-bool-context -Wno-error=maybe-uninitialized -Wno-bool-compare
