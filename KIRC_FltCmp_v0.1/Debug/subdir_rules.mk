################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
EK_TM4C123GXL.obj: ../EK_TM4C123GXL.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="/include" --include_path="C:/ti/tirtos_1_20_00_28/products/TivaWare_C_Series-2.0b" -g --gcc --define=PART_TM4C123GH6PM --define=ccs --define=TIVAWARE --diag_warning=225 --display_error_number --diag_wrap=off --gen_func_subsections=on --preproc_with_compile --preproc_dependency="EK_TM4C123GXL.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

UARTUtils.obj: ../UARTUtils.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="/include" --include_path="C:/ti/tirtos_1_20_00_28/products/TivaWare_C_Series-2.0b" -g --gcc --define=PART_TM4C123GH6PM --define=ccs --define=TIVAWARE --diag_warning=225 --display_error_number --diag_wrap=off --gen_func_subsections=on --preproc_with_compile --preproc_dependency="UARTUtils.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

USBCDCD_LoggerIdle.obj: ../USBCDCD_LoggerIdle.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="/include" --include_path="C:/ti/tirtos_1_20_00_28/products/TivaWare_C_Series-2.0b" -g --gcc --define=PART_TM4C123GH6PM --define=ccs --define=TIVAWARE --diag_warning=225 --display_error_number --diag_wrap=off --gen_func_subsections=on --preproc_with_compile --preproc_dependency="USBCDCD_LoggerIdle.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

drivers.obj: ../drivers.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="/include" --include_path="C:/ti/tirtos_1_20_00_28/products/TivaWare_C_Series-2.0b" -g --gcc --define=PART_TM4C123GH6PM --define=ccs --define=TIVAWARE --diag_warning=225 --display_error_number --diag_wrap=off --gen_func_subsections=on --preproc_with_compile --preproc_dependency="drivers.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

quaternion.obj: ../quaternion.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="/include" --include_path="C:/ti/tirtos_1_20_00_28/products/TivaWare_C_Series-2.0b" -g --gcc --define=PART_TM4C123GH6PM --define=ccs --define=TIVAWARE --diag_warning=225 --display_error_number --diag_wrap=off --gen_func_subsections=on --preproc_with_compile --preproc_dependency="quaternion.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

sensors.obj: ../sensors.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="/include" --include_path="C:/ti/tirtos_1_20_00_28/products/TivaWare_C_Series-2.0b" -g --gcc --define=PART_TM4C123GH6PM --define=ccs --define=TIVAWARE --diag_warning=225 --display_error_number --diag_wrap=off --gen_func_subsections=on --preproc_with_compile --preproc_dependency="sensors.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

uartconsole.obj: ../uartconsole.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="/include" --include_path="C:/ti/tirtos_1_20_00_28/products/TivaWare_C_Series-2.0b" -g --gcc --define=PART_TM4C123GH6PM --define=ccs --define=TIVAWARE --diag_warning=225 --display_error_number --diag_wrap=off --gen_func_subsections=on --preproc_with_compile --preproc_dependency="uartconsole.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/linker.cmd: ../uartconsole.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"/xs" --xdcpath="C:/ti/tirtos_1_20_00_28/packages;C:/ti/tirtos_1_20_00_28/products/bios_6_37_00_20/packages;C:/ti/tirtos_1_20_00_28/products/ipc_3_10_01_11/packages;C:/ti/tirtos_1_20_00_28/products/ndk_2_23_00_00/packages;C:/ti/tirtos_1_20_00_28/products/uia_1_04_00_06/packages;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4F -p ti.platforms.tiva:TM4C123GH6PM -r release -c "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/compiler.opt: | configPkg/linker.cmd
configPkg/: | configPkg/linker.cmd


