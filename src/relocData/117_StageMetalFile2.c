/* relocData file 117: StageMetalFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dStageMetalFile2_gap_0x1E48[];
extern u8 dStageMetalFile2_gap_0x3298[];

PAD(8);

extern u8 dStageMetalFile2_gap_0x1E48_sub_0x178[];
extern u8 dStageMetalFile2_gap_0x3298_sub_0x8[];

/* Texture data @ 0x0008 (3112 bytes) */
u8 dStageMetalFile2_Tex_0x0008[3112] = {
	#include <StageMetalFile2/Tex_0x0008.tex.inc.c>
};

extern u32 dStageMetalFile2_Layer0MObj_MObjSubPtrArray[];

/* MObjSub array: Layer0MObj @ 0xC30 (5 entries) */
MObjSub dStageMetalFile2_Layer0MObj_MObjSub[5] = {
	/* [0] @ 0xC30 */
	{
		0x0000,
		0x00, 0x00,
		(void**)((u8*)dStageMetalFile2_Layer0MObj_MObjSubPtrArray + 0x8),
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		0.0008089999901130795f, 0.008562999777495861f,
		1.0f, 1.0f,
		(void**)0x3A541312,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [1] @ 0xCA8 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		0.019998999312520027f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		(void**)0x3CA3D4F1,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [2] @ 0xD20 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		0.0032099999953061342f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		(void**)0x3B525EDD,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [3] @ 0xD98 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		9.999999747378752e-05f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		(void**)0x38D1B717,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [4] @ 0xE10 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		0.0008089999901130795f, 0.008562999777495861f,
		1.0f, 1.0f,
		(void**)0x3A541312,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
};

/* MObjSub pointer array @ 0xE88 (32 bytes: leading pad + 7 pointers + NULL) */
u32 dStageMetalFile2_Layer0MObj_MObjSubPtrArray[] = {
	0x00000000, 0x00000000, 0x03A5030E, 0x03A6032C,
	0x03A7034A, 0x03A80368, 0x05D90386, 0x00000000,
};

/* Raw data from file offset 0x0EA8 to 0x1B10 (3176 bytes) */
/* gap sub-block @ 0x0EA8 (was gap+0x0, 208 bytes) */
Vtx dStageMetalFile2_gap_0x0EA8[13] = {
	#include <StageMetalFile2/gap_0x0EA8.vtx.inc.c>
};

/* gap sub-block @ 0x0F78 (was gap+0xD0, 64 bytes) */
Vtx dStageMetalFile2_gap_0x0EA8_sub_0xD0[4] = {
	#include <StageMetalFile2/gap_0x0EA8_sub_0xD0.vtx.inc.c>
};

/* gap sub-block @ 0x0FB8 (was gap+0x110, 480 bytes) */
Vtx dStageMetalFile2_gap_0x0EA8_sub_0x110[30] = {
	#include <StageMetalFile2/gap_0x0EA8_sub_0x110.vtx.inc.c>
};

/* gap sub-block @ 0x1198 (was gap+0x2F0, 288 bytes) */
Vtx dStageMetalFile2_gap_0x0EA8_sub_0x2F0[18] = {
	#include <StageMetalFile2/gap_0x0EA8_sub_0x2F0.vtx.inc.c>
};

/* gap sub-block @ 0x12B8 (was gap+0x410, 480 bytes) */
Vtx dStageMetalFile2_gap_0x0EA8_sub_0x410[30] = {
	#include <StageMetalFile2/gap_0x0EA8_sub_0x410.vtx.inc.c>
};

/* gap sub-block @ 0x1498 (was gap+0x5F0, 96 bytes) */
Vtx dStageMetalFile2_gap_0x0EA8_sub_0x5F0[6] = {
	#include <StageMetalFile2/gap_0x0EA8_sub_0x5F0.vtx.inc.c>
};

/* gap sub-block @ 0x14F8 (was gap+0x650, 432 bytes) */
Vtx dStageMetalFile2_gap_0x0EA8_sub_0x650[27] = {
	#include <StageMetalFile2/gap_0x0EA8_sub_0x650.vtx.inc.c>
};

/* gap sub-block @ 0x16A8 (was gap+0x800, 96 bytes) */
Vtx dStageMetalFile2_gap_0x0EA8_sub_0x800[6] = {
	#include <StageMetalFile2/gap_0x0EA8_sub_0x800.vtx.inc.c>
};

/* gap sub-block @ 0x1708 (was gap+0x860, 1032 bytes) */
Gfx dStageMetalFile2_DL_0x1708[129] = {
	#include <StageMetalFile2/DL_0x1708.dl.inc.c>
};

/* DObjDesc: Layer0DObj @ 0x1B10 (3 entries) */
DObjDesc dStageMetalFile2_Layer0DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageMetalFile2_gap_0x0EA8 + 0x860), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x1BA0 to 0x1DD0 (560 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1BA8[];
extern u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1C18[];
extern u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1C7C[];
extern u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1CD8[];
extern u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1D44[];
extern u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1DB4[];

AObjEvent32 *dStageMetalFile2_Layer0MatAnim_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1DB4,
};

