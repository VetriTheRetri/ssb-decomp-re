/* relocData file 155: StageInishieFile3 — Planet Zebes (Inishie) stage AnimJoint data.
 * AObjEvent32 scripts each terminate in one aobjEvent32End() or a
 * SetAnim loop; trailing joint-table words are typed as AObjEvent32*
 * arrays. Intern chain walked from the relocData.csv head. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

extern Gfx dStageInishieFile3_DL_0x0258[];
extern u32 dStageInishieFile3_AnimJoint_0x0734[];
extern MObjSub *dStageInishieFile3_mobjsub_0x0AF8[];
extern u32 dStageInishieFile3_AnimJoint_0x0CC8[];
extern AObjEvent32 *dStageInishieFile3_mobjlink_0x0DF0[];
extern AObjEvent32 *dStageInishieFile3_mobjlink_0x0E34[];
extern u32 dStageInishieFile3_AnimJoint_0x1288[];
extern u32 dStageInishieFile3_AnimJoint_0x13B8[];

PAD(8);
/* @ 0x0008 */
u8 dStageInishieFile3_Tex_0x0008[64] = {
	#include <StageInishieFile3/Tex_0x0008.tex.inc.c>
};

/* @ 0x0048 */
Vtx dStageInishieFile3_Vtx_0x0048[8] = {
	#include <StageInishieFile3/Vtx_0x0048.vtx.inc.c>
};

/* @ 0x00C8 */
Vtx dStageInishieFile3_Vtx_0x00C8[4] = {
	#include <StageInishieFile3/Vtx_0x00C8.vtx.inc.c>
};

/* @ 0x0108 */
Vtx dStageInishieFile3_Vtx_0x0108[4] = {
	#include <StageInishieFile3/Vtx_0x0108.vtx.inc.c>
};

/* @ 0x0148 */
Vtx dStageInishieFile3_Vtx_0x0148[2] = {
	#include <StageInishieFile3/Vtx_0x0148.vtx.inc.c>
};

/* @ 0x0168 */
Vtx dStageInishieFile3_Vtx_0x0168[4] = {
	#include <StageInishieFile3/Vtx_0x0168.vtx.inc.c>
};

/* @ 0x01A8 */
Vtx dStageInishieFile3_Vtx_0x01A8[2] = {
	#include <StageInishieFile3/Vtx_0x01A8.vtx.inc.c>
};

/* @ 0x01C8 */
Gfx dStageInishieFile3_DL_0x01C8[18] = {
	#include <StageInishieFile3/DL_0x01C8.dl.inc.c>
};

/* @ 0x0258 */
Gfx dStageInishieFile3_DL_0x0258[18] = {
	#include <StageInishieFile3/DL_0x0258.dl.inc.c>
};

/* @ 0x02E8 */
Gfx dStageInishieFile3_DL_0x02E8[3] = {
	#include <StageInishieFile3/DL_0x02E8.dl.inc.c>
};

/* @ 0x0300 */
Gfx dStageInishieFile3_DL_0x0300[5] = {
	#include <StageInishieFile3/DL_0x0300.dl.inc.c>
};

/* @ 0x0328 */
Gfx dStageInishieFile3_DL_0x0328[3] = {
	#include <StageInishieFile3/DL_0x0328.dl.inc.c>
};

/* @ 0x0340 */
Gfx dStageInishieFile3_DL_0x0340[8] = {
	#include <StageInishieFile3/DL_0x0340.dl.inc.c>
};

