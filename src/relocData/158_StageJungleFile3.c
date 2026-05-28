/* relocData file 158: StageJungleFile3 — Kongo Jungle stage AnimJoint data.
 * AObjEvent32 scripts each terminate in one aobjEvent32End() or a
 * SetAnim loop; trailing joint-table words are typed as AObjEvent32*
 * arrays. Intern chain walked from the relocData.csv head. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

extern u32 dStageJungleFile3_AnimJoint_0x0B28[];
extern u32 dStageJungleFile3_AnimJoint_0x0B68[];
extern u32 dStageJungleFile3_AnimJoint_0x0BF8[];

PAD(8);
/* @ 0x0008 */
u16 dStageJungleFile3_LUT_0x0008[16] = {
	#include <StageJungleFile3/LUT_0x0008.palette.inc.c>
};
PAD(8);

/* @ 0x0030 */
/* @tex fmt=CI4 dim=64x64 lut=dStageJungleFile3_LUT_0x0008 */
u8 dStageJungleFile3_Tex_0x0030[2048] = {
	#include <StageJungleFile3/Tex_0x0030.tex.inc.c>
};

/* @ 0x0830 */
Vtx dStageJungleFile3_Vtx_0x0830[3] = {
	#include <StageJungleFile3/Vtx_0x0830.vtx.inc.c>
};

/* @ 0x0860 */
Vtx dStageJungleFile3_Vtx_0x0860[11] = {
	#include <StageJungleFile3/Vtx_0x0860.vtx.inc.c>
};

/* @ 0x0910 */
Gfx dStageJungleFile3_DL_0x0910[31] = {
	#include <StageJungleFile3/DL_0x0910.dl.inc.c>
};

/* @ 0x0A08 */
Gfx dStageJungleFile3_DL_0x0A08[2] = {
	#include <StageJungleFile3/DL_0x0A08.dl.inc.c>
};

/* @ 0x0A18 */
Gfx dStageJungleFile3_DL_0x0A18[16] = {
	#include <StageJungleFile3/DL_0x0A18.dl.inc.c>
};

/* @ 0x0A98 */
DObjDesc dStageJungleFile3_DObjDesc_0x0A98[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16385, (void *)dStageJungleFile3_DL_0x0A08, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x0B1C */
AObjEvent32 *dStageJungleFile3_mobjlink_0x0B1C[3] = {
	NULL,
	(AObjEvent32 *)dStageJungleFile3_AnimJoint_0x0B28,
	NULL,
};

/* @ 0x0B28 */
u32 dStageJungleFile3_AnimJoint_0x0B28[11] = {
	aobjEvent32SetVal0Rate(0x010, 0),
	    0x455D4000,  /* 3540.0f */
	aobjEvent32SetValAfterBlock(0x060, 0),
	    0xC4C7B000,  /* -1597.5f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x010, 249),
	    0xC55D4000,  /* -3540.0f */
	aobjEvent32SetVal0RateBlock(0x010, 250),
	    0x455D4000,  /* 3540.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageJungleFile3_AnimJoint_0x0B28,
};

/* @ 0x0B54 */
AObjEvent32 *dStageJungleFile3_mobjlink_0x0B54[5] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageJungleFile3_AnimJoint_0x0B68,
};

/* @ 0x0B68 */
u32 dStageJungleFile3_AnimJoint_0x0B68[32] = {
	aobjEvent32SetVal0Rate(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x024, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x180, 3),
	    0x3F8A305A,  /* 1.0796005725860596f */
	    0x3F5EC79D,  /* 0.8702333569526672f */
	aobjEvent32SetVal(0x004, 36),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x020, 3),
	    0xC3520000,  /* -210.0f */
	aobjEvent32SetValRate(0x180, 3),
	    0x3F800000,  /* 1.0f */
	    0xBABA4F93,  /* -0.0014214388793334365f */
	    0x3F800000,  /* 1.0f */
	    0x3B17DD33,  /* 0.0023172616492956877f */
	aobjEvent32SetValBlock(0x020, 3),
	    0x43070000,  /* 135.0f */
	aobjEvent32SetVal(0x180, 53),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x020, 3),
	    0xC2B40000,  /* -90.0f */
	aobjEvent32SetValBlock(0x020, 3),
	    0x42100000,  /* 36.0f */
	aobjEvent32SetValBlock(0x020, 2),
	    0xC1C00000,  /* -24.0f */
	aobjEvent32SetValBlock(0x020, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

/* @ 0x0BE8 */
AObjEvent32 *dStageJungleFile3_mobjlink_0x0BE8[4] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageJungleFile3_AnimJoint_0x0BF8,
};