u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1BA8[] = {
	aobjEvent32SetVal0RateBlock(0x006, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x004, 35),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x002, 45),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Cmd12(0x006, 1),
	aobjEvent32Wait(34),
	aobjEvent32SetVal0Rate(0x004, 25),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32Wait(10),
	aobjEvent32SetVal0Rate(0x002, 55),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32Wait(15),
	aobjEvent32SetVal0RateBlock(0x004, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x004, 260),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Wait(40),
	aobjEvent32SetVal0RateBlock(0x002, 100),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetVal0RateBlock(0x002, 60),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x002, 60),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1BA8),
};

u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1C18[] = {
	aobjEvent32SetVal0RateBlock(0x004, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x004, 221),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Cmd12(0x004, 1),
	aobjEvent32SetValRateBlock(0x002, 0),
	    0x3C23D2A6,  /* 0.009998952969908714f */
	    0x3A6FAFC1,  /* 0.0009143315837718546f */
	aobjEvent32SetVal0RateBlock(0x002, 29),
	    0x3CA3D4D2,  /* 0.0199989415705204f */
	aobjEvent32SetVal0RateBlock(0x002, 40),
	    0x3CA3D4D2,  /* 0.0199989415705204f */
	aobjEvent32SetVal0RateBlock(0x002, 20),
	    0x3C23D294,  /* 0.009998936206102371f */
	aobjEvent32SetVal0Rate(0x002, 230),
	    0x3C23D294,  /* 0.009998936206102371f */
	aobjEvent32Wait(131),
	aobjEvent32SetVal0RateBlock(0x004, 39),
	    0x3CA3D70A,  /* 0.019999999552965164f */
	aobjEvent32SetVal0RateBlock(0x004, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x004, 60),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1C18),
};

u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1C7C[] = {
	aobjEvent32SetVal0RateBlock(0x002, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x002, 50),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Cmd12(0x002, 1),
	aobjEvent32SetValAfterBlock(0x004, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Wait(49),
	aobjEvent32SetVal0RateBlock(0x002, 20),
	    0x3CF5C28F,  /* 0.029999999329447746f */
	aobjEvent32SetTargetRate(0x002, 0),
	    0x35C55D95,  /* 1.470487973165291e-06f */
	aobjEvent32SetValRateBlock(0x002, 0),
	    0x3C23D70A,  /* 0.009999999776482582f */
	    0xBA1CEFD7,  /* -0.000598666665609926f */
	aobjEvent32SetVal0RateBlock(0x002, 160),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetVal0RateBlock(0x002, 45),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x002, 45),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1C7C),
};

