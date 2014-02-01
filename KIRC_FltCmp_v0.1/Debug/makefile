################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv5/tools/compiler/arm_5.1.3

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
"./uartconsole.obj" \
"./sensors.obj" \
"./quaternion.obj" \
"./drivers.obj" \
"./USBCDCD_LoggerIdle.obj" \
"./UARTUtils.obj" \
"./EK_TM4C123GXL.obj" \
"../EK_TM4C123GXL.cmd" \
-l"libc.a" \
-l"C:\ti\tirtos_1_20_00_28/products/TivaWare_C_Series-2.0b/driverlib/ccs/Debug/driverlib.lib" \
-l"C:\ti\tirtos_1_20_00_28/products/TivaWare_C_Series-2.0b/usblib/ccs/Debug/usblib.lib" \

-include ../makefile.init

RM := 
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: KIRC_FltCmp_v0.1.out

# Tool invocations
KIRC_FltCmp_v0.1.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: ARM Linker'
	"" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -g --gcc --define=PART_TM4C123GH6PM --define=ccs --define=TIVAWARE --diag_warning=225 --display_error_number --diag_wrap=off --gen_func_subsections=on -z -m"KIRC_FltCmp_v0.1.map" -i"/lib" -i"/include" --reread_libs --warn_sections --display_error_number --diag_wrap=off --xml_link_info="KIRC_FltCmp_v0.1_linkInfo.xml" --rom_model -o "KIRC_FltCmp_v0.1.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(TMS470_EXECUTABLE_OUTPUTS__QUOTED)$(GEN_MISC_FILES__QUOTED)$(GEN_FILES__QUOTED)$(GEN_OPTS__QUOTED)$(GEN_CMDS__QUOTED) "KIRC_FltCmp_v0.1.out"
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-$(RM) "EK_TM4C123GXL.pp" "UARTUtils.pp" "USBCDCD_LoggerIdle.pp" "drivers.pp" "quaternion.pp" "sensors.pp" "uartconsole.pp" 
	-$(RM) "EK_TM4C123GXL.obj" "UARTUtils.obj" "USBCDCD_LoggerIdle.obj" "drivers.obj" "quaternion.obj" "sensors.obj" "uartconsole.obj" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

