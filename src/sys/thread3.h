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

typedef struct MqListNode
{
    /* 0x00 */ struct MqListNode *next;
    /* 0x04 */ OSMesgQueue *mq;

} MqListNode; // size = 0x8

// This may be the real form of `struct SpMqInfo`, but I'll have to double check
// thread3.c to see if I can replace all forms...
typedef struct SCTaskInfo
{
    /* 0x00 */ s32 unk00; // type?
    /* 0x04 */ s32 unk04; // priority?
    /* 0x08 */ s32 unk08;
    /* 0x0C */ struct SCTaskInfo *unk0C; // next (smaller unk04?)
    /* 0x10 */ struct SCTaskInfo *unk10; // prev (larger unk04?)
    /* 0x14 */ SCTaskCallback func;      // run function?
    /* 0x18 */ s32 unk18;
    /* 0x1C */ s32 unk1C;
    /* 0x20 */ OSMesgQueue *unk20;

} SCTaskInfo; // size == 0x24

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

typedef struct SCTaskGfx
{
    /* 0x00 */ SCTaskInfo info;
    /* 0x28 */ OSTask task;
    /* 0x68 */ u32 *unk68;
    /* 0x6C */ s32 *unk6C; // checked type? (-1 is meaningful)
    /* 0x70 */ s32 unk70;  // frame buffer idx for D_80044F90
    /* 0x74 */ s32 unk74;
    /* 0x78 */ s32 unk78;
    /* 0x7C */ s32 unk7C;
    /* 0x80 */ u32 unk80; // gfx task id?

} SCTaskGfx; // size = 0x84

typedef struct SCTaskType3
{
    /* 0x00 */ SCTaskInfo info;
    /* 0x24 */ MqListNode *unk24;

} SCTaskType3; // size == 0x28

typedef struct SCTaskType4
{
    /* 0x00 */ SCTaskInfo info;
    /* 0x24 */ s32 unk24; // screen width?
    /* 0x28 */ s32 unk28; // screen height?
    /* 0x2C */ s32 unk2C;
    /* 0x30 */ s16 unk30;
    /* 0x32 */ s16 unk32;
    /* 0x34 */ s16 unk34;
    /* 0x36 */ s16 unk36;

} SCTaskType4; // size == 0x38

typedef struct SCTaskType5
{
    /* 0x00 */ SCTaskInfo info;
    /* 0x24 */ void *unk24[3]; // frame buffer pointers

} SCTaskType5; // size == 0x30

typedef struct SCTaskGfxEnd
{
    /* 0x00 */ SCTaskInfo info;
    /* 0x24 */ void *unk24;
    /* 0x28 */ u32 unk28; // gfx task id?

} SCTaskGfxEnd; /* size == 0x2C */

typedef struct SCTaskType8
{
    /* 0x00 */ SCTaskInfo info;
    /* 0x24 */ void *unk24;
    /* 0x28 */ s32 unk28; // size

} SCTaskType8; // size >= 0x2C

typedef struct SCTaskType9
{
    /* 0x00 */ SCTaskInfo info;
    /* 0x24 */ OSMesgQueue *unk24;

} SCTaskType9; // size >= 0x28

extern OSMesgQueue gScheduleTaskQueue;
extern u32 D_80044FA4_407B4;
extern u32 D_80044FB4_407C4;
extern u32 D_80044FB8_407C8;
extern s64 D_80044FC0_407D0;
extern s32 D_80045020_40830;

extern void func_80000970(SCTaskInfo *arg0);
extern void func_800009D8(MqListNode *arg0, OSMesgQueue *mq, OSMesg *msg, u32 count);
extern s32 unref_80000A34(SCTaskGfx *t);
extern void thread3_scheduler(void *arg);
extern s32 func_80000B54(UNUSED SCTaskInfo *t);

#endif /* SYS_THREAD_3_H */
