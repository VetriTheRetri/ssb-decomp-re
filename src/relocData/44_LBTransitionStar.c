/* relocData file 44: LBTransitionStar */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Vtx: data_0x0000 @ 0x0 (307 vertices) */
Vtx dLBTransitionStar_data_0x0000[307] = {
	#include <LBTransitionStar/data_0x0000.vtx.inc.c>
};

/* @ 0x1330, 4384 bytes — Gfx[548] DL */
Gfx dLBTransitionStar_DL_0x1330[548] = {
	#include <LBTransitionStar/DL_0x1330.dl.inc.c>
};

/* DObjDesc: - @ 0x2450 (3 entries) */
DObjDesc dLBTransitionStar_DObjDesc_0x2450[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dLBTransitionStar_DL_0x1330, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x24D4 to 0x2520 (76 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dLBTransitionStar_AnimJoint_0x24DC[];

AObjEvent32 *dLBTransitionStar_AnimJoint_0x24D4[2] = {
	NULL,
	(AObjEvent32 *)dLBTransitionStar_AnimJoint_0x24DC,
};

u32 dLBTransitionStar_AnimJoint_0x24DC[] = {
	aobjEvent32SetValAfter(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x180, 64),
	    0x428C0000,  /* 70.0f */
	    0x40177777,  /* 2.366666555404663f */
	    0x428C0000,  /* 70.0f */
	    0x40177777,  /* 2.366666555404663f */
	aobjEvent32SetValBlock(0x004, 64),
	    0xBFC90FDB,  /* -1.5707963705062866f */
	aobjEvent32End(),
};
