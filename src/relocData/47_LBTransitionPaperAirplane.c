/* relocData file 47: LBTransitionPaperAirplane */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Vtx: Vtx_0x0000_Vtx @ 0x0 (90 vertices) */
Vtx dLBTransitionPaperAirplane_Vtx_0x0000_Vtx[90] = {
	#include <LBTransitionPaperAirplane/Vtx_0x0000.vtx.inc.c>
};

/* @ 0x05A0, 2552 bytes — Gfx[319] DL */
Gfx dLBTransitionPaperAirplane_DL_0x05A0[319] = {
	#include <LBTransitionPaperAirplane/DL_0x05A0.dl.inc.c>
};

/* DObjDesc: - @ 0xF98 (3 entries) */
DObjDesc dLBTransitionPaperAirplane_DObjDesc_0x0F98[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dLBTransitionPaperAirplane_DL_0x05A0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x101C to 0x1050 (52 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dLBTransitionPaperAirplane_AnimJoint_0x1024[];

u32 dLBTransitionPaperAirplane_AnimJoint_0x101C[2] = {
	aobjEvent32End(),
	(u32)dLBTransitionPaperAirplane_AnimJoint_0x1024,
};

u32 dLBTransitionPaperAirplane_AnimJoint_0x1024[] = {
	aobjEvent32SetVal0Rate(0x001, 0),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x006, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValRateBlock(0x001, 64),
	    0xBFCB4BC3,
	    0xBD9F06F2,
	aobjEvent32End(),
};

PAD(8);

