#include "common.h"
#include "thread3.h"

#include <sys/error.h>
#include <sys/main.h>
#include <sys/thread6.h>

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
MqListNode *scClientList;
SCTaskInfo *scMainQueueHead; // largest priority/unk04?
SCTaskInfo *D_80044EC8_406D8; // smallest priority/unk04?
SCTaskGfx *scCurrentGfxTask;  // actually a pointer to SCTaskGfx?
SCTaskGfx *scCurrentAudioTask;  // largest priority queue 2
SCTaskGfx *scPausedQueueHead;  // smallest priority queue 2
SCTaskGfx *D_80044ED8_406E8;  // largest priority queue 3
SCTaskGfx *scQueue3Head;  // smallest priority queue 3
SCTaskGfx *D_80044EE0_406F0;  // standard linked list head
SCTaskGfx *scCurrentQueue3Task;  // standdard linked list tail
OSViMode D_80044EE8_406F8;
OSViMode D_80044F38_40748;
u32 D_80044F88_40798[2];
void *scFrameBuffers[3];
void *scNextFrameBuffer;
void *scUnkFrameBuffer;
u32 D_80044FA4_407B4;
void *D_80044FA8_407B8;
u32 scTimestampSetFb;
u32 scTimestampAudioTaskStarted;
u32 D_80044FB4_407C4;
u32 scTimeSpentAudio;
struct ViSettings D_80044FBC_407CC; // bitflags? union?
u64 scUnknownU64;
s32 scRDPOutputBufferUsed;
u64 *scRDPBuffer;
u32 scRDPBufferCapacity; // size of scRDPBuffer
u8 unref_80044FD4[4];
OSMesg D_80044FD8_407E8[8];
OSMesgQueue scTaskQueue;
u32 scUseCustomSwapBufferFunc;
OSMesgQueue *scCustomSwapBufferQueue;
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
    SCTaskGfx *i = scCurrentGfxTask, *j = scCurrentQueue3Task, *k = scQueue3Head;

    do {
    } while (i || j || k);

    return;
}

void func_80000970(SCTaskInfo *task) {
    OSMesg msgs[1];
    OSMesgQueue mq;

    osCreateMesgQueue(&mq, msgs, ARRAY_COUNT(msgs));
    task->fnCheck  = NULL;
    task->retVal = 1;
    task->mq = &mq;
    osSendMesg(&scTaskQueue, (OSMesg)task, OS_MESG_NOBLOCK);
    osRecvMesg(&mq, NULL, OS_MESG_BLOCK);
}

void func_800009D8(MqListNode *arg0, OSMesgQueue *mq, OSMesg *msg, u32 count) {
    SCTaskAddClient t;

    osCreateMesgQueue(mq, msg, count);
    arg0->mq        = mq;
    t.info.type     = SC_TASK_TYPE_ADD_CLIENT;
    t.info.priority = 100;
    t.client        = arg0;
    func_80000970(&t.info);
}

// 80000A34
// returns true if task can be executed now
s32 scCheckGfxTaskDefault(SCTaskGfx* t) {
    s32 idx;
    s32 i;
    void* nextFb;
    void* curFb;
    void* fb;

    if (scNextFrameBuffer != NULL) {
        return TRUE;
    }
    if (scUnkFrameBuffer != NULL) {
        return FALSE;
    }

    nextFb = osViGetNextFramebuffer();
    curFb = osViGetCurrentFramebuffer();

    // set framebuffer for drawing
    idx = t->fbIdx;
    if (idx != -1) {
        fb = scFrameBuffers[idx];
        if (fb != NULL && curFb != fb && nextFb != fb) {
            scUnkFrameBuffer = scNextFrameBuffer = fb;
            scRDPOutputBufferUsed = 0;
            scTimestampSetFb = osGetCount();
            return TRUE;
        }
    }

    // set any available
    for (i = 0; i < ARRAY_COUNT(scFrameBuffers); i++) {
        fb = scFrameBuffers[i];
        if (fb != NULL && curFb != fb && nextFb != fb) {
            scNextFrameBuffer = fb;
            scRDPOutputBufferUsed = 0;
            scTimestampSetFb = osGetCount();
            return TRUE;
        }
    }

    return FALSE;
}

