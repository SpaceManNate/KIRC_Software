## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em4f linker.cmd package/cfg/KIRC_FltCmp_RTOS_pem4f.oem4f

linker.cmd: package/cfg/KIRC_FltCmp_RTOS_pem4f.xdl
	$(SED) 's"^\"\(package/cfg/KIRC_FltCmp_RTOS_pem4fcfg.cmd\)\"$""\"C:/Users/Nathaniel/workspace_v5_5/KIRC_Software/KIRC_FltCmp_v0.1/Debug/configPkg/\1\""' package/cfg/KIRC_FltCmp_RTOS_pem4f.xdl > $@
