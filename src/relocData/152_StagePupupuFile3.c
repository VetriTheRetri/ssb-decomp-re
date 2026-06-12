/* relocData file 152: StagePupupuFile3 — Dream Land (Pupupu) stage AnimJoint data.
 * AObjEvent32 scripts each terminate in one aobjEvent32End() or a
 * SetAnim loop; trailing joint-table words are typed as AObjEvent32*
 * arrays. Intern chain walked from the relocData.csv head. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Gfx dStagePupupuFile3_DL_0x15B0[];
extern Gfx dStagePupupuFile3_DL_0x2F00[];
extern Gfx dStagePupupuFile3_DL_0x2880[];
extern u16 dStagePupupuFile3_LUT_0x0008[];
extern u16 dStagePupupuFile3_LUT_0x0438[];
extern u16 dStagePupupuFile3_LUT_0x0868[];
extern u16 dStagePupupuFile3_LUT_0x0998[];
extern u16 dStagePupupuFile3_LUT_0x0E58[];
extern u8 dStagePupupuFile3_Tex_0x0030[];
extern u8 dStagePupupuFile3_Tex_0x0460[];
extern u8 dStagePupupuFile3_Tex_0x0890[];
extern u8 dStagePupupuFile3_Tex_0x0E80[];
extern Vtx dStagePupupuFile3_Vtx_0x0F98[];
extern Vtx dStagePupupuFile3_Vtx_0x1458[];
extern Vtx dStagePupupuFile3_Vtx_0x1498[];
extern Vtx dStagePupupuFile3_Vtx_0x14D8[];
extern Vtx dStagePupupuFile3_Vtx_0x1518[];
extern Vtx dStagePupupuFile3_Vtx_0x2790[];
extern Vtx dStagePupupuFile3_Vtx_0x27C0[];
extern Vtx dStagePupupuFile3_Vtx_0x27E0[];
extern Vtx dStagePupupuFile3_Vtx_0x2810[];
extern Vtx dStagePupupuFile3_Vtx_0x2DC0[];
extern Vtx dStagePupupuFile3_Vtx_0x2DF0[];
extern Vtx dStagePupupuFile3_Vtx_0x2E10[];
extern Vtx dStagePupupuFile3_Vtx_0x2E40[];
extern Vtx dStagePupupuFile3_Vtx_0x2E60[];
extern Vtx dStagePupupuFile3_Vtx_0x2E90[];

extern MObjSub *dStagePupupuFile3_mobjsub_0x0F90[];
extern u32 dStagePupupuFile3_AnimJoint_0x11AC[];
extern u32 dStagePupupuFile3_AnimJoint_0x11C0[];
extern AObjEvent32 *dStagePupupuFile3_mobjlink_0x1214[];
extern u32 dStagePupupuFile3_AnimJoint_0x122C[];
extern u32 dStagePupupuFile3_AnimJoint_0x1240[];
extern AObjEvent32 *dStagePupupuFile3_mobjlink_0x12A4[];
extern u32 dStagePupupuFile3_AnimJoint_0x12BC[];
extern u32 dStagePupupuFile3_AnimJoint_0x12D0[];
extern u32 dStagePupupuFile3_AnimJoint_0x133C[];
extern u32 dStagePupupuFile3_AnimJoint_0x1358[];
extern MObjSub *dStagePupupuFile3_mobjsub_0x1450[];
extern u32 dStagePupupuFile3_AnimJoint_0x18C8[];
extern u32 dStagePupupuFile3_AnimJoint_0x18DC[];
extern u32 dStagePupupuFile3_AnimJoint_0x191C[];
extern u32 dStagePupupuFile3_AnimJoint_0x198C[];
extern u32 dStagePupupuFile3_AnimJoint_0x19B0[];
extern AObjEvent32 *dStagePupupuFile3_mobjlink_0x1A34[];
extern u32 dStagePupupuFile3_AnimJoint_0x1A58[];
extern u32 dStagePupupuFile3_AnimJoint_0x1A74[];
extern u32 dStagePupupuFile3_AnimJoint_0x1AAC[];
extern u32 dStagePupupuFile3_AnimJoint_0x1B14[];
extern u32 dStagePupupuFile3_AnimJoint_0x1B54[];
extern AObjEvent32 *dStagePupupuFile3_mobjlink_0x1BD4[];
extern u32 dStagePupupuFile3_AnimJoint_0x1BF8[];
extern u32 dStagePupupuFile3_AnimJoint_0x1C0C[];
extern u32 dStagePupupuFile3_AnimJoint_0x1C48[];
extern u32 dStagePupupuFile3_AnimJoint_0x1C98[];
extern AObjEvent32 *dStagePupupuFile3_mobjlink_0x1D20[];
extern u32 dStagePupupuFile3_AnimJoint_0x1D48[];
extern u32 dStagePupupuFile3_AnimJoint_0x1D5C[];
extern u32 dStagePupupuFile3_AnimJoint_0x1D98[];
extern u32 dStagePupupuFile3_AnimJoint_0x1DE8[];
extern AObjEvent32 *dStagePupupuFile3_mobjlink_0x1E70[];
extern u32 dStagePupupuFile3_AnimJoint_0x1E98[];
extern u32 dStagePupupuFile3_AnimJoint_0x1EAC[];
extern u32 dStagePupupuFile3_AnimJoint_0x1F3C[];
extern u32 dStagePupupuFile3_AnimJoint_0x2004[];
extern u32 dStagePupupuFile3_AnimJoint_0x202C[];
extern AObjEvent32 *dStagePupupuFile3_mobjlink_0x20F0[];
extern u32 dStagePupupuFile3_AnimJoint_0x2118[];
extern u32 dStagePupupuFile3_AnimJoint_0x212C[];
extern u32 dStagePupupuFile3_AnimJoint_0x2164[];
extern u32 dStagePupupuFile3_AnimJoint_0x21F0[];
extern u32 dStagePupupuFile3_AnimJoint_0x2218[];
extern AObjEvent32 *dStagePupupuFile3_mobjlink_0x22E0[];
extern u32 dStagePupupuFile3_AnimJoint_0x2308[];
extern u32 dStagePupupuFile3_AnimJoint_0x2324[];
extern u32 dStagePupupuFile3_AnimJoint_0x23B0[];
extern u32 dStagePupupuFile3_AnimJoint_0x2478[];
extern u32 dStagePupupuFile3_AnimJoint_0x24F8[];
extern AObjEvent32 *dStagePupupuFile3_mobjlink_0x2580[];
extern u32 dStagePupupuFile3_AnimJoint_0x25A8[];
extern u32 dStagePupupuFile3_AnimJoint_0x25C4[];
extern u32 dStagePupupuFile3_AnimJoint_0x2600[];
extern u32 dStagePupupuFile3_AnimJoint_0x267C[];
extern u32 dStagePupupuFile3_AnimJoint_0x26F8[];
extern AObjEvent32 *dStagePupupuFile3_mobjlink_0x2780[];
extern u32 dStagePupupuFile3_AnimJoint_0x2BFC[];
extern u32 dStagePupupuFile3_AnimJoint_0x2C4C[];
extern u32 dStagePupupuFile3_AnimJoint_0x2C9C[];
extern u32 dStagePupupuFile3_AnimJoint_0x2CEC[];
extern u32 dStagePupupuFile3_AnimJoint_0x2D3C[];
extern u32 dStagePupupuFile3_AnimJoint_0x2D8C[];
extern u32 dStagePupupuFile3_AnimJoint_0x3408[];
extern u32 dStagePupupuFile3_AnimJoint_0x3478[];
extern u32 dStagePupupuFile3_AnimJoint_0x34D8[];
extern u32 dStagePupupuFile3_AnimJoint_0x3538[];
extern u32 dStagePupupuFile3_AnimJoint_0x3578[];
extern u32 dStagePupupuFile3_AnimJoint_0x35E8[];
extern u32 dStagePupupuFile3_AnimJoint_0x3614[];
extern u32 dStagePupupuFile3_AnimJoint_0x3688[];
extern u32 dStagePupupuFile3_AnimJoint_0x36CC[];

PAD(8);
/* @ 0x0008 */
u16 dStagePupupuFile3_LUT_0x0008[16] = {
	#include <StagePupupuFile3/LUT_0x0008.palette.inc.c>
};
PAD(8);

