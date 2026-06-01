/* relocData file 117: StageMetalFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u8 dStageMetalFile2_Tex_0x0008[];
extern u8 dStageMetalFile2_Tex_0x0050[];
extern u8 dStageMetalFile2_Tex_0x0258[];
extern u8 dStageMetalFile2_Tex_0x0310[];
extern u8 dStageMetalFile2_Tex_0x0718[];
extern u8 dStageMetalFile2_Tex_0x0760[];
extern u8 dStageMetalFile2_Tex_0x07A8[];
extern u8 dStageMetalFile2_Tex_0x09C8[];
extern Vtx dStageMetalFile2_gap_0x0EA8[];
extern Vtx dStageMetalFile2_gap_0x0EA8_sub_0x110[];
extern Vtx dStageMetalFile2_gap_0x0EA8_sub_0x2F0[];
extern Vtx dStageMetalFile2_gap_0x0EA8_sub_0x410[];
extern Vtx dStageMetalFile2_gap_0x0EA8_sub_0x5F0[];
extern Vtx dStageMetalFile2_gap_0x0EA8_sub_0x650[];
extern Vtx dStageMetalFile2_gap_0x0EA8_sub_0x800[];
extern Vtx dStageMetalFile2_gap_0x0EA8_sub_0xD0[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x188[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x368[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x3C8[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x408[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x508[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x648[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x688[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x6C8[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x708[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x848[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x908[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x988[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0x9C8[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0xA48[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0xA88[];
extern Vtx dStageMetalFile2_gap_0x1E48_sub_0xAC8[];
extern Vtx dStageMetalFile2_gap_0x3298_sub_0x10[];
extern Vtx dStageMetalFile2_gap_0x374C_sub_0x284[];
extern Vtx dStageMetalFile2_gap_0x374C_sub_0x314[];
extern Vtx dStageMetalFile2_gap_0x374C_sub_0x4[];
extern Vtx dStageMetalFile2_gap_0x374C_sub_0x94[];
extern u16 dStageMetalFile2_palette_0x0B48[];
extern u16 dStageMetalFile2_palette_0x0B70[];
extern u16 dStageMetalFile2_palette_0x0B98[];
extern u16 dStageMetalFile2_palette_0x0BC0[];
extern u16 dStageMetalFile2_palette_0x0BE8[];
extern u16 dStageMetalFile2_palette_0x0C10[];
extern MObjSub *dStageMetalFile2_gap_0x3298_sub_0x8[];
extern u8 dStageMetalFile2_gap_0x1E48[];
extern u8 dStageMetalFile2_gap_0x3298[];

PAD(8);

extern MObjSub *dStageMetalFile2_gap_0x1E48_sub_0x178[];

/* Texture data @ 0x0008 (3112 bytes) */
u8 dStageMetalFile2_Tex_0x0008[0x40] = {
	#include <StageMetalFile2/Tex_0x0008.tex.inc.c>
};

PAD(8);

u8 dStageMetalFile2_Tex_0x0050[0x200] = {
	#include <StageMetalFile2/Tex_0x0050.tex.inc.c>
};

PAD(8);

u8 dStageMetalFile2_Tex_0x0258[0xB0] = {
	#include <StageMetalFile2/Tex_0x0258.tex.inc.c>
};

PAD(8);

u8 dStageMetalFile2_Tex_0x0310[0x400] = {
	#include <StageMetalFile2/Tex_0x0310.tex.inc.c>
};

PAD(8);

u8 dStageMetalFile2_Tex_0x0718[0x40] = {
	#include <StageMetalFile2/Tex_0x0718.tex.inc.c>
};

PAD(8);

u8 dStageMetalFile2_Tex_0x0760[0x40] = {
	#include <StageMetalFile2/Tex_0x0760.tex.inc.c>
};

PAD(8);

u8 dStageMetalFile2_Tex_0x07A8[0x200] = {
	#include <StageMetalFile2/Tex_0x07A8.tex.inc.c>
};

PAD(8);

