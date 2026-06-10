/* relocData file 84: EFCommonEffects2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u8 dEFCommonEffects2_CatchSwirlMatAnimJoint_Tex_0x2B78[];
extern Gfx dEFCommonEffects2_DL_0x5240[];
extern u16 dEFCommonEffects2_DeadExplode3_palette_0x5AE0[];
extern Vtx dEFCommonEffects2_FireSparkVtx_Vtx[];
extern u8 dEFCommonEffects2_FireSpark_Tex_0x21B8[];
extern Gfx dEFCommonEffects2_ReflectBreak_DL_0x3938[];
extern u8 dEFCommonEffects2_ReflectBreak_Tex_0x3658[];
extern Vtx dEFCommonEffects2_ReflectBreak_Vtx_0x3858[];
extern Vtx dEFCommonEffects2_ReflectBreak_Vtx_0x3898[];
extern u8 dEFCommonEffects2_Shadow_TextureImage[];
extern u16 dEFCommonEffects2_ShockSmall_palette_0x1660[];
extern Vtx dEFCommonEffects2_gap_0x14A0_sub_0x20[];
extern Vtx dEFCommonEffects2_gap_0x2310_sub_0x1C0[];
extern Vtx dEFCommonEffects2_gap_0x2FD0_sub_0x140[];
extern Vtx dEFCommonEffects2_gap_0x2FD0_sub_0x180[];
extern Vtx dEFCommonEffects2_gap_0x2FD0_sub_0x1C0[];
extern Vtx dEFCommonEffects2_gap_0x4F34_sub_0x164[];
extern Vtx dEFCommonEffects2_gap_0x4F34_sub_0x1A4[];
extern Vtx dEFCommonEffects2_gap_0x4F34_sub_0x1E4[];
extern Vtx dEFCommonEffects2_gap_0x6B6C_sub_0x7C[];
extern MObjSub *dEFCommonEffects2_gap_0x4F34_sub_0x14C[];
extern MObjSub *dEFCommonEffects2_gap_0x4F34_sub_0x154[];
extern MObjSub *dEFCommonEffects2_gap_0x4F34_sub_0x15C[];
extern MObjSub dEFCommonEffects2_DeadExplodeDefaultMObjSub_real[];
extern MObjSub dEFCommonEffects2_ReflectBreakMObjSub_real[];
extern MObjSub *dEFCommonEffects2_gap_0x2FD0_sub_0x128[];
extern MObjSub *dEFCommonEffects2_gap_0x2FD0_sub_0x130[];
extern MObjSub *dEFCommonEffects2_gap_0x2FD0_sub_0x138[];
extern MObjSub *dEFCommonEffects2_gap_0x6B6C_sub_0x74[];
extern void *dEFCommonEffects2_NessPKFlashMObjSub[];
extern MObjSub dEFCommonEffects2_NessPKFlashMObjSub_real[];

extern u8 dEFCommonEffects2_gap_0x1F18[];
extern u8 dEFCommonEffects2_Tex_0x1028[];
extern MObjSub *dEFCommonEffects2_gap_0x2310_sub_0x1A0[];
extern MObjSub *dEFCommonEffects2_gap_0x2310_sub_0x1A8[];
extern MObjSub *dEFCommonEffects2_gap_0x2310_sub_0x1B0[];
extern MObjSub *dEFCommonEffects2_gap_0x2310_sub_0x1B8[];
extern MObjSub dEFCommonEffects2_CatchSwirlMObjSub_real[];

extern MObjSub *dEFCommonEffects2_gap_0x1F18_sub_0x18[];
extern MObjSub *dEFCommonEffects2_gap_0x14A0_sub_0x18[];
extern void *dEFCommonEffects2_ShockSmallMObjSub_MObjSub_head[];
extern void *dEFCommonEffects2_ShockSmallMObjSub_MObjSub[];
extern MObjSub dEFCommonEffects2_ShockSmallMObjSub_MObjSub_real[];

extern u32 dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint_data[];
extern u16 dEFCommonEffects2_ShockSmall_palette_0x15E8[];
extern u16 dEFCommonEffects2_ShockSmall_palette_0x1610[];
extern u16 dEFCommonEffects2_ShockSmall_palette_0x1638[];
extern u32 dEFCommonEffects2_FireSparkAnimJoint_AnimJoint_0x20D8[];

extern u32 dEFCommonEffects2_FireSparkMatAnimJoint_MatAnimJoint_data[];

extern Gfx dEFCommonEffects2_ReflectBreak_DL_0x38D8[];
extern Gfx dEFCommonEffects2_ReflectBreak_DL_0x3958[];
extern DObjDLLink dEFCommonEffects2_ReflectBreak_DLLink_0x3988[];
extern DObjDLLink dEFCommonEffects2_ReflectBreak_DLLink_0x3998[];
extern DObjDesc dEFCommonEffects2_ReflectBreak_DObjDesc_0x39A8[];

extern u32 dEFCommonEffects2_DeadExplode3_MatAnimJoint_data_0x597C[];
extern u32 dEFCommonEffects2_DeadExplode3_MatAnimJoint_data_0x5998[];
extern AObjEvent32 *dEFCommonEffects2_DeadExplode3_MatAnimJoint_ptrs_0x59B4[];
extern u16 dEFCommonEffects2_DeadExplode3_palette_0x59C8[];
extern u16 dEFCommonEffects2_DeadExplode3_palette_0x59F0[];
extern u16 dEFCommonEffects2_DeadExplode3_palette_0x5A18[];
extern u16 dEFCommonEffects2_DeadExplode3_palette_0x5A40[];
extern u16 dEFCommonEffects2_DeadExplode3_palette_0x5A68[];
extern u16 dEFCommonEffects2_DeadExplode3_palette_0x5A90[];
extern u16 dEFCommonEffects2_DeadExplode3_palette_0x5AB8[];
extern u8 dEFCommonEffects2_Tex_0x5B08[];
extern u8 dEFCommonEffects2_Tex_0x5D10[];
extern u8 dEFCommonEffects2_Tex_0x5F18[];
extern u8 dEFCommonEffects2_Tex_0x6120[];
extern u8 dEFCommonEffects2_Tex_0x6328[];
extern u8 dEFCommonEffects2_Tex_0x6530[];
extern u8 dEFCommonEffects2_Tex_0x6738[];
extern u8 dEFCommonEffects2_Tex_0x6940[];
extern u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x28B8[];
extern u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x28F0[];
extern u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x2960[];
extern u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x29D0[];
extern u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint_0x2A40[];

extern u32 dEFCommonEffects2_CatchSwirlMatAnimJoint_AnimJoint_0x2AC8[];
extern u32 dEFCommonEffects2_CatchSwirlMatAnimJoint_AnimJoint_0x2AEC[];
extern u32 dEFCommonEffects2_CatchSwirlMatAnimJoint_AnimJoint_0x2B10[];
extern u32 dEFCommonEffects2_CatchSwirlMatAnimJoint_AnimJoint_0x2B34[];
extern AObjEvent32 *dEFCommonEffects2_CatchSwirlMatAnimJoint_ptrs_0x2B58[];
extern AObjEvent32 *dEFCommonEffects2_CatchSwirlMatAnimJoint_ptrs_0x2B5C[];
extern AObjEvent32 *dEFCommonEffects2_CatchSwirlMatAnimJoint_ptrs_0x2B60[];
extern AObjEvent32 *dEFCommonEffects2_CatchSwirlMatAnimJoint_ptrs_0x2B64[];
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
extern u32* dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5864[];
extern u32* dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5868[];
extern u32* dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x586C[];

extern u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x5880[];
extern u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x589C[];
extern u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58B8[];
extern u32* dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58D4[];
extern u32* dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58D8[];
extern u32* dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58DC[];

extern u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x58F0[];
extern u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x590C[];
extern u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5928[];
extern u32* dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5944[];
extern u32* dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5948[];
extern u32* dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x594C[];

extern u32 dEFCommonEffects2_DeadExplode3_MatAnimJoint_data[];
extern u32 dEFCommonEffects2_NessPKFlashAnimJoint_AnimJoint_0x6D98[];

extern u32 dEFCommonEffects2_NessPKFlashMatAnimJoint_MatAnimJoint_0x6E28[];
extern u32 dEFCommonEffects2_NessPKFlashMatAnimJoint_MatAnimJoint_0x6EB4[];
extern u8 dEFCommonEffects2_Tex_0x1688[];
extern u8 dEFCommonEffects2_Tex_0x1890[];
extern u8 dEFCommonEffects2_Tex_0x1A98[];
extern u8 dEFCommonEffects2_Tex_0x1CA0[];


/* Forward DObjDesc chain-target decls for fixRelocChain.py */
/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
/* Raw data from file offset 0x0000 to 0x1428 (5160 bytes) */
PAD(8);

