/* relocData file 84: EFCommonEffects2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros
extern u8 dEFCommonEffects2_gap_0x4F34_sub_0x14C[];
extern u8 dEFCommonEffects2_gap_0x6B6C_sub_0x74[];

extern u8 dEFCommonEffects2_gap_0x1F18[];

extern MObjSub *dEFCommonEffects2_gap_0x1F18_sub_0x18[];

extern u32 dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint_data[];
extern u32 dEFCommonEffects2_FireSparkAnimJoint_AnimJoint_0x20D8[];

extern u32 dEFCommonEffects2_FireSparkMatAnimJoint_MatAnimJoint_data[];
extern u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x28B8[];
extern u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x28F0[];
extern u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x2960[];
extern u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x29D0[];
extern u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x2A40[];

extern u32 dEFCommonEffects2_CatchSwirlMatAnimJoint_MatAnimJoint_data[];
extern u32 dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint_0x34B4[];
extern u32 dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint_0x3518[];
extern u32 dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint_0x355C[];

extern u32 dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint_data[];
extern u32 dEFCommonEffects2_DeadExplodeDefaultAnimJoint_AnimJoint_0x54E0[];
extern u32 dEFCommonEffects2_DeadExplodeDefaultAnimJoint_AnimJoint_0x55EC[];
extern u32 dEFCommonEffects2_DeadExplodeDefaultAnimJoint_AnimJoint_0x568C[];

extern u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5810[];
extern u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x582C[];
extern u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5848[];
extern u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5864[];
extern u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5868[];
extern u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x586C[];

extern u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x5880[];
extern u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x589C[];
extern u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58B8[];
extern u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58D4[];
extern u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58D8[];
extern u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58DC[];

extern u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x58F0[];
extern u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x590C[];
extern u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5928[];
extern u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5944[];
extern u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5948[];
extern u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x594C[];

extern u32 dEFCommonEffects2_DeadExplode3_MatAnimJoint_data[];
extern u32 dEFCommonEffects2_NessPKFlashAnimJoint_AnimJoint_0x6D98[];

extern u32 dEFCommonEffects2_NessPKFlashMatAnimJoint_MatAnimJoint_0x6E28[];
extern u32 dEFCommonEffects2_NessPKFlashMatAnimJoint_MatAnimJoint_0x6EB4[];


/* Forward DObjDesc chain-target decls for fixRelocChain.py */
/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
/* Raw data from file offset 0x0000 to 0x1428 (5160 bytes) */
PAD(8);

/* gap sub-block @ 0x0008 (was gap+0x8, 1032 bytes) */
u8 dEFCommonEffects2_gap_0x0000_sub_0x8[1032] = {
	#include <EFCommonEffects2/gap_0x0000_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x0410 (was gap+0x410, 1032 bytes) */
u8 dEFCommonEffects2_gap_0x0000_sub_0x410[1032] = {
	#include <EFCommonEffects2/gap_0x0000_sub_0x410.data.inc.c>
};

/* gap sub-block @ 0x0818 (was gap+0x818, 1032 bytes) */
u8 dEFCommonEffects2_gap_0x0000_sub_0x818[1032] = {
	#include <EFCommonEffects2/gap_0x0000_sub_0x818.data.inc.c>
};

/* gap sub-block @ 0x0C20 (was gap+0xC20, 1032 bytes) */
u8 dEFCommonEffects2_gap_0x0000_sub_0xC20[1032] = {
	#include <EFCommonEffects2/gap_0x0000_sub_0xC20.data.inc.c>
};

/* gap sub-block @ 0x1028 (was gap+0x1028, 1024 bytes) */
/* MObjSub.sprites pointer table @ +0x1028 (256 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
void *dEFCommonEffects2_gap_0x0000_sub_0x1028[256] = {
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00B5FF,  /* unresolved */
	(void *)0x94FFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFFFFFFFF,  /* unresolved */
	(void *)0xFFFFCEFF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FFFF,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFF00FFFF,  /* unresolved */
	(void *)0xB5FFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFFFFFFFF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xEFFF84FF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xEFFFFFFF,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFFFFCEFF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFFFFFFFF,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00EFFF,  /* unresolved */
	(void *)0x73FFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FFFF,  /* unresolved */
	(void *)0xCEFFFFFF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFFFFFFFF,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00EFFF,  /* unresolved */
	(void *)0xB5FFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFFFFCEFF,  /* unresolved */
	(void *)0x84FFFF00,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FFFF,  /* unresolved */
	(void *)0xCEFF5AFF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FFFF,  /* unresolved */
	(void *)0xFFFF84FF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FFFF,  /* unresolved */
	(void *)0xFF00FFFF,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xEFFF84FF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FFFF,  /* unresolved */
	(void *)0xEFFFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FFFF,  /* unresolved */
	(void *)0xFFFFFFFF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xEFFFB5FF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xEFFFFFFF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFFFFEFFF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FFFF,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFFFFFFFF,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FFFF,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFFFFFFFF,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFFFFFFFF,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFFFFFFFF,  /* unresolved */
	(void *)0xFFFFFF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
	(void *)0xFF00FF00,  /* unresolved */
};

