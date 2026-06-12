/* relocData file 154: StageYosterFile3 — Yoshi's Island stage AnimJoint
 * data: DL setup fragments, a DObjDesc joint tree, AObjEvent32 animation
 * table + scripts, an I4 texture, an MObjSub, geometry and a display list.
 * Intern chain recovered via walkRelocChains. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u8 dStageYosterFile3_Tex_0x02B8[];
extern Vtx dStageYosterFile3_Vtx_0x0540[];
extern Vtx dStageYosterFile3_Vtx_0x0560[];

extern u32 dStageYosterFile3_AnimJoint_0x01F0[];
extern u32 dStageYosterFile3_AnimJoint_0x021C[];
extern u32 dStageYosterFile3_AnimJoint_0x0264[];
extern MObjSub *dStageYosterFile3_mobjsub_0x0538[];
extern MObjSub dStageYosterFile3_MObjSub_0x04C0[];
extern u32 dStageYosterFile3_AnimJoint_0x0674[];
extern AObjEvent32 *dStageYosterFile3_mobjlink_0x0688[];
extern u32 dStageYosterFile3_AnimJoint_0x0694[];
extern AObjEvent32 *dStageYosterFile3_mobjlink_0x06A8[];

/* @ 0x0000 — render-setup DL fragment */
/* @dl-prefix: no EndDL by design — engine-run setup/prefix fragment */
Gfx dStageYosterFile3_DL_0x0000[16] = {
	#include <StageYosterFile3/DL_0x0000.dl.inc.c>
};

/* @ 0x0080 — render-setup DL fragment */
/* @dl-prefix: no EndDL by design — engine-run setup/prefix fragment */
Gfx dStageYosterFile3_DL_0x0080[16] = {
	#include <StageYosterFile3/DL_0x0080.dl.inc.c>
};

