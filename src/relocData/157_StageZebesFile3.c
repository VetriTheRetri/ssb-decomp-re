/* relocData file 157: StageZebesFile3 — Planet Zebes stage AnimJoint data.
 *
 * Four 16-colour TLUTs + four 32x32 CI4 sprite-frame textures, an MObjSub
 * sprite material with its frame-pointer table, geometry + a display list,
 * a DObjDesc joint tree, and two AObjEvent32 animation scripts threaded
 * through pointer tables. Intern chain recovered via walkRelocChains.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u16 dStageZebesFile3_LUT_0x0080[];
extern Vtx dStageZebesFile3_Vtx_0x0958[];

extern u32 dStageZebesFile3_AnimJoint_0x0B98[];
extern u32 dStageZebesFile3_AnimJoint_0x0BD8[];
extern AObjEvent32 *dStageZebesFile3_mobjlink_0x0DC0[];
extern MObjSub *dStageZebesFile3_mobjsub_0x0950[];

PAD(8);

/* @ 0x0008 — 16-colour TLUT */
u16 dStageZebesFile3_LUT_0x0008[16] = {
	#include <StageZebesFile3/LUT_0x0008.palette.inc.c>
};
PAD(8);

/* @ 0x0030 — 16-colour TLUT */
u16 dStageZebesFile3_LUT_0x0030[16] = {
	#include <StageZebesFile3/LUT_0x0030.palette.inc.c>
};
PAD(8);

/* @ 0x0058 — 16-colour TLUT */
u16 dStageZebesFile3_LUT_0x0058[16] = {
	#include <StageZebesFile3/LUT_0x0058.palette.inc.c>
};
PAD(8);

/* @ 0x0080 — 16-colour TLUT */
u16 dStageZebesFile3_LUT_0x0080[16] = {
	#include <StageZebesFile3/LUT_0x0080.palette.inc.c>
};
PAD(8);

/* @ 0x00A8 — sprite-frame texture */
/* @tex fmt=CI4 dim=32x32 lut=dStageZebesFile3_LUT_0x0008 */
u8 dStageZebesFile3_Tex_0x00A8[512] = {
	#include <StageZebesFile3/Tex_0x00A8.tex.inc.c>
};
PAD(8);

/* @ 0x02B0 — sprite-frame texture */
/* @tex fmt=CI4 dim=32x32 lut=dStageZebesFile3_LUT_0x0030 */
u8 dStageZebesFile3_Tex_0x02B0[512] = {
	#include <StageZebesFile3/Tex_0x02B0.tex.inc.c>
};
PAD(8);

/* @ 0x04B8 — sprite-frame texture */
/* @tex fmt=CI4 dim=32x32 lut=dStageZebesFile3_LUT_0x0058 */
u8 dStageZebesFile3_Tex_0x04B8[512] = {
	#include <StageZebesFile3/Tex_0x04B8.tex.inc.c>
};
PAD(8);

/* @ 0x06C0 — sprite-frame texture */
/* @tex fmt=CI4 dim=32x32 lut=dStageZebesFile3_LUT_0x0080 */
u8 dStageZebesFile3_Tex_0x06C0[512] = {
	#include <StageZebesFile3/Tex_0x06C0.tex.inc.c>
};
PAD(4);

/* @ 0x08C4 — MObjSub-list link */
MObjSub **dStageZebesFile3_mobjlink_0x08C4[1] = {
	(MObjSub **)dStageZebesFile3_mobjsub_0x0950,
};

/* @ 0x08C8 — MObjSub sprite-frame texture table */
u8 *dStageZebesFile3_sprites_0x08C8[4] = {
	dStageZebesFile3_Tex_0x06C0,
	dStageZebesFile3_Tex_0x04B8,
	dStageZebesFile3_Tex_0x02B0,
	dStageZebesFile3_Tex_0x00A8,
};

/* @ 0x08D8 — sprite material object sub */
MObjSub dStageZebesFile3_MObjSub_0x08D8[1] = {
	{
		0x0000, 2, 2,
		(void **)dStageZebesFile3_sprites_0x08C8,
		0x0020, 0x0180, 0x0180, 0x0180,
		0,
		-0.5f, -0.5f, 2.0f, 2.0f, -0.5f, 2.0f,
		(void **)NULL,
		0x006B, 2, 0, 0x0020, 0x0020, 0x0180, 0x0180,
		-0.5f, -0.5f, -0.5f, 0.0f,
		0x00002205,
		{ { 255, 255, 255, 255 } },
		0xF3, 0, { 0, 0 },
		{ { 0, 0, 0, 255 } },
		{ { 0, 0, 0, 8 } },
		{ { 255, 255, 255, 0 } },
		{ { 128, 128, 128, 0 } },
		0, 0, 0, 0,
	}
};