/* MObjSub: ShockSmallMObjSub @ 0x1428 */
MObjSub dEFCommonEffects2_ShockSmallMObjSub_MObjSub[1] = {
	{
		0x050B,
		0x05, 0x2E,
		(void**)(dEFCommonEffects2_gap_0x0000_sub_0x1028),
		0x050D, 0x0308, 0x050E, 0x0206,
		84869380,
		6.817868669698895e-36f, 1.4704469383453895e-39f,
		8.182366928797652e-36f, 2.938735877055719e-39f,
		2.938758297831148e-39f, 0.0f,
		(void**)0x00000000,
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		0x3F80,
		0x0000, 0x3F80, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x14A0 to 0x1500 (96 bytes) */
/* gap sub-block @ 0x14A0 (was gap+0x0, 24 bytes) */
u8 dEFCommonEffects2_gap_0x14A0[24] = {
	#include <EFCommonEffects2/gap_0x14A0.data.inc.c>
};

/* gap sub-block @ 0x14B8 (was gap+0x18, 8 bytes) */
u8 dEFCommonEffects2_gap_0x14A0_sub_0x18[8] = {
	#include <EFCommonEffects2/gap_0x14A0_sub_0x18.data.inc.c>
};

/* gap sub-block @ 0x14C0 (was gap+0x20, 64 bytes) */
Vtx dEFCommonEffects2_gap_0x14A0_sub_0x20[4] = {
	#include <EFCommonEffects2/gap_0x14A0_sub_0x20.vtx.inc.c>
};

/* Raw data from file offset 0x1500 to 0x1570 (112 bytes) */
Gfx dEFCommonEffects2_DL_0x1500[14] = {
	#include <EFCommonEffects2/DL_0x1500.dl.inc.c>
};

/* Raw data from file offset 0x1570 to 0x1EA0 (2352 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint[1] = {
	(AObjEvent32 *)((u8*)dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint_data + 0x60),
};

u32 dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint_data[587] = {
	#include <EFCommonEffects2/ShockSmallMatAnimJoint_MatAnimJoint_data.data.inc.c>
};

/* MObjSub-list head @ 0x1ea0 — 6-entry MObjSub** array.
 * The real MObjSub data starts at +0x18 (dEFCommonEffects2_FireSparkMObjSub_MObjSub_real below). */
MObjSub **dEFCommonEffects2_FireSparkMObjSub_MObjSub[2] = {
	NULL,
	NULL,
};

/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x8). */
void *dEFCommonEffects2_FireSparkMObjSub_MObjSub_sprites[4] = {
	(void *)((u8*)&dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint + 0x730),
	(void *)((u8*)&dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint + 0x528),
	(void *)((u8*)&dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint + 0x320),
	(void *)((u8*)&dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint + 0x118),
};

/* The real MObjSub @ +0x18 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dEFCommonEffects2_FireSparkMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dEFCommonEffects2_FireSparkMObjSub_MObjSub_sprites,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x1F18 to 0x1F38 (32 bytes) */
/* gap sub-block @ 0x1F30 (was gap+0x18, 8 bytes) */
/* MObjSub.sprites pointer table @ +0x1F30 (2 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
MObjSub *dEFCommonEffects2_gap_0x1F18_sub_0x18[2] = {
	&dEFCommonEffects2_FireSparkMObjSub_MObjSub_real,
	NULL,
};

/* Vtx: FireSparkVtx @ 0x1F38 (4 vertices) */
Vtx dEFCommonEffects2_FireSparkVtx_Vtx[4] = {
	#include <EFCommonEffects2/FireSparkVtx.vtx.inc.c>
};

/* DisplayList: FireSparkDisplayList @ 0x1F78 (200 bytes) */
Gfx dEFCommonEffects2_FireSparkDisplayList_DisplayList[25] = {
	#include <EFCommonEffects2/FireSparkDisplayList.dl.inc.c>
};

/* DObjDesc: FireSparkDObjDesc @ 0x2040 (3 entries) */
DObjDesc dEFCommonEffects2_FireSparkDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dEFCommonEffects2_FireSparkDisplayList_DisplayList, { 0.0f, -90.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x20D0 to 0x2170 (160 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dEFCommonEffects2_FireSparkAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dEFCommonEffects2_FireSparkAnimJoint_AnimJoint_0x20D8,
};

u32 dEFCommonEffects2_FireSparkAnimJoint_AnimJoint_0x20D8[] = {
	    0x15D00000,
	    0xC2B40000,
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x3A0, 4),
	    0x35700000,
	    0x3F333336,
	    0x3EAF9DBC,
	    0x3F333336,
	aobjEvent32SetValAfter(0x020, 6),
	    0x35700000,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3FF83120,
	    0x3F980487,
	    0x3FF83120,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3F5A68AE,
	    0x3FB7F0FE,
	    0x3FF83120,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3FD2C3B1,
	    0x3F51B171,
	    0x3FF83120,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3F9E12C6,
	    0x3F80F616,
	    0x3FF83120,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3F1AE973,
	    0x3EFCC3A4,
	    0x3F733A69,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3727C5AC,
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x2170 to 0x22B8 (328 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dEFCommonEffects2_FireSparkMatAnimJoint_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)((u8*)dEFCommonEffects2_FireSparkMatAnimJoint_MatAnimJoint_data + 0x2C),
};

u32 dEFCommonEffects2_FireSparkMatAnimJoint_MatAnimJoint_data[80] = {
	#include <EFCommonEffects2/FireSparkMatAnimJoint_MatAnimJoint_data.data.inc.c>
};

/* DObjDesc: CatchSwirlDObjDesc @ 0x22B8 (2 entries) */
DObjDesc dEFCommonEffects2_CatchSwirlDObjDesc[] = {
	{ 0, (void*)0x00000000, { 1.0654956302341688e-33f, 1.0715143449813712e-33f, 1.0775330597285737e-33f }, { 2.0708070517321904e-33f, 1.4377322243972623e-42f, 0.0f }, { 2.938735877055719e-39f, 2.938758297831148e-39f, 0.0f } },
	{ 0, (void*)0x00000000, { 1.0f, 1.0f, 0.0f }, { 1.0f, 0.0f, 9.405102750280275e-38f }, { 2.938758297831148e-39f, 2.938758297831148e-39f, 0.0f } },
};

/* Raw data from file offset 0x2310 to 0x2760 (1104 bytes) */
/* gap sub-block @ 0x2310 (was gap+0x0, 56 bytes) */
u8 dEFCommonEffects2_gap_0x2310[56] = {
	#include <EFCommonEffects2/gap_0x2310.data.inc.c>
};

/* MObjSub @ 0x2348 */
MObjSub dEFCommonEffects2_gap_0x2310_sub_0x38[1] = {
	{
		0x0000,
		0x04, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x04, 0x00,
		0x0020,
		0x0010, 0x0020, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0xFF, 0xFF, 0x7D, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0x7D, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x23C0 */
MObjSub dEFCommonEffects2_gap_0x2310_sub_0xB0[1] = {
	{
		0x0000,
		0x04, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x04, 0x00,
		0x0020,
		0x0010, 0x0020, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0xFF, 0xFF, 0x7D, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0x7D, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2438 */
MObjSub dEFCommonEffects2_gap_0x2310_sub_0x128[1] = {
	{
		0x0000,
		0x04, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x04, 0x00,
		0x0020,
		0x0010, 0x0020, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0xFF, 0xFF, 0x7D, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0x7D, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x24B0 (was gap+0x1A0, 8 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x1A0[8] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x1A0.data.inc.c>
};

/* gap sub-block @ 0x24B8 (was gap+0x1A8, 8 bytes) */
MObjSub *dEFCommonEffects2_gap_0x2310_sub_0x1A8[2] = {
	(MObjSub *)dEFCommonEffects2_gap_0x2310_sub_0x38,
	NULL,
};

/* gap sub-block @ 0x24C0 (was gap+0x1B0, 8 bytes) */
MObjSub *dEFCommonEffects2_gap_0x2310_sub_0x1B0[2] = {
	(MObjSub *)dEFCommonEffects2_gap_0x2310_sub_0xB0,
	NULL,
};

/* gap sub-block @ 0x24C8 (was gap+0x1B8, 8 bytes) */
MObjSub *dEFCommonEffects2_gap_0x2310_sub_0x1B8[2] = {
	(MObjSub *)dEFCommonEffects2_gap_0x2310_sub_0x128,
	NULL,
};

/* gap sub-block @ 0x24D0 (was gap+0x1C0, 48 bytes) */
Vtx dEFCommonEffects2_gap_0x2310_sub_0x1C0[3] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x1C0.vtx.inc.c>
};

/* gap sub-block @ 0x2500 (was gap+0x1F0, 136 bytes) */
Gfx dEFCommonEffects2_DL_0x2500[17] = {
	#include <EFCommonEffects2/DL_0x2500.dl.inc.c>
};

/* gap sub-block @ 0x2588 (was gap+0x278, 136 bytes) */
Gfx dEFCommonEffects2_DL_0x2588[17] = {
	#include <EFCommonEffects2/DL_0x2588.dl.inc.c>
};

/* gap sub-block @ 0x2610 (was gap+0x300, 136 bytes) */
Gfx dEFCommonEffects2_DL_0x2610[17] = {
	#include <EFCommonEffects2/DL_0x2610.dl.inc.c>
};

/* gap sub-block @ 0x2698 (was gap+0x388, 136 bytes) */
Gfx dEFCommonEffects2_DL_0x2698[17] = {
	#include <EFCommonEffects2/DL_0x2698.dl.inc.c>
};

/* gap sub-block @ 0x2720 (was gap+0x410, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x410[16] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x410.data.inc.c>
};

/* gap sub-block @ 0x2730 (was gap+0x420, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x420[16] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x420.data.inc.c>
};

/* gap sub-block @ 0x2740 (was gap+0x430, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x430[16] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x430.data.inc.c>
};

/* gap sub-block @ 0x2750 (was gap+0x440, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x440[16] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x440.data.inc.c>
};

/* MObjSub: CatchSwirlMObjSub @ 0x2760 */
MObjSub dEFCommonEffects2_CatchSwirlMObjSub_MObjSub[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 1.0f,
		1.0f, 1.0f,
		(void**)0x00000001,
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		1.570796012878418f, 0.0f,
		0x3F800000,
		{ { 0x3F, 0x80, 0x00, 0x00 } },
		0x3F, 0x80, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0x02 } },
		{ { 0x09, 0xFA, 0x09, 0xC8 } },
		{ { 0x3E, 0x75, 0xC2, 0xD2 } },
		{ { 0x42, 0xE2, 0x2D, 0xCC } },
		-1035033030, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x27D8 to 0x28A0 (200 bytes) */
u8 dEFCommonEffects2_gap_0x27D8[200] = {
	#include <EFCommonEffects2/gap_0x27D8.data.inc.c>
};

/* Raw data from file offset 0x28A0 to 0x2AB0 (528 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint[6] = {
	NULL,
	(AObjEvent32 *)dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x28B8,
	(AObjEvent32 *)dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x28F0,
	(AObjEvent32 *)dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x2960,
	(AObjEvent32 *)dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x29D0,
	(AObjEvent32 *)dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x2A40,
};

u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x28B8[] = {
	aobjEvent32SetValAfter(0x006, 0),
	    0x3FC90FDB,  /* 1.5707963705062866f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x001, 0),
	    0x00000000,  /* 0.0f */
	    0x3B9ED737,  /* 0.00484743295237422f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValRateBlock(0x001, 12),
	    0xC04D709F,  /* -3.209998846054077f */
	    0xBF0695CC,  /* -0.5257232189178467f */
	aobjEvent32SetValBlock(0x001, 1),
	    0xC04D709F,  /* -3.209998846054077f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32End(),
};

u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x28F0[] = {
	aobjEvent32SetValAfter(0x016, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3E75C2E1,  /* 0.24000121653079987f */
	aobjEvent32SetVal0Rate(0x3E1, 0),
	    0x00000000,  /* 0.0f */
	    0x42E22DCC,  /* 113.08944702148438f */
	    0xC24EA63A,  /* -51.662330627441406f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	    0x3F1D5256,  /* 0.6145375967025757f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3E1, 12),
	    0xBE9A9FC0,  /* -0.3020000457763672f */
	    0xC0B6BCDB,  /* -5.7105536460876465f */
	    0xC36E61E2,  /* -238.38235473632812f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32SetValBlock(0x3E1, 1),
	    0xBE9A9FC0,  /* -0.3020000457763672f */
	    0xC0B6BCDB,  /* -5.7105536460876465f */
	    0xC36E61E2,  /* -238.38235473632812f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32End(),
};

u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x2960[] = {
	aobjEvent32SetValAfter(0x016, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3E75C2E1,  /* 0.24000121653079987f */
	aobjEvent32SetVal0Rate(0x3E1, 0),
	    0x3FC90FDB,  /* 1.5707963705062866f */
	    0x424EA63A,  /* 51.662330627441406f */
	    0x42E22DCC,  /* 113.08944702148438f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	    0x3F1D5256,  /* 0.6145375967025757f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3E1, 12),
	    0x3FA267EC,  /* 1.268796443939209f */
	    0x436E61E2,  /* 238.38235473632812f */
	    0xC0B6BCD1,  /* -5.7105488777160645f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32SetValBlock(0x3E1, 1),
	    0x3FA267EC,  /* 1.268796443939209f */
	    0x436E61E2,  /* 238.38235473632812f */
	    0xC0B6BCD1,  /* -5.7105488777160645f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32End(),
};

u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x29D0[] = {
	aobjEvent32SetValAfter(0x016, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3E75C2E1,  /* 0.24000121653079987f */
	aobjEvent32SetVal0Rate(0x3E1, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xC2E22DCE,  /* -113.08946228027344f */
	    0x424EA633,  /* 51.66230392456055f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	    0x3F1D5256,  /* 0.6145375967025757f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3E1, 12),
	    0x4035BBE3,  /* 2.839592695236206f */
	    0x40B6BC8C,  /* 5.710515975952148f */
	    0x436E61E0,  /* 238.38232421875f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32SetValBlock(0x3E1, 1),
	    0x4035BBE3,  /* 2.839592695236206f */
	    0x40B6BC8C,  /* 5.710515975952148f */
	    0x436E61E0,  /* 238.38232421875f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32End(),
};

u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x2A40[] = {
	aobjEvent32SetValAfter(0x016, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3E75C2E1,  /* 0.24000121653079987f */
	aobjEvent32SetVal0Rate(0x3E1, 0),
	    0xBFC90FDB,  /* -1.5707963705062866f */
	    0xC24EA63A,  /* -51.662330627441406f */
	    0xC2E22DCC,  /* -113.08944702148438f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	    0x3F1D5256,  /* 0.6145375967025757f */
	    0x3F29E4CF,  /* 0.6636475920677185f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3E1, 12),
	    0xBFEFB7CB,  /* -1.8727964162826538f */
	    0xC36E61E2,  /* -238.38235473632812f */
	    0x40B6BCE4,  /* 5.71055793762207f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32SetValBlock(0x3E1, 1),
	    0xBFEFB7CB,  /* -1.8727964162826538f */
	    0xC36E61E2,  /* -238.38235473632812f */
	    0x40B6BCE4,  /* 5.71055793762207f */
	    0x3F800000,  /* 1.0f */
	    0x3F0BB247,  /* 0.545689046382904f */
	    0x3F0D80E1,  /* 0.5527477860450745f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32End(),
};

/* Raw data from file offset 0x2AB0 to 0x2F78 (1224 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dEFCommonEffects2_CatchSwirlMatAnimJoint_MatAnimJoint[6] = {
	NULL,
	NULL,
	(AObjEvent32 *)((u8*)dEFCommonEffects2_CatchSwirlMatAnimJoint_MatAnimJoint_data + 0x90),
	(AObjEvent32 *)((u8*)dEFCommonEffects2_CatchSwirlMatAnimJoint_MatAnimJoint_data + 0x94),
	(AObjEvent32 *)((u8*)dEFCommonEffects2_CatchSwirlMatAnimJoint_MatAnimJoint_data + 0x98),
	(AObjEvent32 *)((u8*)dEFCommonEffects2_CatchSwirlMatAnimJoint_MatAnimJoint_data + 0x9C),
};

u32 dEFCommonEffects2_CatchSwirlMatAnimJoint_MatAnimJoint_data[300] = {
	#include <EFCommonEffects2/CatchSwirlMatAnimJoint_MatAnimJoint_data.data.inc.c>
};

/* DObjDesc: ReflectBreakDObjDesc @ 0x2F78 (2 entries) */
DObjDesc dEFCommonEffects2_ReflectBreakDObjDesc[] = {
	{ 0, (void*)0x00000000, { 8.6685267493903e-32f, 8.707046523772395e-32f, 1.4640756278615873e-31f }, { 0.0f, 1.0789998175301091e-42f, 0.0f }, { 2.938735877055719e-39f, 2.9388255601574356e-39f, 0.0f } },
	{ 0, (void*)0x00000000, { 1.0f, 1.0f, 0.0f }, { 1.0f, 0.0f, 4.039338094763389e-28f }, { 2.938780718606577e-39f, 2.9388255601574356e-39f, 0.0f } },
};

/* Raw data from file offset 0x2FD0 to 0x3398 (968 bytes) */
/* gap sub-block @ 0x2FD0 (was gap+0x0, 56 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0[56] = {
	#include <EFCommonEffects2/gap_0x2FD0.data.inc.c>
};

/* MObjSub @ 0x3008 */
MObjSub dEFCommonEffects2_gap_0x2FD0_sub_0x38[1] = {
	{
		0x0000,
		0x03, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x1200,
		0x03, 0x01,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xAC, 0xE0, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3080 */
MObjSub dEFCommonEffects2_gap_0x2FD0_sub_0xB0[1] = {
	{
		0x0000,
		0x03, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x1200,
		0x03, 0x01,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xAC, 0xE0, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x30F8 (was gap+0x128, 8 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x128[8] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x128.data.inc.c>
};

/* gap sub-block @ 0x3100 (was gap+0x130, 8 bytes) */
MObjSub *dEFCommonEffects2_gap_0x2FD0_sub_0x130[2] = {
	(MObjSub *)dEFCommonEffects2_gap_0x2FD0_sub_0x38,
	NULL,
};

/* gap sub-block @ 0x3108 (was gap+0x138, 8 bytes) */
MObjSub *dEFCommonEffects2_gap_0x2FD0_sub_0x138[2] = {
	(MObjSub *)dEFCommonEffects2_gap_0x2FD0_sub_0xB0,
	NULL,
};

/* gap sub-block @ 0x3110 (was gap+0x140, 64 bytes) */
Vtx dEFCommonEffects2_gap_0x2FD0_sub_0x140[4] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x140.vtx.inc.c>
};

/* gap sub-block @ 0x3150 (was gap+0x180, 64 bytes) */
Vtx dEFCommonEffects2_gap_0x2FD0_sub_0x180[4] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x180.vtx.inc.c>
};

/* gap sub-block @ 0x3190 (was gap+0x1C0, 64 bytes) */
Vtx dEFCommonEffects2_gap_0x2FD0_sub_0x1C0[4] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x1C0.vtx.inc.c>
};

/* gap sub-block @ 0x31D0 (was gap+0x200, 136 bytes) */
Gfx dEFCommonEffects2_DL_0x31D0[17] = {
	#include <EFCommonEffects2/DL_0x31D0.dl.inc.c>
};

/* gap sub-block @ 0x3258 (was gap+0x288, 136 bytes) */
Gfx dEFCommonEffects2_DL_0x3258[17] = {
	#include <EFCommonEffects2/DL_0x3258.dl.inc.c>
};

/* gap sub-block @ 0x32E0 (was gap+0x310, 136 bytes) */
Gfx dEFCommonEffects2_DL_0x32E0[17] = {
	#include <EFCommonEffects2/DL_0x32E0.dl.inc.c>
};

/* gap sub-block @ 0x3368 (was gap+0x398, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x398[16] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x398.data.inc.c>
};

/* gap sub-block @ 0x3378 (was gap+0x3A8, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x3A8[16] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x3A8.data.inc.c>
};

/* gap sub-block @ 0x3388 (was gap+0x3B8, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x3B8[16] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x3B8.data.inc.c>
};

/* MObjSub: ReflectBreakMObjSub @ 0x3398 */
MObjSub dEFCommonEffects2_ReflectBreakMObjSub_MObjSub[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 1.0f,
		1.0f, 1.0f,
		(void**)0x00000001,
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		0xC3D4,
		0xEB94, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x3F800000,
		{ { 0x3F, 0x80, 0x00, 0x00 } },
		0x3F, 0x80, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0x02 } },
		{ { 0x0D, 0x08, 0x0C, 0xDA } },
		{ { 0x42, 0xA3, 0x62, 0x49 } },
		{ { 0x42, 0xD9, 0xDE, 0x2A } },
		0, 0,
		0, -1094344245,
	}
};

/* Raw data from file offset 0x3410 to 0x34A0 (144 bytes) */
u8 dEFCommonEffects2_gap_0x3410[144] = {
	#include <EFCommonEffects2/gap_0x3410.data.inc.c>
};

/* Raw data from file offset 0x34A0 to 0x35A0 (256 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint[5] = {
	NULL,
	NULL,
	(AObjEvent32 *)dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint_0x34B4,
	(AObjEvent32 *)dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint_0x3518,
	(AObjEvent32 *)dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint_0x355C,
};

u32 dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint_0x34B4[] = {
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x3B0, 0),
	    0x42A36249,  /* 81.69196319580078f */
	    0x42D9DE2A,  /* 108.93391418457031f */
	    0x403B94B0,  /* 2.930950164794922f */
	    0x3FA7E968,  /* 1.3118104934692383f */
	    0x3F3851EE,  /* 0.720000147819519f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValRate(0x380, 8),
	    0x3FE01993,  /* 1.750780463218689f */
	    0xBE242272,  /* -0.16028764843940735f */
	    0x400FF83B,  /* 2.249525785446167f */
	    0x3D21F109,  /* 0.03953650966286659f */
	    0x3F626FE7,  /* 0.8845199942588806f */
	    0x3CA08A55,  /* 0.019597211852669716f */
	aobjEvent32SetVal0RateBlock(0x030, 8),
	    0xC4112350,  /* -580.5517578125f */
	    0x43BD07D0,  /* 378.06103515625f */
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3FC95F40,  /* 1.5732192993164062f */
	    0x3FD2C754,  /* 1.6467080116271973f */
	    0x3F62D0E7,  /* 0.8860000967979431f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint_0x34B4),
};

u32 dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint_0x3518[] = {
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x3B0, 0),
	    0x42869036,  /* 67.28166198730469f */
	    0x413C7B8E,  /* 11.78016471862793f */
	    0x403B94B0,  /* 2.930950164794922f */
	    0x3F6E82D4,  /* 0.9316837787628174f */
	    0x3F3851EE,  /* 0.720000147819519f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x3B0, 8),
	    0xC42A5A77,  /* -681.4135131835938f */
	    0xC3BCFFB6,  /* -377.99774169921875f */
	    0x3FC95F40,  /* 1.5732192993164062f */
	    0x3FD2C754,  /* 1.6467080116271973f */
	    0x3F62D0E7,  /* 0.8860000967979431f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint_0x3518),
};

u32 dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint_0x355C[] = {
	aobjEvent32SetValAfter(0x060, 0),
	    0x422D4BA5,  /* 43.32387161254883f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x390, 0),
	    0x41FE56A2,  /* 31.792301177978516f */
	    0x403B94B0,  /* 2.930950164794922f */
	    0x3F6E82D4,  /* 0.9316837787628174f */
	    0x3F3851EE,  /* 0.720000147819519f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x390, 8),
	    0xC45C1CA6,  /* -880.4476318359375f */
	    0x40393313,  /* 2.893742322921753f */
	    0x3FD2C754,  /* 1.6467080116271973f */
	    0x3F62D0E7,  /* 0.8860000967979431f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint_0x355C),
	aobjEvent32End(),
};

/* Raw data from file offset 0x35A0 to 0x3A68 (1224 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint[5] = {
	NULL,
	NULL,
	(AObjEvent32 *)((u8*)dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint_data + 0x84),
	(AObjEvent32 *)((u8*)dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint_data + 0x88),
	(AObjEvent32 *)((u8*)dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint_data + 0x8C),
};

u32 dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint_data[301] = {
	#include <EFCommonEffects2/ReflectBreakMatAnimJoint_MatAnimJoint_data.data.inc.c>
};

/* Raw data from file offset 0x3A68 to 0x4F08 (5280 bytes) */
u8 dEFCommonEffects2_Shadow_TextureImage[5280] = {
	#include <EFCommonEffects2/Shadow_TextureImage.tex.inc.c>
};

/* DObjDesc: DeadExplodeDefaultDObjDesc @ 0x4F08 (1 entries) */
DObjDesc dEFCommonEffects2_DeadExplodeDefaultDObjDesc[] = {
	{ 0, (void *)dEFCommonEffects2_gap_0x4F34_sub_0x14C, { 4.974964395099933e-27f, 8.081907707380465e-27f, 1.0789998175301091e-42f }, { 0.0f, 2.938735877055719e-39f, 5.877561437213154e-39f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x4F34 to 0x53E8 (1204 bytes) */
/* gap sub-block @ 0x4F34 (was gap+0x0, 92 bytes) */
u8 dEFCommonEffects2_gap_0x4F34[92] = {
	#include <EFCommonEffects2/gap_0x4F34.data.inc.c>
};

/* MObjSub @ 0x4F90 */
MObjSub dEFCommonEffects2_gap_0x4F34_sub_0x5C[1] = {
	{
		0x0000,
		0x03, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x03, 0x01,
		0x0020,
		0x0040, 0x0020, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0xFC, 0xF6, 0x90, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x5008 */
MObjSub dEFCommonEffects2_gap_0x4F34_sub_0xD4[1] = {
	{
		0x0000,
		0x03, 0x02,
		(void**)0x00000000,
		0x0040, 0x0000, 0x0060, 0x0020,
		1,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x03, 0x01,
		0x0020,
		0x0020, 0x0060, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0xFF, 0xB4, 0x3D, 0x00 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0xFF, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x5080 (was gap+0x14C, 8 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x14C[8] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x14C.data.inc.c>
};

/* gap sub-block @ 0x5088 (was gap+0x154, 8 bytes) */
MObjSub *dEFCommonEffects2_gap_0x4F34_sub_0x154[2] = {
	(MObjSub *)dEFCommonEffects2_gap_0x4F34_sub_0x5C,
	NULL,
};

/* gap sub-block @ 0x5090 (was gap+0x15C, 8 bytes) */
MObjSub *dEFCommonEffects2_gap_0x4F34_sub_0x15C[2] = {
	(MObjSub *)dEFCommonEffects2_gap_0x4F34_sub_0xD4,
	NULL,
};

/* gap sub-block @ 0x5098 (was gap+0x164, 64 bytes) */
Vtx dEFCommonEffects2_gap_0x4F34_sub_0x164[4] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x164.vtx.inc.c>
};

/* gap sub-block @ 0x50D8 (was gap+0x1A4, 64 bytes) */
Vtx dEFCommonEffects2_gap_0x4F34_sub_0x1A4[4] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x1A4.vtx.inc.c>
};

/* gap sub-block @ 0x5118 (was gap+0x1E4, 256 bytes) */
Vtx dEFCommonEffects2_gap_0x4F34_sub_0x1E4[16] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x1E4.vtx.inc.c>
};

/* gap sub-block @ 0x5218 (was gap+0x2E4, 40 bytes) */
Gfx dEFCommonEffects2_DL_0x5218[5] = {
	#include <EFCommonEffects2/DL_0x5218.dl.inc.c>
};

/* gap sub-block @ 0x5240 (was gap+0x30C, 112 bytes) */
Gfx dEFCommonEffects2_DL_0x5240[14] = {
	#include <EFCommonEffects2/DL_0x5240.dl.inc.c>
};

/* gap sub-block @ 0x52B0 (was gap+0x37C, 96 bytes) */
Gfx dEFCommonEffects2_DL_0x52B0[12] = {
	#include <EFCommonEffects2/DL_0x52B0.dl.inc.c>
};

/* gap sub-block @ 0x5310 (was gap+0x3DC, 168 bytes) */
Gfx dEFCommonEffects2_DL_0x5310[21] = {
	#include <EFCommonEffects2/DL_0x5310.dl.inc.c>
};

/* gap sub-block @ 0x53B8 (was gap+0x484, 16 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x484[16] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x484.data.inc.c>
};

/* gap sub-block @ 0x53C8 (was gap+0x494, 16 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x494[16] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x494.data.inc.c>
};

/* gap sub-block @ 0x53D8 (was gap+0x4A4, 16 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x4A4[16] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x4A4.data.inc.c>
};

/* MObjSub: DeadExplodeDefaultMObjSub @ 0x53E8 */
MObjSub dEFCommonEffects2_DeadExplodeDefaultMObjSub_MObjSub[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 1.0f,
		1.0f, 1.0f,
		(void**)0x00000001,
		0x1511,
		0x14, 0xEE,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x40CDB23C,
		{ { 0x41, 0x8B, 0xFF, 0xFE } },
		0x3F, 0x80, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0x01 } },
		{ { 0x15, 0x1C, 0x14, 0xF2 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x5460 to 0x54D0 (112 bytes) */
u8 dEFCommonEffects2_gap_0x5460[112] = {
	#include <EFCommonEffects2/gap_0x5460.data.inc.c>
};

/* Raw data from file offset 0x54D0 to 0x5800 (816 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dEFCommonEffects2_DeadExplodeDefaultAnimJoint_AnimJoint[4] = {
	NULL,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplodeDefaultAnimJoint_AnimJoint_0x54E0,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplodeDefaultAnimJoint_AnimJoint_0x55EC,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplodeDefaultAnimJoint_AnimJoint_0x568C,
};

u32 dEFCommonEffects2_DeadExplodeDefaultAnimJoint_AnimJoint_0x54E0[] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x40EE0768,  /* 7.438404083251953f */
	    0x41BD1DEE,  /* 23.63961410522461f */
	aobjEvent32SetVal(0x080, 5),
	    0x407E28C3,  /* 3.971237897872925f */
	aobjEvent32SetValBlock(0x100, 1),
	    0x3D38AD2C,  /* 0.045087024569511414f */
	aobjEvent32SetValBlock(0x100, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x100, 4),
	    0x41BA5084,  /* 23.28931427001953f */
	aobjEvent32Wait(3),
	aobjEvent32SetVal(0x080, 3),
	    0x40DBFF1C,  /* 6.87489128112793f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x100, 5),
	    0x40AD84B8,  /* 5.422451019287109f */
	aobjEvent32Wait(2),
	aobjEvent32SetValBlock(0x080, 2),
	    0x40859190,  /* 4.174018859863281f */
	aobjEvent32SetValBlock(0x080, 1),
	    0x40BDF147,  /* 5.935702800750732f */
	aobjEvent32SetVal(0x080, 4),
	    0x408215C4,  /* 4.065156936645508f */
	aobjEvent32SetValBlock(0x100, 1),
	    0x41B8E8B2,  /* 23.11362075805664f */
	aobjEvent32SetValBlock(0x100, 2),
	    0x3F1C83A0,  /* 0.6113834381103516f */
	aobjEvent32SetVal(0x100, 2),
	    0x41B5E73E,  /* 22.737911224365234f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x080, 3),
	    0x40E201E0,  /* 7.0627288818359375f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x100, 2),
	    0x40354790,  /* 2.8324928283691406f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x407825FF,  /* 3.877319097518921f */
	    0x41B71B06,  /* 22.888195037841797f */
	aobjEvent32SetVal(0x080, 3),
	    0x40E804A4,  /* 7.250566482543945f */
	aobjEvent32SetValBlock(0x100, 2),
	    0x40ED1664,  /* 7.40898323059082f */
	aobjEvent32SetVal(0x100, 2),
	    0x41B51F3A,  /* 22.640247344970703f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x080, 3),
	    0x408B19EA,  /* 4.3469133377075195f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x100, 2),
	    0x41BD7A44,  /* 23.68470001220703f */
	aobjEvent32SetVal(0x080, 3),
	    0x40879EDC,  /* 4.238142013549805f */
	aobjEvent32SetValBlock(0x100, 2),
	    0x41BC8D2B,  /* 23.56892967224121f */
	aobjEvent32SetVal(0x100, 2),
	    0x41AE50A3,  /* 21.78937339782715f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x080, 3),
	    0x40B5C87A,  /* 5.680722236633301f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x100, 6),
	    0x418BFFFE,  /* 17.499996185302734f */
	aobjEvent32Wait(2),
	aobjEvent32SetValBlock(0x080, 4),
	    0x40CDB23C,  /* 6.428007125854492f */
	aobjEvent32End(),
};

u32 dEFCommonEffects2_DeadExplodeDefaultAnimJoint_AnimJoint_0x55EC[] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3DCCCCE5,  /* 0.10000018030405045f */
	aobjEvent32SetValBlock(0x180, 5),
	    0x3F933333,  /* 1.149999976158142f */
	    0x41D5999A,  /* 26.700000762939453f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x3F9F9628,  /* 1.246769905090332f */
	    0x41AD6E31,  /* 21.678804397583008f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x3FAC3DCC,  /* 1.3456358909606934f */
	    0x41D70DC2,  /* 26.881717681884766f */
	aobjEvent32SetVal(0x080, 5),
	    0x3FBBD579,  /* 1.4674521684646606f */
	aobjEvent32SetValBlock(0x100, 2),
	    0x41BF779D,  /* 23.93340492248535f */
	aobjEvent32SetValBlock(0x100, 3),
	    0x41E18C60,  /* 28.19354248046875f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x3FCADF9A,  /* 1.5849487781524658f */
	    0x41B57376,  /* 22.681377410888672f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x3FCFA7FF,  /* 1.6223143339157104f */
	    0x41D5FE71,  /* 26.749238967895508f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x3FE1C1E2,  /* 1.7637293338775635f */
	    0x41B77FF3,  /* 22.937475204467773f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x40026836,  /* 2.0376105308532715f */
	    0x41DAC6D1,  /* 27.347078323364258f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x402526EC,  /* 2.580500602722168f */
	    0x41B6033D,  /* 22.7515811920166f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x4051E454,  /* 3.2795610427856445f */
	    0x41D3A481,  /* 26.455324172973633f */
	aobjEvent32SetValBlock(0x180, 4),
	    0x4080DBEB,  /* 4.026845455169678f */
	    0x41836E19,  /* 16.42875862121582f */
	aobjEvent32End(),
};

u32 dEFCommonEffects2_DeadExplodeDefaultAnimJoint_AnimJoint_0x568C[] = {
	aobjEvent32SetVal0Rate(0x200, 0),
	    0x3FC00000,  /* 1.5f */
	aobjEvent32SetValBlock(0x182, 0),
	    0x00000000,  /* 0.0f */
	    0x3FCAE1A2,  /* 1.5850107669830322f */
	    0x3D872985,  /* 0.0659971609711647f */
	aobjEvent32SetVal(0x080, 3),
	    0x3FF7AE89,  /* 1.9350138902664185f */
	aobjEvent32SetValRate(0x200, 3),
	    0x3FECCCE7,  /* 1.8500031232833862f */
	    0x3E1999B1,  /* 0.15000034868717194f */
	aobjEvent32SetVal(0x002, 36),
	    0x41437A15,  /* 12.217305183410645f */
	aobjEvent32SetValBlock(0x100, 1),
	    0x3D872985,  /* 0.0659971609711647f */
	aobjEvent32SetVal(0x100, 6),
	    0x41BEF3B7,  /* 23.869001388549805f */
	aobjEvent32Wait(2),
	aobjEvent32SetVal(0x080, 7),
	    0x404570E0,  /* 3.0850143432617188f */
	aobjEvent32SetValRate(0x200, 7),
	    0x4040000F,  /* 3.0000035762786865f */
	    0x3DDD1F33,  /* 0.10796966403722763f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x100, 3),
	    0x41AE80E8,  /* 21.812942504882812f */
	aobjEvent32SetValRate(0x200, 2),
	    0x4034973A,  /* 2.821730136871338f */
	    0x3CCCCCE1,  /* 0.025000037625432014f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x403A080B,  /* 2.90674090385437f */
	    0x4193C638,  /* 18.471786499023438f */
	aobjEvent32SetValRate(0x200, 2),
	    0x40466676,  /* 3.100003719329834f */
	    0x3CA04FBE,  /* 0.0195692740380764f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x404BD747,  /* 3.185014486312866f */
	    0x418803D7,  /* 17.001874923706055f */
	aobjEvent32SetValRate(0x200, 2),
	    0x403999B8,  /* 2.9000072479248047f */
	    0xBCCCCB5E,  /* -0.024999316781759262f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x403F0A89,  /* 2.985018014907837f */
	    0x418D25E1,  /* 17.643495559692383f */
	aobjEvent32SetValRate(0x200, 2),
	    0x4040001B,  /* 3.0000064373016357f */
	    0xBD4CCC71,  /* -0.0499996580183506f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x404570EC,  /* 3.085017204284668f */
	    0x4199C8AC,  /* 19.222984313964844f */
	aobjEvent32SetValRate(0x200, 2),
	    0x402CCCF1,  /* 2.7000086307525635f */
	    0x3CCCCAC1,  /* 0.024999024346470833f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x40323DC2,  /* 2.7850193977355957f */
	    0x41AAF8A2,  /* 21.371402740478516f */
	aobjEvent32SetValRate(0x200, 2),
	    0x40466671,  /* 3.1000025272369385f */
	    0x3CCCCE61,  /* 0.02500075288116932f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x404BD742,  /* 3.1850132942199707f */
	    0x41BE6553,  /* 23.799474716186523f */
	aobjEvent32SetValRate(0x200, 2),
	    0x40333364,  /* 2.80001163482666f */
	    0xBCBD2EA1,  /* -0.02309352345764637f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x4038A435,  /* 2.8850224018096924f */
	    0x41CECEB6,  /* 25.850933074951172f */
	aobjEvent32SetValRate(0x200, 2),
	    0x40407CFC,  /* 3.0076284408569336f */
	    0xBCCCD021,  /* -0.025001587346196175f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x4045EDCD,  /* 3.092639207839966f */
	    0x41D729C0,  /* 26.8953857421875f */
	aobjEvent32SetValRate(0x200, 2),
	    0x402CCCE3,  /* 2.700005292892456f */
	    0x3CC38AE1,  /* 0.023869933560490608f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x40323DB4,  /* 2.7850160598754883f */
	    0x41D63CA7,  /* 26.77961540222168f */
	aobjEvent32SetValRate(0x200, 2),
	    0x40469953,  /* 3.1031081676483154f */
	    0x3F3D1354,  /* 0.7385761737823486f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x404C0A24,  /* 3.1881189346313477f */
	    0x41C8001F,  /* 25.000059127807617f */
	aobjEvent32SetVal0Rate(0x200, 6),
	    0x4109BCE4,  /* 8.60861587524414f */
	aobjEvent32SetValBlock(0x180, 6),
	    0x410B1918,  /* 8.693626403808594f */
	    0x418BFFFE,  /* 17.499996185302734f */
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x5800 to 0x5870 (112 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dEFCommonEffects2_DeadExplode2_MatAnimJoint[4] = {
	NULL,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5864,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5868,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x586C,
};

u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5810[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xC3FFCB99,  /* -511.5906066894531f */
	aobjEvent32SetExtValBlock(0x001, 30),
	    0xC3FFCB99,  /* -511.5906066894531f */
	aobjEvent32SetExtValBlock(0x001, 6),
	    0xC3FFCB00,  /* -511.5859375f */
	aobjEvent32End(),
};

u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x582C[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 30),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 6),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5848[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xA16DFF66,  /* -8.063674041726981e-19f */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xA16DFF66,  /* -8.063674041726981e-19f */
	aobjEvent32SetExtValBlock(0x001, 16),
	    0xA16DFF00,  /* -8.063621308962931e-19f */
	aobjEvent32End(),
};

u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5864[] = {
	(u32)(dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5810),
};

u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5868[] = {
	(u32)(dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x582C),
};

u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x586C[] = {
	(u32)(dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5848),
};

/* Raw data from file offset 0x5870 to 0x58E0 (112 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dEFCommonEffects2_DeadExplode4_MatAnimJoint[4] = {
	NULL,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58D4,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58D8,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58DC,
};

u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x5880[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFD6FF99,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 30),
	    0xFFD6FF99,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 6),
	    0xFFD6FF00,  /* nanf */
	aobjEvent32End(),
};

u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x589C[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 30),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 6),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58B8[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0x4BF0FF66,  /* 31588044.0f */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0x4BF0FF66,  /* 31588044.0f */
	aobjEvent32SetExtValBlock(0x001, 16),
	    0x4BF0FF00,  /* 31587840.0f */
	aobjEvent32End(),
};

u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58D4[] = {
	(u32)(dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x5880),
};

u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58D8[] = {
	(u32)(dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x589C),
};

u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58DC[] = {
	(u32)(dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58B8),
};

/* Raw data from file offset 0x58E0 to 0x5950 (112 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dEFCommonEffects2_DeadExplode1_MatAnimJoint[4] = {
	NULL,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5944,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5948,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x594C,
};

u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x58F0[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFBB99,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 30),
	    0xFFFFBB99,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 6),
	    0xFFFFBB00,  /* nanf */
	aobjEvent32End(),
};

u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x590C[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 30),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 6),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5928[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFB43D66,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFB43D66,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 16),
	    0xFFB43D00,  /* nanf */
	aobjEvent32End(),
};

u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5944[] = {
	(u32)(dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x58F0),
};

u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5948[] = {
	(u32)(dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x590C),
};

u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x594C[] = {
	(u32)(dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5928),
};

/* Raw data from file offset 0x5950 to 0x6B40 (4592 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dEFCommonEffects2_DeadExplode3_MatAnimJoint[4] = {
	NULL,
	(AObjEvent32 *)((u8*)dEFCommonEffects2_DeadExplode3_MatAnimJoint_data + 0x54),
	(AObjEvent32 *)((u8*)dEFCommonEffects2_DeadExplode3_MatAnimJoint_data + 0x58),
	(AObjEvent32 *)((u8*)dEFCommonEffects2_DeadExplode3_MatAnimJoint_data + 0x5C),
};

u32 dEFCommonEffects2_DeadExplode3_MatAnimJoint_data[1144] = {
	#include <EFCommonEffects2/DeadExplode3_MatAnimJoint_data.data.inc.c>
};

/* DObjDesc: NessPKFlashDObjDesc @ 0x6B40 (1 entries) */
DObjDesc dEFCommonEffects2_NessPKFlashDObjDesc[] = {
	{ 0, (void *)dEFCommonEffects2_gap_0x6B6C_sub_0x74, { 8.731006476080497e-23f, 8.772283465174005e-23f, 8.813560454267514e-23f }, { 8.854837443361022e-23f, 8.89611443245453e-23f, 8.937391421548039e-23f }, { 8.978668410641547e-23f, 9.061304430362707e-23f, 7.20267410662956e-43f } },
};

/* Raw data from file offset 0x6B6C to 0x6D00 (404 bytes) */
/* gap sub-block @ 0x6B6C (was gap+0x0, 116 bytes) */
u8 dEFCommonEffects2_gap_0x6B6C[116] = {
	#include <EFCommonEffects2/gap_0x6B6C.data.inc.c>
};

/* gap sub-block @ 0x6BE0 (was gap+0x74, 8 bytes) */
u8 dEFCommonEffects2_gap_0x6B6C_sub_0x74[8] = {
	#include <EFCommonEffects2/gap_0x6B6C_sub_0x74.data.inc.c>
};

/* gap sub-block @ 0x6BE8 (was gap+0x7C, 64 bytes) */
Vtx dEFCommonEffects2_gap_0x6B6C_sub_0x7C[4] = {
	#include <EFCommonEffects2/gap_0x6B6C_sub_0x7C.vtx.inc.c>
};

/* gap sub-block @ 0x6C28 (was gap+0xBC, 216 bytes) */
Gfx dEFCommonEffects2_DL_0x6C28[27] = {
	#include <EFCommonEffects2/DL_0x6C28.dl.inc.c>
};

/* MObjSub: NessPKFlashMObjSub @ 0x6D00 */
MObjSub dEFCommonEffects2_NessPKFlashMObjSub_MObjSub[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 1.0f,
		1.0f, 1.0f,
		(void**)0x00000001,
		0x1B65,
		0x1B, 0x0A,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x3727C5AC,
		{ { 0x37, 0x27, 0xC5, 0xAC } },
		0x3F, 0x80, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0x12 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0, 0,
		0, 0,
	}
};

PAD(24);

/* Raw data from file offset 0x6D90 to 0x6E20 (144 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dEFCommonEffects2_NessPKFlashAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dEFCommonEffects2_NessPKFlashAnimJoint_AnimJoint_0x6D98,
};

u32 dEFCommonEffects2_NessPKFlashAnimJoint_AnimJoint_0x6D98[] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x200, 16),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x180, 8),
	    0x3F400000,  /* 0.75f */
	    0x3CFFFEAF,  /* 0.03124937228858471f */
	    0x3F400000,  /* 0.75f */
	    0x3CFFFEAF,  /* 0.03124937228858471f */
	aobjEvent32SetValRateBlock(0x180, 8),
	    0x3F000000,  /* 0.5f */
	    0x3D000001,  /* 0.0312500037252903f */
	    0x3F000000,  /* 0.5f */
	    0x3D000001,  /* 0.0312500037252903f */
	aobjEvent32SetValRateBlock(0x380, 8),
	    0x3FA00000,  /* 1.25f */
	    0x3DBFFFFF,  /* 0.0937499925494194f */
	    0x3FA00000,  /* 1.25f */
	    0x3DBFFFFF,  /* 0.0937499925494194f */
	    0x3F800000,  /* 1.0f */
	    0x3D7FFFFF,  /* 0.0624999962747097f */
	aobjEvent32SetValRateBlock(0x380, 8),
	    0x40000000,  /* 2.0f */
	    0xBE0E3899,  /* -0.13888777792453766f */
	    0x40000000,  /* 2.0f */
	    0xBE0E3899,  /* -0.13888777792453766f */
	    0x40000000,  /* 2.0f */
	    0xBDE38DA3,  /* -0.11110999435186386f */
	aobjEvent32End(),
};

PAD(12);

/* Raw data from file offset 0x6E20 to 0x6EC0 (160 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dEFCommonEffects2_NessPKFlashMatAnimJoint_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dEFCommonEffects2_NessPKFlashMatAnimJoint_MatAnimJoint_0x6EB4,
};

u32 dEFCommonEffects2_NessPKFlashMatAnimJoint_MatAnimJoint_0x6E28[] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

u32 dEFCommonEffects2_NessPKFlashMatAnimJoint_MatAnimJoint_0x6EB4[] = {
	(u32)(dEFCommonEffects2_NessPKFlashMatAnimJoint_MatAnimJoint_0x6E28),
	aobjEvent32End(),
};

PAD(4);

