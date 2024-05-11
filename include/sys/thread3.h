#ifndef SYS_THREAD_3_H
#define SYS_THREAD_3_H

#include <macros.h>

#include <PR/os.h>
#include <PR/sptask.h>
#include <PR/ultratypes.h>

struct SCTaskInfo;
struct SCTaskGfx;

typedef s32 (*SCTaskCallback)(struct SCTaskInfo *);
typedef s32 (*SCTaskGfxCallback)(struct SCTaskGfx *);

struct MqListNode {
    /* 0x00 */ struct MqListNode *next;
    /* 0x04 */ OSMesgQueue *mq;
}; // size = 0x8

// This may be the real form of `struct SpMqInfo`, but I'll have to double check
// thread3.c to see if I can replace all forms...
struct SCTaskInfo {
    /* 0x00 */ s32 unk00; // type?
    /* 0x04 */ s32 unk04; // priority?
    /* 0x08 */ s32 unk08;
    /* 0x0C */ struct SCTaskInfo *unk0C; // next (smaller unk04?)
    /* 0x10 */ struct SCTaskInfo *unk10; // prev (larger unk04?)
    /* 0x14 */ SCTaskCallback func;      // run function?
    /* 0x18 */ s32 unk18;
    /* 0x1C */ s32 unk1C;
    /* 0x20 */ OSMesgQueue *unk20;
}; // size == 0x24

// Task SubTypes:
// 1  - OSTask (struct SCTaskGfx )
// 2  - Also something with an OSTask (using struct SCTaskGfx for now)
// 3  - Something with Mesq queueing?
// 4  - OsViMode changing?
// 5  - frame buffer pointers?
// 6  - SCTaskGfxEnd
// 7  - nop?
// 8  - ?
// 9  - passed an OSMesgQueue
// 10 - Sets D_80045010..? no special fields
// 11 - Remove all Type1 and Type4 from D_80044EC4 queue

struct SCTaskGfx {
    /* 0x00 */ struct SCTaskInfo info;
    /* 0x28 */ OSTask task;
    /* 0x68 */ u32 *unk68;
    /* 0x6C */ s32 *unk6C; // checked type? (-1 is meaningful)
    /* 0x70 */ s32 unk70;  // frame buffer idx for D_80044F90
    /* 0x74 */ s32 unk74;
    /* 0x78 */ s32 unk78;
    /* 0x7C */ s32 unk7C;
    /* 0x80 */ u32 unk80; // gfx task id?
};                        // size = 0x84

struct SCTaskType3 {
    /* 0x00 */ struct SCTaskInfo info;
    /* 0x24 */ struct MqListNode *unk24;
}; // size == 0x28

struct SCTaskType4 {
    /* 0x00 */ struct SCTaskInfo info;
    /* 0x24 */ s32 unk24; // screen width?
    /* 0x28 */ s32 unk28; // screen height?
    /* 0x2C */ s32 unk2C;
    /* 0x30 */ s16 unk30;
    /* 0x32 */ s16 unk32;
    /* 0x34 */ s16 unk34;
    /* 0x36 */ s16 unk36;
}; // size == 0x38

struct SCTaskType5 {
    /* 0x00 */ struct SCTaskInfo info;
    /* 0x24 */ void *unk24[3]; // frame buffer pointers
};                             // size == 0x30

struct SCTaskGfxEnd {
    /* 0x00 */ struct SCTaskInfo info;
    /* 0x24 */ void *unk24;
    /* 0x28 */ u32 unk28; // gfx task id?
};                        /* size == 0x2C */

struct SCTaskType8 {
    /* 0x00 */ struct SCTaskInfo info;
    /* 0x24 */ void *unk24;
    /* 0x28 */ s32 unk28; // size
};                        // size >= 0x2C

struct SCTaskType9 {
    /* 0x00 */ struct SCTaskInfo info;
    /* 0x24 */ OSMesgQueue *unk24;
}; // size >= 0x28

extern OSMesgQueue gScheduleTaskQueue;
extern u32 D_80044FA4;
extern u32 D_80044FB4;
extern u32 D_80044FB8;
extern s64 D_80044FC0;
extern s32 D_80045020;

extern void func_80000970(struct SCTaskInfo *arg0);
extern void func_800009D8(struct MqListNode *arg0, OSMesgQueue *mq, OSMesg *msg, u32 count);
extern s32 unref_80000A34(struct SCTaskGfx *t);
extern void thread3_scheduler(void *arg);
extern s32 func_80000B54(UNUSED struct SCTaskInfo *t);

#endif /* SYS_THREAD_3_H */
