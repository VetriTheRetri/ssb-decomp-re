#ifndef SYS_THREAD_3_H
#define SYS_THREAD_3_H

#include <macros.h>

#include <PR/os.h>
#include <PR/sptask.h>
#include <PR/ultratypes.h>

enum SCTaskType {
    SC_TASK_TYPE_GFX = 1,
    SC_TASK_TYPE_AUDIO = 2,
    SC_TASK_TYPE_ADD_CLIENT = 3,
    SC_TASK_TYPE_VI = 4,
    SC_TASK_TYPE_FRAMEBUFFERS = 5,
    SC_TASK_TYPE_GFX_END = 6,
    SC_TASK_TYPE_NOP = 7,
    SC_TASK_TYPE_RDP_BUFFER = 8,
    SC_TASK_TYPE_CUSTOM_BUFFERING = 9,
    SC_TASK_TYPE_DEFAULT_BUFFERING = 10,
    SC_TASK_TYPE_11 = 11
};

enum SCTaskState {
    SC_TASK_STATE_0 = 0,
    SC_TASK_STATE_QUEUED = 1,
    SC_TASK_STATE_RUNNING = 2,
    SC_TASK_STATE_PRIORITY_PENDING = 3,
    SC_TASK_STATE_SUSPENDING = 4,
    SC_TASK_STATE_SUSPENDED = 5,
    SC_TASK_STATE_STOPPED = 6
};

struct SCTaskInfo;
struct SCTaskGfx;

typedef s32 (*SCTaskCallback)(struct SCTaskInfo *);
typedef s32 (*SCTaskGfxCallback)(struct SCTaskGfx *);

typedef struct SCClient {
    /* 0x00 */ struct SCClient* next;
    /* 0x04 */ OSMesgQueue* mq;
} SCClient; // size = 0x8

// This may be the real form of `struct SpMqInfo`, but I'll have to double check
// thread3.c to see if I can replace all forms...
typedef struct SCTaskInfo {
    /* 0x00 */ s32 type; // SCTaskType
    /* 0x04 */ s32 priority;
    /* 0x08 */ s32 state; // SCTaskState
    /* 0x0C */ struct SCTaskInfo *next;
    /* 0x10 */ struct SCTaskInfo *prev;
    /* 0x14 */ SCTaskCallback fnCheck; // if set, the task is not executed until this function returns TRUE
    /* 0x18 */ s32 unk18;
    /* 0x1C */ s32 retVal;
    /* 0x20 */ OSMesgQueue *mq;
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
    /* 0x6C */ s32 *fb; // checked type? (-1 is meaningful)
    /* 0x70 */ s32 framebuffer_id; // frame buffer idx for D_80044F90
    /* 0x74 */ s32 unk74;
    /* 0x78 */ s32 rdp_buffer_size;
    /* 0x7C */ s32 unk7C;
    /* 0x80 */ u32 task_id;
    /* 0x84 */ s32 unk_84;

} SCTaskGfx; // size = 0x84

typedef struct {
    /* 0x00 */ SCTaskInfo info;
    /* 0x28 */ OSTask task;
} SCTaskAudio; // size = 0x68

typedef struct {
    /* 0x00 */ SCTaskInfo info;
    /* 0x24 */ s32 width;
    /* 0x28 */ s32 height;
    /* 0x2C */ s32 flags;
    /* 0x30 */ s16 edgeOffsetLeft;
    /* 0x32 */ s16 edgeOffsetRight;
    /* 0x34 */ s16 edgeOffsetTop;
    /* 0x36 */ s16 edgeOffsetBottom;
} SCTaskVi; // size == 0x38

typedef struct {
    /* 0x00 */ SCTaskInfo info;
    /* 0x24 */ void* unk24[3]; // frame buffer pointers
} SCTaskFb;                    // size == 0x30

typedef struct {
    /* 0x00 */ SCTaskInfo info;
    /* 0x24 */ void* buffer;
    /* 0x28 */ s32 size;
} SCTaskRDPBuffer; // size >= 0x2C

typedef struct {
    /* 0x00 */ SCTaskInfo info;
    /* 0x24 */ SCClient* client;
} SCTaskAddClient; // size == 0x28

typedef struct SCTaskGfxEnd
{
    /* 0x00 */ SCTaskInfo info;
    /* 0x24 */ void* fb;
    /* 0x28 */ u32 task_id;

} SCTaskGfxEnd; /* size == 0x2C */

typedef struct SCTaskType9
{
    /* 0x00 */ SCTaskInfo info;
    /* 0x24 */ OSMesgQueue *unk24;

} SCTaskType9; // size >= 0x28

extern OSMesgQueue scTaskQueue;
extern u32 D_80044FA4_407B4;
extern u32 D_80044FB4_407C4;
extern u32 scTimeSpentAudio;
extern u64 scUnknownU64;
extern s32 D_80045020_40830;

extern void func_80000970(SCTaskInfo *arg0);
extern void scAddClient(SCClient *arg0, OSMesgQueue *mq, OSMesg *msg, u32 count);
extern s32 scCheckGfxTaskDefault(SCTaskGfx *t);
extern void thread3_scheduler(void *arg);
extern s32 func_80000B54(UNUSED SCTaskInfo *t);

#endif /* SYS_THREAD_3_H */
