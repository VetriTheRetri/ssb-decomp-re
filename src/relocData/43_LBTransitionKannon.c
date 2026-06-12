/* relocData file 43: LBTransitionKannon */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Vtx: Vtx_0x0000_Vtx @ 0x0 (90 vertices) */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Gfx dLBTransitionKannon_DL_0x0B88[];
extern Vtx dLBTransitionKannon_Vtx_0x0000_Vtx[];
extern Vtx dLBTransitionKannon_Vtx_0x05A0_Vtx[];
extern Vtx dLBTransitionKannon_Vtx_0x05E0_Vtx[];
Vtx dLBTransitionKannon_Vtx_0x0000_Vtx[90] = {
	#include <LBTransitionKannon/Vtx_0x0000.vtx.inc.c>
};

/* Vtx: Vtx_0x05A0 @ 0x5A0 (4 vertices) */
Vtx dLBTransitionKannon_Vtx_0x05A0_Vtx[4] = {
	#include <LBTransitionKannon/Vtx_0x05A0.vtx.inc.c>
};

/* Vtx: Vtx_0x05E0_Vtx @ 0x5E0 (86 vertices) */
Vtx dLBTransitionKannon_Vtx_0x05E0_Vtx[86] = {
	#include <LBTransitionKannon/Vtx_0x05E0.vtx.inc.c>
};

/* Raw data from file offset 0x0B40 to 0x1F00 (5056 bytes) */
/* gap sub-block @ 0x0B40 (was gap+0x0, 72 bytes) */
Gfx dLBTransitionKannon_DL_0x0B40[9] = {
	#include <LBTransitionKannon/DL_0x0B40.dl.inc.c>
};

/* gap sub-block @ 0x0B88 (was gap+0x48, 2480 bytes) */
Gfx dLBTransitionKannon_DL_0x0B88[310] = {
	#include <LBTransitionKannon/DL_0x0B88.dl.inc.c>
};

/* gap sub-block @ 0x1538 (was gap+0x9F8, 2504 bytes) */
Gfx dLBTransitionKannon_DL_0x1538[313] = {
	#include <LBTransitionKannon/DL_0x1538.dl.inc.c>
};

/* DObjDesc: - @ 0x1F00 (4 entries) */
DObjDesc dLBTransitionKannon_DObjDesc_0x1F00[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dLBTransitionKannon_DL_0x0B40, { -1500.0f, 0.0f, 0.0f }, { 0.0f, 3.1415929794311523f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dLBTransitionKannon_DL_0x1538, { 1500.0f, 0.0f, 0.0f }, { 0.0f, -3.1415929794311523f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x1FB0 to 0x2010 (96 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dLBTransitionKannon_AnimJoint_0x1FBC[];
extern u32 dLBTransitionKannon_AnimJoint_0x1FE0[];

AObjEvent32 *dLBTransitionKannon_AnimJoint_0x1FB0[3] = {
	NULL,
	(AObjEvent32 *)dLBTransitionKannon_AnimJoint_0x1FBC,
	(AObjEvent32 *)dLBTransitionKannon_AnimJoint_0x1FE0,
};

u32 dLBTransitionKannon_AnimJoint_0x1FBC[] = {
	aobjEvent32SetVal0Rate(AOBJ_FLAG_ROTY, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_ROTZ, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_ROTY, 64),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0x3E04918C,  /* 0.12946146726608276f */
	aobjEvent32End(),
};

u32 dLBTransitionKannon_AnimJoint_0x1FE0[] = {
	aobjEvent32SetVal0Rate(AOBJ_FLAG_ROTY, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_ROTZ, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_ROTY, 64),
	    0xC0490FDB,  /* -3.1415927410125732f */
	    0xBE0700FD,  /* -0.13183970749378204f */
	aobjEvent32End(),
};