s32 func_80000B54(UNUSED SCTaskInfo *t) {
    SCTaskInfo *cur;
    const s32 TYPE_TO_CHECK = SC_TASK_TYPE_GFX;

    if (scCurrentGfxTask != NULL && scCurrentGfxTask->info.type == TYPE_TO_CHECK) { return 0; }

    cur = &scPausedQueueHead->info;
    while (cur != NULL) {
        if (cur->type == TYPE_TO_CHECK) { return 0; }
        cur = cur->next;
    }

    cur = scMainQueueHead;
    while (cur != NULL) {
        if (cur->type == TYPE_TO_CHECK) { return 0; }
        cur = cur->next;
    }

    if (scCurrentQueue3Task != NULL && scCurrentQueue3Task->info.type == TYPE_TO_CHECK) { return 0; }

    cur = &scQueue3Head->info;
    while (cur != NULL) {
        if (cur->type == TYPE_TO_CHECK) { return 0; }
        cur = cur->next;
    }

    if (D_80045034_40844 != D_80045035_40845) { return 0; }

    return 1;
}

// insert into task (command?) priority queue?
void func_80000C64(SCTaskInfo *newTask) {
    SCTaskInfo *csr;

    // find task with priority higher than arg0
    csr = D_80044EC8_406D8;
    while (csr != NULL && csr->priority < newTask->priority) { csr = csr->prev; }

    // insert new task into queue
    newTask->prev = csr;
    if (csr != NULL) {
        newTask->next = csr->next;
        csr->next     = newTask;
    } else {
        newTask->next   = scMainQueueHead;
        scMainQueueHead = newTask;
    }

    csr = newTask->next;
    if (csr != NULL) {
        csr->prev = newTask;
    } else {
        D_80044EC8_406D8 = newTask;
    }
}

// 80000CF4
void scMainQueueRemove(SCTaskInfo *task) {
    if (task->prev != NULL) {
        task->prev->next = task->next;
    } else {
        scMainQueueHead = task->next;
    }

    if (task->next != NULL) {
        task->next->prev = task->prev;
    } else {
        D_80044EC8_406D8 = task->prev;
    }
}

// 80000D44
// add to scPausedQueueHead/D_80044ED8_406E8 priorirty queue
void scPausedQueueAdd(SCTaskGfx *task) {
    SCTaskInfo *info;

    info = &D_80044ED8_406E8->info;
    while (info != NULL && info->priority < task->info.priority) { info = info->prev; }

    task->info.prev = info;
    if (info != NULL) {
        task->info.next = info->next;
        info->next   = &task->info;
    } else {
        task->info.next = &scPausedQueueHead->info;
        scPausedQueueHead = task;
    }

    info = task->info.next;
    if (info != NULL) {
        info->prev = &task->info;
    } else {
        D_80044ED8_406E8 = task;
    }
}

// remove from scPausedQueueHead/D_80044ED8_406E8 queue
void func_80000DD4(SCTaskGfx *task) {
    if (task->info.prev != NULL) {
        task->info.prev->next = task->info.next;
    } else {
        scPausedQueueHead = (void *)task->info.next;
    }

    if (task->info.next != NULL) {
        task->info.next->prev = task->info.prev;
    } else {
        D_80044ED8_406E8 = (void *)task->info.prev;
    }
}

// scQueue3Add
// append to head of scQueue3Head/D_80044EE0_406F0 queue
void func_80000E24(SCTaskGfx *task) {
    task->info.next = NULL;
    task->info.prev = &D_80044EE0_406F0->info;
    if (D_80044EE0_406F0 != NULL) {
        D_80044EE0_406F0->info.next = &task->info;
    } else {
        scQueue3Head = task;
    }
    D_80044EE0_406F0 = task;
}

// remove from scQueue3Head/D_80044EE0_406F0 queue
void func_80000E5C(SCTaskGfx *task) {
    if (task->info.prev != NULL) {
        task->info.prev->next = task->info.next;
    } else {
        scQueue3Head = (void *)task->info.next;
    }

    if (task->info.next != NULL) {
        task->info.next->prev = task->info.prev;
    } else {
        D_80044EE0_406F0 = (void *)task->info.prev;
    }
}

