#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/tirtos_1_20_00_28/packages;C:/ti/tirtos_1_20_00_28/products/bios_6_37_00_20/packages;C:/ti/tirtos_1_20_00_28/products/ipc_3_10_01_11/packages;C:/ti/tirtos_1_20_00_28/products/ndk_2_23_00_00/packages;C:/ti/tirtos_1_20_00_28/products/uia_1_04_00_06/packages;C:/ti/ccsv5/ccs_base
override XDCROOT = C:/ti/xdctools_3_25_04_88
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/tirtos_1_20_00_28/packages;C:/ti/tirtos_1_20_00_28/products/bios_6_37_00_20/packages;C:/ti/tirtos_1_20_00_28/products/ipc_3_10_01_11/packages;C:/ti/tirtos_1_20_00_28/products/ndk_2_23_00_00/packages;C:/ti/tirtos_1_20_00_28/products/uia_1_04_00_06/packages;C:/ti/ccsv5/ccs_base;C:/ti/xdctools_3_25_04_88/packages;..
HOSTOS = Windows
endif
