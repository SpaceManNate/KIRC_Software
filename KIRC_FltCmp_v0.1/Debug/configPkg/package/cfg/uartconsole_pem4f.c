/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-z57
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/catalog/arm/cortexm4/tiva/ce/Boot.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/lm4/Timer.h>
#include <ti/sysbios/family/arm/lm4/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <ti/uia/sysbios/LoggerIdle.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysCallback.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__* __fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_lm4_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Object__ {
    const ti_sysbios_family_arm_lm4_Timer_Fxns__* __fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_lm4_Timer_RunMode runMode;
    ti_sysbios_family_arm_lm4_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_lm4_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_Bool altclk;
} ti_sysbios_family_arm_lm4_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_lm4_Timer_Object__ obj;
} ti_sysbios_family_arm_lm4_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_lm4_Timer___VERS
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__* __fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    xdc_Int intNum;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__* __fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__* __fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__* __fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__* __fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem* pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.EventHdr INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== ti.uia.sysbios.LoggerIdle INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_sysbios_LoggerIdle_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_sysbios_LoggerIdle_Module__;

/* Module__root__V */
extern ti_uia_sysbios_LoggerIdle_Module__ ti_uia_sysbios_LoggerIdle_Module__root__V;

/* Object__ */
typedef struct ti_uia_sysbios_LoggerIdle_Object__ {
    const ti_uia_sysbios_LoggerIdle_Fxns__* __fxns;
} ti_uia_sysbios_LoggerIdle_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_sysbios_LoggerIdle_Object__ obj;
} ti_uia_sysbios_LoggerIdle_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_sysbios_LoggerIdle___VERS
    #define ti_uia_sysbios_LoggerIdle___ParamsPtr xdc_UChar*
#else
    #define ti_uia_sysbios_LoggerIdle___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysCallback INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.uia.sysbios.LoggerIdle INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.SysCallback INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.Timestamp INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* base__ */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x24, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x2f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x30, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* base__ */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x31, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.sysbios.LoggerIdle VTABLE ========
 */

/* Module__FXNS__C */
const ti_uia_sysbios_LoggerIdle_Fxns__ ti_uia_sysbios_LoggerIdle_Module__FXNS__C = {
    (void*)&xdc_runtime_ILogger_Interface__BASE__C, /* base__ */
    &ti_uia_sysbios_LoggerIdle_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_sysbios_LoggerIdle_enable__E,
    ti_uia_sysbios_LoggerIdle_disable__E,
    ti_uia_sysbios_LoggerIdle_write0__E,
    ti_uia_sysbios_LoggerIdle_write1__E,
    ti_uia_sysbios_LoggerIdle_write2__E,
    ti_uia_sysbios_LoggerIdle_write4__E,
    ti_uia_sysbios_LoggerIdle_write8__E,
    {
        ti_uia_sysbios_LoggerIdle_Object__create__S,
        ti_uia_sysbios_LoggerIdle_Object__delete__S,
        ti_uia_sysbios_LoggerIdle_Handle__label__S,
        0x2e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysCallback VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysCallback_Fxns__ xdc_runtime_SysCallback_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* base__ */
    &xdc_runtime_SysCallback_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysCallback_abort__E,
    xdc_runtime_SysCallback_exit__E,
    xdc_runtime_SysCallback_flush__E,
    xdc_runtime_SysCallback_putch__E,
    xdc_runtime_SysCallback_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0xb, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* base__ */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0xd, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    ti_sysbios_BIOS_StartFuncPtr startFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_lm4_Timer_Module_State__;

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6];

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6];

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V;

/* --> ti_sysbios_family_arm_lm4_Timer_enableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_enableTiva(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_disableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_disableTiva(xdc_Int);


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_lm4_Timer_Handle timer;
    volatile xdc_UInt32 hi;
} ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Bits16 enables;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__iser iser;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__priorities priorities;
    xdc_Char* taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_SizeT isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__dispatchTable dispatchTable;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A[216];

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_family_arm_m3_Hwi_priorities__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_priorities ti_sysbios_family_arm_m3_Hwi_priorities__A[216];

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[2048];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_hal_Timer_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    xdc_UInt32 periodCounts;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 skipsWorkFunc;
    xdc_Bool inWorkFunc;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1536];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1536] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1536] __attribute__ ((aligned(8)));
#endif
#endif

/* --> consoleFxn */
extern xdc_Void consoleFxn(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_1_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_1_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[4];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.EventHdr DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== ti.uia.sysbios.LoggerIdle DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_sysbios_LoggerIdle_Module_State__ {
    ti_uia_sysbios_LoggerIdle_LoggerFxn loggerFxn;
    xdc_Bool enabled;
    xdc_Bool empty;
    xdc_UInt idleSequence;
    xdc_UInt bufferSize;
    __TA_ti_uia_sysbios_LoggerIdle_Module_State__idleBuffer idleBuffer;
    __TA_ti_uia_sysbios_LoggerIdle_Module_State__tempBuffer tempBuffer;
    xdc_UInt32* bufferRead;
    xdc_UInt32* bufferWrite;
    xdc_UInt32* bufferPad;
    xdc_UInt32* bufferEnd;
} ti_uia_sysbios_LoggerIdle_Module_State__;

/* --> USBCDCD_LoggerIdle_sendData */
extern xdc_Int USBCDCD_LoggerIdle_sendData(xdc_UChar*,xdc_Int);

/* --> ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A */
__T1_ti_uia_sysbios_LoggerIdle_Module_State__idleBuffer ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A[1024];

/* --> ti_uia_sysbios_LoggerIdle_Module_State_0_tempBuffer__A */
__T1_ti_uia_sysbios_LoggerIdle_Module_State__tempBuffer ti_uia_sysbios_LoggerIdle_Module_State_0_tempBuffer__A[16];

/* Module__state__V */
ti_uia_sysbios_LoggerIdle_Module_State__ ti_uia_sysbios_LoggerIdle_Module__state__V;

/* --> USBCDCD_LoggerIdle_sendData */
extern xdc_Int USBCDCD_LoggerIdle_sendData(xdc_UChar*,xdc_Int);


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc* listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int* stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[2];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[9];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[9];


/*
 * ======== xdc.runtime.SysCallback DECLARATIONS ========
 */

/* --> UARTUtils_systemAbort */
extern xdc_Void UARTUtils_systemAbort(xdc_CString);

/* --> xdc_runtime_SysCallback_defaultExit */
extern xdc_Void xdc_runtime_SysCallback_defaultExit(xdc_Int);

/* --> xdc_runtime_SysCallback_defaultFlush */
extern xdc_Void xdc_runtime_SysCallback_defaultFlush(xdc_Void);

/* --> UARTUtils_systemPutch */
extern xdc_Void UARTUtils_systemPutch(xdc_Char);

/* --> UARTUtils_systemReady */
extern xdc_Bool UARTUtils_systemReady(xdc_Void);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
    xdc_Int exitStatus;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5898];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[4];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/Users/asusHD/workspace_v5_5/KIRC_Software/KIRC_FltCmp_v0.1/Debug/configPkg/package/cfg/uartconsole_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.tiva");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== ti.platforms.tiva.Platform TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[9];
    xdc_runtime_Startup_startModsFxn__C(state, 9);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, CString *pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    CString fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    if (c == 'f') {
        Double d, tmp;
        ULong  fract;
        Int    negative;

        if (parse->aFlag) {
            xdc_runtime_Assert_isTrue((sizeof(Float) <= sizeof(IArg)), 
                xdc_runtime_System_A_cannotFitIntoArg);

            d = argToFloat(va_arg(va, IArg));
        }
        else {
            d = va_arg(va, double);
        }

        if (d < 0.0) {
            d = -d;
            negative = TRUE;
            parse->zpad--;
        }
        else {
            negative = FALSE;
        }

        /*
         * output (error) if we can't print correct value
         */
        if (d > (double) LONG_MAX) {
            parse->ptr = "(error)";
            parse->len = 7;                /* strlen("(error)"); */
            goto end;
        }

        /* Assumes four digits after decimal point. We are using a temporary
         * double variable to force double-precision computations without 
         * using --fp_mode=strict flag. See the description of that flag in
         * the compiler's doc for a further explanation.
         */
        tmp = (d - (Long)d) * 1e4;
        fract = (ULong)tmp;

        parse->ptr = xdc_runtime_System_formatNum__I(parse->end, fract, 4, 10);
        *(--parse->ptr) = '.';

#if 0
        /* eliminate trailing zeros */
        do {
        } while (*(--parse->end) == '0');
        ++parse->end;
#endif
        parse->len = parse->end - parse->ptr;
        /* format integer part (right to left!) */
        parse->ptr = xdc_runtime_System_formatNum__I(parse->ptr,
            (Long)d, parse->zpad - parse->len, 10);
        if (negative) {
            *(--parse->ptr) = '-';
        }

        parse->len = parse->end - parse->ptr;
        found = TRUE;
    }

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[3];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot TEMPLATE ========
 */

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_arm_cortexm4_tiva_ce_Boot_init ========
 */
Void ti_catalog_arm_cortexm4_tiva_ce_Boot_init()
{
    ti_catalog_arm_cortexm4_tiva_ce_Boot_sysCtlClockSet((ULong)
        (-1056963264));
}


/*
 * ======== ti.sysbios.hal.Hwi TEMPLATE ========
 */

#ifdef __ti__
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_disable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_enable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_restore__E);
#endif

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Clock_workFunc__E(0, 0);

    }
}

/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_exitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_exitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_hal_Timer_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_exitFunc__I(Int notused)
{
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
#endif
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */





/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 15 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 16 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 17 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 18 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 19 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 20 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 21 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 22 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 23 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 24 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 25 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 26 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 27 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 28 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 29 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 30 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 31 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 32 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 33 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 34 */
    (UInt32)(ti_sysbios_family_arm_m3_Hwi_dispatch__I),  /* intNum = 35 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 36 */
    (UInt32)(ti_sysbios_family_arm_m3_Hwi_dispatch__I),  /* intNum = 37 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 38 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 39 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 40 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 41 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 42 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 43 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 44 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 45 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 46 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 47 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 48 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 49 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 50 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 51 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 52 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 53 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 54 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 55 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 56 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 57 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 58 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 59 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 60 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 61 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 62 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 63 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 64 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 65 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 66 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 67 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 68 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 69 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 70 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 71 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 72 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 73 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 74 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 75 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 76 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 77 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 78 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 79 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 80 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 81 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 82 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 83 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 84 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 85 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 86 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 87 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 88 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 89 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 90 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 91 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 92 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 93 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 94 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 95 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 96 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 97 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 98 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 99 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 100 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 101 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 102 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 103 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 104 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 105 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 106 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 107 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 108 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 109 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 110 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 111 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 112 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 113 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 114 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 115 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 116 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 117 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 118 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 119 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 120 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 121 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 122 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 123 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 124 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 125 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 126 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 127 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 128 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 129 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 130 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 131 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 132 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 133 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 134 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 135 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 136 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 137 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 138 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 139 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 140 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 141 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 142 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 143 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 144 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 145 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 146 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 147 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 148 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 149 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 150 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 151 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 152 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 153 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 154 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 155 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 156 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 157 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 158 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 159 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 160 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 161 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 162 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 163 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 164 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 165 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 166 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 167 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 168 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 169 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 170 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 171 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 172 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 173 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 174 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 175 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 176 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 177 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 178 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 179 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 180 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 181 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 182 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 183 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 184 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 185 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 186 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 187 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 188 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 189 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 190 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 191 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 192 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 193 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 194 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 195 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 196 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 197 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 198 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 199 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 200 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 201 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 202 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 203 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 204 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 205 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 206 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 207 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 208 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 209 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 210 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 211 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 212 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 213 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 214 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 215 */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[216];


/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C = (xdc_Bits16)0x13;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C = 0;

/* A_mustUseEnhancedClockMode__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_mustNotUseEnhancedClockMode__C */
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)474) << 16 | 16);


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x4c4b400,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x21;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x4c4b400,  /* lo */
};

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 0;

/* clockEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x800;

/* heapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* useSK__C */
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_lm4_Timer_Params ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_lm4_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    (xdc_UInt)0xffffffff,  /* prevThreshold */
    0,  /* altclk */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffffffff,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        0,  /* altclk */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x320,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        0,  /* altclk */
    },
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6] = {
    {
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_Ptr)(0x40030000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_Ptr)(0x40031000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x27,  /* intNum */
        ((xdc_Ptr)(0x40032000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x33,  /* intNum */
        ((xdc_Ptr)(0x40033000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0x56,  /* intNum */
        ((xdc_Ptr)(0x40034000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x6c,  /* intNum */
        ((xdc_Ptr)(0x40035000)),  /* baseAddr */
    },  /* [5] */
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6] = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* [0] */
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
};

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V = {
    (xdc_UInt)0x3c,  /* availMask */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__id ti_sysbios_family_arm_lm4_Timer_Module__id__C = (xdc_Bits16)0x27;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__count ti_sysbios_family_arm_lm4_Timer_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__heap ti_sysbios_family_arm_lm4_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__sizeof ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_lm4_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__table ti_sysbios_family_arm_lm4_Timer_Object__table__C = ti_sysbios_family_arm_lm4_Timer_Object__table__V;

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_invalidTimer ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4491) << 16 | 0);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_notAvailable ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4527) << 16 | 0);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_cannotSupport ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4566) << 16 | 0);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_anyMask ti_sysbios_family_arm_lm4_Timer_anyMask__C = (xdc_UInt)0x3f;

/* enableFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc ti_sysbios_family_arm_lm4_Timer_enableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_enableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTiva));

/* disableFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc ti_sysbios_family_arm_lm4_Timer_disableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_disableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_disableTiva));

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_startupNeeded ti_sysbios_family_arm_lm4_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_numTimerDevices ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C = (xdc_Int)0x6;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* timer */
    (xdc_UInt32)0x0,  /* hi */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__id ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C = (xdc_Bits16)0x26;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__count ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__table ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C = 0;

/* useClockTimer__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C = 0;

/* timerId__C */
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_timerId ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C = (xdc_UInt)(-0x0 - 1);


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        (xdc_Int)0x23,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        (xdc_Int)0x25,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A[216] = {
    0,  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
    0,  /* [13] */
    0,  /* [14] */
    0,  /* [15] */
    0,  /* [16] */
    0,  /* [17] */
    0,  /* [18] */
    0,  /* [19] */
    0,  /* [20] */
    0,  /* [21] */
    0,  /* [22] */
    0,  /* [23] */
    0,  /* [24] */
    0,  /* [25] */
    0,  /* [26] */
    0,  /* [27] */
    0,  /* [28] */
    0,  /* [29] */
    0,  /* [30] */
    0,  /* [31] */
    0,  /* [32] */
    0,  /* [33] */
    0,  /* [34] */
    (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* [35] */
    0,  /* [36] */
    (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* [37] */
    0,  /* [38] */
    0,  /* [39] */
    0,  /* [40] */
    0,  /* [41] */
    0,  /* [42] */
    0,  /* [43] */
    0,  /* [44] */
    0,  /* [45] */
    0,  /* [46] */
    0,  /* [47] */
    0,  /* [48] */
    0,  /* [49] */
    0,  /* [50] */
    0,  /* [51] */
    0,  /* [52] */
    0,  /* [53] */
    0,  /* [54] */
    0,  /* [55] */
    0,  /* [56] */
    0,  /* [57] */
    0,  /* [58] */
    0,  /* [59] */
    0,  /* [60] */
    0,  /* [61] */
    0,  /* [62] */
    0,  /* [63] */
    0,  /* [64] */
    0,  /* [65] */
    0,  /* [66] */
    0,  /* [67] */
    0,  /* [68] */
    0,  /* [69] */
    0,  /* [70] */
    0,  /* [71] */
    0,  /* [72] */
    0,  /* [73] */
    0,  /* [74] */
    0,  /* [75] */
    0,  /* [76] */
    0,  /* [77] */
    0,  /* [78] */
    0,  /* [79] */
    0,  /* [80] */
    0,  /* [81] */
    0,  /* [82] */
    0,  /* [83] */
    0,  /* [84] */
    0,  /* [85] */
    0,  /* [86] */
    0,  /* [87] */
    0,  /* [88] */
    0,  /* [89] */
    0,  /* [90] */
    0,  /* [91] */
    0,  /* [92] */
    0,  /* [93] */
    0,  /* [94] */
    0,  /* [95] */
    0,  /* [96] */
    0,  /* [97] */
    0,  /* [98] */
    0,  /* [99] */
    0,  /* [100] */
    0,  /* [101] */
    0,  /* [102] */
    0,  /* [103] */
    0,  /* [104] */
    0,  /* [105] */
    0,  /* [106] */
    0,  /* [107] */
    0,  /* [108] */
    0,  /* [109] */
    0,  /* [110] */
    0,  /* [111] */
    0,  /* [112] */
    0,  /* [113] */
    0,  /* [114] */
    0,  /* [115] */
    0,  /* [116] */
    0,  /* [117] */
    0,  /* [118] */
    0,  /* [119] */
    0,  /* [120] */
    0,  /* [121] */
    0,  /* [122] */
    0,  /* [123] */
    0,  /* [124] */
    0,  /* [125] */
    0,  /* [126] */
    0,  /* [127] */
    0,  /* [128] */
    0,  /* [129] */
    0,  /* [130] */
    0,  /* [131] */
    0,  /* [132] */
    0,  /* [133] */
    0,  /* [134] */
    0,  /* [135] */
    0,  /* [136] */
    0,  /* [137] */
    0,  /* [138] */
    0,  /* [139] */
    0,  /* [140] */
    0,  /* [141] */
    0,  /* [142] */
    0,  /* [143] */
    0,  /* [144] */
    0,  /* [145] */
    0,  /* [146] */
    0,  /* [147] */
    0,  /* [148] */
    0,  /* [149] */
    0,  /* [150] */
    0,  /* [151] */
    0,  /* [152] */
    0,  /* [153] */
    0,  /* [154] */
    0,  /* [155] */
    0,  /* [156] */
    0,  /* [157] */
    0,  /* [158] */
    0,  /* [159] */
    0,  /* [160] */
    0,  /* [161] */
    0,  /* [162] */
    0,  /* [163] */
    0,  /* [164] */
    0,  /* [165] */
    0,  /* [166] */
    0,  /* [167] */
    0,  /* [168] */
    0,  /* [169] */
    0,  /* [170] */
    0,  /* [171] */
    0,  /* [172] */
    0,  /* [173] */
    0,  /* [174] */
    0,  /* [175] */
    0,  /* [176] */
    0,  /* [177] */
    0,  /* [178] */
    0,  /* [179] */
    0,  /* [180] */
    0,  /* [181] */
    0,  /* [182] */
    0,  /* [183] */
    0,  /* [184] */
    0,  /* [185] */
    0,  /* [186] */
    0,  /* [187] */
    0,  /* [188] */
    0,  /* [189] */
    0,  /* [190] */
    0,  /* [191] */
    0,  /* [192] */
    0,  /* [193] */
    0,  /* [194] */
    0,  /* [195] */
    0,  /* [196] */
    0,  /* [197] */
    0,  /* [198] */
    0,  /* [199] */
    0,  /* [200] */
    0,  /* [201] */
    0,  /* [202] */
    0,  /* [203] */
    0,  /* [204] */
    0,  /* [205] */
    0,  /* [206] */
    0,  /* [207] */
    0,  /* [208] */
    0,  /* [209] */
    0,  /* [210] */
    0,  /* [211] */
    0,  /* [212] */
    0,  /* [213] */
    0,  /* [214] */
    0,  /* [215] */
};

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    (xdc_Bits16)0x0,  /* enables */
    {
        (xdc_Bits32)0x280000,  /* [0] */
        (xdc_Bits32)0x0,  /* [1] */
        (xdc_Bits32)0x0,  /* [2] */
        (xdc_Bits32)0x0,  /* [3] */
        (xdc_Bits32)0x0,  /* [4] */
        (xdc_Bits32)0x0,  /* [5] */
        (xdc_Bits32)0x0,  /* [6] */
        (xdc_Bits32)0x0,  /* [7] */
    },  /* iser */
    ((void*)0),  /* priorities */
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    (xdc_SizeT)0x300,  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    0,  /* vnvicFlushRequired */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_dispatchTable__A),  /* dispatchTable */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_priorities__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_priorities ti_sysbios_family_arm_m3_Hwi_priorities__A[216] = {
    (xdc_UInt8)0x0,  /* [0] */
    (xdc_UInt8)0x0,  /* [1] */
    (xdc_UInt8)0x0,  /* [2] */
    (xdc_UInt8)0x0,  /* [3] */
    (xdc_UInt8)0x0,  /* [4] */
    (xdc_UInt8)0x0,  /* [5] */
    (xdc_UInt8)0x0,  /* [6] */
    (xdc_UInt8)0x0,  /* [7] */
    (xdc_UInt8)0x0,  /* [8] */
    (xdc_UInt8)0x0,  /* [9] */
    (xdc_UInt8)0x0,  /* [10] */
    (xdc_UInt8)0x0,  /* [11] */
    (xdc_UInt8)0x0,  /* [12] */
    (xdc_UInt8)0x0,  /* [13] */
    (xdc_UInt8)0x0,  /* [14] */
    (xdc_UInt8)0xff,  /* [15] */
    (xdc_UInt8)0xff,  /* [16] */
    (xdc_UInt8)0xff,  /* [17] */
    (xdc_UInt8)0xff,  /* [18] */
    (xdc_UInt8)0xff,  /* [19] */
    (xdc_UInt8)0xff,  /* [20] */
    (xdc_UInt8)0xff,  /* [21] */
    (xdc_UInt8)0xff,  /* [22] */
    (xdc_UInt8)0xff,  /* [23] */
    (xdc_UInt8)0xff,  /* [24] */
    (xdc_UInt8)0xff,  /* [25] */
    (xdc_UInt8)0xff,  /* [26] */
    (xdc_UInt8)0xff,  /* [27] */
    (xdc_UInt8)0xff,  /* [28] */
    (xdc_UInt8)0xff,  /* [29] */
    (xdc_UInt8)0xff,  /* [30] */
    (xdc_UInt8)0xff,  /* [31] */
    (xdc_UInt8)0xff,  /* [32] */
    (xdc_UInt8)0xff,  /* [33] */
    (xdc_UInt8)0xff,  /* [34] */
    (xdc_UInt8)0xff,  /* [35] */
    (xdc_UInt8)0xff,  /* [36] */
    (xdc_UInt8)0xff,  /* [37] */
    (xdc_UInt8)0xff,  /* [38] */
    (xdc_UInt8)0xff,  /* [39] */
    (xdc_UInt8)0xff,  /* [40] */
    (xdc_UInt8)0xff,  /* [41] */
    (xdc_UInt8)0xff,  /* [42] */
    (xdc_UInt8)0xff,  /* [43] */
    (xdc_UInt8)0xff,  /* [44] */
    (xdc_UInt8)0xff,  /* [45] */
    (xdc_UInt8)0xff,  /* [46] */
    (xdc_UInt8)0xff,  /* [47] */
    (xdc_UInt8)0xff,  /* [48] */
    (xdc_UInt8)0xff,  /* [49] */
    (xdc_UInt8)0xff,  /* [50] */
    (xdc_UInt8)0xff,  /* [51] */
    (xdc_UInt8)0xff,  /* [52] */
    (xdc_UInt8)0xff,  /* [53] */
    (xdc_UInt8)0xff,  /* [54] */
    (xdc_UInt8)0xff,  /* [55] */
    (xdc_UInt8)0xff,  /* [56] */
    (xdc_UInt8)0xff,  /* [57] */
    (xdc_UInt8)0xff,  /* [58] */
    (xdc_UInt8)0xff,  /* [59] */
    (xdc_UInt8)0xff,  /* [60] */
    (xdc_UInt8)0xff,  /* [61] */
    (xdc_UInt8)0xff,  /* [62] */
    (xdc_UInt8)0xff,  /* [63] */
    (xdc_UInt8)0xff,  /* [64] */
    (xdc_UInt8)0xff,  /* [65] */
    (xdc_UInt8)0xff,  /* [66] */
    (xdc_UInt8)0xff,  /* [67] */
    (xdc_UInt8)0xff,  /* [68] */
    (xdc_UInt8)0xff,  /* [69] */
    (xdc_UInt8)0xff,  /* [70] */
    (xdc_UInt8)0xff,  /* [71] */
    (xdc_UInt8)0xff,  /* [72] */
    (xdc_UInt8)0xff,  /* [73] */
    (xdc_UInt8)0xff,  /* [74] */
    (xdc_UInt8)0xff,  /* [75] */
    (xdc_UInt8)0xff,  /* [76] */
    (xdc_UInt8)0xff,  /* [77] */
    (xdc_UInt8)0xff,  /* [78] */
    (xdc_UInt8)0xff,  /* [79] */
    (xdc_UInt8)0xff,  /* [80] */
    (xdc_UInt8)0xff,  /* [81] */
    (xdc_UInt8)0xff,  /* [82] */
    (xdc_UInt8)0xff,  /* [83] */
    (xdc_UInt8)0xff,  /* [84] */
    (xdc_UInt8)0xff,  /* [85] */
    (xdc_UInt8)0xff,  /* [86] */
    (xdc_UInt8)0xff,  /* [87] */
    (xdc_UInt8)0xff,  /* [88] */
    (xdc_UInt8)0xff,  /* [89] */
    (xdc_UInt8)0xff,  /* [90] */
    (xdc_UInt8)0xff,  /* [91] */
    (xdc_UInt8)0xff,  /* [92] */
    (xdc_UInt8)0xff,  /* [93] */
    (xdc_UInt8)0xff,  /* [94] */
    (xdc_UInt8)0xff,  /* [95] */
    (xdc_UInt8)0xff,  /* [96] */
    (xdc_UInt8)0xff,  /* [97] */
    (xdc_UInt8)0xff,  /* [98] */
    (xdc_UInt8)0xff,  /* [99] */
    (xdc_UInt8)0xff,  /* [100] */
    (xdc_UInt8)0xff,  /* [101] */
    (xdc_UInt8)0xff,  /* [102] */
    (xdc_UInt8)0xff,  /* [103] */
    (xdc_UInt8)0xff,  /* [104] */
    (xdc_UInt8)0xff,  /* [105] */
    (xdc_UInt8)0xff,  /* [106] */
    (xdc_UInt8)0xff,  /* [107] */
    (xdc_UInt8)0xff,  /* [108] */
    (xdc_UInt8)0xff,  /* [109] */
    (xdc_UInt8)0xff,  /* [110] */
    (xdc_UInt8)0xff,  /* [111] */
    (xdc_UInt8)0xff,  /* [112] */
    (xdc_UInt8)0xff,  /* [113] */
    (xdc_UInt8)0xff,  /* [114] */
    (xdc_UInt8)0xff,  /* [115] */
    (xdc_UInt8)0xff,  /* [116] */
    (xdc_UInt8)0xff,  /* [117] */
    (xdc_UInt8)0xff,  /* [118] */
    (xdc_UInt8)0xff,  /* [119] */
    (xdc_UInt8)0xff,  /* [120] */
    (xdc_UInt8)0xff,  /* [121] */
    (xdc_UInt8)0xff,  /* [122] */
    (xdc_UInt8)0xff,  /* [123] */
    (xdc_UInt8)0xff,  /* [124] */
    (xdc_UInt8)0xff,  /* [125] */
    (xdc_UInt8)0xff,  /* [126] */
    (xdc_UInt8)0xff,  /* [127] */
    (xdc_UInt8)0xff,  /* [128] */
    (xdc_UInt8)0xff,  /* [129] */
    (xdc_UInt8)0xff,  /* [130] */
    (xdc_UInt8)0xff,  /* [131] */
    (xdc_UInt8)0xff,  /* [132] */
    (xdc_UInt8)0xff,  /* [133] */
    (xdc_UInt8)0xff,  /* [134] */
    (xdc_UInt8)0xff,  /* [135] */
    (xdc_UInt8)0xff,  /* [136] */
    (xdc_UInt8)0xff,  /* [137] */
    (xdc_UInt8)0xff,  /* [138] */
    (xdc_UInt8)0xff,  /* [139] */
    (xdc_UInt8)0xff,  /* [140] */
    (xdc_UInt8)0xff,  /* [141] */
    (xdc_UInt8)0xff,  /* [142] */
    (xdc_UInt8)0xff,  /* [143] */
    (xdc_UInt8)0xff,  /* [144] */
    (xdc_UInt8)0xff,  /* [145] */
    (xdc_UInt8)0xff,  /* [146] */
    (xdc_UInt8)0xff,  /* [147] */
    (xdc_UInt8)0xff,  /* [148] */
    (xdc_UInt8)0xff,  /* [149] */
    (xdc_UInt8)0xff,  /* [150] */
    (xdc_UInt8)0xff,  /* [151] */
    (xdc_UInt8)0xff,  /* [152] */
    (xdc_UInt8)0xff,  /* [153] */
    (xdc_UInt8)0xff,  /* [154] */
    (xdc_UInt8)0xff,  /* [155] */
    (xdc_UInt8)0xff,  /* [156] */
    (xdc_UInt8)0xff,  /* [157] */
    (xdc_UInt8)0xff,  /* [158] */
    (xdc_UInt8)0xff,  /* [159] */
    (xdc_UInt8)0xff,  /* [160] */
    (xdc_UInt8)0xff,  /* [161] */
    (xdc_UInt8)0xff,  /* [162] */
    (xdc_UInt8)0xff,  /* [163] */
    (xdc_UInt8)0xff,  /* [164] */
    (xdc_UInt8)0xff,  /* [165] */
    (xdc_UInt8)0xff,  /* [166] */
    (xdc_UInt8)0xff,  /* [167] */
    (xdc_UInt8)0xff,  /* [168] */
    (xdc_UInt8)0xff,  /* [169] */
    (xdc_UInt8)0xff,  /* [170] */
    (xdc_UInt8)0xff,  /* [171] */
    (xdc_UInt8)0xff,  /* [172] */
    (xdc_UInt8)0xff,  /* [173] */
    (xdc_UInt8)0xff,  /* [174] */
    (xdc_UInt8)0xff,  /* [175] */
    (xdc_UInt8)0xff,  /* [176] */
    (xdc_UInt8)0xff,  /* [177] */
    (xdc_UInt8)0xff,  /* [178] */
    (xdc_UInt8)0xff,  /* [179] */
    (xdc_UInt8)0xff,  /* [180] */
    (xdc_UInt8)0xff,  /* [181] */
    (xdc_UInt8)0xff,  /* [182] */
    (xdc_UInt8)0xff,  /* [183] */
    (xdc_UInt8)0xff,  /* [184] */
    (xdc_UInt8)0xff,  /* [185] */
    (xdc_UInt8)0xff,  /* [186] */
    (xdc_UInt8)0xff,  /* [187] */
    (xdc_UInt8)0xff,  /* [188] */
    (xdc_UInt8)0xff,  /* [189] */
    (xdc_UInt8)0xff,  /* [190] */
    (xdc_UInt8)0xff,  /* [191] */
    (xdc_UInt8)0xff,  /* [192] */
    (xdc_UInt8)0xff,  /* [193] */
    (xdc_UInt8)0xff,  /* [194] */
    (xdc_UInt8)0xff,  /* [195] */
    (xdc_UInt8)0xff,  /* [196] */
    (xdc_UInt8)0xff,  /* [197] */
    (xdc_UInt8)0xff,  /* [198] */
    (xdc_UInt8)0xff,  /* [199] */
    (xdc_UInt8)0xff,  /* [200] */
    (xdc_UInt8)0xff,  /* [201] */
    (xdc_UInt8)0xff,  /* [202] */
    (xdc_UInt8)0xff,  /* [203] */
    (xdc_UInt8)0xff,  /* [204] */
    (xdc_UInt8)0xff,  /* [205] */
    (xdc_UInt8)0xff,  /* [206] */
    (xdc_UInt8)0xff,  /* [207] */
    (xdc_UInt8)0xff,  /* [208] */
    (xdc_UInt8)0xff,  /* [209] */
    (xdc_UInt8)0xff,  /* [210] */
    (xdc_UInt8)0xff,  /* [211] */
    (xdc_UInt8)0xff,  /* [212] */
    (xdc_UInt8)0xff,  /* [213] */
    (xdc_UInt8)0xff,  /* [214] */
    (xdc_UInt8)0xff,  /* [215] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x23;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 0;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xd8;

/* NUM_PRIORITIES__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)5736) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)5806) << 16 | 512);

/* A_unsupportedMaskingOption__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)1939) << 16 | 16);

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4053) << 16 | 0);

/* E_exception__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4101) << 16 | 0);

/* E_noIsr__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4306) << 16 | 0);

/* E_NMI__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4334) << 16 | 0);

/* E_hardFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4344) << 16 | 0);

/* E_memFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4360) << 16 | 0);

/* E_busFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4390) << 16 | 0);

/* E_usageFault__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4420) << 16 | 0);

/* E_svCall__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4437) << 16 | 0);

/* E_debugMon__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4458) << 16 | 0);

/* E_reserved__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4473) << 16 | 0);

/* excHookFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* dispatchTable__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatchTable ti_sysbios_family_arm_m3_Hwi_dispatchTable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_dispatchTable)0);

/* priorities__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priorities ti_sysbios_family_arm_m3_Hwi_priorities__C = ((CT__ti_sysbios_family_arm_m3_Hwi_priorities)ti_sysbios_family_arm_m3_Hwi_priorities__A);

/* swiDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)0);

/* swiRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)0);

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};

/* excHandlerFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x24;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x25;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x2f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x30;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2786) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x14;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 0;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)3891) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x15;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[2048];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x800)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x31;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)3308) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)3344) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)3389) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4714) << 16 | 0);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)3280) << 16 | 16);

/* reqAlign__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0],  /* timer */
    0,  /* swi */
    (xdc_UInt32)0x0,  /* periodCounts */
    (xdc_UInt)0x0,  /* numTickSkip */
    (xdc_UInt32)0x0,  /* skipsWorkFunc */
    0,  /* inWorkFunc */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x18;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)4926) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)4948) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)4966) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)559) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)640) << 16 | 16);

/* tickSource__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0xa;


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_uia_sysbios_LoggerIdle_idleWrite__I)),  /* [0] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1] = {
    (xdc_UInt)0x0,  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x19;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {1, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {1, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x1a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x1b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x1c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)4998) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5028) << 16 | 768);

/* A_noEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1050) << 16 | 16);

/* A_invTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1105) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)839) << 16 | 16);

/* A_overflow__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1170) << 16 | 16);

/* A_pendTaskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1224) << 16 | 16);

/* supportsEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* eventPost__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
};

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x1d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = 0;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5071) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5118) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5136) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1318) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1375) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x1;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1536];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x2,  /* priority */
        (xdc_UInt)0x4,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x600,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)consoleFxn)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[4] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1],  /* [0] */
};

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x2,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x1e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5176) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5244) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5289) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5330) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5362) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5410) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5466) << 16 | 512);

/* LM_setAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5497) << 16 | 768);

/* LM_schedule__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5580) << 16 | 1024);

/* LM_noWork__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)5666) << 16 | 1024);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3928) << 16 | 0);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3971) << 16 | 0);

/* E_deleteNotAllowed__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4022) << 16 | 0);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1424) << 16 | 16);

/* A_badTaskState__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1493) << 16 | 16);

/* A_noPendElem__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1547) << 16 | 16);

/* A_taskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1601) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1664) << 16 | 16);

/* A_badTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1714) << 16 | 16);

/* A_badAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1749) << 16 | 16);

/* A_sleepTaskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1782) << 16 | 16);

/* A_invalidCoreId__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1866) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x4;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* deleteTerminatedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* numConstructedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((CT__ti_uia_events_DvtTypes_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((CT__ti_uia_events_DvtTypes_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((CT__ti_uia_events_DvtTypes_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x2b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((CT__ti_uia_events_DvtTypes_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Module__startupDoneFxn ti_uia_events_DvtTypes_Module__startupDoneFxn__C = ((CT__ti_uia_events_DvtTypes_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.EventHdr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsEnabled ti_uia_runtime_EventHdr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsIncluded ti_uia_runtime_EventHdr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsMask ti_uia_runtime_EventHdr_Module__diagsMask__C = ((CT__ti_uia_runtime_EventHdr_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gateObj ti_uia_runtime_EventHdr_Module__gateObj__C = ((CT__ti_uia_runtime_EventHdr_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gatePrms ti_uia_runtime_EventHdr_Module__gatePrms__C = ((CT__ti_uia_runtime_EventHdr_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__id ti_uia_runtime_EventHdr_Module__id__C = (xdc_Bits16)0x2c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerDefined ti_uia_runtime_EventHdr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerObj ti_uia_runtime_EventHdr_Module__loggerObj__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0 ti_uia_runtime_EventHdr_Module__loggerFxn0__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1 ti_uia_runtime_EventHdr_Module__loggerFxn1__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2 ti_uia_runtime_EventHdr_Module__loggerFxn2__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4 ti_uia_runtime_EventHdr_Module__loggerFxn4__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8 ti_uia_runtime_EventHdr_Module__loggerFxn8__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn ti_uia_runtime_EventHdr_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__count ti_uia_runtime_EventHdr_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__heap ti_uia_runtime_EventHdr_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__sizeof ti_uia_runtime_EventHdr_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__table ti_uia_runtime_EventHdr_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x2d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = 0;


/*
 * ======== ti.uia.sysbios.LoggerIdle INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_sysbios_LoggerIdle_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_uia_sysbios_LoggerIdle_Params ti_uia_sysbios_LoggerIdle_Object__PARAMS__C = {
    sizeof (ti_uia_sysbios_LoggerIdle_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_sysbios_LoggerIdle_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_uia_sysbios_LoggerIdle_Module__ ti_uia_sysbios_LoggerIdle_Module__root__V = {
    {&ti_uia_sysbios_LoggerIdle_Module__root__V.link,  /* link.next */
    &ti_uia_sysbios_LoggerIdle_Module__root__V.link},  /* link.prev */
};

/* --> ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A */
__T1_ti_uia_sysbios_LoggerIdle_Module_State__idleBuffer ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A[1024];

/* --> ti_uia_sysbios_LoggerIdle_Module_State_0_tempBuffer__A */
__T1_ti_uia_sysbios_LoggerIdle_Module_State__tempBuffer ti_uia_sysbios_LoggerIdle_Module_State_0_tempBuffer__A[16];

/* Module__state__V */
ti_uia_sysbios_LoggerIdle_Module_State__ ti_uia_sysbios_LoggerIdle_Module__state__V = {
    ((xdc_Int(*)(xdc_UChar*,xdc_Int))((xdc_Fxn)USBCDCD_LoggerIdle_sendData)),  /* loggerFxn */
    1,  /* enabled */
    1,  /* empty */
    (xdc_UInt)0x0,  /* idleSequence */
    (xdc_UInt)0x400,  /* bufferSize */
    ((void*)ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A),  /* idleBuffer */
    ((void*)ti_uia_sysbios_LoggerIdle_Module_State_0_tempBuffer__A),  /* tempBuffer */
    ((xdc_UInt32*)((void*)&ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A[0])),  /* bufferRead */
    ((xdc_UInt32*)((void*)&ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A[0])),  /* bufferWrite */
    ((xdc_UInt32*)((void*)&ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A[1023])),  /* bufferPad */
    ((xdc_UInt32*)((void*)&ti_uia_sysbios_LoggerIdle_Module_State_0_idleBuffer__A[1012])),  /* bufferEnd */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__diagsEnabled ti_uia_sysbios_LoggerIdle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__diagsIncluded ti_uia_sysbios_LoggerIdle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__diagsMask ti_uia_sysbios_LoggerIdle_Module__diagsMask__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__gateObj ti_uia_sysbios_LoggerIdle_Module__gateObj__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__gatePrms ti_uia_sysbios_LoggerIdle_Module__gatePrms__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__id ti_uia_sysbios_LoggerIdle_Module__id__C = (xdc_Bits16)0x2e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerDefined ti_uia_sysbios_LoggerIdle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerObj ti_uia_sysbios_LoggerIdle_Module__loggerObj__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn0 ti_uia_sysbios_LoggerIdle_Module__loggerFxn0__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn1 ti_uia_sysbios_LoggerIdle_Module__loggerFxn1__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn2 ti_uia_sysbios_LoggerIdle_Module__loggerFxn2__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn4 ti_uia_sysbios_LoggerIdle_Module__loggerFxn4__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn8 ti_uia_sysbios_LoggerIdle_Module__loggerFxn8__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Module__startupDoneFxn ti_uia_sysbios_LoggerIdle_Module__startupDoneFxn__C = ((CT__ti_uia_sysbios_LoggerIdle_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Object__count ti_uia_sysbios_LoggerIdle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Object__heap ti_uia_sysbios_LoggerIdle_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Object__sizeof ti_uia_sysbios_LoggerIdle_Object__sizeof__C = sizeof(ti_uia_sysbios_LoggerIdle_Object__);

/* Object__table__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_Object__table ti_uia_sysbios_LoggerIdle_Object__table__C = 0;

/* bufferSize__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_bufferSize ti_uia_sysbios_LoggerIdle_bufferSize__C = (xdc_SizeT)0x400;

/* isTimestampEnabled__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_isTimestampEnabled ti_uia_sysbios_LoggerIdle_isTimestampEnabled__C = 1;

/* customTransportType__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_customTransportType ti_uia_sysbios_LoggerIdle_customTransportType__C = 0;

/* transportFxn__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_transportFxn ti_uia_sysbios_LoggerIdle_transportFxn__C = ((CT__ti_uia_sysbios_LoggerIdle_transportFxn)((xdc_Fxn)USBCDCD_LoggerIdle_sendData));

/* writeWhenFull__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_writeWhenFull ti_uia_sysbios_LoggerIdle_writeWhenFull__C = 0;

/* L_test__C */
__FAR__ const CT__ti_uia_sysbios_LoggerIdle_L_test ti_uia_sysbios_LoggerIdle_L_test__C = (((xdc_runtime_Log_Event)5824) << 16 | 256);


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x1;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3651) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x2;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x3;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x4;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x5;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3673) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3677) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3711) << 16 | 0);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x6;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x7;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4750) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4774) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4795) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4814) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4831) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4845) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4861) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4868) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4879) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4889) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4908) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x8;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_catalog_arm_cortexm4_tiva_ce_Boot_init__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [3] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTimers__I)),  /* [4] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_startTimer__E)),  /* [1] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[9] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Module_startup__E)),  /* [8] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[9] = {
    1,  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    1,  /* [7] */
    0,  /* [8] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x9;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {5, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {2, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysCallback INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsEnabled xdc_runtime_SysCallback_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsIncluded xdc_runtime_SysCallback_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__diagsMask xdc_runtime_SysCallback_Module__diagsMask__C = ((CT__xdc_runtime_SysCallback_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__gateObj xdc_runtime_SysCallback_Module__gateObj__C = ((CT__xdc_runtime_SysCallback_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__gatePrms xdc_runtime_SysCallback_Module__gatePrms__C = ((CT__xdc_runtime_SysCallback_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__id xdc_runtime_SysCallback_Module__id__C = (xdc_Bits16)0xb;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerDefined xdc_runtime_SysCallback_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerObj xdc_runtime_SysCallback_Module__loggerObj__C = ((CT__xdc_runtime_SysCallback_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn0 xdc_runtime_SysCallback_Module__loggerFxn0__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn1 xdc_runtime_SysCallback_Module__loggerFxn1__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn2 xdc_runtime_SysCallback_Module__loggerFxn2__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn4 xdc_runtime_SysCallback_Module__loggerFxn4__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__loggerFxn8 xdc_runtime_SysCallback_Module__loggerFxn8__C = ((CT__xdc_runtime_SysCallback_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_SysCallback_Module__startupDoneFxn xdc_runtime_SysCallback_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysCallback_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysCallback_Object__count xdc_runtime_SysCallback_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysCallback_Object__heap xdc_runtime_SysCallback_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysCallback_Object__sizeof xdc_runtime_SysCallback_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysCallback_Object__table xdc_runtime_SysCallback_Object__table__C = 0;

/* abortFxn__C */
__FAR__ const CT__xdc_runtime_SysCallback_abortFxn xdc_runtime_SysCallback_abortFxn__C = ((CT__xdc_runtime_SysCallback_abortFxn)((xdc_Fxn)UARTUtils_systemAbort));

/* exitFxn__C */
__FAR__ const CT__xdc_runtime_SysCallback_exitFxn xdc_runtime_SysCallback_exitFxn__C = ((CT__xdc_runtime_SysCallback_exitFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultExit));

/* flushFxn__C */
__FAR__ const CT__xdc_runtime_SysCallback_flushFxn xdc_runtime_SysCallback_flushFxn__C = ((CT__xdc_runtime_SysCallback_flushFxn)((xdc_Fxn)xdc_runtime_SysCallback_defaultFlush));

/* putchFxn__C */
__FAR__ const CT__xdc_runtime_SysCallback_putchFxn xdc_runtime_SysCallback_putchFxn__C = ((CT__xdc_runtime_SysCallback_putchFxn)((xdc_Fxn)UARTUtils_systemPutch));

/* readyFxn__C */
__FAR__ const CT__xdc_runtime_SysCallback_readyFxn xdc_runtime_SysCallback_readyFxn__C = ((CT__xdc_runtime_SysCallback_readyFxn)((xdc_Fxn)UARTUtils_systemReady));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
};

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
    (xdc_Int)0xcafe,  /* exitStatus */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0xa;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x2;

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5898] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6d,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x73,  /* [404] */
    (xdc_Char)0x74,  /* [405] */
    (xdc_Char)0x55,  /* [406] */
    (xdc_Char)0x73,  /* [407] */
    (xdc_Char)0x65,  /* [408] */
    (xdc_Char)0x45,  /* [409] */
    (xdc_Char)0x6e,  /* [410] */
    (xdc_Char)0x68,  /* [411] */
    (xdc_Char)0x61,  /* [412] */
    (xdc_Char)0x6e,  /* [413] */
    (xdc_Char)0x63,  /* [414] */
    (xdc_Char)0x65,  /* [415] */
    (xdc_Char)0x64,  /* [416] */
    (xdc_Char)0x43,  /* [417] */
    (xdc_Char)0x6c,  /* [418] */
    (xdc_Char)0x6f,  /* [419] */
    (xdc_Char)0x63,  /* [420] */
    (xdc_Char)0x6b,  /* [421] */
    (xdc_Char)0x4d,  /* [422] */
    (xdc_Char)0x6f,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x65,  /* [425] */
    (xdc_Char)0x3a,  /* [426] */
    (xdc_Char)0x20,  /* [427] */
    (xdc_Char)0x54,  /* [428] */
    (xdc_Char)0x68,  /* [429] */
    (xdc_Char)0x69,  /* [430] */
    (xdc_Char)0x73,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x64,  /* [433] */
    (xdc_Char)0x65,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x69,  /* [436] */
    (xdc_Char)0x63,  /* [437] */
    (xdc_Char)0x65,  /* [438] */
    (xdc_Char)0x20,  /* [439] */
    (xdc_Char)0x72,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x71,  /* [442] */
    (xdc_Char)0x75,  /* [443] */
    (xdc_Char)0x69,  /* [444] */
    (xdc_Char)0x72,  /* [445] */
    (xdc_Char)0x65,  /* [446] */
    (xdc_Char)0x73,  /* [447] */
    (xdc_Char)0x20,  /* [448] */
    (xdc_Char)0x74,  /* [449] */
    (xdc_Char)0x68,  /* [450] */
    (xdc_Char)0x65,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x45,  /* [453] */
    (xdc_Char)0x6e,  /* [454] */
    (xdc_Char)0x68,  /* [455] */
    (xdc_Char)0x61,  /* [456] */
    (xdc_Char)0x6e,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x65,  /* [459] */
    (xdc_Char)0x64,  /* [460] */
    (xdc_Char)0x20,  /* [461] */
    (xdc_Char)0x43,  /* [462] */
    (xdc_Char)0x6c,  /* [463] */
    (xdc_Char)0x6f,  /* [464] */
    (xdc_Char)0x63,  /* [465] */
    (xdc_Char)0x6b,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x4d,  /* [468] */
    (xdc_Char)0x6f,  /* [469] */
    (xdc_Char)0x64,  /* [470] */
    (xdc_Char)0x65,  /* [471] */
    (xdc_Char)0x2e,  /* [472] */
    (xdc_Char)0x0,  /* [473] */
    (xdc_Char)0x41,  /* [474] */
    (xdc_Char)0x5f,  /* [475] */
    (xdc_Char)0x6d,  /* [476] */
    (xdc_Char)0x75,  /* [477] */
    (xdc_Char)0x73,  /* [478] */
    (xdc_Char)0x74,  /* [479] */
    (xdc_Char)0x4e,  /* [480] */
    (xdc_Char)0x6f,  /* [481] */
    (xdc_Char)0x74,  /* [482] */
    (xdc_Char)0x55,  /* [483] */
    (xdc_Char)0x73,  /* [484] */
    (xdc_Char)0x65,  /* [485] */
    (xdc_Char)0x45,  /* [486] */
    (xdc_Char)0x6e,  /* [487] */
    (xdc_Char)0x68,  /* [488] */
    (xdc_Char)0x61,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x63,  /* [491] */
    (xdc_Char)0x65,  /* [492] */
    (xdc_Char)0x64,  /* [493] */
    (xdc_Char)0x43,  /* [494] */
    (xdc_Char)0x6c,  /* [495] */
    (xdc_Char)0x6f,  /* [496] */
    (xdc_Char)0x63,  /* [497] */
    (xdc_Char)0x6b,  /* [498] */
    (xdc_Char)0x4d,  /* [499] */
    (xdc_Char)0x6f,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x65,  /* [502] */
    (xdc_Char)0x3a,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x54,  /* [505] */
    (xdc_Char)0x68,  /* [506] */
    (xdc_Char)0x69,  /* [507] */
    (xdc_Char)0x73,  /* [508] */
    (xdc_Char)0x20,  /* [509] */
    (xdc_Char)0x64,  /* [510] */
    (xdc_Char)0x65,  /* [511] */
    (xdc_Char)0x76,  /* [512] */
    (xdc_Char)0x69,  /* [513] */
    (xdc_Char)0x63,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x20,  /* [516] */
    (xdc_Char)0x64,  /* [517] */
    (xdc_Char)0x6f,  /* [518] */
    (xdc_Char)0x65,  /* [519] */
    (xdc_Char)0x73,  /* [520] */
    (xdc_Char)0x20,  /* [521] */
    (xdc_Char)0x6e,  /* [522] */
    (xdc_Char)0x6f,  /* [523] */
    (xdc_Char)0x74,  /* [524] */
    (xdc_Char)0x20,  /* [525] */
    (xdc_Char)0x73,  /* [526] */
    (xdc_Char)0x75,  /* [527] */
    (xdc_Char)0x70,  /* [528] */
    (xdc_Char)0x70,  /* [529] */
    (xdc_Char)0x6f,  /* [530] */
    (xdc_Char)0x72,  /* [531] */
    (xdc_Char)0x74,  /* [532] */
    (xdc_Char)0x20,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x68,  /* [535] */
    (xdc_Char)0x65,  /* [536] */
    (xdc_Char)0x20,  /* [537] */
    (xdc_Char)0x45,  /* [538] */
    (xdc_Char)0x6e,  /* [539] */
    (xdc_Char)0x68,  /* [540] */
    (xdc_Char)0x61,  /* [541] */
    (xdc_Char)0x6e,  /* [542] */
    (xdc_Char)0x63,  /* [543] */
    (xdc_Char)0x65,  /* [544] */
    (xdc_Char)0x64,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x43,  /* [547] */
    (xdc_Char)0x6c,  /* [548] */
    (xdc_Char)0x6f,  /* [549] */
    (xdc_Char)0x63,  /* [550] */
    (xdc_Char)0x6b,  /* [551] */
    (xdc_Char)0x20,  /* [552] */
    (xdc_Char)0x4d,  /* [553] */
    (xdc_Char)0x6f,  /* [554] */
    (xdc_Char)0x64,  /* [555] */
    (xdc_Char)0x65,  /* [556] */
    (xdc_Char)0x2e,  /* [557] */
    (xdc_Char)0x0,  /* [558] */
    (xdc_Char)0x41,  /* [559] */
    (xdc_Char)0x5f,  /* [560] */
    (xdc_Char)0x63,  /* [561] */
    (xdc_Char)0x6c,  /* [562] */
    (xdc_Char)0x6f,  /* [563] */
    (xdc_Char)0x63,  /* [564] */
    (xdc_Char)0x6b,  /* [565] */
    (xdc_Char)0x44,  /* [566] */
    (xdc_Char)0x69,  /* [567] */
    (xdc_Char)0x73,  /* [568] */
    (xdc_Char)0x61,  /* [569] */
    (xdc_Char)0x62,  /* [570] */
    (xdc_Char)0x6c,  /* [571] */
    (xdc_Char)0x65,  /* [572] */
    (xdc_Char)0x64,  /* [573] */
    (xdc_Char)0x3a,  /* [574] */
    (xdc_Char)0x20,  /* [575] */
    (xdc_Char)0x43,  /* [576] */
    (xdc_Char)0x61,  /* [577] */
    (xdc_Char)0x6e,  /* [578] */
    (xdc_Char)0x6e,  /* [579] */
    (xdc_Char)0x6f,  /* [580] */
    (xdc_Char)0x74,  /* [581] */
    (xdc_Char)0x20,  /* [582] */
    (xdc_Char)0x63,  /* [583] */
    (xdc_Char)0x72,  /* [584] */
    (xdc_Char)0x65,  /* [585] */
    (xdc_Char)0x61,  /* [586] */
    (xdc_Char)0x74,  /* [587] */
    (xdc_Char)0x65,  /* [588] */
    (xdc_Char)0x20,  /* [589] */
    (xdc_Char)0x61,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x63,  /* [592] */
    (xdc_Char)0x6c,  /* [593] */
    (xdc_Char)0x6f,  /* [594] */
    (xdc_Char)0x63,  /* [595] */
    (xdc_Char)0x6b,  /* [596] */
    (xdc_Char)0x20,  /* [597] */
    (xdc_Char)0x69,  /* [598] */
    (xdc_Char)0x6e,  /* [599] */
    (xdc_Char)0x73,  /* [600] */
    (xdc_Char)0x74,  /* [601] */
    (xdc_Char)0x61,  /* [602] */
    (xdc_Char)0x6e,  /* [603] */
    (xdc_Char)0x63,  /* [604] */
    (xdc_Char)0x65,  /* [605] */
    (xdc_Char)0x20,  /* [606] */
    (xdc_Char)0x77,  /* [607] */
    (xdc_Char)0x68,  /* [608] */
    (xdc_Char)0x65,  /* [609] */
    (xdc_Char)0x6e,  /* [610] */
    (xdc_Char)0x20,  /* [611] */
    (xdc_Char)0x42,  /* [612] */
    (xdc_Char)0x49,  /* [613] */
    (xdc_Char)0x4f,  /* [614] */
    (xdc_Char)0x53,  /* [615] */
    (xdc_Char)0x2e,  /* [616] */
    (xdc_Char)0x63,  /* [617] */
    (xdc_Char)0x6c,  /* [618] */
    (xdc_Char)0x6f,  /* [619] */
    (xdc_Char)0x63,  /* [620] */
    (xdc_Char)0x6b,  /* [621] */
    (xdc_Char)0x45,  /* [622] */
    (xdc_Char)0x6e,  /* [623] */
    (xdc_Char)0x61,  /* [624] */
    (xdc_Char)0x62,  /* [625] */
    (xdc_Char)0x6c,  /* [626] */
    (xdc_Char)0x65,  /* [627] */
    (xdc_Char)0x64,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x69,  /* [630] */
    (xdc_Char)0x73,  /* [631] */
    (xdc_Char)0x20,  /* [632] */
    (xdc_Char)0x66,  /* [633] */
    (xdc_Char)0x61,  /* [634] */
    (xdc_Char)0x6c,  /* [635] */
    (xdc_Char)0x73,  /* [636] */
    (xdc_Char)0x65,  /* [637] */
    (xdc_Char)0x2e,  /* [638] */
    (xdc_Char)0x0,  /* [639] */
    (xdc_Char)0x41,  /* [640] */
    (xdc_Char)0x5f,  /* [641] */
    (xdc_Char)0x62,  /* [642] */
    (xdc_Char)0x61,  /* [643] */
    (xdc_Char)0x64,  /* [644] */
    (xdc_Char)0x54,  /* [645] */
    (xdc_Char)0x68,  /* [646] */
    (xdc_Char)0x72,  /* [647] */
    (xdc_Char)0x65,  /* [648] */
    (xdc_Char)0x61,  /* [649] */
    (xdc_Char)0x64,  /* [650] */
    (xdc_Char)0x54,  /* [651] */
    (xdc_Char)0x79,  /* [652] */
    (xdc_Char)0x70,  /* [653] */
    (xdc_Char)0x65,  /* [654] */
    (xdc_Char)0x3a,  /* [655] */
    (xdc_Char)0x20,  /* [656] */
    (xdc_Char)0x43,  /* [657] */
    (xdc_Char)0x61,  /* [658] */
    (xdc_Char)0x6e,  /* [659] */
    (xdc_Char)0x6e,  /* [660] */
    (xdc_Char)0x6f,  /* [661] */
    (xdc_Char)0x74,  /* [662] */
    (xdc_Char)0x20,  /* [663] */
    (xdc_Char)0x63,  /* [664] */
    (xdc_Char)0x72,  /* [665] */
    (xdc_Char)0x65,  /* [666] */
    (xdc_Char)0x61,  /* [667] */
    (xdc_Char)0x74,  /* [668] */
    (xdc_Char)0x65,  /* [669] */
    (xdc_Char)0x2f,  /* [670] */
    (xdc_Char)0x64,  /* [671] */
    (xdc_Char)0x65,  /* [672] */
    (xdc_Char)0x6c,  /* [673] */
    (xdc_Char)0x65,  /* [674] */
    (xdc_Char)0x74,  /* [675] */
    (xdc_Char)0x65,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x61,  /* [678] */
    (xdc_Char)0x20,  /* [679] */
    (xdc_Char)0x43,  /* [680] */
    (xdc_Char)0x6c,  /* [681] */
    (xdc_Char)0x6f,  /* [682] */
    (xdc_Char)0x63,  /* [683] */
    (xdc_Char)0x6b,  /* [684] */
    (xdc_Char)0x20,  /* [685] */
    (xdc_Char)0x66,  /* [686] */
    (xdc_Char)0x72,  /* [687] */
    (xdc_Char)0x6f,  /* [688] */
    (xdc_Char)0x6d,  /* [689] */
    (xdc_Char)0x20,  /* [690] */
    (xdc_Char)0x48,  /* [691] */
    (xdc_Char)0x77,  /* [692] */
    (xdc_Char)0x69,  /* [693] */
    (xdc_Char)0x20,  /* [694] */
    (xdc_Char)0x6f,  /* [695] */
    (xdc_Char)0x72,  /* [696] */
    (xdc_Char)0x20,  /* [697] */
    (xdc_Char)0x53,  /* [698] */
    (xdc_Char)0x77,  /* [699] */
    (xdc_Char)0x69,  /* [700] */
    (xdc_Char)0x20,  /* [701] */
    (xdc_Char)0x74,  /* [702] */
    (xdc_Char)0x68,  /* [703] */
    (xdc_Char)0x72,  /* [704] */
    (xdc_Char)0x65,  /* [705] */
    (xdc_Char)0x61,  /* [706] */
    (xdc_Char)0x64,  /* [707] */
    (xdc_Char)0x2e,  /* [708] */
    (xdc_Char)0x0,  /* [709] */
    (xdc_Char)0x41,  /* [710] */
    (xdc_Char)0x5f,  /* [711] */
    (xdc_Char)0x6e,  /* [712] */
    (xdc_Char)0x75,  /* [713] */
    (xdc_Char)0x6c,  /* [714] */
    (xdc_Char)0x6c,  /* [715] */
    (xdc_Char)0x45,  /* [716] */
    (xdc_Char)0x76,  /* [717] */
    (xdc_Char)0x65,  /* [718] */
    (xdc_Char)0x6e,  /* [719] */
    (xdc_Char)0x74,  /* [720] */
    (xdc_Char)0x4d,  /* [721] */
    (xdc_Char)0x61,  /* [722] */
    (xdc_Char)0x73,  /* [723] */
    (xdc_Char)0x6b,  /* [724] */
    (xdc_Char)0x73,  /* [725] */
    (xdc_Char)0x3a,  /* [726] */
    (xdc_Char)0x20,  /* [727] */
    (xdc_Char)0x6f,  /* [728] */
    (xdc_Char)0x72,  /* [729] */
    (xdc_Char)0x4d,  /* [730] */
    (xdc_Char)0x61,  /* [731] */
    (xdc_Char)0x73,  /* [732] */
    (xdc_Char)0x6b,  /* [733] */
    (xdc_Char)0x20,  /* [734] */
    (xdc_Char)0x61,  /* [735] */
    (xdc_Char)0x6e,  /* [736] */
    (xdc_Char)0x64,  /* [737] */
    (xdc_Char)0x20,  /* [738] */
    (xdc_Char)0x61,  /* [739] */
    (xdc_Char)0x6e,  /* [740] */
    (xdc_Char)0x64,  /* [741] */
    (xdc_Char)0x4d,  /* [742] */
    (xdc_Char)0x61,  /* [743] */
    (xdc_Char)0x73,  /* [744] */
    (xdc_Char)0x6b,  /* [745] */
    (xdc_Char)0x20,  /* [746] */
    (xdc_Char)0x61,  /* [747] */
    (xdc_Char)0x72,  /* [748] */
    (xdc_Char)0x65,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x6e,  /* [751] */
    (xdc_Char)0x75,  /* [752] */
    (xdc_Char)0x6c,  /* [753] */
    (xdc_Char)0x6c,  /* [754] */
    (xdc_Char)0x2e,  /* [755] */
    (xdc_Char)0x0,  /* [756] */
    (xdc_Char)0x41,  /* [757] */
    (xdc_Char)0x5f,  /* [758] */
    (xdc_Char)0x6e,  /* [759] */
    (xdc_Char)0x75,  /* [760] */
    (xdc_Char)0x6c,  /* [761] */
    (xdc_Char)0x6c,  /* [762] */
    (xdc_Char)0x45,  /* [763] */
    (xdc_Char)0x76,  /* [764] */
    (xdc_Char)0x65,  /* [765] */
    (xdc_Char)0x6e,  /* [766] */
    (xdc_Char)0x74,  /* [767] */
    (xdc_Char)0x49,  /* [768] */
    (xdc_Char)0x64,  /* [769] */
    (xdc_Char)0x3a,  /* [770] */
    (xdc_Char)0x20,  /* [771] */
    (xdc_Char)0x70,  /* [772] */
    (xdc_Char)0x6f,  /* [773] */
    (xdc_Char)0x73,  /* [774] */
    (xdc_Char)0x74,  /* [775] */
    (xdc_Char)0x65,  /* [776] */
    (xdc_Char)0x64,  /* [777] */
    (xdc_Char)0x20,  /* [778] */
    (xdc_Char)0x65,  /* [779] */
    (xdc_Char)0x76,  /* [780] */
    (xdc_Char)0x65,  /* [781] */
    (xdc_Char)0x6e,  /* [782] */
    (xdc_Char)0x74,  /* [783] */
    (xdc_Char)0x49,  /* [784] */
    (xdc_Char)0x64,  /* [785] */
    (xdc_Char)0x20,  /* [786] */
    (xdc_Char)0x69,  /* [787] */
    (xdc_Char)0x73,  /* [788] */
    (xdc_Char)0x20,  /* [789] */
    (xdc_Char)0x6e,  /* [790] */
    (xdc_Char)0x75,  /* [791] */
    (xdc_Char)0x6c,  /* [792] */
    (xdc_Char)0x6c,  /* [793] */
    (xdc_Char)0x2e,  /* [794] */
    (xdc_Char)0x0,  /* [795] */
    (xdc_Char)0x41,  /* [796] */
    (xdc_Char)0x5f,  /* [797] */
    (xdc_Char)0x65,  /* [798] */
    (xdc_Char)0x76,  /* [799] */
    (xdc_Char)0x65,  /* [800] */
    (xdc_Char)0x6e,  /* [801] */
    (xdc_Char)0x74,  /* [802] */
    (xdc_Char)0x49,  /* [803] */
    (xdc_Char)0x6e,  /* [804] */
    (xdc_Char)0x55,  /* [805] */
    (xdc_Char)0x73,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x3a,  /* [808] */
    (xdc_Char)0x20,  /* [809] */
    (xdc_Char)0x45,  /* [810] */
    (xdc_Char)0x76,  /* [811] */
    (xdc_Char)0x65,  /* [812] */
    (xdc_Char)0x6e,  /* [813] */
    (xdc_Char)0x74,  /* [814] */
    (xdc_Char)0x20,  /* [815] */
    (xdc_Char)0x6f,  /* [816] */
    (xdc_Char)0x62,  /* [817] */
    (xdc_Char)0x6a,  /* [818] */
    (xdc_Char)0x65,  /* [819] */
    (xdc_Char)0x63,  /* [820] */
    (xdc_Char)0x74,  /* [821] */
    (xdc_Char)0x20,  /* [822] */
    (xdc_Char)0x61,  /* [823] */
    (xdc_Char)0x6c,  /* [824] */
    (xdc_Char)0x72,  /* [825] */
    (xdc_Char)0x65,  /* [826] */
    (xdc_Char)0x61,  /* [827] */
    (xdc_Char)0x64,  /* [828] */
    (xdc_Char)0x79,  /* [829] */
    (xdc_Char)0x20,  /* [830] */
    (xdc_Char)0x69,  /* [831] */
    (xdc_Char)0x6e,  /* [832] */
    (xdc_Char)0x20,  /* [833] */
    (xdc_Char)0x75,  /* [834] */
    (xdc_Char)0x73,  /* [835] */
    (xdc_Char)0x65,  /* [836] */
    (xdc_Char)0x2e,  /* [837] */
    (xdc_Char)0x0,  /* [838] */
    (xdc_Char)0x41,  /* [839] */
    (xdc_Char)0x5f,  /* [840] */
    (xdc_Char)0x62,  /* [841] */
    (xdc_Char)0x61,  /* [842] */
    (xdc_Char)0x64,  /* [843] */
    (xdc_Char)0x43,  /* [844] */
    (xdc_Char)0x6f,  /* [845] */
    (xdc_Char)0x6e,  /* [846] */
    (xdc_Char)0x74,  /* [847] */
    (xdc_Char)0x65,  /* [848] */
    (xdc_Char)0x78,  /* [849] */
    (xdc_Char)0x74,  /* [850] */
    (xdc_Char)0x3a,  /* [851] */
    (xdc_Char)0x20,  /* [852] */
    (xdc_Char)0x62,  /* [853] */
    (xdc_Char)0x61,  /* [854] */
    (xdc_Char)0x64,  /* [855] */
    (xdc_Char)0x20,  /* [856] */
    (xdc_Char)0x63,  /* [857] */
    (xdc_Char)0x61,  /* [858] */
    (xdc_Char)0x6c,  /* [859] */
    (xdc_Char)0x6c,  /* [860] */
    (xdc_Char)0x69,  /* [861] */
    (xdc_Char)0x6e,  /* [862] */
    (xdc_Char)0x67,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x63,  /* [865] */
    (xdc_Char)0x6f,  /* [866] */
    (xdc_Char)0x6e,  /* [867] */
    (xdc_Char)0x74,  /* [868] */
    (xdc_Char)0x65,  /* [869] */
    (xdc_Char)0x78,  /* [870] */
    (xdc_Char)0x74,  /* [871] */
    (xdc_Char)0x2e,  /* [872] */
    (xdc_Char)0x20,  /* [873] */
    (xdc_Char)0x4d,  /* [874] */
    (xdc_Char)0x75,  /* [875] */
    (xdc_Char)0x73,  /* [876] */
    (xdc_Char)0x74,  /* [877] */
    (xdc_Char)0x20,  /* [878] */
    (xdc_Char)0x62,  /* [879] */
    (xdc_Char)0x65,  /* [880] */
    (xdc_Char)0x20,  /* [881] */
    (xdc_Char)0x63,  /* [882] */
    (xdc_Char)0x61,  /* [883] */
    (xdc_Char)0x6c,  /* [884] */
    (xdc_Char)0x6c,  /* [885] */
    (xdc_Char)0x65,  /* [886] */
    (xdc_Char)0x64,  /* [887] */
    (xdc_Char)0x20,  /* [888] */
    (xdc_Char)0x66,  /* [889] */
    (xdc_Char)0x72,  /* [890] */
    (xdc_Char)0x6f,  /* [891] */
    (xdc_Char)0x6d,  /* [892] */
    (xdc_Char)0x20,  /* [893] */
    (xdc_Char)0x61,  /* [894] */
    (xdc_Char)0x20,  /* [895] */
    (xdc_Char)0x54,  /* [896] */
    (xdc_Char)0x61,  /* [897] */
    (xdc_Char)0x73,  /* [898] */
    (xdc_Char)0x6b,  /* [899] */
    (xdc_Char)0x2e,  /* [900] */
    (xdc_Char)0x0,  /* [901] */
    (xdc_Char)0x41,  /* [902] */
    (xdc_Char)0x5f,  /* [903] */
    (xdc_Char)0x70,  /* [904] */
    (xdc_Char)0x65,  /* [905] */
    (xdc_Char)0x6e,  /* [906] */
    (xdc_Char)0x64,  /* [907] */
    (xdc_Char)0x54,  /* [908] */
    (xdc_Char)0x61,  /* [909] */
    (xdc_Char)0x73,  /* [910] */
    (xdc_Char)0x6b,  /* [911] */
    (xdc_Char)0x44,  /* [912] */
    (xdc_Char)0x69,  /* [913] */
    (xdc_Char)0x73,  /* [914] */
    (xdc_Char)0x61,  /* [915] */
    (xdc_Char)0x62,  /* [916] */
    (xdc_Char)0x6c,  /* [917] */
    (xdc_Char)0x65,  /* [918] */
    (xdc_Char)0x64,  /* [919] */
    (xdc_Char)0x3a,  /* [920] */
    (xdc_Char)0x20,  /* [921] */
    (xdc_Char)0x43,  /* [922] */
    (xdc_Char)0x61,  /* [923] */
    (xdc_Char)0x6e,  /* [924] */
    (xdc_Char)0x6e,  /* [925] */
    (xdc_Char)0x6f,  /* [926] */
    (xdc_Char)0x74,  /* [927] */
    (xdc_Char)0x20,  /* [928] */
    (xdc_Char)0x63,  /* [929] */
    (xdc_Char)0x61,  /* [930] */
    (xdc_Char)0x6c,  /* [931] */
    (xdc_Char)0x6c,  /* [932] */
    (xdc_Char)0x20,  /* [933] */
    (xdc_Char)0x45,  /* [934] */
    (xdc_Char)0x76,  /* [935] */
    (xdc_Char)0x65,  /* [936] */
    (xdc_Char)0x6e,  /* [937] */
    (xdc_Char)0x74,  /* [938] */
    (xdc_Char)0x5f,  /* [939] */
    (xdc_Char)0x70,  /* [940] */
    (xdc_Char)0x65,  /* [941] */
    (xdc_Char)0x6e,  /* [942] */
    (xdc_Char)0x64,  /* [943] */
    (xdc_Char)0x28,  /* [944] */
    (xdc_Char)0x29,  /* [945] */
    (xdc_Char)0x20,  /* [946] */
    (xdc_Char)0x77,  /* [947] */
    (xdc_Char)0x68,  /* [948] */
    (xdc_Char)0x69,  /* [949] */
    (xdc_Char)0x6c,  /* [950] */
    (xdc_Char)0x65,  /* [951] */
    (xdc_Char)0x20,  /* [952] */
    (xdc_Char)0x74,  /* [953] */
    (xdc_Char)0x68,  /* [954] */
    (xdc_Char)0x65,  /* [955] */
    (xdc_Char)0x20,  /* [956] */
    (xdc_Char)0x54,  /* [957] */
    (xdc_Char)0x61,  /* [958] */
    (xdc_Char)0x73,  /* [959] */
    (xdc_Char)0x6b,  /* [960] */
    (xdc_Char)0x20,  /* [961] */
    (xdc_Char)0x6f,  /* [962] */
    (xdc_Char)0x72,  /* [963] */
    (xdc_Char)0x20,  /* [964] */
    (xdc_Char)0x53,  /* [965] */
    (xdc_Char)0x77,  /* [966] */
    (xdc_Char)0x69,  /* [967] */
    (xdc_Char)0x20,  /* [968] */
    (xdc_Char)0x73,  /* [969] */
    (xdc_Char)0x63,  /* [970] */
    (xdc_Char)0x68,  /* [971] */
    (xdc_Char)0x65,  /* [972] */
    (xdc_Char)0x64,  /* [973] */
    (xdc_Char)0x75,  /* [974] */
    (xdc_Char)0x6c,  /* [975] */
    (xdc_Char)0x65,  /* [976] */
    (xdc_Char)0x72,  /* [977] */
    (xdc_Char)0x20,  /* [978] */
    (xdc_Char)0x69,  /* [979] */
    (xdc_Char)0x73,  /* [980] */
    (xdc_Char)0x20,  /* [981] */
    (xdc_Char)0x64,  /* [982] */
    (xdc_Char)0x69,  /* [983] */
    (xdc_Char)0x73,  /* [984] */
    (xdc_Char)0x61,  /* [985] */
    (xdc_Char)0x62,  /* [986] */
    (xdc_Char)0x6c,  /* [987] */
    (xdc_Char)0x65,  /* [988] */
    (xdc_Char)0x64,  /* [989] */
    (xdc_Char)0x2e,  /* [990] */
    (xdc_Char)0x0,  /* [991] */
    (xdc_Char)0x4d,  /* [992] */
    (xdc_Char)0x61,  /* [993] */
    (xdc_Char)0x69,  /* [994] */
    (xdc_Char)0x6c,  /* [995] */
    (xdc_Char)0x62,  /* [996] */
    (xdc_Char)0x6f,  /* [997] */
    (xdc_Char)0x78,  /* [998] */
    (xdc_Char)0x5f,  /* [999] */
    (xdc_Char)0x63,  /* [1000] */
    (xdc_Char)0x72,  /* [1001] */
    (xdc_Char)0x65,  /* [1002] */
    (xdc_Char)0x61,  /* [1003] */
    (xdc_Char)0x74,  /* [1004] */
    (xdc_Char)0x65,  /* [1005] */
    (xdc_Char)0x27,  /* [1006] */
    (xdc_Char)0x73,  /* [1007] */
    (xdc_Char)0x20,  /* [1008] */
    (xdc_Char)0x62,  /* [1009] */
    (xdc_Char)0x75,  /* [1010] */
    (xdc_Char)0x66,  /* [1011] */
    (xdc_Char)0x53,  /* [1012] */
    (xdc_Char)0x69,  /* [1013] */
    (xdc_Char)0x7a,  /* [1014] */
    (xdc_Char)0x65,  /* [1015] */
    (xdc_Char)0x20,  /* [1016] */
    (xdc_Char)0x70,  /* [1017] */
    (xdc_Char)0x61,  /* [1018] */
    (xdc_Char)0x72,  /* [1019] */
    (xdc_Char)0x61,  /* [1020] */
    (xdc_Char)0x6d,  /* [1021] */
    (xdc_Char)0x65,  /* [1022] */
    (xdc_Char)0x74,  /* [1023] */
    (xdc_Char)0x65,  /* [1024] */
    (xdc_Char)0x72,  /* [1025] */
    (xdc_Char)0x20,  /* [1026] */
    (xdc_Char)0x69,  /* [1027] */
    (xdc_Char)0x73,  /* [1028] */
    (xdc_Char)0x20,  /* [1029] */
    (xdc_Char)0x69,  /* [1030] */
    (xdc_Char)0x6e,  /* [1031] */
    (xdc_Char)0x76,  /* [1032] */
    (xdc_Char)0x61,  /* [1033] */
    (xdc_Char)0x6c,  /* [1034] */
    (xdc_Char)0x69,  /* [1035] */
    (xdc_Char)0x64,  /* [1036] */
    (xdc_Char)0x20,  /* [1037] */
    (xdc_Char)0x28,  /* [1038] */
    (xdc_Char)0x74,  /* [1039] */
    (xdc_Char)0x6f,  /* [1040] */
    (xdc_Char)0x6f,  /* [1041] */
    (xdc_Char)0x20,  /* [1042] */
    (xdc_Char)0x73,  /* [1043] */
    (xdc_Char)0x6d,  /* [1044] */
    (xdc_Char)0x61,  /* [1045] */
    (xdc_Char)0x6c,  /* [1046] */
    (xdc_Char)0x6c,  /* [1047] */
    (xdc_Char)0x29,  /* [1048] */
    (xdc_Char)0x0,  /* [1049] */
    (xdc_Char)0x41,  /* [1050] */
    (xdc_Char)0x5f,  /* [1051] */
    (xdc_Char)0x6e,  /* [1052] */
    (xdc_Char)0x6f,  /* [1053] */
    (xdc_Char)0x45,  /* [1054] */
    (xdc_Char)0x76,  /* [1055] */
    (xdc_Char)0x65,  /* [1056] */
    (xdc_Char)0x6e,  /* [1057] */
    (xdc_Char)0x74,  /* [1058] */
    (xdc_Char)0x73,  /* [1059] */
    (xdc_Char)0x3a,  /* [1060] */
    (xdc_Char)0x20,  /* [1061] */
    (xdc_Char)0x54,  /* [1062] */
    (xdc_Char)0x68,  /* [1063] */
    (xdc_Char)0x65,  /* [1064] */
    (xdc_Char)0x20,  /* [1065] */
    (xdc_Char)0x45,  /* [1066] */
    (xdc_Char)0x76,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x6e,  /* [1069] */
    (xdc_Char)0x74,  /* [1070] */
    (xdc_Char)0x2e,  /* [1071] */
    (xdc_Char)0x73,  /* [1072] */
    (xdc_Char)0x75,  /* [1073] */
    (xdc_Char)0x70,  /* [1074] */
    (xdc_Char)0x70,  /* [1075] */
    (xdc_Char)0x6f,  /* [1076] */
    (xdc_Char)0x72,  /* [1077] */
    (xdc_Char)0x74,  /* [1078] */
    (xdc_Char)0x73,  /* [1079] */
    (xdc_Char)0x45,  /* [1080] */
    (xdc_Char)0x76,  /* [1081] */
    (xdc_Char)0x65,  /* [1082] */
    (xdc_Char)0x6e,  /* [1083] */
    (xdc_Char)0x74,  /* [1084] */
    (xdc_Char)0x73,  /* [1085] */
    (xdc_Char)0x20,  /* [1086] */
    (xdc_Char)0x66,  /* [1087] */
    (xdc_Char)0x6c,  /* [1088] */
    (xdc_Char)0x61,  /* [1089] */
    (xdc_Char)0x67,  /* [1090] */
    (xdc_Char)0x20,  /* [1091] */
    (xdc_Char)0x69,  /* [1092] */
    (xdc_Char)0x73,  /* [1093] */
    (xdc_Char)0x20,  /* [1094] */
    (xdc_Char)0x64,  /* [1095] */
    (xdc_Char)0x69,  /* [1096] */
    (xdc_Char)0x73,  /* [1097] */
    (xdc_Char)0x61,  /* [1098] */
    (xdc_Char)0x62,  /* [1099] */
    (xdc_Char)0x6c,  /* [1100] */
    (xdc_Char)0x65,  /* [1101] */
    (xdc_Char)0x64,  /* [1102] */
    (xdc_Char)0x2e,  /* [1103] */
    (xdc_Char)0x0,  /* [1104] */
    (xdc_Char)0x41,  /* [1105] */
    (xdc_Char)0x5f,  /* [1106] */
    (xdc_Char)0x69,  /* [1107] */
    (xdc_Char)0x6e,  /* [1108] */
    (xdc_Char)0x76,  /* [1109] */
    (xdc_Char)0x54,  /* [1110] */
    (xdc_Char)0x69,  /* [1111] */
    (xdc_Char)0x6d,  /* [1112] */
    (xdc_Char)0x65,  /* [1113] */
    (xdc_Char)0x6f,  /* [1114] */
    (xdc_Char)0x75,  /* [1115] */
    (xdc_Char)0x74,  /* [1116] */
    (xdc_Char)0x3a,  /* [1117] */
    (xdc_Char)0x20,  /* [1118] */
    (xdc_Char)0x43,  /* [1119] */
    (xdc_Char)0x61,  /* [1120] */
    (xdc_Char)0x6e,  /* [1121] */
    (xdc_Char)0x27,  /* [1122] */
    (xdc_Char)0x74,  /* [1123] */
    (xdc_Char)0x20,  /* [1124] */
    (xdc_Char)0x75,  /* [1125] */
    (xdc_Char)0x73,  /* [1126] */
    (xdc_Char)0x65,  /* [1127] */
    (xdc_Char)0x20,  /* [1128] */
    (xdc_Char)0x42,  /* [1129] */
    (xdc_Char)0x49,  /* [1130] */
    (xdc_Char)0x4f,  /* [1131] */
    (xdc_Char)0x53,  /* [1132] */
    (xdc_Char)0x5f,  /* [1133] */
    (xdc_Char)0x45,  /* [1134] */
    (xdc_Char)0x56,  /* [1135] */
    (xdc_Char)0x45,  /* [1136] */
    (xdc_Char)0x4e,  /* [1137] */
    (xdc_Char)0x54,  /* [1138] */
    (xdc_Char)0x5f,  /* [1139] */
    (xdc_Char)0x41,  /* [1140] */
    (xdc_Char)0x43,  /* [1141] */
    (xdc_Char)0x51,  /* [1142] */
    (xdc_Char)0x55,  /* [1143] */
    (xdc_Char)0x49,  /* [1144] */
    (xdc_Char)0x52,  /* [1145] */
    (xdc_Char)0x45,  /* [1146] */
    (xdc_Char)0x44,  /* [1147] */
    (xdc_Char)0x20,  /* [1148] */
    (xdc_Char)0x77,  /* [1149] */
    (xdc_Char)0x69,  /* [1150] */
    (xdc_Char)0x74,  /* [1151] */
    (xdc_Char)0x68,  /* [1152] */
    (xdc_Char)0x20,  /* [1153] */
    (xdc_Char)0x74,  /* [1154] */
    (xdc_Char)0x68,  /* [1155] */
    (xdc_Char)0x69,  /* [1156] */
    (xdc_Char)0x73,  /* [1157] */
    (xdc_Char)0x20,  /* [1158] */
    (xdc_Char)0x53,  /* [1159] */
    (xdc_Char)0x65,  /* [1160] */
    (xdc_Char)0x6d,  /* [1161] */
    (xdc_Char)0x61,  /* [1162] */
    (xdc_Char)0x70,  /* [1163] */
    (xdc_Char)0x68,  /* [1164] */
    (xdc_Char)0x6f,  /* [1165] */
    (xdc_Char)0x72,  /* [1166] */
    (xdc_Char)0x65,  /* [1167] */
    (xdc_Char)0x2e,  /* [1168] */
    (xdc_Char)0x0,  /* [1169] */
    (xdc_Char)0x41,  /* [1170] */
    (xdc_Char)0x5f,  /* [1171] */
    (xdc_Char)0x6f,  /* [1172] */
    (xdc_Char)0x76,  /* [1173] */
    (xdc_Char)0x65,  /* [1174] */
    (xdc_Char)0x72,  /* [1175] */
    (xdc_Char)0x66,  /* [1176] */
    (xdc_Char)0x6c,  /* [1177] */
    (xdc_Char)0x6f,  /* [1178] */
    (xdc_Char)0x77,  /* [1179] */
    (xdc_Char)0x3a,  /* [1180] */
    (xdc_Char)0x20,  /* [1181] */
    (xdc_Char)0x43,  /* [1182] */
    (xdc_Char)0x6f,  /* [1183] */
    (xdc_Char)0x75,  /* [1184] */
    (xdc_Char)0x6e,  /* [1185] */
    (xdc_Char)0x74,  /* [1186] */
    (xdc_Char)0x20,  /* [1187] */
    (xdc_Char)0x68,  /* [1188] */
    (xdc_Char)0x61,  /* [1189] */
    (xdc_Char)0x73,  /* [1190] */
    (xdc_Char)0x20,  /* [1191] */
    (xdc_Char)0x65,  /* [1192] */
    (xdc_Char)0x78,  /* [1193] */
    (xdc_Char)0x63,  /* [1194] */
    (xdc_Char)0x65,  /* [1195] */
    (xdc_Char)0x65,  /* [1196] */
    (xdc_Char)0x64,  /* [1197] */
    (xdc_Char)0x65,  /* [1198] */
    (xdc_Char)0x64,  /* [1199] */
    (xdc_Char)0x20,  /* [1200] */
    (xdc_Char)0x36,  /* [1201] */
    (xdc_Char)0x35,  /* [1202] */
    (xdc_Char)0x35,  /* [1203] */
    (xdc_Char)0x33,  /* [1204] */
    (xdc_Char)0x35,  /* [1205] */
    (xdc_Char)0x20,  /* [1206] */
    (xdc_Char)0x61,  /* [1207] */
    (xdc_Char)0x6e,  /* [1208] */
    (xdc_Char)0x64,  /* [1209] */
    (xdc_Char)0x20,  /* [1210] */
    (xdc_Char)0x72,  /* [1211] */
    (xdc_Char)0x6f,  /* [1212] */
    (xdc_Char)0x6c,  /* [1213] */
    (xdc_Char)0x6c,  /* [1214] */
    (xdc_Char)0x65,  /* [1215] */
    (xdc_Char)0x64,  /* [1216] */
    (xdc_Char)0x20,  /* [1217] */
    (xdc_Char)0x6f,  /* [1218] */
    (xdc_Char)0x76,  /* [1219] */
    (xdc_Char)0x65,  /* [1220] */
    (xdc_Char)0x72,  /* [1221] */
    (xdc_Char)0x2e,  /* [1222] */
    (xdc_Char)0x0,  /* [1223] */
    (xdc_Char)0x41,  /* [1224] */
    (xdc_Char)0x5f,  /* [1225] */
    (xdc_Char)0x70,  /* [1226] */
    (xdc_Char)0x65,  /* [1227] */
    (xdc_Char)0x6e,  /* [1228] */
    (xdc_Char)0x64,  /* [1229] */
    (xdc_Char)0x54,  /* [1230] */
    (xdc_Char)0x61,  /* [1231] */
    (xdc_Char)0x73,  /* [1232] */
    (xdc_Char)0x6b,  /* [1233] */
    (xdc_Char)0x44,  /* [1234] */
    (xdc_Char)0x69,  /* [1235] */
    (xdc_Char)0x73,  /* [1236] */
    (xdc_Char)0x61,  /* [1237] */
    (xdc_Char)0x62,  /* [1238] */
    (xdc_Char)0x6c,  /* [1239] */
    (xdc_Char)0x65,  /* [1240] */
    (xdc_Char)0x64,  /* [1241] */
    (xdc_Char)0x3a,  /* [1242] */
    (xdc_Char)0x20,  /* [1243] */
    (xdc_Char)0x43,  /* [1244] */
    (xdc_Char)0x61,  /* [1245] */
    (xdc_Char)0x6e,  /* [1246] */
    (xdc_Char)0x6e,  /* [1247] */
    (xdc_Char)0x6f,  /* [1248] */
    (xdc_Char)0x74,  /* [1249] */
    (xdc_Char)0x20,  /* [1250] */
    (xdc_Char)0x63,  /* [1251] */
    (xdc_Char)0x61,  /* [1252] */
    (xdc_Char)0x6c,  /* [1253] */
    (xdc_Char)0x6c,  /* [1254] */
    (xdc_Char)0x20,  /* [1255] */
    (xdc_Char)0x53,  /* [1256] */
    (xdc_Char)0x65,  /* [1257] */
    (xdc_Char)0x6d,  /* [1258] */
    (xdc_Char)0x61,  /* [1259] */
    (xdc_Char)0x70,  /* [1260] */
    (xdc_Char)0x68,  /* [1261] */
    (xdc_Char)0x6f,  /* [1262] */
    (xdc_Char)0x72,  /* [1263] */
    (xdc_Char)0x65,  /* [1264] */
    (xdc_Char)0x5f,  /* [1265] */
    (xdc_Char)0x70,  /* [1266] */
    (xdc_Char)0x65,  /* [1267] */
    (xdc_Char)0x6e,  /* [1268] */
    (xdc_Char)0x64,  /* [1269] */
    (xdc_Char)0x28,  /* [1270] */
    (xdc_Char)0x29,  /* [1271] */
    (xdc_Char)0x20,  /* [1272] */
    (xdc_Char)0x77,  /* [1273] */
    (xdc_Char)0x68,  /* [1274] */
    (xdc_Char)0x69,  /* [1275] */
    (xdc_Char)0x6c,  /* [1276] */
    (xdc_Char)0x65,  /* [1277] */
    (xdc_Char)0x20,  /* [1278] */
    (xdc_Char)0x74,  /* [1279] */
    (xdc_Char)0x68,  /* [1280] */
    (xdc_Char)0x65,  /* [1281] */
    (xdc_Char)0x20,  /* [1282] */
    (xdc_Char)0x54,  /* [1283] */
    (xdc_Char)0x61,  /* [1284] */
    (xdc_Char)0x73,  /* [1285] */
    (xdc_Char)0x6b,  /* [1286] */
    (xdc_Char)0x20,  /* [1287] */
    (xdc_Char)0x6f,  /* [1288] */
    (xdc_Char)0x72,  /* [1289] */
    (xdc_Char)0x20,  /* [1290] */
    (xdc_Char)0x53,  /* [1291] */
    (xdc_Char)0x77,  /* [1292] */
    (xdc_Char)0x69,  /* [1293] */
    (xdc_Char)0x20,  /* [1294] */
    (xdc_Char)0x73,  /* [1295] */
    (xdc_Char)0x63,  /* [1296] */
    (xdc_Char)0x68,  /* [1297] */
    (xdc_Char)0x65,  /* [1298] */
    (xdc_Char)0x64,  /* [1299] */
    (xdc_Char)0x75,  /* [1300] */
    (xdc_Char)0x6c,  /* [1301] */
    (xdc_Char)0x65,  /* [1302] */
    (xdc_Char)0x72,  /* [1303] */
    (xdc_Char)0x20,  /* [1304] */
    (xdc_Char)0x69,  /* [1305] */
    (xdc_Char)0x73,  /* [1306] */
    (xdc_Char)0x20,  /* [1307] */
    (xdc_Char)0x64,  /* [1308] */
    (xdc_Char)0x69,  /* [1309] */
    (xdc_Char)0x73,  /* [1310] */
    (xdc_Char)0x61,  /* [1311] */
    (xdc_Char)0x62,  /* [1312] */
    (xdc_Char)0x6c,  /* [1313] */
    (xdc_Char)0x65,  /* [1314] */
    (xdc_Char)0x64,  /* [1315] */
    (xdc_Char)0x2e,  /* [1316] */
    (xdc_Char)0x0,  /* [1317] */
    (xdc_Char)0x41,  /* [1318] */
    (xdc_Char)0x5f,  /* [1319] */
    (xdc_Char)0x73,  /* [1320] */
    (xdc_Char)0x77,  /* [1321] */
    (xdc_Char)0x69,  /* [1322] */
    (xdc_Char)0x44,  /* [1323] */
    (xdc_Char)0x69,  /* [1324] */
    (xdc_Char)0x73,  /* [1325] */
    (xdc_Char)0x61,  /* [1326] */
    (xdc_Char)0x62,  /* [1327] */
    (xdc_Char)0x6c,  /* [1328] */
    (xdc_Char)0x65,  /* [1329] */
    (xdc_Char)0x64,  /* [1330] */
    (xdc_Char)0x3a,  /* [1331] */
    (xdc_Char)0x20,  /* [1332] */
    (xdc_Char)0x43,  /* [1333] */
    (xdc_Char)0x61,  /* [1334] */
    (xdc_Char)0x6e,  /* [1335] */
    (xdc_Char)0x6e,  /* [1336] */
    (xdc_Char)0x6f,  /* [1337] */
    (xdc_Char)0x74,  /* [1338] */
    (xdc_Char)0x20,  /* [1339] */
    (xdc_Char)0x63,  /* [1340] */
    (xdc_Char)0x72,  /* [1341] */
    (xdc_Char)0x65,  /* [1342] */
    (xdc_Char)0x61,  /* [1343] */
    (xdc_Char)0x74,  /* [1344] */
    (xdc_Char)0x65,  /* [1345] */
    (xdc_Char)0x20,  /* [1346] */
    (xdc_Char)0x61,  /* [1347] */
    (xdc_Char)0x20,  /* [1348] */
    (xdc_Char)0x53,  /* [1349] */
    (xdc_Char)0x77,  /* [1350] */
    (xdc_Char)0x69,  /* [1351] */
    (xdc_Char)0x20,  /* [1352] */
    (xdc_Char)0x77,  /* [1353] */
    (xdc_Char)0x68,  /* [1354] */
    (xdc_Char)0x65,  /* [1355] */
    (xdc_Char)0x6e,  /* [1356] */
    (xdc_Char)0x20,  /* [1357] */
    (xdc_Char)0x53,  /* [1358] */
    (xdc_Char)0x77,  /* [1359] */
    (xdc_Char)0x69,  /* [1360] */
    (xdc_Char)0x20,  /* [1361] */
    (xdc_Char)0x69,  /* [1362] */
    (xdc_Char)0x73,  /* [1363] */
    (xdc_Char)0x20,  /* [1364] */
    (xdc_Char)0x64,  /* [1365] */
    (xdc_Char)0x69,  /* [1366] */
    (xdc_Char)0x73,  /* [1367] */
    (xdc_Char)0x61,  /* [1368] */
    (xdc_Char)0x62,  /* [1369] */
    (xdc_Char)0x6c,  /* [1370] */
    (xdc_Char)0x65,  /* [1371] */
    (xdc_Char)0x64,  /* [1372] */
    (xdc_Char)0x2e,  /* [1373] */
    (xdc_Char)0x0,  /* [1374] */
    (xdc_Char)0x41,  /* [1375] */
    (xdc_Char)0x5f,  /* [1376] */
    (xdc_Char)0x62,  /* [1377] */
    (xdc_Char)0x61,  /* [1378] */
    (xdc_Char)0x64,  /* [1379] */
    (xdc_Char)0x50,  /* [1380] */
    (xdc_Char)0x72,  /* [1381] */
    (xdc_Char)0x69,  /* [1382] */
    (xdc_Char)0x6f,  /* [1383] */
    (xdc_Char)0x72,  /* [1384] */
    (xdc_Char)0x69,  /* [1385] */
    (xdc_Char)0x74,  /* [1386] */
    (xdc_Char)0x79,  /* [1387] */
    (xdc_Char)0x3a,  /* [1388] */
    (xdc_Char)0x20,  /* [1389] */
    (xdc_Char)0x41,  /* [1390] */
    (xdc_Char)0x6e,  /* [1391] */
    (xdc_Char)0x20,  /* [1392] */
    (xdc_Char)0x69,  /* [1393] */
    (xdc_Char)0x6e,  /* [1394] */
    (xdc_Char)0x76,  /* [1395] */
    (xdc_Char)0x61,  /* [1396] */
    (xdc_Char)0x6c,  /* [1397] */
    (xdc_Char)0x69,  /* [1398] */
    (xdc_Char)0x64,  /* [1399] */
    (xdc_Char)0x20,  /* [1400] */
    (xdc_Char)0x53,  /* [1401] */
    (xdc_Char)0x77,  /* [1402] */
    (xdc_Char)0x69,  /* [1403] */
    (xdc_Char)0x20,  /* [1404] */
    (xdc_Char)0x70,  /* [1405] */
    (xdc_Char)0x72,  /* [1406] */
    (xdc_Char)0x69,  /* [1407] */
    (xdc_Char)0x6f,  /* [1408] */
    (xdc_Char)0x72,  /* [1409] */
    (xdc_Char)0x69,  /* [1410] */
    (xdc_Char)0x74,  /* [1411] */
    (xdc_Char)0x79,  /* [1412] */
    (xdc_Char)0x20,  /* [1413] */
    (xdc_Char)0x77,  /* [1414] */
    (xdc_Char)0x61,  /* [1415] */
    (xdc_Char)0x73,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x75,  /* [1418] */
    (xdc_Char)0x73,  /* [1419] */
    (xdc_Char)0x65,  /* [1420] */
    (xdc_Char)0x64,  /* [1421] */
    (xdc_Char)0x2e,  /* [1422] */
    (xdc_Char)0x0,  /* [1423] */
    (xdc_Char)0x41,  /* [1424] */
    (xdc_Char)0x5f,  /* [1425] */
    (xdc_Char)0x62,  /* [1426] */
    (xdc_Char)0x61,  /* [1427] */
    (xdc_Char)0x64,  /* [1428] */
    (xdc_Char)0x54,  /* [1429] */
    (xdc_Char)0x68,  /* [1430] */
    (xdc_Char)0x72,  /* [1431] */
    (xdc_Char)0x65,  /* [1432] */
    (xdc_Char)0x61,  /* [1433] */
    (xdc_Char)0x64,  /* [1434] */
    (xdc_Char)0x54,  /* [1435] */
    (xdc_Char)0x79,  /* [1436] */
    (xdc_Char)0x70,  /* [1437] */
    (xdc_Char)0x65,  /* [1438] */
    (xdc_Char)0x3a,  /* [1439] */
    (xdc_Char)0x20,  /* [1440] */
    (xdc_Char)0x43,  /* [1441] */
    (xdc_Char)0x61,  /* [1442] */
    (xdc_Char)0x6e,  /* [1443] */
    (xdc_Char)0x6e,  /* [1444] */
    (xdc_Char)0x6f,  /* [1445] */
    (xdc_Char)0x74,  /* [1446] */
    (xdc_Char)0x20,  /* [1447] */
    (xdc_Char)0x63,  /* [1448] */
    (xdc_Char)0x72,  /* [1449] */
    (xdc_Char)0x65,  /* [1450] */
    (xdc_Char)0x61,  /* [1451] */
    (xdc_Char)0x74,  /* [1452] */
    (xdc_Char)0x65,  /* [1453] */
    (xdc_Char)0x2f,  /* [1454] */
    (xdc_Char)0x64,  /* [1455] */
    (xdc_Char)0x65,  /* [1456] */
    (xdc_Char)0x6c,  /* [1457] */
    (xdc_Char)0x65,  /* [1458] */
    (xdc_Char)0x74,  /* [1459] */
    (xdc_Char)0x65,  /* [1460] */
    (xdc_Char)0x20,  /* [1461] */
    (xdc_Char)0x61,  /* [1462] */
    (xdc_Char)0x20,  /* [1463] */
    (xdc_Char)0x74,  /* [1464] */
    (xdc_Char)0x61,  /* [1465] */
    (xdc_Char)0x73,  /* [1466] */
    (xdc_Char)0x6b,  /* [1467] */
    (xdc_Char)0x20,  /* [1468] */
    (xdc_Char)0x66,  /* [1469] */
    (xdc_Char)0x72,  /* [1470] */
    (xdc_Char)0x6f,  /* [1471] */
    (xdc_Char)0x6d,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x48,  /* [1474] */
    (xdc_Char)0x77,  /* [1475] */
    (xdc_Char)0x69,  /* [1476] */
    (xdc_Char)0x20,  /* [1477] */
    (xdc_Char)0x6f,  /* [1478] */
    (xdc_Char)0x72,  /* [1479] */
    (xdc_Char)0x20,  /* [1480] */
    (xdc_Char)0x53,  /* [1481] */
    (xdc_Char)0x77,  /* [1482] */
    (xdc_Char)0x69,  /* [1483] */
    (xdc_Char)0x20,  /* [1484] */
    (xdc_Char)0x74,  /* [1485] */
    (xdc_Char)0x68,  /* [1486] */
    (xdc_Char)0x72,  /* [1487] */
    (xdc_Char)0x65,  /* [1488] */
    (xdc_Char)0x61,  /* [1489] */
    (xdc_Char)0x64,  /* [1490] */
    (xdc_Char)0x2e,  /* [1491] */
    (xdc_Char)0x0,  /* [1492] */
    (xdc_Char)0x41,  /* [1493] */
    (xdc_Char)0x5f,  /* [1494] */
    (xdc_Char)0x62,  /* [1495] */
    (xdc_Char)0x61,  /* [1496] */
    (xdc_Char)0x64,  /* [1497] */
    (xdc_Char)0x54,  /* [1498] */
    (xdc_Char)0x61,  /* [1499] */
    (xdc_Char)0x73,  /* [1500] */
    (xdc_Char)0x6b,  /* [1501] */
    (xdc_Char)0x53,  /* [1502] */
    (xdc_Char)0x74,  /* [1503] */
    (xdc_Char)0x61,  /* [1504] */
    (xdc_Char)0x74,  /* [1505] */
    (xdc_Char)0x65,  /* [1506] */
    (xdc_Char)0x3a,  /* [1507] */
    (xdc_Char)0x20,  /* [1508] */
    (xdc_Char)0x43,  /* [1509] */
    (xdc_Char)0x61,  /* [1510] */
    (xdc_Char)0x6e,  /* [1511] */
    (xdc_Char)0x27,  /* [1512] */
    (xdc_Char)0x74,  /* [1513] */
    (xdc_Char)0x20,  /* [1514] */
    (xdc_Char)0x64,  /* [1515] */
    (xdc_Char)0x65,  /* [1516] */
    (xdc_Char)0x6c,  /* [1517] */
    (xdc_Char)0x65,  /* [1518] */
    (xdc_Char)0x74,  /* [1519] */
    (xdc_Char)0x65,  /* [1520] */
    (xdc_Char)0x20,  /* [1521] */
    (xdc_Char)0x61,  /* [1522] */
    (xdc_Char)0x20,  /* [1523] */
    (xdc_Char)0x74,  /* [1524] */
    (xdc_Char)0x61,  /* [1525] */
    (xdc_Char)0x73,  /* [1526] */
    (xdc_Char)0x6b,  /* [1527] */
    (xdc_Char)0x20,  /* [1528] */
    (xdc_Char)0x69,  /* [1529] */
    (xdc_Char)0x6e,  /* [1530] */
    (xdc_Char)0x20,  /* [1531] */
    (xdc_Char)0x52,  /* [1532] */
    (xdc_Char)0x55,  /* [1533] */
    (xdc_Char)0x4e,  /* [1534] */
    (xdc_Char)0x4e,  /* [1535] */
    (xdc_Char)0x49,  /* [1536] */
    (xdc_Char)0x4e,  /* [1537] */
    (xdc_Char)0x47,  /* [1538] */
    (xdc_Char)0x20,  /* [1539] */
    (xdc_Char)0x73,  /* [1540] */
    (xdc_Char)0x74,  /* [1541] */
    (xdc_Char)0x61,  /* [1542] */
    (xdc_Char)0x74,  /* [1543] */
    (xdc_Char)0x65,  /* [1544] */
    (xdc_Char)0x2e,  /* [1545] */
    (xdc_Char)0x0,  /* [1546] */
    (xdc_Char)0x41,  /* [1547] */
    (xdc_Char)0x5f,  /* [1548] */
    (xdc_Char)0x6e,  /* [1549] */
    (xdc_Char)0x6f,  /* [1550] */
    (xdc_Char)0x50,  /* [1551] */
    (xdc_Char)0x65,  /* [1552] */
    (xdc_Char)0x6e,  /* [1553] */
    (xdc_Char)0x64,  /* [1554] */
    (xdc_Char)0x45,  /* [1555] */
    (xdc_Char)0x6c,  /* [1556] */
    (xdc_Char)0x65,  /* [1557] */
    (xdc_Char)0x6d,  /* [1558] */
    (xdc_Char)0x3a,  /* [1559] */
    (xdc_Char)0x20,  /* [1560] */
    (xdc_Char)0x4e,  /* [1561] */
    (xdc_Char)0x6f,  /* [1562] */
    (xdc_Char)0x74,  /* [1563] */
    (xdc_Char)0x20,  /* [1564] */
    (xdc_Char)0x65,  /* [1565] */
    (xdc_Char)0x6e,  /* [1566] */
    (xdc_Char)0x6f,  /* [1567] */
    (xdc_Char)0x75,  /* [1568] */
    (xdc_Char)0x67,  /* [1569] */
    (xdc_Char)0x68,  /* [1570] */
    (xdc_Char)0x20,  /* [1571] */
    (xdc_Char)0x69,  /* [1572] */
    (xdc_Char)0x6e,  /* [1573] */
    (xdc_Char)0x66,  /* [1574] */
    (xdc_Char)0x6f,  /* [1575] */
    (xdc_Char)0x20,  /* [1576] */
    (xdc_Char)0x74,  /* [1577] */
    (xdc_Char)0x6f,  /* [1578] */
    (xdc_Char)0x20,  /* [1579] */
    (xdc_Char)0x64,  /* [1580] */
    (xdc_Char)0x65,  /* [1581] */
    (xdc_Char)0x6c,  /* [1582] */
    (xdc_Char)0x65,  /* [1583] */
    (xdc_Char)0x74,  /* [1584] */
    (xdc_Char)0x65,  /* [1585] */
    (xdc_Char)0x20,  /* [1586] */
    (xdc_Char)0x42,  /* [1587] */
    (xdc_Char)0x4c,  /* [1588] */
    (xdc_Char)0x4f,  /* [1589] */
    (xdc_Char)0x43,  /* [1590] */
    (xdc_Char)0x4b,  /* [1591] */
    (xdc_Char)0x45,  /* [1592] */
    (xdc_Char)0x44,  /* [1593] */
    (xdc_Char)0x20,  /* [1594] */
    (xdc_Char)0x74,  /* [1595] */
    (xdc_Char)0x61,  /* [1596] */
    (xdc_Char)0x73,  /* [1597] */
    (xdc_Char)0x6b,  /* [1598] */
    (xdc_Char)0x2e,  /* [1599] */
    (xdc_Char)0x0,  /* [1600] */
    (xdc_Char)0x41,  /* [1601] */
    (xdc_Char)0x5f,  /* [1602] */
    (xdc_Char)0x74,  /* [1603] */
    (xdc_Char)0x61,  /* [1604] */
    (xdc_Char)0x73,  /* [1605] */
    (xdc_Char)0x6b,  /* [1606] */
    (xdc_Char)0x44,  /* [1607] */
    (xdc_Char)0x69,  /* [1608] */
    (xdc_Char)0x73,  /* [1609] */
    (xdc_Char)0x61,  /* [1610] */
    (xdc_Char)0x62,  /* [1611] */
    (xdc_Char)0x6c,  /* [1612] */
    (xdc_Char)0x65,  /* [1613] */
    (xdc_Char)0x64,  /* [1614] */
    (xdc_Char)0x3a,  /* [1615] */
    (xdc_Char)0x20,  /* [1616] */
    (xdc_Char)0x43,  /* [1617] */
    (xdc_Char)0x61,  /* [1618] */
    (xdc_Char)0x6e,  /* [1619] */
    (xdc_Char)0x6e,  /* [1620] */
    (xdc_Char)0x6f,  /* [1621] */
    (xdc_Char)0x74,  /* [1622] */
    (xdc_Char)0x20,  /* [1623] */
    (xdc_Char)0x63,  /* [1624] */
    (xdc_Char)0x72,  /* [1625] */
    (xdc_Char)0x65,  /* [1626] */
    (xdc_Char)0x61,  /* [1627] */
    (xdc_Char)0x74,  /* [1628] */
    (xdc_Char)0x65,  /* [1629] */
    (xdc_Char)0x20,  /* [1630] */
    (xdc_Char)0x61,  /* [1631] */
    (xdc_Char)0x20,  /* [1632] */
    (xdc_Char)0x74,  /* [1633] */
    (xdc_Char)0x61,  /* [1634] */
    (xdc_Char)0x73,  /* [1635] */
    (xdc_Char)0x6b,  /* [1636] */
    (xdc_Char)0x20,  /* [1637] */
    (xdc_Char)0x77,  /* [1638] */
    (xdc_Char)0x68,  /* [1639] */
    (xdc_Char)0x65,  /* [1640] */
    (xdc_Char)0x6e,  /* [1641] */
    (xdc_Char)0x20,  /* [1642] */
    (xdc_Char)0x74,  /* [1643] */
    (xdc_Char)0x61,  /* [1644] */
    (xdc_Char)0x73,  /* [1645] */
    (xdc_Char)0x6b,  /* [1646] */
    (xdc_Char)0x69,  /* [1647] */
    (xdc_Char)0x6e,  /* [1648] */
    (xdc_Char)0x67,  /* [1649] */
    (xdc_Char)0x20,  /* [1650] */
    (xdc_Char)0x69,  /* [1651] */
    (xdc_Char)0x73,  /* [1652] */
    (xdc_Char)0x20,  /* [1653] */
    (xdc_Char)0x64,  /* [1654] */
    (xdc_Char)0x69,  /* [1655] */
    (xdc_Char)0x73,  /* [1656] */
    (xdc_Char)0x61,  /* [1657] */
    (xdc_Char)0x62,  /* [1658] */
    (xdc_Char)0x6c,  /* [1659] */
    (xdc_Char)0x65,  /* [1660] */
    (xdc_Char)0x64,  /* [1661] */
    (xdc_Char)0x2e,  /* [1662] */
    (xdc_Char)0x0,  /* [1663] */
    (xdc_Char)0x41,  /* [1664] */
    (xdc_Char)0x5f,  /* [1665] */
    (xdc_Char)0x62,  /* [1666] */
    (xdc_Char)0x61,  /* [1667] */
    (xdc_Char)0x64,  /* [1668] */
    (xdc_Char)0x50,  /* [1669] */
    (xdc_Char)0x72,  /* [1670] */
    (xdc_Char)0x69,  /* [1671] */
    (xdc_Char)0x6f,  /* [1672] */
    (xdc_Char)0x72,  /* [1673] */
    (xdc_Char)0x69,  /* [1674] */
    (xdc_Char)0x74,  /* [1675] */
    (xdc_Char)0x79,  /* [1676] */
    (xdc_Char)0x3a,  /* [1677] */
    (xdc_Char)0x20,  /* [1678] */
    (xdc_Char)0x41,  /* [1679] */
    (xdc_Char)0x6e,  /* [1680] */
    (xdc_Char)0x20,  /* [1681] */
    (xdc_Char)0x69,  /* [1682] */
    (xdc_Char)0x6e,  /* [1683] */
    (xdc_Char)0x76,  /* [1684] */
    (xdc_Char)0x61,  /* [1685] */
    (xdc_Char)0x6c,  /* [1686] */
    (xdc_Char)0x69,  /* [1687] */
    (xdc_Char)0x64,  /* [1688] */
    (xdc_Char)0x20,  /* [1689] */
    (xdc_Char)0x74,  /* [1690] */
    (xdc_Char)0x61,  /* [1691] */
    (xdc_Char)0x73,  /* [1692] */
    (xdc_Char)0x6b,  /* [1693] */
    (xdc_Char)0x20,  /* [1694] */
    (xdc_Char)0x70,  /* [1695] */
    (xdc_Char)0x72,  /* [1696] */
    (xdc_Char)0x69,  /* [1697] */
    (xdc_Char)0x6f,  /* [1698] */
    (xdc_Char)0x72,  /* [1699] */
    (xdc_Char)0x69,  /* [1700] */
    (xdc_Char)0x74,  /* [1701] */
    (xdc_Char)0x79,  /* [1702] */
    (xdc_Char)0x20,  /* [1703] */
    (xdc_Char)0x77,  /* [1704] */
    (xdc_Char)0x61,  /* [1705] */
    (xdc_Char)0x73,  /* [1706] */
    (xdc_Char)0x20,  /* [1707] */
    (xdc_Char)0x75,  /* [1708] */
    (xdc_Char)0x73,  /* [1709] */
    (xdc_Char)0x65,  /* [1710] */
    (xdc_Char)0x64,  /* [1711] */
    (xdc_Char)0x2e,  /* [1712] */
    (xdc_Char)0x0,  /* [1713] */
    (xdc_Char)0x41,  /* [1714] */
    (xdc_Char)0x5f,  /* [1715] */
    (xdc_Char)0x62,  /* [1716] */
    (xdc_Char)0x61,  /* [1717] */
    (xdc_Char)0x64,  /* [1718] */
    (xdc_Char)0x54,  /* [1719] */
    (xdc_Char)0x69,  /* [1720] */
    (xdc_Char)0x6d,  /* [1721] */
    (xdc_Char)0x65,  /* [1722] */
    (xdc_Char)0x6f,  /* [1723] */
    (xdc_Char)0x75,  /* [1724] */
    (xdc_Char)0x74,  /* [1725] */
    (xdc_Char)0x3a,  /* [1726] */
    (xdc_Char)0x20,  /* [1727] */
    (xdc_Char)0x43,  /* [1728] */
    (xdc_Char)0x61,  /* [1729] */
    (xdc_Char)0x6e,  /* [1730] */
    (xdc_Char)0x27,  /* [1731] */
    (xdc_Char)0x74,  /* [1732] */
    (xdc_Char)0x20,  /* [1733] */
    (xdc_Char)0x73,  /* [1734] */
    (xdc_Char)0x6c,  /* [1735] */
    (xdc_Char)0x65,  /* [1736] */
    (xdc_Char)0x65,  /* [1737] */
    (xdc_Char)0x70,  /* [1738] */
    (xdc_Char)0x20,  /* [1739] */
    (xdc_Char)0x46,  /* [1740] */
    (xdc_Char)0x4f,  /* [1741] */
    (xdc_Char)0x52,  /* [1742] */
    (xdc_Char)0x45,  /* [1743] */
    (xdc_Char)0x56,  /* [1744] */
    (xdc_Char)0x45,  /* [1745] */
    (xdc_Char)0x52,  /* [1746] */
    (xdc_Char)0x2e,  /* [1747] */
    (xdc_Char)0x0,  /* [1748] */
    (xdc_Char)0x41,  /* [1749] */
    (xdc_Char)0x5f,  /* [1750] */
    (xdc_Char)0x62,  /* [1751] */
    (xdc_Char)0x61,  /* [1752] */
    (xdc_Char)0x64,  /* [1753] */
    (xdc_Char)0x41,  /* [1754] */
    (xdc_Char)0x66,  /* [1755] */
    (xdc_Char)0x66,  /* [1756] */
    (xdc_Char)0x69,  /* [1757] */
    (xdc_Char)0x6e,  /* [1758] */
    (xdc_Char)0x69,  /* [1759] */
    (xdc_Char)0x74,  /* [1760] */
    (xdc_Char)0x79,  /* [1761] */
    (xdc_Char)0x3a,  /* [1762] */
    (xdc_Char)0x20,  /* [1763] */
    (xdc_Char)0x49,  /* [1764] */
    (xdc_Char)0x6e,  /* [1765] */
    (xdc_Char)0x76,  /* [1766] */
    (xdc_Char)0x61,  /* [1767] */
    (xdc_Char)0x6c,  /* [1768] */
    (xdc_Char)0x69,  /* [1769] */
    (xdc_Char)0x64,  /* [1770] */
    (xdc_Char)0x20,  /* [1771] */
    (xdc_Char)0x61,  /* [1772] */
    (xdc_Char)0x66,  /* [1773] */
    (xdc_Char)0x66,  /* [1774] */
    (xdc_Char)0x69,  /* [1775] */
    (xdc_Char)0x6e,  /* [1776] */
    (xdc_Char)0x69,  /* [1777] */
    (xdc_Char)0x74,  /* [1778] */
    (xdc_Char)0x79,  /* [1779] */
    (xdc_Char)0x2e,  /* [1780] */
    (xdc_Char)0x0,  /* [1781] */
    (xdc_Char)0x41,  /* [1782] */
    (xdc_Char)0x5f,  /* [1783] */
    (xdc_Char)0x73,  /* [1784] */
    (xdc_Char)0x6c,  /* [1785] */
    (xdc_Char)0x65,  /* [1786] */
    (xdc_Char)0x65,  /* [1787] */
    (xdc_Char)0x70,  /* [1788] */
    (xdc_Char)0x54,  /* [1789] */
    (xdc_Char)0x61,  /* [1790] */
    (xdc_Char)0x73,  /* [1791] */
    (xdc_Char)0x6b,  /* [1792] */
    (xdc_Char)0x44,  /* [1793] */
    (xdc_Char)0x69,  /* [1794] */
    (xdc_Char)0x73,  /* [1795] */
    (xdc_Char)0x61,  /* [1796] */
    (xdc_Char)0x62,  /* [1797] */
    (xdc_Char)0x6c,  /* [1798] */
    (xdc_Char)0x65,  /* [1799] */
    (xdc_Char)0x64,  /* [1800] */
    (xdc_Char)0x3a,  /* [1801] */
    (xdc_Char)0x20,  /* [1802] */
    (xdc_Char)0x43,  /* [1803] */
    (xdc_Char)0x61,  /* [1804] */
    (xdc_Char)0x6e,  /* [1805] */
    (xdc_Char)0x6e,  /* [1806] */
    (xdc_Char)0x6f,  /* [1807] */
    (xdc_Char)0x74,  /* [1808] */
    (xdc_Char)0x20,  /* [1809] */
    (xdc_Char)0x63,  /* [1810] */
    (xdc_Char)0x61,  /* [1811] */
    (xdc_Char)0x6c,  /* [1812] */
    (xdc_Char)0x6c,  /* [1813] */
    (xdc_Char)0x20,  /* [1814] */
    (xdc_Char)0x54,  /* [1815] */
    (xdc_Char)0x61,  /* [1816] */
    (xdc_Char)0x73,  /* [1817] */
    (xdc_Char)0x6b,  /* [1818] */
    (xdc_Char)0x5f,  /* [1819] */
    (xdc_Char)0x73,  /* [1820] */
    (xdc_Char)0x6c,  /* [1821] */
    (xdc_Char)0x65,  /* [1822] */
    (xdc_Char)0x65,  /* [1823] */
    (xdc_Char)0x70,  /* [1824] */
    (xdc_Char)0x28,  /* [1825] */
    (xdc_Char)0x29,  /* [1826] */
    (xdc_Char)0x20,  /* [1827] */
    (xdc_Char)0x77,  /* [1828] */
    (xdc_Char)0x68,  /* [1829] */
    (xdc_Char)0x69,  /* [1830] */
    (xdc_Char)0x6c,  /* [1831] */
    (xdc_Char)0x65,  /* [1832] */
    (xdc_Char)0x20,  /* [1833] */
    (xdc_Char)0x74,  /* [1834] */
    (xdc_Char)0x68,  /* [1835] */
    (xdc_Char)0x65,  /* [1836] */
    (xdc_Char)0x20,  /* [1837] */
    (xdc_Char)0x54,  /* [1838] */
    (xdc_Char)0x61,  /* [1839] */
    (xdc_Char)0x73,  /* [1840] */
    (xdc_Char)0x6b,  /* [1841] */
    (xdc_Char)0x20,  /* [1842] */
    (xdc_Char)0x73,  /* [1843] */
    (xdc_Char)0x63,  /* [1844] */
    (xdc_Char)0x68,  /* [1845] */
    (xdc_Char)0x65,  /* [1846] */
    (xdc_Char)0x64,  /* [1847] */
    (xdc_Char)0x75,  /* [1848] */
    (xdc_Char)0x6c,  /* [1849] */
    (xdc_Char)0x65,  /* [1850] */
    (xdc_Char)0x72,  /* [1851] */
    (xdc_Char)0x20,  /* [1852] */
    (xdc_Char)0x69,  /* [1853] */
    (xdc_Char)0x73,  /* [1854] */
    (xdc_Char)0x20,  /* [1855] */
    (xdc_Char)0x64,  /* [1856] */
    (xdc_Char)0x69,  /* [1857] */
    (xdc_Char)0x73,  /* [1858] */
    (xdc_Char)0x61,  /* [1859] */
    (xdc_Char)0x62,  /* [1860] */
    (xdc_Char)0x6c,  /* [1861] */
    (xdc_Char)0x65,  /* [1862] */
    (xdc_Char)0x64,  /* [1863] */
    (xdc_Char)0x2e,  /* [1864] */
    (xdc_Char)0x0,  /* [1865] */
    (xdc_Char)0x41,  /* [1866] */
    (xdc_Char)0x5f,  /* [1867] */
    (xdc_Char)0x69,  /* [1868] */
    (xdc_Char)0x6e,  /* [1869] */
    (xdc_Char)0x76,  /* [1870] */
    (xdc_Char)0x61,  /* [1871] */
    (xdc_Char)0x6c,  /* [1872] */
    (xdc_Char)0x69,  /* [1873] */
    (xdc_Char)0x64,  /* [1874] */
    (xdc_Char)0x43,  /* [1875] */
    (xdc_Char)0x6f,  /* [1876] */
    (xdc_Char)0x72,  /* [1877] */
    (xdc_Char)0x65,  /* [1878] */
    (xdc_Char)0x49,  /* [1879] */
    (xdc_Char)0x64,  /* [1880] */
    (xdc_Char)0x3a,  /* [1881] */
    (xdc_Char)0x20,  /* [1882] */
    (xdc_Char)0x43,  /* [1883] */
    (xdc_Char)0x61,  /* [1884] */
    (xdc_Char)0x6e,  /* [1885] */
    (xdc_Char)0x6e,  /* [1886] */
    (xdc_Char)0x6f,  /* [1887] */
    (xdc_Char)0x74,  /* [1888] */
    (xdc_Char)0x20,  /* [1889] */
    (xdc_Char)0x70,  /* [1890] */
    (xdc_Char)0x61,  /* [1891] */
    (xdc_Char)0x73,  /* [1892] */
    (xdc_Char)0x73,  /* [1893] */
    (xdc_Char)0x20,  /* [1894] */
    (xdc_Char)0x61,  /* [1895] */
    (xdc_Char)0x20,  /* [1896] */
    (xdc_Char)0x6e,  /* [1897] */
    (xdc_Char)0x6f,  /* [1898] */
    (xdc_Char)0x6e,  /* [1899] */
    (xdc_Char)0x2d,  /* [1900] */
    (xdc_Char)0x7a,  /* [1901] */
    (xdc_Char)0x65,  /* [1902] */
    (xdc_Char)0x72,  /* [1903] */
    (xdc_Char)0x6f,  /* [1904] */
    (xdc_Char)0x20,  /* [1905] */
    (xdc_Char)0x43,  /* [1906] */
    (xdc_Char)0x6f,  /* [1907] */
    (xdc_Char)0x72,  /* [1908] */
    (xdc_Char)0x65,  /* [1909] */
    (xdc_Char)0x49,  /* [1910] */
    (xdc_Char)0x64,  /* [1911] */
    (xdc_Char)0x20,  /* [1912] */
    (xdc_Char)0x69,  /* [1913] */
    (xdc_Char)0x6e,  /* [1914] */
    (xdc_Char)0x20,  /* [1915] */
    (xdc_Char)0x61,  /* [1916] */
    (xdc_Char)0x20,  /* [1917] */
    (xdc_Char)0x6e,  /* [1918] */
    (xdc_Char)0x6f,  /* [1919] */
    (xdc_Char)0x6e,  /* [1920] */
    (xdc_Char)0x2d,  /* [1921] */
    (xdc_Char)0x53,  /* [1922] */
    (xdc_Char)0x4d,  /* [1923] */
    (xdc_Char)0x50,  /* [1924] */
    (xdc_Char)0x20,  /* [1925] */
    (xdc_Char)0x61,  /* [1926] */
    (xdc_Char)0x70,  /* [1927] */
    (xdc_Char)0x70,  /* [1928] */
    (xdc_Char)0x6c,  /* [1929] */
    (xdc_Char)0x69,  /* [1930] */
    (xdc_Char)0x63,  /* [1931] */
    (xdc_Char)0x61,  /* [1932] */
    (xdc_Char)0x74,  /* [1933] */
    (xdc_Char)0x69,  /* [1934] */
    (xdc_Char)0x6f,  /* [1935] */
    (xdc_Char)0x6e,  /* [1936] */
    (xdc_Char)0x2e,  /* [1937] */
    (xdc_Char)0x0,  /* [1938] */
    (xdc_Char)0x41,  /* [1939] */
    (xdc_Char)0x5f,  /* [1940] */
    (xdc_Char)0x75,  /* [1941] */
    (xdc_Char)0x6e,  /* [1942] */
    (xdc_Char)0x73,  /* [1943] */
    (xdc_Char)0x75,  /* [1944] */
    (xdc_Char)0x70,  /* [1945] */
    (xdc_Char)0x70,  /* [1946] */
    (xdc_Char)0x6f,  /* [1947] */
    (xdc_Char)0x72,  /* [1948] */
    (xdc_Char)0x74,  /* [1949] */
    (xdc_Char)0x65,  /* [1950] */
    (xdc_Char)0x64,  /* [1951] */
    (xdc_Char)0x4d,  /* [1952] */
    (xdc_Char)0x61,  /* [1953] */
    (xdc_Char)0x73,  /* [1954] */
    (xdc_Char)0x6b,  /* [1955] */
    (xdc_Char)0x69,  /* [1956] */
    (xdc_Char)0x6e,  /* [1957] */
    (xdc_Char)0x67,  /* [1958] */
    (xdc_Char)0x4f,  /* [1959] */
    (xdc_Char)0x70,  /* [1960] */
    (xdc_Char)0x74,  /* [1961] */
    (xdc_Char)0x69,  /* [1962] */
    (xdc_Char)0x6f,  /* [1963] */
    (xdc_Char)0x6e,  /* [1964] */
    (xdc_Char)0x3a,  /* [1965] */
    (xdc_Char)0x20,  /* [1966] */
    (xdc_Char)0x75,  /* [1967] */
    (xdc_Char)0x6e,  /* [1968] */
    (xdc_Char)0x73,  /* [1969] */
    (xdc_Char)0x75,  /* [1970] */
    (xdc_Char)0x70,  /* [1971] */
    (xdc_Char)0x70,  /* [1972] */
    (xdc_Char)0x6f,  /* [1973] */
    (xdc_Char)0x72,  /* [1974] */
    (xdc_Char)0x74,  /* [1975] */
    (xdc_Char)0x65,  /* [1976] */
    (xdc_Char)0x64,  /* [1977] */
    (xdc_Char)0x20,  /* [1978] */
    (xdc_Char)0x6d,  /* [1979] */
    (xdc_Char)0x61,  /* [1980] */
    (xdc_Char)0x73,  /* [1981] */
    (xdc_Char)0x6b,  /* [1982] */
    (xdc_Char)0x53,  /* [1983] */
    (xdc_Char)0x65,  /* [1984] */
    (xdc_Char)0x74,  /* [1985] */
    (xdc_Char)0x74,  /* [1986] */
    (xdc_Char)0x69,  /* [1987] */
    (xdc_Char)0x6e,  /* [1988] */
    (xdc_Char)0x67,  /* [1989] */
    (xdc_Char)0x2e,  /* [1990] */
    (xdc_Char)0x0,  /* [1991] */
    (xdc_Char)0x41,  /* [1992] */
    (xdc_Char)0x5f,  /* [1993] */
    (xdc_Char)0x69,  /* [1994] */
    (xdc_Char)0x70,  /* [1995] */
    (xdc_Char)0x63,  /* [1996] */
    (xdc_Char)0x46,  /* [1997] */
    (xdc_Char)0x61,  /* [1998] */
    (xdc_Char)0x69,  /* [1999] */
    (xdc_Char)0x6c,  /* [2000] */
    (xdc_Char)0x65,  /* [2001] */
    (xdc_Char)0x64,  /* [2002] */
    (xdc_Char)0x3a,  /* [2003] */
    (xdc_Char)0x20,  /* [2004] */
    (xdc_Char)0x55,  /* [2005] */
    (xdc_Char)0x6e,  /* [2006] */
    (xdc_Char)0x65,  /* [2007] */
    (xdc_Char)0x78,  /* [2008] */
    (xdc_Char)0x70,  /* [2009] */
    (xdc_Char)0x65,  /* [2010] */
    (xdc_Char)0x63,  /* [2011] */
    (xdc_Char)0x74,  /* [2012] */
    (xdc_Char)0x65,  /* [2013] */
    (xdc_Char)0x64,  /* [2014] */
    (xdc_Char)0x20,  /* [2015] */
    (xdc_Char)0x4d,  /* [2016] */
    (xdc_Char)0x65,  /* [2017] */
    (xdc_Char)0x73,  /* [2018] */
    (xdc_Char)0x73,  /* [2019] */
    (xdc_Char)0x61,  /* [2020] */
    (xdc_Char)0x67,  /* [2021] */
    (xdc_Char)0x65,  /* [2022] */
    (xdc_Char)0x51,  /* [2023] */
    (xdc_Char)0x20,  /* [2024] */
    (xdc_Char)0x66,  /* [2025] */
    (xdc_Char)0x61,  /* [2026] */
    (xdc_Char)0x69,  /* [2027] */
    (xdc_Char)0x6c,  /* [2028] */
    (xdc_Char)0x65,  /* [2029] */
    (xdc_Char)0x64,  /* [2030] */
    (xdc_Char)0x0,  /* [2031] */
    (xdc_Char)0x41,  /* [2032] */
    (xdc_Char)0x5f,  /* [2033] */
    (xdc_Char)0x69,  /* [2034] */
    (xdc_Char)0x6e,  /* [2035] */
    (xdc_Char)0x76,  /* [2036] */
    (xdc_Char)0x61,  /* [2037] */
    (xdc_Char)0x6c,  /* [2038] */
    (xdc_Char)0x69,  /* [2039] */
    (xdc_Char)0x64,  /* [2040] */
    (xdc_Char)0x48,  /* [2041] */
    (xdc_Char)0x64,  /* [2042] */
    (xdc_Char)0x72,  /* [2043] */
    (xdc_Char)0x54,  /* [2044] */
    (xdc_Char)0x79,  /* [2045] */
    (xdc_Char)0x70,  /* [2046] */
    (xdc_Char)0x65,  /* [2047] */
    (xdc_Char)0x3a,  /* [2048] */
    (xdc_Char)0x20,  /* [2049] */
    (xdc_Char)0x49,  /* [2050] */
    (xdc_Char)0x6e,  /* [2051] */
    (xdc_Char)0x76,  /* [2052] */
    (xdc_Char)0x61,  /* [2053] */
    (xdc_Char)0x6c,  /* [2054] */
    (xdc_Char)0x69,  /* [2055] */
    (xdc_Char)0x64,  /* [2056] */
    (xdc_Char)0x20,  /* [2057] */
    (xdc_Char)0x48,  /* [2058] */
    (xdc_Char)0x64,  /* [2059] */
    (xdc_Char)0x72,  /* [2060] */
    (xdc_Char)0x54,  /* [2061] */
    (xdc_Char)0x79,  /* [2062] */
    (xdc_Char)0x70,  /* [2063] */
    (xdc_Char)0x65,  /* [2064] */
    (xdc_Char)0x20,  /* [2065] */
    (xdc_Char)0x73,  /* [2066] */
    (xdc_Char)0x70,  /* [2067] */
    (xdc_Char)0x65,  /* [2068] */
    (xdc_Char)0x63,  /* [2069] */
    (xdc_Char)0x69,  /* [2070] */
    (xdc_Char)0x66,  /* [2071] */
    (xdc_Char)0x69,  /* [2072] */
    (xdc_Char)0x65,  /* [2073] */
    (xdc_Char)0x64,  /* [2074] */
    (xdc_Char)0x0,  /* [2075] */
    (xdc_Char)0x41,  /* [2076] */
    (xdc_Char)0x5f,  /* [2077] */
    (xdc_Char)0x69,  /* [2078] */
    (xdc_Char)0x6e,  /* [2079] */
    (xdc_Char)0x76,  /* [2080] */
    (xdc_Char)0x61,  /* [2081] */
    (xdc_Char)0x6c,  /* [2082] */
    (xdc_Char)0x69,  /* [2083] */
    (xdc_Char)0x64,  /* [2084] */
    (xdc_Char)0x53,  /* [2085] */
    (xdc_Char)0x65,  /* [2086] */
    (xdc_Char)0x72,  /* [2087] */
    (xdc_Char)0x76,  /* [2088] */
    (xdc_Char)0x69,  /* [2089] */
    (xdc_Char)0x63,  /* [2090] */
    (xdc_Char)0x65,  /* [2091] */
    (xdc_Char)0x49,  /* [2092] */
    (xdc_Char)0x64,  /* [2093] */
    (xdc_Char)0x3a,  /* [2094] */
    (xdc_Char)0x20,  /* [2095] */
    (xdc_Char)0x53,  /* [2096] */
    (xdc_Char)0x65,  /* [2097] */
    (xdc_Char)0x72,  /* [2098] */
    (xdc_Char)0x76,  /* [2099] */
    (xdc_Char)0x69,  /* [2100] */
    (xdc_Char)0x63,  /* [2101] */
    (xdc_Char)0x65,  /* [2102] */
    (xdc_Char)0x49,  /* [2103] */
    (xdc_Char)0x64,  /* [2104] */
    (xdc_Char)0x20,  /* [2105] */
    (xdc_Char)0x6f,  /* [2106] */
    (xdc_Char)0x75,  /* [2107] */
    (xdc_Char)0x74,  /* [2108] */
    (xdc_Char)0x20,  /* [2109] */
    (xdc_Char)0x6f,  /* [2110] */
    (xdc_Char)0x66,  /* [2111] */
    (xdc_Char)0x20,  /* [2112] */
    (xdc_Char)0x72,  /* [2113] */
    (xdc_Char)0x61,  /* [2114] */
    (xdc_Char)0x6e,  /* [2115] */
    (xdc_Char)0x67,  /* [2116] */
    (xdc_Char)0x65,  /* [2117] */
    (xdc_Char)0x0,  /* [2118] */
    (xdc_Char)0x41,  /* [2119] */
    (xdc_Char)0x5f,  /* [2120] */
    (xdc_Char)0x69,  /* [2121] */
    (xdc_Char)0x6e,  /* [2122] */
    (xdc_Char)0x76,  /* [2123] */
    (xdc_Char)0x61,  /* [2124] */
    (xdc_Char)0x6c,  /* [2125] */
    (xdc_Char)0x69,  /* [2126] */
    (xdc_Char)0x64,  /* [2127] */
    (xdc_Char)0x50,  /* [2128] */
    (xdc_Char)0x72,  /* [2129] */
    (xdc_Char)0x6f,  /* [2130] */
    (xdc_Char)0x63,  /* [2131] */
    (xdc_Char)0x65,  /* [2132] */
    (xdc_Char)0x73,  /* [2133] */
    (xdc_Char)0x73,  /* [2134] */
    (xdc_Char)0x43,  /* [2135] */
    (xdc_Char)0x61,  /* [2136] */
    (xdc_Char)0x6c,  /* [2137] */
    (xdc_Char)0x6c,  /* [2138] */
    (xdc_Char)0x62,  /* [2139] */
    (xdc_Char)0x61,  /* [2140] */
    (xdc_Char)0x63,  /* [2141] */
    (xdc_Char)0x6b,  /* [2142] */
    (xdc_Char)0x46,  /* [2143] */
    (xdc_Char)0x78,  /* [2144] */
    (xdc_Char)0x6e,  /* [2145] */
    (xdc_Char)0x3a,  /* [2146] */
    (xdc_Char)0x20,  /* [2147] */
    (xdc_Char)0x43,  /* [2148] */
    (xdc_Char)0x61,  /* [2149] */
    (xdc_Char)0x6c,  /* [2150] */
    (xdc_Char)0x6c,  /* [2151] */
    (xdc_Char)0x62,  /* [2152] */
    (xdc_Char)0x61,  /* [2153] */
    (xdc_Char)0x63,  /* [2154] */
    (xdc_Char)0x6b,  /* [2155] */
    (xdc_Char)0x20,  /* [2156] */
    (xdc_Char)0x63,  /* [2157] */
    (xdc_Char)0x61,  /* [2158] */
    (xdc_Char)0x6e,  /* [2159] */
    (xdc_Char)0x6e,  /* [2160] */
    (xdc_Char)0x6f,  /* [2161] */
    (xdc_Char)0x74,  /* [2162] */
    (xdc_Char)0x20,  /* [2163] */
    (xdc_Char)0x62,  /* [2164] */
    (xdc_Char)0x65,  /* [2165] */
    (xdc_Char)0x20,  /* [2166] */
    (xdc_Char)0x4e,  /* [2167] */
    (xdc_Char)0x55,  /* [2168] */
    (xdc_Char)0x4c,  /* [2169] */
    (xdc_Char)0x4c,  /* [2170] */
    (xdc_Char)0x0,  /* [2171] */
    (xdc_Char)0x41,  /* [2172] */
    (xdc_Char)0x5f,  /* [2173] */
    (xdc_Char)0x7a,  /* [2174] */
    (xdc_Char)0x65,  /* [2175] */
    (xdc_Char)0x72,  /* [2176] */
    (xdc_Char)0x6f,  /* [2177] */
    (xdc_Char)0x54,  /* [2178] */
    (xdc_Char)0x69,  /* [2179] */
    (xdc_Char)0x6d,  /* [2180] */
    (xdc_Char)0x65,  /* [2181] */
    (xdc_Char)0x6f,  /* [2182] */
    (xdc_Char)0x75,  /* [2183] */
    (xdc_Char)0x74,  /* [2184] */
    (xdc_Char)0x3a,  /* [2185] */
    (xdc_Char)0x20,  /* [2186] */
    (xdc_Char)0x54,  /* [2187] */
    (xdc_Char)0x69,  /* [2188] */
    (xdc_Char)0x6d,  /* [2189] */
    (xdc_Char)0x65,  /* [2190] */
    (xdc_Char)0x6f,  /* [2191] */
    (xdc_Char)0x75,  /* [2192] */
    (xdc_Char)0x74,  /* [2193] */
    (xdc_Char)0x20,  /* [2194] */
    (xdc_Char)0x76,  /* [2195] */
    (xdc_Char)0x61,  /* [2196] */
    (xdc_Char)0x6c,  /* [2197] */
    (xdc_Char)0x75,  /* [2198] */
    (xdc_Char)0x65,  /* [2199] */
    (xdc_Char)0x20,  /* [2200] */
    (xdc_Char)0x61,  /* [2201] */
    (xdc_Char)0x6e,  /* [2202] */
    (xdc_Char)0x6e,  /* [2203] */
    (xdc_Char)0x6f,  /* [2204] */
    (xdc_Char)0x74,  /* [2205] */
    (xdc_Char)0x20,  /* [2206] */
    (xdc_Char)0x62,  /* [2207] */
    (xdc_Char)0x65,  /* [2208] */
    (xdc_Char)0x20,  /* [2209] */
    (xdc_Char)0x7a,  /* [2210] */
    (xdc_Char)0x65,  /* [2211] */
    (xdc_Char)0x72,  /* [2212] */
    (xdc_Char)0x6f,  /* [2213] */
    (xdc_Char)0x0,  /* [2214] */
    (xdc_Char)0x41,  /* [2215] */
    (xdc_Char)0x5f,  /* [2216] */
    (xdc_Char)0x69,  /* [2217] */
    (xdc_Char)0x6e,  /* [2218] */
    (xdc_Char)0x76,  /* [2219] */
    (xdc_Char)0x61,  /* [2220] */
    (xdc_Char)0x6c,  /* [2221] */
    (xdc_Char)0x69,  /* [2222] */
    (xdc_Char)0x64,  /* [2223] */
    (xdc_Char)0x4b,  /* [2224] */
    (xdc_Char)0x65,  /* [2225] */
    (xdc_Char)0x79,  /* [2226] */
    (xdc_Char)0x3a,  /* [2227] */
    (xdc_Char)0x20,  /* [2228] */
    (xdc_Char)0x74,  /* [2229] */
    (xdc_Char)0x68,  /* [2230] */
    (xdc_Char)0x65,  /* [2231] */
    (xdc_Char)0x20,  /* [2232] */
    (xdc_Char)0x6b,  /* [2233] */
    (xdc_Char)0x65,  /* [2234] */
    (xdc_Char)0x79,  /* [2235] */
    (xdc_Char)0x20,  /* [2236] */
    (xdc_Char)0x6d,  /* [2237] */
    (xdc_Char)0x75,  /* [2238] */
    (xdc_Char)0x73,  /* [2239] */
    (xdc_Char)0x74,  /* [2240] */
    (xdc_Char)0x20,  /* [2241] */
    (xdc_Char)0x62,  /* [2242] */
    (xdc_Char)0x65,  /* [2243] */
    (xdc_Char)0x20,  /* [2244] */
    (xdc_Char)0x73,  /* [2245] */
    (xdc_Char)0x65,  /* [2246] */
    (xdc_Char)0x74,  /* [2247] */
    (xdc_Char)0x20,  /* [2248] */
    (xdc_Char)0x74,  /* [2249] */
    (xdc_Char)0x6f,  /* [2250] */
    (xdc_Char)0x20,  /* [2251] */
    (xdc_Char)0x61,  /* [2252] */
    (xdc_Char)0x20,  /* [2253] */
    (xdc_Char)0x6e,  /* [2254] */
    (xdc_Char)0x6f,  /* [2255] */
    (xdc_Char)0x6e,  /* [2256] */
    (xdc_Char)0x2d,  /* [2257] */
    (xdc_Char)0x64,  /* [2258] */
    (xdc_Char)0x65,  /* [2259] */
    (xdc_Char)0x66,  /* [2260] */
    (xdc_Char)0x61,  /* [2261] */
    (xdc_Char)0x75,  /* [2262] */
    (xdc_Char)0x6c,  /* [2263] */
    (xdc_Char)0x74,  /* [2264] */
    (xdc_Char)0x20,  /* [2265] */
    (xdc_Char)0x76,  /* [2266] */
    (xdc_Char)0x61,  /* [2267] */
    (xdc_Char)0x6c,  /* [2268] */
    (xdc_Char)0x75,  /* [2269] */
    (xdc_Char)0x65,  /* [2270] */
    (xdc_Char)0x0,  /* [2271] */
    (xdc_Char)0x41,  /* [2272] */
    (xdc_Char)0x5f,  /* [2273] */
    (xdc_Char)0x6e,  /* [2274] */
    (xdc_Char)0x75,  /* [2275] */
    (xdc_Char)0x6c,  /* [2276] */
    (xdc_Char)0x6c,  /* [2277] */
    (xdc_Char)0x48,  /* [2278] */
    (xdc_Char)0x61,  /* [2279] */
    (xdc_Char)0x6e,  /* [2280] */
    (xdc_Char)0x64,  /* [2281] */
    (xdc_Char)0x6c,  /* [2282] */
    (xdc_Char)0x65,  /* [2283] */
    (xdc_Char)0x3a,  /* [2284] */
    (xdc_Char)0x20,  /* [2285] */
    (xdc_Char)0x4e,  /* [2286] */
    (xdc_Char)0x75,  /* [2287] */
    (xdc_Char)0x6c,  /* [2288] */
    (xdc_Char)0x6c,  /* [2289] */
    (xdc_Char)0x20,  /* [2290] */
    (xdc_Char)0x68,  /* [2291] */
    (xdc_Char)0x61,  /* [2292] */
    (xdc_Char)0x6e,  /* [2293] */
    (xdc_Char)0x64,  /* [2294] */
    (xdc_Char)0x6c,  /* [2295] */
    (xdc_Char)0x65,  /* [2296] */
    (xdc_Char)0x20,  /* [2297] */
    (xdc_Char)0x70,  /* [2298] */
    (xdc_Char)0x61,  /* [2299] */
    (xdc_Char)0x73,  /* [2300] */
    (xdc_Char)0x73,  /* [2301] */
    (xdc_Char)0x65,  /* [2302] */
    (xdc_Char)0x64,  /* [2303] */
    (xdc_Char)0x20,  /* [2304] */
    (xdc_Char)0x74,  /* [2305] */
    (xdc_Char)0x6f,  /* [2306] */
    (xdc_Char)0x20,  /* [2307] */
    (xdc_Char)0x63,  /* [2308] */
    (xdc_Char)0x72,  /* [2309] */
    (xdc_Char)0x65,  /* [2310] */
    (xdc_Char)0x61,  /* [2311] */
    (xdc_Char)0x74,  /* [2312] */
    (xdc_Char)0x65,  /* [2313] */
    (xdc_Char)0x0,  /* [2314] */
    (xdc_Char)0x41,  /* [2315] */
    (xdc_Char)0x5f,  /* [2316] */
    (xdc_Char)0x49,  /* [2317] */
    (xdc_Char)0x70,  /* [2318] */
    (xdc_Char)0x63,  /* [2319] */
    (xdc_Char)0x4d,  /* [2320] */
    (xdc_Char)0x50,  /* [2321] */
    (xdc_Char)0x46,  /* [2322] */
    (xdc_Char)0x61,  /* [2323] */
    (xdc_Char)0x69,  /* [2324] */
    (xdc_Char)0x6c,  /* [2325] */
    (xdc_Char)0x75,  /* [2326] */
    (xdc_Char)0x72,  /* [2327] */
    (xdc_Char)0x65,  /* [2328] */
    (xdc_Char)0x3a,  /* [2329] */
    (xdc_Char)0x20,  /* [2330] */
    (xdc_Char)0x55,  /* [2331] */
    (xdc_Char)0x6e,  /* [2332] */
    (xdc_Char)0x65,  /* [2333] */
    (xdc_Char)0x78,  /* [2334] */
    (xdc_Char)0x70,  /* [2335] */
    (xdc_Char)0x65,  /* [2336] */
    (xdc_Char)0x63,  /* [2337] */
    (xdc_Char)0x74,  /* [2338] */
    (xdc_Char)0x65,  /* [2339] */
    (xdc_Char)0x64,  /* [2340] */
    (xdc_Char)0x20,  /* [2341] */
    (xdc_Char)0x66,  /* [2342] */
    (xdc_Char)0x61,  /* [2343] */
    (xdc_Char)0x69,  /* [2344] */
    (xdc_Char)0x6c,  /* [2345] */
    (xdc_Char)0x75,  /* [2346] */
    (xdc_Char)0x72,  /* [2347] */
    (xdc_Char)0x65,  /* [2348] */
    (xdc_Char)0x20,  /* [2349] */
    (xdc_Char)0x77,  /* [2350] */
    (xdc_Char)0x69,  /* [2351] */
    (xdc_Char)0x74,  /* [2352] */
    (xdc_Char)0x68,  /* [2353] */
    (xdc_Char)0x20,  /* [2354] */
    (xdc_Char)0x74,  /* [2355] */
    (xdc_Char)0x68,  /* [2356] */
    (xdc_Char)0x65,  /* [2357] */
    (xdc_Char)0x20,  /* [2358] */
    (xdc_Char)0x49,  /* [2359] */
    (xdc_Char)0x70,  /* [2360] */
    (xdc_Char)0x63,  /* [2361] */
    (xdc_Char)0x4d,  /* [2362] */
    (xdc_Char)0x50,  /* [2363] */
    (xdc_Char)0x0,  /* [2364] */
    (xdc_Char)0x4c,  /* [2365] */
    (xdc_Char)0x6f,  /* [2366] */
    (xdc_Char)0x67,  /* [2367] */
    (xdc_Char)0x67,  /* [2368] */
    (xdc_Char)0x65,  /* [2369] */
    (xdc_Char)0x72,  /* [2370] */
    (xdc_Char)0x53,  /* [2371] */
    (xdc_Char)0x74,  /* [2372] */
    (xdc_Char)0x72,  /* [2373] */
    (xdc_Char)0x65,  /* [2374] */
    (xdc_Char)0x61,  /* [2375] */
    (xdc_Char)0x6d,  /* [2376] */
    (xdc_Char)0x65,  /* [2377] */
    (xdc_Char)0x72,  /* [2378] */
    (xdc_Char)0x32,  /* [2379] */
    (xdc_Char)0x5f,  /* [2380] */
    (xdc_Char)0x63,  /* [2381] */
    (xdc_Char)0x72,  /* [2382] */
    (xdc_Char)0x65,  /* [2383] */
    (xdc_Char)0x61,  /* [2384] */
    (xdc_Char)0x74,  /* [2385] */
    (xdc_Char)0x65,  /* [2386] */
    (xdc_Char)0x27,  /* [2387] */
    (xdc_Char)0x73,  /* [2388] */
    (xdc_Char)0x20,  /* [2389] */
    (xdc_Char)0x62,  /* [2390] */
    (xdc_Char)0x75,  /* [2391] */
    (xdc_Char)0x66,  /* [2392] */
    (xdc_Char)0x66,  /* [2393] */
    (xdc_Char)0x65,  /* [2394] */
    (xdc_Char)0x72,  /* [2395] */
    (xdc_Char)0x20,  /* [2396] */
    (xdc_Char)0x72,  /* [2397] */
    (xdc_Char)0x65,  /* [2398] */
    (xdc_Char)0x74,  /* [2399] */
    (xdc_Char)0x75,  /* [2400] */
    (xdc_Char)0x72,  /* [2401] */
    (xdc_Char)0x6e,  /* [2402] */
    (xdc_Char)0x65,  /* [2403] */
    (xdc_Char)0x64,  /* [2404] */
    (xdc_Char)0x20,  /* [2405] */
    (xdc_Char)0x62,  /* [2406] */
    (xdc_Char)0x79,  /* [2407] */
    (xdc_Char)0x20,  /* [2408] */
    (xdc_Char)0x70,  /* [2409] */
    (xdc_Char)0x72,  /* [2410] */
    (xdc_Char)0x69,  /* [2411] */
    (xdc_Char)0x6d,  /* [2412] */
    (xdc_Char)0x65,  /* [2413] */
    (xdc_Char)0x46,  /* [2414] */
    (xdc_Char)0x78,  /* [2415] */
    (xdc_Char)0x6e,  /* [2416] */
    (xdc_Char)0x20,  /* [2417] */
    (xdc_Char)0x69,  /* [2418] */
    (xdc_Char)0x73,  /* [2419] */
    (xdc_Char)0x20,  /* [2420] */
    (xdc_Char)0x4e,  /* [2421] */
    (xdc_Char)0x55,  /* [2422] */
    (xdc_Char)0x4c,  /* [2423] */
    (xdc_Char)0x4c,  /* [2424] */
    (xdc_Char)0x0,  /* [2425] */
    (xdc_Char)0x41,  /* [2426] */
    (xdc_Char)0x5f,  /* [2427] */
    (xdc_Char)0x62,  /* [2428] */
    (xdc_Char)0x61,  /* [2429] */
    (xdc_Char)0x64,  /* [2430] */
    (xdc_Char)0x43,  /* [2431] */
    (xdc_Char)0x6f,  /* [2432] */
    (xdc_Char)0x6e,  /* [2433] */
    (xdc_Char)0x74,  /* [2434] */
    (xdc_Char)0x65,  /* [2435] */
    (xdc_Char)0x78,  /* [2436] */
    (xdc_Char)0x74,  /* [2437] */
    (xdc_Char)0x3a,  /* [2438] */
    (xdc_Char)0x20,  /* [2439] */
    (xdc_Char)0x62,  /* [2440] */
    (xdc_Char)0x61,  /* [2441] */
    (xdc_Char)0x64,  /* [2442] */
    (xdc_Char)0x20,  /* [2443] */
    (xdc_Char)0x63,  /* [2444] */
    (xdc_Char)0x61,  /* [2445] */
    (xdc_Char)0x6c,  /* [2446] */
    (xdc_Char)0x6c,  /* [2447] */
    (xdc_Char)0x69,  /* [2448] */
    (xdc_Char)0x6e,  /* [2449] */
    (xdc_Char)0x67,  /* [2450] */
    (xdc_Char)0x20,  /* [2451] */
    (xdc_Char)0x63,  /* [2452] */
    (xdc_Char)0x6f,  /* [2453] */
    (xdc_Char)0x6e,  /* [2454] */
    (xdc_Char)0x74,  /* [2455] */
    (xdc_Char)0x65,  /* [2456] */
    (xdc_Char)0x78,  /* [2457] */
    (xdc_Char)0x74,  /* [2458] */
    (xdc_Char)0x2e,  /* [2459] */
    (xdc_Char)0x20,  /* [2460] */
    (xdc_Char)0x4d,  /* [2461] */
    (xdc_Char)0x61,  /* [2462] */
    (xdc_Char)0x79,  /* [2463] */
    (xdc_Char)0x20,  /* [2464] */
    (xdc_Char)0x6e,  /* [2465] */
    (xdc_Char)0x6f,  /* [2466] */
    (xdc_Char)0x74,  /* [2467] */
    (xdc_Char)0x20,  /* [2468] */
    (xdc_Char)0x62,  /* [2469] */
    (xdc_Char)0x65,  /* [2470] */
    (xdc_Char)0x20,  /* [2471] */
    (xdc_Char)0x65,  /* [2472] */
    (xdc_Char)0x6e,  /* [2473] */
    (xdc_Char)0x74,  /* [2474] */
    (xdc_Char)0x65,  /* [2475] */
    (xdc_Char)0x72,  /* [2476] */
    (xdc_Char)0x65,  /* [2477] */
    (xdc_Char)0x64,  /* [2478] */
    (xdc_Char)0x20,  /* [2479] */
    (xdc_Char)0x66,  /* [2480] */
    (xdc_Char)0x72,  /* [2481] */
    (xdc_Char)0x6f,  /* [2482] */
    (xdc_Char)0x6d,  /* [2483] */
    (xdc_Char)0x20,  /* [2484] */
    (xdc_Char)0x61,  /* [2485] */
    (xdc_Char)0x20,  /* [2486] */
    (xdc_Char)0x68,  /* [2487] */
    (xdc_Char)0x61,  /* [2488] */
    (xdc_Char)0x72,  /* [2489] */
    (xdc_Char)0x64,  /* [2490] */
    (xdc_Char)0x77,  /* [2491] */
    (xdc_Char)0x61,  /* [2492] */
    (xdc_Char)0x72,  /* [2493] */
    (xdc_Char)0x65,  /* [2494] */
    (xdc_Char)0x20,  /* [2495] */
    (xdc_Char)0x69,  /* [2496] */
    (xdc_Char)0x6e,  /* [2497] */
    (xdc_Char)0x74,  /* [2498] */
    (xdc_Char)0x65,  /* [2499] */
    (xdc_Char)0x72,  /* [2500] */
    (xdc_Char)0x72,  /* [2501] */
    (xdc_Char)0x75,  /* [2502] */
    (xdc_Char)0x70,  /* [2503] */
    (xdc_Char)0x74,  /* [2504] */
    (xdc_Char)0x20,  /* [2505] */
    (xdc_Char)0x74,  /* [2506] */
    (xdc_Char)0x68,  /* [2507] */
    (xdc_Char)0x72,  /* [2508] */
    (xdc_Char)0x65,  /* [2509] */
    (xdc_Char)0x61,  /* [2510] */
    (xdc_Char)0x64,  /* [2511] */
    (xdc_Char)0x2e,  /* [2512] */
    (xdc_Char)0x0,  /* [2513] */
    (xdc_Char)0x41,  /* [2514] */
    (xdc_Char)0x5f,  /* [2515] */
    (xdc_Char)0x62,  /* [2516] */
    (xdc_Char)0x61,  /* [2517] */
    (xdc_Char)0x64,  /* [2518] */
    (xdc_Char)0x43,  /* [2519] */
    (xdc_Char)0x6f,  /* [2520] */
    (xdc_Char)0x6e,  /* [2521] */
    (xdc_Char)0x74,  /* [2522] */
    (xdc_Char)0x65,  /* [2523] */
    (xdc_Char)0x78,  /* [2524] */
    (xdc_Char)0x74,  /* [2525] */
    (xdc_Char)0x3a,  /* [2526] */
    (xdc_Char)0x20,  /* [2527] */
    (xdc_Char)0x62,  /* [2528] */
    (xdc_Char)0x61,  /* [2529] */
    (xdc_Char)0x64,  /* [2530] */
    (xdc_Char)0x20,  /* [2531] */
    (xdc_Char)0x63,  /* [2532] */
    (xdc_Char)0x61,  /* [2533] */
    (xdc_Char)0x6c,  /* [2534] */
    (xdc_Char)0x6c,  /* [2535] */
    (xdc_Char)0x69,  /* [2536] */
    (xdc_Char)0x6e,  /* [2537] */
    (xdc_Char)0x67,  /* [2538] */
    (xdc_Char)0x20,  /* [2539] */
    (xdc_Char)0x63,  /* [2540] */
    (xdc_Char)0x6f,  /* [2541] */
    (xdc_Char)0x6e,  /* [2542] */
    (xdc_Char)0x74,  /* [2543] */
    (xdc_Char)0x65,  /* [2544] */
    (xdc_Char)0x78,  /* [2545] */
    (xdc_Char)0x74,  /* [2546] */
    (xdc_Char)0x2e,  /* [2547] */
    (xdc_Char)0x20,  /* [2548] */
    (xdc_Char)0x4d,  /* [2549] */
    (xdc_Char)0x61,  /* [2550] */
    (xdc_Char)0x79,  /* [2551] */
    (xdc_Char)0x20,  /* [2552] */
    (xdc_Char)0x6e,  /* [2553] */
    (xdc_Char)0x6f,  /* [2554] */
    (xdc_Char)0x74,  /* [2555] */
    (xdc_Char)0x20,  /* [2556] */
    (xdc_Char)0x62,  /* [2557] */
    (xdc_Char)0x65,  /* [2558] */
    (xdc_Char)0x20,  /* [2559] */
    (xdc_Char)0x65,  /* [2560] */
    (xdc_Char)0x6e,  /* [2561] */
    (xdc_Char)0x74,  /* [2562] */
    (xdc_Char)0x65,  /* [2563] */
    (xdc_Char)0x72,  /* [2564] */
    (xdc_Char)0x65,  /* [2565] */
    (xdc_Char)0x64,  /* [2566] */
    (xdc_Char)0x20,  /* [2567] */
    (xdc_Char)0x66,  /* [2568] */
    (xdc_Char)0x72,  /* [2569] */
    (xdc_Char)0x6f,  /* [2570] */
    (xdc_Char)0x6d,  /* [2571] */
    (xdc_Char)0x20,  /* [2572] */
    (xdc_Char)0x61,  /* [2573] */
    (xdc_Char)0x20,  /* [2574] */
    (xdc_Char)0x73,  /* [2575] */
    (xdc_Char)0x6f,  /* [2576] */
    (xdc_Char)0x66,  /* [2577] */
    (xdc_Char)0x74,  /* [2578] */
    (xdc_Char)0x77,  /* [2579] */
    (xdc_Char)0x61,  /* [2580] */
    (xdc_Char)0x72,  /* [2581] */
    (xdc_Char)0x65,  /* [2582] */
    (xdc_Char)0x20,  /* [2583] */
    (xdc_Char)0x6f,  /* [2584] */
    (xdc_Char)0x72,  /* [2585] */
    (xdc_Char)0x20,  /* [2586] */
    (xdc_Char)0x68,  /* [2587] */
    (xdc_Char)0x61,  /* [2588] */
    (xdc_Char)0x72,  /* [2589] */
    (xdc_Char)0x64,  /* [2590] */
    (xdc_Char)0x77,  /* [2591] */
    (xdc_Char)0x61,  /* [2592] */
    (xdc_Char)0x72,  /* [2593] */
    (xdc_Char)0x65,  /* [2594] */
    (xdc_Char)0x20,  /* [2595] */
    (xdc_Char)0x69,  /* [2596] */
    (xdc_Char)0x6e,  /* [2597] */
    (xdc_Char)0x74,  /* [2598] */
    (xdc_Char)0x65,  /* [2599] */
    (xdc_Char)0x72,  /* [2600] */
    (xdc_Char)0x72,  /* [2601] */
    (xdc_Char)0x75,  /* [2602] */
    (xdc_Char)0x70,  /* [2603] */
    (xdc_Char)0x74,  /* [2604] */
    (xdc_Char)0x20,  /* [2605] */
    (xdc_Char)0x74,  /* [2606] */
    (xdc_Char)0x68,  /* [2607] */
    (xdc_Char)0x72,  /* [2608] */
    (xdc_Char)0x65,  /* [2609] */
    (xdc_Char)0x61,  /* [2610] */
    (xdc_Char)0x64,  /* [2611] */
    (xdc_Char)0x2e,  /* [2612] */
    (xdc_Char)0x0,  /* [2613] */
    (xdc_Char)0x41,  /* [2614] */
    (xdc_Char)0x5f,  /* [2615] */
    (xdc_Char)0x62,  /* [2616] */
    (xdc_Char)0x61,  /* [2617] */
    (xdc_Char)0x64,  /* [2618] */
    (xdc_Char)0x43,  /* [2619] */
    (xdc_Char)0x6f,  /* [2620] */
    (xdc_Char)0x6e,  /* [2621] */
    (xdc_Char)0x74,  /* [2622] */
    (xdc_Char)0x65,  /* [2623] */
    (xdc_Char)0x78,  /* [2624] */
    (xdc_Char)0x74,  /* [2625] */
    (xdc_Char)0x3a,  /* [2626] */
    (xdc_Char)0x20,  /* [2627] */
    (xdc_Char)0x62,  /* [2628] */
    (xdc_Char)0x61,  /* [2629] */
    (xdc_Char)0x64,  /* [2630] */
    (xdc_Char)0x20,  /* [2631] */
    (xdc_Char)0x63,  /* [2632] */
    (xdc_Char)0x61,  /* [2633] */
    (xdc_Char)0x6c,  /* [2634] */
    (xdc_Char)0x6c,  /* [2635] */
    (xdc_Char)0x69,  /* [2636] */
    (xdc_Char)0x6e,  /* [2637] */
    (xdc_Char)0x67,  /* [2638] */
    (xdc_Char)0x20,  /* [2639] */
    (xdc_Char)0x63,  /* [2640] */
    (xdc_Char)0x6f,  /* [2641] */
    (xdc_Char)0x6e,  /* [2642] */
    (xdc_Char)0x74,  /* [2643] */
    (xdc_Char)0x65,  /* [2644] */
    (xdc_Char)0x78,  /* [2645] */
    (xdc_Char)0x74,  /* [2646] */
    (xdc_Char)0x2e,  /* [2647] */
    (xdc_Char)0x20,  /* [2648] */
    (xdc_Char)0x53,  /* [2649] */
    (xdc_Char)0x65,  /* [2650] */
    (xdc_Char)0x65,  /* [2651] */
    (xdc_Char)0x20,  /* [2652] */
    (xdc_Char)0x47,  /* [2653] */
    (xdc_Char)0x61,  /* [2654] */
    (xdc_Char)0x74,  /* [2655] */
    (xdc_Char)0x65,  /* [2656] */
    (xdc_Char)0x4d,  /* [2657] */
    (xdc_Char)0x75,  /* [2658] */
    (xdc_Char)0x74,  /* [2659] */
    (xdc_Char)0x65,  /* [2660] */
    (xdc_Char)0x78,  /* [2661] */
    (xdc_Char)0x50,  /* [2662] */
    (xdc_Char)0x72,  /* [2663] */
    (xdc_Char)0x69,  /* [2664] */
    (xdc_Char)0x20,  /* [2665] */
    (xdc_Char)0x41,  /* [2666] */
    (xdc_Char)0x50,  /* [2667] */
    (xdc_Char)0x49,  /* [2668] */
    (xdc_Char)0x20,  /* [2669] */
    (xdc_Char)0x64,  /* [2670] */
    (xdc_Char)0x6f,  /* [2671] */
    (xdc_Char)0x63,  /* [2672] */
    (xdc_Char)0x20,  /* [2673] */
    (xdc_Char)0x66,  /* [2674] */
    (xdc_Char)0x6f,  /* [2675] */
    (xdc_Char)0x72,  /* [2676] */
    (xdc_Char)0x20,  /* [2677] */
    (xdc_Char)0x64,  /* [2678] */
    (xdc_Char)0x65,  /* [2679] */
    (xdc_Char)0x74,  /* [2680] */
    (xdc_Char)0x61,  /* [2681] */
    (xdc_Char)0x69,  /* [2682] */
    (xdc_Char)0x6c,  /* [2683] */
    (xdc_Char)0x73,  /* [2684] */
    (xdc_Char)0x2e,  /* [2685] */
    (xdc_Char)0x0,  /* [2686] */
    (xdc_Char)0x41,  /* [2687] */
    (xdc_Char)0x5f,  /* [2688] */
    (xdc_Char)0x65,  /* [2689] */
    (xdc_Char)0x6e,  /* [2690] */
    (xdc_Char)0x74,  /* [2691] */
    (xdc_Char)0x65,  /* [2692] */
    (xdc_Char)0x72,  /* [2693] */
    (xdc_Char)0x54,  /* [2694] */
    (xdc_Char)0x61,  /* [2695] */
    (xdc_Char)0x73,  /* [2696] */
    (xdc_Char)0x6b,  /* [2697] */
    (xdc_Char)0x44,  /* [2698] */
    (xdc_Char)0x69,  /* [2699] */
    (xdc_Char)0x73,  /* [2700] */
    (xdc_Char)0x61,  /* [2701] */
    (xdc_Char)0x62,  /* [2702] */
    (xdc_Char)0x6c,  /* [2703] */
    (xdc_Char)0x65,  /* [2704] */
    (xdc_Char)0x64,  /* [2705] */
    (xdc_Char)0x3a,  /* [2706] */
    (xdc_Char)0x20,  /* [2707] */
    (xdc_Char)0x43,  /* [2708] */
    (xdc_Char)0x61,  /* [2709] */
    (xdc_Char)0x6e,  /* [2710] */
    (xdc_Char)0x6e,  /* [2711] */
    (xdc_Char)0x6f,  /* [2712] */
    (xdc_Char)0x74,  /* [2713] */
    (xdc_Char)0x20,  /* [2714] */
    (xdc_Char)0x63,  /* [2715] */
    (xdc_Char)0x61,  /* [2716] */
    (xdc_Char)0x6c,  /* [2717] */
    (xdc_Char)0x6c,  /* [2718] */
    (xdc_Char)0x20,  /* [2719] */
    (xdc_Char)0x47,  /* [2720] */
    (xdc_Char)0x61,  /* [2721] */
    (xdc_Char)0x74,  /* [2722] */
    (xdc_Char)0x65,  /* [2723] */
    (xdc_Char)0x4d,  /* [2724] */
    (xdc_Char)0x75,  /* [2725] */
    (xdc_Char)0x74,  /* [2726] */
    (xdc_Char)0x65,  /* [2727] */
    (xdc_Char)0x78,  /* [2728] */
    (xdc_Char)0x50,  /* [2729] */
    (xdc_Char)0x72,  /* [2730] */
    (xdc_Char)0x69,  /* [2731] */
    (xdc_Char)0x5f,  /* [2732] */
    (xdc_Char)0x65,  /* [2733] */
    (xdc_Char)0x6e,  /* [2734] */
    (xdc_Char)0x74,  /* [2735] */
    (xdc_Char)0x65,  /* [2736] */
    (xdc_Char)0x72,  /* [2737] */
    (xdc_Char)0x28,  /* [2738] */
    (xdc_Char)0x29,  /* [2739] */
    (xdc_Char)0x20,  /* [2740] */
    (xdc_Char)0x77,  /* [2741] */
    (xdc_Char)0x68,  /* [2742] */
    (xdc_Char)0x69,  /* [2743] */
    (xdc_Char)0x6c,  /* [2744] */
    (xdc_Char)0x65,  /* [2745] */
    (xdc_Char)0x20,  /* [2746] */
    (xdc_Char)0x74,  /* [2747] */
    (xdc_Char)0x68,  /* [2748] */
    (xdc_Char)0x65,  /* [2749] */
    (xdc_Char)0x20,  /* [2750] */
    (xdc_Char)0x54,  /* [2751] */
    (xdc_Char)0x61,  /* [2752] */
    (xdc_Char)0x73,  /* [2753] */
    (xdc_Char)0x6b,  /* [2754] */
    (xdc_Char)0x20,  /* [2755] */
    (xdc_Char)0x6f,  /* [2756] */
    (xdc_Char)0x72,  /* [2757] */
    (xdc_Char)0x20,  /* [2758] */
    (xdc_Char)0x53,  /* [2759] */
    (xdc_Char)0x77,  /* [2760] */
    (xdc_Char)0x69,  /* [2761] */
    (xdc_Char)0x20,  /* [2762] */
    (xdc_Char)0x73,  /* [2763] */
    (xdc_Char)0x63,  /* [2764] */
    (xdc_Char)0x68,  /* [2765] */
    (xdc_Char)0x65,  /* [2766] */
    (xdc_Char)0x64,  /* [2767] */
    (xdc_Char)0x75,  /* [2768] */
    (xdc_Char)0x6c,  /* [2769] */
    (xdc_Char)0x65,  /* [2770] */
    (xdc_Char)0x72,  /* [2771] */
    (xdc_Char)0x20,  /* [2772] */
    (xdc_Char)0x69,  /* [2773] */
    (xdc_Char)0x73,  /* [2774] */
    (xdc_Char)0x20,  /* [2775] */
    (xdc_Char)0x64,  /* [2776] */
    (xdc_Char)0x69,  /* [2777] */
    (xdc_Char)0x73,  /* [2778] */
    (xdc_Char)0x61,  /* [2779] */
    (xdc_Char)0x62,  /* [2780] */
    (xdc_Char)0x6c,  /* [2781] */
    (xdc_Char)0x65,  /* [2782] */
    (xdc_Char)0x64,  /* [2783] */
    (xdc_Char)0x2e,  /* [2784] */
    (xdc_Char)0x0,  /* [2785] */
    (xdc_Char)0x41,  /* [2786] */
    (xdc_Char)0x5f,  /* [2787] */
    (xdc_Char)0x62,  /* [2788] */
    (xdc_Char)0x61,  /* [2789] */
    (xdc_Char)0x64,  /* [2790] */
    (xdc_Char)0x43,  /* [2791] */
    (xdc_Char)0x6f,  /* [2792] */
    (xdc_Char)0x6e,  /* [2793] */
    (xdc_Char)0x74,  /* [2794] */
    (xdc_Char)0x65,  /* [2795] */
    (xdc_Char)0x78,  /* [2796] */
    (xdc_Char)0x74,  /* [2797] */
    (xdc_Char)0x3a,  /* [2798] */
    (xdc_Char)0x20,  /* [2799] */
    (xdc_Char)0x62,  /* [2800] */
    (xdc_Char)0x61,  /* [2801] */
    (xdc_Char)0x64,  /* [2802] */
    (xdc_Char)0x20,  /* [2803] */
    (xdc_Char)0x63,  /* [2804] */
    (xdc_Char)0x61,  /* [2805] */
    (xdc_Char)0x6c,  /* [2806] */
    (xdc_Char)0x6c,  /* [2807] */
    (xdc_Char)0x69,  /* [2808] */
    (xdc_Char)0x6e,  /* [2809] */
    (xdc_Char)0x67,  /* [2810] */
    (xdc_Char)0x20,  /* [2811] */
    (xdc_Char)0x63,  /* [2812] */
    (xdc_Char)0x6f,  /* [2813] */
    (xdc_Char)0x6e,  /* [2814] */
    (xdc_Char)0x74,  /* [2815] */
    (xdc_Char)0x65,  /* [2816] */
    (xdc_Char)0x78,  /* [2817] */
    (xdc_Char)0x74,  /* [2818] */
    (xdc_Char)0x2e,  /* [2819] */
    (xdc_Char)0x20,  /* [2820] */
    (xdc_Char)0x53,  /* [2821] */
    (xdc_Char)0x65,  /* [2822] */
    (xdc_Char)0x65,  /* [2823] */
    (xdc_Char)0x20,  /* [2824] */
    (xdc_Char)0x47,  /* [2825] */
    (xdc_Char)0x61,  /* [2826] */
    (xdc_Char)0x74,  /* [2827] */
    (xdc_Char)0x65,  /* [2828] */
    (xdc_Char)0x4d,  /* [2829] */
    (xdc_Char)0x75,  /* [2830] */
    (xdc_Char)0x74,  /* [2831] */
    (xdc_Char)0x65,  /* [2832] */
    (xdc_Char)0x78,  /* [2833] */
    (xdc_Char)0x20,  /* [2834] */
    (xdc_Char)0x41,  /* [2835] */
    (xdc_Char)0x50,  /* [2836] */
    (xdc_Char)0x49,  /* [2837] */
    (xdc_Char)0x20,  /* [2838] */
    (xdc_Char)0x64,  /* [2839] */
    (xdc_Char)0x6f,  /* [2840] */
    (xdc_Char)0x63,  /* [2841] */
    (xdc_Char)0x20,  /* [2842] */
    (xdc_Char)0x66,  /* [2843] */
    (xdc_Char)0x6f,  /* [2844] */
    (xdc_Char)0x72,  /* [2845] */
    (xdc_Char)0x20,  /* [2846] */
    (xdc_Char)0x64,  /* [2847] */
    (xdc_Char)0x65,  /* [2848] */
    (xdc_Char)0x74,  /* [2849] */
    (xdc_Char)0x61,  /* [2850] */
    (xdc_Char)0x69,  /* [2851] */
    (xdc_Char)0x6c,  /* [2852] */
    (xdc_Char)0x73,  /* [2853] */
    (xdc_Char)0x2e,  /* [2854] */
    (xdc_Char)0x0,  /* [2855] */
    (xdc_Char)0x62,  /* [2856] */
    (xdc_Char)0x75,  /* [2857] */
    (xdc_Char)0x66,  /* [2858] */
    (xdc_Char)0x20,  /* [2859] */
    (xdc_Char)0x70,  /* [2860] */
    (xdc_Char)0x61,  /* [2861] */
    (xdc_Char)0x72,  /* [2862] */
    (xdc_Char)0x61,  /* [2863] */
    (xdc_Char)0x6d,  /* [2864] */
    (xdc_Char)0x65,  /* [2865] */
    (xdc_Char)0x74,  /* [2866] */
    (xdc_Char)0x65,  /* [2867] */
    (xdc_Char)0x72,  /* [2868] */
    (xdc_Char)0x20,  /* [2869] */
    (xdc_Char)0x63,  /* [2870] */
    (xdc_Char)0x61,  /* [2871] */
    (xdc_Char)0x6e,  /* [2872] */
    (xdc_Char)0x6e,  /* [2873] */
    (xdc_Char)0x6f,  /* [2874] */
    (xdc_Char)0x74,  /* [2875] */
    (xdc_Char)0x20,  /* [2876] */
    (xdc_Char)0x62,  /* [2877] */
    (xdc_Char)0x65,  /* [2878] */
    (xdc_Char)0x20,  /* [2879] */
    (xdc_Char)0x6e,  /* [2880] */
    (xdc_Char)0x75,  /* [2881] */
    (xdc_Char)0x6c,  /* [2882] */
    (xdc_Char)0x6c,  /* [2883] */
    (xdc_Char)0x0,  /* [2884] */
    (xdc_Char)0x62,  /* [2885] */
    (xdc_Char)0x75,  /* [2886] */
    (xdc_Char)0x66,  /* [2887] */
    (xdc_Char)0x20,  /* [2888] */
    (xdc_Char)0x6e,  /* [2889] */
    (xdc_Char)0x6f,  /* [2890] */
    (xdc_Char)0x74,  /* [2891] */
    (xdc_Char)0x20,  /* [2892] */
    (xdc_Char)0x70,  /* [2893] */
    (xdc_Char)0x72,  /* [2894] */
    (xdc_Char)0x6f,  /* [2895] */
    (xdc_Char)0x70,  /* [2896] */
    (xdc_Char)0x65,  /* [2897] */
    (xdc_Char)0x72,  /* [2898] */
    (xdc_Char)0x6c,  /* [2899] */
    (xdc_Char)0x79,  /* [2900] */
    (xdc_Char)0x20,  /* [2901] */
    (xdc_Char)0x61,  /* [2902] */
    (xdc_Char)0x6c,  /* [2903] */
    (xdc_Char)0x69,  /* [2904] */
    (xdc_Char)0x67,  /* [2905] */
    (xdc_Char)0x6e,  /* [2906] */
    (xdc_Char)0x65,  /* [2907] */
    (xdc_Char)0x64,  /* [2908] */
    (xdc_Char)0x0,  /* [2909] */
    (xdc_Char)0x61,  /* [2910] */
    (xdc_Char)0x6c,  /* [2911] */
    (xdc_Char)0x69,  /* [2912] */
    (xdc_Char)0x67,  /* [2913] */
    (xdc_Char)0x6e,  /* [2914] */
    (xdc_Char)0x20,  /* [2915] */
    (xdc_Char)0x70,  /* [2916] */
    (xdc_Char)0x61,  /* [2917] */
    (xdc_Char)0x72,  /* [2918] */
    (xdc_Char)0x61,  /* [2919] */
    (xdc_Char)0x6d,  /* [2920] */
    (xdc_Char)0x65,  /* [2921] */
    (xdc_Char)0x74,  /* [2922] */
    (xdc_Char)0x65,  /* [2923] */
    (xdc_Char)0x72,  /* [2924] */
    (xdc_Char)0x20,  /* [2925] */
    (xdc_Char)0x6d,  /* [2926] */
    (xdc_Char)0x75,  /* [2927] */
    (xdc_Char)0x73,  /* [2928] */
    (xdc_Char)0x74,  /* [2929] */
    (xdc_Char)0x20,  /* [2930] */
    (xdc_Char)0x62,  /* [2931] */
    (xdc_Char)0x65,  /* [2932] */
    (xdc_Char)0x20,  /* [2933] */
    (xdc_Char)0x30,  /* [2934] */
    (xdc_Char)0x20,  /* [2935] */
    (xdc_Char)0x6f,  /* [2936] */
    (xdc_Char)0x72,  /* [2937] */
    (xdc_Char)0x20,  /* [2938] */
    (xdc_Char)0x61,  /* [2939] */
    (xdc_Char)0x20,  /* [2940] */
    (xdc_Char)0x70,  /* [2941] */
    (xdc_Char)0x6f,  /* [2942] */
    (xdc_Char)0x77,  /* [2943] */
    (xdc_Char)0x65,  /* [2944] */
    (xdc_Char)0x72,  /* [2945] */
    (xdc_Char)0x20,  /* [2946] */
    (xdc_Char)0x6f,  /* [2947] */
    (xdc_Char)0x66,  /* [2948] */
    (xdc_Char)0x20,  /* [2949] */
    (xdc_Char)0x32,  /* [2950] */
    (xdc_Char)0x20,  /* [2951] */
    (xdc_Char)0x3e,  /* [2952] */
    (xdc_Char)0x3d,  /* [2953] */
    (xdc_Char)0x20,  /* [2954] */
    (xdc_Char)0x74,  /* [2955] */
    (xdc_Char)0x68,  /* [2956] */
    (xdc_Char)0x65,  /* [2957] */
    (xdc_Char)0x20,  /* [2958] */
    (xdc_Char)0x76,  /* [2959] */
    (xdc_Char)0x61,  /* [2960] */
    (xdc_Char)0x6c,  /* [2961] */
    (xdc_Char)0x75,  /* [2962] */
    (xdc_Char)0x65,  /* [2963] */
    (xdc_Char)0x20,  /* [2964] */
    (xdc_Char)0x6f,  /* [2965] */
    (xdc_Char)0x66,  /* [2966] */
    (xdc_Char)0x20,  /* [2967] */
    (xdc_Char)0x4d,  /* [2968] */
    (xdc_Char)0x65,  /* [2969] */
    (xdc_Char)0x6d,  /* [2970] */
    (xdc_Char)0x6f,  /* [2971] */
    (xdc_Char)0x72,  /* [2972] */
    (xdc_Char)0x79,  /* [2973] */
    (xdc_Char)0x5f,  /* [2974] */
    (xdc_Char)0x67,  /* [2975] */
    (xdc_Char)0x65,  /* [2976] */
    (xdc_Char)0x74,  /* [2977] */
    (xdc_Char)0x4d,  /* [2978] */
    (xdc_Char)0x61,  /* [2979] */
    (xdc_Char)0x78,  /* [2980] */
    (xdc_Char)0x44,  /* [2981] */
    (xdc_Char)0x65,  /* [2982] */
    (xdc_Char)0x66,  /* [2983] */
    (xdc_Char)0x61,  /* [2984] */
    (xdc_Char)0x75,  /* [2985] */
    (xdc_Char)0x6c,  /* [2986] */
    (xdc_Char)0x74,  /* [2987] */
    (xdc_Char)0x54,  /* [2988] */
    (xdc_Char)0x79,  /* [2989] */
    (xdc_Char)0x70,  /* [2990] */
    (xdc_Char)0x65,  /* [2991] */
    (xdc_Char)0x41,  /* [2992] */
    (xdc_Char)0x6c,  /* [2993] */
    (xdc_Char)0x69,  /* [2994] */
    (xdc_Char)0x67,  /* [2995] */
    (xdc_Char)0x6e,  /* [2996] */
    (xdc_Char)0x28,  /* [2997] */
    (xdc_Char)0x29,  /* [2998] */
    (xdc_Char)0x0,  /* [2999] */
    (xdc_Char)0x61,  /* [3000] */
    (xdc_Char)0x6c,  /* [3001] */
    (xdc_Char)0x69,  /* [3002] */
    (xdc_Char)0x67,  /* [3003] */
    (xdc_Char)0x6e,  /* [3004] */
    (xdc_Char)0x20,  /* [3005] */
    (xdc_Char)0x70,  /* [3006] */
    (xdc_Char)0x61,  /* [3007] */
    (xdc_Char)0x72,  /* [3008] */
    (xdc_Char)0x61,  /* [3009] */
    (xdc_Char)0x6d,  /* [3010] */
    (xdc_Char)0x65,  /* [3011] */
    (xdc_Char)0x74,  /* [3012] */
    (xdc_Char)0x65,  /* [3013] */
    (xdc_Char)0x72,  /* [3014] */
    (xdc_Char)0x20,  /* [3015] */
    (xdc_Char)0x31,  /* [3016] */
    (xdc_Char)0x29,  /* [3017] */
    (xdc_Char)0x20,  /* [3018] */
    (xdc_Char)0x6d,  /* [3019] */
    (xdc_Char)0x75,  /* [3020] */
    (xdc_Char)0x73,  /* [3021] */
    (xdc_Char)0x74,  /* [3022] */
    (xdc_Char)0x20,  /* [3023] */
    (xdc_Char)0x62,  /* [3024] */
    (xdc_Char)0x65,  /* [3025] */
    (xdc_Char)0x20,  /* [3026] */
    (xdc_Char)0x30,  /* [3027] */
    (xdc_Char)0x20,  /* [3028] */
    (xdc_Char)0x6f,  /* [3029] */
    (xdc_Char)0x72,  /* [3030] */
    (xdc_Char)0x20,  /* [3031] */
    (xdc_Char)0x61,  /* [3032] */
    (xdc_Char)0x20,  /* [3033] */
    (xdc_Char)0x70,  /* [3034] */
    (xdc_Char)0x6f,  /* [3035] */
    (xdc_Char)0x77,  /* [3036] */
    (xdc_Char)0x65,  /* [3037] */
    (xdc_Char)0x72,  /* [3038] */
    (xdc_Char)0x20,  /* [3039] */
    (xdc_Char)0x6f,  /* [3040] */
    (xdc_Char)0x66,  /* [3041] */
    (xdc_Char)0x20,  /* [3042] */
    (xdc_Char)0x32,  /* [3043] */
    (xdc_Char)0x20,  /* [3044] */
    (xdc_Char)0x61,  /* [3045] */
    (xdc_Char)0x6e,  /* [3046] */
    (xdc_Char)0x64,  /* [3047] */
    (xdc_Char)0x20,  /* [3048] */
    (xdc_Char)0x32,  /* [3049] */
    (xdc_Char)0x29,  /* [3050] */
    (xdc_Char)0x20,  /* [3051] */
    (xdc_Char)0x6e,  /* [3052] */
    (xdc_Char)0x6f,  /* [3053] */
    (xdc_Char)0x74,  /* [3054] */
    (xdc_Char)0x20,  /* [3055] */
    (xdc_Char)0x67,  /* [3056] */
    (xdc_Char)0x72,  /* [3057] */
    (xdc_Char)0x65,  /* [3058] */
    (xdc_Char)0x61,  /* [3059] */
    (xdc_Char)0x74,  /* [3060] */
    (xdc_Char)0x65,  /* [3061] */
    (xdc_Char)0x72,  /* [3062] */
    (xdc_Char)0x20,  /* [3063] */
    (xdc_Char)0x74,  /* [3064] */
    (xdc_Char)0x68,  /* [3065] */
    (xdc_Char)0x61,  /* [3066] */
    (xdc_Char)0x6e,  /* [3067] */
    (xdc_Char)0x20,  /* [3068] */
    (xdc_Char)0x74,  /* [3069] */
    (xdc_Char)0x68,  /* [3070] */
    (xdc_Char)0x65,  /* [3071] */
    (xdc_Char)0x20,  /* [3072] */
    (xdc_Char)0x68,  /* [3073] */
    (xdc_Char)0x65,  /* [3074] */
    (xdc_Char)0x61,  /* [3075] */
    (xdc_Char)0x70,  /* [3076] */
    (xdc_Char)0x73,  /* [3077] */
    (xdc_Char)0x20,  /* [3078] */
    (xdc_Char)0x61,  /* [3079] */
    (xdc_Char)0x6c,  /* [3080] */
    (xdc_Char)0x69,  /* [3081] */
    (xdc_Char)0x67,  /* [3082] */
    (xdc_Char)0x6e,  /* [3083] */
    (xdc_Char)0x6d,  /* [3084] */
    (xdc_Char)0x65,  /* [3085] */
    (xdc_Char)0x6e,  /* [3086] */
    (xdc_Char)0x74,  /* [3087] */
    (xdc_Char)0x0,  /* [3088] */
    (xdc_Char)0x62,  /* [3089] */
    (xdc_Char)0x6c,  /* [3090] */
    (xdc_Char)0x6f,  /* [3091] */
    (xdc_Char)0x63,  /* [3092] */
    (xdc_Char)0x6b,  /* [3093] */
    (xdc_Char)0x53,  /* [3094] */
    (xdc_Char)0x69,  /* [3095] */
    (xdc_Char)0x7a,  /* [3096] */
    (xdc_Char)0x65,  /* [3097] */
    (xdc_Char)0x20,  /* [3098] */
    (xdc_Char)0x63,  /* [3099] */
    (xdc_Char)0x61,  /* [3100] */
    (xdc_Char)0x6e,  /* [3101] */
    (xdc_Char)0x6e,  /* [3102] */
    (xdc_Char)0x6f,  /* [3103] */
    (xdc_Char)0x74,  /* [3104] */
    (xdc_Char)0x20,  /* [3105] */
    (xdc_Char)0x62,  /* [3106] */
    (xdc_Char)0x65,  /* [3107] */
    (xdc_Char)0x20,  /* [3108] */
    (xdc_Char)0x7a,  /* [3109] */
    (xdc_Char)0x65,  /* [3110] */
    (xdc_Char)0x72,  /* [3111] */
    (xdc_Char)0x6f,  /* [3112] */
    (xdc_Char)0x0,  /* [3113] */
    (xdc_Char)0x6e,  /* [3114] */
    (xdc_Char)0x75,  /* [3115] */
    (xdc_Char)0x6d,  /* [3116] */
    (xdc_Char)0x42,  /* [3117] */
    (xdc_Char)0x6c,  /* [3118] */
    (xdc_Char)0x6f,  /* [3119] */
    (xdc_Char)0x63,  /* [3120] */
    (xdc_Char)0x6b,  /* [3121] */
    (xdc_Char)0x73,  /* [3122] */
    (xdc_Char)0x20,  /* [3123] */
    (xdc_Char)0x63,  /* [3124] */
    (xdc_Char)0x61,  /* [3125] */
    (xdc_Char)0x6e,  /* [3126] */
    (xdc_Char)0x6e,  /* [3127] */
    (xdc_Char)0x6f,  /* [3128] */
    (xdc_Char)0x74,  /* [3129] */
    (xdc_Char)0x20,  /* [3130] */
    (xdc_Char)0x62,  /* [3131] */
    (xdc_Char)0x65,  /* [3132] */
    (xdc_Char)0x20,  /* [3133] */
    (xdc_Char)0x7a,  /* [3134] */
    (xdc_Char)0x65,  /* [3135] */
    (xdc_Char)0x72,  /* [3136] */
    (xdc_Char)0x6f,  /* [3137] */
    (xdc_Char)0x0,  /* [3138] */
    (xdc_Char)0x62,  /* [3139] */
    (xdc_Char)0x75,  /* [3140] */
    (xdc_Char)0x66,  /* [3141] */
    (xdc_Char)0x53,  /* [3142] */
    (xdc_Char)0x69,  /* [3143] */
    (xdc_Char)0x7a,  /* [3144] */
    (xdc_Char)0x65,  /* [3145] */
    (xdc_Char)0x20,  /* [3146] */
    (xdc_Char)0x63,  /* [3147] */
    (xdc_Char)0x61,  /* [3148] */
    (xdc_Char)0x6e,  /* [3149] */
    (xdc_Char)0x6e,  /* [3150] */
    (xdc_Char)0x6f,  /* [3151] */
    (xdc_Char)0x74,  /* [3152] */
    (xdc_Char)0x20,  /* [3153] */
    (xdc_Char)0x62,  /* [3154] */
    (xdc_Char)0x65,  /* [3155] */
    (xdc_Char)0x20,  /* [3156] */
    (xdc_Char)0x7a,  /* [3157] */
    (xdc_Char)0x65,  /* [3158] */
    (xdc_Char)0x72,  /* [3159] */
    (xdc_Char)0x6f,  /* [3160] */
    (xdc_Char)0x0,  /* [3161] */
    (xdc_Char)0x48,  /* [3162] */
    (xdc_Char)0x65,  /* [3163] */
    (xdc_Char)0x61,  /* [3164] */
    (xdc_Char)0x70,  /* [3165] */
    (xdc_Char)0x42,  /* [3166] */
    (xdc_Char)0x75,  /* [3167] */
    (xdc_Char)0x66,  /* [3168] */
    (xdc_Char)0x5f,  /* [3169] */
    (xdc_Char)0x63,  /* [3170] */
    (xdc_Char)0x72,  /* [3171] */
    (xdc_Char)0x65,  /* [3172] */
    (xdc_Char)0x61,  /* [3173] */
    (xdc_Char)0x74,  /* [3174] */
    (xdc_Char)0x65,  /* [3175] */
    (xdc_Char)0x27,  /* [3176] */
    (xdc_Char)0x73,  /* [3177] */
    (xdc_Char)0x20,  /* [3178] */
    (xdc_Char)0x62,  /* [3179] */
    (xdc_Char)0x75,  /* [3180] */
    (xdc_Char)0x66,  /* [3181] */
    (xdc_Char)0x53,  /* [3182] */
    (xdc_Char)0x69,  /* [3183] */
    (xdc_Char)0x7a,  /* [3184] */
    (xdc_Char)0x65,  /* [3185] */
    (xdc_Char)0x20,  /* [3186] */
    (xdc_Char)0x70,  /* [3187] */
    (xdc_Char)0x61,  /* [3188] */
    (xdc_Char)0x72,  /* [3189] */
    (xdc_Char)0x61,  /* [3190] */
    (xdc_Char)0x6d,  /* [3191] */
    (xdc_Char)0x65,  /* [3192] */
    (xdc_Char)0x74,  /* [3193] */
    (xdc_Char)0x65,  /* [3194] */
    (xdc_Char)0x72,  /* [3195] */
    (xdc_Char)0x20,  /* [3196] */
    (xdc_Char)0x69,  /* [3197] */
    (xdc_Char)0x73,  /* [3198] */
    (xdc_Char)0x20,  /* [3199] */
    (xdc_Char)0x69,  /* [3200] */
    (xdc_Char)0x6e,  /* [3201] */
    (xdc_Char)0x76,  /* [3202] */
    (xdc_Char)0x61,  /* [3203] */
    (xdc_Char)0x6c,  /* [3204] */
    (xdc_Char)0x69,  /* [3205] */
    (xdc_Char)0x64,  /* [3206] */
    (xdc_Char)0x20,  /* [3207] */
    (xdc_Char)0x28,  /* [3208] */
    (xdc_Char)0x74,  /* [3209] */
    (xdc_Char)0x6f,  /* [3210] */
    (xdc_Char)0x6f,  /* [3211] */
    (xdc_Char)0x20,  /* [3212] */
    (xdc_Char)0x73,  /* [3213] */
    (xdc_Char)0x6d,  /* [3214] */
    (xdc_Char)0x61,  /* [3215] */
    (xdc_Char)0x6c,  /* [3216] */
    (xdc_Char)0x6c,  /* [3217] */
    (xdc_Char)0x29,  /* [3218] */
    (xdc_Char)0x0,  /* [3219] */
    (xdc_Char)0x43,  /* [3220] */
    (xdc_Char)0x61,  /* [3221] */
    (xdc_Char)0x6e,  /* [3222] */
    (xdc_Char)0x6e,  /* [3223] */
    (xdc_Char)0x6f,  /* [3224] */
    (xdc_Char)0x74,  /* [3225] */
    (xdc_Char)0x20,  /* [3226] */
    (xdc_Char)0x63,  /* [3227] */
    (xdc_Char)0x61,  /* [3228] */
    (xdc_Char)0x6c,  /* [3229] */
    (xdc_Char)0x6c,  /* [3230] */
    (xdc_Char)0x20,  /* [3231] */
    (xdc_Char)0x48,  /* [3232] */
    (xdc_Char)0x65,  /* [3233] */
    (xdc_Char)0x61,  /* [3234] */
    (xdc_Char)0x70,  /* [3235] */
    (xdc_Char)0x42,  /* [3236] */
    (xdc_Char)0x75,  /* [3237] */
    (xdc_Char)0x66,  /* [3238] */
    (xdc_Char)0x5f,  /* [3239] */
    (xdc_Char)0x66,  /* [3240] */
    (xdc_Char)0x72,  /* [3241] */
    (xdc_Char)0x65,  /* [3242] */
    (xdc_Char)0x65,  /* [3243] */
    (xdc_Char)0x20,  /* [3244] */
    (xdc_Char)0x77,  /* [3245] */
    (xdc_Char)0x68,  /* [3246] */
    (xdc_Char)0x65,  /* [3247] */
    (xdc_Char)0x6e,  /* [3248] */
    (xdc_Char)0x20,  /* [3249] */
    (xdc_Char)0x6e,  /* [3250] */
    (xdc_Char)0x6f,  /* [3251] */
    (xdc_Char)0x20,  /* [3252] */
    (xdc_Char)0x62,  /* [3253] */
    (xdc_Char)0x6c,  /* [3254] */
    (xdc_Char)0x6f,  /* [3255] */
    (xdc_Char)0x63,  /* [3256] */
    (xdc_Char)0x6b,  /* [3257] */
    (xdc_Char)0x73,  /* [3258] */
    (xdc_Char)0x20,  /* [3259] */
    (xdc_Char)0x68,  /* [3260] */
    (xdc_Char)0x61,  /* [3261] */
    (xdc_Char)0x76,  /* [3262] */
    (xdc_Char)0x65,  /* [3263] */
    (xdc_Char)0x20,  /* [3264] */
    (xdc_Char)0x62,  /* [3265] */
    (xdc_Char)0x65,  /* [3266] */
    (xdc_Char)0x65,  /* [3267] */
    (xdc_Char)0x6e,  /* [3268] */
    (xdc_Char)0x20,  /* [3269] */
    (xdc_Char)0x61,  /* [3270] */
    (xdc_Char)0x6c,  /* [3271] */
    (xdc_Char)0x6c,  /* [3272] */
    (xdc_Char)0x6f,  /* [3273] */
    (xdc_Char)0x63,  /* [3274] */
    (xdc_Char)0x61,  /* [3275] */
    (xdc_Char)0x74,  /* [3276] */
    (xdc_Char)0x65,  /* [3277] */
    (xdc_Char)0x64,  /* [3278] */
    (xdc_Char)0x0,  /* [3279] */
    (xdc_Char)0x41,  /* [3280] */
    (xdc_Char)0x5f,  /* [3281] */
    (xdc_Char)0x69,  /* [3282] */
    (xdc_Char)0x6e,  /* [3283] */
    (xdc_Char)0x76,  /* [3284] */
    (xdc_Char)0x61,  /* [3285] */
    (xdc_Char)0x6c,  /* [3286] */
    (xdc_Char)0x69,  /* [3287] */
    (xdc_Char)0x64,  /* [3288] */
    (xdc_Char)0x46,  /* [3289] */
    (xdc_Char)0x72,  /* [3290] */
    (xdc_Char)0x65,  /* [3291] */
    (xdc_Char)0x65,  /* [3292] */
    (xdc_Char)0x3a,  /* [3293] */
    (xdc_Char)0x20,  /* [3294] */
    (xdc_Char)0x49,  /* [3295] */
    (xdc_Char)0x6e,  /* [3296] */
    (xdc_Char)0x76,  /* [3297] */
    (xdc_Char)0x61,  /* [3298] */
    (xdc_Char)0x6c,  /* [3299] */
    (xdc_Char)0x69,  /* [3300] */
    (xdc_Char)0x64,  /* [3301] */
    (xdc_Char)0x20,  /* [3302] */
    (xdc_Char)0x66,  /* [3303] */
    (xdc_Char)0x72,  /* [3304] */
    (xdc_Char)0x65,  /* [3305] */
    (xdc_Char)0x65,  /* [3306] */
    (xdc_Char)0x0,  /* [3307] */
    (xdc_Char)0x41,  /* [3308] */
    (xdc_Char)0x5f,  /* [3309] */
    (xdc_Char)0x7a,  /* [3310] */
    (xdc_Char)0x65,  /* [3311] */
    (xdc_Char)0x72,  /* [3312] */
    (xdc_Char)0x6f,  /* [3313] */
    (xdc_Char)0x42,  /* [3314] */
    (xdc_Char)0x6c,  /* [3315] */
    (xdc_Char)0x6f,  /* [3316] */
    (xdc_Char)0x63,  /* [3317] */
    (xdc_Char)0x6b,  /* [3318] */
    (xdc_Char)0x3a,  /* [3319] */
    (xdc_Char)0x20,  /* [3320] */
    (xdc_Char)0x43,  /* [3321] */
    (xdc_Char)0x61,  /* [3322] */
    (xdc_Char)0x6e,  /* [3323] */
    (xdc_Char)0x6e,  /* [3324] */
    (xdc_Char)0x6f,  /* [3325] */
    (xdc_Char)0x74,  /* [3326] */
    (xdc_Char)0x20,  /* [3327] */
    (xdc_Char)0x61,  /* [3328] */
    (xdc_Char)0x6c,  /* [3329] */
    (xdc_Char)0x6c,  /* [3330] */
    (xdc_Char)0x6f,  /* [3331] */
    (xdc_Char)0x63,  /* [3332] */
    (xdc_Char)0x61,  /* [3333] */
    (xdc_Char)0x74,  /* [3334] */
    (xdc_Char)0x65,  /* [3335] */
    (xdc_Char)0x20,  /* [3336] */
    (xdc_Char)0x73,  /* [3337] */
    (xdc_Char)0x69,  /* [3338] */
    (xdc_Char)0x7a,  /* [3339] */
    (xdc_Char)0x65,  /* [3340] */
    (xdc_Char)0x20,  /* [3341] */
    (xdc_Char)0x30,  /* [3342] */
    (xdc_Char)0x0,  /* [3343] */
    (xdc_Char)0x41,  /* [3344] */
    (xdc_Char)0x5f,  /* [3345] */
    (xdc_Char)0x68,  /* [3346] */
    (xdc_Char)0x65,  /* [3347] */
    (xdc_Char)0x61,  /* [3348] */
    (xdc_Char)0x70,  /* [3349] */
    (xdc_Char)0x53,  /* [3350] */
    (xdc_Char)0x69,  /* [3351] */
    (xdc_Char)0x7a,  /* [3352] */
    (xdc_Char)0x65,  /* [3353] */
    (xdc_Char)0x3a,  /* [3354] */
    (xdc_Char)0x20,  /* [3355] */
    (xdc_Char)0x52,  /* [3356] */
    (xdc_Char)0x65,  /* [3357] */
    (xdc_Char)0x71,  /* [3358] */
    (xdc_Char)0x75,  /* [3359] */
    (xdc_Char)0x65,  /* [3360] */
    (xdc_Char)0x73,  /* [3361] */
    (xdc_Char)0x74,  /* [3362] */
    (xdc_Char)0x65,  /* [3363] */
    (xdc_Char)0x64,  /* [3364] */
    (xdc_Char)0x20,  /* [3365] */
    (xdc_Char)0x68,  /* [3366] */
    (xdc_Char)0x65,  /* [3367] */
    (xdc_Char)0x61,  /* [3368] */
    (xdc_Char)0x70,  /* [3369] */
    (xdc_Char)0x20,  /* [3370] */
    (xdc_Char)0x73,  /* [3371] */
    (xdc_Char)0x69,  /* [3372] */
    (xdc_Char)0x7a,  /* [3373] */
    (xdc_Char)0x65,  /* [3374] */
    (xdc_Char)0x20,  /* [3375] */
    (xdc_Char)0x69,  /* [3376] */
    (xdc_Char)0x73,  /* [3377] */
    (xdc_Char)0x20,  /* [3378] */
    (xdc_Char)0x74,  /* [3379] */
    (xdc_Char)0x6f,  /* [3380] */
    (xdc_Char)0x6f,  /* [3381] */
    (xdc_Char)0x20,  /* [3382] */
    (xdc_Char)0x73,  /* [3383] */
    (xdc_Char)0x6d,  /* [3384] */
    (xdc_Char)0x61,  /* [3385] */
    (xdc_Char)0x6c,  /* [3386] */
    (xdc_Char)0x6c,  /* [3387] */
    (xdc_Char)0x0,  /* [3388] */
    (xdc_Char)0x41,  /* [3389] */
    (xdc_Char)0x5f,  /* [3390] */
    (xdc_Char)0x61,  /* [3391] */
    (xdc_Char)0x6c,  /* [3392] */
    (xdc_Char)0x69,  /* [3393] */
    (xdc_Char)0x67,  /* [3394] */
    (xdc_Char)0x6e,  /* [3395] */
    (xdc_Char)0x3a,  /* [3396] */
    (xdc_Char)0x20,  /* [3397] */
    (xdc_Char)0x52,  /* [3398] */
    (xdc_Char)0x65,  /* [3399] */
    (xdc_Char)0x71,  /* [3400] */
    (xdc_Char)0x75,  /* [3401] */
    (xdc_Char)0x65,  /* [3402] */
    (xdc_Char)0x73,  /* [3403] */
    (xdc_Char)0x74,  /* [3404] */
    (xdc_Char)0x65,  /* [3405] */
    (xdc_Char)0x64,  /* [3406] */
    (xdc_Char)0x20,  /* [3407] */
    (xdc_Char)0x61,  /* [3408] */
    (xdc_Char)0x6c,  /* [3409] */
    (xdc_Char)0x69,  /* [3410] */
    (xdc_Char)0x67,  /* [3411] */
    (xdc_Char)0x6e,  /* [3412] */
    (xdc_Char)0x20,  /* [3413] */
    (xdc_Char)0x69,  /* [3414] */
    (xdc_Char)0x73,  /* [3415] */
    (xdc_Char)0x20,  /* [3416] */
    (xdc_Char)0x6e,  /* [3417] */
    (xdc_Char)0x6f,  /* [3418] */
    (xdc_Char)0x74,  /* [3419] */
    (xdc_Char)0x20,  /* [3420] */
    (xdc_Char)0x61,  /* [3421] */
    (xdc_Char)0x20,  /* [3422] */
    (xdc_Char)0x70,  /* [3423] */
    (xdc_Char)0x6f,  /* [3424] */
    (xdc_Char)0x77,  /* [3425] */
    (xdc_Char)0x65,  /* [3426] */
    (xdc_Char)0x72,  /* [3427] */
    (xdc_Char)0x20,  /* [3428] */
    (xdc_Char)0x6f,  /* [3429] */
    (xdc_Char)0x66,  /* [3430] */
    (xdc_Char)0x20,  /* [3431] */
    (xdc_Char)0x32,  /* [3432] */
    (xdc_Char)0x0,  /* [3433] */
    (xdc_Char)0x49,  /* [3434] */
    (xdc_Char)0x6e,  /* [3435] */
    (xdc_Char)0x76,  /* [3436] */
    (xdc_Char)0x61,  /* [3437] */
    (xdc_Char)0x6c,  /* [3438] */
    (xdc_Char)0x69,  /* [3439] */
    (xdc_Char)0x64,  /* [3440] */
    (xdc_Char)0x20,  /* [3441] */
    (xdc_Char)0x62,  /* [3442] */
    (xdc_Char)0x6c,  /* [3443] */
    (xdc_Char)0x6f,  /* [3444] */
    (xdc_Char)0x63,  /* [3445] */
    (xdc_Char)0x6b,  /* [3446] */
    (xdc_Char)0x20,  /* [3447] */
    (xdc_Char)0x61,  /* [3448] */
    (xdc_Char)0x64,  /* [3449] */
    (xdc_Char)0x64,  /* [3450] */
    (xdc_Char)0x72,  /* [3451] */
    (xdc_Char)0x65,  /* [3452] */
    (xdc_Char)0x73,  /* [3453] */
    (xdc_Char)0x73,  /* [3454] */
    (xdc_Char)0x20,  /* [3455] */
    (xdc_Char)0x6f,  /* [3456] */
    (xdc_Char)0x6e,  /* [3457] */
    (xdc_Char)0x20,  /* [3458] */
    (xdc_Char)0x74,  /* [3459] */
    (xdc_Char)0x68,  /* [3460] */
    (xdc_Char)0x65,  /* [3461] */
    (xdc_Char)0x20,  /* [3462] */
    (xdc_Char)0x66,  /* [3463] */
    (xdc_Char)0x72,  /* [3464] */
    (xdc_Char)0x65,  /* [3465] */
    (xdc_Char)0x65,  /* [3466] */
    (xdc_Char)0x2e,  /* [3467] */
    (xdc_Char)0x20,  /* [3468] */
    (xdc_Char)0x46,  /* [3469] */
    (xdc_Char)0x61,  /* [3470] */
    (xdc_Char)0x69,  /* [3471] */
    (xdc_Char)0x6c,  /* [3472] */
    (xdc_Char)0x65,  /* [3473] */
    (xdc_Char)0x64,  /* [3474] */
    (xdc_Char)0x20,  /* [3475] */
    (xdc_Char)0x74,  /* [3476] */
    (xdc_Char)0x6f,  /* [3477] */
    (xdc_Char)0x20,  /* [3478] */
    (xdc_Char)0x66,  /* [3479] */
    (xdc_Char)0x72,  /* [3480] */
    (xdc_Char)0x65,  /* [3481] */
    (xdc_Char)0x65,  /* [3482] */
    (xdc_Char)0x20,  /* [3483] */
    (xdc_Char)0x62,  /* [3484] */
    (xdc_Char)0x6c,  /* [3485] */
    (xdc_Char)0x6f,  /* [3486] */
    (xdc_Char)0x63,  /* [3487] */
    (xdc_Char)0x6b,  /* [3488] */
    (xdc_Char)0x20,  /* [3489] */
    (xdc_Char)0x62,  /* [3490] */
    (xdc_Char)0x61,  /* [3491] */
    (xdc_Char)0x63,  /* [3492] */
    (xdc_Char)0x6b,  /* [3493] */
    (xdc_Char)0x20,  /* [3494] */
    (xdc_Char)0x74,  /* [3495] */
    (xdc_Char)0x6f,  /* [3496] */
    (xdc_Char)0x20,  /* [3497] */
    (xdc_Char)0x68,  /* [3498] */
    (xdc_Char)0x65,  /* [3499] */
    (xdc_Char)0x61,  /* [3500] */
    (xdc_Char)0x70,  /* [3501] */
    (xdc_Char)0x2e,  /* [3502] */
    (xdc_Char)0x0,  /* [3503] */
    (xdc_Char)0x41,  /* [3504] */
    (xdc_Char)0x5f,  /* [3505] */
    (xdc_Char)0x64,  /* [3506] */
    (xdc_Char)0x6f,  /* [3507] */
    (xdc_Char)0x75,  /* [3508] */
    (xdc_Char)0x62,  /* [3509] */
    (xdc_Char)0x6c,  /* [3510] */
    (xdc_Char)0x65,  /* [3511] */
    (xdc_Char)0x46,  /* [3512] */
    (xdc_Char)0x72,  /* [3513] */
    (xdc_Char)0x65,  /* [3514] */
    (xdc_Char)0x65,  /* [3515] */
    (xdc_Char)0x3a,  /* [3516] */
    (xdc_Char)0x20,  /* [3517] */
    (xdc_Char)0x42,  /* [3518] */
    (xdc_Char)0x75,  /* [3519] */
    (xdc_Char)0x66,  /* [3520] */
    (xdc_Char)0x66,  /* [3521] */
    (xdc_Char)0x65,  /* [3522] */
    (xdc_Char)0x72,  /* [3523] */
    (xdc_Char)0x20,  /* [3524] */
    (xdc_Char)0x61,  /* [3525] */
    (xdc_Char)0x6c,  /* [3526] */
    (xdc_Char)0x72,  /* [3527] */
    (xdc_Char)0x65,  /* [3528] */
    (xdc_Char)0x61,  /* [3529] */
    (xdc_Char)0x64,  /* [3530] */
    (xdc_Char)0x79,  /* [3531] */
    (xdc_Char)0x20,  /* [3532] */
    (xdc_Char)0x66,  /* [3533] */
    (xdc_Char)0x72,  /* [3534] */
    (xdc_Char)0x65,  /* [3535] */
    (xdc_Char)0x65,  /* [3536] */
    (xdc_Char)0x0,  /* [3537] */
    (xdc_Char)0x41,  /* [3538] */
    (xdc_Char)0x5f,  /* [3539] */
    (xdc_Char)0x62,  /* [3540] */
    (xdc_Char)0x75,  /* [3541] */
    (xdc_Char)0x66,  /* [3542] */
    (xdc_Char)0x4f,  /* [3543] */
    (xdc_Char)0x76,  /* [3544] */
    (xdc_Char)0x65,  /* [3545] */
    (xdc_Char)0x72,  /* [3546] */
    (xdc_Char)0x66,  /* [3547] */
    (xdc_Char)0x6c,  /* [3548] */
    (xdc_Char)0x6f,  /* [3549] */
    (xdc_Char)0x77,  /* [3550] */
    (xdc_Char)0x3a,  /* [3551] */
    (xdc_Char)0x20,  /* [3552] */
    (xdc_Char)0x42,  /* [3553] */
    (xdc_Char)0x75,  /* [3554] */
    (xdc_Char)0x66,  /* [3555] */
    (xdc_Char)0x66,  /* [3556] */
    (xdc_Char)0x65,  /* [3557] */
    (xdc_Char)0x72,  /* [3558] */
    (xdc_Char)0x20,  /* [3559] */
    (xdc_Char)0x6f,  /* [3560] */
    (xdc_Char)0x76,  /* [3561] */
    (xdc_Char)0x65,  /* [3562] */
    (xdc_Char)0x72,  /* [3563] */
    (xdc_Char)0x66,  /* [3564] */
    (xdc_Char)0x6c,  /* [3565] */
    (xdc_Char)0x6f,  /* [3566] */
    (xdc_Char)0x77,  /* [3567] */
    (xdc_Char)0x0,  /* [3568] */
    (xdc_Char)0x41,  /* [3569] */
    (xdc_Char)0x5f,  /* [3570] */
    (xdc_Char)0x6e,  /* [3571] */
    (xdc_Char)0x6f,  /* [3572] */
    (xdc_Char)0x74,  /* [3573] */
    (xdc_Char)0x45,  /* [3574] */
    (xdc_Char)0x6d,  /* [3575] */
    (xdc_Char)0x70,  /* [3576] */
    (xdc_Char)0x74,  /* [3577] */
    (xdc_Char)0x79,  /* [3578] */
    (xdc_Char)0x3a,  /* [3579] */
    (xdc_Char)0x20,  /* [3580] */
    (xdc_Char)0x48,  /* [3581] */
    (xdc_Char)0x65,  /* [3582] */
    (xdc_Char)0x61,  /* [3583] */
    (xdc_Char)0x70,  /* [3584] */
    (xdc_Char)0x20,  /* [3585] */
    (xdc_Char)0x6e,  /* [3586] */
    (xdc_Char)0x6f,  /* [3587] */
    (xdc_Char)0x74,  /* [3588] */
    (xdc_Char)0x20,  /* [3589] */
    (xdc_Char)0x65,  /* [3590] */
    (xdc_Char)0x6d,  /* [3591] */
    (xdc_Char)0x70,  /* [3592] */
    (xdc_Char)0x74,  /* [3593] */
    (xdc_Char)0x79,  /* [3594] */
    (xdc_Char)0x0,  /* [3595] */
    (xdc_Char)0x41,  /* [3596] */
    (xdc_Char)0x5f,  /* [3597] */
    (xdc_Char)0x6e,  /* [3598] */
    (xdc_Char)0x75,  /* [3599] */
    (xdc_Char)0x6c,  /* [3600] */
    (xdc_Char)0x6c,  /* [3601] */
    (xdc_Char)0x4f,  /* [3602] */
    (xdc_Char)0x62,  /* [3603] */
    (xdc_Char)0x6a,  /* [3604] */
    (xdc_Char)0x65,  /* [3605] */
    (xdc_Char)0x63,  /* [3606] */
    (xdc_Char)0x74,  /* [3607] */
    (xdc_Char)0x3a,  /* [3608] */
    (xdc_Char)0x20,  /* [3609] */
    (xdc_Char)0x48,  /* [3610] */
    (xdc_Char)0x65,  /* [3611] */
    (xdc_Char)0x61,  /* [3612] */
    (xdc_Char)0x70,  /* [3613] */
    (xdc_Char)0x54,  /* [3614] */
    (xdc_Char)0x72,  /* [3615] */
    (xdc_Char)0x61,  /* [3616] */
    (xdc_Char)0x63,  /* [3617] */
    (xdc_Char)0x6b,  /* [3618] */
    (xdc_Char)0x5f,  /* [3619] */
    (xdc_Char)0x70,  /* [3620] */
    (xdc_Char)0x72,  /* [3621] */
    (xdc_Char)0x69,  /* [3622] */
    (xdc_Char)0x6e,  /* [3623] */
    (xdc_Char)0x74,  /* [3624] */
    (xdc_Char)0x48,  /* [3625] */
    (xdc_Char)0x65,  /* [3626] */
    (xdc_Char)0x61,  /* [3627] */
    (xdc_Char)0x70,  /* [3628] */
    (xdc_Char)0x20,  /* [3629] */
    (xdc_Char)0x63,  /* [3630] */
    (xdc_Char)0x61,  /* [3631] */
    (xdc_Char)0x6c,  /* [3632] */
    (xdc_Char)0x6c,  /* [3633] */
    (xdc_Char)0x65,  /* [3634] */
    (xdc_Char)0x64,  /* [3635] */
    (xdc_Char)0x20,  /* [3636] */
    (xdc_Char)0x77,  /* [3637] */
    (xdc_Char)0x69,  /* [3638] */
    (xdc_Char)0x74,  /* [3639] */
    (xdc_Char)0x68,  /* [3640] */
    (xdc_Char)0x20,  /* [3641] */
    (xdc_Char)0x6e,  /* [3642] */
    (xdc_Char)0x75,  /* [3643] */
    (xdc_Char)0x6c,  /* [3644] */
    (xdc_Char)0x6c,  /* [3645] */
    (xdc_Char)0x20,  /* [3646] */
    (xdc_Char)0x6f,  /* [3647] */
    (xdc_Char)0x62,  /* [3648] */
    (xdc_Char)0x6a,  /* [3649] */
    (xdc_Char)0x0,  /* [3650] */
    (xdc_Char)0x61,  /* [3651] */
    (xdc_Char)0x73,  /* [3652] */
    (xdc_Char)0x73,  /* [3653] */
    (xdc_Char)0x65,  /* [3654] */
    (xdc_Char)0x72,  /* [3655] */
    (xdc_Char)0x74,  /* [3656] */
    (xdc_Char)0x69,  /* [3657] */
    (xdc_Char)0x6f,  /* [3658] */
    (xdc_Char)0x6e,  /* [3659] */
    (xdc_Char)0x20,  /* [3660] */
    (xdc_Char)0x66,  /* [3661] */
    (xdc_Char)0x61,  /* [3662] */
    (xdc_Char)0x69,  /* [3663] */
    (xdc_Char)0x6c,  /* [3664] */
    (xdc_Char)0x75,  /* [3665] */
    (xdc_Char)0x72,  /* [3666] */
    (xdc_Char)0x65,  /* [3667] */
    (xdc_Char)0x25,  /* [3668] */
    (xdc_Char)0x73,  /* [3669] */
    (xdc_Char)0x25,  /* [3670] */
    (xdc_Char)0x73,  /* [3671] */
    (xdc_Char)0x0,  /* [3672] */
    (xdc_Char)0x25,  /* [3673] */
    (xdc_Char)0x24,  /* [3674] */
    (xdc_Char)0x53,  /* [3675] */
    (xdc_Char)0x0,  /* [3676] */
    (xdc_Char)0x6f,  /* [3677] */
    (xdc_Char)0x75,  /* [3678] */
    (xdc_Char)0x74,  /* [3679] */
    (xdc_Char)0x20,  /* [3680] */
    (xdc_Char)0x6f,  /* [3681] */
    (xdc_Char)0x66,  /* [3682] */
    (xdc_Char)0x20,  /* [3683] */
    (xdc_Char)0x6d,  /* [3684] */
    (xdc_Char)0x65,  /* [3685] */
    (xdc_Char)0x6d,  /* [3686] */
    (xdc_Char)0x6f,  /* [3687] */
    (xdc_Char)0x72,  /* [3688] */
    (xdc_Char)0x79,  /* [3689] */
    (xdc_Char)0x3a,  /* [3690] */
    (xdc_Char)0x20,  /* [3691] */
    (xdc_Char)0x68,  /* [3692] */
    (xdc_Char)0x65,  /* [3693] */
    (xdc_Char)0x61,  /* [3694] */
    (xdc_Char)0x70,  /* [3695] */
    (xdc_Char)0x3d,  /* [3696] */
    (xdc_Char)0x30,  /* [3697] */
    (xdc_Char)0x78,  /* [3698] */
    (xdc_Char)0x25,  /* [3699] */
    (xdc_Char)0x78,  /* [3700] */
    (xdc_Char)0x2c,  /* [3701] */
    (xdc_Char)0x20,  /* [3702] */
    (xdc_Char)0x73,  /* [3703] */
    (xdc_Char)0x69,  /* [3704] */
    (xdc_Char)0x7a,  /* [3705] */
    (xdc_Char)0x65,  /* [3706] */
    (xdc_Char)0x3d,  /* [3707] */
    (xdc_Char)0x25,  /* [3708] */
    (xdc_Char)0x75,  /* [3709] */
    (xdc_Char)0x0,  /* [3710] */
    (xdc_Char)0x25,  /* [3711] */
    (xdc_Char)0x73,  /* [3712] */
    (xdc_Char)0x20,  /* [3713] */
    (xdc_Char)0x30,  /* [3714] */
    (xdc_Char)0x78,  /* [3715] */
    (xdc_Char)0x25,  /* [3716] */
    (xdc_Char)0x78,  /* [3717] */
    (xdc_Char)0x0,  /* [3718] */
    (xdc_Char)0x45,  /* [3719] */
    (xdc_Char)0x5f,  /* [3720] */
    (xdc_Char)0x62,  /* [3721] */
    (xdc_Char)0x61,  /* [3722] */
    (xdc_Char)0x64,  /* [3723] */
    (xdc_Char)0x4c,  /* [3724] */
    (xdc_Char)0x65,  /* [3725] */
    (xdc_Char)0x76,  /* [3726] */
    (xdc_Char)0x65,  /* [3727] */
    (xdc_Char)0x6c,  /* [3728] */
    (xdc_Char)0x3a,  /* [3729] */
    (xdc_Char)0x20,  /* [3730] */
    (xdc_Char)0x42,  /* [3731] */
    (xdc_Char)0x61,  /* [3732] */
    (xdc_Char)0x64,  /* [3733] */
    (xdc_Char)0x20,  /* [3734] */
    (xdc_Char)0x66,  /* [3735] */
    (xdc_Char)0x69,  /* [3736] */
    (xdc_Char)0x6c,  /* [3737] */
    (xdc_Char)0x74,  /* [3738] */
    (xdc_Char)0x65,  /* [3739] */
    (xdc_Char)0x72,  /* [3740] */
    (xdc_Char)0x20,  /* [3741] */
    (xdc_Char)0x6c,  /* [3742] */
    (xdc_Char)0x65,  /* [3743] */
    (xdc_Char)0x76,  /* [3744] */
    (xdc_Char)0x65,  /* [3745] */
    (xdc_Char)0x6c,  /* [3746] */
    (xdc_Char)0x20,  /* [3747] */
    (xdc_Char)0x76,  /* [3748] */
    (xdc_Char)0x61,  /* [3749] */
    (xdc_Char)0x6c,  /* [3750] */
    (xdc_Char)0x75,  /* [3751] */
    (xdc_Char)0x65,  /* [3752] */
    (xdc_Char)0x3a,  /* [3753] */
    (xdc_Char)0x20,  /* [3754] */
    (xdc_Char)0x25,  /* [3755] */
    (xdc_Char)0x64,  /* [3756] */
    (xdc_Char)0x0,  /* [3757] */
    (xdc_Char)0x66,  /* [3758] */
    (xdc_Char)0x72,  /* [3759] */
    (xdc_Char)0x65,  /* [3760] */
    (xdc_Char)0x65,  /* [3761] */
    (xdc_Char)0x28,  /* [3762] */
    (xdc_Char)0x29,  /* [3763] */
    (xdc_Char)0x20,  /* [3764] */
    (xdc_Char)0x69,  /* [3765] */
    (xdc_Char)0x6e,  /* [3766] */
    (xdc_Char)0x76,  /* [3767] */
    (xdc_Char)0x61,  /* [3768] */
    (xdc_Char)0x6c,  /* [3769] */
    (xdc_Char)0x69,  /* [3770] */
    (xdc_Char)0x64,  /* [3771] */
    (xdc_Char)0x20,  /* [3772] */
    (xdc_Char)0x69,  /* [3773] */
    (xdc_Char)0x6e,  /* [3774] */
    (xdc_Char)0x20,  /* [3775] */
    (xdc_Char)0x67,  /* [3776] */
    (xdc_Char)0x72,  /* [3777] */
    (xdc_Char)0x6f,  /* [3778] */
    (xdc_Char)0x77,  /* [3779] */
    (xdc_Char)0x74,  /* [3780] */
    (xdc_Char)0x68,  /* [3781] */
    (xdc_Char)0x2d,  /* [3782] */
    (xdc_Char)0x6f,  /* [3783] */
    (xdc_Char)0x6e,  /* [3784] */
    (xdc_Char)0x6c,  /* [3785] */
    (xdc_Char)0x79,  /* [3786] */
    (xdc_Char)0x20,  /* [3787] */
    (xdc_Char)0x48,  /* [3788] */
    (xdc_Char)0x65,  /* [3789] */
    (xdc_Char)0x61,  /* [3790] */
    (xdc_Char)0x70,  /* [3791] */
    (xdc_Char)0x4d,  /* [3792] */
    (xdc_Char)0x69,  /* [3793] */
    (xdc_Char)0x6e,  /* [3794] */
    (xdc_Char)0x0,  /* [3795] */
    (xdc_Char)0x54,  /* [3796] */
    (xdc_Char)0x68,  /* [3797] */
    (xdc_Char)0x65,  /* [3798] */
    (xdc_Char)0x20,  /* [3799] */
    (xdc_Char)0x52,  /* [3800] */
    (xdc_Char)0x54,  /* [3801] */
    (xdc_Char)0x53,  /* [3802] */
    (xdc_Char)0x20,  /* [3803] */
    (xdc_Char)0x68,  /* [3804] */
    (xdc_Char)0x65,  /* [3805] */
    (xdc_Char)0x61,  /* [3806] */
    (xdc_Char)0x70,  /* [3807] */
    (xdc_Char)0x20,  /* [3808] */
    (xdc_Char)0x69,  /* [3809] */
    (xdc_Char)0x73,  /* [3810] */
    (xdc_Char)0x20,  /* [3811] */
    (xdc_Char)0x75,  /* [3812] */
    (xdc_Char)0x73,  /* [3813] */
    (xdc_Char)0x65,  /* [3814] */
    (xdc_Char)0x64,  /* [3815] */
    (xdc_Char)0x20,  /* [3816] */
    (xdc_Char)0x75,  /* [3817] */
    (xdc_Char)0x70,  /* [3818] */
    (xdc_Char)0x2e,  /* [3819] */
    (xdc_Char)0x20,  /* [3820] */
    (xdc_Char)0x45,  /* [3821] */
    (xdc_Char)0x78,  /* [3822] */
    (xdc_Char)0x61,  /* [3823] */
    (xdc_Char)0x6d,  /* [3824] */
    (xdc_Char)0x69,  /* [3825] */
    (xdc_Char)0x6e,  /* [3826] */
    (xdc_Char)0x65,  /* [3827] */
    (xdc_Char)0x20,  /* [3828] */
    (xdc_Char)0x50,  /* [3829] */
    (xdc_Char)0x72,  /* [3830] */
    (xdc_Char)0x6f,  /* [3831] */
    (xdc_Char)0x67,  /* [3832] */
    (xdc_Char)0x72,  /* [3833] */
    (xdc_Char)0x61,  /* [3834] */
    (xdc_Char)0x6d,  /* [3835] */
    (xdc_Char)0x2e,  /* [3836] */
    (xdc_Char)0x68,  /* [3837] */
    (xdc_Char)0x65,  /* [3838] */
    (xdc_Char)0x61,  /* [3839] */
    (xdc_Char)0x70,  /* [3840] */
    (xdc_Char)0x2e,  /* [3841] */
    (xdc_Char)0x0,  /* [3842] */
    (xdc_Char)0x45,  /* [3843] */
    (xdc_Char)0x5f,  /* [3844] */
    (xdc_Char)0x62,  /* [3845] */
    (xdc_Char)0x61,  /* [3846] */
    (xdc_Char)0x64,  /* [3847] */
    (xdc_Char)0x43,  /* [3848] */
    (xdc_Char)0x6f,  /* [3849] */
    (xdc_Char)0x6d,  /* [3850] */
    (xdc_Char)0x6d,  /* [3851] */
    (xdc_Char)0x61,  /* [3852] */
    (xdc_Char)0x6e,  /* [3853] */
    (xdc_Char)0x64,  /* [3854] */
    (xdc_Char)0x3a,  /* [3855] */
    (xdc_Char)0x20,  /* [3856] */
    (xdc_Char)0x52,  /* [3857] */
    (xdc_Char)0x65,  /* [3858] */
    (xdc_Char)0x63,  /* [3859] */
    (xdc_Char)0x65,  /* [3860] */
    (xdc_Char)0x69,  /* [3861] */
    (xdc_Char)0x76,  /* [3862] */
    (xdc_Char)0x65,  /* [3863] */
    (xdc_Char)0x64,  /* [3864] */
    (xdc_Char)0x20,  /* [3865] */
    (xdc_Char)0x69,  /* [3866] */
    (xdc_Char)0x6e,  /* [3867] */
    (xdc_Char)0x76,  /* [3868] */
    (xdc_Char)0x61,  /* [3869] */
    (xdc_Char)0x6c,  /* [3870] */
    (xdc_Char)0x69,  /* [3871] */
    (xdc_Char)0x64,  /* [3872] */
    (xdc_Char)0x20,  /* [3873] */
    (xdc_Char)0x63,  /* [3874] */
    (xdc_Char)0x6f,  /* [3875] */
    (xdc_Char)0x6d,  /* [3876] */
    (xdc_Char)0x6d,  /* [3877] */
    (xdc_Char)0x61,  /* [3878] */
    (xdc_Char)0x6e,  /* [3879] */
    (xdc_Char)0x64,  /* [3880] */
    (xdc_Char)0x2c,  /* [3881] */
    (xdc_Char)0x20,  /* [3882] */
    (xdc_Char)0x69,  /* [3883] */
    (xdc_Char)0x64,  /* [3884] */
    (xdc_Char)0x3a,  /* [3885] */
    (xdc_Char)0x20,  /* [3886] */
    (xdc_Char)0x25,  /* [3887] */
    (xdc_Char)0x64,  /* [3888] */
    (xdc_Char)0x2e,  /* [3889] */
    (xdc_Char)0x0,  /* [3890] */
    (xdc_Char)0x45,  /* [3891] */
    (xdc_Char)0x5f,  /* [3892] */
    (xdc_Char)0x73,  /* [3893] */
    (xdc_Char)0x74,  /* [3894] */
    (xdc_Char)0x61,  /* [3895] */
    (xdc_Char)0x63,  /* [3896] */
    (xdc_Char)0x6b,  /* [3897] */
    (xdc_Char)0x4f,  /* [3898] */
    (xdc_Char)0x76,  /* [3899] */
    (xdc_Char)0x65,  /* [3900] */
    (xdc_Char)0x72,  /* [3901] */
    (xdc_Char)0x66,  /* [3902] */
    (xdc_Char)0x6c,  /* [3903] */
    (xdc_Char)0x6f,  /* [3904] */
    (xdc_Char)0x77,  /* [3905] */
    (xdc_Char)0x3a,  /* [3906] */
    (xdc_Char)0x20,  /* [3907] */
    (xdc_Char)0x49,  /* [3908] */
    (xdc_Char)0x53,  /* [3909] */
    (xdc_Char)0x52,  /* [3910] */
    (xdc_Char)0x20,  /* [3911] */
    (xdc_Char)0x73,  /* [3912] */
    (xdc_Char)0x74,  /* [3913] */
    (xdc_Char)0x61,  /* [3914] */
    (xdc_Char)0x63,  /* [3915] */
    (xdc_Char)0x6b,  /* [3916] */
    (xdc_Char)0x20,  /* [3917] */
    (xdc_Char)0x6f,  /* [3918] */
    (xdc_Char)0x76,  /* [3919] */
    (xdc_Char)0x65,  /* [3920] */
    (xdc_Char)0x72,  /* [3921] */
    (xdc_Char)0x66,  /* [3922] */
    (xdc_Char)0x6c,  /* [3923] */
    (xdc_Char)0x6f,  /* [3924] */
    (xdc_Char)0x77,  /* [3925] */
    (xdc_Char)0x2e,  /* [3926] */
    (xdc_Char)0x0,  /* [3927] */
    (xdc_Char)0x45,  /* [3928] */
    (xdc_Char)0x5f,  /* [3929] */
    (xdc_Char)0x73,  /* [3930] */
    (xdc_Char)0x74,  /* [3931] */
    (xdc_Char)0x61,  /* [3932] */
    (xdc_Char)0x63,  /* [3933] */
    (xdc_Char)0x6b,  /* [3934] */
    (xdc_Char)0x4f,  /* [3935] */
    (xdc_Char)0x76,  /* [3936] */
    (xdc_Char)0x65,  /* [3937] */
    (xdc_Char)0x72,  /* [3938] */
    (xdc_Char)0x66,  /* [3939] */
    (xdc_Char)0x6c,  /* [3940] */
    (xdc_Char)0x6f,  /* [3941] */
    (xdc_Char)0x77,  /* [3942] */
    (xdc_Char)0x3a,  /* [3943] */
    (xdc_Char)0x20,  /* [3944] */
    (xdc_Char)0x54,  /* [3945] */
    (xdc_Char)0x61,  /* [3946] */
    (xdc_Char)0x73,  /* [3947] */
    (xdc_Char)0x6b,  /* [3948] */
    (xdc_Char)0x20,  /* [3949] */
    (xdc_Char)0x30,  /* [3950] */
    (xdc_Char)0x78,  /* [3951] */
    (xdc_Char)0x25,  /* [3952] */
    (xdc_Char)0x78,  /* [3953] */
    (xdc_Char)0x20,  /* [3954] */
    (xdc_Char)0x73,  /* [3955] */
    (xdc_Char)0x74,  /* [3956] */
    (xdc_Char)0x61,  /* [3957] */
    (xdc_Char)0x63,  /* [3958] */
    (xdc_Char)0x6b,  /* [3959] */
    (xdc_Char)0x20,  /* [3960] */
    (xdc_Char)0x6f,  /* [3961] */
    (xdc_Char)0x76,  /* [3962] */
    (xdc_Char)0x65,  /* [3963] */
    (xdc_Char)0x72,  /* [3964] */
    (xdc_Char)0x66,  /* [3965] */
    (xdc_Char)0x6c,  /* [3966] */
    (xdc_Char)0x6f,  /* [3967] */
    (xdc_Char)0x77,  /* [3968] */
    (xdc_Char)0x2e,  /* [3969] */
    (xdc_Char)0x0,  /* [3970] */
    (xdc_Char)0x45,  /* [3971] */
    (xdc_Char)0x5f,  /* [3972] */
    (xdc_Char)0x73,  /* [3973] */
    (xdc_Char)0x70,  /* [3974] */
    (xdc_Char)0x4f,  /* [3975] */
    (xdc_Char)0x75,  /* [3976] */
    (xdc_Char)0x74,  /* [3977] */
    (xdc_Char)0x4f,  /* [3978] */
    (xdc_Char)0x66,  /* [3979] */
    (xdc_Char)0x42,  /* [3980] */
    (xdc_Char)0x6f,  /* [3981] */
    (xdc_Char)0x75,  /* [3982] */
    (xdc_Char)0x6e,  /* [3983] */
    (xdc_Char)0x64,  /* [3984] */
    (xdc_Char)0x73,  /* [3985] */
    (xdc_Char)0x3a,  /* [3986] */
    (xdc_Char)0x20,  /* [3987] */
    (xdc_Char)0x54,  /* [3988] */
    (xdc_Char)0x61,  /* [3989] */
    (xdc_Char)0x73,  /* [3990] */
    (xdc_Char)0x6b,  /* [3991] */
    (xdc_Char)0x20,  /* [3992] */
    (xdc_Char)0x30,  /* [3993] */
    (xdc_Char)0x78,  /* [3994] */
    (xdc_Char)0x25,  /* [3995] */
    (xdc_Char)0x78,  /* [3996] */
    (xdc_Char)0x20,  /* [3997] */
    (xdc_Char)0x73,  /* [3998] */
    (xdc_Char)0x74,  /* [3999] */
    (xdc_Char)0x61,  /* [4000] */
    (xdc_Char)0x63,  /* [4001] */
    (xdc_Char)0x6b,  /* [4002] */
    (xdc_Char)0x20,  /* [4003] */
    (xdc_Char)0x65,  /* [4004] */
    (xdc_Char)0x72,  /* [4005] */
    (xdc_Char)0x72,  /* [4006] */
    (xdc_Char)0x6f,  /* [4007] */
    (xdc_Char)0x72,  /* [4008] */
    (xdc_Char)0x2c,  /* [4009] */
    (xdc_Char)0x20,  /* [4010] */
    (xdc_Char)0x53,  /* [4011] */
    (xdc_Char)0x50,  /* [4012] */
    (xdc_Char)0x20,  /* [4013] */
    (xdc_Char)0x3d,  /* [4014] */
    (xdc_Char)0x20,  /* [4015] */
    (xdc_Char)0x30,  /* [4016] */
    (xdc_Char)0x78,  /* [4017] */
    (xdc_Char)0x25,  /* [4018] */
    (xdc_Char)0x78,  /* [4019] */
    (xdc_Char)0x2e,  /* [4020] */
    (xdc_Char)0x0,  /* [4021] */
    (xdc_Char)0x45,  /* [4022] */
    (xdc_Char)0x5f,  /* [4023] */
    (xdc_Char)0x64,  /* [4024] */
    (xdc_Char)0x65,  /* [4025] */
    (xdc_Char)0x6c,  /* [4026] */
    (xdc_Char)0x65,  /* [4027] */
    (xdc_Char)0x74,  /* [4028] */
    (xdc_Char)0x65,  /* [4029] */
    (xdc_Char)0x4e,  /* [4030] */
    (xdc_Char)0x6f,  /* [4031] */
    (xdc_Char)0x74,  /* [4032] */
    (xdc_Char)0x41,  /* [4033] */
    (xdc_Char)0x6c,  /* [4034] */
    (xdc_Char)0x6c,  /* [4035] */
    (xdc_Char)0x6f,  /* [4036] */
    (xdc_Char)0x77,  /* [4037] */
    (xdc_Char)0x65,  /* [4038] */
    (xdc_Char)0x64,  /* [4039] */
    (xdc_Char)0x3a,  /* [4040] */
    (xdc_Char)0x20,  /* [4041] */
    (xdc_Char)0x54,  /* [4042] */
    (xdc_Char)0x61,  /* [4043] */
    (xdc_Char)0x73,  /* [4044] */
    (xdc_Char)0x6b,  /* [4045] */
    (xdc_Char)0x20,  /* [4046] */
    (xdc_Char)0x30,  /* [4047] */
    (xdc_Char)0x78,  /* [4048] */
    (xdc_Char)0x25,  /* [4049] */
    (xdc_Char)0x78,  /* [4050] */
    (xdc_Char)0x2e,  /* [4051] */
    (xdc_Char)0x0,  /* [4052] */
    (xdc_Char)0x45,  /* [4053] */
    (xdc_Char)0x5f,  /* [4054] */
    (xdc_Char)0x61,  /* [4055] */
    (xdc_Char)0x6c,  /* [4056] */
    (xdc_Char)0x72,  /* [4057] */
    (xdc_Char)0x65,  /* [4058] */
    (xdc_Char)0x61,  /* [4059] */
    (xdc_Char)0x64,  /* [4060] */
    (xdc_Char)0x79,  /* [4061] */
    (xdc_Char)0x44,  /* [4062] */
    (xdc_Char)0x65,  /* [4063] */
    (xdc_Char)0x66,  /* [4064] */
    (xdc_Char)0x69,  /* [4065] */
    (xdc_Char)0x6e,  /* [4066] */
    (xdc_Char)0x65,  /* [4067] */
    (xdc_Char)0x64,  /* [4068] */
    (xdc_Char)0x3a,  /* [4069] */
    (xdc_Char)0x20,  /* [4070] */
    (xdc_Char)0x48,  /* [4071] */
    (xdc_Char)0x77,  /* [4072] */
    (xdc_Char)0x69,  /* [4073] */
    (xdc_Char)0x20,  /* [4074] */
    (xdc_Char)0x61,  /* [4075] */
    (xdc_Char)0x6c,  /* [4076] */
    (xdc_Char)0x72,  /* [4077] */
    (xdc_Char)0x65,  /* [4078] */
    (xdc_Char)0x61,  /* [4079] */
    (xdc_Char)0x64,  /* [4080] */
    (xdc_Char)0x79,  /* [4081] */
    (xdc_Char)0x20,  /* [4082] */
    (xdc_Char)0x64,  /* [4083] */
    (xdc_Char)0x65,  /* [4084] */
    (xdc_Char)0x66,  /* [4085] */
    (xdc_Char)0x69,  /* [4086] */
    (xdc_Char)0x6e,  /* [4087] */
    (xdc_Char)0x65,  /* [4088] */
    (xdc_Char)0x64,  /* [4089] */
    (xdc_Char)0x3a,  /* [4090] */
    (xdc_Char)0x20,  /* [4091] */
    (xdc_Char)0x69,  /* [4092] */
    (xdc_Char)0x6e,  /* [4093] */
    (xdc_Char)0x74,  /* [4094] */
    (xdc_Char)0x72,  /* [4095] */
    (xdc_Char)0x23,  /* [4096] */
    (xdc_Char)0x20,  /* [4097] */
    (xdc_Char)0x25,  /* [4098] */
    (xdc_Char)0x64,  /* [4099] */
    (xdc_Char)0x0,  /* [4100] */
    (xdc_Char)0x45,  /* [4101] */
    (xdc_Char)0x5f,  /* [4102] */
    (xdc_Char)0x65,  /* [4103] */
    (xdc_Char)0x78,  /* [4104] */
    (xdc_Char)0x63,  /* [4105] */
    (xdc_Char)0x65,  /* [4106] */
    (xdc_Char)0x70,  /* [4107] */
    (xdc_Char)0x74,  /* [4108] */
    (xdc_Char)0x69,  /* [4109] */
    (xdc_Char)0x6f,  /* [4110] */
    (xdc_Char)0x6e,  /* [4111] */
    (xdc_Char)0x3a,  /* [4112] */
    (xdc_Char)0x20,  /* [4113] */
    (xdc_Char)0x69,  /* [4114] */
    (xdc_Char)0x64,  /* [4115] */
    (xdc_Char)0x20,  /* [4116] */
    (xdc_Char)0x3d,  /* [4117] */
    (xdc_Char)0x20,  /* [4118] */
    (xdc_Char)0x25,  /* [4119] */
    (xdc_Char)0x64,  /* [4120] */
    (xdc_Char)0x2c,  /* [4121] */
    (xdc_Char)0x20,  /* [4122] */
    (xdc_Char)0x70,  /* [4123] */
    (xdc_Char)0x63,  /* [4124] */
    (xdc_Char)0x20,  /* [4125] */
    (xdc_Char)0x3d,  /* [4126] */
    (xdc_Char)0x20,  /* [4127] */
    (xdc_Char)0x25,  /* [4128] */
    (xdc_Char)0x30,  /* [4129] */
    (xdc_Char)0x38,  /* [4130] */
    (xdc_Char)0x78,  /* [4131] */
    (xdc_Char)0x2e,  /* [4132] */
    (xdc_Char)0xa,  /* [4133] */
    (xdc_Char)0x54,  /* [4134] */
    (xdc_Char)0x6f,  /* [4135] */
    (xdc_Char)0x20,  /* [4136] */
    (xdc_Char)0x73,  /* [4137] */
    (xdc_Char)0x65,  /* [4138] */
    (xdc_Char)0x65,  /* [4139] */
    (xdc_Char)0x20,  /* [4140] */
    (xdc_Char)0x6d,  /* [4141] */
    (xdc_Char)0x6f,  /* [4142] */
    (xdc_Char)0x72,  /* [4143] */
    (xdc_Char)0x65,  /* [4144] */
    (xdc_Char)0x20,  /* [4145] */
    (xdc_Char)0x65,  /* [4146] */
    (xdc_Char)0x78,  /* [4147] */
    (xdc_Char)0x63,  /* [4148] */
    (xdc_Char)0x65,  /* [4149] */
    (xdc_Char)0x70,  /* [4150] */
    (xdc_Char)0x74,  /* [4151] */
    (xdc_Char)0x69,  /* [4152] */
    (xdc_Char)0x6f,  /* [4153] */
    (xdc_Char)0x6e,  /* [4154] */
    (xdc_Char)0x20,  /* [4155] */
    (xdc_Char)0x64,  /* [4156] */
    (xdc_Char)0x65,  /* [4157] */
    (xdc_Char)0x74,  /* [4158] */
    (xdc_Char)0x61,  /* [4159] */
    (xdc_Char)0x69,  /* [4160] */
    (xdc_Char)0x6c,  /* [4161] */
    (xdc_Char)0x2c,  /* [4162] */
    (xdc_Char)0x20,  /* [4163] */
    (xdc_Char)0x73,  /* [4164] */
    (xdc_Char)0x65,  /* [4165] */
    (xdc_Char)0x74,  /* [4166] */
    (xdc_Char)0x20,  /* [4167] */
    (xdc_Char)0x74,  /* [4168] */
    (xdc_Char)0x69,  /* [4169] */
    (xdc_Char)0x2e,  /* [4170] */
    (xdc_Char)0x73,  /* [4171] */
    (xdc_Char)0x79,  /* [4172] */
    (xdc_Char)0x73,  /* [4173] */
    (xdc_Char)0x62,  /* [4174] */
    (xdc_Char)0x69,  /* [4175] */
    (xdc_Char)0x6f,  /* [4176] */
    (xdc_Char)0x73,  /* [4177] */
    (xdc_Char)0x2e,  /* [4178] */
    (xdc_Char)0x66,  /* [4179] */
    (xdc_Char)0x61,  /* [4180] */
    (xdc_Char)0x6d,  /* [4181] */
    (xdc_Char)0x69,  /* [4182] */
    (xdc_Char)0x6c,  /* [4183] */
    (xdc_Char)0x79,  /* [4184] */
    (xdc_Char)0x2e,  /* [4185] */
    (xdc_Char)0x61,  /* [4186] */
    (xdc_Char)0x72,  /* [4187] */
    (xdc_Char)0x6d,  /* [4188] */
    (xdc_Char)0x2e,  /* [4189] */
    (xdc_Char)0x6d,  /* [4190] */
    (xdc_Char)0x33,  /* [4191] */
    (xdc_Char)0x2e,  /* [4192] */
    (xdc_Char)0x48,  /* [4193] */
    (xdc_Char)0x77,  /* [4194] */
    (xdc_Char)0x69,  /* [4195] */
    (xdc_Char)0x2e,  /* [4196] */
    (xdc_Char)0x65,  /* [4197] */
    (xdc_Char)0x6e,  /* [4198] */
    (xdc_Char)0x61,  /* [4199] */
    (xdc_Char)0x62,  /* [4200] */
    (xdc_Char)0x6c,  /* [4201] */
    (xdc_Char)0x65,  /* [4202] */
    (xdc_Char)0x45,  /* [4203] */
    (xdc_Char)0x78,  /* [4204] */
    (xdc_Char)0x63,  /* [4205] */
    (xdc_Char)0x65,  /* [4206] */
    (xdc_Char)0x70,  /* [4207] */
    (xdc_Char)0x74,  /* [4208] */
    (xdc_Char)0x69,  /* [4209] */
    (xdc_Char)0x6f,  /* [4210] */
    (xdc_Char)0x6e,  /* [4211] */
    (xdc_Char)0x20,  /* [4212] */
    (xdc_Char)0x3d,  /* [4213] */
    (xdc_Char)0x20,  /* [4214] */
    (xdc_Char)0x74,  /* [4215] */
    (xdc_Char)0x72,  /* [4216] */
    (xdc_Char)0x75,  /* [4217] */
    (xdc_Char)0x65,  /* [4218] */
    (xdc_Char)0x20,  /* [4219] */
    (xdc_Char)0x6f,  /* [4220] */
    (xdc_Char)0x72,  /* [4221] */
    (xdc_Char)0x2c,  /* [4222] */
    (xdc_Char)0xa,  /* [4223] */
    (xdc_Char)0x65,  /* [4224] */
    (xdc_Char)0x78,  /* [4225] */
    (xdc_Char)0x61,  /* [4226] */
    (xdc_Char)0x6d,  /* [4227] */
    (xdc_Char)0x69,  /* [4228] */
    (xdc_Char)0x6e,  /* [4229] */
    (xdc_Char)0x65,  /* [4230] */
    (xdc_Char)0x20,  /* [4231] */
    (xdc_Char)0x74,  /* [4232] */
    (xdc_Char)0x68,  /* [4233] */
    (xdc_Char)0x65,  /* [4234] */
    (xdc_Char)0x20,  /* [4235] */
    (xdc_Char)0x45,  /* [4236] */
    (xdc_Char)0x78,  /* [4237] */
    (xdc_Char)0x63,  /* [4238] */
    (xdc_Char)0x65,  /* [4239] */
    (xdc_Char)0x70,  /* [4240] */
    (xdc_Char)0x74,  /* [4241] */
    (xdc_Char)0x69,  /* [4242] */
    (xdc_Char)0x6f,  /* [4243] */
    (xdc_Char)0x6e,  /* [4244] */
    (xdc_Char)0x20,  /* [4245] */
    (xdc_Char)0x76,  /* [4246] */
    (xdc_Char)0x69,  /* [4247] */
    (xdc_Char)0x65,  /* [4248] */
    (xdc_Char)0x77,  /* [4249] */
    (xdc_Char)0x20,  /* [4250] */
    (xdc_Char)0x66,  /* [4251] */
    (xdc_Char)0x6f,  /* [4252] */
    (xdc_Char)0x72,  /* [4253] */
    (xdc_Char)0x20,  /* [4254] */
    (xdc_Char)0x74,  /* [4255] */
    (xdc_Char)0x68,  /* [4256] */
    (xdc_Char)0x65,  /* [4257] */
    (xdc_Char)0x20,  /* [4258] */
    (xdc_Char)0x74,  /* [4259] */
    (xdc_Char)0x69,  /* [4260] */
    (xdc_Char)0x2e,  /* [4261] */
    (xdc_Char)0x73,  /* [4262] */
    (xdc_Char)0x79,  /* [4263] */
    (xdc_Char)0x73,  /* [4264] */
    (xdc_Char)0x62,  /* [4265] */
    (xdc_Char)0x69,  /* [4266] */
    (xdc_Char)0x6f,  /* [4267] */
    (xdc_Char)0x73,  /* [4268] */
    (xdc_Char)0x2e,  /* [4269] */
    (xdc_Char)0x66,  /* [4270] */
    (xdc_Char)0x61,  /* [4271] */
    (xdc_Char)0x6d,  /* [4272] */
    (xdc_Char)0x69,  /* [4273] */
    (xdc_Char)0x6c,  /* [4274] */
    (xdc_Char)0x79,  /* [4275] */
    (xdc_Char)0x2e,  /* [4276] */
    (xdc_Char)0x61,  /* [4277] */
    (xdc_Char)0x72,  /* [4278] */
    (xdc_Char)0x6d,  /* [4279] */
    (xdc_Char)0x2e,  /* [4280] */
    (xdc_Char)0x6d,  /* [4281] */
    (xdc_Char)0x33,  /* [4282] */
    (xdc_Char)0x2e,  /* [4283] */
    (xdc_Char)0x48,  /* [4284] */
    (xdc_Char)0x77,  /* [4285] */
    (xdc_Char)0x69,  /* [4286] */
    (xdc_Char)0x20,  /* [4287] */
    (xdc_Char)0x6d,  /* [4288] */
    (xdc_Char)0x6f,  /* [4289] */
    (xdc_Char)0x64,  /* [4290] */
    (xdc_Char)0x75,  /* [4291] */
    (xdc_Char)0x6c,  /* [4292] */
    (xdc_Char)0x65,  /* [4293] */
    (xdc_Char)0x20,  /* [4294] */
    (xdc_Char)0x75,  /* [4295] */
    (xdc_Char)0x73,  /* [4296] */
    (xdc_Char)0x69,  /* [4297] */
    (xdc_Char)0x6e,  /* [4298] */
    (xdc_Char)0x67,  /* [4299] */
    (xdc_Char)0x20,  /* [4300] */
    (xdc_Char)0x52,  /* [4301] */
    (xdc_Char)0x4f,  /* [4302] */
    (xdc_Char)0x56,  /* [4303] */
    (xdc_Char)0x2e,  /* [4304] */
    (xdc_Char)0x0,  /* [4305] */
    (xdc_Char)0x45,  /* [4306] */
    (xdc_Char)0x5f,  /* [4307] */
    (xdc_Char)0x6e,  /* [4308] */
    (xdc_Char)0x6f,  /* [4309] */
    (xdc_Char)0x49,  /* [4310] */
    (xdc_Char)0x73,  /* [4311] */
    (xdc_Char)0x72,  /* [4312] */
    (xdc_Char)0x3a,  /* [4313] */
    (xdc_Char)0x20,  /* [4314] */
    (xdc_Char)0x69,  /* [4315] */
    (xdc_Char)0x64,  /* [4316] */
    (xdc_Char)0x20,  /* [4317] */
    (xdc_Char)0x3d,  /* [4318] */
    (xdc_Char)0x20,  /* [4319] */
    (xdc_Char)0x25,  /* [4320] */
    (xdc_Char)0x64,  /* [4321] */
    (xdc_Char)0x2c,  /* [4322] */
    (xdc_Char)0x20,  /* [4323] */
    (xdc_Char)0x70,  /* [4324] */
    (xdc_Char)0x63,  /* [4325] */
    (xdc_Char)0x20,  /* [4326] */
    (xdc_Char)0x3d,  /* [4327] */
    (xdc_Char)0x20,  /* [4328] */
    (xdc_Char)0x25,  /* [4329] */
    (xdc_Char)0x30,  /* [4330] */
    (xdc_Char)0x38,  /* [4331] */
    (xdc_Char)0x78,  /* [4332] */
    (xdc_Char)0x0,  /* [4333] */
    (xdc_Char)0x45,  /* [4334] */
    (xdc_Char)0x5f,  /* [4335] */
    (xdc_Char)0x4e,  /* [4336] */
    (xdc_Char)0x4d,  /* [4337] */
    (xdc_Char)0x49,  /* [4338] */
    (xdc_Char)0x3a,  /* [4339] */
    (xdc_Char)0x20,  /* [4340] */
    (xdc_Char)0x25,  /* [4341] */
    (xdc_Char)0x73,  /* [4342] */
    (xdc_Char)0x0,  /* [4343] */
    (xdc_Char)0x45,  /* [4344] */
    (xdc_Char)0x5f,  /* [4345] */
    (xdc_Char)0x68,  /* [4346] */
    (xdc_Char)0x61,  /* [4347] */
    (xdc_Char)0x72,  /* [4348] */
    (xdc_Char)0x64,  /* [4349] */
    (xdc_Char)0x46,  /* [4350] */
    (xdc_Char)0x61,  /* [4351] */
    (xdc_Char)0x75,  /* [4352] */
    (xdc_Char)0x6c,  /* [4353] */
    (xdc_Char)0x74,  /* [4354] */
    (xdc_Char)0x3a,  /* [4355] */
    (xdc_Char)0x20,  /* [4356] */
    (xdc_Char)0x25,  /* [4357] */
    (xdc_Char)0x73,  /* [4358] */
    (xdc_Char)0x0,  /* [4359] */
    (xdc_Char)0x45,  /* [4360] */
    (xdc_Char)0x5f,  /* [4361] */
    (xdc_Char)0x6d,  /* [4362] */
    (xdc_Char)0x65,  /* [4363] */
    (xdc_Char)0x6d,  /* [4364] */
    (xdc_Char)0x46,  /* [4365] */
    (xdc_Char)0x61,  /* [4366] */
    (xdc_Char)0x75,  /* [4367] */
    (xdc_Char)0x6c,  /* [4368] */
    (xdc_Char)0x74,  /* [4369] */
    (xdc_Char)0x3a,  /* [4370] */
    (xdc_Char)0x20,  /* [4371] */
    (xdc_Char)0x25,  /* [4372] */
    (xdc_Char)0x73,  /* [4373] */
    (xdc_Char)0x2c,  /* [4374] */
    (xdc_Char)0x20,  /* [4375] */
    (xdc_Char)0x61,  /* [4376] */
    (xdc_Char)0x64,  /* [4377] */
    (xdc_Char)0x64,  /* [4378] */
    (xdc_Char)0x72,  /* [4379] */
    (xdc_Char)0x65,  /* [4380] */
    (xdc_Char)0x73,  /* [4381] */
    (xdc_Char)0x73,  /* [4382] */
    (xdc_Char)0x3a,  /* [4383] */
    (xdc_Char)0x20,  /* [4384] */
    (xdc_Char)0x25,  /* [4385] */
    (xdc_Char)0x30,  /* [4386] */
    (xdc_Char)0x38,  /* [4387] */
    (xdc_Char)0x78,  /* [4388] */
    (xdc_Char)0x0,  /* [4389] */
    (xdc_Char)0x45,  /* [4390] */
    (xdc_Char)0x5f,  /* [4391] */
    (xdc_Char)0x62,  /* [4392] */
    (xdc_Char)0x75,  /* [4393] */
    (xdc_Char)0x73,  /* [4394] */
    (xdc_Char)0x46,  /* [4395] */
    (xdc_Char)0x61,  /* [4396] */
    (xdc_Char)0x75,  /* [4397] */
    (xdc_Char)0x6c,  /* [4398] */
    (xdc_Char)0x74,  /* [4399] */
    (xdc_Char)0x3a,  /* [4400] */
    (xdc_Char)0x20,  /* [4401] */
    (xdc_Char)0x25,  /* [4402] */
    (xdc_Char)0x73,  /* [4403] */
    (xdc_Char)0x2c,  /* [4404] */
    (xdc_Char)0x20,  /* [4405] */
    (xdc_Char)0x61,  /* [4406] */
    (xdc_Char)0x64,  /* [4407] */
    (xdc_Char)0x64,  /* [4408] */
    (xdc_Char)0x72,  /* [4409] */
    (xdc_Char)0x65,  /* [4410] */
    (xdc_Char)0x73,  /* [4411] */
    (xdc_Char)0x73,  /* [4412] */
    (xdc_Char)0x3a,  /* [4413] */
    (xdc_Char)0x20,  /* [4414] */
    (xdc_Char)0x25,  /* [4415] */
    (xdc_Char)0x30,  /* [4416] */
    (xdc_Char)0x38,  /* [4417] */
    (xdc_Char)0x78,  /* [4418] */
    (xdc_Char)0x0,  /* [4419] */
    (xdc_Char)0x45,  /* [4420] */
    (xdc_Char)0x5f,  /* [4421] */
    (xdc_Char)0x75,  /* [4422] */
    (xdc_Char)0x73,  /* [4423] */
    (xdc_Char)0x61,  /* [4424] */
    (xdc_Char)0x67,  /* [4425] */
    (xdc_Char)0x65,  /* [4426] */
    (xdc_Char)0x46,  /* [4427] */
    (xdc_Char)0x61,  /* [4428] */
    (xdc_Char)0x75,  /* [4429] */
    (xdc_Char)0x6c,  /* [4430] */
    (xdc_Char)0x74,  /* [4431] */
    (xdc_Char)0x3a,  /* [4432] */
    (xdc_Char)0x20,  /* [4433] */
    (xdc_Char)0x25,  /* [4434] */
    (xdc_Char)0x73,  /* [4435] */
    (xdc_Char)0x0,  /* [4436] */
    (xdc_Char)0x45,  /* [4437] */
    (xdc_Char)0x5f,  /* [4438] */
    (xdc_Char)0x73,  /* [4439] */
    (xdc_Char)0x76,  /* [4440] */
    (xdc_Char)0x43,  /* [4441] */
    (xdc_Char)0x61,  /* [4442] */
    (xdc_Char)0x6c,  /* [4443] */
    (xdc_Char)0x6c,  /* [4444] */
    (xdc_Char)0x3a,  /* [4445] */
    (xdc_Char)0x20,  /* [4446] */
    (xdc_Char)0x73,  /* [4447] */
    (xdc_Char)0x76,  /* [4448] */
    (xdc_Char)0x4e,  /* [4449] */
    (xdc_Char)0x75,  /* [4450] */
    (xdc_Char)0x6d,  /* [4451] */
    (xdc_Char)0x20,  /* [4452] */
    (xdc_Char)0x3d,  /* [4453] */
    (xdc_Char)0x20,  /* [4454] */
    (xdc_Char)0x25,  /* [4455] */
    (xdc_Char)0x64,  /* [4456] */
    (xdc_Char)0x0,  /* [4457] */
    (xdc_Char)0x45,  /* [4458] */
    (xdc_Char)0x5f,  /* [4459] */
    (xdc_Char)0x64,  /* [4460] */
    (xdc_Char)0x65,  /* [4461] */
    (xdc_Char)0x62,  /* [4462] */
    (xdc_Char)0x75,  /* [4463] */
    (xdc_Char)0x67,  /* [4464] */
    (xdc_Char)0x4d,  /* [4465] */
    (xdc_Char)0x6f,  /* [4466] */
    (xdc_Char)0x6e,  /* [4467] */
    (xdc_Char)0x3a,  /* [4468] */
    (xdc_Char)0x20,  /* [4469] */
    (xdc_Char)0x25,  /* [4470] */
    (xdc_Char)0x73,  /* [4471] */
    (xdc_Char)0x0,  /* [4472] */
    (xdc_Char)0x45,  /* [4473] */
    (xdc_Char)0x5f,  /* [4474] */
    (xdc_Char)0x72,  /* [4475] */
    (xdc_Char)0x65,  /* [4476] */
    (xdc_Char)0x73,  /* [4477] */
    (xdc_Char)0x65,  /* [4478] */
    (xdc_Char)0x72,  /* [4479] */
    (xdc_Char)0x76,  /* [4480] */
    (xdc_Char)0x65,  /* [4481] */
    (xdc_Char)0x64,  /* [4482] */
    (xdc_Char)0x3a,  /* [4483] */
    (xdc_Char)0x20,  /* [4484] */
    (xdc_Char)0x25,  /* [4485] */
    (xdc_Char)0x73,  /* [4486] */
    (xdc_Char)0x20,  /* [4487] */
    (xdc_Char)0x25,  /* [4488] */
    (xdc_Char)0x64,  /* [4489] */
    (xdc_Char)0x0,  /* [4490] */
    (xdc_Char)0x45,  /* [4491] */
    (xdc_Char)0x5f,  /* [4492] */
    (xdc_Char)0x69,  /* [4493] */
    (xdc_Char)0x6e,  /* [4494] */
    (xdc_Char)0x76,  /* [4495] */
    (xdc_Char)0x61,  /* [4496] */
    (xdc_Char)0x6c,  /* [4497] */
    (xdc_Char)0x69,  /* [4498] */
    (xdc_Char)0x64,  /* [4499] */
    (xdc_Char)0x54,  /* [4500] */
    (xdc_Char)0x69,  /* [4501] */
    (xdc_Char)0x6d,  /* [4502] */
    (xdc_Char)0x65,  /* [4503] */
    (xdc_Char)0x72,  /* [4504] */
    (xdc_Char)0x3a,  /* [4505] */
    (xdc_Char)0x20,  /* [4506] */
    (xdc_Char)0x49,  /* [4507] */
    (xdc_Char)0x6e,  /* [4508] */
    (xdc_Char)0x76,  /* [4509] */
    (xdc_Char)0x61,  /* [4510] */
    (xdc_Char)0x6c,  /* [4511] */
    (xdc_Char)0x69,  /* [4512] */
    (xdc_Char)0x64,  /* [4513] */
    (xdc_Char)0x20,  /* [4514] */
    (xdc_Char)0x54,  /* [4515] */
    (xdc_Char)0x69,  /* [4516] */
    (xdc_Char)0x6d,  /* [4517] */
    (xdc_Char)0x65,  /* [4518] */
    (xdc_Char)0x72,  /* [4519] */
    (xdc_Char)0x20,  /* [4520] */
    (xdc_Char)0x49,  /* [4521] */
    (xdc_Char)0x64,  /* [4522] */
    (xdc_Char)0x20,  /* [4523] */
    (xdc_Char)0x25,  /* [4524] */
    (xdc_Char)0x64,  /* [4525] */
    (xdc_Char)0x0,  /* [4526] */
    (xdc_Char)0x45,  /* [4527] */
    (xdc_Char)0x5f,  /* [4528] */
    (xdc_Char)0x6e,  /* [4529] */
    (xdc_Char)0x6f,  /* [4530] */
    (xdc_Char)0x74,  /* [4531] */
    (xdc_Char)0x41,  /* [4532] */
    (xdc_Char)0x76,  /* [4533] */
    (xdc_Char)0x61,  /* [4534] */
    (xdc_Char)0x69,  /* [4535] */
    (xdc_Char)0x6c,  /* [4536] */
    (xdc_Char)0x61,  /* [4537] */
    (xdc_Char)0x62,  /* [4538] */
    (xdc_Char)0x6c,  /* [4539] */
    (xdc_Char)0x65,  /* [4540] */
    (xdc_Char)0x3a,  /* [4541] */
    (xdc_Char)0x20,  /* [4542] */
    (xdc_Char)0x54,  /* [4543] */
    (xdc_Char)0x69,  /* [4544] */
    (xdc_Char)0x6d,  /* [4545] */
    (xdc_Char)0x65,  /* [4546] */
    (xdc_Char)0x72,  /* [4547] */
    (xdc_Char)0x20,  /* [4548] */
    (xdc_Char)0x6e,  /* [4549] */
    (xdc_Char)0x6f,  /* [4550] */
    (xdc_Char)0x74,  /* [4551] */
    (xdc_Char)0x20,  /* [4552] */
    (xdc_Char)0x61,  /* [4553] */
    (xdc_Char)0x76,  /* [4554] */
    (xdc_Char)0x61,  /* [4555] */
    (xdc_Char)0x69,  /* [4556] */
    (xdc_Char)0x6c,  /* [4557] */
    (xdc_Char)0x61,  /* [4558] */
    (xdc_Char)0x62,  /* [4559] */
    (xdc_Char)0x6c,  /* [4560] */
    (xdc_Char)0x65,  /* [4561] */
    (xdc_Char)0x20,  /* [4562] */
    (xdc_Char)0x25,  /* [4563] */
    (xdc_Char)0x64,  /* [4564] */
    (xdc_Char)0x0,  /* [4565] */
    (xdc_Char)0x45,  /* [4566] */
    (xdc_Char)0x5f,  /* [4567] */
    (xdc_Char)0x63,  /* [4568] */
    (xdc_Char)0x61,  /* [4569] */
    (xdc_Char)0x6e,  /* [4570] */
    (xdc_Char)0x6e,  /* [4571] */
    (xdc_Char)0x6f,  /* [4572] */
    (xdc_Char)0x74,  /* [4573] */
    (xdc_Char)0x53,  /* [4574] */
    (xdc_Char)0x75,  /* [4575] */
    (xdc_Char)0x70,  /* [4576] */
    (xdc_Char)0x70,  /* [4577] */
    (xdc_Char)0x6f,  /* [4578] */
    (xdc_Char)0x72,  /* [4579] */
    (xdc_Char)0x74,  /* [4580] */
    (xdc_Char)0x3a,  /* [4581] */
    (xdc_Char)0x20,  /* [4582] */
    (xdc_Char)0x54,  /* [4583] */
    (xdc_Char)0x69,  /* [4584] */
    (xdc_Char)0x6d,  /* [4585] */
    (xdc_Char)0x65,  /* [4586] */
    (xdc_Char)0x72,  /* [4587] */
    (xdc_Char)0x20,  /* [4588] */
    (xdc_Char)0x63,  /* [4589] */
    (xdc_Char)0x61,  /* [4590] */
    (xdc_Char)0x6e,  /* [4591] */
    (xdc_Char)0x6e,  /* [4592] */
    (xdc_Char)0x6f,  /* [4593] */
    (xdc_Char)0x74,  /* [4594] */
    (xdc_Char)0x20,  /* [4595] */
    (xdc_Char)0x73,  /* [4596] */
    (xdc_Char)0x75,  /* [4597] */
    (xdc_Char)0x70,  /* [4598] */
    (xdc_Char)0x70,  /* [4599] */
    (xdc_Char)0x6f,  /* [4600] */
    (xdc_Char)0x72,  /* [4601] */
    (xdc_Char)0x74,  /* [4602] */
    (xdc_Char)0x20,  /* [4603] */
    (xdc_Char)0x72,  /* [4604] */
    (xdc_Char)0x65,  /* [4605] */
    (xdc_Char)0x71,  /* [4606] */
    (xdc_Char)0x75,  /* [4607] */
    (xdc_Char)0x65,  /* [4608] */
    (xdc_Char)0x73,  /* [4609] */
    (xdc_Char)0x74,  /* [4610] */
    (xdc_Char)0x65,  /* [4611] */
    (xdc_Char)0x64,  /* [4612] */
    (xdc_Char)0x20,  /* [4613] */
    (xdc_Char)0x70,  /* [4614] */
    (xdc_Char)0x65,  /* [4615] */
    (xdc_Char)0x72,  /* [4616] */
    (xdc_Char)0x69,  /* [4617] */
    (xdc_Char)0x6f,  /* [4618] */
    (xdc_Char)0x64,  /* [4619] */
    (xdc_Char)0x20,  /* [4620] */
    (xdc_Char)0x25,  /* [4621] */
    (xdc_Char)0x64,  /* [4622] */
    (xdc_Char)0x0,  /* [4623] */
    (xdc_Char)0x45,  /* [4624] */
    (xdc_Char)0x5f,  /* [4625] */
    (xdc_Char)0x70,  /* [4626] */
    (xdc_Char)0x72,  /* [4627] */
    (xdc_Char)0x69,  /* [4628] */
    (xdc_Char)0x6f,  /* [4629] */
    (xdc_Char)0x72,  /* [4630] */
    (xdc_Char)0x69,  /* [4631] */
    (xdc_Char)0x74,  /* [4632] */
    (xdc_Char)0x79,  /* [4633] */
    (xdc_Char)0x3a,  /* [4634] */
    (xdc_Char)0x20,  /* [4635] */
    (xdc_Char)0x54,  /* [4636] */
    (xdc_Char)0x68,  /* [4637] */
    (xdc_Char)0x72,  /* [4638] */
    (xdc_Char)0x65,  /* [4639] */
    (xdc_Char)0x61,  /* [4640] */
    (xdc_Char)0x64,  /* [4641] */
    (xdc_Char)0x20,  /* [4642] */
    (xdc_Char)0x70,  /* [4643] */
    (xdc_Char)0x72,  /* [4644] */
    (xdc_Char)0x69,  /* [4645] */
    (xdc_Char)0x6f,  /* [4646] */
    (xdc_Char)0x72,  /* [4647] */
    (xdc_Char)0x69,  /* [4648] */
    (xdc_Char)0x74,  /* [4649] */
    (xdc_Char)0x79,  /* [4650] */
    (xdc_Char)0x20,  /* [4651] */
    (xdc_Char)0x69,  /* [4652] */
    (xdc_Char)0x73,  /* [4653] */
    (xdc_Char)0x20,  /* [4654] */
    (xdc_Char)0x69,  /* [4655] */
    (xdc_Char)0x6e,  /* [4656] */
    (xdc_Char)0x76,  /* [4657] */
    (xdc_Char)0x61,  /* [4658] */
    (xdc_Char)0x6c,  /* [4659] */
    (xdc_Char)0x69,  /* [4660] */
    (xdc_Char)0x64,  /* [4661] */
    (xdc_Char)0x20,  /* [4662] */
    (xdc_Char)0x25,  /* [4663] */
    (xdc_Char)0x64,  /* [4664] */
    (xdc_Char)0x0,  /* [4665] */
    (xdc_Char)0x72,  /* [4666] */
    (xdc_Char)0x65,  /* [4667] */
    (xdc_Char)0x71,  /* [4668] */
    (xdc_Char)0x75,  /* [4669] */
    (xdc_Char)0x65,  /* [4670] */
    (xdc_Char)0x73,  /* [4671] */
    (xdc_Char)0x74,  /* [4672] */
    (xdc_Char)0x65,  /* [4673] */
    (xdc_Char)0x64,  /* [4674] */
    (xdc_Char)0x20,  /* [4675] */
    (xdc_Char)0x73,  /* [4676] */
    (xdc_Char)0x69,  /* [4677] */
    (xdc_Char)0x7a,  /* [4678] */
    (xdc_Char)0x65,  /* [4679] */
    (xdc_Char)0x20,  /* [4680] */
    (xdc_Char)0x69,  /* [4681] */
    (xdc_Char)0x73,  /* [4682] */
    (xdc_Char)0x20,  /* [4683] */
    (xdc_Char)0x74,  /* [4684] */
    (xdc_Char)0x6f,  /* [4685] */
    (xdc_Char)0x6f,  /* [4686] */
    (xdc_Char)0x20,  /* [4687] */
    (xdc_Char)0x62,  /* [4688] */
    (xdc_Char)0x69,  /* [4689] */
    (xdc_Char)0x67,  /* [4690] */
    (xdc_Char)0x3a,  /* [4691] */
    (xdc_Char)0x20,  /* [4692] */
    (xdc_Char)0x68,  /* [4693] */
    (xdc_Char)0x61,  /* [4694] */
    (xdc_Char)0x6e,  /* [4695] */
    (xdc_Char)0x64,  /* [4696] */
    (xdc_Char)0x6c,  /* [4697] */
    (xdc_Char)0x65,  /* [4698] */
    (xdc_Char)0x3d,  /* [4699] */
    (xdc_Char)0x30,  /* [4700] */
    (xdc_Char)0x78,  /* [4701] */
    (xdc_Char)0x25,  /* [4702] */
    (xdc_Char)0x78,  /* [4703] */
    (xdc_Char)0x2c,  /* [4704] */
    (xdc_Char)0x20,  /* [4705] */
    (xdc_Char)0x73,  /* [4706] */
    (xdc_Char)0x69,  /* [4707] */
    (xdc_Char)0x7a,  /* [4708] */
    (xdc_Char)0x65,  /* [4709] */
    (xdc_Char)0x3d,  /* [4710] */
    (xdc_Char)0x25,  /* [4711] */
    (xdc_Char)0x75,  /* [4712] */
    (xdc_Char)0x0,  /* [4713] */
    (xdc_Char)0x6f,  /* [4714] */
    (xdc_Char)0x75,  /* [4715] */
    (xdc_Char)0x74,  /* [4716] */
    (xdc_Char)0x20,  /* [4717] */
    (xdc_Char)0x6f,  /* [4718] */
    (xdc_Char)0x66,  /* [4719] */
    (xdc_Char)0x20,  /* [4720] */
    (xdc_Char)0x6d,  /* [4721] */
    (xdc_Char)0x65,  /* [4722] */
    (xdc_Char)0x6d,  /* [4723] */
    (xdc_Char)0x6f,  /* [4724] */
    (xdc_Char)0x72,  /* [4725] */
    (xdc_Char)0x79,  /* [4726] */
    (xdc_Char)0x3a,  /* [4727] */
    (xdc_Char)0x20,  /* [4728] */
    (xdc_Char)0x68,  /* [4729] */
    (xdc_Char)0x61,  /* [4730] */
    (xdc_Char)0x6e,  /* [4731] */
    (xdc_Char)0x64,  /* [4732] */
    (xdc_Char)0x6c,  /* [4733] */
    (xdc_Char)0x65,  /* [4734] */
    (xdc_Char)0x3d,  /* [4735] */
    (xdc_Char)0x30,  /* [4736] */
    (xdc_Char)0x78,  /* [4737] */
    (xdc_Char)0x25,  /* [4738] */
    (xdc_Char)0x78,  /* [4739] */
    (xdc_Char)0x2c,  /* [4740] */
    (xdc_Char)0x20,  /* [4741] */
    (xdc_Char)0x73,  /* [4742] */
    (xdc_Char)0x69,  /* [4743] */
    (xdc_Char)0x7a,  /* [4744] */
    (xdc_Char)0x65,  /* [4745] */
    (xdc_Char)0x3d,  /* [4746] */
    (xdc_Char)0x25,  /* [4747] */
    (xdc_Char)0x75,  /* [4748] */
    (xdc_Char)0x0,  /* [4749] */
    (xdc_Char)0x3c,  /* [4750] */
    (xdc_Char)0x2d,  /* [4751] */
    (xdc_Char)0x2d,  /* [4752] */
    (xdc_Char)0x20,  /* [4753] */
    (xdc_Char)0x63,  /* [4754] */
    (xdc_Char)0x6f,  /* [4755] */
    (xdc_Char)0x6e,  /* [4756] */
    (xdc_Char)0x73,  /* [4757] */
    (xdc_Char)0x74,  /* [4758] */
    (xdc_Char)0x72,  /* [4759] */
    (xdc_Char)0x75,  /* [4760] */
    (xdc_Char)0x63,  /* [4761] */
    (xdc_Char)0x74,  /* [4762] */
    (xdc_Char)0x3a,  /* [4763] */
    (xdc_Char)0x20,  /* [4764] */
    (xdc_Char)0x25,  /* [4765] */
    (xdc_Char)0x70,  /* [4766] */
    (xdc_Char)0x28,  /* [4767] */
    (xdc_Char)0x27,  /* [4768] */
    (xdc_Char)0x25,  /* [4769] */
    (xdc_Char)0x73,  /* [4770] */
    (xdc_Char)0x27,  /* [4771] */
    (xdc_Char)0x29,  /* [4772] */
    (xdc_Char)0x0,  /* [4773] */
    (xdc_Char)0x3c,  /* [4774] */
    (xdc_Char)0x2d,  /* [4775] */
    (xdc_Char)0x2d,  /* [4776] */
    (xdc_Char)0x20,  /* [4777] */
    (xdc_Char)0x63,  /* [4778] */
    (xdc_Char)0x72,  /* [4779] */
    (xdc_Char)0x65,  /* [4780] */
    (xdc_Char)0x61,  /* [4781] */
    (xdc_Char)0x74,  /* [4782] */
    (xdc_Char)0x65,  /* [4783] */
    (xdc_Char)0x3a,  /* [4784] */
    (xdc_Char)0x20,  /* [4785] */
    (xdc_Char)0x25,  /* [4786] */
    (xdc_Char)0x70,  /* [4787] */
    (xdc_Char)0x28,  /* [4788] */
    (xdc_Char)0x27,  /* [4789] */
    (xdc_Char)0x25,  /* [4790] */
    (xdc_Char)0x73,  /* [4791] */
    (xdc_Char)0x27,  /* [4792] */
    (xdc_Char)0x29,  /* [4793] */
    (xdc_Char)0x0,  /* [4794] */
    (xdc_Char)0x2d,  /* [4795] */
    (xdc_Char)0x2d,  /* [4796] */
    (xdc_Char)0x3e,  /* [4797] */
    (xdc_Char)0x20,  /* [4798] */
    (xdc_Char)0x64,  /* [4799] */
    (xdc_Char)0x65,  /* [4800] */
    (xdc_Char)0x73,  /* [4801] */
    (xdc_Char)0x74,  /* [4802] */
    (xdc_Char)0x72,  /* [4803] */
    (xdc_Char)0x75,  /* [4804] */
    (xdc_Char)0x63,  /* [4805] */
    (xdc_Char)0x74,  /* [4806] */
    (xdc_Char)0x3a,  /* [4807] */
    (xdc_Char)0x20,  /* [4808] */
    (xdc_Char)0x28,  /* [4809] */
    (xdc_Char)0x25,  /* [4810] */
    (xdc_Char)0x70,  /* [4811] */
    (xdc_Char)0x29,  /* [4812] */
    (xdc_Char)0x0,  /* [4813] */
    (xdc_Char)0x2d,  /* [4814] */
    (xdc_Char)0x2d,  /* [4815] */
    (xdc_Char)0x3e,  /* [4816] */
    (xdc_Char)0x20,  /* [4817] */
    (xdc_Char)0x64,  /* [4818] */
    (xdc_Char)0x65,  /* [4819] */
    (xdc_Char)0x6c,  /* [4820] */
    (xdc_Char)0x65,  /* [4821] */
    (xdc_Char)0x74,  /* [4822] */
    (xdc_Char)0x65,  /* [4823] */
    (xdc_Char)0x3a,  /* [4824] */
    (xdc_Char)0x20,  /* [4825] */
    (xdc_Char)0x28,  /* [4826] */
    (xdc_Char)0x25,  /* [4827] */
    (xdc_Char)0x70,  /* [4828] */
    (xdc_Char)0x29,  /* [4829] */
    (xdc_Char)0x0,  /* [4830] */
    (xdc_Char)0x45,  /* [4831] */
    (xdc_Char)0x52,  /* [4832] */
    (xdc_Char)0x52,  /* [4833] */
    (xdc_Char)0x4f,  /* [4834] */
    (xdc_Char)0x52,  /* [4835] */
    (xdc_Char)0x3a,  /* [4836] */
    (xdc_Char)0x20,  /* [4837] */
    (xdc_Char)0x25,  /* [4838] */
    (xdc_Char)0x24,  /* [4839] */
    (xdc_Char)0x46,  /* [4840] */
    (xdc_Char)0x25,  /* [4841] */
    (xdc_Char)0x24,  /* [4842] */
    (xdc_Char)0x53,  /* [4843] */
    (xdc_Char)0x0,  /* [4844] */
    (xdc_Char)0x57,  /* [4845] */
    (xdc_Char)0x41,  /* [4846] */
    (xdc_Char)0x52,  /* [4847] */
    (xdc_Char)0x4e,  /* [4848] */
    (xdc_Char)0x49,  /* [4849] */
    (xdc_Char)0x4e,  /* [4850] */
    (xdc_Char)0x47,  /* [4851] */
    (xdc_Char)0x3a,  /* [4852] */
    (xdc_Char)0x20,  /* [4853] */
    (xdc_Char)0x25,  /* [4854] */
    (xdc_Char)0x24,  /* [4855] */
    (xdc_Char)0x46,  /* [4856] */
    (xdc_Char)0x25,  /* [4857] */
    (xdc_Char)0x24,  /* [4858] */
    (xdc_Char)0x53,  /* [4859] */
    (xdc_Char)0x0,  /* [4860] */
    (xdc_Char)0x25,  /* [4861] */
    (xdc_Char)0x24,  /* [4862] */
    (xdc_Char)0x46,  /* [4863] */
    (xdc_Char)0x25,  /* [4864] */
    (xdc_Char)0x24,  /* [4865] */
    (xdc_Char)0x53,  /* [4866] */
    (xdc_Char)0x0,  /* [4867] */
    (xdc_Char)0x53,  /* [4868] */
    (xdc_Char)0x74,  /* [4869] */
    (xdc_Char)0x61,  /* [4870] */
    (xdc_Char)0x72,  /* [4871] */
    (xdc_Char)0x74,  /* [4872] */
    (xdc_Char)0x3a,  /* [4873] */
    (xdc_Char)0x20,  /* [4874] */
    (xdc_Char)0x25,  /* [4875] */
    (xdc_Char)0x24,  /* [4876] */
    (xdc_Char)0x53,  /* [4877] */
    (xdc_Char)0x0,  /* [4878] */
    (xdc_Char)0x53,  /* [4879] */
    (xdc_Char)0x74,  /* [4880] */
    (xdc_Char)0x6f,  /* [4881] */
    (xdc_Char)0x70,  /* [4882] */
    (xdc_Char)0x3a,  /* [4883] */
    (xdc_Char)0x20,  /* [4884] */
    (xdc_Char)0x25,  /* [4885] */
    (xdc_Char)0x24,  /* [4886] */
    (xdc_Char)0x53,  /* [4887] */
    (xdc_Char)0x0,  /* [4888] */
    (xdc_Char)0x53,  /* [4889] */
    (xdc_Char)0x74,  /* [4890] */
    (xdc_Char)0x61,  /* [4891] */
    (xdc_Char)0x72,  /* [4892] */
    (xdc_Char)0x74,  /* [4893] */
    (xdc_Char)0x49,  /* [4894] */
    (xdc_Char)0x6e,  /* [4895] */
    (xdc_Char)0x73,  /* [4896] */
    (xdc_Char)0x74,  /* [4897] */
    (xdc_Char)0x61,  /* [4898] */
    (xdc_Char)0x6e,  /* [4899] */
    (xdc_Char)0x63,  /* [4900] */
    (xdc_Char)0x65,  /* [4901] */
    (xdc_Char)0x3a,  /* [4902] */
    (xdc_Char)0x20,  /* [4903] */
    (xdc_Char)0x25,  /* [4904] */
    (xdc_Char)0x24,  /* [4905] */
    (xdc_Char)0x53,  /* [4906] */
    (xdc_Char)0x0,  /* [4907] */
    (xdc_Char)0x53,  /* [4908] */
    (xdc_Char)0x74,  /* [4909] */
    (xdc_Char)0x6f,  /* [4910] */
    (xdc_Char)0x70,  /* [4911] */
    (xdc_Char)0x49,  /* [4912] */
    (xdc_Char)0x6e,  /* [4913] */
    (xdc_Char)0x73,  /* [4914] */
    (xdc_Char)0x74,  /* [4915] */
    (xdc_Char)0x61,  /* [4916] */
    (xdc_Char)0x6e,  /* [4917] */
    (xdc_Char)0x63,  /* [4918] */
    (xdc_Char)0x65,  /* [4919] */
    (xdc_Char)0x3a,  /* [4920] */
    (xdc_Char)0x20,  /* [4921] */
    (xdc_Char)0x25,  /* [4922] */
    (xdc_Char)0x24,  /* [4923] */
    (xdc_Char)0x53,  /* [4924] */
    (xdc_Char)0x0,  /* [4925] */
    (xdc_Char)0x4c,  /* [4926] */
    (xdc_Char)0x57,  /* [4927] */
    (xdc_Char)0x5f,  /* [4928] */
    (xdc_Char)0x64,  /* [4929] */
    (xdc_Char)0x65,  /* [4930] */
    (xdc_Char)0x6c,  /* [4931] */
    (xdc_Char)0x61,  /* [4932] */
    (xdc_Char)0x79,  /* [4933] */
    (xdc_Char)0x65,  /* [4934] */
    (xdc_Char)0x64,  /* [4935] */
    (xdc_Char)0x3a,  /* [4936] */
    (xdc_Char)0x20,  /* [4937] */
    (xdc_Char)0x64,  /* [4938] */
    (xdc_Char)0x65,  /* [4939] */
    (xdc_Char)0x6c,  /* [4940] */
    (xdc_Char)0x61,  /* [4941] */
    (xdc_Char)0x79,  /* [4942] */
    (xdc_Char)0x3a,  /* [4943] */
    (xdc_Char)0x20,  /* [4944] */
    (xdc_Char)0x25,  /* [4945] */
    (xdc_Char)0x64,  /* [4946] */
    (xdc_Char)0x0,  /* [4947] */
    (xdc_Char)0x4c,  /* [4948] */
    (xdc_Char)0x4d,  /* [4949] */
    (xdc_Char)0x5f,  /* [4950] */
    (xdc_Char)0x74,  /* [4951] */
    (xdc_Char)0x69,  /* [4952] */
    (xdc_Char)0x63,  /* [4953] */
    (xdc_Char)0x6b,  /* [4954] */
    (xdc_Char)0x3a,  /* [4955] */
    (xdc_Char)0x20,  /* [4956] */
    (xdc_Char)0x74,  /* [4957] */
    (xdc_Char)0x69,  /* [4958] */
    (xdc_Char)0x63,  /* [4959] */
    (xdc_Char)0x6b,  /* [4960] */
    (xdc_Char)0x3a,  /* [4961] */
    (xdc_Char)0x20,  /* [4962] */
    (xdc_Char)0x25,  /* [4963] */
    (xdc_Char)0x64,  /* [4964] */
    (xdc_Char)0x0,  /* [4965] */
    (xdc_Char)0x4c,  /* [4966] */
    (xdc_Char)0x4d,  /* [4967] */
    (xdc_Char)0x5f,  /* [4968] */
    (xdc_Char)0x62,  /* [4969] */
    (xdc_Char)0x65,  /* [4970] */
    (xdc_Char)0x67,  /* [4971] */
    (xdc_Char)0x69,  /* [4972] */
    (xdc_Char)0x6e,  /* [4973] */
    (xdc_Char)0x3a,  /* [4974] */
    (xdc_Char)0x20,  /* [4975] */
    (xdc_Char)0x63,  /* [4976] */
    (xdc_Char)0x6c,  /* [4977] */
    (xdc_Char)0x6b,  /* [4978] */
    (xdc_Char)0x3a,  /* [4979] */
    (xdc_Char)0x20,  /* [4980] */
    (xdc_Char)0x30,  /* [4981] */
    (xdc_Char)0x78,  /* [4982] */
    (xdc_Char)0x25,  /* [4983] */
    (xdc_Char)0x78,  /* [4984] */
    (xdc_Char)0x2c,  /* [4985] */
    (xdc_Char)0x20,  /* [4986] */
    (xdc_Char)0x66,  /* [4987] */
    (xdc_Char)0x75,  /* [4988] */
    (xdc_Char)0x6e,  /* [4989] */
    (xdc_Char)0x63,  /* [4990] */
    (xdc_Char)0x3a,  /* [4991] */
    (xdc_Char)0x20,  /* [4992] */
    (xdc_Char)0x30,  /* [4993] */
    (xdc_Char)0x78,  /* [4994] */
    (xdc_Char)0x25,  /* [4995] */
    (xdc_Char)0x78,  /* [4996] */
    (xdc_Char)0x0,  /* [4997] */
    (xdc_Char)0x4c,  /* [4998] */
    (xdc_Char)0x4d,  /* [4999] */
    (xdc_Char)0x5f,  /* [5000] */
    (xdc_Char)0x70,  /* [5001] */
    (xdc_Char)0x6f,  /* [5002] */
    (xdc_Char)0x73,  /* [5003] */
    (xdc_Char)0x74,  /* [5004] */
    (xdc_Char)0x3a,  /* [5005] */
    (xdc_Char)0x20,  /* [5006] */
    (xdc_Char)0x73,  /* [5007] */
    (xdc_Char)0x65,  /* [5008] */
    (xdc_Char)0x6d,  /* [5009] */
    (xdc_Char)0x3a,  /* [5010] */
    (xdc_Char)0x20,  /* [5011] */
    (xdc_Char)0x30,  /* [5012] */
    (xdc_Char)0x78,  /* [5013] */
    (xdc_Char)0x25,  /* [5014] */
    (xdc_Char)0x78,  /* [5015] */
    (xdc_Char)0x2c,  /* [5016] */
    (xdc_Char)0x20,  /* [5017] */
    (xdc_Char)0x63,  /* [5018] */
    (xdc_Char)0x6f,  /* [5019] */
    (xdc_Char)0x75,  /* [5020] */
    (xdc_Char)0x6e,  /* [5021] */
    (xdc_Char)0x74,  /* [5022] */
    (xdc_Char)0x3a,  /* [5023] */
    (xdc_Char)0x20,  /* [5024] */
    (xdc_Char)0x25,  /* [5025] */
    (xdc_Char)0x64,  /* [5026] */
    (xdc_Char)0x0,  /* [5027] */
    (xdc_Char)0x4c,  /* [5028] */
    (xdc_Char)0x4d,  /* [5029] */
    (xdc_Char)0x5f,  /* [5030] */
    (xdc_Char)0x70,  /* [5031] */
    (xdc_Char)0x65,  /* [5032] */
    (xdc_Char)0x6e,  /* [5033] */
    (xdc_Char)0x64,  /* [5034] */
    (xdc_Char)0x3a,  /* [5035] */
    (xdc_Char)0x20,  /* [5036] */
    (xdc_Char)0x73,  /* [5037] */
    (xdc_Char)0x65,  /* [5038] */
    (xdc_Char)0x6d,  /* [5039] */
    (xdc_Char)0x3a,  /* [5040] */
    (xdc_Char)0x20,  /* [5041] */
    (xdc_Char)0x30,  /* [5042] */
    (xdc_Char)0x78,  /* [5043] */
    (xdc_Char)0x25,  /* [5044] */
    (xdc_Char)0x78,  /* [5045] */
    (xdc_Char)0x2c,  /* [5046] */
    (xdc_Char)0x20,  /* [5047] */
    (xdc_Char)0x63,  /* [5048] */
    (xdc_Char)0x6f,  /* [5049] */
    (xdc_Char)0x75,  /* [5050] */
    (xdc_Char)0x6e,  /* [5051] */
    (xdc_Char)0x74,  /* [5052] */
    (xdc_Char)0x3a,  /* [5053] */
    (xdc_Char)0x20,  /* [5054] */
    (xdc_Char)0x25,  /* [5055] */
    (xdc_Char)0x64,  /* [5056] */
    (xdc_Char)0x2c,  /* [5057] */
    (xdc_Char)0x20,  /* [5058] */
    (xdc_Char)0x74,  /* [5059] */
    (xdc_Char)0x69,  /* [5060] */
    (xdc_Char)0x6d,  /* [5061] */
    (xdc_Char)0x65,  /* [5062] */
    (xdc_Char)0x6f,  /* [5063] */
    (xdc_Char)0x75,  /* [5064] */
    (xdc_Char)0x74,  /* [5065] */
    (xdc_Char)0x3a,  /* [5066] */
    (xdc_Char)0x20,  /* [5067] */
    (xdc_Char)0x25,  /* [5068] */
    (xdc_Char)0x64,  /* [5069] */
    (xdc_Char)0x0,  /* [5070] */
    (xdc_Char)0x4c,  /* [5071] */
    (xdc_Char)0x4d,  /* [5072] */
    (xdc_Char)0x5f,  /* [5073] */
    (xdc_Char)0x62,  /* [5074] */
    (xdc_Char)0x65,  /* [5075] */
    (xdc_Char)0x67,  /* [5076] */
    (xdc_Char)0x69,  /* [5077] */
    (xdc_Char)0x6e,  /* [5078] */
    (xdc_Char)0x3a,  /* [5079] */
    (xdc_Char)0x20,  /* [5080] */
    (xdc_Char)0x73,  /* [5081] */
    (xdc_Char)0x77,  /* [5082] */
    (xdc_Char)0x69,  /* [5083] */
    (xdc_Char)0x3a,  /* [5084] */
    (xdc_Char)0x20,  /* [5085] */
    (xdc_Char)0x30,  /* [5086] */
    (xdc_Char)0x78,  /* [5087] */
    (xdc_Char)0x25,  /* [5088] */
    (xdc_Char)0x78,  /* [5089] */
    (xdc_Char)0x2c,  /* [5090] */
    (xdc_Char)0x20,  /* [5091] */
    (xdc_Char)0x66,  /* [5092] */
    (xdc_Char)0x75,  /* [5093] */
    (xdc_Char)0x6e,  /* [5094] */
    (xdc_Char)0x63,  /* [5095] */
    (xdc_Char)0x3a,  /* [5096] */
    (xdc_Char)0x20,  /* [5097] */
    (xdc_Char)0x30,  /* [5098] */
    (xdc_Char)0x78,  /* [5099] */
    (xdc_Char)0x25,  /* [5100] */
    (xdc_Char)0x78,  /* [5101] */
    (xdc_Char)0x2c,  /* [5102] */
    (xdc_Char)0x20,  /* [5103] */
    (xdc_Char)0x70,  /* [5104] */
    (xdc_Char)0x72,  /* [5105] */
    (xdc_Char)0x65,  /* [5106] */
    (xdc_Char)0x54,  /* [5107] */
    (xdc_Char)0x68,  /* [5108] */
    (xdc_Char)0x72,  /* [5109] */
    (xdc_Char)0x65,  /* [5110] */
    (xdc_Char)0x61,  /* [5111] */
    (xdc_Char)0x64,  /* [5112] */
    (xdc_Char)0x3a,  /* [5113] */
    (xdc_Char)0x20,  /* [5114] */
    (xdc_Char)0x25,  /* [5115] */
    (xdc_Char)0x64,  /* [5116] */
    (xdc_Char)0x0,  /* [5117] */
    (xdc_Char)0x4c,  /* [5118] */
    (xdc_Char)0x44,  /* [5119] */
    (xdc_Char)0x5f,  /* [5120] */
    (xdc_Char)0x65,  /* [5121] */
    (xdc_Char)0x6e,  /* [5122] */
    (xdc_Char)0x64,  /* [5123] */
    (xdc_Char)0x3a,  /* [5124] */
    (xdc_Char)0x20,  /* [5125] */
    (xdc_Char)0x73,  /* [5126] */
    (xdc_Char)0x77,  /* [5127] */
    (xdc_Char)0x69,  /* [5128] */
    (xdc_Char)0x3a,  /* [5129] */
    (xdc_Char)0x20,  /* [5130] */
    (xdc_Char)0x30,  /* [5131] */
    (xdc_Char)0x78,  /* [5132] */
    (xdc_Char)0x25,  /* [5133] */
    (xdc_Char)0x78,  /* [5134] */
    (xdc_Char)0x0,  /* [5135] */
    (xdc_Char)0x4c,  /* [5136] */
    (xdc_Char)0x4d,  /* [5137] */
    (xdc_Char)0x5f,  /* [5138] */
    (xdc_Char)0x70,  /* [5139] */
    (xdc_Char)0x6f,  /* [5140] */
    (xdc_Char)0x73,  /* [5141] */
    (xdc_Char)0x74,  /* [5142] */
    (xdc_Char)0x3a,  /* [5143] */
    (xdc_Char)0x20,  /* [5144] */
    (xdc_Char)0x73,  /* [5145] */
    (xdc_Char)0x77,  /* [5146] */
    (xdc_Char)0x69,  /* [5147] */
    (xdc_Char)0x3a,  /* [5148] */
    (xdc_Char)0x20,  /* [5149] */
    (xdc_Char)0x30,  /* [5150] */
    (xdc_Char)0x78,  /* [5151] */
    (xdc_Char)0x25,  /* [5152] */
    (xdc_Char)0x78,  /* [5153] */
    (xdc_Char)0x2c,  /* [5154] */
    (xdc_Char)0x20,  /* [5155] */
    (xdc_Char)0x66,  /* [5156] */
    (xdc_Char)0x75,  /* [5157] */
    (xdc_Char)0x6e,  /* [5158] */
    (xdc_Char)0x63,  /* [5159] */
    (xdc_Char)0x3a,  /* [5160] */
    (xdc_Char)0x20,  /* [5161] */
    (xdc_Char)0x30,  /* [5162] */
    (xdc_Char)0x78,  /* [5163] */
    (xdc_Char)0x25,  /* [5164] */
    (xdc_Char)0x78,  /* [5165] */
    (xdc_Char)0x2c,  /* [5166] */
    (xdc_Char)0x20,  /* [5167] */
    (xdc_Char)0x70,  /* [5168] */
    (xdc_Char)0x72,  /* [5169] */
    (xdc_Char)0x69,  /* [5170] */
    (xdc_Char)0x3a,  /* [5171] */
    (xdc_Char)0x20,  /* [5172] */
    (xdc_Char)0x25,  /* [5173] */
    (xdc_Char)0x64,  /* [5174] */
    (xdc_Char)0x0,  /* [5175] */
    (xdc_Char)0x4c,  /* [5176] */
    (xdc_Char)0x4d,  /* [5177] */
    (xdc_Char)0x5f,  /* [5178] */
    (xdc_Char)0x73,  /* [5179] */
    (xdc_Char)0x77,  /* [5180] */
    (xdc_Char)0x69,  /* [5181] */
    (xdc_Char)0x74,  /* [5182] */
    (xdc_Char)0x63,  /* [5183] */
    (xdc_Char)0x68,  /* [5184] */
    (xdc_Char)0x3a,  /* [5185] */
    (xdc_Char)0x20,  /* [5186] */
    (xdc_Char)0x6f,  /* [5187] */
    (xdc_Char)0x6c,  /* [5188] */
    (xdc_Char)0x64,  /* [5189] */
    (xdc_Char)0x74,  /* [5190] */
    (xdc_Char)0x73,  /* [5191] */
    (xdc_Char)0x6b,  /* [5192] */
    (xdc_Char)0x3a,  /* [5193] */
    (xdc_Char)0x20,  /* [5194] */
    (xdc_Char)0x30,  /* [5195] */
    (xdc_Char)0x78,  /* [5196] */
    (xdc_Char)0x25,  /* [5197] */
    (xdc_Char)0x78,  /* [5198] */
    (xdc_Char)0x2c,  /* [5199] */
    (xdc_Char)0x20,  /* [5200] */
    (xdc_Char)0x6f,  /* [5201] */
    (xdc_Char)0x6c,  /* [5202] */
    (xdc_Char)0x64,  /* [5203] */
    (xdc_Char)0x66,  /* [5204] */
    (xdc_Char)0x75,  /* [5205] */
    (xdc_Char)0x6e,  /* [5206] */
    (xdc_Char)0x63,  /* [5207] */
    (xdc_Char)0x3a,  /* [5208] */
    (xdc_Char)0x20,  /* [5209] */
    (xdc_Char)0x30,  /* [5210] */
    (xdc_Char)0x78,  /* [5211] */
    (xdc_Char)0x25,  /* [5212] */
    (xdc_Char)0x78,  /* [5213] */
    (xdc_Char)0x2c,  /* [5214] */
    (xdc_Char)0x20,  /* [5215] */
    (xdc_Char)0x6e,  /* [5216] */
    (xdc_Char)0x65,  /* [5217] */
    (xdc_Char)0x77,  /* [5218] */
    (xdc_Char)0x74,  /* [5219] */
    (xdc_Char)0x73,  /* [5220] */
    (xdc_Char)0x6b,  /* [5221] */
    (xdc_Char)0x3a,  /* [5222] */
    (xdc_Char)0x20,  /* [5223] */
    (xdc_Char)0x30,  /* [5224] */
    (xdc_Char)0x78,  /* [5225] */
    (xdc_Char)0x25,  /* [5226] */
    (xdc_Char)0x78,  /* [5227] */
    (xdc_Char)0x2c,  /* [5228] */
    (xdc_Char)0x20,  /* [5229] */
    (xdc_Char)0x6e,  /* [5230] */
    (xdc_Char)0x65,  /* [5231] */
    (xdc_Char)0x77,  /* [5232] */
    (xdc_Char)0x66,  /* [5233] */
    (xdc_Char)0x75,  /* [5234] */
    (xdc_Char)0x6e,  /* [5235] */
    (xdc_Char)0x63,  /* [5236] */
    (xdc_Char)0x3a,  /* [5237] */
    (xdc_Char)0x20,  /* [5238] */
    (xdc_Char)0x30,  /* [5239] */
    (xdc_Char)0x78,  /* [5240] */
    (xdc_Char)0x25,  /* [5241] */
    (xdc_Char)0x78,  /* [5242] */
    (xdc_Char)0x0,  /* [5243] */
    (xdc_Char)0x4c,  /* [5244] */
    (xdc_Char)0x4d,  /* [5245] */
    (xdc_Char)0x5f,  /* [5246] */
    (xdc_Char)0x73,  /* [5247] */
    (xdc_Char)0x6c,  /* [5248] */
    (xdc_Char)0x65,  /* [5249] */
    (xdc_Char)0x65,  /* [5250] */
    (xdc_Char)0x70,  /* [5251] */
    (xdc_Char)0x3a,  /* [5252] */
    (xdc_Char)0x20,  /* [5253] */
    (xdc_Char)0x74,  /* [5254] */
    (xdc_Char)0x73,  /* [5255] */
    (xdc_Char)0x6b,  /* [5256] */
    (xdc_Char)0x3a,  /* [5257] */
    (xdc_Char)0x20,  /* [5258] */
    (xdc_Char)0x30,  /* [5259] */
    (xdc_Char)0x78,  /* [5260] */
    (xdc_Char)0x25,  /* [5261] */
    (xdc_Char)0x78,  /* [5262] */
    (xdc_Char)0x2c,  /* [5263] */
    (xdc_Char)0x20,  /* [5264] */
    (xdc_Char)0x66,  /* [5265] */
    (xdc_Char)0x75,  /* [5266] */
    (xdc_Char)0x6e,  /* [5267] */
    (xdc_Char)0x63,  /* [5268] */
    (xdc_Char)0x3a,  /* [5269] */
    (xdc_Char)0x20,  /* [5270] */
    (xdc_Char)0x30,  /* [5271] */
    (xdc_Char)0x78,  /* [5272] */
    (xdc_Char)0x25,  /* [5273] */
    (xdc_Char)0x78,  /* [5274] */
    (xdc_Char)0x2c,  /* [5275] */
    (xdc_Char)0x20,  /* [5276] */
    (xdc_Char)0x74,  /* [5277] */
    (xdc_Char)0x69,  /* [5278] */
    (xdc_Char)0x6d,  /* [5279] */
    (xdc_Char)0x65,  /* [5280] */
    (xdc_Char)0x6f,  /* [5281] */
    (xdc_Char)0x75,  /* [5282] */
    (xdc_Char)0x74,  /* [5283] */
    (xdc_Char)0x3a,  /* [5284] */
    (xdc_Char)0x20,  /* [5285] */
    (xdc_Char)0x25,  /* [5286] */
    (xdc_Char)0x64,  /* [5287] */
    (xdc_Char)0x0,  /* [5288] */
    (xdc_Char)0x4c,  /* [5289] */
    (xdc_Char)0x44,  /* [5290] */
    (xdc_Char)0x5f,  /* [5291] */
    (xdc_Char)0x72,  /* [5292] */
    (xdc_Char)0x65,  /* [5293] */
    (xdc_Char)0x61,  /* [5294] */
    (xdc_Char)0x64,  /* [5295] */
    (xdc_Char)0x79,  /* [5296] */
    (xdc_Char)0x3a,  /* [5297] */
    (xdc_Char)0x20,  /* [5298] */
    (xdc_Char)0x74,  /* [5299] */
    (xdc_Char)0x73,  /* [5300] */
    (xdc_Char)0x6b,  /* [5301] */
    (xdc_Char)0x3a,  /* [5302] */
    (xdc_Char)0x20,  /* [5303] */
    (xdc_Char)0x30,  /* [5304] */
    (xdc_Char)0x78,  /* [5305] */
    (xdc_Char)0x25,  /* [5306] */
    (xdc_Char)0x78,  /* [5307] */
    (xdc_Char)0x2c,  /* [5308] */
    (xdc_Char)0x20,  /* [5309] */
    (xdc_Char)0x66,  /* [5310] */
    (xdc_Char)0x75,  /* [5311] */
    (xdc_Char)0x6e,  /* [5312] */
    (xdc_Char)0x63,  /* [5313] */
    (xdc_Char)0x3a,  /* [5314] */
    (xdc_Char)0x20,  /* [5315] */
    (xdc_Char)0x30,  /* [5316] */
    (xdc_Char)0x78,  /* [5317] */
    (xdc_Char)0x25,  /* [5318] */
    (xdc_Char)0x78,  /* [5319] */
    (xdc_Char)0x2c,  /* [5320] */
    (xdc_Char)0x20,  /* [5321] */
    (xdc_Char)0x70,  /* [5322] */
    (xdc_Char)0x72,  /* [5323] */
    (xdc_Char)0x69,  /* [5324] */
    (xdc_Char)0x3a,  /* [5325] */
    (xdc_Char)0x20,  /* [5326] */
    (xdc_Char)0x25,  /* [5327] */
    (xdc_Char)0x64,  /* [5328] */
    (xdc_Char)0x0,  /* [5329] */
    (xdc_Char)0x4c,  /* [5330] */
    (xdc_Char)0x44,  /* [5331] */
    (xdc_Char)0x5f,  /* [5332] */
    (xdc_Char)0x62,  /* [5333] */
    (xdc_Char)0x6c,  /* [5334] */
    (xdc_Char)0x6f,  /* [5335] */
    (xdc_Char)0x63,  /* [5336] */
    (xdc_Char)0x6b,  /* [5337] */
    (xdc_Char)0x3a,  /* [5338] */
    (xdc_Char)0x20,  /* [5339] */
    (xdc_Char)0x74,  /* [5340] */
    (xdc_Char)0x73,  /* [5341] */
    (xdc_Char)0x6b,  /* [5342] */
    (xdc_Char)0x3a,  /* [5343] */
    (xdc_Char)0x20,  /* [5344] */
    (xdc_Char)0x30,  /* [5345] */
    (xdc_Char)0x78,  /* [5346] */
    (xdc_Char)0x25,  /* [5347] */
    (xdc_Char)0x78,  /* [5348] */
    (xdc_Char)0x2c,  /* [5349] */
    (xdc_Char)0x20,  /* [5350] */
    (xdc_Char)0x66,  /* [5351] */
    (xdc_Char)0x75,  /* [5352] */
    (xdc_Char)0x6e,  /* [5353] */
    (xdc_Char)0x63,  /* [5354] */
    (xdc_Char)0x3a,  /* [5355] */
    (xdc_Char)0x20,  /* [5356] */
    (xdc_Char)0x30,  /* [5357] */
    (xdc_Char)0x78,  /* [5358] */
    (xdc_Char)0x25,  /* [5359] */
    (xdc_Char)0x78,  /* [5360] */
    (xdc_Char)0x0,  /* [5361] */
    (xdc_Char)0x4c,  /* [5362] */
    (xdc_Char)0x4d,  /* [5363] */
    (xdc_Char)0x5f,  /* [5364] */
    (xdc_Char)0x79,  /* [5365] */
    (xdc_Char)0x69,  /* [5366] */
    (xdc_Char)0x65,  /* [5367] */
    (xdc_Char)0x6c,  /* [5368] */
    (xdc_Char)0x64,  /* [5369] */
    (xdc_Char)0x3a,  /* [5370] */
    (xdc_Char)0x20,  /* [5371] */
    (xdc_Char)0x74,  /* [5372] */
    (xdc_Char)0x73,  /* [5373] */
    (xdc_Char)0x6b,  /* [5374] */
    (xdc_Char)0x3a,  /* [5375] */
    (xdc_Char)0x20,  /* [5376] */
    (xdc_Char)0x30,  /* [5377] */
    (xdc_Char)0x78,  /* [5378] */
    (xdc_Char)0x25,  /* [5379] */
    (xdc_Char)0x78,  /* [5380] */
    (xdc_Char)0x2c,  /* [5381] */
    (xdc_Char)0x20,  /* [5382] */
    (xdc_Char)0x66,  /* [5383] */
    (xdc_Char)0x75,  /* [5384] */
    (xdc_Char)0x6e,  /* [5385] */
    (xdc_Char)0x63,  /* [5386] */
    (xdc_Char)0x3a,  /* [5387] */
    (xdc_Char)0x20,  /* [5388] */
    (xdc_Char)0x30,  /* [5389] */
    (xdc_Char)0x78,  /* [5390] */
    (xdc_Char)0x25,  /* [5391] */
    (xdc_Char)0x78,  /* [5392] */
    (xdc_Char)0x2c,  /* [5393] */
    (xdc_Char)0x20,  /* [5394] */
    (xdc_Char)0x63,  /* [5395] */
    (xdc_Char)0x75,  /* [5396] */
    (xdc_Char)0x72,  /* [5397] */
    (xdc_Char)0x72,  /* [5398] */
    (xdc_Char)0x54,  /* [5399] */
    (xdc_Char)0x68,  /* [5400] */
    (xdc_Char)0x72,  /* [5401] */
    (xdc_Char)0x65,  /* [5402] */
    (xdc_Char)0x61,  /* [5403] */
    (xdc_Char)0x64,  /* [5404] */
    (xdc_Char)0x3a,  /* [5405] */
    (xdc_Char)0x20,  /* [5406] */
    (xdc_Char)0x25,  /* [5407] */
    (xdc_Char)0x64,  /* [5408] */
    (xdc_Char)0x0,  /* [5409] */
    (xdc_Char)0x4c,  /* [5410] */
    (xdc_Char)0x4d,  /* [5411] */
    (xdc_Char)0x5f,  /* [5412] */
    (xdc_Char)0x73,  /* [5413] */
    (xdc_Char)0x65,  /* [5414] */
    (xdc_Char)0x74,  /* [5415] */
    (xdc_Char)0x50,  /* [5416] */
    (xdc_Char)0x72,  /* [5417] */
    (xdc_Char)0x69,  /* [5418] */
    (xdc_Char)0x3a,  /* [5419] */
    (xdc_Char)0x20,  /* [5420] */
    (xdc_Char)0x74,  /* [5421] */
    (xdc_Char)0x73,  /* [5422] */
    (xdc_Char)0x6b,  /* [5423] */
    (xdc_Char)0x3a,  /* [5424] */
    (xdc_Char)0x20,  /* [5425] */
    (xdc_Char)0x30,  /* [5426] */
    (xdc_Char)0x78,  /* [5427] */
    (xdc_Char)0x25,  /* [5428] */
    (xdc_Char)0x78,  /* [5429] */
    (xdc_Char)0x2c,  /* [5430] */
    (xdc_Char)0x20,  /* [5431] */
    (xdc_Char)0x66,  /* [5432] */
    (xdc_Char)0x75,  /* [5433] */
    (xdc_Char)0x6e,  /* [5434] */
    (xdc_Char)0x63,  /* [5435] */
    (xdc_Char)0x3a,  /* [5436] */
    (xdc_Char)0x20,  /* [5437] */
    (xdc_Char)0x30,  /* [5438] */
    (xdc_Char)0x78,  /* [5439] */
    (xdc_Char)0x25,  /* [5440] */
    (xdc_Char)0x78,  /* [5441] */
    (xdc_Char)0x2c,  /* [5442] */
    (xdc_Char)0x20,  /* [5443] */
    (xdc_Char)0x6f,  /* [5444] */
    (xdc_Char)0x6c,  /* [5445] */
    (xdc_Char)0x64,  /* [5446] */
    (xdc_Char)0x50,  /* [5447] */
    (xdc_Char)0x72,  /* [5448] */
    (xdc_Char)0x69,  /* [5449] */
    (xdc_Char)0x3a,  /* [5450] */
    (xdc_Char)0x20,  /* [5451] */
    (xdc_Char)0x25,  /* [5452] */
    (xdc_Char)0x64,  /* [5453] */
    (xdc_Char)0x2c,  /* [5454] */
    (xdc_Char)0x20,  /* [5455] */
    (xdc_Char)0x6e,  /* [5456] */
    (xdc_Char)0x65,  /* [5457] */
    (xdc_Char)0x77,  /* [5458] */
    (xdc_Char)0x50,  /* [5459] */
    (xdc_Char)0x72,  /* [5460] */
    (xdc_Char)0x69,  /* [5461] */
    (xdc_Char)0x20,  /* [5462] */
    (xdc_Char)0x25,  /* [5463] */
    (xdc_Char)0x64,  /* [5464] */
    (xdc_Char)0x0,  /* [5465] */
    (xdc_Char)0x4c,  /* [5466] */
    (xdc_Char)0x44,  /* [5467] */
    (xdc_Char)0x5f,  /* [5468] */
    (xdc_Char)0x65,  /* [5469] */
    (xdc_Char)0x78,  /* [5470] */
    (xdc_Char)0x69,  /* [5471] */
    (xdc_Char)0x74,  /* [5472] */
    (xdc_Char)0x3a,  /* [5473] */
    (xdc_Char)0x20,  /* [5474] */
    (xdc_Char)0x74,  /* [5475] */
    (xdc_Char)0x73,  /* [5476] */
    (xdc_Char)0x6b,  /* [5477] */
    (xdc_Char)0x3a,  /* [5478] */
    (xdc_Char)0x20,  /* [5479] */
    (xdc_Char)0x30,  /* [5480] */
    (xdc_Char)0x78,  /* [5481] */
    (xdc_Char)0x25,  /* [5482] */
    (xdc_Char)0x78,  /* [5483] */
    (xdc_Char)0x2c,  /* [5484] */
    (xdc_Char)0x20,  /* [5485] */
    (xdc_Char)0x66,  /* [5486] */
    (xdc_Char)0x75,  /* [5487] */
    (xdc_Char)0x6e,  /* [5488] */
    (xdc_Char)0x63,  /* [5489] */
    (xdc_Char)0x3a,  /* [5490] */
    (xdc_Char)0x20,  /* [5491] */
    (xdc_Char)0x30,  /* [5492] */
    (xdc_Char)0x78,  /* [5493] */
    (xdc_Char)0x25,  /* [5494] */
    (xdc_Char)0x78,  /* [5495] */
    (xdc_Char)0x0,  /* [5496] */
    (xdc_Char)0x4c,  /* [5497] */
    (xdc_Char)0x4d,  /* [5498] */
    (xdc_Char)0x5f,  /* [5499] */
    (xdc_Char)0x73,  /* [5500] */
    (xdc_Char)0x65,  /* [5501] */
    (xdc_Char)0x74,  /* [5502] */
    (xdc_Char)0x41,  /* [5503] */
    (xdc_Char)0x66,  /* [5504] */
    (xdc_Char)0x66,  /* [5505] */
    (xdc_Char)0x69,  /* [5506] */
    (xdc_Char)0x6e,  /* [5507] */
    (xdc_Char)0x69,  /* [5508] */
    (xdc_Char)0x74,  /* [5509] */
    (xdc_Char)0x79,  /* [5510] */
    (xdc_Char)0x3a,  /* [5511] */
    (xdc_Char)0x20,  /* [5512] */
    (xdc_Char)0x74,  /* [5513] */
    (xdc_Char)0x73,  /* [5514] */
    (xdc_Char)0x6b,  /* [5515] */
    (xdc_Char)0x3a,  /* [5516] */
    (xdc_Char)0x20,  /* [5517] */
    (xdc_Char)0x30,  /* [5518] */
    (xdc_Char)0x78,  /* [5519] */
    (xdc_Char)0x25,  /* [5520] */
    (xdc_Char)0x78,  /* [5521] */
    (xdc_Char)0x2c,  /* [5522] */
    (xdc_Char)0x20,  /* [5523] */
    (xdc_Char)0x66,  /* [5524] */
    (xdc_Char)0x75,  /* [5525] */
    (xdc_Char)0x6e,  /* [5526] */
    (xdc_Char)0x63,  /* [5527] */
    (xdc_Char)0x3a,  /* [5528] */
    (xdc_Char)0x20,  /* [5529] */
    (xdc_Char)0x30,  /* [5530] */
    (xdc_Char)0x78,  /* [5531] */
    (xdc_Char)0x25,  /* [5532] */
    (xdc_Char)0x78,  /* [5533] */
    (xdc_Char)0x2c,  /* [5534] */
    (xdc_Char)0x20,  /* [5535] */
    (xdc_Char)0x6f,  /* [5536] */
    (xdc_Char)0x6c,  /* [5537] */
    (xdc_Char)0x64,  /* [5538] */
    (xdc_Char)0x43,  /* [5539] */
    (xdc_Char)0x6f,  /* [5540] */
    (xdc_Char)0x72,  /* [5541] */
    (xdc_Char)0x65,  /* [5542] */
    (xdc_Char)0x3a,  /* [5543] */
    (xdc_Char)0x20,  /* [5544] */
    (xdc_Char)0x25,  /* [5545] */
    (xdc_Char)0x64,  /* [5546] */
    (xdc_Char)0x2c,  /* [5547] */
    (xdc_Char)0x20,  /* [5548] */
    (xdc_Char)0x6f,  /* [5549] */
    (xdc_Char)0x6c,  /* [5550] */
    (xdc_Char)0x64,  /* [5551] */
    (xdc_Char)0x41,  /* [5552] */
    (xdc_Char)0x66,  /* [5553] */
    (xdc_Char)0x66,  /* [5554] */
    (xdc_Char)0x69,  /* [5555] */
    (xdc_Char)0x6e,  /* [5556] */
    (xdc_Char)0x69,  /* [5557] */
    (xdc_Char)0x74,  /* [5558] */
    (xdc_Char)0x79,  /* [5559] */
    (xdc_Char)0x20,  /* [5560] */
    (xdc_Char)0x25,  /* [5561] */
    (xdc_Char)0x64,  /* [5562] */
    (xdc_Char)0x2c,  /* [5563] */
    (xdc_Char)0x20,  /* [5564] */
    (xdc_Char)0x6e,  /* [5565] */
    (xdc_Char)0x65,  /* [5566] */
    (xdc_Char)0x77,  /* [5567] */
    (xdc_Char)0x41,  /* [5568] */
    (xdc_Char)0x66,  /* [5569] */
    (xdc_Char)0x66,  /* [5570] */
    (xdc_Char)0x69,  /* [5571] */
    (xdc_Char)0x6e,  /* [5572] */
    (xdc_Char)0x69,  /* [5573] */
    (xdc_Char)0x74,  /* [5574] */
    (xdc_Char)0x79,  /* [5575] */
    (xdc_Char)0x20,  /* [5576] */
    (xdc_Char)0x25,  /* [5577] */
    (xdc_Char)0x64,  /* [5578] */
    (xdc_Char)0x0,  /* [5579] */
    (xdc_Char)0x4c,  /* [5580] */
    (xdc_Char)0x44,  /* [5581] */
    (xdc_Char)0x5f,  /* [5582] */
    (xdc_Char)0x73,  /* [5583] */
    (xdc_Char)0x63,  /* [5584] */
    (xdc_Char)0x68,  /* [5585] */
    (xdc_Char)0x65,  /* [5586] */
    (xdc_Char)0x64,  /* [5587] */
    (xdc_Char)0x75,  /* [5588] */
    (xdc_Char)0x6c,  /* [5589] */
    (xdc_Char)0x65,  /* [5590] */
    (xdc_Char)0x3a,  /* [5591] */
    (xdc_Char)0x20,  /* [5592] */
    (xdc_Char)0x63,  /* [5593] */
    (xdc_Char)0x6f,  /* [5594] */
    (xdc_Char)0x72,  /* [5595] */
    (xdc_Char)0x65,  /* [5596] */
    (xdc_Char)0x49,  /* [5597] */
    (xdc_Char)0x64,  /* [5598] */
    (xdc_Char)0x3a,  /* [5599] */
    (xdc_Char)0x20,  /* [5600] */
    (xdc_Char)0x25,  /* [5601] */
    (xdc_Char)0x64,  /* [5602] */
    (xdc_Char)0x2c,  /* [5603] */
    (xdc_Char)0x20,  /* [5604] */
    (xdc_Char)0x77,  /* [5605] */
    (xdc_Char)0x6f,  /* [5606] */
    (xdc_Char)0x72,  /* [5607] */
    (xdc_Char)0x6b,  /* [5608] */
    (xdc_Char)0x46,  /* [5609] */
    (xdc_Char)0x6c,  /* [5610] */
    (xdc_Char)0x61,  /* [5611] */
    (xdc_Char)0x67,  /* [5612] */
    (xdc_Char)0x3a,  /* [5613] */
    (xdc_Char)0x20,  /* [5614] */
    (xdc_Char)0x25,  /* [5615] */
    (xdc_Char)0x64,  /* [5616] */
    (xdc_Char)0x2c,  /* [5617] */
    (xdc_Char)0x20,  /* [5618] */
    (xdc_Char)0x63,  /* [5619] */
    (xdc_Char)0x75,  /* [5620] */
    (xdc_Char)0x72,  /* [5621] */
    (xdc_Char)0x53,  /* [5622] */
    (xdc_Char)0x65,  /* [5623] */
    (xdc_Char)0x74,  /* [5624] */
    (xdc_Char)0x4c,  /* [5625] */
    (xdc_Char)0x6f,  /* [5626] */
    (xdc_Char)0x63,  /* [5627] */
    (xdc_Char)0x61,  /* [5628] */
    (xdc_Char)0x6c,  /* [5629] */
    (xdc_Char)0x3a,  /* [5630] */
    (xdc_Char)0x20,  /* [5631] */
    (xdc_Char)0x25,  /* [5632] */
    (xdc_Char)0x64,  /* [5633] */
    (xdc_Char)0x2c,  /* [5634] */
    (xdc_Char)0x20,  /* [5635] */
    (xdc_Char)0x63,  /* [5636] */
    (xdc_Char)0x75,  /* [5637] */
    (xdc_Char)0x72,  /* [5638] */
    (xdc_Char)0x53,  /* [5639] */
    (xdc_Char)0x65,  /* [5640] */
    (xdc_Char)0x74,  /* [5641] */
    (xdc_Char)0x58,  /* [5642] */
    (xdc_Char)0x3a,  /* [5643] */
    (xdc_Char)0x20,  /* [5644] */
    (xdc_Char)0x25,  /* [5645] */
    (xdc_Char)0x64,  /* [5646] */
    (xdc_Char)0x2c,  /* [5647] */
    (xdc_Char)0x20,  /* [5648] */
    (xdc_Char)0x63,  /* [5649] */
    (xdc_Char)0x75,  /* [5650] */
    (xdc_Char)0x72,  /* [5651] */
    (xdc_Char)0x4d,  /* [5652] */
    (xdc_Char)0x61,  /* [5653] */
    (xdc_Char)0x73,  /* [5654] */
    (xdc_Char)0x6b,  /* [5655] */
    (xdc_Char)0x4c,  /* [5656] */
    (xdc_Char)0x6f,  /* [5657] */
    (xdc_Char)0x63,  /* [5658] */
    (xdc_Char)0x61,  /* [5659] */
    (xdc_Char)0x6c,  /* [5660] */
    (xdc_Char)0x3a,  /* [5661] */
    (xdc_Char)0x20,  /* [5662] */
    (xdc_Char)0x25,  /* [5663] */
    (xdc_Char)0x64,  /* [5664] */
    (xdc_Char)0x0,  /* [5665] */
    (xdc_Char)0x4c,  /* [5666] */
    (xdc_Char)0x44,  /* [5667] */
    (xdc_Char)0x5f,  /* [5668] */
    (xdc_Char)0x6e,  /* [5669] */
    (xdc_Char)0x6f,  /* [5670] */
    (xdc_Char)0x57,  /* [5671] */
    (xdc_Char)0x6f,  /* [5672] */
    (xdc_Char)0x72,  /* [5673] */
    (xdc_Char)0x6b,  /* [5674] */
    (xdc_Char)0x3a,  /* [5675] */
    (xdc_Char)0x20,  /* [5676] */
    (xdc_Char)0x63,  /* [5677] */
    (xdc_Char)0x6f,  /* [5678] */
    (xdc_Char)0x72,  /* [5679] */
    (xdc_Char)0x65,  /* [5680] */
    (xdc_Char)0x49,  /* [5681] */
    (xdc_Char)0x64,  /* [5682] */
    (xdc_Char)0x3a,  /* [5683] */
    (xdc_Char)0x20,  /* [5684] */
    (xdc_Char)0x25,  /* [5685] */
    (xdc_Char)0x64,  /* [5686] */
    (xdc_Char)0x2c,  /* [5687] */
    (xdc_Char)0x20,  /* [5688] */
    (xdc_Char)0x63,  /* [5689] */
    (xdc_Char)0x75,  /* [5690] */
    (xdc_Char)0x72,  /* [5691] */
    (xdc_Char)0x53,  /* [5692] */
    (xdc_Char)0x65,  /* [5693] */
    (xdc_Char)0x74,  /* [5694] */
    (xdc_Char)0x4c,  /* [5695] */
    (xdc_Char)0x6f,  /* [5696] */
    (xdc_Char)0x63,  /* [5697] */
    (xdc_Char)0x61,  /* [5698] */
    (xdc_Char)0x6c,  /* [5699] */
    (xdc_Char)0x3a,  /* [5700] */
    (xdc_Char)0x20,  /* [5701] */
    (xdc_Char)0x25,  /* [5702] */
    (xdc_Char)0x64,  /* [5703] */
    (xdc_Char)0x2c,  /* [5704] */
    (xdc_Char)0x20,  /* [5705] */
    (xdc_Char)0x63,  /* [5706] */
    (xdc_Char)0x75,  /* [5707] */
    (xdc_Char)0x72,  /* [5708] */
    (xdc_Char)0x53,  /* [5709] */
    (xdc_Char)0x65,  /* [5710] */
    (xdc_Char)0x74,  /* [5711] */
    (xdc_Char)0x58,  /* [5712] */
    (xdc_Char)0x3a,  /* [5713] */
    (xdc_Char)0x20,  /* [5714] */
    (xdc_Char)0x25,  /* [5715] */
    (xdc_Char)0x64,  /* [5716] */
    (xdc_Char)0x2c,  /* [5717] */
    (xdc_Char)0x20,  /* [5718] */
    (xdc_Char)0x63,  /* [5719] */
    (xdc_Char)0x75,  /* [5720] */
    (xdc_Char)0x72,  /* [5721] */
    (xdc_Char)0x4d,  /* [5722] */
    (xdc_Char)0x61,  /* [5723] */
    (xdc_Char)0x73,  /* [5724] */
    (xdc_Char)0x6b,  /* [5725] */
    (xdc_Char)0x4c,  /* [5726] */
    (xdc_Char)0x6f,  /* [5727] */
    (xdc_Char)0x63,  /* [5728] */
    (xdc_Char)0x61,  /* [5729] */
    (xdc_Char)0x6c,  /* [5730] */
    (xdc_Char)0x3a,  /* [5731] */
    (xdc_Char)0x20,  /* [5732] */
    (xdc_Char)0x25,  /* [5733] */
    (xdc_Char)0x64,  /* [5734] */
    (xdc_Char)0x0,  /* [5735] */
    (xdc_Char)0x4c,  /* [5736] */
    (xdc_Char)0x4d,  /* [5737] */
    (xdc_Char)0x5f,  /* [5738] */
    (xdc_Char)0x62,  /* [5739] */
    (xdc_Char)0x65,  /* [5740] */
    (xdc_Char)0x67,  /* [5741] */
    (xdc_Char)0x69,  /* [5742] */
    (xdc_Char)0x6e,  /* [5743] */
    (xdc_Char)0x3a,  /* [5744] */
    (xdc_Char)0x20,  /* [5745] */
    (xdc_Char)0x68,  /* [5746] */
    (xdc_Char)0x77,  /* [5747] */
    (xdc_Char)0x69,  /* [5748] */
    (xdc_Char)0x3a,  /* [5749] */
    (xdc_Char)0x20,  /* [5750] */
    (xdc_Char)0x30,  /* [5751] */
    (xdc_Char)0x78,  /* [5752] */
    (xdc_Char)0x25,  /* [5753] */
    (xdc_Char)0x78,  /* [5754] */
    (xdc_Char)0x2c,  /* [5755] */
    (xdc_Char)0x20,  /* [5756] */
    (xdc_Char)0x66,  /* [5757] */
    (xdc_Char)0x75,  /* [5758] */
    (xdc_Char)0x6e,  /* [5759] */
    (xdc_Char)0x63,  /* [5760] */
    (xdc_Char)0x3a,  /* [5761] */
    (xdc_Char)0x20,  /* [5762] */
    (xdc_Char)0x30,  /* [5763] */
    (xdc_Char)0x78,  /* [5764] */
    (xdc_Char)0x25,  /* [5765] */
    (xdc_Char)0x78,  /* [5766] */
    (xdc_Char)0x2c,  /* [5767] */
    (xdc_Char)0x20,  /* [5768] */
    (xdc_Char)0x70,  /* [5769] */
    (xdc_Char)0x72,  /* [5770] */
    (xdc_Char)0x65,  /* [5771] */
    (xdc_Char)0x54,  /* [5772] */
    (xdc_Char)0x68,  /* [5773] */
    (xdc_Char)0x72,  /* [5774] */
    (xdc_Char)0x65,  /* [5775] */
    (xdc_Char)0x61,  /* [5776] */
    (xdc_Char)0x64,  /* [5777] */
    (xdc_Char)0x3a,  /* [5778] */
    (xdc_Char)0x20,  /* [5779] */
    (xdc_Char)0x25,  /* [5780] */
    (xdc_Char)0x64,  /* [5781] */
    (xdc_Char)0x2c,  /* [5782] */
    (xdc_Char)0x20,  /* [5783] */
    (xdc_Char)0x69,  /* [5784] */
    (xdc_Char)0x6e,  /* [5785] */
    (xdc_Char)0x74,  /* [5786] */
    (xdc_Char)0x4e,  /* [5787] */
    (xdc_Char)0x75,  /* [5788] */
    (xdc_Char)0x6d,  /* [5789] */
    (xdc_Char)0x3a,  /* [5790] */
    (xdc_Char)0x20,  /* [5791] */
    (xdc_Char)0x25,  /* [5792] */
    (xdc_Char)0x64,  /* [5793] */
    (xdc_Char)0x2c,  /* [5794] */
    (xdc_Char)0x20,  /* [5795] */
    (xdc_Char)0x69,  /* [5796] */
    (xdc_Char)0x72,  /* [5797] */
    (xdc_Char)0x70,  /* [5798] */
    (xdc_Char)0x3a,  /* [5799] */
    (xdc_Char)0x20,  /* [5800] */
    (xdc_Char)0x30,  /* [5801] */
    (xdc_Char)0x78,  /* [5802] */
    (xdc_Char)0x25,  /* [5803] */
    (xdc_Char)0x78,  /* [5804] */
    (xdc_Char)0x0,  /* [5805] */
    (xdc_Char)0x4c,  /* [5806] */
    (xdc_Char)0x44,  /* [5807] */
    (xdc_Char)0x5f,  /* [5808] */
    (xdc_Char)0x65,  /* [5809] */
    (xdc_Char)0x6e,  /* [5810] */
    (xdc_Char)0x64,  /* [5811] */
    (xdc_Char)0x3a,  /* [5812] */
    (xdc_Char)0x20,  /* [5813] */
    (xdc_Char)0x68,  /* [5814] */
    (xdc_Char)0x77,  /* [5815] */
    (xdc_Char)0x69,  /* [5816] */
    (xdc_Char)0x3a,  /* [5817] */
    (xdc_Char)0x20,  /* [5818] */
    (xdc_Char)0x30,  /* [5819] */
    (xdc_Char)0x78,  /* [5820] */
    (xdc_Char)0x25,  /* [5821] */
    (xdc_Char)0x78,  /* [5822] */
    (xdc_Char)0x0,  /* [5823] */
    (xdc_Char)0x54,  /* [5824] */
    (xdc_Char)0x65,  /* [5825] */
    (xdc_Char)0x73,  /* [5826] */
    (xdc_Char)0x74,  /* [5827] */
    (xdc_Char)0x20,  /* [5828] */
    (xdc_Char)0x45,  /* [5829] */
    (xdc_Char)0x76,  /* [5830] */
    (xdc_Char)0x65,  /* [5831] */
    (xdc_Char)0x6e,  /* [5832] */
    (xdc_Char)0x74,  /* [5833] */
    (xdc_Char)0x0,  /* [5834] */
    (xdc_Char)0x78,  /* [5835] */
    (xdc_Char)0x64,  /* [5836] */
    (xdc_Char)0x63,  /* [5837] */
    (xdc_Char)0x2e,  /* [5838] */
    (xdc_Char)0x0,  /* [5839] */
    (xdc_Char)0x72,  /* [5840] */
    (xdc_Char)0x75,  /* [5841] */
    (xdc_Char)0x6e,  /* [5842] */
    (xdc_Char)0x74,  /* [5843] */
    (xdc_Char)0x69,  /* [5844] */
    (xdc_Char)0x6d,  /* [5845] */
    (xdc_Char)0x65,  /* [5846] */
    (xdc_Char)0x2e,  /* [5847] */
    (xdc_Char)0x0,  /* [5848] */
    (xdc_Char)0x4d,  /* [5849] */
    (xdc_Char)0x61,  /* [5850] */
    (xdc_Char)0x69,  /* [5851] */
    (xdc_Char)0x6e,  /* [5852] */
    (xdc_Char)0x0,  /* [5853] */
    (xdc_Char)0x4d,  /* [5854] */
    (xdc_Char)0x65,  /* [5855] */
    (xdc_Char)0x6d,  /* [5856] */
    (xdc_Char)0x6f,  /* [5857] */
    (xdc_Char)0x72,  /* [5858] */
    (xdc_Char)0x79,  /* [5859] */
    (xdc_Char)0x0,  /* [5860] */
    (xdc_Char)0x63,  /* [5861] */
    (xdc_Char)0x6f,  /* [5862] */
    (xdc_Char)0x6e,  /* [5863] */
    (xdc_Char)0x73,  /* [5864] */
    (xdc_Char)0x6f,  /* [5865] */
    (xdc_Char)0x6c,  /* [5866] */
    (xdc_Char)0x65,  /* [5867] */
    (xdc_Char)0x0,  /* [5868] */
    (xdc_Char)0x74,  /* [5869] */
    (xdc_Char)0x69,  /* [5870] */
    (xdc_Char)0x2e,  /* [5871] */
    (xdc_Char)0x73,  /* [5872] */
    (xdc_Char)0x79,  /* [5873] */
    (xdc_Char)0x73,  /* [5874] */
    (xdc_Char)0x62,  /* [5875] */
    (xdc_Char)0x69,  /* [5876] */
    (xdc_Char)0x6f,  /* [5877] */
    (xdc_Char)0x73,  /* [5878] */
    (xdc_Char)0x2e,  /* [5879] */
    (xdc_Char)0x6b,  /* [5880] */
    (xdc_Char)0x6e,  /* [5881] */
    (xdc_Char)0x6c,  /* [5882] */
    (xdc_Char)0x2e,  /* [5883] */
    (xdc_Char)0x54,  /* [5884] */
    (xdc_Char)0x61,  /* [5885] */
    (xdc_Char)0x73,  /* [5886] */
    (xdc_Char)0x6b,  /* [5887] */
    (xdc_Char)0x2e,  /* [5888] */
    (xdc_Char)0x49,  /* [5889] */
    (xdc_Char)0x64,  /* [5890] */
    (xdc_Char)0x6c,  /* [5891] */
    (xdc_Char)0x65,  /* [5892] */
    (xdc_Char)0x54,  /* [5893] */
    (xdc_Char)0x61,  /* [5894] */
    (xdc_Char)0x73,  /* [5895] */
    (xdc_Char)0x6b,  /* [5896] */
    (xdc_Char)0x0,  /* [5897] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[4] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x16cb,  /* left */
        (xdc_Bits16)0x16d0,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x16d9,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x16de,  /* right */
    },  /* [3] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0xc;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x170a;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x4;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0xd;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */

/* Module_startup */
xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_lm4_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_arm_m3_Hwi_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.gates.GateHwi FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateHwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateHwi_query__F(qual);
}


/*
 * ======== ti.sysbios.gates.GateMutex FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateMutex_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateMutex_query__F(qual);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Clock_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Clock_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Swi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Swi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Task_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Task_Module_startup__F(state);
}


/*
 * ======== ti.uia.sysbios.LoggerIdle FUNCTION STUBS ========
 */

/* enable__E */
xdc_Bool ti_uia_sysbios_LoggerIdle_enable__E( ti_uia_sysbios_LoggerIdle_Handle __inst ) 
{
    return ti_uia_sysbios_LoggerIdle_enable__F((void*)__inst);
}

/* disable__E */
xdc_Bool ti_uia_sysbios_LoggerIdle_disable__E( ti_uia_sysbios_LoggerIdle_Handle __inst ) 
{
    return ti_uia_sysbios_LoggerIdle_disable__F((void*)__inst);
}

/* flush__E */
xdc_Void ti_uia_sysbios_LoggerIdle_flush__E( void ) 
{
    ti_uia_sysbios_LoggerIdle_flush__F();
}


/*
 * ======== xdc.runtime.Diags FUNCTION STUBS ========
 */

/* setMask__E */
xdc_Void xdc_runtime_Diags_setMask__E( xdc_CString control ) 
{
    xdc_runtime_Diags_setMask__F(control);
}


/*
 * ======== xdc.runtime.Error FUNCTION STUBS ========
 */

/* check__E */
xdc_Bool xdc_runtime_Error_check__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_check__F(eb);
}

/* getData__E */
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getData__F(eb);
}

/* getCode__E */
xdc_UInt16 xdc_runtime_Error_getCode__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getCode__F(eb);
}

/* getId__E */
xdc_runtime_Error_Id xdc_runtime_Error_getId__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getId__F(eb);
}

/* getMsg__E */
xdc_String xdc_runtime_Error_getMsg__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getMsg__F(eb);
}

/* getSite__E */
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getSite__F(eb);
}

/* init__E */
xdc_Void xdc_runtime_Error_init__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_init__F(eb);
}

/* print__E */
xdc_Void xdc_runtime_Error_print__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_print__F(eb);
}

/* raiseX__E */
xdc_Void xdc_runtime_Error_raiseX__E( xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_CString file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2 ) 
{
    xdc_runtime_Error_raiseX__F(eb, mod, file, line, id, arg1, arg2);
}


/*
 * ======== xdc.runtime.Gate FUNCTION STUBS ========
 */

/* enterSystem__E */
xdc_IArg xdc_runtime_Gate_enterSystem__E( void ) 
{
    return xdc_runtime_Gate_enterSystem__F();
}

/* leaveSystem__E */
xdc_Void xdc_runtime_Gate_leaveSystem__E( xdc_IArg key ) 
{
    xdc_runtime_Gate_leaveSystem__F(key);
}


/*
 * ======== xdc.runtime.Log FUNCTION STUBS ========
 */

/* doPrint__E */
xdc_Void xdc_runtime_Log_doPrint__E( xdc_runtime_Log_EventRec* evRec ) 
{
    xdc_runtime_Log_doPrint__F(evRec);
}


/*
 * ======== xdc.runtime.Memory FUNCTION STUBS ========
 */

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_alloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_alloc__F(heap, size, align, eb);
}

/* calloc__E */
xdc_Ptr xdc_runtime_Memory_calloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_calloc__F(heap, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_free__E( xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_Memory_free__F(heap, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_getStats__E( xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_Memory_getStats__F(heap, stats);
}

/* query__E */
xdc_Bool xdc_runtime_Memory_query__E( xdc_runtime_IHeap_Handle heap, xdc_Int qual ) 
{
    return xdc_runtime_Memory_query__F(heap, qual);
}

/* getMaxDefaultTypeAlign__E */
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E( void ) 
{
    return xdc_runtime_Memory_getMaxDefaultTypeAlign__F();
}

/* valloc__E */
xdc_Ptr xdc_runtime_Memory_valloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_valloc__F(heap, size, align, value, eb);
}


/*
 * ======== xdc.runtime.Registry FUNCTION STUBS ========
 */

/* addModule__E */
xdc_runtime_Registry_Result xdc_runtime_Registry_addModule__E( xdc_runtime_Registry_Desc* desc, xdc_CString modName ) 
{
    return xdc_runtime_Registry_addModule__F(desc, modName);
}

/* findByName__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByName__E( xdc_CString modName ) 
{
    return xdc_runtime_Registry_findByName__F(modName);
}

/* findByNamePattern__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByNamePattern__E( xdc_CString namePat, xdc_Int len, xdc_runtime_Registry_Desc* prev ) 
{
    return xdc_runtime_Registry_findByNamePattern__F(namePat, len, prev);
}

/* findById__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findById__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_findById__F(mid);
}

/* getMask__E */
xdc_Bool xdc_runtime_Registry_getMask__E( xdc_CString name, xdc_runtime_Types_DiagsMask* mask ) 
{
    return xdc_runtime_Registry_getMask__F(name, mask);
}

/* isMember__E */
xdc_Bool xdc_runtime_Registry_isMember__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_isMember__F(mid);
}

/* getNextModule__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_getNextModule__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getNextModule__F(desc);
}

/* getModuleName__E */
xdc_CString xdc_runtime_Registry_getModuleName__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleName__F(desc);
}

/* getModuleId__E */
xdc_runtime_Types_ModuleId xdc_runtime_Registry_getModuleId__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleId__F(desc);
}


/*
 * ======== xdc.runtime.Startup FUNCTION STUBS ========
 */

/* exec__E */
xdc_Void xdc_runtime_Startup_exec__E( void ) 
{
    xdc_runtime_Startup_exec__F();
}

/* rtsDone__E */
xdc_Bool xdc_runtime_Startup_rtsDone__E( void ) 
{
    return xdc_runtime_Startup_rtsDone__F();
}


/*
 * ======== xdc.runtime.SysCallback FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_SysCallback_abort__E( xdc_CString str ) 
{
    xdc_runtime_SysCallback_abort__F(str);
}

/* exit__E */
xdc_Void xdc_runtime_SysCallback_exit__E( xdc_Int stat ) 
{
    xdc_runtime_SysCallback_exit__F(stat);
}

/* flush__E */
xdc_Void xdc_runtime_SysCallback_flush__E( void ) 
{
    xdc_runtime_SysCallback_flush__F();
}

/* putch__E */
xdc_Void xdc_runtime_SysCallback_putch__E( xdc_Char ch ) 
{
    xdc_runtime_SysCallback_putch__F(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_SysCallback_ready__E( void ) 
{
    return xdc_runtime_SysCallback_ready__F();
}


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_System_abort__E( xdc_CString str ) 
{
    xdc_runtime_System_abort__F(str);
}

/* atexit__E */
xdc_Bool xdc_runtime_System_atexit__E( xdc_runtime_System_AtexitHandler handler ) 
{
    return xdc_runtime_System_atexit__F(handler);
}

/* exit__E */
xdc_Void xdc_runtime_System_exit__E( xdc_Int stat ) 
{
    xdc_runtime_System_exit__F(stat);
}

/* putch__E */
xdc_Void xdc_runtime_System_putch__E( xdc_Char ch ) 
{
    xdc_runtime_System_putch__F(ch);
}

/* flush__E */
xdc_Void xdc_runtime_System_flush__E( void ) 
{
    xdc_runtime_System_flush__F();
}

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vprintf__E */
xdc_Int xdc_runtime_System_vprintf__E( xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vprintf__F(fmt, va);
}

/* avprintf__E */
xdc_Int xdc_runtime_System_avprintf__E( xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avprintf__F(fmt, va);
}

/* vsprintf__E */
xdc_Int xdc_runtime_System_vsprintf__E( xdc_Char buf[], xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsprintf__F(buf, fmt, va);
}

/* avsprintf__E */
xdc_Int xdc_runtime_System_avsprintf__E( xdc_Char buf[], xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avsprintf__F(buf, fmt, va);
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vsnprintf__E */
xdc_Int xdc_runtime_System_vsnprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsnprintf__F(buf, n, fmt, va);
}

/* Module_startup */
xdc_Int xdc_runtime_System_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_System_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Text FUNCTION STUBS ========
 */

/* cordText__E */
xdc_String xdc_runtime_Text_cordText__E( xdc_runtime_Text_CordAddr cord ) 
{
    return xdc_runtime_Text_cordText__F(cord);
}

/* ropeText__E */
xdc_String xdc_runtime_Text_ropeText__E( xdc_runtime_Text_RopeId rope ) 
{
    return xdc_runtime_Text_ropeText__F(rope);
}

/* matchRope__E */
xdc_Int xdc_runtime_Text_matchRope__E( xdc_runtime_Text_RopeId rope, xdc_CString pat, xdc_Int* lenp ) 
{
    return xdc_runtime_Text_matchRope__F(rope, pat, lenp);
}

/* putLab__E */
xdc_Int xdc_runtime_Text_putLab__E( xdc_runtime_Types_Label* lab, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putLab__F(lab, bufp, len);
}

/* putMod__E */
xdc_Int xdc_runtime_Text_putMod__E( xdc_runtime_Types_ModuleId mid, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putMod__F(mid, bufp, len);
}

/* putSite__E */
xdc_Int xdc_runtime_Text_putSite__E( xdc_runtime_Types_Site* site, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putSite__F(site, bufp, len);
}


/*
 * ======== xdc.runtime.Timestamp FUNCTION STUBS ========
 */

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_get32__E( void ) 
{
    return xdc_runtime_Timestamp_get32__F();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_get64__E( xdc_runtime_Types_Timestamp64* result ) 
{
    xdc_runtime_Timestamp_get64__F(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_getFreq__E( xdc_runtime_Types_FreqHz* freq ) 
{
    xdc_runtime_Timestamp_getFreq__F(freq);
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_BIOS_RtsGateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_m3_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_arm_m3_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_lm4_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_family_arm_lm4_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr* oldtskContext, xdc_Ptr* newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Main_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(oa, osz, aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)pa, sizeof(xdc_runtime_IHeap_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Memory_HeapProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats* stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_System_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysCallback */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysCallback_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysCallback_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysCallback_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysCallback_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysCallback_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysCallback_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64* result )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.lm4.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_lm4_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_lm4_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_lm4_Timer___S1) - sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};



/*
 * ======== ti.uia.sysbios.LoggerIdle OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_sysbios_LoggerIdle_Object2__ s0; char c; } ti_uia_sysbios_LoggerIdle___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_sysbios_LoggerIdle_Object__DESC__C = {
    (Ptr)&ti_uia_sysbios_LoggerIdle_Module__FXNS__C, /* fxnTab */
    &ti_uia_sysbios_LoggerIdle_Module__root__V.link, /* modLink */
    sizeof(ti_uia_sysbios_LoggerIdle___S1) - sizeof(ti_uia_sysbios_LoggerIdle_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_sysbios_LoggerIdle_Object2__), /* objSize */
    (Ptr)&ti_uia_sysbios_LoggerIdle_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_sysbios_LoggerIdle_Params), /* prmsSize */
};



/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.lm4.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_lm4_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_arm_lm4_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 39;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_arm_lm4_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_family_arm_lm4_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_lm4_Timer_Object__*)ti_sysbios_family_arm_lm4_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_lm4_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_arm_lm4_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params prms;
    ti_sysbios_family_arm_lm4_Timer_Object* obj;
    int iStat;

    ti_sysbios_family_arm_lm4_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, *((ti_sysbios_family_arm_lm4_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_arm_lm4_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_arm_m3_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 35;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Hwi_Object__*)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_arm_m3_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params prms;
    ti_sysbios_family_arm_m3_Hwi_Object* obj;
    int iStat;

    ti_sysbios_family_arm_m3_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateHwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 47;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__*)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateMutex_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 48;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__*)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 20;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__*)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object* obj;
    int iStat;

    ti_sysbios_hal_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 21;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__*)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Timer_Params prms;
    ti_sysbios_hal_Timer_Object* obj;
    int iStat;

    ti_sysbios_hal_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 49;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__*)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__*)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 24;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__*)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Clock___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object* obj;

    ti_sysbios_knl_Clock_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__F(obj, args->clockFxn, args->timeout, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Queue_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 27;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__*)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Queue___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Semaphore_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 28;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__*)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object* obj;

    ti_sysbios_knl_Semaphore_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__F(obj, args->count, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 29;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__*)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Swi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object* obj;
    int iStat;

    ti_sysbios_knl_Swi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__F(obj, args->swiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 30;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__*)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Task___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object* obj;
    int iStat;

    ti_sysbios_knl_Task_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.runtime.EventHdr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_EventHdr_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.uia.sysbios.LoggerIdle SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_sysbios_LoggerIdle_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_sysbios_LoggerIdle_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_sysbios_LoggerIdle_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_sysbios_LoggerIdle_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_sysbios_LoggerIdle_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_sysbios_LoggerIdle_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_sysbios_LoggerIdle_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_sysbios_LoggerIdle_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_sysbios_LoggerIdle_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_sysbios_LoggerIdle_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_sysbios_LoggerIdle_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_sysbios_LoggerIdle_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_sysbios_LoggerIdle_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_sysbios_LoggerIdle_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_sysbios_LoggerIdle_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_sysbios_LoggerIdle_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_sysbios_LoggerIdle_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_sysbios_LoggerIdle_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_sysbios_LoggerIdle_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_uia_sysbios_LoggerIdle_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 46;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_sysbios_LoggerIdle_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_sysbios_LoggerIdle_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_sysbios_LoggerIdle_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_uia_sysbios_LoggerIdle_Object__*)oa) + i;
    }

    if (ti_uia_sysbios_LoggerIdle_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_sysbios_LoggerIdle_Object__*)ti_uia_sysbios_LoggerIdle_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_sysbios_LoggerIdle_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_sysbios_LoggerIdle_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_sysbios_LoggerIdle_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_sysbios_LoggerIdle_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_sysbios_LoggerIdle_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_sysbios_LoggerIdle_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_uia_sysbios_LoggerIdle___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_uia_sysbios_LoggerIdle_Params prms;
    ti_uia_sysbios_LoggerIdle_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_uia_sysbios_LoggerIdle_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_sysbios_LoggerIdle_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_uia_sysbios_LoggerIdle_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_sysbios_LoggerIdle_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_uia_sysbios_LoggerIdle_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_sysbios_LoggerIdle_Object__DESC__C, *((ti_uia_sysbios_LoggerIdle_Object**)instp), NULL, -1, FALSE);
    *((ti_uia_sysbios_LoggerIdle_Handle*)instp) = NULL;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.SysCallback SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysCallback_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void ) 
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysCallback_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle console = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);











/*
 * ======== CONSTANTS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__FXNS__C, ".const:ti_uia_sysbios_LoggerIdle_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__FXNS__C, ".const:xdc_runtime_SysCallback_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__PARAMS__C, ".const:ti_uia_sysbios_LoggerIdle_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C");
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__id__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__count__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__table__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_anyMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_anyMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_enableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_enableFunc__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_disableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_disableFunc__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_lm4_Timer_startupNeeded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priorities__A, ".const:ti_sysbios_family_arm_m3_Hwi_priorities__A");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatchTable__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatchTable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priorities__C, ".const:ti_sysbios_family_arm_m3_Hwi_priorities__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__startupDoneFxn__C, ".const:ti_uia_events_DvtTypes_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsEnabled__C, ".const:ti_uia_runtime_EventHdr_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsIncluded__C, ".const:ti_uia_runtime_EventHdr_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsMask__C, ".const:ti_uia_runtime_EventHdr_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gateObj__C, ".const:ti_uia_runtime_EventHdr_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gatePrms__C, ".const:ti_uia_runtime_EventHdr_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__id__C, ".const:ti_uia_runtime_EventHdr_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerDefined__C, ".const:ti_uia_runtime_EventHdr_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerObj__C, ".const:ti_uia_runtime_EventHdr_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn0__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn1__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn2__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn4__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn8__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__startupDoneFxn__C, ".const:ti_uia_runtime_EventHdr_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__count__C, ".const:ti_uia_runtime_EventHdr_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__heap__C, ".const:ti_uia_runtime_EventHdr_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__sizeof__C, ".const:ti_uia_runtime_EventHdr_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__table__C, ".const:ti_uia_runtime_EventHdr_Object__table__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C, ".const:ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__DESC__C, ".const:ti_uia_sysbios_LoggerIdle_Object__DESC__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__PARAMS__C, ".const:ti_uia_sysbios_LoggerIdle_Object__PARAMS__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__diagsEnabled__C, ".const:ti_uia_sysbios_LoggerIdle_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__diagsIncluded__C, ".const:ti_uia_sysbios_LoggerIdle_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__diagsMask__C, ".const:ti_uia_sysbios_LoggerIdle_Module__diagsMask__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__gateObj__C, ".const:ti_uia_sysbios_LoggerIdle_Module__gateObj__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__gatePrms__C, ".const:ti_uia_sysbios_LoggerIdle_Module__gatePrms__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__id__C, ".const:ti_uia_sysbios_LoggerIdle_Module__id__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerDefined__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerObj__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerObj__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerFxn0__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerFxn1__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerFxn2__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerFxn4__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__loggerFxn8__C, ".const:ti_uia_sysbios_LoggerIdle_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Module__startupDoneFxn__C, ".const:ti_uia_sysbios_LoggerIdle_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__count__C, ".const:ti_uia_sysbios_LoggerIdle_Object__count__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__heap__C, ".const:ti_uia_sysbios_LoggerIdle_Object__heap__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__sizeof__C, ".const:ti_uia_sysbios_LoggerIdle_Object__sizeof__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_Object__table__C, ".const:ti_uia_sysbios_LoggerIdle_Object__table__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_bufferSize__C, ".const:ti_uia_sysbios_LoggerIdle_bufferSize__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_isTimestampEnabled__C, ".const:ti_uia_sysbios_LoggerIdle_isTimestampEnabled__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_customTransportType__C, ".const:ti_uia_sysbios_LoggerIdle_customTransportType__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_transportFxn__C, ".const:ti_uia_sysbios_LoggerIdle_transportFxn__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_writeWhenFull__C, ".const:ti_uia_sysbios_LoggerIdle_writeWhenFull__C");
#pragma DATA_SECTION(ti_uia_sysbios_LoggerIdle_L_test__C, ".const:ti_uia_sysbios_LoggerIdle_L_test__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__diagsEnabled__C, ".const:xdc_runtime_SysCallback_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__diagsIncluded__C, ".const:xdc_runtime_SysCallback_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__diagsMask__C, ".const:xdc_runtime_SysCallback_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__gateObj__C, ".const:xdc_runtime_SysCallback_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__gatePrms__C, ".const:xdc_runtime_SysCallback_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__id__C, ".const:xdc_runtime_SysCallback_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerDefined__C, ".const:xdc_runtime_SysCallback_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerObj__C, ".const:xdc_runtime_SysCallback_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn0__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn1__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn2__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn4__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__loggerFxn8__C, ".const:xdc_runtime_SysCallback_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Module__startupDoneFxn__C, ".const:xdc_runtime_SysCallback_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__count__C, ".const:xdc_runtime_SysCallback_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__heap__C, ".const:xdc_runtime_SysCallback_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__sizeof__C, ".const:xdc_runtime_SysCallback_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_Object__table__C, ".const:xdc_runtime_SysCallback_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_abortFxn__C, ".const:xdc_runtime_SysCallback_abortFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_exitFxn__C, ".const:xdc_runtime_SysCallback_exitFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_flushFxn__C, ".const:xdc_runtime_SysCallback_flushFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_putchFxn__C, ".const:xdc_runtime_SysCallback_putchFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysCallback_readyFxn__C, ".const:xdc_runtime_SysCallback_readyFxn__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