void func_80000EAC(void) {
    D_80044EE8_406F8 = D_80044F38_40748;
    osViSetMode(&D_80044EE8_406F8);
    osViBlack(D_80044FBC_407CC.blackout);
    D_80044F88_40798[0] = 0;
}

// also non matching in snap sys/sched
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
#pragma GLOBAL_ASM("asm/nonmatchings/sys/thread3/func_80000F30.s")
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
// 800017B8
void scSetNextFrameBuffer(void *arg0) {
    void *temp;

    if (D_80044F88_40798[0] != 0) {
        if (D_80045020_40830 == 0) { func_80000EAC(); }
    }

    if (scUseCustomSwapBufferFunc != 0) {
        osSendMesg(scCustomSwapBufferQueue, (OSMesg)1, OS_MESG_NOBLOCK);
        if ((intptr_t)arg0 == -1) {
            D_80044FA8_407B8 = scNextFrameBuffer;
            scNextFrameBuffer = NULL;
        } else {
            D_80044FA8_407B8 = arg0;
        }
    } else {
        if ((intptr_t)arg0 == -1) {
            func_80001764(scNextFrameBuffer);
            // permutater solution
            // clang-format off
            temp = scNextFrameBuffer; if (temp == scUnkFrameBuffer) { 
                D_80044FA4_407B4 = 1; 
            }
            // clang-format on
            D_80044FA8_407B8 = temp;
            scNextFrameBuffer = NULL;
        } else {
            func_80001764((void *)arg0);
            D_80044FA8_407B8 = arg0;
        }
    }
    // OS_CYCLES_TO_NSEC?
    D_80044FB4_407C4 = (u32)((u32)(osGetCount() - scTimestampSetFb) / 0xB9BU);
}

// 800018E0
void scExecuteGfxTask(SCTaskGfx *arg0) {
    if (scCurrentGfxTask != 0) {
        osSpTaskYield();
        scCurrentGfxTask->info.state = 4;
        scPausedQueueAdd(scCurrentGfxTask);
        arg0->info.state = 3;
    } else {
        osSpTaskStart(&arg0->task);
        arg0->info.state = 2;
    }
    scCurrentGfxTask = arg0;
}

// 80001968
void scExecuteAudioTask(SCTaskGfx *arg0) {
    scTimestampAudioTaskStarted = osGetCount();

    if ((scCurrentGfxTask != NULL) && (scCurrentGfxTask->info.state == 2)) {
        osSpTaskYield();
        scCurrentGfxTask->info.state = 4;
        arg0->info.state       = 3;
    } else {
        osSpTaskStart(&arg0->task);
        arg0->info.state = 2;
    }
    scCurrentAudioTask = arg0;
}

