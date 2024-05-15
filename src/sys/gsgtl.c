#include "common.h"
#include "sys/gtl.h"

#include "sys/crash.h"
#include "sys/main.h"
#include "sys/ml.h"
#include "sys/obj.h"
#include "sys/rdp_reset.h"
#include "sys/system_00.h"
#include "sys/system_03_1.h"
#include "sys/system_04.h"
#include "sys/thread3.h"
#include "sys/thread6.h"

#include <macros.h>
#include <ssb_types.h>
#include <stddef.h>

#include <PR/mbi.h>
#include <PR/ucode.h>
#include <PR/ultratypes.h>

// structures
struct gsUcode {
    /* 0x00 */ u64 *text;
    /* 0x04 */ u64 *data;
};

struct FnBundle {
    /* 0x00 */ u16 unk00;
    /* 0x04 */ void (*fn04)(void);
    /* 0x08 */ void (*fn08)(struct FnBundle *);
    /* 0x0C */ void (*fn0C)(void);
    /* 0x10 */ void (*fn10)(struct FnBundle *);
}; // size == 0x14 (D_800465F8)

// data
s32 D_8003B6E0 = 0;
u32 D_8003B6E4 = 0;

union WeirdBytewise D_8003B6E8 = {0};

// match Nintendo's name to make the text and data symbols
#define NewUcodeInfo(ucode) \
    { (u64 *)ucode##TextStart, (u64 *)ucode##DataStart }
#define NullUcodeInfo \
    { NULL, NULL }
#define EndUncodeInfoArray NullUcodeInfo

// Ten total ucodes + a terminator?
struct gsUcode D_8003B6EC[11] = {
    NewUcodeInfo(gspF3DEX2_fifo),
    NullUcodeInfo,
    NullUcodeInfo,
    NullUcodeInfo,
    NullUcodeInfo,
    NullUcodeInfo,
    NullUcodeInfo,
    NullUcodeInfo,
    NullUcodeInfo,
    NullUcodeInfo,
    EndUncodeInfoArray,
};

// bss

UNUSED u8 unref80045480[0x10];
OSMesg D_80045490[4];
OSMesgQueue D_800454A0;
u16 D_800454B8;
u16 D_800454BA;
u32 D_800454BC;
OSMesg D_800454C0[1];
OSMesgQueue D_800454C8;
struct MqListNode D_800454E0;
unsigned int *D_800454E8; // pointer to Gfx.w1 (segment base addr?)
OSMesg D_800454F0[3];
OSMesgQueue D_80045500; // sctask end? or for all tasks?
OSMesg D_80045518[1];
OSMesgQueue D_80045520;
u64 D_80045538[SP_DRAM_STACK_SIZE64 + 1];
u64 D_80045940[OS_YIELD_DATA_SIZE / sizeof(u64) + 1];

DObj *sDObjTasks[2];
DObj *D_80046550[2];
DObj *D_80046558[2];
struct SCTaskGfxEnd *D_80046560[2];
struct SCTaskType4 *D_80046568[2];
// is the collection of four `DLBuffer`s something worthy of a typedef?
struct DLBuffer D_80046570[2][4];
Gfx *gDisplayListHead[4];
Gfx *D_800465C0[4];

// from smash remix: Writing 1 to this word will load the screen at current_screen (gSceneData).
u32 D_800465D0;
s32 D_800465D4;
mlBumpAllocRegion gGraphicsHeap;  // D_800465D8
mlBumpAllocRegion gGeneralHeap; // D_800465E8
struct FnBundle D_800465F8;
u32 D_8004660C;
u32 D_80046610;
u32 D_80046614;
void *D_80046618; // u64 *?
u32 D_8004661C;   // size of D_80046618
u32 D_80046620;
u16 D_80046624;
u16 D_80046626; // ucode idx?
u16 D_80046628;
Gfx *D_8004662C;
// offset into sMtxTaskHeaps and sDObjTasks; has to be unsigned
u32 gGtlTaskId;
s32 D_80046634;
s32 D_80046638[2];
s32 D_80046640;
UNUSED s32 unref80046644;
mlBumpAllocRegion sMtxTaskHeaps[2];
void (*D_80046668)(void *); // takes function bundle struct?
SCTaskCallback D_8004666C;  // function pointer?

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_800048D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_800048F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/unref_80004928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/unref_80004934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/init_general_heap.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/gsMemoryAlloc.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_800049B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80004A0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80004AB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/check_buffer_lengths.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80004C5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80004CB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80004D2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80004DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/schedule_gfx_end.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80004EFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80004F78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80005018.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_800051E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80005240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/append_ucode_load.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_800053CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_800057C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80005AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80005BFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/leoInitUnit_atten.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/unref_80005C84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80005C9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80005D10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80005DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_800062B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_800062EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80006350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_800063A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/unref_8000641C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80006548.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/unref_800067E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_8000683C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/unref_80006A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/unref_80006AA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/unref_80006AD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/__osSiRelAccess_B.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/unref_80006B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/unref_80006B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gsgtl/func_80006B80.s")
