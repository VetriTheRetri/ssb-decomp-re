/* relocData file 349: SamusSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros
#if defined(REGION_JP)

u8 dSamusSpecial2[3232] = {
	#include <SamusSpecial2/jp_raw.data.inc.c>
};

#else  /* REGION_US */

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dSamusSpecial2_gap_0x0288[];

/* Raw data from file offset 0x0000 to 0x0210 (528 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 8 bytes) */
u8 dSamusSpecial2_gap_0x0000[8] = {
	#include <SamusSpecial2/gap_0x0000.data.inc.c>
};

/* gap sub-block @ 0x0008 (was gap+0x8, 264 bytes) */
u8 dSamusSpecial2_gap_0x0000_sub_0x8[264] = {
	#include <SamusSpecial2/gap_0x0000_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x0110 (was gap+0x110, 256 bytes) */
u8 dSamusSpecial2_gap_0x0000_sub_0x110[256] = {
	#include <SamusSpecial2/gap_0x0000_sub_0x110.data.inc.c>
};

/* MObjSub: GrappleBeamMObjSub @ 0x210 */
MObjSub dSamusSpecial2_GrappleBeamMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dSamusSpecial2_gap_0x0288 + 0x10),
	0x0087, 0x0044, 0x0089, 0x0002,
	770,
	1.524488013622076e-38f, 2.938735877055719e-39f,
	2.938780718606577e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.2913094677057e-41f,
	1.4693903593032886e-39f, 2.938780718606577e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x01 } },
	{ { 0x00, 0x38, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	1442840575, 8,
	-256, -256,
};

/* Raw data from file offset 0x0288 to 0x02A0 (24 bytes) */
/* gap sub-block @ 0x0288 (was gap+0x0, 16 bytes) */
u8 dSamusSpecial2_gap_0x0288[16] = {
	#include <SamusSpecial2/gap_0x0288.data.inc.c>
};

/* gap sub-block @ 0x0298 (was gap+0x10, 8 bytes) */
u8 dSamusSpecial2_gap_0x0288_sub_0x10[8] = {
	#include <SamusSpecial2/gap_0x0288_sub_0x10.data.inc.c>
};

/* Vtx: Vtx_0x02A0 @ 0x2A0 (4 vertices) */
Vtx dSamusSpecial2_Vtx_0x02A0_Vtx[4] = {
	#include <SamusSpecial2/Vtx_0x02A0.vtx.inc.c>
};

/* DisplayList: Joint_0x02E0 @ 0x2E0 (144 bytes) */
Gfx dSamusSpecial2_Joint_0x02E0_DisplayList[18] = {
	#include <SamusSpecial2/Joint_0x02E0.dl.inc.c>
};

/* Raw data from file offset 0x0370 to 0x0380 (16 bytes) */
u8 dSamusSpecial2_JointCmd_0x0370[16] = {
	#include <SamusSpecial2/JointCmd_0x0370.data.inc.c>
};

/* DObjDesc: GrappleBeamDObjDesc @ 0x380 (3 entries) */
DObjDesc dSamusSpecial2_GrappleBeamDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dSamusSpecial2_JointCmd_0x0370, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x0410 to 0x0480 (112 bytes) */
u32 dSamusSpecial2_GrappleBeamAnimJoint_AnimJoint[28] = {
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetValAfter(0x007, 0),
	    0x00000000,
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x380, 0),
	    0x3ECB3681,
	    0x3ECB3681,
	    0x3ECB3681,
	aobjEvent32SetValAfter(0x004, 6),
	    0x3F490FDB,
	aobjEvent32SetVal(0x200, 12),
	    0x3F800000,
	aobjEvent32SetValBlock(0x180, 6),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x180, 0),
	    0x3ECB367A,
	    0x3ECB367A,
	aobjEvent32SetValAfter(0x004, 6),
	    0x00000000,
	aobjEvent32SetValBlock(0x180, 6),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetAnim(0x000, 0),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* Raw data from file offset 0x0480 to 0x04C8 (72 bytes) */
u32 dSamusSpecial2_GrappleBeamMatAnimJoint_MatAnimJoint[18] = {
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,
	aobjEvent32SetAnim(0x000, 0),
	aobjEvent32End(),
	aobjEvent32Jump(0x00000000),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* Palette: Lut_0x04C8 @ 0x4C8 (16 colors RGBA5551) */
u16 dSamusSpecial2_Lut_0x04C8_palette[16] = {
	#include <SamusSpecial2/Lut_0x04C8.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x04F0 to 0x0570 (128 bytes) */
u8 dSamusSpecial2_Tex_0x04F0[128] = {
	#include <SamusSpecial2/Tex_0x04F0.tex.inc.c>
};

/* Vtx: Vtx_0x0570 @ 0x570 (32 vertices) */
Vtx dSamusSpecial2_Vtx_0x0570_Vtx[32] = {
	#include <SamusSpecial2/Vtx_0x0570.vtx.inc.c>
};

/* Vtx: Vtx_0x0770 @ 0x770 (4 vertices) */
Vtx dSamusSpecial2_Vtx_0x0770_Vtx[4] = {
	#include <SamusSpecial2/Vtx_0x0770.vtx.inc.c>
};

/* Vtx: Vtx_0x07B0 @ 0x7B0 (12 vertices) */
Vtx dSamusSpecial2_Vtx_0x07B0_Vtx[12] = {
	#include <SamusSpecial2/Vtx_0x07B0.vtx.inc.c>
};

/* Vtx: Vtx_0x0870 @ 0x870 (12 vertices) */
Vtx dSamusSpecial2_Vtx_0x0870_Vtx[12] = {
	#include <SamusSpecial2/Vtx_0x0870.vtx.inc.c>
};

/* DisplayList: Joint_0x0930 @ 0x930 (416 bytes) */
Gfx dSamusSpecial2_Joint_0x0930_DisplayList[52] = {
	#include <SamusSpecial2/Joint_0x0930.dl.inc.c>
};

/* Raw data from file offset 0x0AD0 to 0x0B78 (168 bytes) */
u8 dSamusSpecial2_Joint_0x0930_post[168] = {
	#include <SamusSpecial2/Joint_0x0930_post.data.inc.c>
};

/* Raw data from file offset 0x0B78 to 0x0B90 (24 bytes) */
u8 dSamusSpecial2_JointCmd_0x0B78[24] = {
	#include <SamusSpecial2/JointCmd_0x0B78.data.inc.c>
};

/* DObjDesc: EntryPointDObjDesc @ 0xB90 (3 entries) */
DObjDesc dSamusSpecial2_EntryPointDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dSamusSpecial2_JointCmd_0x0B78, { 0.0f, 435.0f, -330.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 9.999999747378752e-06f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x0C20 to 0x0CA0 (128 bytes) */
u32 dSamusSpecial2_EntryPointAnimJoint_AnimJoint[32] = {
	#include <SamusSpecial2/EntryPointAnimJoint_AnimJoint.data.inc.c>
};

#endif  /* REGION_US */
