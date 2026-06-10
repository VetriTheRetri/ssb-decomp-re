/* relocData file 111: StageYosterFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Gfx dStageYosterFile2_DL_0x05A8[];
extern Gfx dStageYosterFile2_DL_0x58F8[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x1058[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x10D8[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x1118[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x828[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xA28[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xB28[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xD28[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xD68[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xDA8[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xDE8[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xE68[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xEE8[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xF68[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xFA8[];
extern Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xFE8[];
extern Vtx dStageYosterFile2_MPGeometryData_0x5188_trailing_Vtx_0xC[];
extern Vtx dStageYosterFile2_MPGeometryData_0x5188_trailing_Vtx_0xCC[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0x120[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0x160[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0x1E0[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0x260[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0x330[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0x370[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0x3B0[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0x3F0[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0x430[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0x460[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0x490[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0x4A0[];
extern Vtx dStageYosterFile2_gap_0x0078_sub_0xE0[];
extern Vtx dStageYosterFile2_gap_0x54CC_sub_0x144[];
extern Vtx dStageYosterFile2_gap_0x54CC_sub_0x184[];
extern Vtx dStageYosterFile2_gap_0x54CC_sub_0x1F4[];
extern Vtx dStageYosterFile2_gap_0x54CC_sub_0x234[];
extern Vtx dStageYosterFile2_gap_0x54CC_sub_0x274[];
extern Vtx dStageYosterFile2_gap_0x54CC_sub_0x2F4[];
extern Vtx dStageYosterFile2_gap_0x54CC_sub_0x374[];
extern Vtx dStageYosterFile2_gap_0x54CC_sub_0x4[];
extern Vtx dStageYosterFile2_gap_0x54CC_sub_0x44[];
extern Vtx dStageYosterFile2_gap_0x54CC_sub_0x84[];
extern Vtx dStageYosterFile2_gap_0x54CC_sub_0xC4[];
extern Vtx dStageYosterFile2_gap_0x5CE8_sub_0x19C8[];
extern u16 dStageYosterFile2_gap_0x5CE8_sub_0x1EC0[];
extern Vtx dStageYosterFile2_gap_0x5CE8_sub_0x2710[];
extern Vtx dStageYosterFile2_gap_0x5CE8_sub_0x2960[];
extern u16 dStageYosterFile2_gap_0x5CE8_sub_0x3080[];
extern Vtx dStageYosterFile2_gap_0x5CE8_sub_0x38D0[];
extern u16 dStageYosterFile2_gap_0x5CE8_sub_0x3F40[];
extern Vtx dStageYosterFile2_gap_0x5CE8_sub_0x4790[];
extern u16 dStageYosterFile2_gap_0x5CE8_sub_0x4DF0[];
extern Vtx dStageYosterFile2_gap_0x5CE8_sub_0x5640[];
extern u16 dStageYosterFile2_gap_0x5CE8_sub_0xD8[];
extern u16 dStageYosterImages_Lut_0x0008_palette[];
extern u16 dStageYosterImages_Lut_0x0030_palette[];
extern u16 dStageYosterImages_Lut_0x0128_palette[];
extern u16 dStageYosterImages_Lut_0x0150_palette[];
extern u16 dStageYosterImages_Lut_0x0178_palette[];
extern u16 dStageYosterImages_Lut_0x01A0_palette[];
extern u16 dStageYosterImages_Lut_0x01C8_palette[];
extern u16 dStageYosterImages_Lut_0x01F0_palette[];
extern u16 dStageYosterImages_Lut_0x0218_palette[];
extern u16 dStageYosterImages_Lut_0x0528_palette[];
extern u8 dStageYosterImages_Tex_0x0058[];
extern u8 dStageYosterImages_Tex_0x00A0[];
extern u8 dStageYosterImages_Tex_0x0240[];
extern u8 dStageYosterImages_Tex_0x02C8[];
extern u8 dStageYosterImages_Tex_0x0760[];
extern u8 dStageYosterImages_Tex_0x0A68[];
extern u8 dStageYosterImages_Tex_0x0BD0[];
extern u8 dStageYosterImages_Tex_0x0C18[];
extern u8 dStageYosterImages_Tex_0x0D20[];
extern u8 dStageYosterImages_Tex_0x0EA8[];
extern u8 dStageYosterImages_Tex_0x1030[];
extern MObjSub *dStageYosterFile2_gap_0x5CE8_sub_0x19C0[];
extern MObjSub *dStageYosterFile2_gap_0x5CE8_sub_0x2708[];
extern MObjSub *dStageYosterFile2_gap_0x5CE8_sub_0x38C8[];
extern MObjSub *dStageYosterFile2_gap_0x5CE8_sub_0x4788[];
extern MObjSub *dStageYosterFile2_gap_0x5CE8_sub_0x5638[];
extern u8 dStageYosterImages_Tex_0x0550[];
extern u8 dStageYosterImages_Tex_0x0658[];
extern u16 dStageYosterImages_Lut_0x0008_palette[];
extern u16 dStageYosterImages_Lut_0x0030_palette[];
extern u16 dStageYosterImages_Lut_0x0128_palette[];
extern u16 dStageYosterImages_Lut_0x0150_palette[];
extern u16 dStageYosterImages_Lut_0x0178_palette[];
extern u16 dStageYosterImages_Lut_0x01A0_palette[];
extern u16 dStageYosterImages_Lut_0x01C8_palette[];
extern u16 dStageYosterImages_Lut_0x01F0_palette[];
extern u16 dStageYosterImages_Lut_0x0218_palette[];
extern u16 dStageYosterImages_Lut_0x0528_palette[];
extern u8 dStageYosterImages_Tex_0x0058[];
extern u8 dStageYosterImages_Tex_0x00A0[];
extern u8 dStageYosterImages_Tex_0x0240[];
extern u8 dStageYosterImages_Tex_0x02C8[];
extern u8 dStageYosterImages_Tex_0x0760[];
extern u8 dStageYosterImages_Tex_0x0A68[];
extern u8 dStageYosterImages_Tex_0x0BD0[];
extern u8 dStageYosterImages_Tex_0x0C18[];
extern u8 dStageYosterImages_Tex_0x0D20[];
extern u8 dStageYosterImages_Tex_0x0EA8[];
extern u8 dStageYosterImages_Tex_0x1030[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x1198[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x11B0[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x11C8[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x1238[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x160C[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x1A28[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x1DFC[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x2094[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x233C[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x2728[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x2AFC[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x2DA4[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x2E48[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x3290[];
extern u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x3334[];

extern u32 dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data[];
extern AObjEvent32 **dStageYosterFile2_Layer0MatAnim_MatAnimJoint[];

extern MObjSub *dStageYosterFile2_Layer0MObj_0x148[2];
extern MObjSub *dStageYosterFile2_gap_0x0078_sub_0xD8[2];

/* @ 0x0 (72 bytes) — Layer0 MObj sub-table. The layer descriptor's
 * MObj pointer (GRYosterMap gr_desc[0][2]) points at this symbol.
 * MObjSub**[18]: file-initialised only at slots 15/17 (-> the two
 * MObjSub*[2] joint arrays); the rest are runtime state. */
MObjSub **dStageYosterFile2_Layer0MObj_MObjSub[18] = {
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	(MObjSub **)dStageYosterFile2_Layer0MObj_0x148,
	NULL,
	(MObjSub **)dStageYosterFile2_gap_0x0078_sub_0xD8,
};

u8 * dStageYosterFile2_Layer0MObj_0x48[1] = { dStageYosterImages_Tex_0x0550 };

u8 * dStageYosterFile2_data_0x004C[1] = { dStageYosterImages_Tex_0x0658 };

u8 * dStageYosterFile2_Layer0MObj_0x50[1] = { dStageYosterImages_Tex_0x0550 };

u8 * dStageYosterFile2_data_0x0054[1] = { dStageYosterImages_Tex_0x0658 };


/* @ 0x58 — MObjSub */
MObjSub dStageYosterFile2_Layer0MObj_0x58[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void **)dStageYosterFile2_Layer0MObj_0x48,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void **)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002004,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	},
};

/* @ 0xD0 — MObjSub */
MObjSub dStageYosterFile2_Layer0MObj_0xD0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void **)dStageYosterFile2_Layer0MObj_0x50,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void **)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002004,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	},
};

/* @ 0x148 / 0x150 — MObjSub* tables */
MObjSub *dStageYosterFile2_Layer0MObj_0x148[2] = { dStageYosterFile2_Layer0MObj_0x58, NULL };
MObjSub *dStageYosterFile2_gap_0x0078_sub_0xD8[2] = { dStageYosterFile2_Layer0MObj_0xD0, NULL };

/* Vtx: gap_0x0078_sub_0xE0 @ 0x158 (4 vertices) */
Vtx dStageYosterFile2_gap_0x0078_sub_0xE0[4] = {
	#include <StageYosterFile2/gap_0x0078_sub_0xE0.vtx.inc.c>
};

/* Vtx: gap_0x0078_sub_0x120 @ 0x198 (4 vertices) */
Vtx dStageYosterFile2_gap_0x0078_sub_0x120[4] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x120.vtx.inc.c>
};

/* Vtx: gap_0x0078_sub_0x160 @ 0x1D8 (8 vertices) */
Vtx dStageYosterFile2_gap_0x0078_sub_0x160[8] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x160.vtx.inc.c>
};

