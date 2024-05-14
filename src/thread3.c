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

s32 func_80000B54(UNUSED struct SCTaskInfo *t) {
    struct SCTaskInfo *cur;
    const s32 TYPE_TO_CHECK = 1;

    if (D_80044ECC_406DC != NULL && D_80044ECC_406DC->info.unk00 == TYPE_TO_CHECK) { return 0; }

    cur = &D_80044ED4_406E4->info;
    while (cur != NULL) {
        if (cur->unk00 == TYPE_TO_CHECK) { return 0; }
        cur = cur->unk0C;
    }

    cur = D_80044EC4_406D4;
    while (cur != NULL) {
        if (cur->unk00 == TYPE_TO_CHECK) { return 0; }
        cur = cur->unk0C;
    }

    if (D_80044EE4_406F4 != NULL && D_80044EE4_406F4->info.unk00 == TYPE_TO_CHECK) { return 0; }

    cur = &D_80044EDC_406EC->info;
    while (cur != NULL) {
        if (cur->unk00 == TYPE_TO_CHECK) { return 0; }
        cur = cur->unk0C;
    }

    if (D_80045034_40844 != D_80045035_40845) { return 0; }

    return 1;
}

// insert into task (command?) priority queue?
void func_80000C64(struct SCTaskInfo *newTask) {
    struct SCTaskInfo *csr;

    // find task with priority higher than arg0
    csr = D_80044EC8_406D8;
    while (csr != NULL && csr->unk04 < newTask->unk04) { csr = csr->unk10; }

    // insert new task into queue
    newTask->unk10 = csr;
    if (csr != NULL) {
        newTask->unk0C = csr->unk0C;
        csr->unk0C     = newTask;
    } else {
        newTask->unk0C   = D_80044EC4_406D4;
        D_80044EC4_406D4 = newTask;
    }

    csr = newTask->unk0C;
    if (csr != NULL) {
        csr->unk10 = newTask;
    } else {
        D_80044EC8_406D8 = newTask;
    }
}

// remove from priority queue?
void func_80000CF4(struct SCTaskInfo *task) {
    if (task->unk10 != NULL) {
        task->unk10->unk0C = task->unk0C;
    } else {
        D_80044EC4_406D4 = task->unk0C;
    }

    if (task->unk0C != NULL) {
        task->unk0C->unk10 = task->unk10;
    } else {
        D_80044EC8_406D8 = task->unk10;
    }
}

// add to D_80044ED4_406E4/D_80044ED8_406E8 priorirty queue
void func_80000D44(struct SCTaskGfx *arg0) {
    struct SCTaskInfo *temp_v0;

    temp_v0 = &D_80044ED8_406E8->info;
    while (temp_v0 != NULL && temp_v0->unk04 < arg0->info.unk04) { temp_v0 = temp_v0->unk10; }

    arg0->info.unk10 = temp_v0;
    if (temp_v0 != NULL) {
        arg0->info.unk0C = temp_v0->unk0C;
        temp_v0->unk0C   = &arg0->info;
    } else {
        arg0->info.unk0C = &D_80044ED4_406E4->info;
        D_80044ED4_406E4 = arg0;
    }

    temp_v0 = arg0->info.unk0C;
    if (temp_v0 != NULL) {
        temp_v0->unk10 = &arg0->info;
    } else {
        D_80044ED8_406E8 = arg0;
    }
}

// remove from D_80044ED4_406E4/D_80044ED8_406E8 queue
void func_80000DD4(struct SCTaskGfx *arg0) {
    if (arg0->info.unk10 != NULL) {
        arg0->info.unk10->unk0C = arg0->info.unk0C;
    } else {
        D_80044ED4_406E4 = (void *)arg0->info.unk0C;
    }

    if (arg0->info.unk0C != NULL) {
        arg0->info.unk0C->unk10 = arg0->info.unk10;
    } else {
        D_80044ED8_406E8 = (void *)arg0->info.unk10;
    }
}

// append to head of D_80044EDC_406EC/D_80044EE0_406F0 queue
void func_80000E24(struct SCTaskGfx *arg0) {
    arg0->info.unk0C = NULL;
    arg0->info.unk10 = &D_80044EE0_406F0->info;
    if (D_80044EE0_406F0 != NULL) {
        D_80044EE0_406F0->info.unk0C = &arg0->info;
    } else {
        D_80044EDC_406EC = arg0;
    }
    D_80044EE0_406F0 = arg0;
}

