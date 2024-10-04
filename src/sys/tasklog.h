#ifndef _SYTASKLOG_H_
#define _SYTASKLOG_H_

#include <sys/malloc.h>
#include <sys/thread3.h>
#include <sys/objdef.h>

#include <PR/mbi.h>
#include <PR/ultratypes.h>

typedef struct syTasklogDLBuffer
{
	/* 0x00 */ Gfx *start;
	/* 0x04 */ u32 length;

} syTasklogDLBuffer; // size = 0x08

typedef struct syTasklogBufferSetup
{
	/* 0x00 */ u16 unk00;
	/* 0x04 */ void (*func_update)(void);
	/* 0x08 */ void (*func_draw)(void);
	/* 0x0C */ void *arena_start;           // Start of allocatable memory pool
	/* 0x10 */ size_t arena_size;           // Size of allocatable memory pool for heap; usually from end of last overlay's .bss section to start of subsys (ovl1)
	/* 0x14 */ u32 unk14; // count?
	/* 0x18 */ s32 contexts_num;               // Number of contexts? (what even is a task?)
	/* 0x1C */ u32 unk1C;
	/* 0x20 */ u32 unk20;
	/* 0x24 */ u32 unk24;
	/* 0x28 */ u32 unk28;
	/* 0x2C */ u32 unk2C;
	/* 0x30 */ u16 unk30;
	/* 0x34 */ s32 unk34;
	/* 0x38 */ void (*proc_lights)(Gfx**); 	// Lighting callback?
	/* 0x3C */ void (*proc_controller)(); // controller read callback?

} syTasklogBufferSetup; // size == 0x40

typedef struct syTasklogSetup
{
	/* 0x00 */ syTasklogBufferSetup buffer_setup;
	/* 0x40 */ u32 gobjthreads_num;
	/* 0x44 */ u32 threadstack_size;
	/* 0x48 */ u32 threadstacks_num;
	/* 0x4C */ s32 unk4C;
	/* 0x50 */ u32 gobjprocs_num;
	/* 0x54 */ u32 gobjs_num;
	/* 0x58 */ u32 gobj_size;
	/* 0x5C */ u32 ommtxs_num;
	/* 0x60 */ void *unk60;
	/* 0x64 */ void (*proc_eject)(DObjDynamicStore*); 	// fn pointer void(*)(struct DObjDynamicStore *)
	/* 0x68 */ u32 aobjs_num;
	/* 0x6C */ u32 mobjs_num;
	/* 0x70 */ u32 dobjs_num;
	/* 0x74 */ u32 dobj_size;
	/* 0x78 */ u32 sobjs_num;
	/* 0x7C */ u32 sobj_size;
	/* 0x80 */ u32 cameras_num;
	/* 0x84 */ u32 camera_size;
	/* 0x88 */ void (*func_start)(void);	// Scene start function

} syTasklogSetup; // size >= 0x8C

extern u32 sSYTasklogUpdateCount;
extern u32 dSYTasklogFrameDrawCount;
extern Gfx *gSYTasklogDLHeads[4];
extern Gfx *sSYTasklogDLBranches[4];
extern syMallocRegion gSYTasklogGraphicsHeap;
extern syMallocRegion gSYTasklogGeneralHeap;
// Gfx *? Gfx
extern u32 sSYTasklogUpdateDeltaTime;
// Gfx *? Gfx
extern u32 sSYTasklogFrameDeltaTime;
extern u16 D_80046626;
extern u16 D_80046628;
extern s32 gSYTasklogTaskID;

extern void func_800048D0(SCTaskGfxCallback arg0);
extern void func_800048F8(Gfx **dl);
extern void* syTasklogMalloc(size_t size, u32 alignment);
extern void func_80004F78(void);
extern void syTasklogAppendGfxUcodeLoad(Gfx **dlist, u32 ucodeIdx);
extern void func_800053CC(void);
extern void func_800057C8(void);
extern void syTasklogSetLoadScene(void);
extern void syTasklogInit(syTasklogSetup *arg);
extern void func_80006B80(void);

#endif
