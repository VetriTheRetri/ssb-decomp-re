/* relocData file 46: LBTransitionSudare2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Vtx: gap_0x0000 @ 0x0 (16 vertices) */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Gfx dLBTransitionSudare2_DL_0x1E08[];
extern Vtx dLBTransitionSudare2_Vtx_0x0100_Vtx[];
extern Vtx dLBTransitionSudare2_Vtx_0x1B30_Vtx[];
extern Vtx dLBTransitionSudare2_Vtx_0x1BE0_Vtx[];
extern Vtx dLBTransitionSudare2_Vtx_0x1C80_Vtx[];
extern Vtx dLBTransitionSudare2_Vtx_0x1D20_Vtx[];
extern Vtx dLBTransitionSudare2_gap_0x0000[];
Vtx dLBTransitionSudare2_gap_0x0000[16] = {
	#include <LBTransitionSudare2/gap_0x0000.vtx.inc.c>
};

/* Vtx: Vtx_0x0100_Vtx @ 0x100 (419 vertices) */
Vtx dLBTransitionSudare2_Vtx_0x0100_Vtx[419] = {
	#include <LBTransitionSudare2/Vtx_0x0100.vtx.inc.c>
};

/* Vtx: Vtx_0x1B30_Vtx @ 0x1B30 (11 vertices) */
Vtx dLBTransitionSudare2_Vtx_0x1B30_Vtx[11] = {
	#include <LBTransitionSudare2/Vtx_0x1B30.vtx.inc.c>
};

/* Vtx: Vtx_0x1BE0_Vtx @ 0x1BE0 (10 vertices) */
Vtx dLBTransitionSudare2_Vtx_0x1BE0_Vtx[10] = {
	#include <LBTransitionSudare2/Vtx_0x1BE0.vtx.inc.c>
};

/* Vtx: Vtx_0x1C80_Vtx @ 0x1C80 (10 vertices) */
Vtx dLBTransitionSudare2_Vtx_0x1C80_Vtx[10] = {
	#include <LBTransitionSudare2/Vtx_0x1C80.vtx.inc.c>
};

/* Vtx: Vtx_0x1D20_Vtx @ 0x1D20 (10 vertices) */
Vtx dLBTransitionSudare2_Vtx_0x1D20_Vtx[10] = {
	#include <LBTransitionSudare2/Vtx_0x1D20.vtx.inc.c>
};

/* Raw data from file offset 0x1DC0 to 0x3EA0 (8416 bytes) */
/* gap sub-block @ 0x1DC0 (was gap+0x0, 72 bytes) */
Gfx dLBTransitionSudare2_DL_0x1DC0[9] = {
	#include <LBTransitionSudare2/DL_0x1DC0.dl.inc.c>
};

/* gap sub-block @ 0x1E08 (was gap+0x48, 3952 bytes) */
Gfx dLBTransitionSudare2_DL_0x1E08[494] = {
	#include <LBTransitionSudare2/DL_0x1E08.dl.inc.c>
};

/* gap sub-block @ 0x2D78 (was gap+0xFB8, 4392 bytes) */
Gfx dLBTransitionSudare2_DL_0x2D78[549] = {
	#include <LBTransitionSudare2/DL_0x2D78.dl.inc.c>
};

/* DObjDesc: - @ 0x3EA0 (4 entries) */
DObjDesc dLBTransitionSudare2_DObjDesc_0x3EA0[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dLBTransitionSudare2_DL_0x1DC0, { 3400.0f, 2500.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dLBTransitionSudare2_DL_0x2D78, { -3400.0f, -2500.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x3F50 to 0x3FB0 (96 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dLBTransitionSudare2_AnimJoint_0x3F5C[];
extern u32 dLBTransitionSudare2_AnimJoint_0x3F80[];

AObjEvent32 *dLBTransitionSudare2_AnimJoint_0x3F50[3] = {
	NULL,
	(AObjEvent32 *)dLBTransitionSudare2_AnimJoint_0x3F5C,
	(AObjEvent32 *)dLBTransitionSudare2_AnimJoint_0x3F80,
};

u32 dLBTransitionSudare2_AnimJoint_0x3F5C[] = {
	aobjEvent32SetVal(0x030, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x030, 64),
	    0x45548000,  /* 3400.0f */
	    0x451C4000,  /* 2500.0f */
	aobjEvent32End(),
};

u32 dLBTransitionSudare2_AnimJoint_0x3F80[] = {
	aobjEvent32SetVal(0x030, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x030, 64),
	    0xC5548000,  /* -3400.0f */
	    0xC51C4000,  /* -2500.0f */
	aobjEvent32End(),
};