/* @ 0x0100 — joint tree (5 entries) */
DObjDesc dStageYosterFile3_DObjDesc_0x0100[5] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { -390.0f, -300.00067138671875f, -0.00015199999324977398f }, { 9.999999974752427e-07f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 390.0f, -330.0007019042969f, -0.00013299999409355223f }, { 9.999999974752427e-07f, 0.0f, 0.0f }, { 1.093000054359436f, 1.093000054359436f, 1.0f } },
	{ 1, NULL, { 29.999984741210938f, -390.0007019042969f, 59.99983215332031f }, { 9.999999974752427e-07f, 0.0f, 0.0f }, { 1.093000054359436f, 1.093000054359436f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x01DC, 8 bytes (raw gap) */
PAD(8);

/* @ 0x01E4 — AObjEvent32 animation table */
AObjEvent32 *dStageYosterFile3_AnimJoint_0x01E4[3] = {
	(AObjEvent32 *)dStageYosterFile3_AnimJoint_0x01F0,
	(AObjEvent32 *)dStageYosterFile3_AnimJoint_0x021C,
	(AObjEvent32 *)dStageYosterFile3_AnimJoint_0x0264,
};

/* @ 0x01F0 — AObjEvent32 animation script */
u32 dStageYosterFile3_AnimJoint_0x01F0[11] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 23),
	    0x3F9080F3,  /* 1.1289352178573608f */
	    0x3F9080F3,  /* 1.1289352178573608f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 22),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterFile3_AnimJoint_0x01F0,
};

/* @ 0x021C — AObjEvent32 animation script */
u32 dStageYosterFile3_AnimJoint_0x021C[18] = {
	aobjEvent32SetValRateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 0),
	    0x3F8BE76D,  /* 1.093000054359436f */
	    0x3C080406,  /* 0.008301740512251854f */
	    0x3F8BE76D,  /* 1.093000054359436f */
	    0x3C080406,  /* 0.008301740512251854f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 7),
	    0x3F9080F3,  /* 1.1289352178573608f */
	    0x3F9080F3,  /* 1.1289352178573608f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 23),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 15),
	    0x3F8BE76D,  /* 1.093000054359436f */
	    0x3BF9F44D,  /* 0.007627999875694513f */
	    0x3F8BE76D,  /* 1.093000054359436f */
	    0x3BF9F44D,  /* 0.007627999875694513f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterFile3_AnimJoint_0x021C,
};

/* @ 0x0264 — AObjEvent32 animation script */
u32 dStageYosterFile3_AnimJoint_0x0264[18] = {
	aobjEvent32SetValRateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 0),
	    0x3F8BE76D,  /* 1.093000054359436f */
	    0xBC3B8DCA,  /* -0.011447379365563393f */
	    0x3F8BE76D,  /* 1.093000054359436f */
	    0xBC412490,  /* -0.011788502335548401f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 14),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 23),
	    0x3F9080F3,  /* 1.1289352178573608f */
	    0x3F9080F3,  /* 1.1289352178573608f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY, 8),
	    0x3F8BE76D,  /* 1.093000054359436f */
	    0xBBF9F44D,  /* -0.007627999875694513f */
	    0x3F8BE76D,  /* 1.093000054359436f */
	    0xBBF9F44D,  /* -0.007627999875694513f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYosterFile3_AnimJoint_0x0264,
};

/* @ 0x02AC, 12 bytes (raw gap) */
PAD(12);

/* @ 0x02B8 — I4 texture */
/* @tex fmt=I4 dim=32x32 */
u8 dStageYosterFile3_Tex_0x02B8[512] = {
	#include <StageYosterFile3/Tex_0x02B8.tex.inc.c>
};

/* @ 0x04B8 — MObjSub-list link */
MObjSub **dStageYosterFile3_mobjlink_0x04B8[2] = {
	(MObjSub **)dStageYosterFile3_mobjsub_0x0538,
	NULL,
};

/* @ 0x04C0 — material object sub */
MObjSub dStageYosterFile3_MObjSub_0x04C0[1] = {
	{
		0x0000, 4, 2,
		(void **)NULL,
		0x0020, 0x0000, 0x0040, 0x0040,
		0,
		0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f,
		(void **)NULL,
		0x0200, 4, 0, 0x0020, 0x0020, 0x0040, 0x0040,
		0.0f, 0.0f, 0.0f, 0.0f,
		0x00002205,
		{ { 255, 255, 255, 0 } },
		0, 0, { 0, 0 },
		{ { 0, 0, 255, 255 } },
		{ { 0, 0, 0, 8 } },
		{ { 255, 255, 255, 0 } },
		{ { 38, 38, 38, 0 } },
		0, 0, 0, 0,
	}
};

/* @ 0x0538 — MObjSub-list link */
MObjSub *dStageYosterFile3_mobjsub_0x0538[2] = {
	dStageYosterFile3_MObjSub_0x04C0,
	NULL,
};

/* @ 0x0540 — geometry */
Vtx dStageYosterFile3_Vtx_0x0540[2] = {
	#include <StageYosterFile3/Vtx_0x0540.vtx.inc.c>
};

/* @ 0x0560 — geometry */
Vtx dStageYosterFile3_Vtx_0x0560[2] = {
	#include <StageYosterFile3/Vtx_0x0560.vtx.inc.c>
};

/* @ 0x0580 — display list */
Gfx dStageYosterFile3_DL_0x0580[29] = {
	#include <StageYosterFile3/DL_0x0580.dl.inc.c>
};

/* @ 0x0668 — AObjEvent32 table */
AObjEvent32 **dStageYosterFile3_mobjlink_0x0668[3] = {
	NULL,
	NULL,
	(AObjEvent32 **)dStageYosterFile3_mobjlink_0x0688,
};

/* @ 0x0674 — AObjEvent32 animation script */
u32 dStageYosterFile3_AnimJoint_0x0674[5] = {
	aobjEvent32SetExtValBlock(AOBJ_EXTFLAG_PRIMCOLOR, 0),
	    0xFFFFFF00,  /* RGBA(255, 255, 255, 0) */
	aobjEvent32SetExtValBlock(AOBJ_EXTFLAG_PRIMCOLOR, 100),
	    0xFFFFFFFF,  /* RGBA(255, 255, 255, 255) */
	aobjEvent32End(),
};

/* @ 0x0688 — AObjEvent32 animation table (scripts) */
AObjEvent32 *dStageYosterFile3_mobjlink_0x0688[2] = {
	(AObjEvent32 *)dStageYosterFile3_AnimJoint_0x0674,
	NULL,
};

/* @ 0x0690 — AObjEvent32 sub-table list */
AObjEvent32 **dStageYosterFile3_mobjlink_0x0690[1] = {
	(AObjEvent32 **)dStageYosterFile3_mobjlink_0x06A8,
};

/* @ 0x0694 — AObjEvent32 animation script */
u32 dStageYosterFile3_AnimJoint_0x0694[5] = {
	aobjEvent32SetExtValBlock(AOBJ_EXTFLAG_PRIMCOLOR, 0),
	    0xFFFFFFFF,  /* RGBA(255, 255, 255, 255) */
	aobjEvent32SetExtValBlock(AOBJ_EXTFLAG_PRIMCOLOR, 100),
	    0xFFFFFF00,  /* RGBA(255, 255, 255, 0) */
	aobjEvent32End(),
};

/* @ 0x06A8 — AObjEvent32 table */
AObjEvent32 *dStageYosterFile3_mobjlink_0x06A8[2] = {
	(AObjEvent32 *)dStageYosterFile3_AnimJoint_0x0694,
	NULL,
};
