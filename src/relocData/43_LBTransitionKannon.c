/* relocData file 43: LBTransitionKannon */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Vtx: Vtx_0x0000_Vtx @ 0x0 (90 vertices) */
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
	{ 1, (void*)((u8*)dLBTransitionKannon_DL_0x0B40 + 0x9F8), { 1500.0f, 0.0f, 0.0f }, { 0.0f, -3.1415929794311523f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x1FB0 to 0x2010 (96 bytes) */
u32 dLBTransitionKannon_AnimJoint_0x1FB0[24] = {
	aobjEvent32End(),
	(u32)((u8*)dLBTransitionKannon_AnimJoint_0x1FB0 + 0xC),
	(u32)((u8*)dLBTransitionKannon_AnimJoint_0x1FB0 + 0x30),
	aobjEvent32SetVal0Rate(0x002, 0),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x005, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValRateBlock(0x002, 64),
	    0x40490FDB,
	    0x3E04918C,
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x002, 0),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x005, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValRateBlock(0x002, 64),
	    0xC0490FDB,
	    0xBE0700FD,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