/* @ 0x0BF8 */
u32 dStageJungleFile3_AnimJoint_0x0BF8[57] = {
	aobjEvent32SetValAfterBlock(0x004, 0),
	    0xC0C90FDB,  /* -6.2831854820251465f */
	aobjEvent32SetValRateBlock(0x1A0, 0),
	    0x00000000,  /* 0.0f */
	    0xC31113ED,  /* -145.0778350830078f */
	    0x3F800000,  /* 1.0f */
	    0x3C9B5D92,  /* 0.01896551623940468f */
	    0x3F800000,  /* 1.0f */
	    0xBB550F50,  /* -0.003251034766435623f */
	aobjEvent32SetValRateBlock(0x1A0, 4),
	    0xC3A50000,  /* -330.0f */
	    0x3FB974BC,  /* 1.4488749504089355f */
	    0x40066666,  /* 2.0999999046325684f */
	    0xBD5E9239,  /* -0.054338667541742325f */
	    0x3F4FBA88,  /* 0.8114399909973145f */
	    0x3D9F49F7,  /* 0.07777779549360275f */
	aobjEvent32SetVal(0x020, 5),
	    0x43E10000,  /* 450.0f */
	aobjEvent32SetValRate(0x100, 5),
	    0x3FD9999A,  /* 1.7000000476837158f */
	    0x3C32A7A1,  /* 0.010904223658144474f */
	aobjEvent32SetValRateBlock(0x080, 1),
	    0x3F333333,  /* 0.699999988079071f */
	    0xBBAEBF0D,  /* -0.005332833621650934f */
	aobjEvent32SetValRateBlock(0x080, 4),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3D98F164,  /* 0.0746791660785675f */
	aobjEvent32SetVal(0x020, 4),
	    0xC32E0000,  /* -174.0f */
	aobjEvent32SetValRateBlock(0x180, 3),
	    0x3F56703B,  /* 0.8376500010490417f */
	    0xBC0DB10B,  /* -0.008648167364299297f */
	    0x3F660F7C,  /* 0.8986737728118896f */
	    0xBD945183,  /* -0.07242109626531601f */
	aobjEvent32SetValRate(0x080, 2),
	    0x3FC00000,  /* 1.5f */
	    0x3D806344,  /* 0.06268933415412903f */
	aobjEvent32SetValRate(0x100, 5),
	    0x3F8FB54D,  /* 1.1227203607559204f */
	    0x3C4F8421,  /* 0.012665779329836369f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x020, 5),
	    0x43070000,  /* 135.0f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x080, 3),
	    0x3F834939,  /* 1.0256720781326294f */
	    0xBE58BC8D,  /* -0.21165676414966583f */
	aobjEvent32SetValRate(0x180, 3),
	    0x3F800000,  /* 1.0f */
	    0xB986987B,  /* -0.0002567207848187536f */
	    0x3F800000,  /* 1.0f */
	    0xBAA0CE3F,  /* -0.0012268497375771403f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x020, 3),
	    0xC2960000,  /* -75.0f */
	aobjEvent32Wait(2),
	aobjEvent32End(),
};
