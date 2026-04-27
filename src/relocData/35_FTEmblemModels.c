/* relocData file 35: FTEmblemModels */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern void *dFTEmblemModels_gap_0x14E8[];
extern void *dFTEmblemModels_gap_0x19B8[];
extern void *dFTEmblemModels_gap_0x2708[];
extern void *dFTEmblemModels_gap_0x3068[];
extern void *dFTEmblemModels_gap_0x3978[];
extern void *dFTEmblemModels_gap_0x48B8[];

extern MObjSub *dFTEmblemModels_Mario_MObjSubPtrArray[];

/* MObjSub array: Mario @ 0x0 (3 entries) */
MObjSub dFTEmblemModels_Mario_MObjSub[3] = {
	/* [0] @ 0x0 */
	{
		0x0000,
		0x00, 0x00,
		(void**)((u8*)dFTEmblemModels_Mario_MObjSubPtrArray + 0x8),
		0x0000, 0x0002, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0000,
		0x00, 0x00,
		0x0000,
		0x0000, 0x3000, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x02, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		1717986816, 0,
		0, 0,
	},
	/* [1] @ 0x78 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0002, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0000,
		0x00, 0x00,
		0x0000,
		0x0000, 0x3000, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x02, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		1717986816, 0,
		0, 0,
	},
	/* [2] @ 0xF0 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0002, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0000,
		0x00, 0x00,
		0x0000,
		0x0000, 0x3000, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x02, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		1717986816, 0,
		0, 0,
	},
};

/* MObjSub pointer array @ 0x168 (6 entries: 2× NULL leading pad,
 * 3× per-MObjSub pointers (each pointing to MObjSub[i]+0x8),
 * trailing NULL terminator). fixRelocChain.py rewrites the non-NULL
 * entries to chain-encoded form per the .reloc metadata. */
MObjSub *dFTEmblemModels_Mario_MObjSubPtrArray[] = {
	NULL,
	NULL,
	(MObjSub *)((u8 *)dFTEmblemModels_Mario_MObjSub + 0x08),
	(MObjSub *)((u8 *)dFTEmblemModels_Mario_MObjSub + 0x80),
	(MObjSub *)((u8 *)dFTEmblemModels_Mario_MObjSub + 0xF8),
	NULL,
};

/* Vtx: Mario @ 0x180 (96 vertices) */
Vtx dFTEmblemModels_Mario_Vtx[96] = {
	#include <FTEmblemModels/Mario.vtx.inc.c>
};

/* DisplayList: Mario @ 0x780 (528 bytes) */
Gfx dFTEmblemModels_Mario_DisplayList[66] = {
	#include <FTEmblemModels/Mario.dl.inc.c>
};

/* DObjDesc: Mario @ 0x990 (3 entries) */
DObjDesc dFTEmblemModels_Mario[] = {
	{ 0, (void*)0x00000000, { 219.00009155273438f, 645.0003051757812f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFTEmblemModels_Mario_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x0A14 to 0x0B00 (236 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFTEmblemModels_Mario_MatAnimJoint_0xA1C[];
extern u32 dFTEmblemModels_Mario_MatAnimJoint_0xA64[];
extern u32 dFTEmblemModels_Mario_MatAnimJoint_0xAAC[];
extern u32 dFTEmblemModels_Mario_MatAnimJoint_0xAF4[];

AObjEvent32 *dFTEmblemModels_Mario_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFTEmblemModels_Mario_MatAnimJoint_0xAF4,
};

u32 dFTEmblemModels_Mario_MatAnimJoint_0xA1C[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_Mario_MatAnimJoint_0xA1C),
};

u32 dFTEmblemModels_Mario_MatAnimJoint_0xA64[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_Mario_MatAnimJoint_0xA64),
};

u32 dFTEmblemModels_Mario_MatAnimJoint_0xAAC[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_Mario_MatAnimJoint_0xAAC),
};

u32 dFTEmblemModels_Mario_MatAnimJoint_0xAF4[] = {
	(u32)(dFTEmblemModels_Mario_MatAnimJoint_0xA1C),
	(u32)(dFTEmblemModels_Mario_MatAnimJoint_0xA64),
	(u32)(dFTEmblemModels_Mario_MatAnimJoint_0xAAC),
};

extern MObjSub *dFTEmblemModels_Donkey_MObjSubPtrArray[];

/* MObjSub array: Donkey @ 0xB00 (2 entries) */
MObjSub dFTEmblemModels_Donkey_MObjSub[2] = {
	/* [0] @ 0xB00 */
	{
		0x0000,
		0x00, 0x00,
		(void**)((u8*)dFTEmblemModels_Donkey_MObjSubPtrArray + 0x8),
		0x0000, 0x0002, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0000,
		0x00, 0x00,
		0x0000,
		0x0000, 0x3000, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x02, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		1717986816, 0,
		0, 0,
	},
	/* [1] @ 0xB78 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0002, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0000,
		0x00, 0x00,
		0x0000,
		0x0000, 0x3000, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x02, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		1717986816, 0,
		0, 0,
	},
};

/* MObjSub pointer array @ 0xBF0 — see Mario_MObjSubPtrArray for layout notes. */
MObjSub *dFTEmblemModels_Donkey_MObjSubPtrArray[] = {
	NULL,
	NULL,
	(MObjSub *)((u8 *)dFTEmblemModels_Donkey_MObjSub + 0x08),
	(MObjSub *)((u8 *)dFTEmblemModels_Donkey_MObjSub + 0x80),
	NULL,
};

PAD(4);

/* Vtx: Donkey @ 0xC08 (87 vertices) */
Vtx dFTEmblemModels_Donkey_Vtx[87] = {
	#include <FTEmblemModels/Donkey.vtx.inc.c>
};

/* DisplayList: Donkey @ 0x1178 (464 bytes) */
Gfx dFTEmblemModels_Donkey_DisplayList[58] = {
	#include <FTEmblemModels/Donkey.dl.inc.c>
};

/* DObjDesc: Donkey @ 0x1348 (3 entries) */
DObjDesc dFTEmblemModels_Donkey[] = {
	{ 0, (void*)0x00000000, { -111.86576843261719f, 639.1934814453125f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFTEmblemModels_Donkey_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x13CC to 0x1470 (164 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFTEmblemModels_Donkey_MatAnimJoint_0x13D4[];
extern u32 dFTEmblemModels_Donkey_MatAnimJoint_0x141C[];
extern u32 dFTEmblemModels_Donkey_MatAnimJoint_0x1464[];

AObjEvent32 *dFTEmblemModels_Donkey_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFTEmblemModels_Donkey_MatAnimJoint_0x1464,
};

u32 dFTEmblemModels_Donkey_MatAnimJoint_0x13D4[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,
	    0x26262600,
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,
	    0x26262600,
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,
	    0x26262600,
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,
	    0x26262600,
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,
	    0x00000000,
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	aobjEvent32Wait(1269),
};

u32 dFTEmblemModels_Donkey_MatAnimJoint_0x141C[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,
	    0x26262600,
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,
	    0x26262600,
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,
	    0x26262600,
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,
	    0x26262600,
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,
	    0x00000000,
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	aobjEvent32Wait(1287),
};

u32 dFTEmblemModels_Donkey_MatAnimJoint_0x1464[] = {
	aobjEvent32Wait(1269),
	aobjEvent32Wait(1287),
	aobjEvent32End(),
};

/* MObjSub: Metroid @ 0x1470 */
MObjSub dFTEmblemModels_Metroid_MObjSub = {
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	(void**)((u8*)dFTEmblemModels_gap_0x14E8 + 0x8),
	0x0000, 0x0002, 0x0000, 0x0000,
	0,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0.0f, 0.0f,
	(void**)0x00000000,
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	0x0000,
	0x0000, 0x3000, 0x0002,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x02, { 0x22, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	1717986816, 0,
	0, 0,
};

/* Raw data from file offset 0x14E8 to 0x14F8 (16 bytes) */
/* MObjSub.sprites pointer table @ +0x14E8 (4 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
void *dFTEmblemModels_gap_0x14E8[4] = {
	NULL,
	NULL,
	(void *)((u8 *)&dFTEmblemModels_Metroid_MObjSub + 0x8),
	NULL,
};

/* Vtx: Metroid @ 0x14F8 (40 vertices) */
Vtx dFTEmblemModels_Metroid_Vtx[40] = {
	#include <FTEmblemModels/Metroid.vtx.inc.c>
};

/* DisplayList: Metroid @ 0x1778 (232 bytes) */
Gfx dFTEmblemModels_Metroid_DisplayList[29] = {
	#include <FTEmblemModels/Metroid.dl.inc.c>
};

/* DObjDesc: Metroid @ 0x1860 (3 entries) */
DObjDesc dFTEmblemModels_Metroid[] = {
	{ 0, (void*)0x00000000, { 450.0f, 60.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFTEmblemModels_Metroid_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x18E4 to 0x1940 (92 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFTEmblemModels_Metroid_MatAnimJoint_0x18EC[];
extern u32 dFTEmblemModels_Metroid_MatAnimJoint_0x1934[];

AObjEvent32 *dFTEmblemModels_Metroid_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFTEmblemModels_Metroid_MatAnimJoint_0x1934,
};

u32 dFTEmblemModels_Metroid_MatAnimJoint_0x18EC[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_Metroid_MatAnimJoint_0x18EC),
};

u32 dFTEmblemModels_Metroid_MatAnimJoint_0x1934[] = {
	(u32)(dFTEmblemModels_Metroid_MatAnimJoint_0x18EC),
	aobjEvent32End(),
};

PAD(4);

/* MObjSub: Fox @ 0x1940 */
MObjSub dFTEmblemModels_Fox_MObjSub = {
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	(void**)((u8*)dFTEmblemModels_gap_0x19B8 + 0x8),
	0x0000, 0x0002, 0x0000, 0x0000,
	0,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0.0f, 0.0f,
	(void**)0x00000000,
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	0x0000,
	0x0000, 0x3000, 0x0002,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x02, { 0x22, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	1717986816, 0,
	0, 0,
};

/* Raw data from file offset 0x19B8 to 0x19C8 (16 bytes) */
/* MObjSub.sprites pointer table @ +0x19B8 (4 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
void *dFTEmblemModels_gap_0x19B8[4] = {
	NULL,
	NULL,
	(void *)((u8 *)&dFTEmblemModels_Fox_MObjSub + 0x8),
	NULL,
};

/* Vtx: Fox @ 0x19C8 (97 vertices) */
Vtx dFTEmblemModels_Fox_Vtx[97] = {
	#include <FTEmblemModels/Fox.vtx.inc.c>
};

/* DisplayList: Fox @ 0x1FD8 (504 bytes) */
Gfx dFTEmblemModels_Fox_DisplayList[63] = {
	#include <FTEmblemModels/Fox.dl.inc.c>
};

/* DObjDesc: Fox @ 0x21D0 (3 entries) */
DObjDesc dFTEmblemModels_Fox[] = {
	{ 0, (void*)0x00000000, { -570.0f, 240.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFTEmblemModels_Fox_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x2254 to 0x22B0 (92 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFTEmblemModels_Fox_MatAnimJoint_0x225C[];
extern u32 dFTEmblemModels_Fox_MatAnimJoint_0x22A4[];

AObjEvent32 *dFTEmblemModels_Fox_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFTEmblemModels_Fox_MatAnimJoint_0x22A4,
};

u32 dFTEmblemModels_Fox_MatAnimJoint_0x225C[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_Fox_MatAnimJoint_0x225C),
};

u32 dFTEmblemModels_Fox_MatAnimJoint_0x22A4[] = {
	(u32)(dFTEmblemModels_Fox_MatAnimJoint_0x225C),
	aobjEvent32End(),
};

PAD(4);

extern MObjSub *dFTEmblemModels_Zelda_MObjSubPtrArray[];

/* MObjSub array: Zelda @ 0x22B0 (3 entries) */
MObjSub dFTEmblemModels_Zelda_MObjSub[3] = {
	/* [0] @ 0x22B0 */
	{
		0x0000,
		0x00, 0x00,
		(void**)((u8*)dFTEmblemModels_Zelda_MObjSubPtrArray + 0x8),
		0x0000, 0x0002, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0000,
		0x00, 0x00,
		0x0000,
		0x0000, 0x3000, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x02, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		1717986816, 0,
		0, 0,
	},
	/* [1] @ 0x2328 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0002, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0000,
		0x00, 0x00,
		0x0000,
		0x0000, 0x3000, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x02, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		1717986816, 0,
		0, 0,
	},
	/* [2] @ 0x23A0 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0002, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0000,
		0x00, 0x00,
		0x0000,
		0x0000, 0x3000, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x02, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		1717986816, 0,
		0, 0,
	},
};

/* MObjSub pointer array @ 0x2418 — see Mario_MObjSubPtrArray for layout notes. */
MObjSub *dFTEmblemModels_Zelda_MObjSubPtrArray[] = {
	NULL,
	NULL,
	(MObjSub *)((u8 *)dFTEmblemModels_Zelda_MObjSub + 0x08),
	(MObjSub *)((u8 *)dFTEmblemModels_Zelda_MObjSub + 0x80),
	(MObjSub *)((u8 *)dFTEmblemModels_Zelda_MObjSub + 0xF8),
	NULL,
};

/* Vtx: Zelda @ 0x2430 (6 vertices) */
Vtx dFTEmblemModels_Zelda_Vtx[6] = {
	#include <FTEmblemModels/Zelda.vtx.inc.c>
};

/* DisplayList: Zelda @ 0x2490 (144 bytes) */
Gfx dFTEmblemModels_Zelda_DisplayList[18] = {
	#include <FTEmblemModels/Zelda.dl.inc.c>
};

/* DObjDesc: Zelda @ 0x2520 (3 entries) */
DObjDesc dFTEmblemModels_Zelda[] = {
	{ 0, (void*)0x00000000, { 333.0f, -617.999755859375f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFTEmblemModels_Zelda_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x25A4 to 0x2690 (236 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFTEmblemModels_Zelda_MatAnimJoint_0x25AC[];
extern u32 dFTEmblemModels_Zelda_MatAnimJoint_0x25F4[];
extern u32 dFTEmblemModels_Zelda_MatAnimJoint_0x263C[];
extern u32 dFTEmblemModels_Zelda_MatAnimJoint_0x2684[];

AObjEvent32 *dFTEmblemModels_Zelda_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFTEmblemModels_Zelda_MatAnimJoint_0x2684,
};

u32 dFTEmblemModels_Zelda_MatAnimJoint_0x25AC[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_Zelda_MatAnimJoint_0x25AC),
};

u32 dFTEmblemModels_Zelda_MatAnimJoint_0x25F4[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_Zelda_MatAnimJoint_0x25F4),
};

u32 dFTEmblemModels_Zelda_MatAnimJoint_0x263C[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_Zelda_MatAnimJoint_0x263C),
};

u32 dFTEmblemModels_Zelda_MatAnimJoint_0x2684[] = {
	(u32)(dFTEmblemModels_Zelda_MatAnimJoint_0x25AC),
	(u32)(dFTEmblemModels_Zelda_MatAnimJoint_0x25F4),
	(u32)(dFTEmblemModels_Zelda_MatAnimJoint_0x263C),
};

/* MObjSub: Yoshi @ 0x2690 */
MObjSub dFTEmblemModels_Yoshi_MObjSub = {
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	(void**)((u8*)dFTEmblemModels_gap_0x2708 + 0x8),
	0x0000, 0x0002, 0x0000, 0x0000,
	0,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0.0f, 0.0f,
	(void**)0x00000000,
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	0x0000,
	0x0000, 0x3000, 0x0002,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x02, { 0x22, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	1717986816, 0,
	0, 0,
};

/* Raw data from file offset 0x2708 to 0x2718 (16 bytes) */
/* MObjSub.sprites pointer table @ +0x2708 (4 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
void *dFTEmblemModels_gap_0x2708[4] = {
	NULL,
	NULL,
	(void *)((u8 *)&dFTEmblemModels_Yoshi_MObjSub + 0x8),
	NULL,
};

/* Vtx: Yoshi @ 0x2718 (95 vertices) */
Vtx dFTEmblemModels_Yoshi_Vtx[95] = {
	#include <FTEmblemModels/Yoshi.vtx.inc.c>
};

/* DisplayList: Yoshi @ 0x2D08 (520 bytes) */
Gfx dFTEmblemModels_Yoshi_DisplayList[65] = {
	#include <FTEmblemModels/Yoshi.dl.inc.c>
};

/* DObjDesc: Yoshi @ 0x2F10 (3 entries) */
DObjDesc dFTEmblemModels_Yoshi[] = {
	{ 0, (void*)0x00000000, { 44.686607360839844f, -628.1798095703125f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFTEmblemModels_Yoshi_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x2F94 to 0x2FF0 (92 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFTEmblemModels_Yoshi_MatAnimJoint_0x2F9C[];
extern u32 dFTEmblemModels_Yoshi_MatAnimJoint_0x2FE4[];

AObjEvent32 *dFTEmblemModels_Yoshi_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFTEmblemModels_Yoshi_MatAnimJoint_0x2FE4,
};

u32 dFTEmblemModels_Yoshi_MatAnimJoint_0x2F9C[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_Yoshi_MatAnimJoint_0x2F9C),
};

u32 dFTEmblemModels_Yoshi_MatAnimJoint_0x2FE4[] = {
	(u32)(dFTEmblemModels_Yoshi_MatAnimJoint_0x2F9C),
	aobjEvent32End(),
};

PAD(4);

/* MObjSub: FZero @ 0x2FF0 */
MObjSub dFTEmblemModels_FZero_MObjSub = {
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	(void**)((u8*)dFTEmblemModels_gap_0x3068 + 0x8),
	0x0000, 0x0002, 0x0000, 0x0000,
	0,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0.0f, 0.0f,
	(void**)0x00000000,
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	0x0000,
	0x0000, 0x3000, 0x0002,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x02, { 0x22, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	1717986816, 0,
	0, 0,
};

/* Raw data from file offset 0x3068 to 0x3078 (16 bytes) */
/* MObjSub.sprites pointer table @ +0x3068 (4 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
void *dFTEmblemModels_gap_0x3068[4] = {
	NULL,
	NULL,
	(void *)((u8 *)&dFTEmblemModels_FZero_MObjSub + 0x8),
	NULL,
};

/* Vtx: FZero @ 0x3078 (91 vertices) */
Vtx dFTEmblemModels_FZero_Vtx[91] = {
	#include <FTEmblemModels/FZero.vtx.inc.c>
};

/* DisplayList: FZero @ 0x3628 (512 bytes) */
Gfx dFTEmblemModels_FZero_DisplayList[64] = {
	#include <FTEmblemModels/FZero.dl.inc.c>
};

/* DObjDesc: FZero @ 0x3828 (3 entries) */
DObjDesc dFTEmblemModels_FZero[] = {
	{ 0, (void*)0x00000000, { -642.0f, -414.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFTEmblemModels_FZero_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x38AC to 0x3900 (84 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFTEmblemModels_FZero_MatAnimJoint_0x38B4[];
extern u32 dFTEmblemModels_FZero_MatAnimJoint_0x38FC[];

AObjEvent32 *dFTEmblemModels_FZero_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFTEmblemModels_FZero_MatAnimJoint_0x38FC,
};

u32 dFTEmblemModels_FZero_MatAnimJoint_0x38B4[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_FZero_MatAnimJoint_0x38B4),
};

u32 dFTEmblemModels_FZero_MatAnimJoint_0x38FC[] = {
	(u32)(dFTEmblemModels_FZero_MatAnimJoint_0x38B4),
};

/* MObjSub: Kirby @ 0x3900 */
MObjSub dFTEmblemModels_Kirby_MObjSub = {
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	(void**)((u8*)dFTEmblemModels_gap_0x3978 + 0x8),
	0x0000, 0x0002, 0x0000, 0x0000,
	0,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0.0f, 0.0f,
	(void**)0x00000000,
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	0x0000,
	0x0000, 0x3000, 0x0002,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x02, { 0x22, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	1717986816, 0,
	0, 0,
};

/* Raw data from file offset 0x3978 to 0x3988 (16 bytes) */
/* MObjSub.sprites pointer table @ +0x3978 (4 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
void *dFTEmblemModels_gap_0x3978[4] = {
	NULL,
	NULL,
	(void *)((u8 *)&dFTEmblemModels_Kirby_MObjSub + 0x8),
	NULL,
};

/* Vtx: Kirby @ 0x3988 (60 vertices) */
Vtx dFTEmblemModels_Kirby_Vtx[60] = {
	#include <FTEmblemModels/Kirby.vtx.inc.c>
};

/* DisplayList: Kirby @ 0x3D48 (288 bytes) */
Gfx dFTEmblemModels_Kirby_DisplayList[36] = {
	#include <FTEmblemModels/Kirby.dl.inc.c>
};

/* DObjDesc: Kirby @ 0x3E68 (3 entries) */
DObjDesc dFTEmblemModels_Kirby[] = {
	{ 0, (void*)0x00000000, { 330.0f, -270.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFTEmblemModels_Kirby_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x3EEC to 0x3F40 (84 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFTEmblemModels_Kirby_MatAnimJoint_0x3EF4[];
extern u32 dFTEmblemModels_Kirby_MatAnimJoint_0x3F3C[];

AObjEvent32 *dFTEmblemModels_Kirby_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFTEmblemModels_Kirby_MatAnimJoint_0x3F3C,
};

u32 dFTEmblemModels_Kirby_MatAnimJoint_0x3EF4[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_Kirby_MatAnimJoint_0x3EF4),
};

u32 dFTEmblemModels_Kirby_MatAnimJoint_0x3F3C[] = {
	(u32)(dFTEmblemModels_Kirby_MatAnimJoint_0x3EF4),
};

extern MObjSub *dFTEmblemModels_PMonsters_MObjSubPtrArray[];

/* MObjSub array: PMonsters @ 0x3F40 (2 entries) */
MObjSub dFTEmblemModels_PMonsters_MObjSub[2] = {
	/* [0] @ 0x3F40 */
	{
		0x0000,
		0x00, 0x00,
		(void**)((u8*)dFTEmblemModels_PMonsters_MObjSubPtrArray + 0x8),
		0x0000, 0x0002, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0000,
		0x00, 0x00,
		0x0000,
		0x0000, 0x3000, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x02, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		1717986816, 0,
		0, 0,
	},
	/* [1] @ 0x3FB8 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0002, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0000,
		0x00, 0x00,
		0x0000,
		0x0000, 0x3000, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x02, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		1717986816, 0,
		0, 0,
	},
};

/* MObjSub pointer array @ 0x4030 — see Mario_MObjSubPtrArray for layout notes. */
MObjSub *dFTEmblemModels_PMonsters_MObjSubPtrArray[] = {
	NULL,
	NULL,
	(MObjSub *)((u8 *)dFTEmblemModels_PMonsters_MObjSub + 0x08),
	(MObjSub *)((u8 *)dFTEmblemModels_PMonsters_MObjSub + 0x80),
	NULL,
};

PAD(4);

/* Vtx: PMonsters @ 0x4048 (84 vertices) */
Vtx dFTEmblemModels_PMonsters_Vtx[84] = {
	#include <FTEmblemModels/PMonsters.vtx.inc.c>
};

/* DisplayList: PMonsters @ 0x4588 (392 bytes) */
Gfx dFTEmblemModels_PMonsters_DisplayList[49] = {
	#include <FTEmblemModels/PMonsters.dl.inc.c>
};

/* DObjDesc: PMonsters @ 0x4710 (3 entries) */
DObjDesc dFTEmblemModels_PMonsters[] = {
	{ 0, (void*)0x00000000, { -390.0f, -90.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFTEmblemModels_PMonsters_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x4794 to 0x4840 (172 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFTEmblemModels_PMonsters_MatAnimJoint_0x479C[];
extern u32 dFTEmblemModels_PMonsters_MatAnimJoint_0x47E4[];
extern u32 dFTEmblemModels_PMonsters_MatAnimJoint_0x482C[];

AObjEvent32 *dFTEmblemModels_PMonsters_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFTEmblemModels_PMonsters_MatAnimJoint_0x482C,
};

u32 dFTEmblemModels_PMonsters_MatAnimJoint_0x479C[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_PMonsters_MatAnimJoint_0x479C),
};

u32 dFTEmblemModels_PMonsters_MatAnimJoint_0x47E4[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_PMonsters_MatAnimJoint_0x47E4),
};

u32 dFTEmblemModels_PMonsters_MatAnimJoint_0x482C[] = {
	(u32)(dFTEmblemModels_PMonsters_MatAnimJoint_0x479C),
	(u32)(dFTEmblemModels_PMonsters_MatAnimJoint_0x47E4),
	aobjEvent32End(),
};

PAD(8);

/* MObjSub: Mother @ 0x4840 */
MObjSub dFTEmblemModels_Mother_MObjSub = {
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	(void**)((u8*)dFTEmblemModels_gap_0x48B8 + 0x8),
	0x0000, 0x0002, 0x0000, 0x0000,
	0,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0.0f, 0.0f,
	(void**)0x00000000,
	0x0000,
	G_IM_FMT_RGBA, G_IM_SIZ_4b,
	0x0000,
	0x0000, 0x3000, 0x0002,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x02, { 0x22, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	1717986816, 0,
	0, 0,
};

/* Raw data from file offset 0x48B8 to 0x48C8 (16 bytes) */
/* MObjSub.sprites pointer table @ +0x48B8 (4 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
void *dFTEmblemModels_gap_0x48B8[4] = {
	NULL,
	NULL,
	(void *)((u8 *)&dFTEmblemModels_Mother_MObjSub + 0x8),
	NULL,
};

/* Vtx: Mother @ 0x48C8 (204 vertices) */
Vtx dFTEmblemModels_Mother_Vtx[204] = {
	#include <FTEmblemModels/Mother.vtx.inc.c>
};

/* DisplayList: Mother @ 0x5588 (1144 bytes) */
Gfx dFTEmblemModels_Mother_DisplayList[143] = {
	#include <FTEmblemModels/Mother.dl.inc.c>
};

/* DObjDesc: Mother @ 0x5A00 (3 entries) */
DObjDesc dFTEmblemModels_Mother[] = {
	{ 0, (void*)0x00000000, { -3.600000127335079e-05f, 9.999999974752427e-07f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFTEmblemModels_Mother_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x5A84 to 0x5AE0 (92 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFTEmblemModels_Mother_MatAnimJoint_0x5A8C[];
extern u32 dFTEmblemModels_Mother_MatAnimJoint_0x5AD4[];

AObjEvent32 *dFTEmblemModels_Mother_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFTEmblemModels_Mother_MatAnimJoint_0x5AD4,
};

u32 dFTEmblemModels_Mother_MatAnimJoint_0x5A8C[] = {
	aobjEvent32SetExtValAfterBlock(0x018, 0),
	    0xB3191900,  /* -3.5645825846586376e-08f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00199900,  /* 2.3507734622004547e-39f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0xFFB30000,  /* nanf */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfterBlock(0x018, 1),
	    0x00991900,  /* 1.4059799222344334e-38f */
	    0x26262600,  /* 5.764431900562306e-16f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0x66666600,  /* 2.720064647388842e+23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dFTEmblemModels_Mother_MatAnimJoint_0x5A8C),
};

u32 dFTEmblemModels_Mother_MatAnimJoint_0x5AD4[] = {
	(u32)(dFTEmblemModels_Mother_MatAnimJoint_0x5A8C),
	aobjEvent32End(),
};

PAD(4);