// 80001A00
s32 scExecuteTask(SCTaskInfo *task);
#ifdef NON_MATCHING
s32 scExecuteTask(SCTaskInfo* task) {
    s32 ret = 0;
    UNUSED s32 pad[4]; // required to match
    SCTaskInfo* sp34[2];

    switch (task->type) {
        case SC_TASK_TYPE_GFX: {
            SCTaskGfx* t = (void*) task;

            if (t->unk68 != NULL) {
                *t->unk68 |= (uintptr_t) scNextFrameBuffer;
                osWritebackDCache(t->unk68, sizeof(s32*));
            }
            if ((uintptr_t) t->task.t.output_buff == (uintptr_t) -1) {
                t->task.t.output_buff = (u64*) ((uintptr_t) scRDPBuffer + scRDPOutputBufferUsed);
                osWritebackDCache(&t->task.t.output_buff, sizeof(u64*));
            }
            if (t->unk74 == 1) {
                osInvalDCache(&scUnknownU64, sizeof(scUnknownU64));
            }
            scExecuteGfxTask(t);
            ret = 1;
            break;
        }
        case SC_TASK_TYPE_AUDIO: {
            SCTaskAudio* t = (void*) task;

            osWritebackDCacheAll();
            scExecuteAudioTask(t);
            ret = 1;
            break;
        }
        case SC_TASK_TYPE_ADD_CLIENT: {
            SCTaskAddClient* t = (void*) task;
            SCClient* temp;

            temp = t->client;
            temp->next = scClientList;
            scClientList = temp;

            if (t->info.mq != NULL) {
                osSendMesg(t->info.mq, (OSMesg) t->info.retVal, OS_MESG_NOBLOCK);
            }
            break;
        }
        case SC_TASK_TYPE_VI: {
            SCTaskVi* t = (void*) task;

            func_80000F30(t->width, t->height, t->flags, t->edgeOffsetLeft, t->edgeOffsetRight, t->edgeOffsetTop, t->edgeOffsetBottom);

            if (t->info.mq != NULL) {
                osSendMesg(t->info.mq, (OSMesg) t->info.retVal, OS_MESG_NOBLOCK);
            }
            break;
        }
        case SC_TASK_TYPE_FRAMEBUFFERS: {
            SCTaskFb* t = (void*) task;
            s32 i;

            for (i = 0; i < ARRAY_COUNT(scFrameBuffers); i++) {
                scFrameBuffers[i] = t->unk24[i];
            }

            if (t->info.mq != NULL) {
                osSendMesg(t->info.mq, (OSMesg) t->info.retVal, OS_MESG_NOBLOCK);
            }
            break;
        }
        case SC_TASK_TYPE_GFX_END: {
            SCTaskGfxEnd* t = (void*) task;
            SCTaskGfx* v1 = NULL;
            SCTaskInfo* v0;

            if (scCurrentGfxTask != NULL && scCurrentGfxTask->info.type == SC_TASK_TYPE_GFX && scCurrentGfxTask->taskId == t->taskId) {
                v1 = scCurrentGfxTask;
            }

            v0 = &scPausedQueueHead->info;
            while (v0 != NULL) {
                if (v0->type == SC_TASK_TYPE_GFX) {
                    if (((SCTaskGfx*) v0)->taskId == t->taskId) {
                        v1 = (void*) v0;
                    }
                }
                v0 = v0->next;
            }

            v0 = scMainQueueHead;
            while (v0 != NULL) {
                if (v0->type == SC_TASK_TYPE_GFX) {
                    if (((SCTaskGfx*) v0)->taskId == t->taskId) {
                        v1 = (void*) v0;
                    }
                }

                v0 = v0->next;
            }

            v0 = &scCurrentQueue3Task->info;
            if (v0 != NULL) {
                if (v0->type == SC_TASK_TYPE_GFX) {
                    if (scCurrentGfxTask->taskId == t->taskId) {
                        v1 = (void*) v0;
                    }
                }
            }

            v0 = &scQueue3Head->info;
            while (v0 != NULL) {
                if (v0->type == SC_TASK_TYPE_GFX) {
                    if (((SCTaskGfx*) v0)->taskId == t->taskId) {
                        v1 = (void*) v0;
                    }
                }
                v0 = v0->next;
            }

            if (v1 != NULL) {
                v1->info.retVal = t->info.retVal;
                v1->info.mq = t->info.mq;
                v1->fb = t->fb;
            } else {
                if (t->fb != NULL) {
                    scSetNextFrameBuffer(t->fb);
                }

                if (t->info.mq != NULL) {
                    osSendMesg(t->info.mq, (OSMesg) t->info.retVal, OS_MESG_NOBLOCK);
                }
            }
            break;
        }
        case SC_TASK_TYPE_NOP:
            if (task->mq != NULL) {
                osSendMesg(task->mq, (OSMesg) task->retVal, OS_MESG_NOBLOCK);
            }
            break;
        case SC_TASK_TYPE_RDP_BUFFER: {
            SCTaskRDPBuffer* t = (void*) task;

            scRDPBuffer = t->buffer;
            scRDPBufferCapacity = t->size;
            if (t->info.mq != NULL) {
                osSendMesg(t->info.mq, (OSMesg) t->info.retVal, OS_MESG_NOBLOCK);
            }
            break;
        }
        case SC_TASK_TYPE_CUSTOM_BUFFERING: {
            SCTaskType9* t = (void*) task;

            scUseCustomSwapBufferFunc = TRUE;
            scCustomSwapBufferQueue = t->unk24;
            if (t->info.mq != NULL) {
                osSendMesg(t->info.mq, (OSMesg) t->info.retVal, OS_MESG_NOBLOCK);
            }
            break;
        }
        case SC_TASK_TYPE_DEFAULT_BUFFERING:
            scUseCustomSwapBufferFunc = FALSE;
            if (task->mq != NULL) {
                osSendMesg(task->mq, (OSMesg) task->retVal, OS_MESG_NOBLOCK);
            }
            break;
        case SC_TASK_TYPE_11: {
            SCTaskInfo* a0 = scMainQueueHead;
            while (a0 != NULL) {
                if (a0->type == SC_TASK_TYPE_GFX || a0->type == SC_TASK_TYPE_VI) {
                    sp34[0] = a0->next;
                    scMainQueueRemove(a0);
                    a0 = sp34[0];
                } else {
                    a0 = a0->next;
                }
            }

            scUnkFrameBuffer = NULL;
            if (task->mq != NULL) {
                osSendMesg(task->mq, (OSMesg) task->retVal, OS_MESG_NOBLOCK);
            }
            break;
        }
    }
    return ret;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/thread3/scExecuteTask.s")
#endif /* NON_MATCHING */


// 80001E64
void scExecuteTasks(void) {
    s32 phi_a0;
    s32 phi_v0; // cur "priority"
    s32 phi_v1;
    SCTaskInfo *phi_s0;  // cur
    SCTaskInfo *temp_s1; // temp for cur
    s32 phi_s2 = 0;
    s32 phi_s4; // "priority" of scPausedQueueHead
    s32 phi_s7; // "priority" of scCurrentGfxTask or scCurrentAudioTask

    phi_s7 = scCurrentGfxTask != NULL ? scCurrentGfxTask->info.priority : -1;

    if (scCurrentAudioTask != NULL) { phi_s7 = scCurrentAudioTask->info.priority; }

    phi_s4 = scPausedQueueHead != NULL ? scPausedQueueHead->info.priority : -1;

    phi_s0 = scMainQueueHead;
    while (phi_s2 == 0) {
        phi_v0 = phi_s0 != NULL ? phi_s0->priority : -1;

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
                    osSpTaskStart(&scPausedQueueHead->task);
                    phi_s2                       = 1;
                    scPausedQueueHead->info.state = 2;
                    scCurrentGfxTask             = scPausedQueueHead;
                    func_80000DD4(scPausedQueueHead);
                    break;
                case 1:
                    if (phi_s0->fnCheck == NULL || phi_s0->fnCheck(phi_s0) != 0) {
                        phi_s2  = scExecuteTask(phi_s0);
                        temp_s1 = phi_s0->next;
                        scMainQueueRemove(phi_s0);
                        phi_s0 = temp_s1;
                    } else {
                        phi_s0 = phi_s0->next;
                    }
                    break;
            }
        }
    }
}

