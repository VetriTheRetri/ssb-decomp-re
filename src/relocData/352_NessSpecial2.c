/* relocData file 352: NessSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dNessSpecial2_gap_0x0888[];

extern MObjSub *dNessSpecial2_gap_0x0888_sub_0x10[];

/* Raw data from file offset 0x0000 to 0x0810 (2064 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 8 bytes) */
u8 dNessSpecial2_gap_0x0000[8] = {
	#include <NessSpecial2/gap_0x0000.data.inc.c>
};

/* gap sub-block @ 0x0008 (was gap+0x8, 1032 bytes) */
u8 dNessSpecial2_gap_0x0000_sub_0x8[1032] = {
	#include <NessSpecial2/gap_0x0000_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x0410 (was gap+0x410, 1024 bytes) */
u8 dNessSpecial2_gap_0x0000_sub_0x410[1024] = {
	#include <NessSpecial2/gap_0x0000_sub_0x410.data.inc.c>
};

/* MObjSub-list head @ 0x810 — 4-entry MObjSub** array.
 * The real MObjSub data starts at +0x10 (dNessSpecial2_PsychicMagnetMObjSub_MObjSub_real below). */
MObjSub **dNessSpecial2_PsychicMagnetMObjSub_MObjSub[4] = {
	NULL,
	NULL,
	(MObjSub **)dNessSpecial2_gap_0x0000_sub_0x410,
	(MObjSub **)dNessSpecial2_gap_0x0000_sub_0x8,
};

/* The real MObjSub @ +0x10 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dNessSpecial2_PsychicMagnetMObjSub_MObjSub_real = {
	0x0000,
	0x03, 0x02,
	(void**)0x02260206,
	0x0020, 0x0000, 0x0040, 0x0040,
	0,
	0.0f, 0.0f,
	1.0f, 1.0f,
	0.0f, 1.0f,
	(void**)0x00000000,
	0x0001,
	0x03, 0x01,
	0x0020,
	0x0020, 0x0040, 0x0040,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00002001,
	{ { 0x78, 0xFF, 0xFF, 0xFF } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0xFF, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	{ { 0xFF, 0xFF, 0xFF, 0x00 } },
	{ { 0x80, 0x80, 0x80, 0x00 } },
	0, 0,
	0, 0,
};

/* Raw data from file offset 0x0888 to 0x08A0 (24 bytes) */
/* gap sub-block @ 0x0898 (was gap+0x10, 8 bytes) */
/* MObjSub.sprites pointer table @ +0x898 (2 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
MObjSub *dNessSpecial2_gap_0x0888_sub_0x10[2] = {
	&dNessSpecial2_PsychicMagnetMObjSub_MObjSub_real,
	NULL,
};

/* Vtx: Vtx_0x08A0 @ 0x8A0 (4 vertices) */
Vtx dNessSpecial2_Vtx_0x08A0_Vtx[4] = {
	#include <NessSpecial2/Vtx_0x08A0.vtx.inc.c>
};

/* DisplayList: Joint_0x08E0 @ 0x8E0 (184 bytes) */
Gfx dNessSpecial2_Joint_0x08E0_DisplayList[23] = {
	#include <NessSpecial2/Joint_0x08E0.dl.inc.c>
};

/* DObjDLLink @ 0x0998 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dNessSpecial2_JointCmd_0x0998[] = {
	{ 1, dNessSpecial2_Joint_0x08E0_DisplayList },
	{ 4, NULL },
};

/* DObjDesc: PsychicMagnetDObjDesc @ 0x9A8 (3 entries) */
DObjDesc dNessSpecial2_PsychicMagnetDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dNessSpecial2_JointCmd_0x0998, { 0.0f, 199.66717529296875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 2.0f, 2.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x0A30 to 0x0AD0 (160 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dNessSpecial2_PsychicMagnetAnimJoint_AnimJoint_0xA38[];

AObjEvent32 *dNessSpecial2_PsychicMagnetAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dNessSpecial2_PsychicMagnetAnimJoint_AnimJoint_0xA38,
};

u32 dNessSpecial2_PsychicMagnetAnimJoint_AnimJoint_0xA38[] = {
	aobjEvent32SetValAfter(0x380, 0),
	    0x40000000,  /* 2.0f */
	    0x40000000,  /* 2.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x004, 18),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x400D6042,  /* 2.2090001106262207f */
	    0x400D6042,  /* 2.2090001106262207f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x3FEE147C,  /* 1.8600001335144043f */
	    0x3FEE147C,  /* 1.8600001335144043f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x40133333,  /* 2.299999952316284f */
	    0x40133333,  /* 2.299999952316284f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x3FF9999A,  /* 1.9500000476837158f */
	    0x3FF9999A,  /* 1.9500000476837158f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x400C8B44,  /* 2.196000099182129f */
	    0x400C8B44,  /* 2.196000099182129f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x40000000,  /* 2.0f */
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x400D6042,  /* 2.2090001106262207f */
	    0x400D6042,  /* 2.2090001106262207f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x3FEE147C,  /* 1.8600001335144043f */
	    0x3FEE147C,  /* 1.8600001335144043f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x40133333,  /* 2.299999952316284f */
	    0x40133333,  /* 2.299999952316284f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dNessSpecial2_PsychicMagnetAnimJoint_AnimJoint_0xA38),
	aobjEvent32End(),
};

/* Raw data from file offset 0x0AD0 to 0x0B10 (64 bytes) */
u32 dNessSpecial2_PsychicMagnetMatAnimJoint_MatAnimJoint[16] = {
	aobjEvent32End(),
	aobjEvent32Jump(0x14008000),
	aobjEvent32End(),
	aobjEvent32SetValAfterBlock(0x001, 6),
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0xB0800000,
	aobjEvent32SetValAfterBlock(0x001, 6),
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x32C00000,
	aobjEvent32SetAnim(0x000, 0),
	aobjEvent32Jump(0xFFFF02B6),
	aobjEvent32End(),
};