/* @ 0x0030 */
/* @tex fmt=CI4 dim=64x32 lut=dStagePupupuFile3_LUT_0x0008 */
u8 dStagePupupuFile3_Tex_0x0030[1032] = {
	#include <StagePupupuFile3/Tex_0x0030.tex.inc.c>
};

/* @ 0x0438 */
u16 dStagePupupuFile3_LUT_0x0438[16] = {
	#include <StagePupupuFile3/LUT_0x0438.palette.inc.c>
};
PAD(8);

/* @ 0x0460 */
/* @tex fmt=CI4 dim=64x32 lut=dStagePupupuFile3_LUT_0x0438 */
u8 dStagePupupuFile3_Tex_0x0460[1032] = {
	#include <StagePupupuFile3/Tex_0x0460.tex.inc.c>
};

/* @ 0x0868 */
u16 dStagePupupuFile3_LUT_0x0868[16] = {
	#include <StagePupupuFile3/LUT_0x0868.palette.inc.c>
};
PAD(8);

/* @ 0x0890 */
/* @tex fmt=CI4 dim=16x32 lut=dStagePupupuFile3_LUT_0x0868 */
u8 dStagePupupuFile3_Tex_0x0890[264] = {
	#include <StagePupupuFile3/Tex_0x0890.tex.inc.c>
};

/* @ 0x0998 */
u16 dStagePupupuFile3_LUT_0x0998[16] = {
	#include <StagePupupuFile3/LUT_0x0998.palette.inc.c>
};
PAD(8);

/* @ 0x09C0 */
/* @tex fmt=CI4 dim=32x19 */
u8 dStagePupupuFile3_Tex_0x09C0[304] = {
	#include <StagePupupuFile3/Tex_0x09C0.tex.inc.c>
};

/* @ 0x0AF0 */
/* @tex fmt=CI4 dim=32x19 */
u8 dStagePupupuFile3_Tex_0x0AF0[304] = {
	#include <StagePupupuFile3/Tex_0x0AF0.tex.inc.c>
};

/* @ 0x0C20 */
/* @tex fmt=CI4 dim=32x19 */
u8 dStagePupupuFile3_Tex_0x0C20[304] = {
	#include <StagePupupuFile3/Tex_0x0C20.tex.inc.c>
};

/* @ 0x0D50 */
/* @tex fmt=CI4 dim=16x32 */
u8 dStagePupupuFile3_Tex_0x0D50[264] = {
	#include <StagePupupuFile3/Tex_0x0D50.tex.inc.c>
};

/* @ 0x0E58 */
u16 dStagePupupuFile3_LUT_0x0E58[16] = {
	#include <StagePupupuFile3/LUT_0x0E58.palette.inc.c>
};
PAD(8);

/* @ 0x0E80 */
/* @tex fmt=CI4 dim=16x16 lut=dStagePupupuFile3_LUT_0x0E58 */
u8 dStagePupupuFile3_Tex_0x0E80[136] = {
	#include <StagePupupuFile3/Tex_0x0E80.tex.inc.c>
};

/* @ 0x0F08 */
MObjSub **dStagePupupuFile3_mobjlink_0x0F08[1] = {
	(MObjSub **)dStagePupupuFile3_mobjsub_0x0F90,
};

/* @ 0x0F0C */
u8 *dStagePupupuFile3_sprites_0x0F0C[3] = {
	(u8 *)dStagePupupuFile3_Tex_0x09C0,
	(u8 *)dStagePupupuFile3_Tex_0x0AF0,
	NULL,
};

/* @ 0x0F18 */
MObjSub dStagePupupuFile3_MObjSub_0x0F18[1] = {
	{
		0x0000, 2, 2,
		(void **)dStagePupupuFile3_sprites_0x0F0C,
		0x0020, 0x0000, 0x0020, 0x0020,
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
		{ { 255, 255, 255, 0 } },
		{ { 128, 128, 128, 0 } },
		0, 0, 0, 0,
	}
};

/* @ 0x0F90 */
MObjSub *dStagePupupuFile3_mobjsub_0x0F90[2] = {
	(MObjSub *)dStagePupupuFile3_MObjSub_0x0F18,
	NULL,
};

/* @ 0x0F98 */
Vtx dStagePupupuFile3_Vtx_0x0F98[6] = {
	#include <StagePupupuFile3/Vtx_0x0F98.vtx.inc.c>
};

/* @ 0x0FF8 */
Gfx dStagePupupuFile3_DL_0x0FF8[31] = {
	#include <StagePupupuFile3/DL_0x0FF8.dl.inc.c>
};

/* @ 0x10F0 */
DObjDesc dStagePupupuFile3_DObjDesc_0x10F0[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { -525.0f, 187.5f, -1219.39501953125f }, { 0.0f, 0.6108649969100952f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dStagePupupuFile3_DL_0x0FF8, { 0.0001720000000204891f, 750.0f, 427.50006103515625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11A0 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x11A0[3] = {
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x11AC,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x11C0,
};

/* @ 0x11AC */
u32 dStagePupupuFile3_AnimJoint_0x11AC[5] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 0),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 25),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32End(),
};

/* @ 0x11C0 */
u32 dStagePupupuFile3_AnimJoint_0x11C0[5] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 0),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 25),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32End(),
};

/* @ 0x11D4 */
AObjEvent32 **dStagePupupuFile3_mobjlink_0x11D4[6] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)dStagePupupuFile3_mobjlink_0x1214,
};

/* @ 0x11EC */
u32 dStagePupupuFile3_AnimJoint_0x11EC[10] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 343),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTX, 330),
	aobjEvent32Wait(13),
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 24),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

/* @ 0x1214 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x1214[6] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x11EC,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x122C,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1240,
};

/* @ 0x122C */
u32 dStagePupupuFile3_AnimJoint_0x122C[5] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 0),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 30),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32End(),
};

/* @ 0x1240 */
u32 dStagePupupuFile3_AnimJoint_0x1240[9] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_SCAX, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_SCAY, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(AOBJ_FLAG_SCAX, 240),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_SCAX, 175),
	aobjEvent32Wait(30),
	aobjEvent32End(),
};

/* @ 0x1264 */
AObjEvent32 **dStagePupupuFile3_mobjlink_0x1264[6] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)dStagePupupuFile3_mobjlink_0x12A4,
};

/* @ 0x127C */
u32 dStagePupupuFile3_AnimJoint_0x127C[10] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 24),
	    0x00000000,  /* 0.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTX, 12),
	aobjEvent32Wait(12),
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 36),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(18),
	aobjEvent32End(),
};

/* @ 0x12A4 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x12A4[6] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x127C,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x12BC,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x12D0,
};

/* @ 0x12BC */
u32 dStagePupupuFile3_AnimJoint_0x12BC[5] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTY, 0),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32Cmd12(0, 10),
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