u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1CD8[] = {
	aobjEvent32SetVal0RateBlock(0x004, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetValBlock(0x002, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal(0x002, 20),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x004, 110),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Cmd12(0x006, 1),
	aobjEvent32Wait(19),
	aobjEvent32SetTargetRate(0x002, 0),
	    0x3B7FFBCE,  /* 0.0039059999398887157f */
	aobjEvent32SetVal0RateBlock(0x002, 20),
	    0x3CF5C28F,  /* 0.029999999329447746f */
	aobjEvent32SetVal0RateBlock(0x002, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x002, 280),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Wait(70),
	aobjEvent32SetVal0RateBlock(0x004, 41),
	    0x3CA3D70A,  /* 0.019999999552965164f */
	aobjEvent32SetVal0RateBlock(0x004, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x004, 169),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1CD8),
};

u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1D44[] = {
	aobjEvent32SetVal0RateBlock(0x006, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x004, 35),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x002, 45),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Cmd12(0x006, 1),
	aobjEvent32Wait(34),
	aobjEvent32SetVal0Rate(0x004, 25),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32Wait(10),
	aobjEvent32SetVal0Rate(0x002, 55),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32Wait(15),
	aobjEvent32SetVal0RateBlock(0x004, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x004, 260),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Wait(40),
	aobjEvent32SetVal0RateBlock(0x002, 100),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetVal0RateBlock(0x002, 60),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x002, 60),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1D44),
};

u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1DB4[] = {
	(u32)(dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1BA8),
	(u32)(dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1C18),
	(u32)(dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1C7C),
	(u32)(dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1CD8),
	(u32)(dStageMetalFile2_Layer0MatAnim_MatAnimJoint_0x1D44),
	aobjEvent32End(),
};

PAD(4);

/* MObjSub: Layer1MObj @ 0x1DD0 */
MObjSub dStageMetalFile2_Layer1MObj_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)(dStageMetalFile2_gap_0x1E48_sub_0x178),
	0x0777, 0x026C, 0x0778, 0x0278,
	125371006,
	1.8808648888900672e-34f, 1.888388741501551e-34f,
	1.8959125941130348e-34f, 1.9034364467245187e-34f,
	1.9109602993360025e-34f, 1.9184841519474863e-34f,
	(void**)((u8*)dStageMetalFile2_Tex_0x0008 + 0xA98),
	0x0781,
	0x02, 0xAE,
	0x0782,
	0x02B4, 0x0783, 0x02BA,
	1.986276885622575e-34f, 2.0013245908455427e-34f,
	2.1818819006642884e-34f, 7.20267410662956e-43f,
	0x00000000,
	{ { 0x00, 0x20, 0x00, 0x00 } },
	0x00, 0x0F, { 0x00, 0x01 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x3F, 0x80, 0x00, 0x00 } },
	1065353216, 0,
	1065353216, 128190326,
};

/* Raw data from file offset 0x1E48 to 0x2EE0 (4248 bytes) */
/* gap sub-block @ 0x1E48 (was gap+0x0, 72 bytes) */
u8 dStageMetalFile2_gap_0x1E48[72] = {
	#include <StageMetalFile2/gap_0x1E48.data.inc.c>
};

/* gap sub-block @ 0x1E90 (was gap+0x48, 64 bytes) */
u8 dStageMetalFile2_gap_0x1E48_sub_0x48[64] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x48.data.inc.c>
};

/* gap sub-block @ 0x1ED0 (was gap+0x88, 120 bytes) */
u8 dStageMetalFile2_gap_0x1E48_sub_0x88[120] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x88.data.inc.c>
};

/* gap sub-block @ 0x1F48 (was gap+0x100, 120 bytes) */
u8 dStageMetalFile2_gap_0x1E48_sub_0x100[120] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x100.data.inc.c>
};

/* gap sub-block @ 0x1FC0 (was gap+0x178, 16 bytes) */
u8 dStageMetalFile2_gap_0x1E48_sub_0x178[16] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x178.data.inc.c>
};

