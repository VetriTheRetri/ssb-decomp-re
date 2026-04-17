/* relocData file 352: NessSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros
#if defined(REGION_JP)

u8 dNessSpecial2[2832] = {
	#include <NessSpecial2/jp_raw.data.inc.c>
};

#else  /* REGION_US */

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dNessSpecial2_gap_0x0888[];

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

/* MObjSub: PsychicMagnetMObjSub @ 0x810 */
MObjSub dNessSpecial2_PsychicMagnetMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dNessSpecial2_gap_0x0888 + 0x10),
	0x0207, 0x0104, 0x0209, 0x0002,
	770,
	1.219633458786485e-37f, 2.938735877055719e-39f,
	5.877561437213154e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.2913094677057e-41f,
	2.938780718606577e-39f, 5.877561437213154e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x01 } },
	{ { 0x78, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	16711935, 8,
	-256, -2139062272,
};

/* Raw data from file offset 0x0888 to 0x08A0 (24 bytes) */
/* gap sub-block @ 0x0888 (was gap+0x0, 16 bytes) */
u8 dNessSpecial2_gap_0x0888[16] = {
	#include <NessSpecial2/gap_0x0888.data.inc.c>
};

/* gap sub-block @ 0x0898 (was gap+0x10, 8 bytes) */
u8 dNessSpecial2_gap_0x0888_sub_0x10[8] = {
	#include <NessSpecial2/gap_0x0888_sub_0x10.data.inc.c>
};

/* Vtx: Vtx_0x08A0 @ 0x8A0 (4 vertices) */
Vtx dNessSpecial2_Vtx_0x08A0_Vtx[4] = {
	#include <NessSpecial2/Vtx_0x08A0.vtx.inc.c>
};

/* DisplayList: Joint_0x08E0 @ 0x8E0 (184 bytes) */
Gfx dNessSpecial2_Joint_0x08E0_DisplayList[23] = {
	#include <NessSpecial2/Joint_0x08E0.dl.inc.c>
};

/* Raw data from file offset 0x0998 to 0x09A8 (16 bytes) */
u8 dNessSpecial2_JointCmd_0x0998[16] = {
	#include <NessSpecial2/JointCmd_0x0998.data.inc.c>
};

/* DObjDesc: PsychicMagnetDObjDesc @ 0x9A8 (3 entries) */
DObjDesc dNessSpecial2_PsychicMagnetDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dNessSpecial2_JointCmd_0x0998, { 0.0f, 199.66717529296875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 2.0f, 2.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x0A30 to 0x0AD0 (160 bytes) */
u32 dNessSpecial2_PsychicMagnetAnimJoint_AnimJoint[40] = {
	#include <NessSpecial2/PsychicMagnetAnimJoint_AnimJoint.data.inc.c>
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

#endif  /* REGION_US */
