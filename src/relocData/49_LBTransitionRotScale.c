/* relocData file 49: LBTransitionRotScale */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Raw data from file offset 0x0000 to 0x0F98 (3992 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 64 bytes) */
Vtx dLBTransitionRotScale_gap_0x0000[4] = {
	#include <LBTransitionRotScale/gap_0x0000.vtx.inc.c>
};

/* Vtx: gap_0x0000_sub_0x40 @ 0x40 (86 vertices) */
Vtx dLBTransitionRotScale_gap_0x0000_sub_0x40[86] = {
	#include <LBTransitionRotScale/gap_0x0000_sub_0x40.vtx.inc.c>
};

/* gap sub-block @ 0x05A0 (was gap+0x5A0, 2552 bytes) */
Gfx dLBTransitionRotScale_DL_0x05A0[319] = {
	#include <LBTransitionRotScale/DL_0x05A0.dl.inc.c>
};

/* DObjDesc: - @ 0xF98 (3 entries) */
DObjDesc dLBTransitionRotScale_DObjDesc_0x0F98[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dLBTransitionRotScale_gap_0x0000 + 0x5A0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.5436489582061768f }, { 0.7031279802322388f, 0.7031279802322388f, 0.7031279802322388f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x101C to 0x1070 (84 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dLBTransitionRotScale_AnimJoint_0x1024[];

AObjEvent32 *dLBTransitionRotScale_AnimJoint_0x101C[2] = {
	NULL,
	(AObjEvent32 *)dLBTransitionRotScale_AnimJoint_0x1024,
};

u32 dLBTransitionRotScale_AnimJoint_0x1024[] = {
	aobjEvent32SetValAfter(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x004, 64),
	    0x41FB53D1,  /* 31.415925979614258f */
	    0x3FA53483,  /* 1.2906650304794312f */
	aobjEvent32SetValBlock(0x380, 64),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32End(),
};

PAD(8);