/* gap sub-block @ 0x1FD0 (was gap+0x188, 480 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x188[30] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x188.vtx.inc.c>
};

/* gap sub-block @ 0x21B0 (was gap+0x368, 96 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x368[6] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x368.vtx.inc.c>
};

/* gap sub-block @ 0x2210 (was gap+0x3C8, 64 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x3C8[4] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x3C8.vtx.inc.c>
};

/* gap sub-block @ 0x2250 (was gap+0x408, 256 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x408[16] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x408.vtx.inc.c>
};

/* gap sub-block @ 0x2350 (was gap+0x508, 320 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x508[20] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x508.vtx.inc.c>
};

/* gap sub-block @ 0x2490 (was gap+0x648, 64 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x648[4] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x648.vtx.inc.c>
};

/* gap sub-block @ 0x24D0 (was gap+0x688, 64 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x688[4] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x688.vtx.inc.c>
};

/* gap sub-block @ 0x2510 (was gap+0x6C8, 64 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x6C8[4] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x6C8.vtx.inc.c>
};

/* gap sub-block @ 0x2550 (was gap+0x708, 320 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x708[20] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x708.vtx.inc.c>
};

/* gap sub-block @ 0x2690 (was gap+0x848, 192 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x848[12] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x848.vtx.inc.c>
};

/* gap sub-block @ 0x2750 (was gap+0x908, 128 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x908[8] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x908.vtx.inc.c>
};

/* gap sub-block @ 0x27D0 (was gap+0x988, 64 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x988[4] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x988.vtx.inc.c>
};

/* gap sub-block @ 0x2810 (was gap+0x9C8, 128 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0x9C8[8] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0x9C8.vtx.inc.c>
};

/* gap sub-block @ 0x2890 (was gap+0xA48, 64 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0xA48[4] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0xA48.vtx.inc.c>
};

/* gap sub-block @ 0x28D0 (was gap+0xA88, 64 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0xA88[4] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0xA88.vtx.inc.c>
};

/* gap sub-block @ 0x2910 (was gap+0xAC8, 64 bytes) */
Vtx dStageMetalFile2_gap_0x1E48_sub_0xAC8[4] = {
	#include <StageMetalFile2/gap_0x1E48_sub_0xAC8.vtx.inc.c>
};

/* gap sub-block @ 0x2950 (was gap+0xB08, 1424 bytes) */
Gfx dStageMetalFile2_DL_0x2950[178] = {
	#include <StageMetalFile2/DL_0x2950.dl.inc.c>
};

/* DObjDesc: Layer1DObj @ 0x2EE0 (3 entries) */
DObjDesc dStageMetalFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageMetalFile2_gap_0x1E48 + 0xB08), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x2F64 to 0x3068 (260 bytes) */
/* gap sub-block @ 0x2F64 (was gap+0x0, 72 bytes) */
u8 dStageMetalFile2_gap_0x2F64[72] = {
	#include <StageMetalFile2/gap_0x2F64.data.inc.c>
};

/* gap sub-block @ 0x2FAC (was gap+0x48, 36 bytes) */
u8 dStageMetalFile2_gap_0x2F64_sub_0x48[36] = {
	#include <StageMetalFile2/gap_0x2F64_sub_0x48.data.inc.c>
};

/* gap sub-block @ 0x2FD0 (was gap+0x6C, 28 bytes) */
u8 dStageMetalFile2_gap_0x2F64_sub_0x6C[28] = {
	#include <StageMetalFile2/gap_0x2F64_sub_0x6C.data.inc.c>
};

/* gap sub-block @ 0x2FEC (was gap+0x88, 20 bytes) */
u8 dStageMetalFile2_gap_0x2F64_sub_0x88[20] = {
	#include <StageMetalFile2/gap_0x2F64_sub_0x88.data.inc.c>
};

/* gap sub-block @ 0x3000 (was gap+0x9C, 104 bytes) */
u8 dStageMetalFile2_gap_0x2F64_sub_0x9C[104] = {
	#include <StageMetalFile2/gap_0x2F64_sub_0x9C.data.inc.c>
};

/* Raw data from file offset 0x3068 to 0x3090 (40 bytes) */
u8 dStageMetalFile2_MPGeometryData_0x3068[40] = {
	#include <StageMetalFile2/MPGeometryData_0x3068.data.inc.c>
};

