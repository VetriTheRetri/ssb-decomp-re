#ifndef _SYTASKLOG_H_
#define _SYTASKLOG_H_

#include <sys/malloc.h>
#include <sys/thread3.h>
#include <sys/objdef.h>

#include <PR/mbi.h>
#include <PR/ultratypes.h>

typedef struct syTaskmanDLBuffer
{
	/* 0x00 */ Gfx *start;
	/* 0x04 */ u32 length;

} syTaskmanDLBuffer; // size = 0x08

typedef struct syTaskmanBufferSetup
{
	/* 0x00 */ u16 unk00;
	/* 0x04 */ void (*func_update)(void);
	/* 0x08 */ void (*func_draw)(void);
	/* 0x0C */ void *arena_start;           // Start of allocatable memory pool
	/* 0x10 */ size_t arena_size;           // Size of allocatable memory pool for heap; usually from end of last overlay's .bss section to start of subsys (ovl1)
	/* 0x14 */ u32 unk14; // count?
	/* 0x18 */ s32 contexts_num;            // Number of contexts? (what even is a task?)
	/* 0x1C */ size_t dl_buffer0_size;
	/* 0x20 */ size_t dl_buffer1_size;
	/* 0x24 */ size_t dl_buffer2_size;
	/* 0x28 */ size_t dl_buffer3_size;
	/* 0x2C */ size_t graphics_arena_size;	// Graphics memory pool size
	/* 0x30 */ u16 unk30;
	/* 0x34 */ s32 rdp_output_buffer_size;
	/* 0x38 */ void (*func_lights)(Gfx**); 	// Lighting callback?
	/* 0x3C */ void (*func_controller)(); // controller read callback?

} syTaskmanBufferSetup; // size == 0x40

typedef struct syTaskmanSetup
{
	/* 0x00 */ syTaskmanBufferSetup buffer_setup;
	/* 0x40 */ u32 gobjthreads_num;
	/* 0x44 */ u32 threadstack_size;
	/* 0x48 */ u32 threadstacks_num;
	/* 0x4C */ s32 unk4C;
	/* 0x50 */ u32 gobjprocs_num;
	/* 0x54 */ u32 gobjs_num;
	/* 0x58 */ u32 gobj_size;
	/* 0x5C */ u32 gcmatrixs_num;
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

} syTaskmanSetup; // size >= 0x8C

extern u32 sSYTaskmanUpdateCount;
extern u32 dSYTaskmanFrameDrawCount;
extern Gfx *gSYTaskmanDLHeads[4];
extern Gfx *sSYTaskmanDLBranches[4];
extern syMallocRegion gSYTaskmanGraphicsHeap;
extern syMallocRegion gSYTaskmanGeneralHeap;
// Gfx *? Gfx
extern u32 sSYTaskmanUpdateDeltaTime;
// Gfx *? Gfx
extern u32 sSYTaskmanFrameDeltaTime;
extern u16 D_80046626;
extern u16 D_80046628;
extern s32 gSYTaskmanTaskID;

extern void func_800048D0(SCTaskGfxCallback arg0);
extern void func_800048F8(Gfx **dl);
extern void* syTaskmanMalloc(size_t size, u32 alignment);
extern void func_80004F78(void);
extern void syTaskmanAppendGfxUcodeLoad(Gfx **dlist, u32 ucodeIdx);
extern void func_800053CC(void);
extern void syTaskmanUpdateDLBuffers(void);
extern void syTaskmanSetLoadScene(void);
extern void syTaskmanInit(syTaskmanSetup *arg);
extern void func_80006B80(void);

#endif
