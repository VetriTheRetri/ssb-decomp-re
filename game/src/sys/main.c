#include "sys/main.h"

#include "scenemgr/scene_manager.h"
#include "sys/crash.h"
#include "sys/dma.h"
#include "sys/gtl.h"
#include "sys/hal_audio.h"
#include "sys/thread3.h"
#include "sys/thread6.h"

#include <linkersegs.h>
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

// data
static struct Overlay OverlayManager = {
    (u32)_scenemgrSegRomStart,
    (u32)_scenemgrSegRomEnd,
    _scenemgrSegStart,
    _scenemgrTextStart,
    _scenemgrTextEnd,
    _scenemgrDataStart,
    _scenemgrDataEnd,
    _scenemgrSegNoloadStart,
    _scenemgrSegNoloadEnd};
u32 sNoThread5 = 0;

// bss
u8 sUnref8003FAD0[56];
u64 gThread0Stack[THREAD0_STACK_SIZE];
OSThread sThread1;
u8 sUnref8003FE80[56];
u64 sThread1Stack[THREAD1_STACK_SIZE];
OSThread sThread3;
u8 sUnref80040130[56];
u64 sThread3Stack[THREAD3_STACK_SIZE];
OSThread sThread4;
u8 sUnref800406E0[56];
u64 sThread4Stack[THREAD4_STACK_SIZE];
OSThread gThread5;
u8 sUkn80040E90[56];
u64 sThread5Stack[THREAD5_STACK_SIZE];
OSThread sThread6;
u8 sUnref8004440[56];
u64 sThread6Stack[THREAD6_STACK_SIZE];
u64 gRspBootCode[0x20]; // IP3 font?
s8 gSPImemOkay;
s8 gSPDmemOkay;
OSMesg sBlockMsg[1];
OSMesgQueue gThreadingQueue;
OSMesg sPIcmdBuf[50];
OSMesgQueue sPIcmdQ;
u8 sThreadArgBuf[128];

u64 *get_thread4_stack_start(void) {
    return sThread4Stack + THREAD4_STACK_SIZE;
}

u8 *unref_8000046C(void) {
    return sUkn80040E90;
}

void *unref_80000478(void) {
    return (void *)(0x00003400);
}

void check_sp_imem(void) {
    if (IO_READ(SP_IMEM_START) == 6103) {
        gSPImemOkay = TRUE;
    } else {
        gSPImemOkay = FALSE;
    }
}

void check_sp_dmem(void) {
    if (IO_READ(SP_DMEM_START) == (u32)-1) {
        gSPDmemOkay = TRUE;
    } else {
        gSPDmemOkay = FALSE;
    }
}

void fatal_stack_overflow_thread(s32 tid) {
    fatal_printf("thread stack overflow  id = %d\n", tid);

    while (TRUE) { }
}

void check_stack_probes(void) {
    if (gThread0Stack[0] != STACK_PROBE_MAGIC) { fatal_stack_overflow_thread(0); }
    if (sThread1Stack[0] != STACK_PROBE_MAGIC) { fatal_stack_overflow_thread(1); }
    if (sThread3Stack[0] != STACK_PROBE_MAGIC) { fatal_stack_overflow_thread(3); }
    if (sThread5Stack[0] != STACK_PROBE_MAGIC) { fatal_stack_overflow_thread(5); }
}

void thread5_main(UNUSED void *arg) {
    osCreateViManager(OS_PRIORITY_VIMGR);
    gRomPiHandle = osCartRomInit();
    sram_pi_init();
    osCreatePiManager(OS_PRIORITY_PIMGR, &sPIcmdQ, sPIcmdBuf, ARRAY_COUNT(sPIcmdBuf));
    create_dma_mq();
    // load IP3 font? rsp boot text
    dma_rom_read(PHYSICAL_TO_ROM(0xB70), gRspBootCode, sizeof(gRspBootCode));
    check_sp_imem();
    check_sp_dmem();
    osCreateMesgQueue(&gThreadingQueue, sBlockMsg, ARRAY_COUNT(sBlockMsg));

    osCreateThread(
        &sThread3, 3, &thread3_scheduler, NULL, sThread3Stack + THREAD3_STACK_SIZE, THREAD3_PRI);
    // clang-format off
    sThread3Stack[0] = STACK_PROBE_MAGIC; osStartThread(&sThread3);
    // clang-format on
    osRecvMesg(&gThreadingQueue, NULL, OS_MESG_BLOCK);

    osCreateThread(
        &sThread4, 4, thread4_audio, NULL, sThread4Stack + THREAD4_STACK_SIZE, THREAD4_PRI);
    // clang-format off
    sThread4Stack[0] = STACK_PROBE_MAGIC; osStartThread(&sThread4);
    // clang-format on
    osRecvMesg(&gThreadingQueue, NULL, OS_MESG_BLOCK);

    osCreateThread(
        &sThread6, 6, thread6_controllers, NULL, sThread6Stack + THREAD6_STACK_SIZE, THREAD6_PRI);
    // clang-format off
    sThread6Stack[0] = STACK_PROBE_MAGIC; osStartThread(&sThread6);
    // clang-format on
    osRecvMesg(&gThreadingQueue, NULL, OS_MESG_BLOCK);

    func_80006B80();
    load_overlay(&OverlayManager);
    start_scene_manager(0);
}

void thread1_idle(void *arg) {
    start_thread8_rmon();
    osCreateThread(
        &gThread5, 5, thread5_main, arg, sThread5Stack + THREAD5_STACK_SIZE, THREAD5_PRI);
    sThread5Stack[0] = STACK_PROBE_MAGIC;
    if (!sNoThread5) { osStartThread(&gThread5); }
    osSetThreadPri(NULL, OS_PRIORITY_IDLE);

    while (TRUE) { }
}

void ssb_main(void) {
    gThread0Stack[0] = STACK_PROBE_MAGIC;
    __osSetWatchLo(0x04900000 & WATCHLO_ADDRMASK);
    osInitialize();
    osCreateThread(
        &sThread1,
        1,
        thread1_idle,
        &sThreadArgBuf,
        sThread1Stack + THREAD1_STACK_SIZE,
        OS_PRIORITY_APPMAX);
    // clang-format off
    sThread1Stack[0] = STACK_PROBE_MAGIC; osStartThread(&sThread1);
    // clang-format on
}