/* Raw data from file offset 0x3090 to 0x3220 (400 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x3098[];
extern u32 dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x3124[];
extern u32 dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x31B0[];
extern u32 dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x3208[];

AObjEvent32 *dStageMetalFile2_Layer1MatAnim_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x3208,
};

u32 dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x3098[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x200, 6),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x200, 6),
	    0x41000000,  /* 8.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x41100000,  /* 9.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x41200000,  /* 10.0f */
	aobjEvent32SetValAfterBlock(0x200, 6),
	    0x41300000,  /* 11.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x41400000,  /* 12.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x41500000,  /* 13.0f */
	aobjEvent32SetValAfterBlock(0x200, 6),
	    0x41600000,  /* 14.0f */
	aobjEvent32SetValAfter(0x200, 7),
	    0x41700000,  /* 15.0f */
	aobjEvent32Wait(227),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x3098),
};

u32 dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x3124[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x200, 6),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x200, 6),
	    0x41000000,  /* 8.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x41100000,  /* 9.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x41200000,  /* 10.0f */
	aobjEvent32SetValAfterBlock(0x200, 6),
	    0x41300000,  /* 11.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x41400000,  /* 12.0f */
	aobjEvent32SetValAfterBlock(0x200, 7),
	    0x41500000,  /* 13.0f */
	aobjEvent32SetValAfterBlock(0x200, 6),
	    0x41600000,  /* 14.0f */
	aobjEvent32SetValAfter(0x200, 7),
	    0x41700000,  /* 15.0f */
	aobjEvent32Wait(227),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x3124),
};

u32 dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x31B0[] = {
	aobjEvent32SetVal0RateBlock(0x006, 0),
	    0x3C23D70A,  /* 0.009999999776482582f */
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetValRate(0x002, 140),
	    0x3CA3D70A,  /* 0.019999999552965164f */
	    0x39816DCB,  /* 0.0002468659949954599f */
	aobjEvent32SetValRate(0x004, 180),
	    0x3CA3D70A,  /* 0.019999999552965164f */
	    0x394D066C,  /* 0.00019552715821191669f */
	aobjEvent32Cmd12(0x006, 1),
	aobjEvent32Wait(139),
	aobjEvent32SetValRate(0x002, 160),
	    0x3C23D70A,  /* 0.009999999776482582f */
	    0xB708393A,  /* -8.119555786834098e-06f */
	aobjEvent32Wait(40),
	aobjEvent32SetVal0RateBlock(0x004, 120),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetVal0RateBlock(0x006, 20),
	    0x3C23D70A,  /* 0.009999999776482582f */
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x31B0),
};

u32 dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x3208[] = {
	(u32)(dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x3098),
	(u32)(dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x3124),
	(u32)(dStageMetalFile2_Layer1MatAnim_MatAnimJoint_0x31B0),
	aobjEvent32End(),
};

PAD(8);

/* MObjSub: Layer2MObj @ 0x3220 */
MObjSub dStageMetalFile2_Layer2MObj_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)(dStageMetalFile2_gap_0x3298_sub_0x8),
	0x0000, 0x0202, 0x0000, 0x0000,
	2097152,
	1.4601954591699284e-38f, 2.802596928649634e-45f,
	9.999999747378752e-05f, 0.0013099999632686377f,
	1.0f, 1.0f,
	(void**)0x38D1B717,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x0020, 0x0002,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x06, { 0x22, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	-256, 1280068608,
	0, 0,
};

/* Raw data from file offset 0x3298 to 0x3468 (464 bytes) */
/* gap sub-block @ 0x3298 (was gap+0x0, 8 bytes) */
u8 dStageMetalFile2_gap_0x3298[8] = {
	#include <StageMetalFile2/gap_0x3298.data.inc.c>
};