/* Palette: 0x09B0 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x09B0[8] = {
	#include <StageMetalFile2/palette_0x09B0.palette.inc.c>
};
PAD(8);

u8 dStageMetalFile2_Tex_0x09C8[0x10] = {
	#include <StageMetalFile2/Tex_0x09C8.tex.inc.c>
};

PAD(8);

/* Palette: 0x09E0 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x09E0[8] = {
	#include <StageMetalFile2/palette_0x09E0.palette.inc.c>
};
PAD(8);

/* Palette: 0x09F8 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x09F8[8] = {
	#include <StageMetalFile2/palette_0x09F8.palette.inc.c>
};
PAD(8);

/* Palette: 0x0A10 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0A10[8] = {
	#include <StageMetalFile2/palette_0x0A10.palette.inc.c>
};
PAD(8);

/* Palette: 0x0A28 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0A28[8] = {
	#include <StageMetalFile2/palette_0x0A28.palette.inc.c>
};
PAD(8);

/* Palette: 0x0A40 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0A40[8] = {
	#include <StageMetalFile2/palette_0x0A40.palette.inc.c>
};
PAD(8);

/* Palette: 0x0A58 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0A58[8] = {
	#include <StageMetalFile2/palette_0x0A58.palette.inc.c>
};
PAD(8);

/* Palette: 0x0A70 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0A70[8] = {
	#include <StageMetalFile2/palette_0x0A70.palette.inc.c>
};
PAD(8);

/* Palette: 0x0A88 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0A88[8] = {
	#include <StageMetalFile2/palette_0x0A88.palette.inc.c>
};
PAD(8);

/* Palette: 0x0AA0 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0AA0[8] = {
	#include <StageMetalFile2/palette_0x0AA0.palette.inc.c>
};
PAD(8);

/* Palette: 0x0AB8 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0AB8[8] = {
	#include <StageMetalFile2/palette_0x0AB8.palette.inc.c>
};
PAD(8);

/* Palette: 0x0AD0 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0AD0[8] = {
	#include <StageMetalFile2/palette_0x0AD0.palette.inc.c>
};
PAD(8);

/* Palette: 0x0AE8 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0AE8[8] = {
	#include <StageMetalFile2/palette_0x0AE8.palette.inc.c>
};
PAD(8);

/* Palette: 0x0B00 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0B00[8] = {
	#include <StageMetalFile2/palette_0x0B00.palette.inc.c>
};
PAD(8);

/* Palette: 0x0B18 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0B18[8] = {
	#include <StageMetalFile2/palette_0x0B18.palette.inc.c>
};
PAD(8);

/* Palette: 0x0B30 (8 colors RGBA5551) */
u16 dStageMetalFile2_palette_0x0B30[8] = {
	#include <StageMetalFile2/palette_0x0B30.palette.inc.c>
};
PAD(8);

u16 dStageMetalFile2_palette_0x0B48[16] = {
	#include <StageMetalFile2/palette_0x0B48.palette.inc.c>
};

PAD(8);

u16 dStageMetalFile2_palette_0x0B70[16] = {
	#include <StageMetalFile2/palette_0x0B70.palette.inc.c>
};

PAD(8);

u16 dStageMetalFile2_palette_0x0B98[16] = {
	#include <StageMetalFile2/palette_0x0B98.palette.inc.c>
};

PAD(8);

u16 dStageMetalFile2_palette_0x0BC0[16] = {
	#include <StageMetalFile2/palette_0x0BC0.palette.inc.c>
};

PAD(8);

u16 dStageMetalFile2_palette_0x0BE8[16] = {
	#include <StageMetalFile2/palette_0x0BE8.palette.inc.c>
};

PAD(8);

u16 dStageMetalFile2_palette_0x0C10[16] = {
	#include <StageMetalFile2/palette_0x0C10.palette.inc.c>
};

extern MObjSub *dStageMetalFile2_Layer0MObj_MObjSubPtrArray[];

/* MObjSub-list head @ 0xC30 — MObjSub** table ([0] NULL, [1] -> PtrArray). */
MObjSub **dStageMetalFile2_Layer0MObj_MObjSub[2] = {
	NULL,
	dStageMetalFile2_Layer0MObj_MObjSubPtrArray,
};

/* MObjSub @ 0xC38 */
MObjSub dStageMetalFile2_Layer0MObj_MObjSub_real0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x009F, 0x004F,
		2,
		0.0008089999901130795f, 0.008562999777495861f,
		1.0f, 1.0f,
		0.0008089999901130795f, 1.0f,
		(void**)0x00000000,
		0x0020,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00062205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0xCB0 */
