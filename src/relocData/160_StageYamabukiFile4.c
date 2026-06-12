/* relocData file 160: StageYamabukiFile4 — Saffron City scrolling-sky
 * overlay: Vtx pool + layered DLs (texture/palette images live in
 * StageYamabukiFile2), DObjDLLink records, and the DObjDesc scroll-node
 * tree GRYamabukiMap.map_nodes points at. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Image symbols referenced by the DL includes (per-version: the
 * extractor symbolizes the chain words against each version's
 * StageYamabukiFile2 layout). */
extern u16 dStageYamabukiFile2_Lut_0x1898_palette[];
extern u8 dStageYamabukiFile2_Tex_0x18C0[];
extern u16 dStageYamabukiFile2_Lut_0x1038_jp_palette[];
extern u8 dStageYamabukiFile2_Tex_0x1060_jp[];

/* Forward decls: scripts follow their pointer tables. */
extern u32 dStageYamabukiFile4_data_0x09C4[];
extern u32 dStageYamabukiFile4_data_0x09DC[];
extern u32 dStageYamabukiFile4_data_0x09F4[];
extern u32 dStageYamabukiFile4_data_0x0A0C[];
extern u32 dStageYamabukiFile4_data_0x0A34[];
extern u32 dStageYamabukiFile4_data_0x0A4C[];
extern u32 dStageYamabukiFile4_data_0x0A64[];
extern u32 dStageYamabukiFile4_data_0x0A7C[];

Vtx dStageYamabukiFile4_Vtx_0x0000[45] = {
	#include <StageYamabukiFile4/Vtx_0x0000.vtx.inc.c>
};

/* @dl-prefix: engine-run prefix; falls through into the next DL. */
Gfx dStageYamabukiFile4_DL_0x02D0[16] = {
	#include <StageYamabukiFile4/DL_0x02D0.dl.inc.c>
};

Gfx dStageYamabukiFile4_DL_0x0350[26] = {
	#include <StageYamabukiFile4/DL_0x0350.dl.inc.c>
};

Gfx dStageYamabukiFile4_DL_0x0420[2] = {
	#include <StageYamabukiFile4/DL_0x0420.dl.inc.c>
};

Gfx dStageYamabukiFile4_DL_0x0430[24] = {
	#include <StageYamabukiFile4/DL_0x0430.dl.inc.c>
};

Gfx dStageYamabukiFile4_DL_0x04F0[2] = {
	#include <StageYamabukiFile4/DL_0x04F0.dl.inc.c>
};

Gfx dStageYamabukiFile4_DL_0x0500[26] = {
	#include <StageYamabukiFile4/DL_0x0500.dl.inc.c>
};

Gfx dStageYamabukiFile4_DL_0x05D0[2] = {
	#include <StageYamabukiFile4/DL_0x05D0.dl.inc.c>
};

/* @dl-prefix: engine-run prefix; falls through into the next DL. */
Gfx dStageYamabukiFile4_DL_0x05E0[16] = {
	#include <StageYamabukiFile4/DL_0x05E0.dl.inc.c>
};

Gfx dStageYamabukiFile4_DL_0x0660[62] = {
	#include <StageYamabukiFile4/DL_0x0660.dl.inc.c>
};

Gfx dStageYamabukiFile4_DL_0x0850[2] = {
	#include <StageYamabukiFile4/DL_0x0850.dl.inc.c>
};

DObjDLLink dStageYamabukiFile4_DLLink_0x0860[2] = {
	{ 0, dStageYamabukiFile4_DL_0x0420 },
	{ 4, NULL },
};

DObjDLLink dStageYamabukiFile4_DLLink_0x0870[2] = {
	{ 0, dStageYamabukiFile4_DL_0x04F0 },
	{ 4, NULL },
};

DObjDLLink dStageYamabukiFile4_DLLink_0x0880[2] = {
	{ 0, dStageYamabukiFile4_DL_0x05D0 },
	{ 4, NULL },
};

DObjDLLink dStageYamabukiFile4_DLLink_0x0890[2] = {
	{ 1, dStageYamabukiFile4_DL_0x0850 },
	{ 4, NULL },
};