// remove from D_80044EDC_406EC/D_80044EE0_406F0 queue
void func_80000E5C(struct SCTaskGfx *arg0) {
    if (arg0->info.unk10 != NULL) {
        arg0->info.unk10->unk0C = arg0->info.unk0C;
    } else {
        D_80044EDC_406EC = (void *)arg0->info.unk0C;
    }

    if (arg0->info.unk0C != NULL) {
        arg0->info.unk0C->unk10 = arg0->info.unk10;
    } else {
        D_80044EE0_406F0 = (void *)arg0->info.unk10;
    }
}

void func_80000EAC(void) {
    D_80044EE8_406F8 = D_80044F38_40748;
    osViSetMode(&D_80044EE8_406F8);
    osViBlack(D_80044FBC_407CC.blackout);
    D_80044F88_40798[0] = 0;
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

    if (arg0 >= GS_SCREEN_WIDTH_DEFAULT || arg1 >= GS_SCREEN_HEIGHT_DEFAULT) {
        phi_t2 = 0;
    } else {
        phi_t2 = 1;
    }

    // phi_t2 = arg0 >= GS_SCREEN_WIDTH_DEFAULT && arg1 >= GS_SCREEN_HEIGHT_DEFAULT ? 0 : 1;

    // L80000F5C
    if (arg2 & 0x00004) {
        D_80044FBC_407CC.serrate = TRUE;
        D_80044F38_40748.comRegs.ctrl |= VI_CTRL_SERRATE_ON;
    }
    // L80000F8C
    if (arg2 & 0x00008) {
        D_80044FBC_407CC.serrate = FALSE;
        D_80044F38_40748.comRegs.ctrl &= ~VI_CTRL_SERRATE_ON;
    }
    // L80000FC0
    if (arg2 & 0x00010) {
        D_80044FBC_407CC.pixelSize32 = FALSE;
        D_80044F38_40748.comRegs.ctrl &= ~(VI_CTRL_TYPE_32 | VI_CTRL_TYPE_16);
        D_80044F38_40748.comRegs.ctrl |= VI_CTRL_TYPE_16;
    }
    // L80000FF4
    if (arg2 & 0x00020) {
        D_80044FBC_407CC.pixelSize32 = TRUE;
        D_80044F38_40748.comRegs.ctrl &= ~(VI_CTRL_TYPE_32 | VI_CTRL_TYPE_16);
        D_80044F38_40748.comRegs.ctrl |= VI_CTRL_TYPE_32;
    }
    // L80001024
    if (arg2 & 0x00040) {
        D_80044FBC_407CC.gamma = TRUE;
        D_80044F38_40748.comRegs.ctrl |= VI_CTRL_GAMMA_ON;
    }
    // L80001048
    if (arg2 & 0x00080) {
        D_80044FBC_407CC.gamma = FALSE;
        D_80044F38_40748.comRegs.ctrl &= ~VI_CTRL_GAMMA_ON;
    }
    // L80001070
    if (arg2 & 0x01000) {
        D_80044FBC_407CC.gammaDither = TRUE;
        D_80044F38_40748.comRegs.ctrl |= VI_CTRL_GAMMA_DITHER_ON;
    }
    // L80001094
    if (arg2 & 0x02000) {
        D_80044FBC_407CC.gammaDither = FALSE;
        D_80044F38_40748.comRegs.ctrl &= ~VI_CTRL_GAMMA_DITHER_ON;
    }
    // L800010BC
    if (arg2 & 0x04000) {
        D_80044FBC_407CC.ditherFilter = TRUE;
        D_80044F38_40748.comRegs.ctrl |= VI_CTRL_DITHER_FILTER_ON;
    }
    // L800010E4
    if (arg2 & 0x08000) {
        D_80044FBC_407CC.ditherFilter = FALSE;
        D_80044F38_40748.comRegs.ctrl &= ~VI_CTRL_DITHER_FILTER_ON;
    }
    // L80001110
    if (arg2 & 0x10000) {
        D_80044FBC_407CC.divot = TRUE;
        D_80044F38_40748.comRegs.ctrl |= VI_CTRL_DIVOT_ON;
    }
    // L80001134
    if (arg2 & 0x20000) {
        D_80044FBC_407CC.divot = FALSE;
        D_80044F38_40748.comRegs.ctrl &= ~VI_CTRL_DIVOT_ON;
    }
    // L8000115C
    if (arg2 & 0x00100) { D_80044FBC_407CC.blackout = TRUE; }
    // L80001174
    if (arg2 & 0x00200) { D_80044FBC_407CC.blackout = FALSE; }
    // L80001188
    if (arg2 & 0x00400) { D_80044FBC_407CC.unk_b04 = TRUE; }
    // L800011A0
    if (arg2 & 0x00800) { D_80044FBC_407CC.unk_b04 = FALSE; }
    // L800011B4
    if (arg2 & 0x00001) { D_80044FBC_407CC.unk_b80 = TRUE; }
    // L800011D0
    if (arg2 & 0x00002) { D_80044FBC_407CC.unk_b80 = FALSE; }

    // L800011E8
    D_80044F38_40748.comRegs.ctrl &= ~VI_CTRL_ANTIALIAS_MASK;

    if (D_80044FBC_407CC.unk_b80) {
        phi_a0 = D_80044FBC_407CC.ditherFilter ? 0x100 : 0;

        // if (D_80044FBC_407CC.ditherFilter) {
        //     phi_a0 = 0x100; // aa & resamp (fetch extra lines if needed)
        // } else {
        //     phi_a0 = 0;
        // }

        // L80001220
        D_80044F38_40748.comRegs.ctrl |= phi_a0;
    } else {
        // L80001238
        if (!D_80044FBC_407CC.unk_b04 && D_80044FBC_407CC.pixelSize32 == 1) {
            D_80044F38_40748.comRegs.ctrl = 0x300; // neither (replicate pixels, no interpolate)
        } else {
            // L8000126C
            D_80044F38_40748.comRegs.ctrl = 0x200; // resamp only (treat as all fully covered
        }
    }
    // L8000127C
    phi_t0 = D_80044FBC_407CC.pixelSize32; // tail expression?

    if (phi_t2) {
        if (D_80044FBC_407CC.serrate) {
            phi_v1 = 0;
        } else {
            phi_v1 = 1;
        }
    } else {
        // L800012A0
        if (D_80044FBC_407CC.unk_b04) {
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
    D_80044F38_40748.comRegs.width = phi_a0 * arg0;
    // TODO: macros
    switch (osTvType) {
        case OS_TV_NTSC:
            D_80044F38_40748.comRegs.burst     = 0x3E52239;
            D_80044F38_40748.comRegs.vSync     = 0x20C;
            D_80044F38_40748.comRegs.hSync     = 0xC15;
            D_80044F38_40748.comRegs.leap      = 0xC150C15;
            D_80044F38_40748.comRegs.hStart    = 0x6C02EC;
            D_80044F38_40748.fldRegs[0].vStart = 0x2501FFU;
            D_80044F38_40748.fldRegs[0].vBurst = 0xE0204;
            break;
        case OS_TV_MPAL:
            D_80044F38_40748.comRegs.burst     = 0x4651E39;
            D_80044F38_40748.comRegs.vSync     = 0x20C;
            D_80044F38_40748.comRegs.hSync     = 0xC10;
            D_80044F38_40748.comRegs.leap      = 0xC1C0C1C;
            D_80044F38_40748.comRegs.hStart    = 0x6C02EC;
            D_80044F38_40748.fldRegs[0].vStart = 0x2501FFU;
            D_80044F38_40748.fldRegs[0].vBurst = 0xE0204;
            break;
    }
    // L80001424
    sp00                               = D_80044F38_40748.comRegs.hStart;
    D_80044F38_40748.fldRegs[1].vStart = D_80044F38_40748.fldRegs[0].vStart;
    sp20                               = D_80044F38_40748.comRegs.hStart >> 16;
    sp1C                               = D_80044F38_40748.comRegs.hStart & 0xFFFF;

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
    D_80044F38_40748.comRegs.hStart = (sp20 << 16) | sp1C;
    sp00                            = D_80044F38_40748.fldRegs[0].vStart;
    sp20                            = sp00 >> 16;
    sp1C                            = sp00 & 0xFFFF;

    sp20 = sp20 + arg5;
    if (sp20 < 0) { sp20 = 0; }
    // L800014AC
    sp1C = sp1C + arg6;
    if (sp1C < 0) { sp1C = 0; }
    // L800014C0
    D_80044F38_40748.fldRegs[0].vStart = (sp20 << 16) | sp1C;
    sp00                               = D_80044F38_40748.fldRegs[1].vStart;
    sp20                               = sp00 >> 16;
    sp1C                               = sp00 & 0xFFFF;

    sp20 = sp20 + arg5;
    if (sp20 < 0) { sp20 = 0; }
    // L800014FC
    sp1C = sp1C + arg6;
    if (sp1C < 0) { sp1C = 0; }
    // L80001510
    D_80044F38_40748.fldRegs[1].vStart = (sp20 << 16) | sp1C;
    D_80044F38_40748.fldRegs[1].vBurst = D_80044F38_40748.fldRegs[0].vBurst;

    if (phi_t2 && phi_v1) {
        D_80044F38_40748.comRegs.vSync += 1;
        if (osTvType == OS_TV_MPAL) { D_80044F38_40748.comRegs.hSync += 0x40001; }
        if (osTvType == OS_TV_MPAL) { D_80044F38_40748.comRegs.leap += 0xFFFCFFFE; }
    } else {
        // L80001580
        D_80044F38_40748.fldRegs[0].vStart += 0xFFFDFFFE;
        if (osTvType == OS_TV_MPAL) { D_80044F38_40748.fldRegs[0].vBurst += 0xFFFCFFFE; }
        if (osTvType == OS_TV_PAL)  { D_80044F38_40748.fldRegs[1].vBurst += 0x2FFFE; }
    }
    // L800015C8
    D_80044F38_40748.comRegs.vCurrent  = 0;
    D_80044F38_40748.comRegs.xScale    = (u32)(arg0 << 0xA) / (u32)((arg4 - arg3) + 0x280);
    phi_a0                       = phi_t0 ? 2 : 1;
    D_80044F38_40748.fldRegs[0].origin = (phi_a0 * arg0 * 2);

    sp14 = phi_t0 ? 2 : 1;
    // L8000163C
    phi_a0 = phi_t2 ? 2 : 1;
    // L8000164C
    D_80044F38_40748.fldRegs[0].yScale = phi_t3;
    D_80044F38_40748.fldRegs[1].yScale = phi_t3;
    D_80044F38_40748.fldRegs[1].origin = (phi_a0 * arg0 * 2 * sp14);
    if (D_80044FBC_407CC.unk_b04) {
        if ((arg1 << 11) < 0xB4000U) {
            D_80044F38_40748.fldRegs[0].yScale = phi_t3 + 0x3000000;
            D_80044F38_40748.fldRegs[1].yScale = phi_t3 + 0x1000000;
        } else {
            // L8000169C
            D_80044F38_40748.fldRegs[0].yScale += 0x2000000;
            D_80044F38_40748.fldRegs[1].yScale += 0x2000000;
        }
        // L800016B8
    }
    // L800016BC
    D_80044F38_40748.fldRegs[0].vIntr = 2;
    D_80044F38_40748.fldRegs[1].vIntr = 2;
    D_80044F88_40798[0]               = 1;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/thread3/func_80000F30.s")
#endif /* NON_MATCHING */

void func_800016D8(void) {
    void *cur;
    void *next;

    if (D_80045035_40845 != D_80045034_40844) {
        next = osViGetNextFramebuffer();
        cur  = osViGetCurrentFramebuffer();
        if (next == cur) {
            osViSwapBuffer(D_80045028_40838[D_80045035_40845]);
            if (D_80045035_40845 == 2) {
                D_80045035_40845 = 0;
            } else {
                D_80045035_40845 += 1;
            }
        }
    }
}

void func_80001764(void *arg0) {
    D_80045028_40838[D_80045034_40844] = arg0;
    if (D_80045034_40844 == 2) {
        D_80045034_40844 = 0;
    } else {
        D_80045034_40844 += 1;
    }
    func_800016D8();
}

// arg0 is frame buffer pointer?
void func_800017B8(void *arg0) {
    void *temp;

    if (D_80044F88_40798[0] != 0) {
        if (D_80045020_40830 == 0) { func_80000EAC(); }
    }

    if (D_80045010_40820 != 0) {
        osSendMesg(D_80045014_40824, (OSMesg)1, OS_MESG_NOBLOCK);
        if ((intptr_t)arg0 == -1) {
            D_80044FA8_407B8 = D_80044F9C_407AC;
            D_80044F9C_407AC = NULL;
        } else {
            D_80044FA8_407B8 = arg0;
        }
    } else {
        if ((intptr_t)arg0 == -1) {
            func_80001764(D_80044F9C_407AC);
            // permutater solution
            // clang-format off
            temp = D_80044F9C_407AC; if (temp == D_80044FA0_407B0) { 
                D_80044FA4_407B4 = 1; 
            }
            // clang-format on
            D_80044FA8_407B8 = temp;
            D_80044F9C_407AC = NULL;
        } else {
            func_80001764((void *)arg0);
            D_80044FA8_407B8 = arg0;
        }
    }
    // OS_CYCLES_TO_NSEC?
    D_80044FB4_407C4 = (u32)((u32)(osGetCount() - D_80044FAC_407BC) / 0xB9BU);
}

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