/* gap sub-block @ 0x0008 (was gap+0x8, 1032 bytes) */
u8 dEFCommonEffects2_Tex_0x0008[1024] = {
	#include <EFCommonEffects2/Tex_0x0008.tex.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0410 (was gap+0x410, 1032 bytes) */
u8 dEFCommonEffects2_Tex_0x0410[1024] = {
	#include <EFCommonEffects2/Tex_0x0410.tex.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0818 (was gap+0x818, 1032 bytes) */
u8 dEFCommonEffects2_Tex_0x0818[1024] = {
	#include <EFCommonEffects2/Tex_0x0818.tex.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0C20 (was gap+0xC20, 1032 bytes) */
u8 dEFCommonEffects2_Tex_0x0C20[1024] = {
	#include <EFCommonEffects2/Tex_0x0C20.tex.inc.c>
};

PAD(8);

/* gap sub-block @ 0x1028 (was gap+0x1028, 1024 bytes) */
/* @tex fmt=IA16 dim=16x32 */
u8 dEFCommonEffects2_Tex_0x1028[1024] = {
	#include <EFCommonEffects2/Tex_0x1028.tex.inc.c>
};

/* ShockSmallMObjSub pointer-table head @ 0x1428 (4 B): head chain ptr to
 * the gap_0x14A0_sub_0x18 MObjSub** list (which points back into _real). */
void *dEFCommonEffects2_ShockSmallMObjSub_MObjSub_head[1] = {
	(void *)dEFCommonEffects2_gap_0x14A0_sub_0x18,
};

/* ShockSmall sprite-frame table @ 0x142C (20 B = 5 × 4 B). 5 frames of
 * the same IA16 16×32 (1024 B) sprite, in reverse-temporal order. */
void *dEFCommonEffects2_ShockSmallMObjSub_MObjSub[5] = {
	(void *)dEFCommonEffects2_Tex_0x1028,
	(void *)dEFCommonEffects2_Tex_0x0C20,
	(void *)dEFCommonEffects2_Tex_0x0818,
	(void *)dEFCommonEffects2_Tex_0x0410,
	(void *)dEFCommonEffects2_Tex_0x0008,
};

/* ShockSmall real MObjSub @ 0x1440 (120 B). Extends past 0x14A0 into
 * what was the leading PAD(24) of the next gap block; only the 8-B
 * gap_0x14A0_sub_0x18 (MObjSub** list) remains separately at 0x14B8. */
MObjSub dEFCommonEffects2_ShockSmallMObjSub_MObjSub_real[1] = {
	{
		0x0010,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)dEFCommonEffects2_ShockSmallMObjSub_MObjSub,
		0x0020, 0x0000, 0x0020, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		0x0000,
		0x0000, 0x0000, 0x0000,
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

/* Raw data from file offset 0x14B8 to 0x1500 (72 bytes) */
/* MObjSub** list head @ 0x14B8 — points to ShockSmallMObjSub_MObjSub_real. */
MObjSub *dEFCommonEffects2_gap_0x14A0_sub_0x18[2] = {
	dEFCommonEffects2_ShockSmallMObjSub_MObjSub_real,
	NULL,
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

u32 dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint_data[26] = {
	aobjEvent32SetVal0Rate(0x01E, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x01E, 19),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValBlock(0x001, 3),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint_data,
	(u32)dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint_data,
	aobjEvent32End(),
};

/* 4 CI4 palette frames @ 0x15E8/0x1610/0x1638/0x1660 (32 B each)
 * separated by PAD(8); leading PAD(12) and trailing PAD(8). The last
 * frame (0x1660) is loaded as a TLUT by FireSparkDisplayList+0x54
 * (MatAnimJoint+0xF0 in the original block offset). */
PAD(12);

u16 dEFCommonEffects2_ShockSmall_palette_0x15E8[16] = {
	#include <EFCommonEffects2/ShockSmall_palette_0x15E8.palette.inc.c>
};
PAD(8);

u16 dEFCommonEffects2_ShockSmall_palette_0x1610[16] = {
	#include <EFCommonEffects2/ShockSmall_palette_0x1610.palette.inc.c>
};
PAD(8);

u16 dEFCommonEffects2_ShockSmall_palette_0x1638[16] = {
	#include <EFCommonEffects2/ShockSmall_palette_0x1638.palette.inc.c>
};
PAD(8);

u16 dEFCommonEffects2_ShockSmall_palette_0x1660[16] = {
	#include <EFCommonEffects2/ShockSmall_palette_0x1660.palette.inc.c>
};
PAD(8);
/* @tex fmt=CI4 dim=32x32 */
u8 dEFCommonEffects2_Tex_0x1688[520] = {
	#include <EFCommonEffects2/Tex_0x1688.tex.inc.c>
};
/* @tex fmt=CI4 dim=32x32 */
u8 dEFCommonEffects2_Tex_0x1890[520] = {
	#include <EFCommonEffects2/Tex_0x1890.tex.inc.c>
};
/* @tex fmt=CI4 dim=32x32 */
u8 dEFCommonEffects2_Tex_0x1A98[520] = {
	#include <EFCommonEffects2/Tex_0x1A98.tex.inc.c>
};
/* @tex fmt=CI4 dim=32x32 */
u8 dEFCommonEffects2_Tex_0x1CA0[512] = {
	#include <EFCommonEffects2/Tex_0x1CA0.tex.inc.c>
};

/* MObjSub-list head @ 0x1ea0 — 6-entry MObjSub** array.
 * The real MObjSub data starts at +0x18 (dEFCommonEffects2_FireSparkMObjSub_MObjSub_real below). */
MObjSub **dEFCommonEffects2_FireSparkMObjSub_MObjSub[2] = {
	NULL,
	(MObjSub **)dEFCommonEffects2_gap_0x1F18_sub_0x18,
};

/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x8). */
void *dEFCommonEffects2_FireSparkMObjSub_MObjSub_sprites[4] = {
	(void *)&dEFCommonEffects2_Tex_0x1CA0,
	(void *)&dEFCommonEffects2_Tex_0x1A98,
	(void *)&dEFCommonEffects2_Tex_0x1890,
	(void *)&dEFCommonEffects2_Tex_0x1688,
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
	aobjEvent32SetValAfterBlock(0x3A0, 0),
	    0xC2B40000,  /* -90.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
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

u32 dEFCommonEffects2_FireSparkMatAnimJoint_MatAnimJoint_data[11] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32End(),
};

/* AObjEvent32 *[1] chain head @ 0x21A4 — chains forward into the script
 * @ data (the FireSpark MatAnimJoint script). MatAnimJoint+0x4 also chains
 * here, forming a head→ptrs→script triple indirect. */
AObjEvent32 *dEFCommonEffects2_FireSparkMatAnimJoint_MatAnimJoint_data_trail[1] = {
	(AObjEvent32 *)dEFCommonEffects2_FireSparkMatAnimJoint_MatAnimJoint_data,
};

PAD(16);

/* I4 texture (32x16, 256 B) @ 0x21B8 — shared sprite frame loaded by 4
 * DLs (DL_0x2500/2588/2610/2698) all via SetTextureImage at +0x3C. */
/* @tex fmt=I4 dim=32x16 */
u8 dEFCommonEffects2_FireSpark_Tex_0x21B8[256] = {
	#include <EFCommonEffects2/FireSpark_Tex_0x21B8.tex.inc.c>
};

/* CatchSwirlDObjDesc was MIS-TYPED — actually a 4-MObj wrapper @ 0x22B8.
 * Layout: 8 B leading PAD, 16 B = void *MObjSub **head[4] (each points to
 * a 2-entry MObjSub*[] list), then a real MObjSub @ +0x18 that spans
 * 120 B (consuming the trailing 56 B that used to be gap_0x2310). */
PAD(8);

/* MObjSub** head table @ 0x22C0 — 4 entries, each chains to a separate
 * 2-entry MObjSub* list (gap_0x2310_sub_0x1A0/_0x1A8/_0x1B0/_0x1B8). */
MObjSub **dEFCommonEffects2_CatchSwirlMObjSub_head[4] = {
	(MObjSub **)dEFCommonEffects2_gap_0x2310_sub_0x1A0,
	(MObjSub **)dEFCommonEffects2_gap_0x2310_sub_0x1A8,
	(MObjSub **)dEFCommonEffects2_gap_0x2310_sub_0x1B0,
	(MObjSub **)dEFCommonEffects2_gap_0x2310_sub_0x1B8,
};

/* Real MObjSub for CatchSwirl @ 0x22D0 (120 B, ends at 0x2347 — extends
 * past the conceptual 0x22B8..0x2310 region into what was gap_0x2310). */
MObjSub dEFCommonEffects2_CatchSwirlMObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_I, G_IM_SIZ_4b,
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

/* Raw data from file offset 0x2310 to 0x2760 (1104 bytes) — the leading
 * 56 B was absorbed by CatchSwirlMObjSub_real above. */

/* MObjSub @ 0x2348 */
MObjSub dEFCommonEffects2_gap_0x2310_sub_0x38[1] = {
	{
		0x0000,
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_I, G_IM_SIZ_4b,
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
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_I, G_IM_SIZ_4b,
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
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_I, G_IM_SIZ_4b,
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
MObjSub *dEFCommonEffects2_gap_0x2310_sub_0x1A0[2] = {
	dEFCommonEffects2_CatchSwirlMObjSub_real,
	NULL,
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
DObjDLLink dEFCommonEffects2_gap_0x2310_sub_0x410[2] = {
	{ 1, dEFCommonEffects2_DL_0x2500 },
	{ 4, NULL },
};

/* gap sub-block @ 0x2730 (was gap+0x420, 16 bytes) */
DObjDLLink dEFCommonEffects2_gap_0x2310_sub_0x420[2] = {
	{ 1, dEFCommonEffects2_DL_0x2588 },
	{ 4, NULL },
};

/* gap sub-block @ 0x2740 (was gap+0x430, 16 bytes) */
DObjDLLink dEFCommonEffects2_gap_0x2310_sub_0x430[2] = {
	{ 1, dEFCommonEffects2_DL_0x2610 },
	{ 4, NULL },
};

/* gap sub-block @ 0x2750 (was gap+0x440, 16 bytes) */
DObjDLLink dEFCommonEffects2_gap_0x2310_sub_0x440[2] = {
	{ 1, dEFCommonEffects2_DL_0x2698 },
	{ 4, NULL },
};

/* MObjSub: CatchSwirlMObjSub @ 0x2760 */
/* CatchSwirlDObjDesc was MIS-TYPED (formerly "CatchSwirlMObjSub_MObjSub"
 * + gap_0x27D8). Actually a 7-entry DObjDesc[] scene graph @ 0x2760:
 *   [0] root,         [1] Y-rotation parent,
 *   [2..5] 4 sprite quads at 4 rotations around Y axis (one DLLink each),
 *   [6] terminator id=18. Followed by PAD(12). */
DObjDesc dEFCommonEffects2_CatchSwirlDObjDesc[7] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 1.570796012878418f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dEFCommonEffects2_gap_0x2310_sub_0x410, { 0.24000099301338196f, 113.08944702148438f, -51.662330627441406f }, { 0.0f, 0.0f, 0.0f }, { 0.6636480093002319f, 0.6145380139350891f, 0.6636480093002319f } },
	{ 2, (void *)dEFCommonEffects2_gap_0x2310_sub_0x420, { 0.24000099301338196f, 51.662330627441406f, 113.08944702148438f }, { 1.570796012878418f, 0.0f, 0.0f }, { 0.6636480093002319f, 0.6145380139350891f, 0.6636480093002319f } },
	{ 2, (void *)dEFCommonEffects2_gap_0x2310_sub_0x430, { 0.24000099301338196f, -113.08946228027344f, 51.66230392456055f }, { 3.1415929794311523f, 0.0f, 0.0f }, { 0.6636480093002319f, 0.6145380139350891f, 0.6636480093002319f } },
	{ 2, (void *)dEFCommonEffects2_gap_0x2310_sub_0x440, { 0.24000099301338196f, -51.662330627441406f, -113.08944702148438f }, { -1.570796012878418f, 0.0f, 0.0f }, { 0.6636480093002319f, 0.6145380139350891f, 0.6636480093002319f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

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
/* CatchSwirl material AnimJoint table for 6 MObjs:
 *   [0]=NULL, [1]=NULL, [2..5]=ptrs to 4 identical scripts.
 * The triple-indirect MObj->ptrs->script pattern resolves to
 * AObjEvent32 *[1] arrays at consecutive 4-byte offsets. */
AObjEvent32 **dEFCommonEffects2_CatchSwirlMatAnimJoint_MatAnimJoint[6] = {
	NULL,
	NULL,
	dEFCommonEffects2_CatchSwirlMatAnimJoint_ptrs_0x2B58,
	dEFCommonEffects2_CatchSwirlMatAnimJoint_ptrs_0x2B5C,
	dEFCommonEffects2_CatchSwirlMatAnimJoint_ptrs_0x2B60,
	dEFCommonEffects2_CatchSwirlMatAnimJoint_ptrs_0x2B64,
};

/* Script @ 0x2AC8: 9 words / 0x24 bytes. Material color ramp. */
u32 dEFCommonEffects2_CatchSwirlMatAnimJoint_AnimJoint_0x2AC8[9] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFF7DFF,
	aobjEvent32SetExtValBlock(0x001, 8),
	    0xFFA129FF,
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFF72008D,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFF72008D,
	aobjEvent32End(),
};

/* Script @ 0x2AEC: identical to 0x2AC8. */
u32 dEFCommonEffects2_CatchSwirlMatAnimJoint_AnimJoint_0x2AEC[9] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFF7DFF,
	aobjEvent32SetExtValBlock(0x001, 8),
	    0xFFA129FF,
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFF72008D,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFF72008D,
	aobjEvent32End(),
};

/* Script @ 0x2B10: identical to 0x2AC8. */
u32 dEFCommonEffects2_CatchSwirlMatAnimJoint_AnimJoint_0x2B10[9] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFF7DFF,
	aobjEvent32SetExtValBlock(0x001, 8),
	    0xFFA129FF,
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFF72008D,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFF72008D,
	aobjEvent32End(),
};

/* Script @ 0x2B34: identical to 0x2AC8. */
u32 dEFCommonEffects2_CatchSwirlMatAnimJoint_AnimJoint_0x2B34[9] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFF7DFF,
	aobjEvent32SetExtValBlock(0x001, 8),
	    0xFFA129FF,
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFF72008D,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFF72008D,
	aobjEvent32End(),
};

/* Per-MObj AObjEvent32 *[1] arrays at 0x2B58..0x2B67. */
AObjEvent32 *dEFCommonEffects2_CatchSwirlMatAnimJoint_ptrs_0x2B58[1] = {
	(AObjEvent32 *)dEFCommonEffects2_CatchSwirlMatAnimJoint_AnimJoint_0x2AC8,
};

AObjEvent32 *dEFCommonEffects2_CatchSwirlMatAnimJoint_ptrs_0x2B5C[1] = {
	(AObjEvent32 *)dEFCommonEffects2_CatchSwirlMatAnimJoint_AnimJoint_0x2AEC,
};

AObjEvent32 *dEFCommonEffects2_CatchSwirlMatAnimJoint_ptrs_0x2B60[1] = {
	(AObjEvent32 *)dEFCommonEffects2_CatchSwirlMatAnimJoint_AnimJoint_0x2B10,
};

AObjEvent32 *dEFCommonEffects2_CatchSwirlMatAnimJoint_ptrs_0x2B64[1] = {
	(AObjEvent32 *)dEFCommonEffects2_CatchSwirlMatAnimJoint_AnimJoint_0x2B34,
};

PAD(16);

/* IA16 texture (1024 B) @ 0x2B78, referenced by DL_0x31D0+0x34,
 * DL_0x3258+0x34, DL_0x32E0+0x34. LoadBlock count=511 16b. */
/* @tex fmt=IA8 dim=32x32 */
u8 dEFCommonEffects2_CatchSwirlMatAnimJoint_Tex_0x2B78[1024] = {
	#include <EFCommonEffects2/CatchSwirlMatAnimJoint_Tex_0x2B78.tex.inc.c>
};

/* ReflectBreakDObjDesc was MIS-TYPED — actually a 3-MObj wrapper @ 0x2F78.
 * Layout: 8 B header (zeros), 12 B = MObjSub **head[3], 4 B reserved
 * (sprite-count or similar), then MObjSub_real @ +0x18 (120 B) absorbing
 * the former 56 B gap_0x2FD0. */
PAD(8);

/* MObjSub** head table @ 0x2F80 — 3 entries. */
MObjSub **dEFCommonEffects2_ReflectBreakMObjSub_head[3] = {
	(MObjSub **)dEFCommonEffects2_gap_0x2FD0_sub_0x128,
	(MObjSub **)dEFCommonEffects2_gap_0x2FD0_sub_0x130,
	(MObjSub **)dEFCommonEffects2_gap_0x2FD0_sub_0x138,
};

PAD(4);

/* Real MObjSub @ 0x2F90 (120 B, ends at 0x3008 — absorbs the former 56 B
 * gap_0x2FD0). IA16 32×32 with custom envcolor/light. */
MObjSub dEFCommonEffects2_ReflectBreakMObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x1200,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0020,
		0x0020, 0x0020, 0x0040,
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

/* Raw data from file offset 0x2FD0 to 0x3398 (968 bytes) — leading 56 B
 * absorbed by ReflectBreakMObjSub_real above. */

/* MObjSub @ 0x3008 */
MObjSub dEFCommonEffects2_gap_0x2FD0_sub_0x38[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x1200,
		G_IM_FMT_IA, G_IM_SIZ_8b,
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
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x1200,
		G_IM_FMT_IA, G_IM_SIZ_8b,
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
MObjSub *dEFCommonEffects2_gap_0x2FD0_sub_0x128[2] = {
	dEFCommonEffects2_ReflectBreakMObjSub_real,
	NULL,
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
DObjDLLink dEFCommonEffects2_gap_0x2FD0_sub_0x398[2] = {
	{ 1, dEFCommonEffects2_DL_0x31D0 },
	{ 4, NULL },
};

/* gap sub-block @ 0x3378 (was gap+0x3A8, 16 bytes) */
DObjDLLink dEFCommonEffects2_gap_0x2FD0_sub_0x3A8[2] = {
	{ 1, dEFCommonEffects2_DL_0x3258 },
	{ 4, NULL },
};

/* gap sub-block @ 0x3388 (was gap+0x3B8, 16 bytes) */
DObjDLLink dEFCommonEffects2_gap_0x2FD0_sub_0x3B8[2] = {
	{ 1, dEFCommonEffects2_DL_0x32E0 },
	{ 4, NULL },
};

/* ReflectBreakDObjDesc was MIS-TYPED (formerly "ReflectBreakMObjSub_MObjSub"
 * + gap_0x3410). Actually a 6-entry DObjDesc[] scene graph @ 0x3398:
 *   [0] root, [1] X-translation parent, [2..4] 3 shard quads w/ DL bindings,
 *   [5] terminator id=18. */
DObjDesc dEFCommonEffects2_ReflectBreakDObjDesc[6] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { -425.8404541015625f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dEFCommonEffects2_gap_0x2FD0_sub_0x398, { 81.69196319580078f, 108.93391418457031f, 0.0f }, { 0.0f, 0.0f, -0.38600000739097595f }, { 2.9309499263763428f, 1.31181001663208f, 0.7200000286102295f } },
	{ 2, (void *)dEFCommonEffects2_gap_0x2FD0_sub_0x3A8, { 67.28166198730469f, 11.78016471862793f, 0.0f }, { 0.0f, 0.0f, 0.47999900579452515f }, { 2.9309499263763428f, 0.9316840171813965f, 0.7200000286102295f } },
	{ 2, (void *)dEFCommonEffects2_gap_0x2FD0_sub_0x3B8, { 31.792301177978516f, 43.32387161254883f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 2.9309499263763428f, 0.9316840171813965f, 0.7200000286102295f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
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

u32 dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint_data[37] = {
	aobjEvent32SetExtVal(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x008, 0),
	    0xACE0FF00,  /* -6.394773599538439e-12f */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtVal(0x001, 11),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32Wait(3),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint_data,
	aobjEvent32SetExtVal(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x008, 0),
	    0xACE0FF00,  /* -6.394773599538439e-12f */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtVal(0x001, 11),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32Wait(3),
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint_data + 0x2C),
	aobjEvent32SetExtVal(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x008, 0),
	    0xACE0FF00,  /* -6.394773599538439e-12f */
	aobjEvent32SetExtValBlock(0x001, 5),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtVal(0x001, 11),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32Wait(3),
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint_data + 0x58),
	(u32)dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint_data,
	(u32)((u8*)dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint_data + 0x2C),
	(u32)((u8*)dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint_data + 0x58),
	aobjEvent32End(),
};

/* Trail layout (1056 B total):
 *   0x000..0x00F  PAD(16)                                — alignment
 *   0x010..0x20F  Tex_0x3658 (I4 32x32, 512 B)          — DL_C SetTexImage
 *   0x210..0x24F  Vtx_0x3858[4]                          — DL_B SPVertex
 *   0x250..0x28F  Vtx_0x3898[4]                          — DL_D SPVertex
 *   0x290..0x2EF  DL_0x38D8[12]                          — texture-setup DL
 *   0x2F0..0x30F  DL_0x3938[4]                           — draw sub-DL
 *   0x310..0x33F  DL_0x3958[6]                           — second-MObj draw DL
 *   0x340..0x34F  DLLink_0x3988[2]                       — binds DL_0x38D8
 *   0x350..0x35F  DLLink_0x3998[2]                       — binds DL_0x3958
 *   0x360..0x40F  DObjDesc_0x39A8[4]                     — scene graph entries
 *   0x410..0x417  PAD(8)
 *   0x418..0x41F  trailing gsSPEndDisplayList (orphan)
 */
PAD(16);

/* @tex fmt=I4 dim=32x32 */
u8 dEFCommonEffects2_ReflectBreak_Tex_0x3658[512] = {
	#include <EFCommonEffects2/ReflectBreak_Tex_0x3658.tex.inc.c>
};

Vtx dEFCommonEffects2_ReflectBreak_Vtx_0x3858[4] = {
	#include <EFCommonEffects2/ReflectBreak_Vtx_0x3858.vtx.inc.c>
};

Vtx dEFCommonEffects2_ReflectBreak_Vtx_0x3898[4] = {
	#include <EFCommonEffects2/ReflectBreak_Vtx_0x3898.vtx.inc.c>
};

Gfx dEFCommonEffects2_ReflectBreak_DL_0x38D8[12] = {
	#include <EFCommonEffects2/ReflectBreak_DL_0x38D8.dl.inc.c>
};

Gfx dEFCommonEffects2_ReflectBreak_DL_0x3938[4] = {
	#include <EFCommonEffects2/ReflectBreak_DL_0x3938.dl.inc.c>
};

Gfx dEFCommonEffects2_ReflectBreak_DL_0x3958[6] = {
	#include <EFCommonEffects2/ReflectBreak_DL_0x3958.dl.inc.c>
};

DObjDLLink dEFCommonEffects2_ReflectBreak_DLLink_0x3988[2] = {
	{ 1, dEFCommonEffects2_ReflectBreak_DL_0x38D8 },
	{ 4, NULL },
};

DObjDLLink dEFCommonEffects2_ReflectBreak_DLLink_0x3998[2] = {
	{ 1, dEFCommonEffects2_ReflectBreak_DL_0x3958 },
	{ 4, NULL },
};

DObjDesc dEFCommonEffects2_ReflectBreak_DObjDesc_0x39A8[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, dEFCommonEffects2_ReflectBreak_DLLink_0x3988, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, dEFCommonEffects2_ReflectBreak_DLLink_0x3998, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Trailing orphan gsSPEndDisplayList @ 0x3A60 (8 B). */
Gfx dEFCommonEffects2_ReflectBreak_DL_end_0x3A60[1] = {
	gsSPEndDisplayList(),
};

/* Raw data from file offset 0x3A68 to 0x4F08 (5280 bytes) */
u8 dEFCommonEffects2_Shadow_TextureImage[5280] = {
	#include <EFCommonEffects2/Shadow_TextureImage.tex.inc.c>
};

/* DeadExplodeDefaultDObjDesc was MIS-TYPED — actually a 3-MObj wrapper.
 * Layout: 4 B header (zero), 12 B = MObjSub **head[3] (each chains to a
 * MObjSub*[2] list), then MObjSub_real @ +0x10 spanning 120 B into what
 * was gap_0x4F34 (92 B of MObjSub trailing fields). */
PAD(4);

/* MObjSub** head table @ 0x4F0C — 3 entries. */
MObjSub **dEFCommonEffects2_DeadExplodeDefaultMObjSub_head[3] = {
	(MObjSub **)dEFCommonEffects2_gap_0x4F34_sub_0x14C,
	(MObjSub **)dEFCommonEffects2_gap_0x4F34_sub_0x154,
	(MObjSub **)dEFCommonEffects2_gap_0x4F34_sub_0x15C,
};

/* Real MObjSub @ 0x4F18 (120 B, ends at 0x4F90 — absorbs the former 92 B
 * gap_0x4F34 block; gap_0x4F34_sub_0x5C starts right where this ends). */
MObjSub dEFCommonEffects2_DeadExplodeDefaultMObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0020,
		0x0040, 0x0040, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0xFF, 0xFF, 0xBB, 0x00 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x51, 0x36, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x4F34 to 0x53E8 (1204 bytes) — leading 92 B
 * absorbed by DeadExplodeDefaultMObjSub_real above. */

/* MObjSub @ 0x4F90 */
MObjSub dEFCommonEffects2_gap_0x4F34_sub_0x5C[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_IA, G_IM_SIZ_8b,
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
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0040, 0x0000, 0x0060, 0x0020,
		1,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_IA, G_IM_SIZ_8b,
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
MObjSub *dEFCommonEffects2_gap_0x4F34_sub_0x14C[2] = {
	dEFCommonEffects2_DeadExplodeDefaultMObjSub_real,
	NULL,
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
DObjDLLink dEFCommonEffects2_gap_0x4F34_sub_0x484[2] = {
	{ 1, dEFCommonEffects2_DL_0x5218 },
	{ 4, NULL },
};

/* gap sub-block @ 0x53C8 (was gap+0x494, 16 bytes) */
DObjDLLink dEFCommonEffects2_gap_0x4F34_sub_0x494[2] = {
	{ 1, dEFCommonEffects2_DL_0x52B0 },
	{ 4, NULL },
};

/* gap sub-block @ 0x53D8 (was gap+0x4A4, 16 bytes) */
DObjDLLink dEFCommonEffects2_gap_0x4F34_sub_0x4A4[2] = {
	{ 1, dEFCommonEffects2_DL_0x5310 },
	{ 4, NULL },
};

/* DeadExplodeDefaultDObjDesc was MIS-TYPED (formerly
 * "DeadExplodeDefaultMObjSub_MObjSub" + gap_0x5460). Actually a 5-entry
 * DObjDesc[] scene graph @ 0x53E8:
 *   [0] root, [1..3] three explosion-shard DObjs with DL bindings,
 *   [4] terminator id=18. Followed by PAD(12). */
DObjDesc dEFCommonEffects2_DeadExplodeDefaultDObjDesc[5] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dEFCommonEffects2_gap_0x4F34_sub_0x484, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 6.428007125854492f, 17.499996185302734f, 1.0f } },
	{ 1, (void *)dEFCommonEffects2_gap_0x4F34_sub_0x494, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 4.0268449783325195f, 16.42875862121582f, 1.0f } },
	{ 1, (void *)dEFCommonEffects2_gap_0x4F34_sub_0x4A4, { 0.0f, 0.0f, 0.0f }, { 0.0f, 12.217305183410645f, 0.0f }, { 8.693626403808594f, 17.499996185302734f, 8.60861587524414f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

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

u32 * dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5864[] = { dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5810 };

u32 * dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5868[] = { dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x582C };

u32 * dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x586C[] = { dEFCommonEffects2_DeadExplode2_MatAnimJoint_0x5848 };

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

u32 * dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58D4[] = { dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x5880 };

u32 * dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58D8[] = { dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x589C };

u32 * dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58DC[] = { dEFCommonEffects2_DeadExplode4_MatAnimJoint_0x58B8 };

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

u32 * dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5944[] = { dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x58F0 };

u32 * dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5948[] = { dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x590C };

u32 * dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x594C[] = { dEFCommonEffects2_DeadExplode1_MatAnimJoint_0x5928 };

/* Raw data from file offset 0x5950 to 0x6B40 (4592 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dEFCommonEffects2_DeadExplode3_MatAnimJoint[4] = {
	NULL,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode3_MatAnimJoint_ptrs_0x59B4,
	(AObjEvent32 *)((u8 *)dEFCommonEffects2_DeadExplode3_MatAnimJoint_ptrs_0x59B4 + 4),
	(AObjEvent32 *)((u8 *)dEFCommonEffects2_DeadExplode3_MatAnimJoint_ptrs_0x59B4 + 8),
};

/* Script 0 (MObj 1) @ 0x5960 — material color/alpha ramp. */
u32 dEFCommonEffects2_DeadExplode3_MatAnimJoint_data[7] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xCDFFFF99,
	aobjEvent32SetExtValBlock(0x001, 30),
	    0xCDFFFF99,
	aobjEvent32SetExtValBlock(0x001, 6),
	    0xCDFFFF00,
	aobjEvent32End(),
};

/* Script 1 (MObj 2) @ 0x597C — identical shape to Script 0. */
u32 dEFCommonEffects2_DeadExplode3_MatAnimJoint_data_0x597C[7] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 30),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 6),
	    0xFFFFFF00,
	aobjEvent32End(),
};

/* Script 2 (MObj 3) @ 0x5998 — same opcode shape but different args/payloads
 * than Script 0/1 (uses 0x60FF0066/0x60FF0000 instead of 0xCDFFFF99/0xFFFFFFFF,
 * and payloads 0/20/16 instead of 0/30/6). */
u32 dEFCommonEffects2_DeadExplode3_MatAnimJoint_data_0x5998[7] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0x60FF0066,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0x60FF0066,
	aobjEvent32SetExtValBlock(0x001, 16),
	    0x60FF0000,
	aobjEvent32End(),
};

/* AObjEvent32 *[3] per-MObj script-pointer table @ 0x59B4. Resolves the
 * MatAnimJoint[1..3] entries to their respective scripts. */
AObjEvent32 *dEFCommonEffects2_DeadExplode3_MatAnimJoint_ptrs_0x59B4[3] = {
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode3_MatAnimJoint_data,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode3_MatAnimJoint_data_0x597C,
	(AObjEvent32 *)dEFCommonEffects2_DeadExplode3_MatAnimJoint_data_0x5998,
};

PAD(8);

/* 8 CI4 palette frames @ 0x59C8..0x5AFF, separated by PAD(8). The last
 * frame @ 0x5AE0 is loaded as a TLUT by DL_0x6C28+0x44. */
u16 dEFCommonEffects2_DeadExplode3_palette_0x59C8[16] = {
	#include <EFCommonEffects2/DeadExplode3_palette_0x59C8.palette.inc.c>
};
PAD(8);

u16 dEFCommonEffects2_DeadExplode3_palette_0x59F0[16] = {
	#include <EFCommonEffects2/DeadExplode3_palette_0x59F0.palette.inc.c>
};
PAD(8);

u16 dEFCommonEffects2_DeadExplode3_palette_0x5A18[16] = {
	#include <EFCommonEffects2/DeadExplode3_palette_0x5A18.palette.inc.c>
};
PAD(8);

u16 dEFCommonEffects2_DeadExplode3_palette_0x5A40[16] = {
	#include <EFCommonEffects2/DeadExplode3_palette_0x5A40.palette.inc.c>
};
PAD(8);

u16 dEFCommonEffects2_DeadExplode3_palette_0x5A68[16] = {
	#include <EFCommonEffects2/DeadExplode3_palette_0x5A68.palette.inc.c>
};
PAD(8);

u16 dEFCommonEffects2_DeadExplode3_palette_0x5A90[16] = {
	#include <EFCommonEffects2/DeadExplode3_palette_0x5A90.palette.inc.c>
};
PAD(8);

u16 dEFCommonEffects2_DeadExplode3_palette_0x5AB8[16] = {
	#include <EFCommonEffects2/DeadExplode3_palette_0x5AB8.palette.inc.c>
};
PAD(8);

u16 dEFCommonEffects2_DeadExplode3_palette_0x5AE0[16] = {
	#include <EFCommonEffects2/DeadExplode3_palette_0x5AE0.palette.inc.c>
};
PAD(8);

/* 8 CI4 sprite-frame textures (32x32, 512 B each) @ 0x5B08..0x6B3F,
 * separated by PAD(8). NessPKFlashDObjDesc's 8 chain-pointer slots at
 * +0x8..+0x24 target these in reverse order (newest frame first). */
/* @tex fmt=CI4 dim=32x32 */
u8 dEFCommonEffects2_Tex_0x5B08[512] = {
	#include <EFCommonEffects2/Tex_0x5B08.tex.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x32 */
u8 dEFCommonEffects2_Tex_0x5D10[512] = {
	#include <EFCommonEffects2/Tex_0x5D10.tex.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x32 */
u8 dEFCommonEffects2_Tex_0x5F18[512] = {
	#include <EFCommonEffects2/Tex_0x5F18.tex.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x32 */
u8 dEFCommonEffects2_Tex_0x6120[512] = {
	#include <EFCommonEffects2/Tex_0x6120.tex.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x32 */
u8 dEFCommonEffects2_Tex_0x6328[512] = {
	#include <EFCommonEffects2/Tex_0x6328.tex.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x32 */
u8 dEFCommonEffects2_Tex_0x6530[512] = {
	#include <EFCommonEffects2/Tex_0x6530.tex.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x32 */
u8 dEFCommonEffects2_Tex_0x6738[512] = {
	#include <EFCommonEffects2/Tex_0x6738.tex.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x32 */
u8 dEFCommonEffects2_Tex_0x6940[512] = {
	#include <EFCommonEffects2/Tex_0x6940.tex.inc.c>
};

/* NessPKFlashDObjDesc was MIS-TYPED — actually a MObjSub wrapper @ 0x6B40.
 * Layout: 4 B leading PAD (id=0), 4 B head ptr, 32 B = void *sprites[8]
 * (chain to the 8 CI4 32x32 sprite-frame textures in DeadExplode3 trail),
 * then MObjSub_real @ +0x28 (120 B) absorbing the former 116 B gap_0x6B6C. */
PAD(4);

/* MObjSub** head ptr @ 0x6B44 — chains to the 2-entry MObjSub*[] list. */
void *dEFCommonEffects2_NessPKFlashMObjSub_head[1] = {
	(void *)dEFCommonEffects2_gap_0x6B6C_sub_0x74,
};

/* Sprite-frame pointer table @ 0x6B48 — 8 chain ptrs to the CI4 32×32
 * sprite frames in DeadExplode3 trail (newest frame first). */
void *dEFCommonEffects2_NessPKFlashMObjSub[8] = {
	(void *)dEFCommonEffects2_Tex_0x6940,
	(void *)dEFCommonEffects2_Tex_0x6738,
	(void *)dEFCommonEffects2_Tex_0x6530,
	(void *)dEFCommonEffects2_Tex_0x6328,
	(void *)dEFCommonEffects2_Tex_0x6120,
	(void *)dEFCommonEffects2_Tex_0x5F18,
	(void *)dEFCommonEffects2_Tex_0x5D10,
	(void *)dEFCommonEffects2_Tex_0x5B08,
};

/* Real MObjSub @ 0x6B68 (120 B, ends at 0x6BE0 — absorbs the former
 * 116 B gap_0x6B6C). Uses CI4 32×32 sprite format with palette TLUT. */
MObjSub dEFCommonEffects2_NessPKFlashMObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dEFCommonEffects2_NessPKFlashMObjSub,
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
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x59, 0x59, 0x59, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x6BE0 to 0x6D00 (288 bytes) — leading 116 B
 * absorbed by NessPKFlashMObjSub_real above. */
MObjSub *dEFCommonEffects2_gap_0x6B6C_sub_0x74[2] = {
	dEFCommonEffects2_NessPKFlashMObjSub_real,
	NULL,
};

/* gap sub-block @ 0x6BE8 (was gap+0x7C, 64 bytes) */
Vtx dEFCommonEffects2_gap_0x6B6C_sub_0x7C[4] = {
	#include <EFCommonEffects2/gap_0x6B6C_sub_0x7C.vtx.inc.c>
};

/* gap sub-block @ 0x6C28 (was gap+0xBC, 216 bytes) */
Gfx dEFCommonEffects2_DL_0x6C28[27] = {
	#include <EFCommonEffects2/DL_0x6C28.dl.inc.c>
};

/* NessPKFlashDObjDesc was MIS-TYPED (formerly "NessPKFlashMObjSub_MObjSub"
 * + PAD(24)). Actually a 3-entry DObjDesc[] scene graph @ 0x6D00:
 *   [0] root, [1] DL-binding entry with tiny S=(1e-5,1e-5,1) (dl→DL_0x6C28),
 *   [2] terminator id=18. Followed by PAD(12). */
DObjDesc dEFCommonEffects2_NessPKFlashDObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dEFCommonEffects2_DL_0x6C28, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

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