/* @ 0x08A0 — scroll-node scene tree (GRYamabukiMap.map_nodes targets it). */
DObjDesc dStageYamabukiFile4_DObjDesc_0x08A0[6] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageYamabukiFile4_DLLink_0x0860, { 1026.3673095703125f, 387.0627136230469f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageYamabukiFile4_DLLink_0x0870, { 1026.3673095703125f, 390.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageYamabukiFile4_DLLink_0x0880, { 1026.3673095703125f, 387.0627136230469f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageYamabukiFile4_DLLink_0x0890, { 810.0f, 429.8401184082031f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* AObjEvent32 *[5] @ 0x09B0 — anim_joints for DObjDesc_0x08A0. */
AObjEvent32 *dStageYamabukiFile4_DObjDesc_0x08A0_AnimJoint[5] = {
	NULL,
	(AObjEvent32 *)dStageYamabukiFile4_data_0x09C4,
	(AObjEvent32 *)dStageYamabukiFile4_data_0x09DC,
	(AObjEvent32 *)dStageYamabukiFile4_data_0x09F4,
	(AObjEvent32 *)dStageYamabukiFile4_data_0x0A0C,
};

u32 dStageYamabukiFile4_data_0x09C4[6] = {
	aobjEvent32SetVal0RateBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x040, 10),
	    0x43A50000,  /* 330.0f */
	    0x3F97F144,  /* 1.1870503425598145f */
	aobjEvent32End(),
};

u32 dStageYamabukiFile4_data_0x09DC[6] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x43C30000,  /* 390.0f */
	aobjEvent32SetValRateBlock(0x020, 10),
	    0xC1F00000,  /* -30.0f */
	    0xBFC1619D,  /* -1.5107914209365845f */
	aobjEvent32End(),
};

u32 dStageYamabukiFile4_data_0x09F4[6] = {
	aobjEvent32SetVal0RateBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x040, 10),
	    0xC3A50000,  /* -330.0f */
	    0xBF97F144,  /* -1.1870503425598145f */
	aobjEvent32End(),
};

u32 dStageYamabukiFile4_data_0x0A0C[3] = {
	aobjEvent32SetFlags(0x001, 4),
	aobjEvent32SetFlags(0x000, 6),
	aobjEvent32End(),
};

PAD(8);

/* AObjEvent32 *[5] @ 0x0A20 — second anim_joints bank. */
AObjEvent32 *dStageYamabukiFile4_DObjDesc_0x08A0_AnimJoint2[5] = {
	NULL,
	(AObjEvent32 *)dStageYamabukiFile4_data_0x0A34,
	(AObjEvent32 *)dStageYamabukiFile4_data_0x0A4C,
	(AObjEvent32 *)dStageYamabukiFile4_data_0x0A64,
	(AObjEvent32 *)dStageYamabukiFile4_data_0x0A7C,
};

u32 dStageYamabukiFile4_data_0x0A34[6] = {
	aobjEvent32SetValRateBlock(0x040, 0),
	    0x43A50000,  /* 330.0f */
	    0xBF97F144,  /* -1.1870503425598145f */
	aobjEvent32SetVal0RateBlock(0x040, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

u32 dStageYamabukiFile4_data_0x0A4C[6] = {
	aobjEvent32SetValRateBlock(0x020, 0),
	    0xC1F00000,  /* -30.0f */
	    0x3FC1619D,  /* 1.5107914209365845f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x43C30000,  /* 390.0f */
	aobjEvent32End(),
};

u32 dStageYamabukiFile4_data_0x0A64[6] = {
	aobjEvent32SetValRateBlock(0x040, 0),
	    0xC3A50000,  /* -330.0f */
	    0x3F97F144,  /* 1.1870503425598145f */
	aobjEvent32SetVal0RateBlock(0x040, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

u32 dStageYamabukiFile4_data_0x0A7C[3] = {
	aobjEvent32Wait(7),
	aobjEvent32SetFlags(0x001, 3),
	aobjEvent32End(),
};