/* gap sub-block @ 0x32A0 (was gap+0x8, 8 bytes) */
u8 dStageMetalFile2_gap_0x3298_sub_0x8[8] = {
	#include <StageMetalFile2/gap_0x3298_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x32A8 (was gap+0x10, 192 bytes) */
Vtx dStageMetalFile2_gap_0x3298_sub_0x10[12] = {
	#include <StageMetalFile2/gap_0x3298_sub_0x10.vtx.inc.c>
};

/* gap sub-block @ 0x3368 (was gap+0xD0, 256 bytes) */
Gfx dStageMetalFile2_DL_0x3368[32] = {
	#include <StageMetalFile2/DL_0x3368.dl.inc.c>
};

/* DObjDesc: Layer2DObj @ 0x3468 (3 entries) */
DObjDesc dStageMetalFile2_Layer2DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageMetalFile2_gap_0x3298 + 0xD0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x34F0 to 0x3550 (96 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dStageMetalFile2_Layer2MatAnim_MatAnimJoint_0x34F8[];
extern u32 dStageMetalFile2_Layer2MatAnim_MatAnimJoint_0x3540[];

AObjEvent32 *dStageMetalFile2_Layer2MatAnim_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dStageMetalFile2_Layer2MatAnim_MatAnimJoint_0x3540,
};

u32 dStageMetalFile2_Layer2MatAnim_MatAnimJoint_0x34F8[] = {
	aobjEvent32SetVal0RateBlock(0x004, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetValAfterBlock(0x002, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x004, 50),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Cmd12(0x004, 1),
	aobjEvent32Wait(49),
	aobjEvent32SetVal0RateBlock(0x004, 30),
	    0x3CCCCCD4,  /* 0.025000013411045074f */
	aobjEvent32SetVal0RateBlock(0x004, 90),
	    0x3CCCCCD4,  /* 0.025000013411045074f */
	aobjEvent32SetVal0RateBlock(0x004, 25),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x004, 125),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer2MatAnim_MatAnimJoint_0x34F8),
};

u32 dStageMetalFile2_Layer2MatAnim_MatAnimJoint_0x3540[] = {
	(u32)(dStageMetalFile2_Layer2MatAnim_MatAnimJoint_0x34F8),
	aobjEvent32End(),
};

PAD(8);

extern u32 dStageMetalFile2_Layer3MObj_MObjSubPtrArray[];

/* MObjSub array: Layer3MObj @ 0x3550 (4 entries) */
MObjSub dStageMetalFile2_Layer3MObj_MObjSub[4] = {
	/* [0] @ 0x3550 */
	{
		0x0000,
		0x00, 0x00,
		(void**)((u8*)dStageMetalFile2_Layer3MObj_MObjSubPtrArray + 0x8),
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		0.004556000232696533f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		(void**)0x3B954A80,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [1] @ 0x35C8 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		9.999999747378752e-05f, 0.0008239999879151583f,
		1.0f, 1.0f,
		(void**)0x38D1B717,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [2] @ 0x3640 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		9.999999747378752e-05f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		(void**)0x38D1B717,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [3] @ 0x36B8 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		9.999999747378752e-05f, 0.009999999776482582f,
		1.0f, 1.0f,
		(void**)0x38D1B717,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
};

/* MObjSub pointer array @ 0x3730 (28 bytes: leading pad + 6 pointers + NULL) */
u32 dStageMetalFile2_Layer3MObj_MObjSubPtrArray[] = {
	0x00000000, 0x00000000, 0x0DCF0D56, 0x0DD00D74,
	0x0DD10D92, 0x0EEB0DB0, 0x00000000,
};

/* Raw data from file offset 0x374C to 0x3DD8 (1676 bytes) */
/* gap sub-block @ 0x374C (was gap+0x0, 4 bytes) */
u8 dStageMetalFile2_gap_0x374C[4] = {
	#include <StageMetalFile2/gap_0x374C.data.inc.c>
};

/* gap sub-block @ 0x3750 (was gap+0x4, 144 bytes) */
Vtx dStageMetalFile2_gap_0x374C_sub_0x4[9] = {
	#include <StageMetalFile2/gap_0x374C_sub_0x4.vtx.inc.c>
};

/* gap sub-block @ 0x37E0 (was gap+0x94, 496 bytes) */
Vtx dStageMetalFile2_gap_0x374C_sub_0x94[31] = {
	#include <StageMetalFile2/gap_0x374C_sub_0x94.vtx.inc.c>
};

/* gap sub-block @ 0x39D0 (was gap+0x284, 144 bytes) */
Vtx dStageMetalFile2_gap_0x374C_sub_0x284[9] = {
	#include <StageMetalFile2/gap_0x374C_sub_0x284.vtx.inc.c>
};

/* gap sub-block @ 0x3A60 (was gap+0x314, 240 bytes) */
Vtx dStageMetalFile2_gap_0x374C_sub_0x314[15] = {
	#include <StageMetalFile2/gap_0x374C_sub_0x314.vtx.inc.c>
};

/* gap sub-block @ 0x3B50 (was gap+0x404, 648 bytes) */
Gfx dStageMetalFile2_DL_0x3B50[81] = {
	#include <StageMetalFile2/DL_0x3B50.dl.inc.c>
};

/* DObjDesc: Layer3DObj @ 0x3DD8 (3 entries) */
DObjDesc dStageMetalFile2_Layer3DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageMetalFile2_gap_0x374C + 0x404), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x3E60 to 0x3FC0 (352 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3E68[];
extern u32 dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3EC8[];
extern u32 dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3F10[];
extern u32 dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3F58[];
extern u32 dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3FB0[];

AObjEvent32 *dStageMetalFile2_Layer3MatAnim_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3FB0,
};