/* @ 0x12D0 */
u32 dStagePupupuFile3_AnimJoint_0x12D0[21] = {
	aobjEvent32SetVal0Rate(AOBJ_FLAG_SCAY, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_SCAX, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(AOBJ_FLAG_SCAY, 5),
	    0x3DD480C1,  /* 0.1037612035870552f */
	    0xBE83F6ED,  /* -0.2577432692050934f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_SCAX, 5),
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAX, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_SCAY, 2),
	    0x3DD4801F,  /* 0.1037599965929985f */
	aobjEvent32SetTargetRate(AOBJ_FLAG_SCAY, 0),
	    0x3E84D0EC,  /* 0.2594064474105835f */
	aobjEvent32SetValRate(AOBJ_FLAG_SCAY, 5),
	    0x3F800000,  /* 1.0f */
	    0x3401999A,  /* 1.206994113545079e-07f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_SCAX, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

/* @ 0x1324 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x1324[6] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x133C,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1358,
};

/* @ 0x133C */
u32 dStagePupupuFile3_AnimJoint_0x133C[7] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 0),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32SetVal(AOBJ_FLAG_ROTY, 330),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTY, 1),
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

/* @ 0x1358 */
u32 dStagePupupuFile3_AnimJoint_0x1358[21] = {
	aobjEvent32SetVal0Rate(AOBJ_FLAG_SCAY, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_SCAX, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(AOBJ_FLAG_SCAY, 5),
	    0x3DD480C1,  /* 0.1037612035870552f */
	    0xBE83F6ED,  /* -0.2577432692050934f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_SCAX, 5),
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAX, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_SCAY, 2),
	    0x3DD4801F,  /* 0.1037599965929985f */
	aobjEvent32SetTargetRate(AOBJ_FLAG_SCAY, 0),
	    0x3E84D0EC,  /* 0.2594064474105835f */
	aobjEvent32SetValRate(AOBJ_FLAG_SCAY, 5),
	    0x3F800000,  /* 1.0f */
	    0x3401999A,  /* 1.206994113545079e-07f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_SCAX, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

/* @ 0x13AC */
MObjSub **dStagePupupuFile3_mobjlink_0x13AC[7] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(MObjSub **)dStagePupupuFile3_mobjsub_0x1450,
	NULL,
	NULL,
};

/* @ 0x13C8 */
u8 *dStagePupupuFile3_sprites_0x13C8[4] = {
	(u8 *)dStagePupupuFile3_Tex_0x09C0,
	(u8 *)dStagePupupuFile3_Tex_0x0C20,
	(u8 *)dStagePupupuFile3_Tex_0x0AF0,
	(u8 *)dStagePupupuFile3_Tex_0x0D50,
};

/* @ 0x13D8 */
MObjSub dStagePupupuFile3_MObjSub_0x13D8[1] = {
	{
		0x0000, 2, 2,
		(void **)dStagePupupuFile3_sprites_0x13C8,
		0x0020, 0x0000, 0x0010, 0x0020,
		0,
		0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f,
		(void **)NULL,
		0x0001, 2, 0, 0x0010, 0x0020, 0x0010, 0x0020,
		0.0f, 0.0f, 0.0f, 0.0f,
		0x00002005,
		{ { 255, 255, 255, 255 } },
		0, 0, { 0, 0 },
		{ { 0, 0, 0, 255 } },
		{ { 0, 0, 0, 0 } },
		{ { 255, 255, 255, 0 } },
		{ { 128, 128, 128, 0 } },
		0, 0, 0, 0,
	}
};

/* @ 0x1450 */
MObjSub *dStagePupupuFile3_mobjsub_0x1450[2] = {
	(MObjSub *)dStagePupupuFile3_MObjSub_0x13D8,
	NULL,
};

/* @ 0x1458 */
Vtx dStagePupupuFile3_Vtx_0x1458[4] = {
	#include <StagePupupuFile3/Vtx_0x1458.vtx.inc.c>
};

/* @ 0x1498 */
Vtx dStagePupupuFile3_Vtx_0x1498[4] = {
	#include <StagePupupuFile3/Vtx_0x1498.vtx.inc.c>
};

/* @ 0x14D8 */
Vtx dStagePupupuFile3_Vtx_0x14D8[4] = {
	#include <StagePupupuFile3/Vtx_0x14D8.vtx.inc.c>
};

/* @ 0x1518 */
Vtx dStagePupupuFile3_Vtx_0x1518[4] = {
	#include <StagePupupuFile3/Vtx_0x1518.vtx.inc.c>
};

/* @ 0x1558 */
Gfx dStagePupupuFile3_DL_0x1558[11] = {
	#include <StagePupupuFile3/DL_0x1558.dl.inc.c>
};

/* @ 0x15B0 */
Gfx dStagePupupuFile3_DL_0x15B0[16] = {
	#include <StagePupupuFile3/DL_0x15B0.dl.inc.c>
};

/* @ 0x1630 */
Gfx dStagePupupuFile3_DL_0x1630[18] = {
	#include <StagePupupuFile3/DL_0x1630.dl.inc.c>
};

/* @ 0x16C0 */
Gfx dStagePupupuFile3_DL_0x16C0[12] = {
	#include <StagePupupuFile3/DL_0x16C0.dl.inc.c>
};

/* @ 0x1720 */
Gfx dStagePupupuFile3_DL_0x1720[10] = {
	#include <StagePupupuFile3/DL_0x1720.dl.inc.c>
};

/* @ 0x1770 */
DObjDesc dStagePupupuFile3_DObjDesc_0x1770[7] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { -525.0f, 187.5f, -1219.39501953125f }, { 0.0f, 0.6108649969100952f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dStagePupupuFile3_DL_0x1558, { 0.0f, 510.0f, 487.5f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dStagePupupuFile3_DL_0x1630, { 0.0f, 262.5f, 472.5f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dStagePupupuFile3_DL_0x16C0, { -202.5f, 315.0f, 420.0f }, { 0.0f, 0.0f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 9.999999747378752e-06f } },
	{ 2, (void *)dStagePupupuFile3_DL_0x1720, { 202.5f, 315.0f, 420.0f }, { 0.0f, 0.0f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 9.999999747378752e-06f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(16);
/* @ 0x18B4 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x18B4[5] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x18C8,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x18DC,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x191C,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x198C,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x19B0,
};

/* @ 0x18C8 */
u32 dStagePupupuFile3_AnimJoint_0x18C8[5] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTY, 0),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32Cmd12(0, 10),
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

/* @ 0x18DC */
u32 dStagePupupuFile3_AnimJoint_0x18DC[16] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 350),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 270),
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAY, 0),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTX, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(AOBJ_FLAG_ROTX, 44),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAY, 6),
	    0x44024EF4,  /* 521.233642578125f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAY, 6),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32End(),
};

/* @ 0x191C */
u32 dStagePupupuFile3_AnimJoint_0x191C[28] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43EC4000,  /* 472.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 208),
	    0x43EC4000,  /* 472.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 127),
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAZ, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAY, 0),
	    0x43834000,  /* 262.5f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_SCAX, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(AOBJ_FLAG_SCAX, 44),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAY, 5),
	    0x43A14000,  /* 322.5f */
	    0x41092492,  /* 8.571428298950195f */
	    0x3F4A3D71,  /* 0.7900000214576721f */
	    0xBCF5C28D,  /* -0.029999995604157448f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAY, 2),
	    0x43A14000,  /* 322.5f */
	    0xC1092492,  /* -8.571428298950195f */
	    0x3F4A3D71,  /* 0.7900000214576721f */
	    0x3CF5C28E,  /* 0.029999997466802597f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAY, 5),
	    0x43834000,  /* 262.5f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

/* @ 0x198C */
u32 dStagePupupuFile3_AnimJoint_0x198C[9] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAXYZ, 0),
	    0xC34A8000,  /* -202.5f */
	    0x439D8000,  /* 315.0f */
	    0x43D20000,  /* 420.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

/* @ 0x19B0 */
u32 dStagePupupuFile3_AnimJoint_0x19B0[18] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43D20000,  /* 420.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAXYZ, 0),
	    0x434A8000,  /* 202.5f */
	    0x439D8000,  /* 315.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 499),
	    0x43D20000,  /* 420.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 419),
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 500),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_SCAXYZ, 419),
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

/* @ 0x19F8 */
AObjEvent32 **dStagePupupuFile3_mobjlink_0x19F8[8] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)dStagePupupuFile3_mobjlink_0x1A34,
	NULL,
	NULL,
};