void func_80001FF4(void) {
    if (scCurrentQueue3Task == NULL && scQueue3Head != NULL) {
        scCurrentQueue3Task = scQueue3Head;
        func_80000E5C(scQueue3Head);
        scCurrentQueue3Task->info.state = 2;
        osDpSetNextBuffer(scCurrentQueue3Task->task.t.output_buff, scCurrentQueue3Task->rdpBufSize);
    }
}

void func_8000205C(void) {
    MqListNode *cur;
    // temp usages are needed to match
    MqListNode *temp;

    D_8004501C_4082C += 1;
    cur = scClientList;
    while (cur != NULL) {
        temp = cur;
        osSendMesg(temp->mq, (OSMesg)1, 0);
        cur = cur->next;

        if (temp->mq) { }
    }

    func_800016D8();
    scExecuteTasks();
}

// 800020D0
void scHandleSPTaskDone(void) {
    if (scCurrentAudioTask != NULL && scCurrentAudioTask->info.state == SC_TASK_STATE_RUNNING) {
        osSendMesg(scCurrentAudioTask->info.mq, (OSMesg) 0, OS_MESG_NOBLOCK);
        scCurrentAudioTask = NULL;
        scExecuteTasks();
        scTimeSpentAudio = (osGetCount() - scTimestampAudioTaskStarted) / 2971;
        return;
    }

    if (scCurrentGfxTask != NULL && scCurrentGfxTask->info.state == SC_TASK_STATE_SUSPENDING) {
        if (osSpTaskYielded(&scCurrentGfxTask->task) == OS_TASK_YIELDED) {
            scCurrentGfxTask->info.state = SC_TASK_STATE_SUSPENDED;
            scPausedQueueAdd(scCurrentGfxTask);
            scCurrentGfxTask = NULL;
        } else {
            scCurrentGfxTask->info.state = SC_TASK_STATE_STOPPED;
        }
        osSpTaskStart(&scCurrentAudioTask->task);
        scCurrentAudioTask->info.state = SC_TASK_STATE_RUNNING;
    }

    if (scCurrentGfxTask != NULL && scCurrentGfxTask->info.unk18 == 1 && scCurrentGfxTask->info.state != SC_TASK_STATE_SUSPENDED) {
        if (scCurrentGfxTask->info.type == SC_TASK_TYPE_GFX && scCurrentGfxTask->unk74 == 1) {
            osInvalDCache(&scUnknownU64, sizeof(scUnknownU64));
            scCurrentGfxTask->rdpBufSize = scUnknownU64;
            scRDPOutputBufferUsed += (s32) scUnknownU64;
            scRDPOutputBufferUsed = OS_DCACHE_ROUNDUP_SIZE(scRDPOutputBufferUsed);
            if (scRDPOutputBufferUsed < scUnknownU64) {
                syErrorPrintf("rdp_output_buff over !! size = %d\n byte", scRDPOutputBufferUsed);
                while (TRUE);
            }

            scCurrentGfxTask->info.state = SC_TASK_STATE_QUEUED;
            func_80000E24(scCurrentGfxTask);
            func_80001FF4();
        }
        scCurrentGfxTask = NULL;
        scExecuteTasks();
        return;
    }

    if (scCurrentGfxTask != NULL && scCurrentGfxTask->info.unk18 == 2 && scCurrentGfxTask->info.type == SC_TASK_TYPE_GFX) {
        scCurrentGfxTask->info.state = SC_TASK_STATE_STOPPED;
        if (!(scCurrentGfxTask->unk7C & 2)) {
            scCurrentGfxTask->unk7C |= 1;
        }
    }
}