u32 dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3E68[] = {
	aobjEvent32SetVal0RateBlock(0x002, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x002, 40),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Cmd12(0x002, 1),
	aobjEvent32SetValAfterBlock(0x004, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Wait(39),
	aobjEvent32SetVal0RateBlock(0x002, 30),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetVal0RateBlock(0x002, 30),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x002, 30),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetVal0RateBlock(0x002, 30),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x002, 30),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetVal0RateBlock(0x002, 30),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x002, 100),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3E68),
};

u32 dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3EC8[] = {
	aobjEvent32SetVal0RateBlock(0x004, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetValAfterBlock(0x002, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x004, 50),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Cmd12(0x004, 1),
	aobjEvent32Wait(49),
	aobjEvent32SetVal0RateBlock(0x004, 30),
	    0x3C75C293,  /* 0.015000003390014172f */
	aobjEvent32SetVal0RateBlock(0x004, 100),
	    0x3C75C293,  /* 0.015000003390014172f */
	aobjEvent32SetVal0RateBlock(0x004, 33),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x004, 107),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3EC8),
};

u32 dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3F10[] = {
	aobjEvent32SetVal0RateBlock(0x004, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetValAfterBlock(0x002, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0Rate(0x004, 60),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32Cmd12(0x004, 1),
	aobjEvent32Wait(59),
	aobjEvent32SetVal0RateBlock(0x004, 30),
	    0x3CCCCCCC,  /* 0.02499999850988388f */
	aobjEvent32SetVal0RateBlock(0x004, 85),
	    0x3CCCCCCC,  /* 0.02499999850988388f */
	aobjEvent32SetVal0RateBlock(0x004, 25),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x004, 120),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3F10),
};

u32 dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3F58[] = {
	aobjEvent32SetVal0RateBlock(0x004, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetValAfterBlock(0x002, 0),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x004, 29),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetVal0RateBlock(0x004, 70),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetVal0RateBlock(0x004, 30),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x004, 80),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x004, 30),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetVal0RateBlock(0x004, 10),
	    0x3C23D70A,  /* 0.009999999776482582f */
	aobjEvent32SetVal0RateBlock(0x004, 30),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x38D1B717,  /* 9.999999747378752e-05f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3F58),
};

u32 dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3FB0[] = {
	(u32)(dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3E68),
	(u32)(dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3EC8),
	(u32)(dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3F10),
	(u32)(dStageMetalFile2_Layer3MatAnim_MatAnimJoint_0x3F58),
};

