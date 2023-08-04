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
struct MqListNode *D_80044EC0;
struct SCTaskInfo *D_80044EC4; // largest priority/unk04?
struct SCTaskInfo *D_80044EC8; // smallest priority/unk04?
struct SCTaskGfx *D_80044ECC;  // actually a pointer to SCTaskGfx?
struct SCTaskGfx *D_80044ED0;  // largest priority queue 2
struct SCTaskGfx *D_80044ED4;  // smallest priority queue 2
struct SCTaskGfx *D_80044ED8;  // largest priority queue 3
struct SCTaskGfx *D_80044EDC;  // smallest priority queue 3
struct SCTaskGfx *D_80044EE0;  // standard linked list head
struct SCTaskGfx *D_80044EE4;  // standdard linked list tail
OSViMode D_80044EE8;
OSViMode D_80044F38;
u32 D_80044F88[2];
void *D_80044F90[3];
void *D_80044F9C;
void *D_80044FA0;
u32 D_80044FA4;
void *D_80044FA8;
u32 D_80044FAC;
u32 D_80044FB0;
u32 D_80044FB4;
u32 D_80044FB8;
struct ViSettings D_80044FBC; // bitflags? union?
s64 D_80044FC0;
s32 D_80044FC8;
u64 *D_80044FCC;
u32 D_80044FD0; // size of D_80044FCC
u8 unref_80044FD4[4];
OSMesg D_80044FD8[8];
OSMesgQueue gScheduleTaskQueue;
u32 D_80045010;
OSMesgQueue *D_80045014;
void (*D_80045018)(void);
s32 D_8004501C;
s32 D_80045020; // gSoftReseting ..?
s32 D_80045024; // return of osAfterPreNMI
void *D_80045028[3];
u8 D_80045034;
u8 D_80045035;
u8 extend_D_80045036;
u8 extend_D_80045037;
u8 extend_D_80045038[8];

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

void func_80000920(s32 val) {
    D_8004501C = val;
}

s32 func_8000092C(void) {
    return D_8004501C;
}