/* @ 0x0380 */
DObjDesc dStageInishieFile3_DObjDesc_0x0380[6] = {
	{ 0, (void *)dStageInishieFile3_DL_0x01C8, { 0.0f, 2010.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageInishieFile3_DL_0x02E8, { 420.0f, -57.751007080078125f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dStageInishieFile3_DL_0x0300, { 0.0f, -1590.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageInishieFile3_DL_0x0328, { -420.0f, -57.750091552734375f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dStageInishieFile3_DL_0x0340, { 0.0f, -1590.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(16);
/* @ 0x0498 */
u8 dStageInishieFile3_Tex_0x0498[24] = {
	#include <StageInishieFile3/Tex_0x0498.tex.inc.c>
};

/* @ 0x04B0 */
u8 dStageInishieFile3_Tex_0x04B0[64] = {
	#include <StageInishieFile3/Tex_0x04B0.tex.inc.c>
};

/* @ 0x04F0 */
Vtx dStageInishieFile3_Vtx_0x04F0[12] = {
	#include <StageInishieFile3/Vtx_0x04F0.vtx.inc.c>
};

/* @ 0x05B0 */
Vtx dStageInishieFile3_Vtx_0x05B0[4] = {
	#include <StageInishieFile3/Vtx_0x05B0.vtx.inc.c>
};

/* @ 0x05F0 */
Gfx dStageInishieFile3_DL_0x05F0[39] = {
	#include <StageInishieFile3/DL_0x05F0.dl.inc.c>
};

PAD(8);
/* @ 0x0730 */
AObjEvent32 *dStageInishieFile3_mobjlink_0x0730[1] = {
	(AObjEvent32 *)dStageInishieFile3_AnimJoint_0x0734,
};

/* @ 0x0734 */
u32 dStageInishieFile3_AnimJoint_0x0734[4] = {
	aobjEvent32SetFlags(0x002, 2),
	aobjEvent32SetFlags(0x000, 2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageInishieFile3_AnimJoint_0x0734,
};

PAD(20);
/* @ 0x0758 */
u8 dStageInishieFile3_Tex_0x0758[264] = {
	#include <StageInishieFile3/Tex_0x0758.tex.inc.c>
};

/* @ 0x0860 */
u8 dStageInishieFile3_Tex_0x0860[264] = {
	#include <StageInishieFile3/Tex_0x0860.tex.inc.c>
};

/* @ 0x0968 */
u8 dStageInishieFile3_Tex_0x0968[256] = {
	#include <StageInishieFile3/Tex_0x0968.tex.inc.c>
};

/* @ 0x0A68 */
MObjSub **dStageInishieFile3_mobjlink_0x0A68[2] = {
	NULL,
	(MObjSub **)dStageInishieFile3_mobjsub_0x0AF8,
};

/* @ 0x0A70 */
u8 *dStageInishieFile3_sprites_0x0A70[4] = {
	(u8 *)dStageInishieFile3_Tex_0x0968,
	(u8 *)dStageInishieFile3_Tex_0x0860,
	(u8 *)dStageInishieFile3_Tex_0x0758,
	NULL,
};

/* @ 0x0A80 */
MObjSub dStageInishieFile3_MObjSub_0x0A80[1] = {
	{
		0x0000, 2, 2,
		(void **)dStageInishieFile3_sprites_0x0A70,
		0x0020, 0x0001, 0x0020, 0x0020,
		0,
		0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f,
		(void **)NULL,
		0x0001, 2, 0, 0x0010, 0x0020, 0x0020, 0x0020,
		0.0f, 0.0f, 0.0f, 0.0f,
		0x00002005,
		{ { 255, 255, 255, 255 } },
		0, 0, { 0, 0 },
		{ { 0, 0, 0, 255 } },
		{ { 0, 0, 0, 0 } },
		{ { 204, 204, 204, 0 } },
		{ { 38, 38, 38, 0 } },
		0, 0, 0, 0,
	}
};

/* @ 0x0AF8 */
MObjSub *dStageInishieFile3_mobjsub_0x0AF8[2] = {
	(MObjSub *)dStageInishieFile3_MObjSub_0x0A80,
	NULL,
};

/* @ 0x0B00 */
Vtx dStageInishieFile3_Vtx_0x0B00[4] = {
	#include <StageInishieFile3/Vtx_0x0B00.vtx.inc.c>
};

/* @ 0x0B40 */
Gfx dStageInishieFile3_DL_0x0B40[30] = {
	#include <StageInishieFile3/DL_0x0B40.dl.inc.c>
};

/* @ 0x0C30 */
DObjDesc dStageInishieFile3_DObjDesc_0x0C30[3] = {
	{ 0, NULL, { 0.0f, 15.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageInishieFile3_DL_0x0B40, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x0CB4 */
AObjEvent32 *dStageInishieFile3_mobjlink_0x0CB4[5] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageInishieFile3_AnimJoint_0x0CC8,
};

/* @ 0x0CC8 */
u32 dStageInishieFile3_AnimJoint_0x0CC8[9] = {
	aobjEvent32SetValBlock(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x020, 29),
	    0x44151999,  /* 596.3999633789062f */
	aobjEvent32SetValBlock(0x020, 64),
	    0x44151999,  /* 596.3999633789062f */
	aobjEvent32SetValBlock(0x020, 47),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

/* @ 0x0CEC */
AObjEvent32 **dStageInishieFile3_mobjlink_0x0CEC[3] = {
	NULL,
	NULL,
	(AObjEvent32 **)dStageInishieFile3_mobjlink_0x0DF0,
};

/* @ 0x0CF8 */
u32 dStageInishieFile3_AnimJoint_0x0CF8[62] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

/* @ 0x0DF0 */
AObjEvent32 *dStageInishieFile3_mobjlink_0x0DF0[5] = {
	(AObjEvent32 *)dStageInishieFile3_AnimJoint_0x0CF8,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageInishieFile3_mobjlink_0x0E34,
};

/* @ 0x0E04 */
u32 dStageInishieFile3_AnimJoint_0x0E04[12] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageInishieFile3_AnimJoint_0x0E04,
};

/* @ 0x0E34 */
AObjEvent32 *dStageInishieFile3_mobjlink_0x0E34[5] = {
	(AObjEvent32 *)dStageInishieFile3_AnimJoint_0x0E04,
	NULL,
	NULL,
	NULL,
	NULL,
};

/* @ 0x0E48 */
u8 dStageInishieFile3_Tex_0x0E48[264] = {
	#include <StageInishieFile3/Tex_0x0E48.tex.inc.c>
};

/* @ 0x0F50 */
u8 dStageInishieFile3_Tex_0x0F50[64] = {
	#include <StageInishieFile3/Tex_0x0F50.tex.inc.c>
};

/* @ 0x0F90 */
Vtx dStageInishieFile3_Vtx_0x0F90[16] = {
	#include <StageInishieFile3/Vtx_0x0F90.vtx.inc.c>
};

/* @ 0x1090 */
Vtx dStageInishieFile3_Vtx_0x1090[4] = {
	#include <StageInishieFile3/Vtx_0x1090.vtx.inc.c>
};

/* @ 0x10D0 */
Gfx dStageInishieFile3_DL_0x10D0[37] = {
	#include <StageInishieFile3/DL_0x10D0.dl.inc.c>
};

/* @ 0x11F8 */
DObjDesc dStageInishieFile3_DObjDesc_0x11F8[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageInishieFile3_DL_0x10D0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.3096979856491089f, 2.022897958755493f, 1.058426022529602f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x127C */
AObjEvent32 *dStageInishieFile3_mobjlink_0x127C[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dStageInishieFile3_AnimJoint_0x1288,
};

/* @ 0x1288 */
u32 dStageInishieFile3_AnimJoint_0x1288[72] = {
	aobjEvent32SetVal0Rate(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F83B6AD,  /* 1.0290123224258423f */
	    0x3F800000,  /* 1.0f */
	    0xBEF47B65,  /* -0.4775039255619049f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValRateBlock(0x380, 3),
	    0x40200000,  /* 2.5f */
	    0xBC4CD925,  /* -0.0125029431656003f */
	    0x3DCCCCCD,  /* 0.10000000149011612f */
	    0xBB1ACBC9,  /* -0.0023620000574737787f */
	    0x3F99999A,  /* 1.2000000476837158f */
	    0xBCCA43C4,  /* -0.02469051629304886f */
	aobjEvent32SetValRate(0x200, 5),
	    0x3F800000,  /* 1.0f */
	    0x3D3B06B2,  /* 0.045660682022571564f */
	aobjEvent32SetValRateBlock(0x180, 1),
	    0x40200000,  /* 2.5f */
	    0x382EC33E,  /* 4.166666622040793e-05f */
	    0x3DCCCCCD,  /* 0.10000000149011612f */
	    0xB9CE0B91,  /* -0.0003929999948013574f */
	aobjEvent32SetTargetRate(0x180, 0),
	    0xBD6D4C33,  /* -0.0579339973628521f */
	    0x3D2E56E4,  /* 0.04256333410739899f */
	aobjEvent32SetValRateBlock(0x180, 3),
	    0x3F800000,  /* 1.0f */
	    0xBF83ABEA,  /* -1.0286839008331299f */
	    0x3F800000,  /* 1.0f */
	    0x3F7FC9CC,  /* 0.9991729259490967f */
	aobjEvent32SetValRate(0x180, 2),
	    0x3E4CCCCD,  /* 0.20000000298023224f */
	    0xBBC8689D,  /* -0.0061159864999353886f */
	    0x400CCCCD,  /* 2.200000047683716f */
	    0xBB937FA5,  /* -0.004501300398260355f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x200, 5),
	    0x3F874E43,  /* 1.05707585811615f */
	    0xBC3A59D5,  /* -0.011373956687748432f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x180, 2),
	    0x3F4CCCCE,  /* 0.8000000715255737f */
	    0x3F414DBC,  /* 0.7550923824310303f */
	    0x3FB33333,  /* 1.399999976158142f */
	    0xBF65667B,  /* -0.8960949778556824f */
	aobjEvent32SetValRate(0x180, 3),
	    0x3FB33333,  /* 1.399999976158142f */
	    0x3A5AB72A,  /* 0.0008343333611264825f */
	    0x3ECCCCCD,  /* 0.4000000059604645f */
	    0xBB11C0B7,  /* -0.0022240111138671637f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x200, 3),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0xBBF06AAB,  /* -0.0073369345627725124f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x100, 4),
	    0x3F4CCCCD,  /* 0.800000011920929f */
	    0xBAB16255,  /* -0.0013533333549275994f */
	aobjEvent32SetValRateBlock(0x080, 2),
	    0x3F4CCCCD,  /* 0.800000011920929f */
	    0xBF37094D,  /* -0.7149856686592102f */
	aobjEvent32SetVal0Rate(0x200, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x080, 2),
	    0x3E99999A,  /* 0.30000001192092896f */
	    0xBAECD8DC,  /* -0.0018070000223815441f */
	aobjEvent32SetVal0RateBlock(0x180, 4),
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3DCCCCCE,  /* 0.10000000894069672f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

PAD(8);
/* @ 0x13B0 */
AObjEvent32 *dStageInishieFile3_mobjlink_0x13B0[2] = {
	NULL,
	(AObjEvent32 *)dStageInishieFile3_AnimJoint_0x13B8,
};

/* @ 0x13B8 */
u32 dStageInishieFile3_AnimJoint_0x13B8[20] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3BA3D70B,  /* 0.005000000353902578f */
	    0x3BA3D70B,  /* 0.005000000353902578f */
	    0x3BA3D70B,  /* 0.005000000353902578f */
	aobjEvent32SetValRateBlock(0x380, 10),
	    0x3F866666,  /* 1.0499999523162842f */
	    0x3D87D9C5,  /* 0.0663333311676979f */
	    0x3F866666,  /* 1.0499999523162842f */
	    0x3D87D9C5,  /* 0.0663333311676979f */
	    0x3F866666,  /* 1.0499999523162842f */
	    0x3D87D9C5,  /* 0.0663333311676979f */
	aobjEvent32SetVal0RateBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};