/* Vtx: gap_0x0078_sub_0x1E0 @ 0x258 (8 vertices) */
Vtx dStageYosterFile2_gap_0x0078_sub_0x1E0[8] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x1E0.vtx.inc.c>
};

/* Vtx: gap_0x0078_sub_0x260 @ 0x2D8 (13 vertices) */
Vtx dStageYosterFile2_gap_0x0078_sub_0x260[13] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x260.vtx.inc.c>
};

/* gap sub-block @ 0x03A8 (was gap+0x330, 64 bytes) */
Vtx dStageYosterFile2_gap_0x0078_sub_0x330[4] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x330.vtx.inc.c>
};

/* gap sub-block @ 0x03E8 (was gap+0x370, 64 bytes) */
Vtx dStageYosterFile2_gap_0x0078_sub_0x370[4] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x370.vtx.inc.c>
};

/* gap sub-block @ 0x0428 (was gap+0x3B0, 64 bytes) */
Vtx dStageYosterFile2_gap_0x0078_sub_0x3B0[4] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x3B0.vtx.inc.c>
};

/* gap sub-block @ 0x0468 (was gap+0x3F0, 64 bytes) */
Vtx dStageYosterFile2_gap_0x0078_sub_0x3F0[4] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x3F0.vtx.inc.c>
};

/* gap sub-block @ 0x04A8 (was gap+0x430, 48 bytes) */
Vtx dStageYosterFile2_gap_0x0078_sub_0x430[3] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x430.vtx.inc.c>
};

/* gap sub-block @ 0x04D8 (was gap+0x460, 48 bytes) */
Vtx dStageYosterFile2_gap_0x0078_sub_0x460[3] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x460.vtx.inc.c>
};

/* gap sub-block @ 0x0508 (was gap+0x490, 16 bytes) */
Vtx dStageYosterFile2_gap_0x0078_sub_0x490[1] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x490.vtx.inc.c>
};

/* Vtx: gap_0x0078_sub_0x4A0 @ 0x518 (4 vertices) */
Vtx dStageYosterFile2_gap_0x0078_sub_0x4A0[4] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x4A0.vtx.inc.c>
};

/* gap sub-block @ 0x0558 (was gap+0x4E0, 80 bytes) */
Gfx dStageYosterFile2_DL_0x0558[10] = {
	#include <StageYosterFile2/DL_0x0558.dl.inc.c>
};

/* gap sub-block @ 0x05A8 (was gap+0x530, 112 bytes) */
Gfx dStageYosterFile2_DL_0x05A8[14] = {
	#include <StageYosterFile2/DL_0x05A8.dl.inc.c>
};

/* gap sub-block @ 0x0618 (was gap+0x5A0, 40 bytes) */
Gfx dStageYosterFile2_DL_0x0618[5] = {
	#include <StageYosterFile2/DL_0x0618.dl.inc.c>
};

/* Merged Gfx DL @ 0x5C8 — 3 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dStageYosterFile2_gap_0x0078_sub_0x5C8[76] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x5C8.dl.inc.c>
};

/* gap sub-block @ 0x08A0 (was gap+0x828, 152 bytes) */
Gfx dStageYosterFile2_DL_0x08A0[19] = {
	#include <StageYosterFile2/DL_0x08A0.dl.inc.c>
};

/* Merged Gfx DL @ 0x8C0 — 2 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dStageYosterFile2_gap_0x0078_sub_0x8C0[43] = {
	#include <StageYosterFile2/gap_0x0078_sub_0x8C0.dl.inc.c>
};

/* gap sub-block @ 0x0A90 (was gap+0xA18, 128 bytes) */
Gfx dStageYosterFile2_DL_0x0A90[16] = {
	#include <StageYosterFile2/DL_0x0A90.dl.inc.c>
};

/* gap sub-block @ 0x0B10 (was gap+0xA98, 32 bytes) */
Gfx dStageYosterFile2_DL_0x0B10[4] = {
	#include <StageYosterFile2/DL_0x0B10.dl.inc.c>
};

/* gap sub-block @ 0x0B30 (was gap+0xAB8, 40 bytes) */
Gfx dStageYosterFile2_DL_0x0B30[5] = {
	#include <StageYosterFile2/DL_0x0B30.dl.inc.c>
};

/* gap sub-block @ 0x0B58 (was gap+0xAE0, 32 bytes) */
Gfx dStageYosterFile2_DL_0x0B58[4] = {
	#include <StageYosterFile2/DL_0x0B58.dl.inc.c>
};

/* gap sub-block @ 0x0B78 (was gap+0xB00, 32 bytes) */
Gfx dStageYosterFile2_DL_0x0B78[4] = {
	#include <StageYosterFile2/DL_0x0B78.dl.inc.c>
};

/* gap sub-block @ 0x0B98 (was gap+0xB20, 32 bytes) */
Gfx dStageYosterFile2_DL_0x0B98[4] = {
	#include <StageYosterFile2/DL_0x0B98.dl.inc.c>
};

/* Merged Gfx DL @ 0xB40 — 2 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dStageYosterFile2_gap_0x0078_sub_0xB40[4] = {
	#include <StageYosterFile2/gap_0x0078_sub_0xB40.dl.inc.c>
};

/* Merged Gfx DL @ 0xB60 — 2 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dStageYosterFile2_gap_0x0078_sub_0xB60[9] = {
	#include <StageYosterFile2/gap_0x0078_sub_0xB60.dl.inc.c>
};

/* gap sub-block @ 0x0C20 (was gap+0xBA8, 240 bytes) */
Gfx dStageYosterFile2_DL_0x0C20[30] = {
	#include <StageYosterFile2/DL_0x0C20.dl.inc.c>
};