/* @ 0x1A18 */
u32 dStagePupupuFile3_AnimJoint_0x1A18[7] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 107),
	    0x40400000,  /* 3.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTX, 17),
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

/* @ 0x1A34 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x1A34[9] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1A18,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1A58,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1A74,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1AAC,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1B14,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1B54,
};

/* @ 0x1A58 */
u32 dStagePupupuFile3_AnimJoint_0x1A58[7] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 0),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32SetVal(AOBJ_FLAG_ROTY, 330),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTY, 1),
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

/* @ 0x1A74 */
u32 dStagePupupuFile3_AnimJoint_0x1A74[14] = {
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAY, 0),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_TRAZ, 0),
	    0x00000000,  /* 0.0f */
	    0x43F3C000,  /* 487.5f */
	aobjEvent32SetVal(AOBJ_FLAG_ROTX, 44),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 80),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAY, 6),
	    0x44024EF4,  /* 521.233642578125f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAY, 6),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32End(),
};

/* @ 0x1AAC */
u32 dStagePupupuFile3_AnimJoint_0x1AAC[26] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAZ, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAY, 0),
	    0x43834000,  /* 262.5f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAX, 0),
	    0x43EC4000,  /* 472.5f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(AOBJ_FLAG_SCAX, 44),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 81),
	    0x43EC4000,  /* 472.5f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAY, 5),
	    0x43A14000,  /* 322.5f */
	    0x41092492,  /* 8.571428298950195f */
	    0x3F4A3D71,  /* 0.7900000214576721f */
	    0xBCF5C28D,  /* -0.029999995604157448f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAY, 2),
	    0x43A14000,  /* 322.5f */
	    0xC1092492,  /* -8.571428298950195f */
	    0x3F4A3D71,  /* 0.7900000214576721f */
	    0x3CF5C28E,  /* 0.029999997466802597f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAY, 5),
	    0x43834000,  /* 262.5f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

/* @ 0x1B14 */
u32 dStagePupupuFile3_AnimJoint_0x1B14[16] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAXYZ, 0),
	    0xC34A8000,  /* -202.5f */
	    0x439D8000,  /* 315.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43D20000,  /* 420.0f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 80),
	    0x43D20000,  /* 420.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 81),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

/* @ 0x1B54 */
u32 dStagePupupuFile3_AnimJoint_0x1B54[16] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAXYZ, 0),
	    0x434A8000,  /* 202.5f */
	    0x439D8000,  /* 315.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43D20000,  /* 420.0f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 499),
	    0x43D20000,  /* 420.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 500),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

/* @ 0x1B94 */
AObjEvent32 **dStagePupupuFile3_mobjlink_0x1B94[9] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)dStagePupupuFile3_mobjlink_0x1BD4,
	NULL,
	NULL,
};

/* @ 0x1BB8 */
u32 dStagePupupuFile3_AnimJoint_0x1BB8[7] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 91),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTX, 1),
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

/* @ 0x1BD4 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x1BD4[9] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1BB8,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1BF8,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1C0C,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1C48,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1C98,
};

/* @ 0x1BF8 */
u32 dStagePupupuFile3_AnimJoint_0x1BF8[5] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 0),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 25),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32End(),
};

/* @ 0x1C0C */
u32 dStagePupupuFile3_AnimJoint_0x1C0C[15] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAY, 0),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAY, 336),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAY, 246),
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 350),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 180),
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32Cmd12(0, 136),
	aobjEvent32Wait(25),
	aobjEvent32End(),
};

/* @ 0x1C48 */
u32 dStagePupupuFile3_AnimJoint_0x1C48[20] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0xC34A8000,  /* -202.5f */
	    0x439D8000,  /* 315.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAXYZ, 0),
	    0x43D20000,  /* 420.0f */
	    0xBFBE5D84,  /* -1.4872288703918457f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBB41E43D,  /* -0.002958550350740552f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBB41E43D,  /* -0.002958550350740552f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBB41E43D,  /* -0.002958550350740552f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAXYZ, 135),
	    0x43D20000,  /* 420.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAXYZ, 45),
	aobjEvent32Wait(25),
	aobjEvent32End(),
};

/* @ 0x1C98 */
u32 dStagePupupuFile3_AnimJoint_0x1C98[18] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43D20000,  /* 420.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAXYZ, 0),
	    0x434A8000,  /* 202.5f */
	    0x439D8000,  /* 315.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 499),
	    0x43D20000,  /* 420.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 329),
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 500),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_SCAXYZ, 329),
	aobjEvent32Wait(25),
	aobjEvent32End(),
};

/* @ 0x1CE0 */
AObjEvent32 **dStagePupupuFile3_mobjlink_0x1CE0[6] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)dStagePupupuFile3_mobjlink_0x1D20,
	NULL,
	NULL,
};

/* @ 0x1CF8 */
u32 dStagePupupuFile3_AnimJoint_0x1CF8[10] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 63),
	    0x40000000,  /* 2.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTX, 50),
	aobjEvent32Wait(13),
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 24),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

/* @ 0x1D20 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x1D20[10] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1CF8,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1D48,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1D5C,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1D98,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1DE8,
};

/* @ 0x1D48 */
u32 dStagePupupuFile3_AnimJoint_0x1D48[5] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 0),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 30),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32End(),
};

/* @ 0x1D5C */
u32 dStagePupupuFile3_AnimJoint_0x1D5C[15] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAY, 0),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAY, 336),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAY, 271),
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 350),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 205),
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32Cmd12(0, 161),
	aobjEvent32Wait(30),
	aobjEvent32End(),
};

/* @ 0x1D98 */
u32 dStagePupupuFile3_AnimJoint_0x1D98[20] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0xC34A8000,  /* -202.5f */
	    0x439D8000,  /* 315.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAXYZ, 0),
	    0x43D20000,  /* 420.0f */
	    0xBFBE5D84,  /* -1.4872288703918457f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBB41E43D,  /* -0.002958550350740552f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBB41E43D,  /* -0.002958550350740552f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBB41E43D,  /* -0.002958550350740552f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAXYZ, 135),
	    0x43D20000,  /* 420.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAXYZ, 70),
	aobjEvent32Wait(30),
	aobjEvent32End(),
};

/* @ 0x1DE8 */
u32 dStagePupupuFile3_AnimJoint_0x1DE8[18] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43D20000,  /* 420.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAXYZ, 0),
	    0x434A8000,  /* 202.5f */
	    0x439D8000,  /* 315.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 499),
	    0x43D20000,  /* 420.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 354),
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 500),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_SCAXYZ, 354),
	aobjEvent32Wait(30),
	aobjEvent32End(),
};

/* @ 0x1E30 */
AObjEvent32 **dStagePupupuFile3_mobjlink_0x1E30[6] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)dStagePupupuFile3_mobjlink_0x1E70,
	NULL,
	NULL,
};

/* @ 0x1E48 */
u32 dStagePupupuFile3_AnimJoint_0x1E48[10] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 24),
	    0x00000000,  /* 0.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTX, 12),
	aobjEvent32Wait(12),
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 36),
	    0x40000000,  /* 2.0f */
	aobjEvent32Wait(18),
	aobjEvent32End(),
};

/* @ 0x1E70 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x1E70[10] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1E48,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1E98,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1EAC,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x1F3C,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2004,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x202C,
};

/* @ 0x1E98 */
u32 dStagePupupuFile3_AnimJoint_0x1E98[5] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTY, 0),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32Cmd12(0, 54),
	aobjEvent32Wait(54),
	aobjEvent32End(),
};

