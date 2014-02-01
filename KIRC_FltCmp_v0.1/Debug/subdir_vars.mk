################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CMD_SRCS += \
../EK_TM4C123GXL.cmd 

CFG_SRCS += \
../uartconsole.cfg 

C_SRCS += \
../EK_TM4C123GXL.c \
../Main.c \
../UARTUtils.c \
../USBCDCD_LoggerIdle.c \
../drivers.c \
../quaternion.c \
../sensors.c 

OBJS += \
./EK_TM4C123GXL.obj \
./Main.obj \
./UARTUtils.obj \
./USBCDCD_LoggerIdle.obj \
./drivers.obj \
./quaternion.obj \
./sensors.obj 

C_DEPS += \
./EK_TM4C123GXL.pp \
./Main.pp \
./UARTUtils.pp \
./USBCDCD_LoggerIdle.pp \
./drivers.pp \
./quaternion.pp \
./sensors.pp 

GEN_MISC_DIRS += \
./configPkg/ 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_OPTS += \
./configPkg/compiler.opt 

GEN_FILES += \
./configPkg/linker.cmd \
./configPkg/compiler.opt 

GEN_FILES__QUOTED += \
"configPkg\linker.cmd" \
"configPkg\compiler.opt" 

GEN_MISC_DIRS__QUOTED += \
"configPkg\" 

C_DEPS__QUOTED += \
"EK_TM4C123GXL.pp" \
"Main.pp" \
"UARTUtils.pp" \
"USBCDCD_LoggerIdle.pp" \
"drivers.pp" \
"quaternion.pp" \
"sensors.pp" 

OBJS__QUOTED += \
"EK_TM4C123GXL.obj" \
"Main.obj" \
"UARTUtils.obj" \
"USBCDCD_LoggerIdle.obj" \
"drivers.obj" \
"quaternion.obj" \
"sensors.obj" 

C_SRCS__QUOTED += \
"../EK_TM4C123GXL.c" \
"../Main.c" \
"../UARTUtils.c" \
"../USBCDCD_LoggerIdle.c" \
"../drivers.c" \
"../quaternion.c" \
"../sensors.c" 

GEN_CMDS__FLAG += \
-l"./configPkg/linker.cmd" 

GEN_OPTS__FLAG += \
--cmd_file="./configPkg/compiler.opt" 