/* Merged Gfx DL @ 0xC98 — 2 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dStageYosterFile2_gap_0x0078_sub_0xC98[30] = {
	#include <StageYosterFile2/gap_0x0078_sub_0xC98.dl.inc.c>
};

/* DObjDesc: Layer0DObj @ 0xE00 (19 entries) */
DObjDesc dStageYosterFile2_Layer0DObj[] = {
	{ 0, (void*)0x00000000, { 0.0001140000022132881f, 0.0f, 0.0001140000022132881f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_DL_0x0558, { 887.4002075195312f, 1080.0f, -1799.9998779296875f }, { 0.0f, 0.0f, 6.283185005187988f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_DL_0x0618, { -1500.0003662109375f, 60.00001525878906f, -1584.0010986328125f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_gap_0x0078_sub_0x5C8, { 0.0f, 0.0f, 0.0001720000000204891f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_DL_0x08A0, { 138.6901092529297f, 903.6001586914062f, -933.5997924804688f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_gap_0x0078_sub_0x8C0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_DL_0x0A90, { 41.6071662902832f, 289.7127380371094f, -837.2098999023438f }, { 0.0f, 0.0f, 2.967060089111328f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_DL_0x0B10, { 664.7279052734375f, 441.3717346191406f, -837.2098999023438f }, { 0.0f, 0.0f, 3.9269909858703613f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_DL_0x0B30, { -462.7022399902344f, 511.9356994628906f, -837.2099609375f }, { 0.0f, 0.0f, 2.356194019317627f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_DL_0x0B58, { 788.2991943359375f, 950.05029296875f, -837.2099609375f }, { 0.0f, 0.0f, 4.71238899230957f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_DL_0x0B78, { -531.4540405273438f, 950.05029296875f, -837.2099609375f }, { 0.0f, 0.0f, 1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_DL_0x0B98, { 664.7279052734375f, 1409.700927734375f, -837.2099609375f }, { 0.0f, 0.0f, 5.497786998748779f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_gap_0x0078_sub_0xB40, { -445.2885437011719f, 1414.822265625f, -837.2099609375f }, { 0.0f, 0.0f, 0.785398006439209f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_gap_0x0078_sub_0xB60, { 87.81080627441406f, 1564.724853515625f, -837.2099609375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -3870.00048828125f, 1830.0f, -480.0003356933594f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dStageYosterFile2_DL_0x0C20, { 0.0f, 0.0005719999899156392f, -5.700000110664405e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0667719841003418f, 1.2984600067138672f, 1.0667719841003418f } },
	{ 1, (void*)0x00000000, { 3810.0f, 2999.999755859375f, -479.9999084472656f }, { 0.0f, 0.0f, 0.0f }, { 1.149999976158142f, 1.149999976158142f, 1.0f } },
	{ 2, (void*)dStageYosterFile2_gap_0x0078_sub_0xC98, { -0.000686999992467463f, 0.000686999992467463f, -5.700000110664405e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0667719841003418f, 1.2984600067138672f, 1.0667719841003418f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x1150 to 0x3780 (9776 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dStageYosterFile2_Layer0Anim_AnimJoint[18] = {
	NULL,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x1198,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x11B0,
	NULL,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x11C8,
	NULL,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x1238,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x160C,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x1A28,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x1DFC,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x2094,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x233C,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x2728,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x2AFC,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x2DA4,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x2E48,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x3290,
	(AObjEvent32 *)dStageYosterFile2_Layer0Anim_AnimJoint_0x3334,
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x1198[] = {
	aobjEvent32SetValBlock(0x004, 0),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetValBlock(0x004, 640),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x1198),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x11B0[] = {
	aobjEvent32SetValBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x004, 640),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x11B0),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x11C8[] = {
	aobjEvent32SetValRateBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	    0x3CBC0AEB,  /* 0.0229544248431921f */
	aobjEvent32SetVal0RateBlock(0x004, 32),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0xBF060A92,  /* -0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0xBF060A92,  /* -0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0xBF060A92,  /* -0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0xBF060A92,  /* -0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x004, 64),
	    0xBF060A92,  /* -0.5235987901687622f */
	aobjEvent32SetValRateBlock(0x004, 32),
	    0x00000000,  /* 0.0f */
	    0x3CC90D1F,  /* 0.024542389437556267f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x11C8),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x1238[] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DBD,  /* 41.6071662902832f */
	    0x433A1892,  /* 186.09597778320312f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CB8,  /* 59.871795654296875f */
	    0x4390DB39,  /* 289.7126770019531f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x42266DCE,  /* 41.60723114013672f */
	    0x433A188E,  /* 186.09591674804688f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x426F7CAF,  /* 59.871761322021484f */
	    0x4390DB3B,  /* 289.7127380371094f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x1238),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x160C[] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetVal(0x010, 9),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetVal(0x020, 8),
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x010, 7),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetVal(0x010, 10),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetVal(0x020, 8),
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32Wait(2),
	aobjEvent32SetValBlock(0x010, 6),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetVal(0x020, 10),
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetVal(0x010, 8),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32Wait(2),
	aobjEvent32SetValBlock(0x020, 6),
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF91,  /* 441.3716125488281f */
	aobjEvent32SetVal(0x010, 9),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetVal(0x020, 8),
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x010, 7),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetVal(0x010, 10),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetVal(0x020, 8),
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32Wait(2),
	aobjEvent32SetValBlock(0x010, 6),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetVal(0x020, 10),
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetVal(0x010, 8),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32Wait(2),
	aobjEvent32SetValBlock(0x020, 6),
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x43B76E4E,  /* 366.86175537109375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x43DCAF95,  /* 441.3717346191406f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x160C),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x1A28[] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655D9,  /* -537.3413696289062f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E2,  /* -462.70220947265625f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F0,  /* 437.29638671875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC40655DB,  /* -537.3414916992188f */
	    0x43DAA5F3,  /* 437.2964782714844f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3E759E3,  /* -462.7022399902344f */
	    0x43FFF7C5,  /* 511.9356994628906f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x1A28),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x1DFC[] = {
	aobjEvent32SetVal(0x010, 0),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValAfter(0x020, 0),
	    0x446D8338,  /* 950.05029296875f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 9),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 7),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 9),
	    0x445F6B0B,  /* 893.6725463867188f */
	aobjEvent32SetValBlock(0x010, 7),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x445F6B08,  /* 893.67236328125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x44451326,  /* 788.2991943359375f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x1DFC),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x2094[] = {
	aobjEvent32SetVal(0x010, 0),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValAfter(0x020, 0),
	    0x446D8338,  /* 950.05029296875f */
	aobjEvent32SetValBlock(0x010, 3),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 5),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 3),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 5),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F3,  /* -636.8273315429688f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC41F34F4,  /* -636.827392578125f */
	aobjEvent32SetValBlock(0x010, 8),
	    0xC404DD0F,  /* -531.4540405273438f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x2094),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x233C[] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetVal(0x020, 9),
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetVal(0x010, 8),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x020, 7),
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetVal(0x020, 9),
	    0x44B986C2,  /* 1484.211181640625f */
	aobjEvent32SetValBlock(0x010, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	aobjEvent32SetVal(0x010, 8),
	    0x44262E96,  /* 664.7279052734375f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x020, 7),
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x4438D77F,  /* 739.3671264648438f */
	    0x44B986C4,  /* 1484.21142578125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0x44262E96,  /* 664.7279052734375f */
	    0x44B0366E,  /* 1409.700927734375f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x233C),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x2728[] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA50,  /* 1414.822265625f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4F1,  /* -445.2886047363281f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C4,  /* -519.840087890625f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC401F5C5,  /* -519.8401489257812f */
	    0x44BA2AA7,  /* 1489.3328857421875f */
	aobjEvent32SetValBlock(0x030, 8),
	    0xC3DEA4EF,  /* -445.2885437011719f */
	    0x44B0DA51,  /* 1414.8223876953125f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x2728),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x2AFC[] = {
	aobjEvent32SetVal(0x020, 0),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x42AF9F22,  /* 87.81080627441406f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 7),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 9),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 7),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 7),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C321,  /* 1670.0977783203125f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 9),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 7),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44D0C31F,  /* 1670.0975341796875f */
	aobjEvent32SetValBlock(0x020, 8),
	    0x44C39732,  /* 1564.724853515625f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x2AFC),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x2DA4[] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x00000000,  /* 0.0f */
	    0x3CC56B70,  /* 0.024099081754684448f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x004, 20),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetValRateBlock(0x004, 20),
	    0x00000000,  /* 0.0f */
	    0x3CC92615,  /* 0.024554291740059853f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x2DA4),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x2E48[] = {
	aobjEvent32SetValBlock(0x380, 0),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	aobjEvent32SetValRate(0x280, 19),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D20,  /* -3.056648267829587e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D20,  /* -3.056648267829587e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 19),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCCE,  /* -2.980232505223057e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCCE,  /* -2.980232505223057e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCCD,  /* -2.9802322831784522e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCCD,  /* -2.9802322831784522e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRateBlock(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75945,  /* -0.006083639804273844f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3C8143C6,  /* 0.015779387205839157f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75945,  /* -0.006083639804273844f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D796,  /* 0.006373356096446514f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0xBC876B95,  /* -0.01653079129755497f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D796,  /* 0.006373356096446514f */
	aobjEvent32SetValRate(0x280, 19),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D21,  /* -3.056648489874192e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D21,  /* -3.056648489874192e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 19),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCCE,  /* -2.980232505223057e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCCE,  /* -2.980232505223057e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCCC,  /* -2.9802320611338473e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCCC,  /* -2.9802320611338473e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRateBlock(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75941,  /* -0.0060836379416286945f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3C8143C3,  /* 0.01577938161790371f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75941,  /* -0.0060836379416286945f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D796,  /* 0.006373356096446514f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0xBC876B95,  /* -0.01653079129755497f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D796,  /* 0.006373356096446514f */
	aobjEvent32SetValRate(0x280, 19),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D24,  /* -3.0566491560080067e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D24,  /* -3.0566491560080067e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 19),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCCC,  /* -2.9802320611338473e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCCC,  /* -2.9802320611338473e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCCC,  /* -2.9802320611338473e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCCC,  /* -2.9802320611338473e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRateBlock(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC7594A,  /* -0.00608364213258028f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3C8143C9,  /* 0.015779392793774605f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC7594A,  /* -0.00608364213258028f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D796,  /* 0.006373356096446514f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0xBC876B95,  /* -0.01653079129755497f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D796,  /* 0.006373356096446514f */
	aobjEvent32SetValRate(0x280, 19),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D1F,  /* -3.056648045784982e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D1F,  /* -3.056648045784982e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 19),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0x31579439,  /* 3.1370872566327535e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0x31579439,  /* 3.1370872566327535e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 18),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x315D67D1,  /* 3.221874544934167e-09f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x315D67D1,  /* 3.221874544934167e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 18),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 19),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D1F,  /* -3.056648045784982e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D1F,  /* -3.056648045784982e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 19),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRateBlock(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75952,  /* -0.006083645857870579f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3C8143CE,  /* 0.01577940210700035f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75952,  /* -0.006083645857870579f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D783,  /* 0.006373347248882055f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0xBC876B89,  /* -0.01653076894581318f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D783,  /* 0.006373347248882055f */
	aobjEvent32SetValRate(0x280, 19),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D1F,  /* -3.056648045784982e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D1F,  /* -3.056648045784982e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 19),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRateBlock(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75941,  /* -0.0060836379416286945f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3C8143C3,  /* 0.01577938161790371f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75941,  /* -0.0060836379416286945f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D783,  /* 0.006373347248882055f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0xBC876B89,  /* -0.01653076894581318f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D783,  /* 0.006373347248882055f */
	aobjEvent32SetValRate(0x280, 19),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D29,  /* -3.0566502662310313e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D29,  /* -3.0566502662310313e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 19),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRateBlock(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75963,  /* -0.006083653774112463f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3C8143D9,  /* 0.015779422596096992f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75963,  /* -0.006083653774112463f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D7A9,  /* 0.006373364944010973f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0xBC876BA1,  /* -0.01653081364929676f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D7A9,  /* 0.006373364944010973f */
	aobjEvent32SetValRate(0x280, 19),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D14,  /* -3.056645603294328e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D14,  /* -3.056645603294328e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 19),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCDA,  /* -2.9802351697583163e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCDA,  /* -2.9802351697583163e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetVal0Rate(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	aobjEvent32Wait(17),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x2E48),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x3290[] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x00000000,  /* 0.0f */
	    0x3CC56B70,  /* 0.024099081754684448f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal0RateBlock(0x004, 20),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetVal0RateBlock(0x004, 40),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetValRateBlock(0x004, 20),
	    0x00000000,  /* 0.0f */
	    0x3CC92615,  /* 0.024554291740059853f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x3290),
};

u32 dStageYosterFile2_Layer0Anim_AnimJoint_0x3334[] = {
	aobjEvent32SetValBlock(0x380, 0),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	aobjEvent32SetValBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	aobjEvent32SetValRate(0x280, 18),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1579436,  /* -3.1370865904989387e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1579436,  /* -3.1370865904989387e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 18),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCCE,  /* -2.980232505223057e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCCE,  /* -2.980232505223057e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCCD,  /* -2.9802322831784522e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCCD,  /* -2.9802322831784522e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRateBlock(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75945,  /* -0.006083639804273844f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3C8143C6,  /* 0.015779387205839157f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75945,  /* -0.006083639804273844f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D796,  /* 0.006373356096446514f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0xBC876B95,  /* -0.01653079129755497f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D796,  /* 0.006373356096446514f */
	aobjEvent32SetValRate(0x280, 19),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D21,  /* -3.056648489874192e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D21,  /* -3.056648489874192e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 19),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCCE,  /* -2.980232505223057e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCCE,  /* -2.980232505223057e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCCC,  /* -2.9802320611338473e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCCC,  /* -2.9802320611338473e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRateBlock(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75941,  /* -0.0060836379416286945f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3C8143C3,  /* 0.01577938161790371f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75941,  /* -0.0060836379416286945f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BDB48C3,  /* 0.006692023482173681f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0xBC8E30F5,  /* -0.01735732890665531f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BDB48C3,  /* 0.006692023482173681f */
	aobjEvent32SetValRate(0x280, 18),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1579439,  /* -3.1370872566327535e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1579439,  /* -3.1370872566327535e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 18),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCCC,  /* -2.9802320611338473e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCCC,  /* -2.9802320611338473e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRateBlock(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75941,  /* -0.0060836379416286945f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3C8143C3,  /* 0.01577938161790371f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75941,  /* -0.0060836379416286945f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D796,  /* 0.006373356096446514f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0xBC876B95,  /* -0.01653079129755497f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D796,  /* 0.006373356096446514f */
	aobjEvent32SetValRate(0x280, 19),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D29,  /* -3.0566502662310313e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D29,  /* -3.0566502662310313e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 19),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0x314CCCC6,  /* 2.9802307288662178e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0x314CCCC6,  /* 2.9802307288662178e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x31579439,  /* 3.1370872566327535e-09f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x31579439,  /* 3.1370872566327535e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 18),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1579439,  /* -3.1370872566327535e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1579439,  /* -3.1370872566327535e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 18),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRateBlock(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75952,  /* -0.006083645857870579f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3C8143CE,  /* 0.01577940210700035f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75952,  /* -0.006083645857870579f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D783,  /* 0.006373347248882055f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0xBC876B89,  /* -0.01653076894581318f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D783,  /* 0.006373347248882055f */
	aobjEvent32SetValRate(0x280, 19),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D1F,  /* -3.056648045784982e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D1F,  /* -3.056648045784982e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 19),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCD0,  /* -2.980232949312267e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRateBlock(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75941,  /* -0.0060836379416286945f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3C8143C3,  /* 0.01577938161790371f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75941,  /* -0.0060836379416286945f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BDB48A4,  /* 0.006692009046673775f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0xBC8E30E1,  /* -0.017357291653752327f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BDB48A4,  /* 0.006692009046673775f */
	aobjEvent32SetValRate(0x280, 18),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1579439,  /* -3.1370872566327535e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1579439,  /* -3.1370872566327535e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 18),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCDA,  /* -2.9802351697583163e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCDA,  /* -2.9802351697583163e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRateBlock(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75941,  /* -0.0060836379416286945f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3C8143C3,  /* 0.01577938161790371f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0xBBC75941,  /* -0.0060836379416286945f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D7A9,  /* 0.006373364944010973f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0xBC876BA1,  /* -0.01653081364929676f */
	    0x3F888BF8,  /* 1.0667715072631836f */
	    0x3BD0D7A9,  /* 0.006373364944010973f */
	aobjEvent32SetValRate(0x280, 19),
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D14,  /* -3.056645603294328e-09f */
	    0x3F99ADA5,  /* 1.2006117105484009f */
	    0xB1520D14,  /* -3.056645603294328e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 19),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	    0x3F888BF7,  /* 1.066771388053894f */
	    0xB14CCCC6,  /* -2.9802307288662178e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3FA633EE,  /* 1.298459768295288f */
	aobjEvent32SetValRate(0x280, 20),
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCDA,  /* -2.9802351697583163e-09f */
	    0x3F99ADA4,  /* 1.2006115913391113f */
	    0xB14CCCDA,  /* -2.9802351697583163e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 20),
	    0x3F738944,  /* 0.9513132572174072f */
	aobjEvent32SetVal0Rate(0x380, 20),
	    0x3F888BF6,  /* 1.0667712688446045f */
	    0x3FA633EE,  /* 1.298459768295288f */
	    0x3F888BF6,  /* 1.0667712688446045f */
	aobjEvent32Wait(18),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYosterFile2_Layer0Anim_AnimJoint_0x3334),
	aobjEvent32End(),
};

/* Raw data from file offset 0x3780 to 0x4E78 (5880 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
extern AObjEvent32 *dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x820[1];
extern AObjEvent32 *dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x824[1];
AObjEvent32 **dStageYosterFile2_Layer0MatAnim_MatAnimJoint[18] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x820,
	NULL,
	dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x824,
};

u32 dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data[260] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x34210000,  /* 1.4994293451309204e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB37B0000,  /* -5.844049155712128e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x34210000,  /* 1.4994293451309204e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x34210000,  /* 1.4994293451309204e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB37B0000,  /* -5.844049155712128e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33C00000,  /* 8.940696716308594e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33C00000,  /* 8.940696716308594e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3FE0000,  /* -1.1827796697616577e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3FE0000,  /* -1.1827796697616577e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB4400000,  /* -1.7881393432617188e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB4400000,  /* -1.7881393432617188e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33C00000,  /* 8.940696716308594e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3FE0000,  /* -1.1827796697616577e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33C00000,  /* 8.940696716308594e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB4514000,  /* -1.9487924873828888e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33BB0000,  /* 8.707866072654724e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x343B0000,  /* 1.7415732145309448e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x343B0000,  /* 1.7415732145309448e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB4514000,  /* -1.9487924873828888e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB4514000,  /* -1.9487924873828888e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33BB0000,  /* 8.707866072654724e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33BB0000,  /* 8.707866072654724e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3E80000,  /* -1.0803341865539551e-07f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data,
};

u32 dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x410[260] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33C00000,  /* 8.940696716308594e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB37B0000,  /* -5.844049155712128e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x34210000,  /* 1.4994293451309204e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x34210000,  /* 1.4994293451309204e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB37B0000,  /* -5.844049155712128e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3FE0000,  /* -1.1827796697616577e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xAF800000,  /* -2.3283064365386963e-10f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3FE0000,  /* -1.1827796697616577e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3FE0000,  /* -1.1827796697616577e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3FE0000,  /* -1.1827796697616577e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x34210000,  /* 1.4994293451309204e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3FE0000,  /* -1.1827796697616577e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB37B0000,  /* -5.844049155712128e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB37B0000,  /* -5.844049155712128e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB3FE0000,  /* -1.1827796697616577e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xAF800000,  /* -2.3283064365386963e-10f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33DA0000,  /* 1.0151416063308716e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33DA0000,  /* 1.0151416063308716e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33AD0000,  /* 8.055940270423889e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33AD0000,  /* 8.055940270423889e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB498F000,  /* -2.848682925105095e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB498F000,  /* -2.848682925105095e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB1400000,  /* -2.7939677238464355e-09f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB1400000,  /* -2.7939677238464355e-09f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB1400000,  /* -2.7939677238464355e-09f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB1400000,  /* -2.7939677238464355e-09f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB498F000,  /* -2.848682925105095e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB1400000,  /* -2.7939677238464355e-09f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB1400000,  /* -2.7939677238464355e-09f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB498F000,  /* -2.848682925105095e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB1400000,  /* -2.7939677238464355e-09f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB1400000,  /* -2.7939677238464355e-09f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB1400000,  /* -2.7939677238464355e-09f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB498F000,  /* -2.848682925105095e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB498F000,  /* -2.848682925105095e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB498F000,  /* -2.848682925105095e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB4538000,  /* -1.969747245311737e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB4538000,  /* -1.969747245311737e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB4538000,  /* -1.969747245311737e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB4538000,  /* -1.969747245311737e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB4538000,  /* -1.969747245311737e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33B80000,  /* 8.568167686462402e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33B80000,  /* 8.568167686462402e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB4538000,  /* -1.969747245311737e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB4538000,  /* -1.969747245311737e-07f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0xB2B00000,  /* -2.0489096641540527e-08f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x33DA0000,  /* 1.0151416063308716e-07f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x410,
};

AObjEvent32 *dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x820[1] = { (AObjEvent32 *)dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data };

AObjEvent32 *dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x824[1] = { (AObjEvent32 *)dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x410 };

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x828[32] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0x828.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xA28[16] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0xA28.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xB28[32] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0xB28.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xD28[4] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0xD28.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xD68[4] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0xD68.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xDA8[4] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0xDA8.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xDE8[8] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0xDE8.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xE68[8] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0xE68.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xEE8[8] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0xEE8.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xF68[4] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0xF68.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xFA8[4] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0xFA8.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0xFE8[7] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0xFE8.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x1058[8] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0x1058.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x10D8[4] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0x10D8.vtx.inc.c>
};

Vtx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x1118[12] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0x1118.vtx.inc.c>
};

Gfx dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x11D8[155] = {
	#include <StageYosterFile2/Layer0MatAnim_MatAnimJoint_data_sub_0x11D8.dl.inc.c>
};

/* DObjDesc: Layer1DObj @ 0x4E78 (6 entries) */
DObjDesc dStageYosterFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0001140000022132881f, 0.0f, 0.0002859999949578196f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 7335.0f, -60.00140380859375f, 0.0f }, { 9.999999974752427e-07f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 3855.0f, 1919.9989013671875f, 0.0f }, { 9.999999974752427e-07f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -3960.01318359375f, 779.99951171875f, 0.0f }, { 9.999999974752427e-07f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_Layer0MatAnim_MatAnimJoint_data_sub_0x11D8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x4F80 to 0x5188 (520 bytes) */
/* gap sub-block @ 0x4F80 (was gap+0x0, 128 bytes) */
/* MPVertexData[21] @ 0x4F80 — vertex positions (MPGeometryData.vertex_data); 2 bytes pad */
MPVertexData dStageYosterFile2_gap_0x4F80[21] = {
	{ {    735,   -240 }, 0x4000 },
	{ {   -735,   -240 }, 0x0000 },
	{ {    704,   -240 }, 0x4000 },
	{ {   -705,   -240 }, 0x0000 },
	{ {    720,   -239 }, 0x4000 },
	{ {   -719,   -239 }, 0x0000 },
	{ {  -2125,   -708 }, 0x0000 },
	{ {      0,   -975 }, 0x0000 },
	{ {   2126,   -711 }, 0x0000 },
	{ {   2023,    -51 }, 0x8000 },
	{ {    156,   -384 }, 0x8000 },
	{ {   -156,   -384 }, 0x8000 },
	{ {  -2029,    -40 }, 0x0000 },
	{ {   -821,   2181 }, 0x4000 },
	{ {   -556,   2181 }, 0x4000 },
	{ {    474,   2235 }, 0x4000 },
	{ {    803,   2235 }, 0x0000 },
	{ {   -528,    719 }, 0x4000 },
	{ {  -1545,    943 }, 0x0000 },
	{ {   1655,   1490 }, 0x4000 },
	{ {    454,   1205 }, 0x0000 },
};

/* MPVertexArray (26 IDs) @ 0x5000 — vertex_id table (MPGeometryData.vertex_id) */
u16 dStageYosterFile2_gap_0x4F80_sub_0x80[26] = {
	  0,   1,   2,   3,   4,   5,  13,  14,  15,  16,  19,  20,  17,  18,   9,  10,
	 11,  12,   6,   7,   8,   8,   9,  12,   6,   0,
};

/* MPVertexLinks[10] @ 0x5034 — line vertex pairs (MPGeometryData.vertex_links) */
MPVertexLinks dStageYosterFile2_gap_0x4F80_sub_0xB4[10] = {
	{   0, 2 }, {   2, 2 }, {   4, 2 }, {   6, 4 }, {  10, 2 }, {  12, 2 },
	{  14, 4 }, {  18, 3 }, {  21, 2 }, {  23, 2 },
};

/* MPLineInfo[4] @ 0x505C — yakumono line groups (MPGeometryData.line_info) */
MPLineInfo dStageYosterFile2_gap_0x4F80_sub_0xDC[4] = {
	{ 1, { {  0,   1}, {  1,   0}, {  1,   0}, {  1,   0} } },
	{ 2, { {  1,   1}, {  2,   0}, {  2,   0}, {  2,   0} } },
	{ 3, { {  2,   1}, {  3,   0}, {  3,   0}, {  3,   0} } },
	{ 4, { {  3,   4}, {  7,   1}, {  8,   1}, {  9,   1} } },
};

/* MPMapObjData[38] @ 0x50A4 — map objects (MPGeometryData.mapobjs) */
MPMapObjData dStageYosterFile2_gap_0x4F80_sub_0x124[38] = {
	{  37, { -1110,  1050 } },
	{  38, {  1259,  1589 } },
	{  39, {     0,  2400 } },
	{  33, {     0,  -180 } },
	{  24, {   749,  -120 } },
	{  25, {  1529,    59 } },
	{  26, {  -630,  -155 } },
	{  27, { -1200,   -41 } },
	{  28, {  -840,   942 } },
	{  29, {   990,  1485 } },
	{  30, {  -119,  2391 } },
	{  31, {   -60,  -212 } },
	{   4, {  -421,  3759 } },
	{   4, {  3168,  5443 } },
	{   4, {  4172,  2775 } },
	{   4, {  7407,  5459 } },
	{   4, { -3859,  5046 } },
	{   4, {    52,   946 } },
	{   4, {  1897,  1598 } },
	{   4, {   185,  5911 } },
	{   4, {  1222,  5044 } },
	{   4, { -1431,  2105 } },
	{   4, {  -726,  1616 } },
	{   4, {  1250,  3619 } },
	{   4, {    34,  1773 } },
	{   4, { -1875,  1202 } },
	{   4, {  1694,  1004 } },
	{  21, {    29,  -258 } },
	{   0, {   629,   -96 } },
	{   1, {    90,  2409 } },
	{   2, {   756,  1513 } },
	{   3, {  -990,  1032 } },
	{  32, {     0,  2970 } },
	{  43, {  1583,  3641 } },
	{  43, {  2736,  3629 } },
	{  43, { -1245,  3644 } },
	{  43, { -2532,  3539 } },
	{  43, {     0,  3720 } },
};

/* MPGeometryData @ 0x5188 (28 bytes) */
MPGeometryData dStageYosterFile2_MPGeometryData_0x5188 = {
	4,
	(MPVertexPosContainer*)dStageYosterFile2_gap_0x4F80,
	(MPVertexArray*)dStageYosterFile2_gap_0x4F80_sub_0x80,
	dStageYosterFile2_gap_0x4F80_sub_0xB4,
	dStageYosterFile2_gap_0x4F80_sub_0xDC,
	38,
	(MPMapObjContainer*)dStageYosterFile2_gap_0x4F80_sub_0x124,
};

/* Trailing data after MPGeometryData @ 0x51A4 (676 bytes) — embedded
 * DObjDLLink/DL/texture mix referenced by other layer DObjs. */
PAD(12);
Vtx dStageYosterFile2_MPGeometryData_0x5188_trailing_Vtx_0xC[12] = {
	#include <StageYosterFile2/MPGeometryData_0x5188_trailing_Vtx_0xC.vtx.inc.c>
};

Vtx dStageYosterFile2_MPGeometryData_0x5188_trailing_Vtx_0xCC[8] = {
	#include <StageYosterFile2/MPGeometryData_0x5188_trailing_Vtx_0xCC.vtx.inc.c>
};

Gfx dStageYosterFile2_MPGeometryData_0x5188_trailing_DL_0x14C[43] = {
	#include <StageYosterFile2/MPGeometryData_0x5188_trailing_DL_0x14C.dl.inc.c>
};

/* DObjDesc: Layer2DObj @ 0x5448 (3 entries) */
DObjDesc dStageYosterFile2_Layer2DObj[] = {
	{ 0, (void*)0x00000000, { 0.0001140000022132881f, 0.0f, 0.0001140000022132881f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_MPGeometryData_0x5188_trailing_DL_0x14C, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x54CC to 0x5C38 (1900 bytes) */
PAD(4);

/* gap sub-block @ 0x54D0 (was gap+0x4, 64 bytes) */
Vtx dStageYosterFile2_gap_0x54CC_sub_0x4[4] = {
	#include <StageYosterFile2/gap_0x54CC_sub_0x4.vtx.inc.c>
};

/* gap sub-block @ 0x5510 (was gap+0x44, 64 bytes) */
Vtx dStageYosterFile2_gap_0x54CC_sub_0x44[4] = {
	#include <StageYosterFile2/gap_0x54CC_sub_0x44.vtx.inc.c>
};

/* gap sub-block @ 0x5550 (was gap+0x84, 64 bytes) */
Vtx dStageYosterFile2_gap_0x54CC_sub_0x84[4] = {
	#include <StageYosterFile2/gap_0x54CC_sub_0x84.vtx.inc.c>
};

/* gap sub-block @ 0x5590 (was gap+0xC4, 128 bytes) */
Vtx dStageYosterFile2_gap_0x54CC_sub_0xC4[8] = {
	#include <StageYosterFile2/gap_0x54CC_sub_0xC4.vtx.inc.c>
};

/* gap sub-block @ 0x5610 (was gap+0x144, 64 bytes) */
Vtx dStageYosterFile2_gap_0x54CC_sub_0x144[4] = {
	#include <StageYosterFile2/gap_0x54CC_sub_0x144.vtx.inc.c>
};

/* gap sub-block @ 0x5650 (was gap+0x184, 112 bytes) */
Vtx dStageYosterFile2_gap_0x54CC_sub_0x184[7] = {
	#include <StageYosterFile2/gap_0x54CC_sub_0x184.vtx.inc.c>
};

/* gap sub-block @ 0x56C0 (was gap+0x1F4, 64 bytes) */
Vtx dStageYosterFile2_gap_0x54CC_sub_0x1F4[4] = {
	#include <StageYosterFile2/gap_0x54CC_sub_0x1F4.vtx.inc.c>
};

/* gap sub-block @ 0x5700 (was gap+0x234, 64 bytes) */
Vtx dStageYosterFile2_gap_0x54CC_sub_0x234[4] = {
	#include <StageYosterFile2/gap_0x54CC_sub_0x234.vtx.inc.c>
};

/* gap sub-block @ 0x5740 (was gap+0x274, 128 bytes) */
Vtx dStageYosterFile2_gap_0x54CC_sub_0x274[8] = {
	#include <StageYosterFile2/gap_0x54CC_sub_0x274.vtx.inc.c>
};

/* gap sub-block @ 0x57C0 (was gap+0x2F4, 128 bytes) */
Vtx dStageYosterFile2_gap_0x54CC_sub_0x2F4[8] = {
	#include <StageYosterFile2/gap_0x54CC_sub_0x2F4.vtx.inc.c>
};

/* gap sub-block @ 0x5840 (was gap+0x374, 128 bytes) */
Vtx dStageYosterFile2_gap_0x54CC_sub_0x374[8] = {
	#include <StageYosterFile2/gap_0x54CC_sub_0x374.vtx.inc.c>
};

/* gap sub-block @ 0x58C0 (was gap+0x3F4, 56 bytes) */
Gfx dStageYosterFile2_DL_0x58C0[7] = {
	#include <StageYosterFile2/DL_0x58C0.dl.inc.c>
};

/* gap sub-block @ 0x58F8 (was gap+0x42C, 272 bytes) */
Gfx dStageYosterFile2_DL_0x58F8[34] = {
	#include <StageYosterFile2/DL_0x58F8.dl.inc.c>
};

/* gap sub-block @ 0x5A08 (was gap+0x53C, 560 bytes) */
Gfx dStageYosterFile2_DL_0x5A08[70] = {
	#include <StageYosterFile2/DL_0x5A08.dl.inc.c>
};

/* DObjDesc: Layer3DObj @ 0x5C38 (4 entries) */
DObjDesc dStageYosterFile2_Layer3DObj[] = {
	{ 0, (void*)0x00000000, { 0.0001140000022132881f, 0.0f, 0.0002859999949578196f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_DL_0x58C0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYosterFile2_DL_0x5A08, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x5CE8 to 0xB930 (23624 bytes) */
/* gap sub-block @ 0x5CE8 (was gap+0x0, 216 bytes) */
PAD(16);
u16 dStageYosterFile2_gap_0x5CE8_palette_0x10[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0x10.palette.inc.c>
};
PAD(8);
u16 dStageYosterFile2_gap_0x5CE8_palette_0x38[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0x38.palette.inc.c>
};
PAD(8);
u16 dStageYosterFile2_gap_0x5CE8_palette_0x60[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0x60.palette.inc.c>
};
PAD(8);
u16 dStageYosterFile2_gap_0x5CE8_palette_0x88[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0x88.palette.inc.c>
};
PAD(8);
u16 dStageYosterFile2_gap_0x5CE8_palette_0xB0[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0xB0.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x5DC0 (was gap+0xD8, 40 bytes) */
u16 dStageYosterFile2_gap_0x5CE8_sub_0xD8[16] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0xD8.palette.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x64 */
u8 dStageYosterFile2_Tex_0x5DE8[1032] = {
	#include <StageYosterFile2/Tex_0x5DE8.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x64 */
u8 dStageYosterFile2_Tex_0x61F0[1032] = {
	#include <StageYosterFile2/Tex_0x61F0.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x64 */
u8 dStageYosterFile2_Tex_0x65F8[1032] = {
	#include <StageYosterFile2/Tex_0x65F8.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x64 */
u8 dStageYosterFile2_Tex_0x6A00[1032] = {
	#include <StageYosterFile2/Tex_0x6A00.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x64 */
u8 dStageYosterFile2_Tex_0x6E08[1032] = {
	#include <StageYosterFile2/Tex_0x6E08.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x64 */
u8 dStageYosterFile2_Tex_0x7210[0x400] = {
	#include <StageYosterFile2/Tex_0x7210.tex.inc.c>
};

PAD(4);

MObjSub ** dStageYosterFile2_data_0x7614[1] = { dStageYosterFile2_gap_0x5CE8_sub_0x19C0 };


/* u32 pointer array @ 0x7618 (6 entries) */
void *dStageYosterFile2_gap_0x5CE8_sub_0x1930[6] = {
	(void *)&dStageYosterFile2_Tex_0x7210,
	(void *)&dStageYosterFile2_Tex_0x6E08,
	(void *)&dStageYosterFile2_Tex_0x6A00,
	(void *)&dStageYosterFile2_Tex_0x65F8,
	(void *)&dStageYosterFile2_Tex_0x61F0,
	(void *)&dStageYosterFile2_Tex_0x5DE8,
};

/* MObjSub @ 0x7630 */
MObjSub dStageYosterFile2_gap_0x5CE8_sub_0x1948[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dStageYosterFile2_gap_0x5CE8_sub_0x1930,
		0x0020, 0x0000, 0x0020, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0040, 0x0020, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x76A8 (was gap+0x19C0, 8 bytes) */
MObjSub *dStageYosterFile2_gap_0x5CE8_sub_0x19C0[2] = {
	(MObjSub *)dStageYosterFile2_gap_0x5CE8_sub_0x1948,
	NULL,
};

/* gap sub-block @ 0x76B0 (was gap+0x19C8, 64 bytes) */
Vtx dStageYosterFile2_gap_0x5CE8_sub_0x19C8[4] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x19C8.vtx.inc.c>
};

/* Gfx DL: gap_0x5CE8_sub_0x1A08 @ 0x76F0 (30 cmds) */
extern AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x301C[5];
extern u32 dStageYosterFile2_gap_0x5CE8_sub_0x2B20[45];
extern u32 dStageYosterFile2_gap_0x5CE8_sub_0x2BD4[28];
extern u32 dStageYosterFile2_gap_0x5CE8_sub_0x3A90[27];
extern u32 dStageYosterFile2_gap_0x5CE8_sub_0x4950[25];
extern u32 dStageYosterFile2_gap_0x5CE8_sub_0x5800[25];
extern AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x3EE0[4];
extern AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x4D90[4];
extern AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x5C40[2];
Gfx dStageYosterFile2_gap_0x5CE8_sub_0x1A08[30] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x1A08.dl.inc.c>
};

/* @ 0x77E0 — DObjDesc[3] + AObjEvent32* joint table + AObjEvent32 script */
extern u32 dStageYosterFile2_gap_0x5CE8_sub_0x1B90[51];
extern AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x1E60[4];

DObjDesc dStageYosterFile2_gap_0x5CE8_sub_0x1AF8[3] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x4001, (void*)dStageYosterFile2_gap_0x5CE8_sub_0x1A08, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x1B7C[5] = {
	NULL, NULL, NULL,
	(AObjEvent32 *)dStageYosterFile2_gap_0x5CE8_sub_0x1B90,
	NULL,
};

u32 dStageYosterFile2_gap_0x5CE8_sub_0x1B90[51] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 0),
	    0x00000000,  /* 0.0f */
	    0xC0BA9D07,  /* -5.831668376922607f */
	aobjEvent32SetValAfterBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 240),
	    0xC4BB8000,  /* -1500.0f */
	    0xC0D5B5EB,  /* -6.678456783294678f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 12),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};
PAD(16);
AObjEvent32 **dStageYosterFile2_gap_0x5CE8_sub_0x1C6C[1] = {
	dStageYosterFile2_gap_0x5CE8_sub_0x1E60,
};

/* gap sub-block @ 0x7958 (was gap+0x1C70, 496 bytes) */
u32 dStageYosterFile2_gap_0x5CE8_sub_0x1C70[124] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageYosterFile2_gap_0x5CE8_sub_0x1C70,
};

/* @ 0x7B48 — AObjEvent32* table + 2 palettes */
AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x1E60[4] = {
	(AObjEvent32 *)dStageYosterFile2_gap_0x5CE8_sub_0x1C70,
	NULL, NULL, NULL,
};

u16 dStageYosterFile2_gap_0x5CE8_palette_0x1E70[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0x1E70.palette.inc.c>
};
PAD(8);
u16 dStageYosterFile2_gap_0x5CE8_palette_0x1E98[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0x1E98.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x7BA8 (was gap+0x1EC0, 40 bytes) */
u16 dStageYosterFile2_gap_0x5CE8_sub_0x1EC0[16] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x1EC0.palette.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x40 */
u8 dStageYosterFile2_Tex_0x7BD0[648] = {
	#include <StageYosterFile2/Tex_0x7BD0.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x40 */
u8 dStageYosterFile2_Tex_0x7E58[648] = {
	#include <StageYosterFile2/Tex_0x7E58.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x40 */
u8 dStageYosterFile2_Tex_0x80E0[0x280] = {
	#include <StageYosterFile2/Tex_0x80E0.tex.inc.c>
};

PAD(4);

MObjSub ** dStageYosterFile2_data_0x8364[1] = { dStageYosterFile2_gap_0x5CE8_sub_0x2708 };


/* u32 pointer array @ 0x8368 (4 entries) */
void *dStageYosterFile2_gap_0x5CE8_sub_0x2680[4] = {
	(void *)&dStageYosterFile2_Tex_0x80E0,
	(void *)&dStageYosterFile2_Tex_0x7E58,
	(void *)&dStageYosterFile2_Tex_0x7BD0,
	NULL,
};

/* MObjSub @ 0x8378 */
MObjSub dStageYosterFile2_gap_0x5CE8_sub_0x2690[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dStageYosterFile2_gap_0x5CE8_sub_0x2680,
		0x0020, 0x0000, 0x0020, 0x0028,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0028, 0x0020, 0x0028,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x83F0 (was gap+0x2708, 8 bytes) */
MObjSub *dStageYosterFile2_gap_0x5CE8_sub_0x2708[2] = {
	(MObjSub *)dStageYosterFile2_gap_0x5CE8_sub_0x2690,
	NULL,
};

/* gap sub-block @ 0x83F8 (was gap+0x2710, 64 bytes) */
Vtx dStageYosterFile2_gap_0x5CE8_sub_0x2710[4] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x2710.vtx.inc.c>
};

/* Gfx DL: gap_0x5CE8_sub_0x2750 @ 0x8438 (30 cmds) */
Gfx dStageYosterFile2_gap_0x5CE8_sub_0x2750[30] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x2750.dl.inc.c>
};

/* @ 0x8528 — DObjDesc[3] + MObjSub** pointer table */
extern MObjSub *dStageYosterFile2_gap_0x5CE8_sub_0x2958[2];

DObjDesc dStageYosterFile2_gap_0x5CE8_sub_0x2840[3] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x4001, (void*)dStageYosterFile2_gap_0x5CE8_sub_0x2750, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

MObjSub **dStageYosterFile2_gap_0x5CE8_sub_0x28C4[3] = {
	NULL, NULL,
	dStageYosterFile2_gap_0x5CE8_sub_0x2958,
};

/* u32 pointer array @ 0x85B8 (4 entries) */
void *dStageYosterFile2_gap_0x5CE8_sub_0x28D0[4] = {
	(void *)&dStageYosterFile2_Tex_0x80E0,
	(void *)&dStageYosterFile2_Tex_0x7E58,
	(void *)&dStageYosterFile2_Tex_0x7BD0,
	NULL,
};

/* MObjSub @ 0x85C8 */
MObjSub dStageYosterFile2_gap_0x5CE8_sub_0x28E0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dStageYosterFile2_gap_0x5CE8_sub_0x28D0,
		0x0020, 0x0000, 0x0020, 0x0028,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0028, 0x0020, 0x0028,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x8640 (was gap+0x2958, 8 bytes) */
MObjSub *dStageYosterFile2_gap_0x5CE8_sub_0x2958[2] = {
	(MObjSub *)dStageYosterFile2_gap_0x5CE8_sub_0x28E0,
	NULL,
};

/* gap sub-block @ 0x8648 (was gap+0x2960, 64 bytes) */
Vtx dStageYosterFile2_gap_0x5CE8_sub_0x2960[4] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x2960.vtx.inc.c>
};

/* Gfx DL: gap_0x5CE8_sub_0x29A0 @ 0x8688 (30 cmds) */
Gfx dStageYosterFile2_gap_0x5CE8_sub_0x29A0[30] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x29A0.dl.inc.c>
};

/* @ sub_0x29A0_post — DObjDesc[3] + AObjEvent32* table */
DObjDesc dStageYosterFile2_gap_0x5CE8_sub_0x2A90[3] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x4001, (void*)dStageYosterFile2_gap_0x5CE8_sub_0x29A0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x2B14[3] = {
	NULL,
	(AObjEvent32 *)dStageYosterFile2_gap_0x5CE8_sub_0x2B20,
	(AObjEvent32 *)dStageYosterFile2_gap_0x5CE8_sub_0x2BD4,
};

/* gap sub-block @ 0x8808 (was gap+0x2B20, 180 bytes) */
u32 dStageYosterFile2_gap_0x5CE8_sub_0x2B20[45] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 0),
	    0x00000000,  /* 0.0f */
	    0xC051E7C6,  /* -3.279771327972412f */
	aobjEvent32SetValAfterBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 62),
	    0xC3960000,  /* -300.0f */
	    0xC09CB0F2,  /* -4.896599769592285f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x010, 6),
	    0xC3B40000,  /* -360.0f */
	    0xC1AE8382,  /* -21.814212799072266f */
	aobjEvent32SetValRate(0x010, 76),
	    0xC4936000,  /* -1179.0f */
	    0xC0E3743D,  /* -7.10793924331665f */
	aobjEvent32Wait(22),
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32Wait(24),
	aobjEvent32SetValRate(0x010, 17),
	    0xC4A14000,  /* -1290.0f */
	    0xC0408507,  /* -3.0081193447113037f */
	aobjEvent32Wait(6),
	aobjEvent32SetVal0Rate(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(11),
	aobjEvent32SetValRate(0x010, 79),
	    0xC4BB8000,  /* -1500.0f */
	    0xC0391D02,  /* -2.892395496368408f */
	aobjEvent32Wait(19),
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

/* @ sub_0x2BD4 — AObjEvent32 script + PAD + loopback ptr */
u32 dStageYosterFile2_gap_0x5CE8_sub_0x2BD4[28] = {
	aobjEvent32SetVal0Rate(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x004, 32),
	    0xBDB2B8C2,  /* -0.0872664600610733f */
	aobjEvent32SetValRateBlock(0x004, 30),
	    0x00000000,  /* 0.0f */
	    0x3CDD4646,  /* 0.027011048048734665f */
	aobjEvent32SetValRateBlock(0x004, 12),
	    0x3F860A92,  /* 1.0471975803375244f */
	    0x3A40015A,  /* 0.0007324420148506761f */
	aobjEvent32SetValRateBlock(0x004, 92),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	    0xBD173216,  /* -0.03691300004720688f */
	aobjEvent32SetValRateBlock(0x004, 23),
	    0x3E8525CE,  /* 0.2600540518760681f */
	    0x37E0B8E5,  /* 2.6788979084813036e-05f */
	aobjEvent32SetValRateBlock(0x004, 21),
	    0xBE30EF3C,  /* -0.172787606716156f */
	    0xBAA095D0,  /* -0.0012251678854227066f */
	aobjEvent32SetValRateBlock(0x004, 13),
	    0x3DC104FB,  /* 0.09424778074026108f */
	    0xBC2F22F7,  /* -0.010689488612115383f */
	aobjEvent32SetVal0RateBlock(0x004, 17),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};
PAD(8);
AObjEvent32 **dStageYosterFile2_gap_0x5CE8_sub_0x2C4C[1] = { dStageYosterFile2_gap_0x5CE8_sub_0x301C};

/* gap sub-block @ 0x8938 (was gap+0x2C50, 972 bytes) */
u32 dStageYosterFile2_gap_0x5CE8_sub_0x2C50[243] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

/* @ sub_0x301C — AObjEvent32* table + 2 palettes */
AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x301C[5] = {
	(AObjEvent32 *)dStageYosterFile2_gap_0x5CE8_sub_0x2C50, NULL, NULL, NULL, NULL,
};
u16 dStageYosterFile2_gap_0x5CE8_palette_0x3030[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0x3030.palette.inc.c>
};
PAD(8);
u16 dStageYosterFile2_gap_0x5CE8_palette_0x3058[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0x3058.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x8D68 (was gap+0x3080, 40 bytes) */
u16 dStageYosterFile2_gap_0x5CE8_sub_0x3080[16] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x3080.palette.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x40 */
u8 dStageYosterFile2_Tex_0x8D90[648] = {
	#include <StageYosterFile2/Tex_0x8D90.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x40 */
u8 dStageYosterFile2_Tex_0x9018[648] = {
	#include <StageYosterFile2/Tex_0x9018.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x40 */
u8 dStageYosterFile2_Tex_0x92A0[0x280] = {
	#include <StageYosterFile2/Tex_0x92A0.tex.inc.c>
};

PAD(4);

MObjSub ** dStageYosterFile2_data_0x9524[1] = { dStageYosterFile2_gap_0x5CE8_sub_0x38C8 };


/* u32 pointer array @ 0x9528 (4 entries) */
void *dStageYosterFile2_gap_0x5CE8_sub_0x3840[4] = {
	(void *)&dStageYosterFile2_Tex_0x92A0,
	(void *)&dStageYosterFile2_Tex_0x9018,
	(void *)&dStageYosterFile2_Tex_0x8D90,
	NULL,
};

/* MObjSub @ 0x9538 */
MObjSub dStageYosterFile2_gap_0x5CE8_sub_0x3850[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dStageYosterFile2_gap_0x5CE8_sub_0x3840,
		0x0020, 0x0000, 0x0020, 0x0028,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0028, 0x0020, 0x0028,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x95B0 (was gap+0x38C8, 8 bytes) */
MObjSub *dStageYosterFile2_gap_0x5CE8_sub_0x38C8[2] = {
	(MObjSub *)dStageYosterFile2_gap_0x5CE8_sub_0x3850,
	NULL,
};

/* gap sub-block @ 0x95B8 (was gap+0x38D0, 64 bytes) */
Vtx dStageYosterFile2_gap_0x5CE8_sub_0x38D0[4] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x38D0.vtx.inc.c>
};

/* Gfx DL: gap_0x5CE8_sub_0x3910 @ 0x95F8 (30 cmds) */
Gfx dStageYosterFile2_gap_0x5CE8_sub_0x3910[30] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x3910.dl.inc.c>
};

/* @ sub_0x3910_post — DObjDesc[3] + AObjEvent32* table */
DObjDesc dStageYosterFile2_gap_0x5CE8_sub_0x3A00[3] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x4001, (void*)dStageYosterFile2_gap_0x5CE8_sub_0x3910, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x3A84[3] = {
	NULL,
	(AObjEvent32 *)dStageYosterFile2_gap_0x5CE8_sub_0x3A90,
	NULL,
};

/* @ sub_0x3A90 — AObjEvent32 script + PAD + loopback ptr */
u32 dStageYosterFile2_gap_0x5CE8_sub_0x3A90[27] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 0),
	    0x00000000,  /* 0.0f */
	    0xC0D32AF1,  /* -6.598991870880127f */
	aobjEvent32SetValAfterBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 240),
	    0xC4BB8000,  /* -1500.0f */
	    0xC0C8EDD6,  /* -6.2790327072143555f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};
PAD(16);
AObjEvent32 **dStageYosterFile2_gap_0x5CE8_sub_0x3B0C[1] = { dStageYosterFile2_gap_0x5CE8_sub_0x3EE0};

/* gap sub-block @ 0x97F8 (was gap+0x3B10, 976 bytes) */
u32 dStageYosterFile2_gap_0x5CE8_sub_0x3B10[244] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageYosterFile2_gap_0x5CE8_sub_0x3B10,
};

/* @ sub_0x3EE0 — AObjEvent32* table + 2 palettes */
AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x3EE0[4] = {
	(AObjEvent32 *)dStageYosterFile2_gap_0x5CE8_sub_0x3B10, NULL, NULL, NULL,
};
u16 dStageYosterFile2_gap_0x5CE8_palette_0x3EF0[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0x3EF0.palette.inc.c>
};
PAD(8);
u16 dStageYosterFile2_gap_0x5CE8_palette_0x3F18[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0x3F18.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x9C28 (was gap+0x3F40, 40 bytes) */
u16 dStageYosterFile2_gap_0x5CE8_sub_0x3F40[16] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x3F40.palette.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x40 */
u8 dStageYosterFile2_Tex_0x9C50[648] = {
	#include <StageYosterFile2/Tex_0x9C50.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x40 */
u8 dStageYosterFile2_Tex_0x9ED8[648] = {
	#include <StageYosterFile2/Tex_0x9ED8.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x40 */
u8 dStageYosterFile2_Tex_0xA160[0x280] = {
	#include <StageYosterFile2/Tex_0xA160.tex.inc.c>
};

PAD(4);

MObjSub ** dStageYosterFile2_data_0xA3E4[1] = { dStageYosterFile2_gap_0x5CE8_sub_0x4788 };


/* u32 pointer array @ 0xA3E8 (4 entries) */
void *dStageYosterFile2_gap_0x5CE8_sub_0x4700[4] = {
	(void *)&dStageYosterFile2_Tex_0xA160,
	(void *)&dStageYosterFile2_Tex_0x9ED8,
	(void *)&dStageYosterFile2_Tex_0x9C50,
	NULL,
};

/* MObjSub @ 0xA3F8 */
MObjSub dStageYosterFile2_gap_0x5CE8_sub_0x4710[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dStageYosterFile2_gap_0x5CE8_sub_0x4700,
		0x0020, 0x0000, 0x0020, 0x0028,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0028, 0x0020, 0x0028,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0xA470 (was gap+0x4788, 8 bytes) */
MObjSub *dStageYosterFile2_gap_0x5CE8_sub_0x4788[2] = {
	(MObjSub *)dStageYosterFile2_gap_0x5CE8_sub_0x4710,
	NULL,
};

/* gap sub-block @ 0xA478 (was gap+0x4790, 64 bytes) */
Vtx dStageYosterFile2_gap_0x5CE8_sub_0x4790[4] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x4790.vtx.inc.c>
};

/* Gfx DL: gap_0x5CE8_sub_0x47D0 @ 0xA4B8 (30 cmds) */
Gfx dStageYosterFile2_gap_0x5CE8_sub_0x47D0[30] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x47D0.dl.inc.c>
};

/* @ sub_0x47D0_post — DObjDesc[3] + AObjEvent32* table */
DObjDesc dStageYosterFile2_gap_0x5CE8_sub_0x48C0[3] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x4001, (void*)dStageYosterFile2_gap_0x5CE8_sub_0x47D0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x4944[3] = {
	NULL,
	(AObjEvent32 *)dStageYosterFile2_gap_0x5CE8_sub_0x4950,
	NULL,
};

/* @ sub_0x4950 — AObjEvent32 script + PAD + loopback ptr */
u32 dStageYosterFile2_gap_0x5CE8_sub_0x4950[25] = {
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x010, 240),
	    0xC5F3C000,  /* -7800.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};
PAD(8);
AObjEvent32 **dStageYosterFile2_gap_0x5CE8_sub_0x49BC[1] = { dStageYosterFile2_gap_0x5CE8_sub_0x4D90};

/* gap sub-block @ 0xA6A8 (was gap+0x49C0, 976 bytes) */
u32 dStageYosterFile2_gap_0x5CE8_sub_0x49C0[244] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageYosterFile2_gap_0x5CE8_sub_0x49C0,
};

/* @ sub_0x4D90 — AObjEvent32* table + 2 palettes */
AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x4D90[4] = {
	(AObjEvent32 *)dStageYosterFile2_gap_0x5CE8_sub_0x49C0, NULL, NULL, NULL,
};
u16 dStageYosterFile2_gap_0x5CE8_palette_0x4DA0[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0x4DA0.palette.inc.c>
};
PAD(8);
u16 dStageYosterFile2_gap_0x5CE8_palette_0x4DC8[16] = {
	#include <StageYosterFile2/gap_0x5CE8_palette_0x4DC8.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0xAAD8 (was gap+0x4DF0, 40 bytes) */
u16 dStageYosterFile2_gap_0x5CE8_sub_0x4DF0[16] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x4DF0.palette.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=32x40 */
u8 dStageYosterFile2_Tex_0xAB00[648] = {
	#include <StageYosterFile2/Tex_0xAB00.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x40 */
u8 dStageYosterFile2_Tex_0xAD88[648] = {
	#include <StageYosterFile2/Tex_0xAD88.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x40 */
u8 dStageYosterFile2_Tex_0xB010[0x280] = {
	#include <StageYosterFile2/Tex_0xB010.tex.inc.c>
};

PAD(4);

MObjSub ** dStageYosterFile2_data_0xB294[1] = { dStageYosterFile2_gap_0x5CE8_sub_0x5638 };


/* u32 pointer array @ 0xB298 (4 entries) */
void *dStageYosterFile2_gap_0x5CE8_sub_0x55B0[4] = {
	(void *)&dStageYosterFile2_Tex_0xB010,
	(void *)&dStageYosterFile2_Tex_0xAD88,
	(void *)&dStageYosterFile2_Tex_0xAB00,
	NULL,
};

/* MObjSub @ 0xB2A8 */
MObjSub dStageYosterFile2_gap_0x5CE8_sub_0x55C0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dStageYosterFile2_gap_0x5CE8_sub_0x55B0,
		0x0020, 0x0000, 0x0020, 0x0028,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0028, 0x0020, 0x0028,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0xB320 (was gap+0x5638, 8 bytes) */
MObjSub *dStageYosterFile2_gap_0x5CE8_sub_0x5638[2] = {
	(MObjSub *)dStageYosterFile2_gap_0x5CE8_sub_0x55C0,
	NULL,
};

/* gap sub-block @ 0xB328 (was gap+0x5640, 64 bytes) */
Vtx dStageYosterFile2_gap_0x5CE8_sub_0x5640[4] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x5640.vtx.inc.c>
};

/* Gfx DL: gap_0x5CE8_sub_0x5680 @ 0xB368 (30 cmds) */
Gfx dStageYosterFile2_gap_0x5CE8_sub_0x5680[30] = {
	#include <StageYosterFile2/gap_0x5CE8_sub_0x5680.dl.inc.c>
};

/* @ sub_0x5680_post — DObjDesc[3] + AObjEvent32* table */
DObjDesc dStageYosterFile2_gap_0x5CE8_sub_0x5770[3] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x4001, (void*)dStageYosterFile2_gap_0x5CE8_sub_0x5680, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x57F4[3] = {
	NULL,
	(AObjEvent32 *)dStageYosterFile2_gap_0x5CE8_sub_0x5800,
	NULL,
};

/* @ sub_0x5800 — AObjEvent32 script + PAD + loopback ptr */
u32 dStageYosterFile2_gap_0x5CE8_sub_0x5800[25] = {
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x010, 240),
	    0xC5F3C000,  /* -7800.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};
PAD(8);
AObjEvent32 **dStageYosterFile2_gap_0x5CE8_sub_0x586C[1] = { dStageYosterFile2_gap_0x5CE8_sub_0x5C40};

/* gap sub-block @ 0xB558 (was gap+0x5870, 976 bytes) */
u32 dStageYosterFile2_gap_0x5CE8_sub_0x5870[244] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageYosterFile2_gap_0x5CE8_sub_0x5870,
};

/* gap sub-block @ 0xB928 (was gap+0x5C40, 8 bytes) */
AObjEvent32 *dStageYosterFile2_gap_0x5CE8_sub_0x5C40[2] = {
	(AObjEvent32 *)dStageYosterFile2_gap_0x5CE8_sub_0x5870,
	NULL,
};
