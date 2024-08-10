#ifndef SYS_GTL_H
#define SYS_GTL_H

#include <sys/ml.h>
#include <sys/thread3.h>

#include <PR/mbi.h>
#include <PR/ultratypes.h>

typedef struct gsDLBuffer
{
	/* 0x00 */ Gfx *start;
	/* 0x04 */ u32 length;

} gsDLBuffer; // size = 0x08

typedef struct gsBufferSetup
{
	/* 0x00 */ u16 unk00;
	/* 0x04 */ void (*fn04)(void);
	/* 0x08 */ void (*fn08)(void);
	/* 0x0C */ void *arena_start;           // Start of free memory
	/* 0x10 */ u32 arena_size;              // Size of free memory for heap; usually from end of last overlay's .bss section to start of submanager (ovl1)
	/* 0x14 */ u32 unk14; // count?
	/* 0x18 */ s32 num_tasks;               // Number of tasks? (what even is a task?)
	/* 0x1C */ u32 unk1C;
	/* 0x20 */ u32 unk20;
	/* 0x24 */ u32 unk24;
	/* 0x28 */ u32 unk28;
	/* 0x2C */ u32 unk2C;
	/* 0x30 */ u16 unk30;
	/* 0x34 */ s32 unk34;
	/* 0x38 */ void (*fn38)(Gfx **); // scissor callback?
	/* 0x3C */ void (*fn3C)(void *); // controller read callback?

} gsBufferSetup; // size == 0x40

typedef struct gsGTLSetupDesc
{
	/* 0x00 */ gsBufferSetup setup;
	/* 0x40 */ u32 num_gobjthreads;
	/* 0x44 */ u32 omthreadstack_size;
	/* 0x48 */ u32 num_omthreadstacks;
	/* 0x4C */ s32 unk4C;
	/* 0x50 */ u32 num_gobjprocs;
	/* 0x54 */ u32 num_gobjs;
	/* 0x58 */ u32 gobj_size;
	/* 0x5C */ u32 num_ommtxes;
	/* 0x60 */ void *unk60;
	/* 0x64 */ void (*proc_eject)(void*); // fn pointer void(*)(struct DObjDynamicStore *)
	/* 0x68 */ u32 num_aobjs;
	/* 0x6C */ u32 num_mobjs;
	/* 0x70 */ u32 num_dobjs;
	/* 0x74 */ u32 dobj_size;
	/* 0x78 */ u32 num_sobjs;
	/* 0x7C */ u32 sobj_size;
	/* 0x80 */ u32 num_cameras;
	/* 0x84 */ u32 camera_size;
	/* 0x88 */ void (*proc_init)(void);                 // Scene init function

} gsGTLSetupDesc; // size >= 0x8C

union WeirdBytewise
{
	u32 word;

	struct
	{
		u8 b0, b1, b2, b3;

	} bytes;
};

extern u32 D_8003B6E4;
extern union WeirdBytewise D_8003B6E8;
extern Gfx *gDisplayListHead[4];
extern Gfx *D_800465C0[4];
extern mlRegion gGraphicsHeap;
extern mlRegion gGeneralHeap;
// Gfx *? Gfx
extern u32 D_80046610;
// Gfx *? Gfx
extern u32 D_80046614;
extern u16 D_80046626;
extern u16 D_80046628;
extern u32 gGtlTaskId;

extern void func_800048D0(SCTaskGfxCallback arg0);
extern void func_800048F8(Gfx **dl);
extern void *gsMemoryAlloc(u32 size, u32 alignment);
extern void func_80004F78(void);
extern void gsAppendGfxUcodeLoad(Gfx **dlist, u32 ucodeIdx);
extern void func_800053CC(void);
extern void func_800057C8(void);
extern void leoInitUnit_atten(void);
extern void gsGTLSceneInit(gsGTLSetupDesc *arg);
extern void func_80006B80(void);

#endif /* SYS_GTL_H */