/* @ 0x0950 — MObjSub-list link */
MObjSub *dStageZebesFile3_mobjsub_0x0950[2] = {
	dStageZebesFile3_MObjSub_0x08D8,
	NULL,
};

/* @ 0x0958 — geometry (8 verts) */
Vtx dStageZebesFile3_Vtx_0x0958[8] = {
	#include <StageZebesFile3/Vtx_0x0958.vtx.inc.c>
};

/* @ 0x09D8 — display list */
Gfx dStageZebesFile3_DL_0x09D8[36] = {
	#include <StageZebesFile3/DL_0x09D8.dl.inc.c>
};

/* @ 0x0AF8 — DL link */
DObjDLLink dStageZebesFile3_DLLink_0x0AF8[2] = {
	{ 1, dStageZebesFile3_DL_0x09D8 },
	{ 4, NULL },
};

/* @ 0x0B08 — joint tree (3 entries) */
DObjDesc dStageZebesFile3_DObjDesc_0x0B08[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageZebesFile3_DLLink_0x0AF8, { 0.0f, -282.72515869140625f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x0B8C — AObjEvent32 table */
AObjEvent32 *dStageZebesFile3_mobjlink_0x0B8C[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dStageZebesFile3_AnimJoint_0x0B98,
};

/* @ 0x0B98 — AObjEvent32 animation script */
u32 dStageZebesFile3_AnimJoint_0x0B98[12] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0xC3870000,  /* -270.0f */
	aobjEvent32SetVal0RateBlock(0x020, 59),
	    0x43340000,  /* 180.0f */
	aobjEvent32SetVal0RateBlock(0x020, 120),
	    0xC4340000,  /* -720.0f */
	aobjEvent32SetValRate(0x020, 61),
	    0xC3870000,  /* -270.0f */
	    0x3DDA9542,  /* 0.10672999918460846f */
	aobjEvent32Wait(55),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageZebesFile3_AnimJoint_0x0B98,
};

/* @ 0x0BC8 — AObjEvent32 table */
AObjEvent32 **dStageZebesFile3_mobjlink_0x0BC8[4] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)dStageZebesFile3_mobjlink_0x0DC0,
};

/* @ 0x0BD8 — AObjEvent32 animation script */
u32 dStageZebesFile3_AnimJoint_0x0BD8[122] = {
	aobjEvent32SetValAfter(0x021, 0),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x100, 0),
	    0x3F733333,  /* 0.949999988079071f */
	aobjEvent32SetValBlock(0x0C6, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xBF800000,  /* -1.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x001, 54),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x100, 58),
	    0x3F59999A,  /* 0.8500000238418579f */
	aobjEvent32SetVal(0x0C6, 234),
	    0xBF000000,  /* -0.5f */
	    0xBF000000,  /* -0.5f */
	    0xBF000000,  /* -0.5f */
	    0xBF000000,  /* -0.5f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x001, 56),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(4),
	aobjEvent32SetVal0Rate(0x100, 59),
	    0x3F733333,  /* 0.949999988079071f */
	aobjEvent32Wait(2),
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetValAfter(0x001, 55),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(4),
	aobjEvent32SetValAfter(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(3),
	aobjEvent32SetVal0Rate(0x100, 59),
	    0x3F59999A,  /* 0.8500000238418579f */
	aobjEvent32Wait(3),
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32Wait(3),
	aobjEvent32SetValAfter(0x001, 56),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(3),
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x020, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetVal0Rate(0x100, 58),
	    0x3F733333,  /* 0.949999988079071f */
	aobjEvent32Wait(4),
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x020, 6),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x020, 169),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(6),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageZebesFile3_AnimJoint_0x0BD8,
};

/* @ 0x0DC0 — AObjEvent32 table */
AObjEvent32 *dStageZebesFile3_mobjlink_0x0DC0[2] = {
	(AObjEvent32 *)dStageZebesFile3_AnimJoint_0x0BD8,
	NULL,
};