/* @ 0x1EAC */
u32 dStagePupupuFile3_AnimJoint_0x1EAC[36] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 350),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 314),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_TRAY, 0),
	    0x00000000,  /* 0.0f */
	    0xBB5E596C,  /* -0.0033927811309695244f */
	    0x43FF0000,  /* 510.0f */
	    0x3F15DA7F,  /* 0.5853652358055115f */
	aobjEvent32SetValRate(AOBJ_FLAG_ROTX, 26),
	    0xBD84410B,  /* -0.06457718461751938f */
	    0xB7500A62,  /* -1.2400183550198562e-05f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAY, 21),
	    0x44058000,  /* 534.0f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAY, 18),
	    0x43FF0000,  /* 510.0f */
	    0xBD8AD8EA,  /* -0.06779654324054718f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(AOBJ_FLAG_ROTX, 21),
	    0x00000000,  /* 0.0f */
	    0x3BA39BC0,  /* 0.004992932081222534f */
	aobjEvent32Wait(10),
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAZ, 0),
	    0x3F8EF34D,  /* 1.1167999505996704f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAZ, 57),
	    0x43FF4582,  /* 510.54302978515625f */
	aobjEvent32Wait(3),
	aobjEvent32SetVal(AOBJ_FLAG_TRAY, 15),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32Wait(8),
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTX, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTX, 6),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

/* @ 0x1F3C */
u32 dStagePupupuFile3_AnimJoint_0x1F3C[50] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43EC4000,  /* 472.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 208),
	    0x43EC4000,  /* 472.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 171),
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_SCAZ, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAY, 0),
	    0x43834000,  /* 262.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAY, 74),
	    0x43834000,  /* 262.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAY, 20),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 0),
	    0x3F800000,  /* 1.0f */
	    0x3EE8F217,  /* 0.4549719989299774f */
	    0x3F800000,  /* 1.0f */
	    0x3CEFCDF2,  /* 0.029273007065057755f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_SCAY, 19),
	    0x3F9DB963,  /* 1.2322200536727905f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_SCAX, 10),
	    0x40400000,  /* 3.0f */
	    0x3CA70710,  /* 0.02038910984992981f */
	aobjEvent32SetValRate(AOBJ_FLAG_SCAX, 18),
	    0x40400000,  /* 3.0f */
	    0xBCA7CD11,  /* -0.020483525469899178f */
	aobjEvent32Wait(9),
	aobjEvent32SetValRate(AOBJ_FLAG_SCAY, 19),
	    0x3F800000,  /* 1.0f */
	    0xBD11C6FF,  /* -0.035590168088674545f */
	aobjEvent32Wait(9),
	aobjEvent32SetValRate(AOBJ_FLAG_SCAX, 10),
	    0x3F800000,  /* 1.0f */
	    0xBD80E8ED,  /* -0.06294427067041397f */
	aobjEvent32Wait(9),
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAZ, 0),
	    0x4087C371,  /* 4.242607593536377f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 17),
	    0x440AC000,  /* 555.0f */
	    0x3D5802C1,  /* 0.052737001329660416f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 15),
	    0x3F333333,  /* 0.699999988079071f */
	    0xBA602D43,  /* -0.0008551666396670043f */
	    0x3EC44674,  /* 0.3833500146865845f */
	    0xBB701489,  /* -0.0036633333656936884f */
	aobjEvent32SetVal(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 175),
	    0x3F333333,  /* 0.699999988079071f */
	    0x3EC44674,  /* 0.3833500146865845f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

/* @ 0x2004 */
u32 dStagePupupuFile3_AnimJoint_0x2004[10] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAXYZ, 0),
	    0xC34A8000,  /* -202.5f */
	    0x439D8000,  /* 315.0f */
	    0x43D20000,  /* 420.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Cmd12(0, 44),
	aobjEvent32Wait(54),
	aobjEvent32End(),
};

/* @ 0x202C */
u32 dStagePupupuFile3_AnimJoint_0x202C[32] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43D20000,  /* 420.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAXYZ, 0),
	    0x434A8000,  /* 202.5f */
	    0x439D8000,  /* 315.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 499),
	    0x43D20000,  /* 420.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 463),
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 500),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_SCAXYZ, 463),
	aobjEvent32Wait(36),
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAZ, 0),
	    0x3DEE9A17,  /* 0.11650484055280685f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 16),
	    0x43F00000,  /* 480.0f */
	    0x3EA0D042,  /* 0.3140888810157776f */
	aobjEvent32Wait(1),
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 203),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(15),
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 173),
	    0x43EFAE70,  /* 479.36279296875f */
	aobjEvent32Wait(2),
	aobjEvent32End(),
};

/* @ 0x20AC */
AObjEvent32 **dStagePupupuFile3_mobjlink_0x20AC[7] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)dStagePupupuFile3_mobjlink_0x20F0,
	NULL,
	NULL,
};

/* @ 0x20C8 */
u32 dStagePupupuFile3_AnimJoint_0x20C8[10] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 107),
	    0x40400000,  /* 3.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTX, 61),
	aobjEvent32Wait(46),
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 188),
	    0x40000000,  /* 2.0f */
	aobjEvent32Wait(8),
	aobjEvent32End(),
};

/* @ 0x20F0 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x20F0[10] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x20C8,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2118,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x212C,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2164,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x21F0,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2218,
};

/* @ 0x2118 */
u32 dStagePupupuFile3_AnimJoint_0x2118[5] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTY, 0),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32Cmd12(0, 282),
	aobjEvent32Wait(20),
	aobjEvent32End(),
};

/* @ 0x212C */
u32 dStagePupupuFile3_AnimJoint_0x212C[14] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAY, 0),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAY, 209),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAY, 189),
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 143),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 123),
	aobjEvent32Wait(20),
	aobjEvent32End(),
};

/* @ 0x2164 */
u32 dStagePupupuFile3_AnimJoint_0x2164[35] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_SCAZ, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAY, 0),
	    0x43834000,  /* 262.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAY, 268),
	    0x43834000,  /* 262.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAY, 248),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAZ, 0),
	    0x440AC000,  /* 555.0f */
	    0x3D5802C1,  /* 0.052737001329660416f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 177),
	    0x440AC000,  /* 555.0f */
	    0xBD543ED6,  /* -0.05181773751974106f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 174),
	aobjEvent32SetValBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 0),
	    0x3F333333,  /* 0.699999988079071f */
	    0x3EC44674,  /* 0.3833500146865845f */
	aobjEvent32SetVal(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 10),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 17),
	    0x43EC4000,  /* 472.5f */
	    0xBF12AAAA,  /* -0.5729166269302368f */
	aobjEvent32Wait(7),
	aobjEvent32SetTargetRate(AOBJ_FLAG_SCAX, 0),
	    0x3B05BF39,  /* 0.002040816703811288f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_SCAX, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_SCAY, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 9),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

/* @ 0x21F0 */
u32 dStagePupupuFile3_AnimJoint_0x21F0[10] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAXYZ, 0),
	    0xC34A8000,  /* -202.5f */
	    0x439D8000,  /* 315.0f */
	    0x43D20000,  /* 420.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Cmd12(0, 272),
	aobjEvent32Wait(20),
	aobjEvent32End(),
};

/* @ 0x2218 */
u32 dStagePupupuFile3_AnimJoint_0x2218[31] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_SCAXYZ, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 203),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Cmd12(AOBJ_FLAG_SCAXYZ, 191),
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0x434A8000,  /* 202.5f */
	    0x439D8000,  /* 315.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43EFAE70,  /* 479.36279296875f */
	    0xBEA3677E,  /* -0.3191489577293396f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 15),
	    0x43D20000,  /* 420.0f */
	    0xBFBE5D84,  /* -1.4872288703918457f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 3),
	aobjEvent32Wait(12),
	aobjEvent32SetTargetRate(AOBJ_FLAG_SCAXYZ, 0),
	    0xBB41E43D,  /* -0.002958550350740552f */
	    0xBB41E43D,  /* -0.002958550350740552f */
	    0xBB41E43D,  /* -0.002958550350740552f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAXYZ, 135),
	    0x43D20000,  /* 420.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(8),
	aobjEvent32End(),
};

/* @ 0x2294 */
AObjEvent32 **dStagePupupuFile3_mobjlink_0x2294[9] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)dStagePupupuFile3_mobjlink_0x22E0,
	NULL,
	NULL,
};