void func_80002340(void) {
    union CheckedPtr checked; // could just be a void *temp

    if (scCurrentGfxTask != NULL && scCurrentGfxTask->info.unk18 == 2) {
        if (scCurrentGfxTask->info.type == 1) {
            checked.ptr = scCurrentGfxTask->fb;
            if (checked.ptr != NULL) { scSetNextFrameBuffer(checked.ptr); }

            if (scCurrentGfxTask->info.mq != NULL) {
                osSendMesg(scCurrentGfxTask->info.mq, (OSMesg)scCurrentGfxTask->info.retVal, OS_MESG_NOBLOCK);
            }

            if (scCurrentGfxTask->info.state == 4) {
                osSpTaskStart(&scCurrentAudioTask->task);
                scCurrentAudioTask->info.state = 2;
            }
        }

        scCurrentGfxTask = NULL;
        scExecuteTasks();
    } else if (scCurrentQueue3Task != NULL) {
        checked.ptr = scCurrentQueue3Task->fb;
        if (checked.ptr != NULL) { scSetNextFrameBuffer(checked.ptr); }

        if (scCurrentQueue3Task->info.mq != NULL) {
            osSendMesg(scCurrentQueue3Task->info.mq, (OSMesg)scCurrentQueue3Task->info.retVal, OS_MESG_NOBLOCK);
        }

        scCurrentQueue3Task = NULL;
        func_80001FF4();
    } else if (scPausedQueueHead != NULL && scPausedQueueHead->info.unk18 == 2) {
        if (scPausedQueueHead->info.type == 1) {
            checked.ptr = scPausedQueueHead->fb;
            if (checked.ptr != NULL) { scSetNextFrameBuffer(checked.ptr); }

            if (scPausedQueueHead->info.mq != NULL) {
                osSendMesg(scPausedQueueHead->info.mq, (OSMesg)scPausedQueueHead->info.retVal, OS_MESG_NOBLOCK);
            }

            func_80000DD4(scPausedQueueHead);
        }
        scExecuteTasks();
    }
}

