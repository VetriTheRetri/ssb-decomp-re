#include <macros.h>
#include <PR/os_internal.h>
#include <PR/ultraerror.h>
#include <piint.h>
#include <PR/rdb.h>

static OSThread piThread ALIGNED(0x8);
static char piThreadStack[OS_PIM_STACKSIZE] ALIGNED(0x10);

static OSMesgQueue piEventQueue ALIGNED(0x8);
static OSMesg piEventBuf[1];

OSDevMgr __osPiDevMgr = { 0 };
OSPiHandle* __osPiTable = NULL;
#if defined(REGION_US)
OSPiHandle __Dom1SpeedParam ALIGNED(0x8);
OSPiHandle __Dom2SpeedParam ALIGNED(0x8);
OSPiHandle* __osCurrentHandle[2] ALIGNED(0x8) = { &__Dom1SpeedParam, &__Dom2SpeedParam };
#else
extern OSPiHandle CartRomHandle;
extern OSPiHandle LeoDiskHandle;
OSPiHandle* __osCurrentHandle[2] ALIGNED(0x8) = { &CartRomHandle, &LeoDiskHandle };
static void func_8003324C_33E4C(void);
#endif

void osCreatePiManager(OSPri pri, OSMesgQueue* cmdQ, OSMesg* cmdBuf, s32 cmdMsgCnt) {
    u32 savedMask;
    OSPri oldPri;
    OSPri myPri;

    if (__osPiDevMgr.active) {
        return;
    }
#if defined(REGION_JP)
	func_8003324C_33E4C();
#endif
    osCreateMesgQueue(cmdQ, cmdBuf, cmdMsgCnt);
    osCreateMesgQueue(&piEventQueue, (OSMesg*)piEventBuf, 1);

    if (!__osPiAccessQueueEnabled) {
        __osPiCreateAccessQueue();
    }

    osSetEventMesg(OS_EVENT_PI, &piEventQueue, (OSMesg)0x22222222);
    oldPri = -1;
    myPri = osGetThreadPri(NULL);

    if (myPri < pri) {
        oldPri = myPri;
        osSetThreadPri(NULL, pri);
    }

    savedMask = __osDisableInt();
    __osPiDevMgr.active = 1;
    __osPiDevMgr.thread = &piThread;
    __osPiDevMgr.cmdQueue = cmdQ;
    __osPiDevMgr.evtQueue = &piEventQueue;
    __osPiDevMgr.acsQueue = &__osPiAccessQueue;
    __osPiDevMgr.dma = __osPiRawStartDma;
    __osPiDevMgr.edma = __osEPiRawStartDma;
    osCreateThread(&piThread, 0, __osDevMgrMain, &__osPiDevMgr, &piThreadStack[OS_PIM_STACKSIZE], pri);
    osStartThread(&piThread);

    __osRestoreInt(savedMask);

    if (oldPri != -1) {
        osSetThreadPri(NULL, oldPri);
    }
}

#if defined(REGION_JP)
static void func_8003324C_33E4C(void) {
	CartRomHandle.latency = IO_READ(PI_BSD_DOM1_LAT_REG);
    CartRomHandle.pulse = IO_READ(PI_BSD_DOM1_PWD_REG);
    CartRomHandle.pageSize = IO_READ(PI_BSD_DOM1_PGS_REG);
    CartRomHandle.relDuration = IO_READ(PI_BSD_DOM1_RLS_REG);
    CartRomHandle.domain = 0;

    LeoDiskHandle.latency = IO_READ(PI_BSD_DOM2_LAT_REG);
    LeoDiskHandle.pulse = IO_READ(PI_BSD_DOM2_PWD_REG);
    LeoDiskHandle.pageSize = IO_READ(PI_BSD_DOM2_PGS_REG);
    LeoDiskHandle.relDuration = IO_READ(PI_BSD_DOM2_RLS_REG);
    LeoDiskHandle.domain = 1;
}
#endif