/* @ 0x22B8 */
u32 dStagePupupuFile3_AnimJoint_0x22B8[10] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 188),
	    0x40000000,  /* 2.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTX, 182),
	aobjEvent32Wait(6),
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 102),
	    0x40000000,  /* 2.0f */
	aobjEvent32Wait(14),
	aobjEvent32End(),
};

/* @ 0x22E0 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x22E0[10] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x22B8,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2308,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2324,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x23B0,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2478,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x24F8,
};

/* @ 0x2308 */
u32 dStagePupupuFile3_AnimJoint_0x2308[7] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 0),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32SetVal(AOBJ_FLAG_ROTY, 330),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTY, 45),
	aobjEvent32Wait(54),
	aobjEvent32End(),
};

/* @ 0x2324 */
u32 dStagePupupuFile3_AnimJoint_0x2324[35] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 80),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 44),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_TRAY, 0),
	    0x00000000,  /* 0.0f */
	    0xBB5E596C,  /* -0.0033927811309695244f */
	    0x43FF0000,  /* 510.0f */
	    0x3F15DA7F,  /* 0.5853652358055115f */
	aobjEvent32SetValRate(AOBJ_FLAG_ROTX, 26),
	    0xBD84410B,  /* -0.06457718461751938f */
	    0xB7500A62,  /* -1.2400183550198562e-05f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAY, 21),
	    0x44058000,  /* 534.0f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAY, 18),
	    0x43FF0000,  /* 510.0f */
	    0xBD8AD8EA,  /* -0.06779654324054718f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(AOBJ_FLAG_ROTX, 21),
	    0x00000000,  /* 0.0f */
	    0x3BA39BC0,  /* 0.004992932081222534f */
	aobjEvent32Wait(10),
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAZ, 0),
	    0x3F8EF34D,  /* 1.1167999505996704f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAZ, 57),
	    0x43FF4582,  /* 510.54302978515625f */
	aobjEvent32Wait(3),
	aobjEvent32SetVal(AOBJ_FLAG_TRAY, 336),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32Wait(8),
	aobjEvent32SetVal(AOBJ_FLAG_ROTX, 102),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(7),
	aobjEvent32End(),
};

/* @ 0x23B0 */
u32 dStagePupupuFile3_AnimJoint_0x23B0[50] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43EC4000,  /* 472.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 81),
	    0x43EC4000,  /* 472.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 44),
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAY, 0),
	    0x43834000,  /* 262.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAY, 395),
	    0x43834000,  /* 262.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAY, 20),
	aobjEvent32SetValRate(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 0),
	    0x3F800000,  /* 1.0f */
	    0x3EE8F217,  /* 0.4549719989299774f */
	    0x3F800000,  /* 1.0f */
	    0x3CEFCDF2,  /* 0.029273007065057755f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_SCAZ, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_SCAY, 19),
	    0x3F9DB963,  /* 1.2322200536727905f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_SCAX, 10),
	    0x40400000,  /* 3.0f */
	    0x3CA70710,  /* 0.02038910984992981f */
	aobjEvent32SetValRate(AOBJ_FLAG_SCAX, 18),
	    0x40400000,  /* 3.0f */
	    0xBCA7CD11,  /* -0.020483525469899178f */
	aobjEvent32Wait(9),
	aobjEvent32SetValRate(AOBJ_FLAG_SCAY, 19),
	    0x3F800000,  /* 1.0f */
	    0xBD11C6FF,  /* -0.035590168088674545f */
	aobjEvent32Wait(9),
	aobjEvent32SetValRate(AOBJ_FLAG_SCAX, 10),
	    0x3F800000,  /* 1.0f */
	    0xBD80E8ED,  /* -0.06294427067041397f */
	aobjEvent32Wait(9),
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAZ, 0),
	    0x4087C371,  /* 4.242607593536377f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 17),
	    0x440AC000,  /* 555.0f */
	    0x3D5802C1,  /* 0.052737001329660416f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 15),
	    0x3F333333,  /* 0.699999988079071f */
	    0xBA602D43,  /* -0.0008551666396670043f */
	    0x3EC44674,  /* 0.3833500146865845f */
	    0xBB701489,  /* -0.0036633333656936884f */
	aobjEvent32SetVal(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 175),
	    0x3F333333,  /* 0.699999988079071f */
	    0x3EC44674,  /* 0.3833500146865845f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

/* @ 0x2478 */
u32 dStagePupupuFile3_AnimJoint_0x2478[32] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43D20000,  /* 420.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAXYZ, 0),
	    0xC34A8000,  /* -202.5f */
	    0x439D8000,  /* 315.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 80),
	    0x43D20000,  /* 420.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 44),
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 81),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_SCAXYZ, 44),
	aobjEvent32Wait(36),
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAZ, 0),
	    0x3F200000,  /* 0.625f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 16),
	    0x43F00000,  /* 480.0f */
	    0x3EA0D041,  /* 0.3140888512134552f */
	aobjEvent32Wait(1),
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 203),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(15),
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 173),
	    0x43EFAE70,  /* 479.36279296875f */
	aobjEvent32Wait(2),
	aobjEvent32End(),
};

/* @ 0x24F8 */
u32 dStagePupupuFile3_AnimJoint_0x24F8[18] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43D20000,  /* 420.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAXYZ, 0),
	    0x434A8000,  /* 202.5f */
	    0x439D8000,  /* 315.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 499),
	    0x43D20000,  /* 420.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 44),
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 500),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_SCAXYZ, 44),
	aobjEvent32Wait(54),
	aobjEvent32End(),
};

/* @ 0x2540 */
AObjEvent32 **dStagePupupuFile3_mobjlink_0x2540[6] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)dStagePupupuFile3_mobjlink_0x2580,
	NULL,
	NULL,
};

/* @ 0x2558 */
u32 dStagePupupuFile3_AnimJoint_0x2558[10] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 91),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTX, 45),
	aobjEvent32Wait(46),
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 189),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(8),
	aobjEvent32End(),
};

/* @ 0x2580 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x2580[10] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2558,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x25A8,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x25C4,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2600,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x267C,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x26F8,
};

/* @ 0x25A8 */
u32 dStagePupupuFile3_AnimJoint_0x25A8[7] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_ROTY, 0),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32SetVal(AOBJ_FLAG_ROTY, 330),
	    0x3F1C61AA,  /* 0.6108652353286743f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTY, 273),
	aobjEvent32Wait(20),
	aobjEvent32End(),
};

/* @ 0x25C4 */
u32 dStagePupupuFile3_AnimJoint_0x25C4[15] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAY, 0),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAY, 336),
	    0x43FF0000,  /* 510.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAY, 189),
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 350),
	    0x43F3C000,  /* 487.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 123),
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32Cmd12(0, 79),
	aobjEvent32Wait(20),
	aobjEvent32End(),
};

/* @ 0x2600 */
u32 dStagePupupuFile3_AnimJoint_0x2600[31] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAY, 0),
	    0x43834000,  /* 262.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAY, 395),
	    0x43834000,  /* 262.5f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAY, 248),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAZ, 0),
	    0x440AC000,  /* 555.0f */
	    0x3D5802C1,  /* 0.052737001329660416f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 177),
	    0x440AC000,  /* 555.0f */
	    0xBD543ED6,  /* -0.05181773751974106f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 174),
	aobjEvent32SetVal(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 0),
	    0x3F333333,  /* 0.699999988079071f */
	    0x3EC44674,  /* 0.3833500146865845f */
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAZ, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 10),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 17),
	    0x43EC4000,  /* 472.5f */
	    0xBEBBBBBA,  /* -0.36666661500930786f */
	aobjEvent32Wait(7),
	aobjEvent32SetVal(AOBJ_FLAG_SCAX, 136),
	    0x3F80002D,  /* 1.0000053644180298f */
	aobjEvent32SetVal(AOBJ_FLAG_SCAY, 137),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(10),
	aobjEvent32End(),
};

