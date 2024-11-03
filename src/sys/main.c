#include "main.h"

// #include "scenemgr/scene_manager.h"
#include <sys/error.h>
#include <sys/dma.h>
#include <sys/taskman.h>
#include <sys/hal_audio.h>
#include <sys/thread3.h>
#include <sys/thread6.h>

// #include <linkersegs.h>
#include <macros.h>
#include <ssb_types.h>

#include <PR/R4300.h>
#include <PR/os.h>
#include <PR/rcp.h>
#include <PR/ultratypes.h>

// libultra internal
void __osSetWatchLo(u32);

#define STACK_PROBE_MAGIC 0xFEDCBA98
// size of stack in double words (u64, 8 bytes)
#define THREAD0_STACK_SIZE 57
#define THREAD1_STACK_SIZE 25
#define THREAD3_STACK_SIZE 121
#define THREAD4_STACK_SIZE 185
#define THREAD5_STACK_SIZE 1657
#define THREAD6_STACK_SIZE 249

// Thread Scheduler Priorities
#define THREAD3_PRI 120
#define THREAD4_PRI 110
#define THREAD5_PRI 50
#define THREAD6_PRI 115

// data, fake values for now
static struct SYOverlay OverlayManager =
{
    (u32)0x000406D0,
    (u32)0x00043220,
    (u32)0x800A1980,
    (u32)0x800A1980,
    (u32)0x800A3070,
    (u32)0x800A3070,
    (u32)0x800A44D0,
    (u32)0x800A44D0,
    (u32)0x800A5240};
u32 sNoThread5 = 0;

// bss
u8 sUnref8003FAD0[56];
u64 gSYMainThread0Stack[THREAD0_STACK_SIZE];
OSThread sSYMainThread1;
u8 sUnref8003FE80[56];
u64 sSYMainThread1Stack[THREAD1_STACK_SIZE];
OSThread sSYMainThread3;
u8 sUnref80040130[56];
u64 sSYMainThread3Stack[THREAD3_STACK_SIZE];
OSThread sSYMainThread4;
u8 sUnref800406E0[56];
u64 sSYMainThread4Stack[THREAD4_STACK_SIZE];
OSThread gSYMainThread5;
u8 sUkn80040E90[56];
u64 sThread5Stack[THREAD5_STACK_SIZE];
OSThread gSYMainThread6;
u8 sUnref8004440[56];
u64 gSYMainThread6Stack[THREAD6_STACK_SIZE];
u64 gSYMainRspBootCode[0x20]; // IP3 font?
sb8 gSYMainIsSPImemOK;
sb8 gSYMainIsDmemOK;
OSMesg sSYMainBlockMesg[1];
OSMesgQueue sSYMainThreadingQueue;
OSMesg sSYMainPiCmdMesg[50];
OSMesgQueue sSYMainPiCmdQueue;
u8 sSYMainThreadArgBuf[0x80];

u64* syMainGetThread4StackStart(void) 
{
    return sSYMainThread4Stack + THREAD4_STACK_SIZE;
}

u8* unref_8000046C(void) 
{
    return sUkn80040E90;
}

void* unref_80000478(void) 
{
    return (void*)(0x00003400);
}

void syMainCheckSPImemOK(void)
{
    if (IO_READ(SP_IMEM_START) == 6103) 
    {
        gSYMainIsSPImemOK = TRUE;
    }
    else gSYMainIsSPImemOK = FALSE;
}

void syMainCheckSPDmemOK(void) 
{
    if (IO_READ(SP_DMEM_START) == -1)
    {
        gSYMainIsDmemOK = TRUE;
    } 
    else gSYMainIsDmemOK = FALSE;
}

void syMainThreadStackOverflow(s32 tid)
{
    syErrorPrintf("thread stack overflow  id = %d\n", tid);

    while (TRUE);
}

void syMainVerifyStackProbes(void) 
{
    if (gSYMainThread0Stack[0] != STACK_PROBE_MAGIC) { syMainThreadStackOverflow(0); }
    if (sSYMainThread1Stack[0] != STACK_PROBE_MAGIC) { syMainThreadStackOverflow(1); }
    if (sSYMainThread3Stack[0] != STACK_PROBE_MAGIC) { syMainThreadStackOverflow(3); }
    if (sThread5Stack[0] != STACK_PROBE_MAGIC) { syMainThreadStackOverflow(5); }
}

void syMainThread5(UNUSED void *arg) 
{
    osCreateViManager(OS_PRIORITY_VIMGR);
    gRomPiHandle = osCartRgcInit();
    syDmaSramPiInit();
    osCreatePiManager(OS_PRIORITY_PIMGR, &sSYMainPiCmdQueue, sSYMainPiCmdMesg, ARRAY_COUNT(sSYMainPiCmdMesg));
    syDmaCreateMesgQueue();

    syDmaReadRom(PHYSICAL_TO_ROM(0xB70), gSYMainRspBootCode, sizeof(gSYMainRspBootCode));
    syMainCheckSPImemOK();
    syMainCheckSPDmemOK();
    osCreateMesgQueue(&sSYMainThreadingQueue, sSYMainBlockMesg, ARRAY_COUNT(sSYMainBlockMesg));

    osCreateThread(&sSYMainThread3, 3, &thread3_scheduler, NULL, sSYMainThread3Stack + THREAD3_STACK_SIZE, THREAD3_PRI);
    sSYMainThread3Stack[0] = STACK_PROBE_MAGIC; osStartThread(&sSYMainThread3);
    osRecvMesg(&sSYMainThreadingQueue, NULL, OS_MESG_BLOCK);

    osCreateThread(&sSYMainThread4, 4, auThreadMain, NULL, sSYMainThread4Stack + THREAD4_STACK_SIZE, THREAD4_PRI);
    sSYMainThread4Stack[0] = STACK_PROBE_MAGIC; osStartThread(&sSYMainThread4);
    osRecvMesg(&sSYMainThreadingQueue, NULL, OS_MESG_BLOCK);

    osCreateThread(&gSYMainThread6, 6, thread6_controllers, NULL, gSYMainThread6Stack + THREAD6_STACK_SIZE, THREAD6_PRI);
    gSYMainThread6Stack[0] = STACK_PROBE_MAGIC; osStartThread(&gSYMainThread6);
    osRecvMesg(&sSYMainThreadingQueue, NULL, OS_MESG_BLOCK);

    func_80006B80();
    syDmaLoadOverlay(&OverlayManager);
    scManagerRunLoop(0);
}

void syMainThread1Idle(void *arg) 
{
    syErrorStartRmonThread8();
    osCreateThread(&gSYMainThread5, 5, syMainThread5, arg, sThread5Stack + THREAD5_STACK_SIZE, THREAD5_PRI);
    sThread5Stack[0] = STACK_PROBE_MAGIC;

    if (!sNoThread5) 
    { 
        osStartThread(&gSYMainThread5);
    }
    osSetThreadPri(NULL, OS_PRIORITY_IDLE);

    while (TRUE);
}

void syMainLoop(void) 
{
    gSYMainThread0Stack[0] = STACK_PROBE_MAGIC;
    __osSetWatchLo(0x04900000 & WATCHLO_ADDRMASK);
    osInitialize();
    osCreateThread(&sSYMainThread1, 1, syMainThread1Idle, &sSYMainThreadArgBuf, sSYMainThread1Stack + THREAD1_STACK_SIZE, OS_PRIORITY_APPMAX);

    sSYMainThread1Stack[0] = STACK_PROBE_MAGIC; osStartThread(&sSYMainThread1);
}