MObjSub dStageMetalFile2_Layer0MObj_MObjSub_real1[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x009F, 0x004F,
		2,
		0.019998999312520027f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		0.019998999312520027f, 1.0f,
		(void**)0x00000000,
		0x0020,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00062205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0xD28 */
MObjSub dStageMetalFile2_Layer0MObj_MObjSub_real2[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x009F, 0x004F,
		2,
		0.0032099999953061342f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		0.0032099999953061342f, 1.0f,
		(void**)0x00000000,
		0x0020,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00062205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0xDA0 */
MObjSub dStageMetalFile2_Layer0MObj_MObjSub_real3[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x009F, 0x004F,
		2,
		9.999999747378752e-05f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		9.999999747378752e-05f, 1.0f,
		(void**)0x00000000,
		0x0020,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00062205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0xE18 */
MObjSub dStageMetalFile2_Layer0MObj_MObjSub_real4[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x009F, 0x004F,
		2,
		0.0008089999901130795f, 0.008562999777495861f,
		1.0f, 1.0f,
		0.0008089999901130795f, 1.0f,
		(void**)0x00000000,
		0x0020,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00062205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};


/* MObjSub pointer array @ 0xE88 (32 bytes: leading pad + 7 pointers + NULL) */
MObjSub *dStageMetalFile2_Layer0MObj_MObjSubPtrArray[6] = {
	dStageMetalFile2_Layer0MObj_MObjSub_real0,
	dStageMetalFile2_Layer0MObj_MObjSub_real1,
	dStageMetalFile2_Layer0MObj_MObjSub_real2,
	dStageMetalFile2_Layer0MObj_MObjSub_real3,
	dStageMetalFile2_Layer0MObj_MObjSub_real4,
	NULL,
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
	{ 1, (void*)dStageMetalFile2_DL_0x1708, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
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

/* MObjSub-list head @ 0x1dd0 — MObjSub** table ([0] NULL, [1] -> sub array). */
MObjSub **dStageMetalFile2_Layer1MObj_MObjSub[2] = {
	NULL,
	dStageMetalFile2_gap_0x1E48_sub_0x178,
};

/* Palette-pointer table @ 0x1dd8 — Layer1MObj_MObjSub_real.palettes target (16 palettes). */
void *dStageMetalFile2_Layer1MObj_MObjSub_real_palettes[16] = {
	(void *)dStageMetalFile2_palette_0x09B0,
	(void *)dStageMetalFile2_palette_0x09E0,
	(void *)dStageMetalFile2_palette_0x09F8,
	(void *)dStageMetalFile2_palette_0x0A10,
	(void *)dStageMetalFile2_palette_0x0A28,
	(void *)dStageMetalFile2_palette_0x0A40,
	(void *)dStageMetalFile2_palette_0x0A58,
	(void *)dStageMetalFile2_palette_0x0A70,
	(void *)dStageMetalFile2_palette_0x0A88,
	(void *)dStageMetalFile2_palette_0x0AA0,
	(void *)dStageMetalFile2_palette_0x0AB8,
	(void *)dStageMetalFile2_palette_0x0AD0,
	(void *)dStageMetalFile2_palette_0x0AE8,
	(void *)dStageMetalFile2_palette_0x0B00,
	(void *)dStageMetalFile2_palette_0x0B18,
	(void *)dStageMetalFile2_palette_0x0B30,
};

/* The real MObjSub @ +0x48 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dStageMetalFile2_Layer1MObj_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x000F, 0x0001,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageMetalFile2_Layer1MObj_MObjSub_real_palettes,
		0x0004,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0x99, 0x00 } },
		{ { 0x4C, 0x4C, 0x2E, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x1E48 to 0x2EE0 (4248 bytes) */
/* Palette-pointer table @ 0x1E90 — 16 palette pointers (MObjSub.palettes target). */
void *dStageMetalFile2_gap_0x1E48_sub_0x48[16] = {
	(void *)dStageMetalFile2_palette_0x09B0,
	(void *)dStageMetalFile2_palette_0x09E0,
	(void *)dStageMetalFile2_palette_0x09F8,
	(void *)dStageMetalFile2_palette_0x0A10,
	(void *)dStageMetalFile2_palette_0x0A28,
	(void *)dStageMetalFile2_palette_0x0A40,
	(void *)dStageMetalFile2_palette_0x0A58,
	(void *)dStageMetalFile2_palette_0x0A70,
	(void *)dStageMetalFile2_palette_0x0A88,
	(void *)dStageMetalFile2_palette_0x0AA0,
	(void *)dStageMetalFile2_palette_0x0AB8,
	(void *)dStageMetalFile2_palette_0x0AD0,
	(void *)dStageMetalFile2_palette_0x0AE8,
	(void *)dStageMetalFile2_palette_0x0B00,
	(void *)dStageMetalFile2_palette_0x0B18,
	(void *)dStageMetalFile2_palette_0x0B30,
};

/* gap sub-block @ 0x1ED0 (was gap+0x88, 120 bytes) */
MObjSub dStageMetalFile2_gap_0x1E48_sub_0x88[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x000F, 0x0001,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageMetalFile2_gap_0x1E48_sub_0x48,
		0x0004,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0x99, 0x00 } },
		{ { 0x4C, 0x4C, 0x2E, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x1F48 (was gap+0x100, 120 bytes) */
MObjSub dStageMetalFile2_gap_0x1E48_sub_0x100[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x009F, 0x004F,
		2,
		0.01015700027346611f, 0.009943000040948391f,
		1.0f, 1.0f,
		0.01015700027346611f, 1.0f,
		(void**)0x00000000,
		0x0020,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x000E2205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub* array @ 0x1FC0 — the 3 Layer1 MObjSubs (Layer1MObj_MObjSub[1] points here). */
MObjSub *dStageMetalFile2_gap_0x1E48_sub_0x178[4] = {
	dStageMetalFile2_Layer1MObj_MObjSub_real,
	dStageMetalFile2_gap_0x1E48_sub_0x88,
	dStageMetalFile2_gap_0x1E48_sub_0x100,
	NULL,
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
	{ 1, (void*)dStageMetalFile2_DL_0x2950, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x2F64 to 0x3068 (260 bytes) */
/* MPVertexData[12] @ 0x2F64 — vertex positions (MPGeometryData.vertex_data) */
MPVertexData dStageMetalFile2_gap_0x2F64[12] = {
	{ {    612,    948 }, 0x4000 },
	{ {   -612,    948 }, 0x0000 },
	{ {  -1500,    -90 }, 0x0000 },
	{ {  -1500,   -870 }, 0x0000 },
	{ {   1392,   -961 }, 0x0000 },
	{ {   1418,   -493 }, 0x0000 },
	{ {   1865,   -444 }, 0x0000 },
	{ {   2292,    176 }, 0x8000 },
	{ {   1362,    222 }, 0x0000 },
	{ {    673,    -76 }, 0x0000 },
	{ {    -45,    -78 }, 0x0000 },
	{ {   -765,     58 }, 0x8000 },
};

/* MPVertexArray (18 IDs) @ 0x2FAC — vertex_id table (MPGeometryData.vertex_id) */
u16 dStageMetalFile2_gap_0x2F64_sub_0x48[18] = {
	  0,   1,   7,   8,   9,  10,  11,   2,   3,   4,   5,   6,   6,   7,   4,   5,
	  2,   3,
};

/* MPVertexLinks[7] @ 0x2FD0 — line vertex pairs (MPGeometryData.vertex_links) */
MPVertexLinks dStageMetalFile2_gap_0x2F64_sub_0x6C[7] = {
	{   0, 2 }, {   2, 6 }, {   8, 2 }, {  10, 2 }, {  12, 2 }, {  14, 2 },
	{  16, 2 },
};

/* MPLineInfo[1] @ 0x2FEC — yakumono line groups (MPGeometryData.line_info) */
MPLineInfo dStageMetalFile2_gap_0x2F64_sub_0x88[1] = {
	{ 1, { {  0,   2}, {  2,   2}, {  4,   2}, {  6,   1} } },
};

/* MPMapObjData[17] @ 0x3000 — map objects (MPGeometryData.mapobjs); 2 bytes pad to align next decl */
MPMapObjData dStageMetalFile2_gap_0x2F64_sub_0x9C[17] = {
	{  37, {     0,  1050 } },
	{  33, {     0,     0 } },
	{   4, { -1050,  4800 } },
	{   4, {  -750,  4800 } },
	{   4, {  -420,  4800 } },
	{   4, {  -120,  4800 } },
	{   4, {   150,  4800 } },
	{   4, {   450,  4800 } },
	{   4, {   780,  4800 } },
	{   4, {  1080,  4800 } },
	{   4, {  -300,   540 } },
	{   4, {   300,   540 } },
	{   0, {  -960,   135 } },
	{   1, {  -330,    45 } },
	{   2, {   525,    30 } },
	{   3, {  1545,   315 } },
	{  32, {     0,  1710 } },
};

/* MPGeometryData @ 0x3068 (28 bytes + 12 bytes pad) */
MPGeometryData dStageMetalFile2_MPGeometryData_0x3068 = {
	1,
	(MPVertexPosContainer*)dStageMetalFile2_gap_0x2F64,
	(MPVertexArray*)dStageMetalFile2_gap_0x2F64_sub_0x48,
	dStageMetalFile2_gap_0x2F64_sub_0x6C,
	dStageMetalFile2_gap_0x2F64_sub_0x88,
	17,
	(MPMapObjContainer*)dStageMetalFile2_gap_0x2F64_sub_0x9C,
};
PAD(12);

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

/* MObjSub-list head @ 0x3220 — 2-entry MObjSub** array.
 * The real MObjSub data starts at +0x8 (dStageMetalFile2_Layer2MObj_MObjSub_real below). */
/* TODO: data.inc.c — block at 0x3220 was MObjSub[2]; contains 1 embedded chain pointer(s) split out below */
u8 dStageMetalFile2_Layer2MObj_MObjSub[4] = {
	/* TODO: data.inc.c */
	#include <StageMetalFile2/Layer2MObj_MObjSub.data.inc.c>
};

u32 dStageMetalFile2_data_0x3224[1] = { (u32)dStageMetalFile2_gap_0x3298_sub_0x8 };


/* The real MObjSub @ +0x8 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dStageMetalFile2_Layer2MObj_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x009F, 0x004F,
		2,
		9.999999747378752e-05f, 0.0013099999632686377f,
		1.0f, 1.0f,
		9.999999747378752e-05f, 1.0f,
		(void**)0x00000000,
		0x0020,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00062205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x3298 to 0x3468 (464 bytes) */
/* gap sub-block @ 0x32A0 (was gap+0x8, 8 bytes) */
/* MObjSub.sprites pointer table @ +0x32A0 (2 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
MObjSub *dStageMetalFile2_gap_0x3298_sub_0x8[2] = {
	&dStageMetalFile2_Layer2MObj_MObjSub_real,
	NULL,
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
	{ 1, (void*)dStageMetalFile2_DL_0x3368, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
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

extern MObjSub *dStageMetalFile2_Layer3MObj_MObjSubPtrArray[];

/* MObjSub-list head @ 0x3550 — MObjSub** table ([0] NULL, [1] -> PtrArray). */
MObjSub **dStageMetalFile2_Layer3MObj_MObjSub[2] = {
	NULL,
	dStageMetalFile2_Layer3MObj_MObjSubPtrArray,
};

/* MObjSub @ 0x3558 */
MObjSub dStageMetalFile2_Layer3MObj_MObjSub_real0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x009F, 0x004F,
		2,
		0.004556000232696533f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		0.004556000232696533f, 1.0f,
		(void**)0x00000000,
		0x0020,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00062205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x35D0 */
MObjSub dStageMetalFile2_Layer3MObj_MObjSub_real1[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x009F, 0x004F,
		2,
		9.999999747378752e-05f, 0.0008239999879151583f,
		1.0f, 1.0f,
		9.999999747378752e-05f, 1.0f,
		(void**)0x00000000,
		0x0020,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00062205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3648 */
MObjSub dStageMetalFile2_Layer3MObj_MObjSub_real2[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x009F, 0x004F,
		2,
		9.999999747378752e-05f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		9.999999747378752e-05f, 1.0f,
		(void**)0x00000000,
		0x0020,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00062205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x36C0 */
MObjSub dStageMetalFile2_Layer3MObj_MObjSub_real3[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x009F, 0x004F,
		2,
		9.999999747378752e-05f, 0.009999999776482582f,
		1.0f, 1.0f,
		9.999999747378752e-05f, 1.0f,
		(void**)0x00000000,
		0x0020,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00062205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};


/* MObjSub pointer array @ 0x3730 (28 bytes: leading pad + 6 pointers + NULL) */
MObjSub *dStageMetalFile2_Layer3MObj_MObjSubPtrArray[5] = {
	dStageMetalFile2_Layer3MObj_MObjSub_real0,
	dStageMetalFile2_Layer3MObj_MObjSub_real1,
	dStageMetalFile2_Layer3MObj_MObjSub_real2,
	dStageMetalFile2_Layer3MObj_MObjSub_real3,
	NULL,
};

/* Raw data from file offset 0x374C to 0x3DD8 (1676 bytes) */
/* gap sub-block @ 0x374C (was gap+0x0, 4 bytes) */
PAD(4);

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
	{ 1, (void*)dStageMetalFile2_DL_0x3B50, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
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