/* @ 0x267C */
u32 dStagePupupuFile3_AnimJoint_0x267C[31] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_SCAXYZ, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 203),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Cmd12(AOBJ_FLAG_SCAXYZ, 191),
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0xC34A8000,  /* -202.5f */
	    0x439D8000,  /* 315.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43EFAE70,  /* 479.36279296875f */
	    0xBEA3677E,  /* -0.3191489577293396f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 15),
	    0x43D20000,  /* 420.0f */
	    0xBFBE5D84,  /* -1.4872288703918457f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 3),
	aobjEvent32Wait(12),
	aobjEvent32SetTargetRate(AOBJ_FLAG_SCAXYZ, 0),
	    0xBB41E43D,  /* -0.002958550350740552f */
	    0xBB41E43D,  /* -0.002958550350740552f */
	    0xBB41E43D,  /* -0.002958550350740552f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAXYZ, 135),
	    0x43D20000,  /* 420.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(8),
	aobjEvent32End(),
};

/* @ 0x26F8 */
u32 dStagePupupuFile3_AnimJoint_0x26F8[18] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 0),
	    0x43D20000,  /* 420.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY | AOBJ_FLAG_SCAXYZ, 0),
	    0x434A8000,  /* 202.5f */
	    0x439D8000,  /* 315.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAZ, 499),
	    0x43D20000,  /* 420.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 272),
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAXYZ, 500),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_SCAXYZ, 272),
	aobjEvent32Wait(20),
	aobjEvent32End(),
};

/* @ 0x2740 */
AObjEvent32 **dStagePupupuFile3_mobjlink_0x2740[6] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)dStagePupupuFile3_mobjlink_0x2780,
	NULL,
	NULL,
};

/* @ 0x2758 */
u32 dStagePupupuFile3_AnimJoint_0x2758[10] = {
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 189),
	    0x00000000,  /* 0.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_ROTX, 182),
	aobjEvent32Wait(7),
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 63),
	    0x40000000,  /* 2.0f */
	aobjEvent32Wait(13),
	aobjEvent32End(),
};

/* @ 0x2780 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x2780[4] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2758,
	NULL,
	NULL,
	NULL,
};

/* @ 0x2790 */
Vtx dStagePupupuFile3_Vtx_0x2790[3] = {
	#include <StagePupupuFile3/Vtx_0x2790.vtx.inc.c>
};

/* @ 0x27C0 */
Vtx dStagePupupuFile3_Vtx_0x27C0[2] = {
	#include <StagePupupuFile3/Vtx_0x27C0.vtx.inc.c>
};

/* @ 0x27E0 */
Vtx dStagePupupuFile3_Vtx_0x27E0[3] = {
	#include <StagePupupuFile3/Vtx_0x27E0.vtx.inc.c>
};

/* @ 0x2810 */
Vtx dStagePupupuFile3_Vtx_0x2810[2] = {
	#include <StagePupupuFile3/Vtx_0x2810.vtx.inc.c>
};

/* @ 0x2830 */
Gfx dStagePupupuFile3_DL_0x2830[10] = {
	#include <StagePupupuFile3/DL_0x2830.dl.inc.c>
};

/* @ 0x2880 */
Gfx dStagePupupuFile3_DL_0x2880[6] = {
	#include <StagePupupuFile3/DL_0x2880.dl.inc.c>
};

/* @ 0x28B0 */
Gfx dStagePupupuFile3_DL_0x28B0[21] = {
	#include <StagePupupuFile3/DL_0x28B0.dl.inc.c>
};

/* @ 0x2958 */
Gfx dStagePupupuFile3_DL_0x2958[10] = {
	#include <StagePupupuFile3/DL_0x2958.dl.inc.c>
};

/* @ 0x29A8 */
Gfx dStagePupupuFile3_DL_0x29A8[27] = {
	#include <StagePupupuFile3/DL_0x29A8.dl.inc.c>
};

/* @ 0x2A80 */
DObjDesc dStagePupupuFile3_DObjDesc_0x2A80[8] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { -1185.0f, 0.0f, -304.39617919921875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dStagePupupuFile3_DL_0x2830, { 0.0f, -37.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void *)dStagePupupuFile3_DL_0x28B0, { 0.0f, 172.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 600.0f, 0.0f, -251.8961944580078f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dStagePupupuFile3_DL_0x2958, { 0.0f, -37.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void *)dStagePupupuFile3_DL_0x29A8, { 0.0f, 172.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);
/* @ 0x2BEC */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x2BEC[4] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2BFC,
	NULL,
	NULL,
	NULL,
};

/* @ 0x2BFC */
u32 dStagePupupuFile3_AnimJoint_0x2BFC[12] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 16),
	    0xC3340000,  /* -180.0f */
	    0xC0CDB6CD,  /* -6.428564548492432f */
	    0x42D20000,  /* 105.0f */
	    0xBFE49239,  /* -1.7857123613357544f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0xC3070000,  /* -135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32End(),
};

/* @ 0x2C2C */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x2C2C[8] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2C4C,
	NULL,
	NULL,
	NULL,
};

/* @ 0x2C4C */
u32 dStagePupupuFile3_AnimJoint_0x2C4C[11] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0xC3070000,  /* -135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0xC3340000,  /* -180.0f */
	    0x42D20000,  /* 105.0f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0xC3070000,  /* -135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStagePupupuFile3_AnimJoint_0x2C4C,
};

/* @ 0x2C78 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x2C78[9] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2C9C,
	NULL,
	NULL,
	NULL,
};

/* @ 0x2C9C */
u32 dStagePupupuFile3_AnimJoint_0x2C9C[12] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0xC3070000,  /* -135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0xC3340000,  /* -180.0f */
	    0x40CDB6CD,  /* 6.428564548492432f */
	    0x42D20000,  /* 105.0f */
	    0x3FE49239,  /* 1.7857123613357544f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 16),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32End(),
};

/* @ 0x2CCC */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x2CCC[8] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2CEC,
};

/* @ 0x2CEC */
u32 dStagePupupuFile3_AnimJoint_0x2CEC[12] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 16),
	    0x43340000,  /* 180.0f */
	    0x40CDB6DB,  /* 6.4285712242126465f */
	    0x42D20000,  /* 105.0f */
	    0xBFE49249,  /* -1.7857142686843872f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43070000,  /* 135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32End(),
};

/* @ 0x2D1C */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x2D1C[8] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2D3C,
};

/* @ 0x2D3C */
u32 dStagePupupuFile3_AnimJoint_0x2D3C[11] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0x43070000,  /* 135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43340000,  /* 180.0f */
	    0x42D20000,  /* 105.0f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43070000,  /* 135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStagePupupuFile3_AnimJoint_0x2D3C,
};

/* @ 0x2D68 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x2D68[9] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x2D8C,
};

/* @ 0x2D8C */
u32 dStagePupupuFile3_AnimJoint_0x2D8C[12] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0x43070000,  /* 135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43340000,  /* 180.0f */
	    0xC0CDB6DF,  /* -6.428573131561279f */
	    0x42D20000,  /* 105.0f */
	    0x3FE49239,  /* 1.7857123613357544f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 16),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32End(),
};

PAD(4);
/* @ 0x2DC0 */
Vtx dStagePupupuFile3_Vtx_0x2DC0[3] = {
	#include <StagePupupuFile3/Vtx_0x2DC0.vtx.inc.c>
};