void unref_80000938(void) {
    struct SCTaskGfx *i = D_80044ECC, *j = D_80044EE4, *k = D_80044EDC;

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

    if (D_80044F9C != NULL) { return 1; }
    if (D_80044FA0 != NULL) { return 0; }

    nextFb = osViGetNextFramebuffer();
    curFb  = osViGetCurrentFramebuffer();

    // nonmatching: register swap around `idx` and the pointer from `D_80044F90[idx]`
    idx = t->unk70;
    if (idx != -1 && D_80044F90[idx] && D_80044F90[idx] != curFb && D_80044F90[idx] != nextFb) {
        D_80044FA0 = D_80044F9C = D_80044F90[idx];
        D_80044FC8              = 0;
        D_80044FAC              = osGetCount();

        return 1;
    }
    // L80000AE8

    for (i = 0; i < ARRAY_COUNT(D_80044F90); i++) {
        if (D_80044F90[i] && D_80044F90[i] != curFb && D_80044F90[i] != nextFb) {
            D_80044F9C = D_80044F90[i];
            D_80044FC8 = 0;
            D_80044FAC = osGetCount();

            return 1;
        }
    }

    return 0;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/thread3/unref_80000A34.s")
#endif /* NON_MATCHING */

s32 func_80000B54(UNUSED struct SCTaskInfo *t) {
    struct SCTaskInfo *cur;
    const s32 TYPE_TO_CHECK = 1;

    if (D_80044ECC != NULL && D_80044ECC->info.unk00 == TYPE_TO_CHECK) { return 0; }

    cur = &D_80044ED4->info;
    while (cur != NULL) {
        if (cur->unk00 == TYPE_TO_CHECK) { return 0; }
        cur = cur->unk0C;
    }

    cur = D_80044EC4;
    while (cur != NULL) {
        if (cur->unk00 == TYPE_TO_CHECK) { return 0; }
        cur = cur->unk0C;
    }

    if (D_80044EE4 != NULL && D_80044EE4->info.unk00 == TYPE_TO_CHECK) { return 0; }

    cur = &D_80044EDC->info;
    while (cur != NULL) {
        if (cur->unk00 == TYPE_TO_CHECK) { return 0; }
        cur = cur->unk0C;
    }

    if (D_80045034 != D_80045035) { return 0; }

    return 1;
}

// insert into task (command?) priority queue?
void func_80000C64(struct SCTaskInfo *newTask) {
    struct SCTaskInfo *csr;

    // find task with priority higher than arg0
    csr = D_80044EC8;
    while (csr != NULL && csr->unk04 < newTask->unk04) { csr = csr->unk10; }

    // insert new task into queue
    newTask->unk10 = csr;
    if (csr != NULL) {
        newTask->unk0C = csr->unk0C;
        csr->unk0C     = newTask;
    } else {
        newTask->unk0C = D_80044EC4;
        D_80044EC4     = newTask;
    }

    csr = newTask->unk0C;
    if (csr != NULL) {
        csr->unk10 = newTask;
    } else {
        D_80044EC8 = newTask;
    }
}

// remove from priority queue?
void func_80000CF4(struct SCTaskInfo *task) {
    if (task->unk10 != NULL) {
        task->unk10->unk0C = task->unk0C;
    } else {
        D_80044EC4 = task->unk0C;
    }

    if (task->unk0C != NULL) {
        task->unk0C->unk10 = task->unk10;
    } else {
        D_80044EC8 = task->unk10;
    }
}

// add to D_80044ED4/D_80044ED8 priorirty queue
void func_80000D44(struct SCTaskGfx *arg0) {
    struct SCTaskInfo *temp_v0;

    temp_v0 = &D_80044ED8->info;
    while (temp_v0 != NULL && temp_v0->unk04 < arg0->info.unk04) { temp_v0 = temp_v0->unk10; }

    arg0->info.unk10 = temp_v0;
    if (temp_v0 != NULL) {
        arg0->info.unk0C = temp_v0->unk0C;
        temp_v0->unk0C   = &arg0->info;
    } else {
        arg0->info.unk0C = &D_80044ED4->info;
        D_80044ED4       = arg0;
    }

    temp_v0 = arg0->info.unk0C;
    if (temp_v0 != NULL) {
        temp_v0->unk10 = &arg0->info;
    } else {
        D_80044ED8 = arg0;
    }
}

// remove from D_80044ED4/D_80044ED8 queue
void func_80000DD4(struct SCTaskGfx *arg0) {
    if (arg0->info.unk10 != NULL) {
        arg0->info.unk10->unk0C = arg0->info.unk0C;
    } else {
        D_80044ED4 = (void *)arg0->info.unk0C;
    }

    if (arg0->info.unk0C != NULL) {
        arg0->info.unk0C->unk10 = arg0->info.unk10;
    } else {
        D_80044ED8 = (void *)arg0->info.unk10;
    }
}

// append to head of D_80044EDC/D_80044EE0 queue
void func_80000E24(struct SCTaskGfx *arg0) {
    arg0->info.unk0C = NULL;
    arg0->info.unk10 = &D_80044EE0->info;
    if (D_80044EE0 != NULL) {
        D_80044EE0->info.unk0C = &arg0->info;
    } else {
        D_80044EDC = arg0;
    }
    D_80044EE0 = arg0;
}

// remove from D_80044EDC/D_80044EE0 queue
void func_80000E5C(struct SCTaskGfx *arg0) {
    if (arg0->info.unk10 != NULL) {
        arg0->info.unk10->unk0C = arg0->info.unk0C;
    } else {
        D_80044EDC = (void *)arg0->info.unk0C;
    }

    if (arg0->info.unk0C != NULL) {
        arg0->info.unk0C->unk10 = arg0->info.unk10;
    } else {
        D_80044EE0 = (void *)arg0->info.unk10;
    }
}

void func_80000EAC(void) {
    D_80044EE8 = D_80044F38;
    osViSetMode(&D_80044EE8);
    osViBlack(D_80044FBC.blackout);
    D_80044F88[0] = 0;
}

void func_80000F30(u32, u32, s32, s16, s16, s16, s16);
#ifdef NON_MATCHING
void func_80000F30(u32 arg0, u32 arg1, s32 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
    u32 phi_a0; // flag collector
    s32 phi_v1;
    s32 phi_t0;
    s32 phi_t2;
    u32 phi_t3;
    u32 sp00;
    s32 sp14;
    s32 sp1C;
    s32 sp20;

    if (arg0 >= SCREEN_WIDTH || arg1 >= SCREEN_HEIGHT) {
        phi_t2 = 0;
    } else {
        phi_t2 = 1;
    }

    // phi_t2 = arg0 >= SCREEN_WIDTH && arg1 >= SCREEN_HEIGHT ? 0 : 1;

    // L80000F5C
    if (arg2 & 0x00004) {
        D_80044FBC.serrate = TRUE;
        D_80044F38.comRegs.ctrl |= VI_CTRL_SERRATE_ON;
    }
    // L80000F8C
    if (arg2 & 0x00008) {
        D_80044FBC.serrate = FALSE;
        D_80044F38.comRegs.ctrl &= ~VI_CTRL_SERRATE_ON;
    }
    // L80000FC0
    if (arg2 & 0x00010) {
        D_80044FBC.pixelSize32 = FALSE;
        D_80044F38.comRegs.ctrl &= ~(VI_CTRL_TYPE_32 | VI_CTRL_TYPE_16);
        D_80044F38.comRegs.ctrl |= VI_CTRL_TYPE_16;
    }
    // L80000FF4
    if (arg2 & 0x00020) {
        D_80044FBC.pixelSize32 = TRUE;
        D_80044F38.comRegs.ctrl &= ~(VI_CTRL_TYPE_32 | VI_CTRL_TYPE_16);
        D_80044F38.comRegs.ctrl |= VI_CTRL_TYPE_32;
    }
    // L80001024
    if (arg2 & 0x00040) {
        D_80044FBC.gamma = TRUE;
        D_80044F38.comRegs.ctrl |= VI_CTRL_GAMMA_ON;
    }
    // L80001048
    if (arg2 & 0x00080) {
        D_80044FBC.gamma = FALSE;
        D_80044F38.comRegs.ctrl &= ~VI_CTRL_GAMMA_ON;
    }
    // L80001070
    if (arg2 & 0x01000) {
        D_80044FBC.gammaDither = TRUE;
        D_80044F38.comRegs.ctrl |= VI_CTRL_GAMMA_DITHER_ON;
    }
    // L80001094
    if (arg2 & 0x02000) {
        D_80044FBC.gammaDither = FALSE;
        D_80044F38.comRegs.ctrl &= ~VI_CTRL_GAMMA_DITHER_ON;
    }
    // L800010BC
    if (arg2 & 0x04000) {
        D_80044FBC.ditherFilter = TRUE;
        D_80044F38.comRegs.ctrl |= VI_CTRL_DITHER_FILTER_ON;
    }
    // L800010E4
    if (arg2 & 0x08000) {
        D_80044FBC.ditherFilter = FALSE;
        D_80044F38.comRegs.ctrl &= ~VI_CTRL_DITHER_FILTER_ON;
    }
    // L80001110
    if (arg2 & 0x10000) {
        D_80044FBC.divot = TRUE;
        D_80044F38.comRegs.ctrl |= VI_CTRL_DIVOT_ON;
    }
    // L80001134
    if (arg2 & 0x20000) {
        D_80044FBC.divot = FALSE;
        D_80044F38.comRegs.ctrl &= ~VI_CTRL_DIVOT_ON;
    }
    // L8000115C
    if (arg2 & 0x00100) { D_80044FBC.blackout = TRUE; }
    // L80001174
    if (arg2 & 0x00200) { D_80044FBC.blackout = FALSE; }
    // L80001188
    if (arg2 & 0x00400) { D_80044FBC.unk_b04 = TRUE; }
    // L800011A0
    if (arg2 & 0x00800) { D_80044FBC.unk_b04 = FALSE; }
    // L800011B4
    if (arg2 & 0x00001) { D_80044FBC.unk_b80 = TRUE; }
    // L800011D0
    if (arg2 & 0x00002) { D_80044FBC.unk_b80 = FALSE; }

    // L800011E8
    D_80044F38.comRegs.ctrl &= ~VI_CTRL_ANTIALIAS_MASK;

    if (D_80044FBC.unk_b80) {
        phi_a0 = D_80044FBC.ditherFilter ? 0x100 : 0;

        // if (D_80044FBC.ditherFilter) {
        //     phi_a0 = 0x100; // aa & resamp (fetch extra lines if needed)
        // } else {
        //     phi_a0 = 0;
        // }

        // L80001220
        D_80044F38.comRegs.ctrl |= phi_a0;
    } else {
        // L80001238
        if (!D_80044FBC.unk_b04 && D_80044FBC.pixelSize32 == 1) {
            D_80044F38.comRegs.ctrl = 0x300; // neither (replicate pixels, no interpolate)
        } else {
            // L8000126C
            D_80044F38.comRegs.ctrl = 0x200; // resamp only (treat as all fully covered
        }
    }
    // L8000127C
    phi_t0 = D_80044FBC.pixelSize32; // tail expression?

    if (phi_t2) {
        if (D_80044FBC.serrate) {
            phi_v1 = 0;
        } else {
            phi_v1 = 1;
        }
    } else {
        // L800012A0
        if (D_80044FBC.unk_b04) {
            phi_v1 = 1;
        } else {
            phi_v1 = 0;
        }
    }
    // L800012B0
    // temp_a1 = arg5 & 0xFFFE;
    // temp_a2 = arg6 & 0xFFFE;
    arg5 &= ~1; // a1?
    arg6 &= ~1; // a2?
    if (!phi_t2 && !phi_v1) {
        sp14 = 2;
    } else {
        sp14 = 1;
    }
    // L800012EC L800012F0 L800012F4
    if (phi_t2) {
        phi_a0 = 1;
    } else {
        phi_a0 = 2;
    }
    // L80001308
    // t7 = arg6 - arg5
    // t8 = t7 + 480
    // t4 = arg1 << 11
    // t9 = (u32) t4 / t8
    // t7 = sp14
    // t5 = arg0 (sp38)
    // t6 = t9 / phi_a0
    // t3 = t6 * t7
    // L80001348
    phi_t3 = (((arg1 << 11) / ((arg6 - arg5) + 480)) / phi_a0) * (sp14);
    if (!phi_t2 && phi_v1) {
        phi_a0 = 2;
    } else {
        phi_a0 = 1;
    }
    // L80001368
    D_80044F38.comRegs.width = phi_a0 * arg0;
    // TODO: macros
    switch (osTvType) {
        case OS_TV_NTSC:
            D_80044F38.comRegs.burst     = 0x3E52239;
            D_80044F38.comRegs.vSync     = 0x20C;
            D_80044F38.comRegs.hSync     = 0xC15;
            D_80044F38.comRegs.leap      = 0xC150C15;
            D_80044F38.comRegs.hStart    = 0x6C02EC;
            D_80044F38.fldRegs[0].vStart = 0x2501FFU;
            D_80044F38.fldRegs[0].vBurst = 0xE0204;
            break;
        case OS_TV_MPAL:
            D_80044F38.comRegs.burst     = 0x4651E39;
            D_80044F38.comRegs.vSync     = 0x20C;
            D_80044F38.comRegs.hSync     = 0xC10;
            D_80044F38.comRegs.leap      = 0xC1C0C1C;
            D_80044F38.comRegs.hStart    = 0x6C02EC;
            D_80044F38.fldRegs[0].vStart = 0x2501FFU;
            D_80044F38.fldRegs[0].vBurst = 0xE0204;
            break;
    }
    // L80001424
    sp00                         = D_80044F38.comRegs.hStart;
    D_80044F38.fldRegs[1].vStart = D_80044F38.fldRegs[0].vStart;
    sp20                         = D_80044F38.comRegs.hStart >> 16;
    sp1C                         = D_80044F38.comRegs.hStart & 0xFFFF;

    if (sp20 + arg4 < 0) {
        sp20 = 0;
    } else {
        sp20 = sp20 + arg4;
    }
    // L80001458
    if (sp1C + arg5 < 0) {
        sp1C = 0;
    } else {
        sp1C = sp1C + arg5;
    }
    // L80001470
    D_80044F38.comRegs.hStart = (sp20 << 16) | sp1C;
    sp00                      = D_80044F38.fldRegs[0].vStart;
    sp20                      = sp00 >> 16;
    sp1C                      = sp00 & 0xFFFF;

    sp20 = sp20 + arg5;
    if (sp20 < 0) { sp20 = 0; }
    // L800014AC
    sp1C = sp1C + arg6;
    if (sp1C < 0) { sp1C = 0; }
    // L800014C0
    D_80044F38.fldRegs[0].vStart = (sp20 << 16) | sp1C;
    sp00                         = D_80044F38.fldRegs[1].vStart;
    sp20                         = sp00 >> 16;
    sp1C                         = sp00 & 0xFFFF;

    sp20 = sp20 + arg5;
    if (sp20 < 0) { sp20 = 0; }
    // L800014FC
    sp1C = sp1C + arg6;
    if (sp1C < 0) { sp1C = 0; }
    // L80001510
    D_80044F38.fldRegs[1].vStart = (sp20 << 16) | sp1C;
    D_80044F38.fldRegs[1].vBurst = D_80044F38.fldRegs[0].vBurst;

    if (phi_t2 && phi_v1) {
        D_80044F38.comRegs.vSync += 1;
        if (osTvType == OS_TV_MPAL) { D_80044F38.comRegs.hSync += 0x40001; }
        if (osTvType == OS_TV_MPAL) { D_80044F38.comRegs.leap += 0xFFFCFFFE; }
    } else {
        // L80001580
        D_80044F38.fldRegs[0].vStart += 0xFFFDFFFE;
        if (osTvType == OS_TV_MPAL) { D_80044F38.fldRegs[0].vBurst += 0xFFFCFFFE; }
        if (osTvType == OS_TV_PAL) { D_80044F38.fldRegs[1].vBurst += 0x2FFFE; }
    }
    // L800015C8
    D_80044F38.comRegs.vCurrent  = 0;
    D_80044F38.comRegs.xScale    = (u32)(arg0 << 0xA) / (u32)((arg4 - arg3) + 0x280);
    phi_a0                       = phi_t0 ? 2 : 1;
    D_80044F38.fldRegs[0].origin = (phi_a0 * arg0 * 2);

    sp14 = phi_t0 ? 2 : 1;
    // L8000163C
    phi_a0 = phi_t2 ? 2 : 1;
    // L8000164C
    D_80044F38.fldRegs[0].yScale = phi_t3;
    D_80044F38.fldRegs[1].yScale = phi_t3;
    D_80044F38.fldRegs[1].origin = (phi_a0 * arg0 * 2 * sp14);
    if (D_80044FBC.unk_b04) {
        if ((arg1 << 11) < 0xB4000U) {
            D_80044F38.fldRegs[0].yScale = phi_t3 + 0x3000000;
            D_80044F38.fldRegs[1].yScale = phi_t3 + 0x1000000;
        } else {
            // L8000169C
            D_80044F38.fldRegs[0].yScale += 0x2000000;
            D_80044F38.fldRegs[1].yScale += 0x2000000;
        }
        // L800016B8
    }
    // L800016BC
    D_80044F38.fldRegs[0].vIntr = 2;
    D_80044F38.fldRegs[1].vIntr = 2;
    D_80044F88[0]               = 1;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/thread3/func_80000F30.s")
#endif /* NON_MATCHING */

void func_800016D8(void) {
    void *cur;
    void *next;

    if (D_80045035 != D_80045034) {
        next = osViGetNextFramebuffer();
        cur  = osViGetCurrentFramebuffer();
        if (next == cur) {
            osViSwapBuffer(D_80045028[D_80045035]);
            if (D_80045035 == 2) {
                D_80045035 = 0;
            } else {
                D_80045035 += 1;
            }
        }
    }
}

void func_80001764(void *arg0) {
    D_80045028[D_80045034] = arg0;
    if (D_80045034 == 2) {
        D_80045034 = 0;
    } else {
        D_80045034 += 1;
    }
    func_800016D8();
}

// arg0 is frame buffer pointer?
void func_800017B8(void *arg0) {
    void *temp;

    if (D_80044F88[0] != 0) {
        if (D_80045020 == 0) { func_80000EAC(); }
    }

    if (D_80045010 != 0) {
        osSendMesg(D_80045014, (OSMesg)1, OS_MESG_NOBLOCK);
        if ((intptr_t)arg0 == -1) {
            D_80044FA8 = D_80044F9C;
            D_80044F9C = NULL;
        } else {
            D_80044FA8 = arg0;
        }
    } else {
        if ((intptr_t)arg0 == -1) {
            func_80001764(D_80044F9C);
            // permutater solution
            // clang-format off
            temp = D_80044F9C; if (temp == D_80044FA0) { 
                D_80044FA4 = 1; 
            }
            // clang-format on
            D_80044FA8 = temp;
            D_80044F9C = NULL;
        } else {
            func_80001764((void *)arg0);
            D_80044FA8 = arg0;
        }
    }
    // OS_CYCLES_TO_NSEC?
    D_80044FB4 = (u32)((u32)(osGetCount() - D_80044FAC) / 0xB9BU);
}

void func_800018E0(struct SCTaskGfx *arg0) {
    if (D_80044ECC != 0) {
        osSpTaskYield();
        D_80044ECC->info.unk08 = 4;
        func_80000D44(D_80044ECC);
        arg0->info.unk08 = 3;
    } else {
        osSpTaskStart(&arg0->task);
        arg0->info.unk08 = 2;
    }
    D_80044ECC = arg0;
}

void func_80001968(struct SCTaskGfx *arg0) {
    D_80044FB0 = osGetCount();

    if ((D_80044ECC != NULL) && (D_80044ECC->info.unk08 == 2)) {
        osSpTaskYield();
        D_80044ECC->info.unk08 = 4;
        arg0->info.unk08       = 3;
    } else {
        osSpTaskStart(&arg0->task);
        arg0->info.unk08 = 2;
    }
    D_80044ED0 = arg0;
}

s32 func_80001A00(struct SCTaskInfo *task);
#ifdef NON_MATCHING
// execute task?
s32 func_80001A00(struct SCTaskInfo *task) {
    /* Nonmatching: reg alloc, likely branches, stack too big */

    s32 sp4C = 0;

    switch (task->unk00) {
        case 1:
        {
            struct SCTaskGfx *t = (void *)task;

            if (t->unk68 != NULL) {
                *t->unk68 = (*t->unk68) | ((uintptr_t)D_80044F9C);
                osWritebackDCache(t->unk68, sizeof(s32 *));
            }
            // L80001A6C
            if ((uintptr_t)t->task.t.output_buff == (uintptr_t)-1) {
                t->task.t.output_buff = (u64 *)((uintptr_t)D_80044FCC + D_80044FC8);
                osWritebackDCache(&t->task.t.output_buff, sizeof(u64 *));
            }
            // L80001A98
            if (t->unk74 == 1) { osInvalDCache(&D_80044FC0, sizeof(D_80044FC0)); }
            // L80001AB4
            func_800018E0(t);
            sp4C = 1;
            break;
        }
        case 2:
        {
            // or is this a separate type with an OSTask at the same location?
            struct SCTaskGfx *t = (void *)task;

            osWritebackDCacheAll();
            func_80001968(t);
            sp4C = 1;
            break;
        }
        case 3:
        {
            struct SCTaskType3 *t   = (void *)task;
            struct MqListNode *temp = t->unk24;

            t->unk24->next = D_80044EC0;
            D_80044EC0     = temp;

            if (t->info.unk20 != NULL) {
                osSendMesg(t->info.unk20, (OSMesg)t->info.unk1C, OS_MESG_NOBLOCK);
            }
            break;
        }
        case 4:
        {
            struct SCTaskType4 *t = (void *)task;

            func_80000F30(t->unk24, t->unk28, t->unk2C, t->unk30, t->unk32, t->unk34, t->unk36);

            if (t->info.unk20 != NULL) {
                osSendMesg(t->info.unk20, (OSMesg)t->info.unk1C, OS_MESG_NOBLOCK);
            }
            break;
        }
        case 5:
        {
            s32 i;
            struct SCTaskType5 *t = (void *)task;

            for (i = 0; i < ARRAY_COUNT(D_80044F90); i++) { D_80044F90[i] = t->unk24[i]; }

            if (t->info.unk20 != NULL) {
                osSendMesg(t->info.unk20, (OSMesg)t->info.unk1C, OS_MESG_NOBLOCK);
            }
            break;
        }
        case 6:
        {
            struct SCTaskGfxEnd *t = (void *)task;
            struct SCTaskGfx *v1   = NULL; // found
            struct SCTaskInfo *v0;         // csr
            // a0 = D_80044ECC;
            if (D_80044ECC != NULL && D_80044ECC->info.unk00 == 1
                && D_80044ECC->unk80 == t->unk28) {
                v1 = D_80044ECC;
            }
            // L80001BEC
            v0 = &D_80044ED4->info;
            while (v0 != NULL) {
                if (v0->unk00 == 1) {
                    if (((struct SCTaskGfx *)v0)->unk80 == t->unk28) { v1 = (void *)v0; }
                }
                // L80001C20
                v0 = v0->unk0C;
            }
            // L80001C28
            v0 = D_80044EC4;
            while (v0 != NULL) {
                if (v0->unk00 == 1) {
                    if (((struct SCTaskGfx *)v0)->unk80 == t->unk28) { v1 = (void *)v0; }
                }
                // L80001C5C
                v0 = v0->unk0C;
            }
            // L80001C64
            v0 = &D_80044EE4->info;
            if (v0 != NULL) {
                if (v0->unk00 == 1) {
                    if (D_80044ECC->unk80 == t->unk28) { v1 = (void *)v0; }
                }
            }
            // L80001C94
            v0 = &D_80044EDC->info;
            while (v0 != NULL) {
                if (v0->unk00 == 1) {
                    if (((struct SCTaskGfx *)v0)->unk80 == t->unk28) { v1 = (void *)v0; }
                }
                v0 = v0->unk0C;
            }
            // L80001CD0
            if (v1 != NULL) {
                v1->info.unk1C = t->info.unk1C;
                v1->info.unk20 = t->info.unk20;
                v1->unk6C      = t->unk24;
            } else {
                // L80001CF8
                if (t->unk24 != NULL) { func_800017B8(t->unk24); }
                // L80001D0C
                if (t->info.unk20 != NULL) {
                    osSendMesg(t->info.unk20, (OSMesg)t->info.unk1C, OS_MESG_NOBLOCK);
                }
            }
            break;
        }
        case 7:
            if (task->unk20 != NULL) {
                osSendMesg(task->unk20, (OSMesg)task->unk1C, OS_MESG_NOBLOCK);
            }
            break;
        case 8:
        {
            struct SCTaskType8 *t = (void *)task;

            D_80044FCC = t->unk24;
            D_80044FD0 = t->unk28;
            if (t->info.unk20 != NULL) {
                osSendMesg(t->info.unk20, (OSMesg)t->info.unk1C, OS_MESG_NOBLOCK);
            }
            break;
        }
        case 9:
        {
            struct SCTaskType9 *t = (void *)task;

            D_80045010 = 1;
            D_80045014 = t->unk24;
            if (t->info.unk20 != NULL) {
                osSendMesg(t->info.unk20, (OSMesg)t->info.unk1C, OS_MESG_NOBLOCK);
            }
            break;
        }
        case 10:
            D_80045010 = 0;
            if (task->unk20 != NULL) {
                osSendMesg(task->unk20, (OSMesg)task->unk1C, OS_MESG_NOBLOCK);
            }
            break;
        case 11:
        {
            struct SCTaskInfo *a0 = D_80044EC4;
            // struct SCTaskGfx *sp34;
            while (a0 != NULL) {
                if (a0->unk00 == 1 || a0->unk00 == 4) {
                    // sp34 = a0->unk0C;
                    func_80000CF4(a0);
                    // a0 = sp34;
                }
                // L80001E28
                a0 = a0->unk0C;
            }
            // L80001E30
            D_80044FA0 = NULL;
            if (task->unk20 != NULL) {
                osSendMesg(task->unk20, (OSMesg)task->unk1C, OS_MESG_NOBLOCK);
            }
            break;
        }
    }
    // L80001E50

    return sp4C;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/thread3/func_80001A00.s")
#endif /* NON_MATCHING */

void func_80001E64(void) {
    s32 phi_a0;
    s32 phi_v0; // cur "priority"
    s32 phi_v1;
    struct SCTaskInfo *phi_s0;  // cur
    struct SCTaskInfo *temp_s1; // temp for cur
    s32 phi_s2 = 0;
    s32 phi_s4; // "priority" of D_80044ED4
    s32 phi_s7; // "priority" of D_80044ECC or D_80044ED0

    phi_s7 = D_80044ECC != NULL ? D_80044ECC->info.unk04 : -1;

    if (D_80044ED0 != NULL) { phi_s7 = D_80044ED0->info.unk04; }

    phi_s4 = D_80044ED4 != NULL ? D_80044ED4->info.unk04 : -1;

    phi_s0 = D_80044EC4;
    while (phi_s2 == 0) {
        phi_v0 = phi_s0 != NULL ? phi_s0->unk04 : -1;

        if (phi_s4 >= phi_v0) {
            phi_v1 = 0;
            phi_a0 = phi_s4;
        } else {
            phi_v1 = 1;
            phi_a0 = phi_v0;
        }

        if (phi_s7 >= phi_a0) {
            phi_s2 = 1;
        } else {
            switch (phi_v1) {
                case 0:
                    osSpTaskStart(&D_80044ED4->task);
                    phi_s2                 = 1;
                    D_80044ED4->info.unk08 = 2;
                    D_80044ECC             = D_80044ED4;
                    func_80000DD4(D_80044ED4);
                    break;
                case 1:
                    if (phi_s0->func == NULL || phi_s0->func(phi_s0) != 0) {
                        phi_s2  = func_80001A00(phi_s0);
                        temp_s1 = phi_s0->unk0C;
                        func_80000CF4(phi_s0);
                        phi_s0 = temp_s1;
                    } else {
                        phi_s0 = phi_s0->unk0C;
                    }
                    break;
            }
        }
    }
}

void func_80001FF4(void) {
    if (D_80044EE4 == NULL && D_80044EDC != NULL) {
        D_80044EE4 = D_80044EDC;
        func_80000E5C(D_80044EDC);
        D_80044EE4->info.unk08 = 2;
        osDpSetNextBuffer(D_80044EE4->task.t.output_buff, D_80044EE4->unk78);
    }
}

void func_8000205C(void) {
    struct MqListNode *cur;
    // temp usages are needed to match
    struct MqListNode *temp;

    D_8004501C += 1;
    cur = D_80044EC0;
    while (cur != NULL) {
        temp = cur;
        osSendMesg(temp->mq, (OSMesg)1, 0);
        cur = cur->next;

        if (temp->mq) { }
    }

    func_800016D8();
    func_80001E64();
}

void func_800020D0(void);
#ifdef NON_MATCHING
void func_800020D0(void) {
    s32 t6;

    if (D_80044ED0 != NULL && D_80044ED0->info.unk08 == 2) {
        osSendMesg(D_80044ED0->info.unk20, (OSMesg)0, OS_MESG_NOBLOCK);
        D_80044ED0 = NULL;
        func_80001E64();
        D_80044FB8 = (osGetCount() - D_80044FB0) / 2971;

        return;
    }
    // L8000213C
    if (D_80044ECC != NULL && D_80044ECC->info.unk08 == 4) {
        if (osSpTaskYielded(&D_80044ECC->task) == OS_TASK_YIELDED) {
            D_80044ECC->info.unk08 = 5;
            func_80000D44(D_80044ECC);
            D_80044ECC = NULL;
        } else {
            // L80002198
            D_80044ECC->info.unk08 = 6;
        }
        // L800021A4
        osSpTaskStart(&D_80044ED0->task);
        D_80044ED0->info.unk08 = 2;
    }
    // L800021DC
    if (D_80044ECC != NULL && D_80044ECC->info.unk18 == 1 && D_80044ECC->info.unk08 != 5) {
        if (D_80044ECC->info.unk00 == 1 && D_80044ECC->unk74 == 1) {
            osInvalDCache(&D_80044FC0, sizeof(D_80044FC0));
            D_80044ECC->unk78 = D_80044FC0;
            /*
            t5 = D_80044FC8[0];
            t6 = D_80044FC0 upper;
            t7 = D_80044FC0 lower;
            a2 = 1;
            t2 = t5 + t7;
            t1 = t2 + 15;
            // store t6 to stack sp + 18
            t0 = (sp + 18);
            t4 = t1 >> 4;
            t6 = t4 << 4;
            t8 = t6 >> 0x1f;
            *D_80044FC8 = t2;
            *D_80044FC8 = t6;
            // store t7 to stack (sp + 1c)
            */

            // sp18 = D_80044FC0.pad00;
            // t6 = ((((u32)D_80044FC8 + D_80044FC0.unk04 + 15) << 4) >> 4);
            // sp1C = D_80044FC0.unk04;
            // sp1C = *((u64 *)&D_80044FC0);
            // t6          = (((*D_80044FC8 + (u32)D_80044FC0) + 15) << 4) >> 4;
            //*D_80044FC8 = *D_80044FC8 + (u32)D_80044FC0;
            //*D_80044FC8 = t6;

            t6 = 0; // this is to silence clang checks
            if (D_80044FC0 < t6) {
                fatal_printf("rdp_output_buff over !! size = %d\n byte", t6);
                while (TRUE) { }
            }
            /*
            if ( sp18 >= (t6 >> 31)) {
                if (sp18 >= (t6 >> 31)) {
                    if (t6 < sp1C) {
                        fatal_printf("rdp_output_buff over !! size = %d\n byte", t6);
                        while (TRUE) { }
                    }

                }
                // L800022BC
            }*/

            // L800022BC
            D_80044ECC->info.unk08 = 1;
            func_80000E24(D_80044ECC);
            func_80001FF4();
        }
        // L800022D4
        D_80044ECC = NULL;
        func_80001E64();
        return;
    }
    // L800022E8
    if (D_80044ECC != NULL && D_80044ECC->info.unk18 == 2) {
        if (D_80044ECC->info.unk00 == 1) {
            D_80044ECC->info.unk08 = 6;
            if (D_80044ECC->unk7C & 2) { D_80044ECC->unk7C |= 1; }
        }
    }
    // L80002330
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/thread3/func_800020D0.s")
#endif /* NON_MATCHING */

void func_80002340(void) {
    union CheckedPtr checked; // could just be a void *temp

    if (D_80044ECC != NULL && D_80044ECC->info.unk18 == 2) {
        if (D_80044ECC->info.unk00 == 1) {
            checked.ptr = D_80044ECC->unk6C;
            if (checked.ptr != NULL) { func_800017B8(checked.ptr); }

            if (D_80044ECC->info.unk20 != NULL) {
                osSendMesg(D_80044ECC->info.unk20, (OSMesg)D_80044ECC->info.unk1C, OS_MESG_NOBLOCK);
            }

            if (D_80044ECC->info.unk08 == 4) {
                osSpTaskStart(&D_80044ED0->task);
                D_80044ED0->info.unk08 = 2;
            }
        }

        D_80044ECC = NULL;
        func_80001E64();
    } else if (D_80044EE4 != NULL) {
        checked.ptr = D_80044EE4->unk6C;
        if (checked.ptr != NULL) { func_800017B8(checked.ptr); }

        if (D_80044EE4->info.unk20 != NULL) {
            osSendMesg(D_80044EE4->info.unk20, (OSMesg)D_80044EE4->info.unk1C, OS_MESG_NOBLOCK);
        }

        D_80044EE4 = NULL;
        func_80001FF4();
    } else if (D_80044ED4 != NULL && D_80044ED4->info.unk18 == 2) {
        if (D_80044ED4->info.unk00 == 1) {
            checked.ptr = D_80044ED4->unk6C;
            if (checked.ptr != NULL) { func_800017B8(checked.ptr); }

            if (D_80044ED4->info.unk20 != NULL) {
                osSendMesg(D_80044ED4->info.unk20, (OSMesg)D_80044ED4->info.unk1C, OS_MESG_NOBLOCK);
            }

            func_80000DD4(D_80044ED4);
        }
        func_80001E64();
    }
}

// might only take a struct SpTaskInfo *
void func_800024EC(struct SCTaskInfo *task) {
    task->unk08 = 1;
    func_80000C64(task);
    func_80001E64();
}

// forward dec
void func_800029D8(void);

#define INTR_VRETRACE     1
#define INTR_SP_TASK_DONE 2
#define INTR_DP_FULL_SYNC 3
#define INTR_SOFT_RESET   99

void thread3_scheduler(UNUSED void *arg) {
    OSMesg intrMsg;
    UNUSED u32 pad;
    OSViMode mode;

    // the wonders of matching
    D_80044EC0 = NULL;
    D_80044EC4 = D_80044EC8 = D_80044ECC = D_80044ED0 = D_80044ED4 = D_80044ED8 = NULL;
    D_80044EE4 = D_80044EDC = D_80044EE0 = NULL;
    D_80044F88[0]                        = 0;
    D_80044FA8 = D_80044F9C = D_80044FA0 = NULL;
    D_80045010                           = 0;
    D_80045018                           = func_800029D8;
    D_80045020                           = 0;
    D_80045024                           = -1;
    D_8004501C                           = 0;
    D_80045034 = D_80045035 = 0;

    switch (osTvType) {
        case OS_TV_NTSC:
            mode       = osViModeNtscLan1;
            D_80044EE8 = mode;
            D_80044F38 = mode;
            break;
        case OS_TV_PAL:
            while (TRUE) { }
            break;
        case OS_TV_MPAL:
            mode       = osViModeMpalLan1;
            D_80044EE8 = mode;
            D_80044F38 = mode;
            break;
    }
    // 0x10016
    D_80044EE8.comRegs.ctrl =
        VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_DIVOT_ON | VI_CTRL_DITHER_FILTER_ON;
    D_80044F38.comRegs.ctrl =
        VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_DIVOT_ON | VI_CTRL_DITHER_FILTER_ON;
    osViSetMode(&D_80044EE8);
    osViBlack(TRUE);

    D_80044FBC.unk_b80      = TRUE;
    D_80044FBC.serrate      = FALSE;
    D_80044FBC.pixelSize32  = FALSE;
    D_80044FBC.gamma        = FALSE;
    D_80044FBC.blackout     = TRUE;
    D_80044FBC.unk_b04      = FALSE;
    D_80044FBC.gammaDither  = TRUE;
    D_80044FBC.ditherFilter = TRUE;
    D_80044FBC.divot        = TRUE;

    osCreateMesgQueue(&gScheduleTaskQueue, D_80044FD8, ARRAY_COUNT(D_80044FD8));
    osViSetEvent(&gScheduleTaskQueue, (OSMesg)INTR_VRETRACE, 1);
    osSetEventMesg(OS_EVENT_SP, &gScheduleTaskQueue, (OSMesg)INTR_SP_TASK_DONE);
    osSetEventMesg(OS_EVENT_DP, &gScheduleTaskQueue, (OSMesg)INTR_DP_FULL_SYNC);
    osSetEventMesg(OS_EVENT_PRENMI, &gScheduleTaskQueue, (OSMesg)INTR_SOFT_RESET);

    osSendMesg(&gThreadingQueue, (OSMesg)1, OS_MESG_NOBLOCK);

    while (TRUE) {
        osRecvMesg(&gScheduleTaskQueue, &intrMsg, OS_MESG_BLOCK);

        switch ((uintptr_t)intrMsg) {
            case INTR_VRETRACE: func_8000205C(); break;
            case INTR_SP_TASK_DONE:
                func_800020D0();
                if (D_80045020 == 1 && D_80045024 == -1) { D_80045024 = osAfterPreNMI(); }
                break;
            case INTR_DP_FULL_SYNC: func_80002340(); break;
            case INTR_SOFT_RESET:
                if (D_80045018 != NULL) { D_80045018(); }
                break;
            default:
                if (D_80045020 == 0) {
                    // is this a pointer to only the info struct?
                    func_800024EC((struct SCTaskInfo *)intrMsg);
                }
        }
    }
}

void func_800029D8(void) {
    s32 i;

    D_80045020 = 1;
    osViSetYScale(1.0);
    osViBlack(TRUE);

    for (i = 0; i < 4; i++) {
        func_800044B4(i);
        func_80004494(i);
    }

    D_80045024 = osAfterPreNMI();
}

void unref_80002A50(void (*fn)(void)) {
    D_80045018 = fn;
}

#pragma GCC diagnostic pop
