#include "common.h"
#include "sys/thread3.h"

#include "sys/crash.h"
#include "sys/main.h"
#include "sys/thread6.h"

#include <config.h>
#include <macros.h>
#include <missing_libultra.h>
#include <ssb_types.h>

#include <PR/os.h>
#include <PR/rcp.h>
#include <PR/sptask.h>
#include <PR/ultratypes.h>

/*
    28 00 u32	type;
    2C 04 u32	flags;
    30 08 u64	*ucode_boot;
    34 0c u32	ucode_boot_size;

    38 10 u64	*ucode;
    3c 14 u32	ucode_size;
    40 18 u64	*ucode_data;
    44 1c u32	ucode_data_size;

    48 20 u64	*dram_stack;
    4c 24 u32	dram_stack_size;
    50 28 u64	*output_buff;
    54 2c u64	*output_buff_size;

    58 30 u64	*data_ptr;
    5c 34 u32	data_size;
    60 38 u64	*yield_data_ptr;
    64 3c u32	yield_data_size;
*/

union CheckedPtr {
    void *ptr;
    intptr_t tag;
};

struct ViSettings {
    u8 unk_b80      : 1; // b0 0 80 => unknown game control (arg2 & 0x1) [aa & resamp enabled?]
    u8 serrate      : 1; // b1 0 40 => serrate enabled (bool)
    u8 pixelSize32  : 1; // b2   20 => type_32 enabled
    u8 gamma        : 1; // b3   10 => gamma on
    u8 blackout     : 1; // b4   08 => unknown game control (arg2 & 0x100) [blackout ?]
    u8 unk_b04      : 1; // b5   04 => unknown game control (arg2 & 0x400)
    u8 gammaDither  : 1; // b6   02 => gamma dither on
    u8 ditherFilter : 1; // b7   01 => dither filter
    u8 divot        : 1; // b8 1 80 => divot on
                         // b9 1 40
};

// bss
struct MqListNode *D_80044EC0_406D0;
struct SCTaskInfo *D_80044EC4_406D4; // largest priority/unk04?
struct SCTaskInfo *D_80044EC8_406D8; // smallest priority/unk04?
struct SCTaskGfx *D_80044ECC_406DC;  // actually a pointer to SCTaskGfx?
struct SCTaskGfx *D_80044ED0_406E0;  // largest priority queue 2
struct SCTaskGfx *D_80044ED4_406E4;  // smallest priority queue 2
struct SCTaskGfx *D_80044ED8_406E8;  // largest priority queue 3
struct SCTaskGfx *D_80044EDC_406EC;  // smallest priority queue 3
struct SCTaskGfx *D_80044EE0_406F0;  // standard linked list head
struct SCTaskGfx *D_80044EE4_406F4;  // standdard linked list tail
OSViMode D_80044EE8_406F8;
OSViMode D_80044F38_40748;
u32 D_80044F88_40798[2];
void *D_80044F90_407A0[3];
void *D_80044F9C_407AC;
void *D_80044FA0_407B0;
u32 D_80044FA4_407B4;
void *D_80044FA8_407B8;
u32 D_80044FAC_407BC;
u32 D_80044FB0_407C0;
u32 D_80044FB4_407C4;
u32 D_80044FB8_407C8;
struct ViSettings D_80044FBC_407CC; // bitflags? union?
s64 D_80044FC0_407D0;
s32 D_80044FC8_407D8;
u64 *D_80044FCC_407DC;
u32 D_80044FD0_407E0; // size of D_80044FCC_407DC
u8 unref_80044FD4[4];
OSMesg D_80044FD8_407E8[8];
OSMesgQueue gScheduleTaskQueue;
u32 D_80045010_40820;
OSMesgQueue *D_80045014_40824;
void (*D_80045018_40828)(void);
s32 D_8004501C_4082C;
s32 D_80045020_40830; // gSoftReseting ..?
s32 D_80045024_40834; // return of osAfterPreNMI
void *D_80045028_40838[3];
u8 D_80045034_40844;
u8 D_80045035_40845;
u8 extend_D_80045036;
u8 extend_D_80045037;
u8 extend_D_80045038[8];

void func_80000920(s32 val) {
    D_8004501C_4082C = val;
}

s32 func_8000092C(void) {
    return D_8004501C_4082C;
}

void unref_80000938(void) {
    struct SCTaskGfx *i = D_80044ECC_406DC, *j = D_80044EE4_406F4, *k = D_80044EDC_406EC;

    do {
    } while (i || j || k);

    return;
}

void func_80000970(struct SCTaskInfo *task) {
    OSMesg msgs[1];
    OSMesgQueue mq;

    osCreateMesgQueue(&mq, msgs, ARRAY_COUNT(msgs));
    task->func  = NULL;
    task->unk1C = 1;
    task->unk20 = &mq;
    osSendMesg(&gScheduleTaskQueue, (OSMesg)task, OS_MESG_NOBLOCK);
    osRecvMesg(&mq, NULL, OS_MESG_BLOCK);
}

void func_800009D8(struct MqListNode *arg0, OSMesgQueue *mq, OSMesg *msg, u32 count) {
    struct SCTaskType3 t;

    osCreateMesgQueue(mq, msg, count);
    arg0->mq     = mq;
    t.info.unk00 = 3;
    t.info.unk04 = 100;
    t.unk24      = arg0;
    func_80000970(&t.info);
}

#ifdef NON_MATCHING
s32 unref_80000A34(struct SCTaskGfx *t) {
    s32 idx;
    s32 i;
    void *nextFb; // 1c
    void *curFb;  // temp_v0

    if (D_80044F9C_407AC != NULL) { return 1; }
    if (D_80044FA0_407B0 != NULL) { return 0; }

    nextFb = osViGetNextFramebuffer();
    curFb  = osViGetCurrentFramebuffer();

    // nonmatching: register swap around `idx` and the pointer from `D_80044F90_407A0[idx]`
    idx = t->unk70;
    if (idx != -1 && D_80044F90_407A0[idx] && D_80044F90_407A0[idx] != curFb && D_80044F90_407A0[idx] != nextFb) {
        D_80044FA0_407B0 = D_80044F9C_407AC = D_80044F90_407A0[idx];
        D_80044FC8_407D8                    = 0;
        D_80044FAC_407BC                    = osGetCount();

        return 1;
    }
    // L80000AE8

    for (i = 0; i < ARRAY_COUNT(D_80044F90_407A0); i++) {
        if (D_80044F90_407A0[i] && D_80044F90_407A0[i] != curFb && D_80044F90_407A0[i] != nextFb) {
            D_80044F9C_407AC = D_80044F90_407A0[i];
            D_80044FC8_407D8 = 0;
            D_80044FAC_407BC = osGetCount();

            return 1;
        }
    }

    return 0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/thread3/unref_80000A34.s")
#endif /* NON_MATCHING */

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80000B54.s")

void __dummy_80000C5C(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80000C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80000CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80000D44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80000DD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80000E24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80000E5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80000EAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80000F30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_800016D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80001764.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_800017B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_800018E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80001968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80001A00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80001E64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80001FF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_8000205C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_800020D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80002340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_800024EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/thread3_scheduler.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_800029D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/thread3/osViExtendVStart.s")