/* @ 0x2DF0 */
Vtx dStagePupupuFile3_Vtx_0x2DF0[2] = {
	#include <StagePupupuFile3/Vtx_0x2DF0.vtx.inc.c>
};

/* @ 0x2E10 */
Vtx dStagePupupuFile3_Vtx_0x2E10[3] = {
	#include <StagePupupuFile3/Vtx_0x2E10.vtx.inc.c>
};

/* @ 0x2E40 */
Vtx dStagePupupuFile3_Vtx_0x2E40[2] = {
	#include <StagePupupuFile3/Vtx_0x2E40.vtx.inc.c>
};

/* @ 0x2E60 */
Vtx dStagePupupuFile3_Vtx_0x2E60[3] = {
	#include <StagePupupuFile3/Vtx_0x2E60.vtx.inc.c>
};

/* @ 0x2E90 */
Vtx dStagePupupuFile3_Vtx_0x2E90[2] = {
	#include <StagePupupuFile3/Vtx_0x2E90.vtx.inc.c>
};

/* @ 0x2EB0 */
Gfx dStagePupupuFile3_DL_0x2EB0[10] = {
	#include <StagePupupuFile3/DL_0x2EB0.dl.inc.c>
};

/* @ 0x2F00 */
Gfx dStagePupupuFile3_DL_0x2F00[6] = {
	#include <StagePupupuFile3/DL_0x2F00.dl.inc.c>
};

/* @ 0x2F30 */
Gfx dStagePupupuFile3_DL_0x2F30[21] = {
	#include <StagePupupuFile3/DL_0x2F30.dl.inc.c>
};

/* @ 0x2FD8 */
Gfx dStagePupupuFile3_DL_0x2FD8[10] = {
	#include <StagePupupuFile3/DL_0x2FD8.dl.inc.c>
};

/* @ 0x3028 */
Gfx dStagePupupuFile3_DL_0x3028[21] = {
	#include <StagePupupuFile3/DL_0x3028.dl.inc.c>
};

/* @ 0x30D0 */
Gfx dStagePupupuFile3_DL_0x30D0[10] = {
	#include <StagePupupuFile3/DL_0x30D0.dl.inc.c>
};

/* @ 0x3120 */
Gfx dStagePupupuFile3_DL_0x3120[27] = {
	#include <StagePupupuFile3/DL_0x3120.dl.inc.c>
};

/* @ 0x31F8 */
DObjDesc dStagePupupuFile3_DObjDesc_0x31F8[11] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.9999989867210388f, 1.0f, 1.0f } },
	{ 1, NULL, { 967.5f, 0.0f, 408.10382080078125f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dStagePupupuFile3_DL_0x2EB0, { 0.0f, -37.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void *)dStagePupupuFile3_DL_0x2F30, { 0.0f, 172.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { -1545.0f, 0.0f, 490.60382080078125f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dStagePupupuFile3_DL_0x2FD8, { 0.0f, -37.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void *)dStagePupupuFile3_DL_0x3028, { 0.0f, 172.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 1312.5f, 0.0f, 805.6038208007812f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void *)dStagePupupuFile3_DL_0x30D0, { 0.0f, -37.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void *)dStagePupupuFile3_DL_0x3120, { 0.0f, 172.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(28);
/* @ 0x33F8 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x33F8[4] = {
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x3408,
	NULL,
	NULL,
	NULL,
};

/* @ 0x3408 */
u32 dStagePupupuFile3_AnimJoint_0x3408[15] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 16),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 16),
	    0xC3340000,  /* -180.0f */
	    0xC0CDB6CD,  /* -6.428564548492432f */
	    0x42D20000,  /* 105.0f */
	    0xBFE49239,  /* -1.7857123613357544f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0xC3070000,  /* -135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32End(),
};

/* @ 0x3444 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x3444[13] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x3478,
	NULL,
	NULL,
	NULL,
};

/* @ 0x3478 */
u32 dStagePupupuFile3_AnimJoint_0x3478[11] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0xC3070000,  /* -135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0xC3340000,  /* -180.0f */
	    0x42D20000,  /* 105.0f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0xC3070000,  /* -135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStagePupupuFile3_AnimJoint_0x3478,
};

/* @ 0x34A4 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x34A4[13] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x34D8,
	NULL,
	NULL,
	NULL,
};

/* @ 0x34D8 */
u32 dStagePupupuFile3_AnimJoint_0x34D8[12] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0xC3070000,  /* -135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0xC3340000,  /* -180.0f */
	    0x40CDB6CD,  /* 6.428564548492432f */
	    0x42D20000,  /* 105.0f */
	    0x3FE49239,  /* 1.7857123613357544f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 16),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32End(),
};

/* @ 0x3508 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x3508[12] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x3538,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x3578,
};

/* @ 0x3538 */
u32 dStagePupupuFile3_AnimJoint_0x3538[16] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 16),
	    0x43340000,  /* 180.0f */
	    0x40CDB6DF,  /* 6.428573131561279f */
	    0x42D20000,  /* 105.0f */
	    0xBFE4924D,  /* -1.7857147455215454f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43070000,  /* 135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43340000,  /* 180.0f */
	    0x42D20000,  /* 105.0f */
	aobjEvent32Wait(4),
	aobjEvent32End(),
};

/* @ 0x3578 */
u32 dStagePupupuFile3_AnimJoint_0x3578[15] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 4),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 16),
	    0x43340000,  /* 180.0f */
	    0x40CDB6DB,  /* 6.4285712242126465f */
	    0x42D20000,  /* 105.0f */
	    0xBFE49249,  /* -1.7857142686843872f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43070000,  /* 135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32End(),
};

/* @ 0x35B4 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x35B4[13] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x35E8,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x3614,
};

/* @ 0x35E8 */
u32 dStagePupupuFile3_AnimJoint_0x35E8[11] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0x43070000,  /* 135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43340000,  /* 180.0f */
	    0x42D20000,  /* 105.0f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43070000,  /* 135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStagePupupuFile3_AnimJoint_0x35E8,
};

/* @ 0x3614 */
u32 dStagePupupuFile3_AnimJoint_0x3614[17] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0x43070000,  /* 135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43340000,  /* 180.0f */
	    0x42D20000,  /* 105.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 2),
	aobjEvent32Wait(3),
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43070000,  /* 135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43340000,  /* 180.0f */
	    0x42D20000,  /* 105.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStagePupupuFile3_AnimJoint_0x3614,
};

/* @ 0x3658 */
AObjEvent32 *dStagePupupuFile3_mobjlink_0x3658[12] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x3688,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuFile3_AnimJoint_0x36CC,
};

/* @ 0x3688 */
u32 dStagePupupuFile3_AnimJoint_0x3688[17] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0x43070000,  /* 135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43340000,  /* 180.0f */
	    0xC0CDB6DF,  /* -6.428573131561279f */
	    0x42D20000,  /* 105.0f */
	    0x3FE4924D,  /* 1.7857147455215454f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 4),
	aobjEvent32Wait(1),
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 16),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 4),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32End(),
};

/* @ 0x36CC */
u32 dStagePupupuFile3_AnimJoint_0x36CC[12] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 0),
	    0x43070000,  /* 135.0f */
	    0x43070000,  /* 135.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 5),
	    0x43340000,  /* 180.0f */
	    0xC0CDB6F1,  /* -6.428581714630127f */
	    0x42D20000,  /* 105.0f */
	    0x3FE49262,  /* 1.785717248916626f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 16),
	    0x00000000,  /* 0.0f */
	    0x432C8000,  /* 172.5f */
	aobjEvent32End(),
};