// might only take a struct SpTaskInfo *
void func_800024EC(SCTaskInfo *task) {
    task->state = 1;
    func_80000C64(task);
    scExecuteTasks();
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
    scClientList= NULL;
    scMainQueueHead = D_80044EC8_406D8 = scCurrentGfxTask = scCurrentAudioTask = scPausedQueueHead = D_80044ED8_406E8 = NULL;
    scCurrentQueue3Task = scQueue3Head = D_80044EE0_406F0 = NULL;
    D_80044F88_40798[0]                                    = 0;
    D_80044FA8_407B8 = scNextFrameBuffer = scUnkFrameBuffer = NULL;
    scUseCustomSwapBufferFunc                                       = 0;
    D_80045018_40828                                       = func_800029D8;
    D_80045020_40830                                       = 0;
    D_80045024_40834                                       = -1;
    D_8004501C_4082C                                       = 0;
    D_80045034_40844 = D_80045035_40845 = 0;

    switch (osTvType) {
        case OS_TV_NTSC:
            mode             = osViModeNtscLan1;
            D_80044EE8_406F8 = mode;
            D_80044F38_40748 = mode;
            break;
        case OS_TV_PAL:
            while (TRUE) { }
            break;
        case OS_TV_MPAL:
            mode             = osViModeMpalLan1;
            D_80044EE8_406F8 = mode;
            D_80044F38_40748 = mode;
            break;
    }
    // 0x10016
    D_80044EE8_406F8.comRegs.ctrl =
        VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_DIVOT_ON | VI_CTRL_DITHER_FILTER_ON;
    D_80044F38_40748.comRegs.ctrl =
        VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_DIVOT_ON | VI_CTRL_DITHER_FILTER_ON;
    osViSetMode(&D_80044EE8_406F8);
    osViBlack(TRUE);

    D_80044FBC_407CC.unk_b80      = TRUE;
    D_80044FBC_407CC.serrate      = FALSE;
    D_80044FBC_407CC.pixelSize32  = FALSE;
    D_80044FBC_407CC.gamma        = FALSE;
    D_80044FBC_407CC.blackout     = TRUE;
    D_80044FBC_407CC.unk_b04      = FALSE;
    D_80044FBC_407CC.gammaDither  = TRUE;
    D_80044FBC_407CC.ditherFilter = TRUE;
    D_80044FBC_407CC.divot        = TRUE;

    osCreateMesgQueue(&scTaskQueue, D_80044FD8_407E8, ARRAY_COUNT(D_80044FD8_407E8));
    osViSetEvent(&scTaskQueue, (OSMesg)INTR_VRETRACE, 1);
    osSetEventMesg(OS_EVENT_SP, &scTaskQueue, (OSMesg)INTR_SP_TASK_DONE);
    osSetEventMesg(OS_EVENT_DP, &scTaskQueue, (OSMesg)INTR_DP_FULL_SYNC);
    osSetEventMesg(OS_EVENT_PRENMI, &scTaskQueue, (OSMesg)INTR_SOFT_RESET);

    osSendMesg(&sSYMainThreadingQueue, (OSMesg)1, OS_MESG_NOBLOCK);

    while (TRUE) {
        osRecvMesg(&scTaskQueue, &intrMsg, OS_MESG_BLOCK);

        switch ((uintptr_t)intrMsg) {
            case INTR_VRETRACE: func_8000205C(); break;
            case INTR_SP_TASK_DONE:
                scHandleSPTaskDone();
                if (D_80045020_40830 == 1 && D_80045024_40834 == -1) { D_80045024_40834 = osAfterPreNMI(); }
                break;
            case INTR_DP_FULL_SYNC: func_80002340(); break;
            case INTR_SOFT_RESET:
                if (D_80045018_40828 != NULL) { D_80045018_40828(); }
                break;
            default:
                if (D_80045020_40830 == 0) {
                    // is this a pointer to only the info struct?
                    func_800024EC((SCTaskInfo *)intrMsg);
                }
        }
    }
}

void func_800029D8(void) {
    s32 i;

    D_80045020_40830 = 1;
    osViSetYScale(1.0);
    osViBlack(TRUE);

    for (i = 0; i < 4; i++) {
        func_800044B4(i);
        func_80004494(i);
    }

    D_80045024_40834 = osAfterPreNMI();
}

void unref_80002A50(void (*fn)(void)) {
    D_80045018_40828 = fn;
}
