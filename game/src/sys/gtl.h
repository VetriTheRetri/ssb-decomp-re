#ifndef SYS_GTL_H
#define SYS_GTL_H

#include "sys/ml.h"
#include "sys/thread3.h"

#include <PR/mbi.h>
#include <PR/ultratypes.h>

struct DLBuffer {
    /* 0x00 */ Gfx *start;
    /* 0x04 */ u32 length;
}; // size = 0x08

struct BufferSetup {
    /* 0x00 */ u16 unk00;
    /* 0x04 */ void (*fn04)(void);
    /* 0x08 */ void (*fn08)(void);
    /* 0x0C */ void *unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14; // count?
    /* 0x18 */ s32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u16 unk30;
    /* 0x34 */ s32 unk34;
    /* 0x38 */ void (*fn38)(Gfx **); // scissor callback?
    /* 0x3C */ void (*fn3C)(void *); // controller read callback?
};                                   // size == 0x40

struct Wrapper683C {
    /* 0x00 */ struct BufferSetup setup;
    /* 0x40 */ u32 numOMThreads;
    /* 0x44 */ u32 omThreadStackSize;
    /* 0x48 */ u32 numOMStacks;
    /* 0x4C */ s32 unk4C;
    /* 0x50 */ u32 numOMProcesses;
    /* 0x54 */ u32 numOMCommons;
    /* 0x58 */ u32 omCommonSize;
    /* 0x5C */ u32 numOMMtx;
    /* 0x60 */ void *unk60;
    /* 0x64 */ void *unk64; // fn pointer void(*)(struct DObjDynamicStore *)
    /* 0x68 */ u32 numOMAobjs;
    /* 0x6C */ u32 numOMMobjs;
    /* 0x70 */ u32 numOMDobjs;
    /* 0x74 */ u32 omDobjSize;
    /* 0x78 */ u32 numOMSobjs;
    /* 0x7C */ u32 omSobjSize;
    /* 0x80 */ u32 numOMCameras;
    /* 0x84 */ u32 omCameraSize;
    /* 0x88 */ void (*unk88)(void);
}; // size >= 0x8C

union WeirdBytewise {
    u32 word;
    u8 parts[4];
};

extern u32 D_8003B6E4;
extern union WeirdBytewise D_8003B6E8;
extern Gfx *gpDisplayListHead[4];
extern Gfx *D_800465C0[4];
extern struct mlBumpAllocRegion gMatrixHeap;
extern struct mlBumpAllocRegion gGeneralHeap;
// Gfx *? Gfx
extern u32 D_80046610;
// Gfx *? Gfx
extern u32 D_80046614;
extern u16 D_80046626;
extern u16 D_80046628;
extern u32 gGtlTaskId;

extern void func_800048D0(SCTaskGfxCallback arg0);
extern void func_800048F8(Gfx **dl);
extern void *hal_alloc(u32 size, u32 alignment);
extern void func_80004F78(void);
extern void append_ucode_load(Gfx **dlist, u32 ucodeIdx);
extern void func_800053CC(void);
extern void func_800057C8(void);
extern void func_80005C74(void);
extern void func_8000683C(struct Wrapper683C *arg);
extern void func_80006B80(void);

#endif /* SYS_GTL_H */
