/* relocData file 350: CaptainSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#if defined(REGION_JP)

u8 dCaptainSpecial2[26080] = {
	#include <CaptainSpecial2/jp_raw.data.inc.c>
};

#else  /* REGION_US */

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dCaptainSpecial2_gap_0x09D8[];

/* Raw data from file offset 0x0000 to 0x0030 (48 bytes) */
u8 dCaptainSpecial2_gap_0x0000[48] = {
	#include <CaptainSpecial2/gap_0x0000.data.inc.c>
};

/* Palette: Lut_0x0030 @ 0x30 (16 colors RGBA5551) */
u16 dCaptainSpecial2_Lut_0x0030_palette[16] = {
	#include <CaptainSpecial2/Lut_0x0030.palette.inc.c>
};

/* Raw data from file offset 0x0050 to 0x0960 (2320 bytes) */
/* gap sub-block @ 0x0050 (was gap+0x0, 8 bytes) */
u8 dCaptainSpecial2_gap_0x0050[8] = {
	#include <CaptainSpecial2/gap_0x0050.data.inc.c>
};

/* gap sub-block @ 0x0058 (was gap+0x8, 1160 bytes) */
u8 dCaptainSpecial2_gap_0x0050_sub_0x8[1160] = {
	#include <CaptainSpecial2/gap_0x0050_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x04E0 (was gap+0x490, 1152 bytes) */
u8 dCaptainSpecial2_gap_0x0050_sub_0x490[1152] = {
	#include <CaptainSpecial2/gap_0x0050_sub_0x490.data.inc.c>
};

/* MObjSub: FalconKickMObjSub @ 0x960 */
MObjSub dCaptainSpecial2_FalconKickMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dCaptainSpecial2_gap_0x09D8 + 0x10),
	0x025B, 0x0138, 0x025D, 0x0016,
	514,
	1.8367774096938661e-37f, 2.938735877055719e-39f,
	4.408171077909866e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 1.478623234625032e-38f,
	4.408171077909866e-39f, 4.408171077909866e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x05 } },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	255, 0,
	-256, -42752,
};

/* Raw data from file offset 0x09D8 to 0x09F0 (24 bytes) */
/* gap sub-block @ 0x09D8 (was gap+0x0, 16 bytes) */
u8 dCaptainSpecial2_gap_0x09D8[16] = {
	#include <CaptainSpecial2/gap_0x09D8.data.inc.c>
};

/* gap sub-block @ 0x09E8 (was gap+0x10, 8 bytes) */
u8 dCaptainSpecial2_gap_0x09D8_sub_0x10[8] = {
	#include <CaptainSpecial2/gap_0x09D8_sub_0x10.data.inc.c>
};

/* Vtx: Vtx_0x09F0 @ 0x9F0 (4 vertices) */
Vtx dCaptainSpecial2_Vtx_0x09F0_Vtx[4] = {
	#include <CaptainSpecial2/Vtx_0x09F0.vtx.inc.c>
};

/* DisplayList: Joint_0x0A30 @ 0xA30 (216 bytes) */
Gfx dCaptainSpecial2_Joint_0x0A30_DisplayList[27] = {
	#include <CaptainSpecial2/Joint_0x0A30.dl.inc.c>
};

/* DObjDesc: FalconKickDObjDesc @ 0xB08 (3 entries) */
DObjDesc dCaptainSpecial2_FalconKickDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, -66.0f, -324.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dCaptainSpecial2_Joint_0x0A30_DisplayList, { 0.0f, 66.0f, 324.00006103515625f }, { -0.026179999113082886f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x0B90 to 0x0C00 (112 bytes) */
u32 dCaptainSpecial2_FalconKickAnimJoint_AnimJoint[28] = {
	#include <CaptainSpecial2/FalconKickAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0C00 to 0x0C48 (72 bytes) */
u32 dCaptainSpecial2_FalconKickMatAnimJoint_MatAnimJoint[18] = {
	#include <CaptainSpecial2/FalconKickMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0C48 to 0x1450 (2056 bytes) */
u8 dCaptainSpecial2_Tex_0x0C48[2056] = {
	#include <CaptainSpecial2/Tex_0x0C48.tex.inc.c>
};

/* Raw data from file offset 0x1450 to 0x1C58 (2056 bytes) */
u8 dCaptainSpecial2_Tex_0x1450[2056] = {
	#include <CaptainSpecial2/Tex_0x1450.tex.inc.c>
};

/* Raw data from file offset 0x1C58 to 0x2460 (2056 bytes) */
u8 dCaptainSpecial2_Tex_0x1C58[2056] = {
	#include <CaptainSpecial2/Tex_0x1C58.tex.inc.c>
};

/* Raw data from file offset 0x2460 to 0x2C68 (2056 bytes) */
u8 dCaptainSpecial2_Tex_0x2460[2056] = {
	#include <CaptainSpecial2/Tex_0x2460.tex.inc.c>
};

/* Raw data from file offset 0x2C68 to 0x2E70 (520 bytes) */
u8 dCaptainSpecial2_Tex_0x2C68[520] = {
	#include <CaptainSpecial2/Tex_0x2C68.tex.inc.c>
};

/* Raw data from file offset 0x2E70 to 0x3078 (520 bytes) */
u8 dCaptainSpecial2_Tex_0x2E70[520] = {
	#include <CaptainSpecial2/Tex_0x2E70.tex.inc.c>
};

/* Raw data from file offset 0x3078 to 0x3480 (1032 bytes) */
u8 dCaptainSpecial2_Tex_0x3078[1032] = {
	#include <CaptainSpecial2/Tex_0x3078.tex.inc.c>
};

/* Raw data from file offset 0x3480 to 0x3C88 (2056 bytes) */
u8 dCaptainSpecial2_Tex_0x3480[2056] = {
	#include <CaptainSpecial2/Tex_0x3480.tex.inc.c>
};

/* Raw data from file offset 0x3C88 to 0x3E90 (520 bytes) */
u8 dCaptainSpecial2_Tex_0x3C88[520] = {
	#include <CaptainSpecial2/Tex_0x3C88.tex.inc.c>
};

/* Raw data from file offset 0x3E90 to 0x3ED0 (64 bytes) */
u8 dCaptainSpecial2_Tex_0x3E90[64] = {
	#include <CaptainSpecial2/Tex_0x3E90.tex.inc.c>
};

/* Vtx: Vtx_0x3ED0 @ 0x3ED0 (24 vertices) */
Vtx dCaptainSpecial2_Vtx_0x3ED0_Vtx[24] = {
	#include <CaptainSpecial2/Vtx_0x3ED0.vtx.inc.c>
};

/* Vtx: Vtx_0x4050 @ 0x4050 (10 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4050_Vtx[10] = {
	#include <CaptainSpecial2/Vtx_0x4050.vtx.inc.c>
};

/* Vtx: Vtx_0x40F0 @ 0x40F0 (4 vertices) */
Vtx dCaptainSpecial2_Vtx_0x40F0_Vtx[4] = {
	#include <CaptainSpecial2/Vtx_0x40F0.vtx.inc.c>
};

/* Vtx: Vtx_0x4130 @ 0x4130 (30 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4130_Vtx[30] = {
	#include <CaptainSpecial2/Vtx_0x4130.vtx.inc.c>
};

/* Vtx: Vtx_0x4310 @ 0x4310 (18 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4310_Vtx[18] = {
	#include <CaptainSpecial2/Vtx_0x4310.vtx.inc.c>
};

/* Vtx: Vtx_0x4430 @ 0x4430 (6 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4430_Vtx[6] = {
	#include <CaptainSpecial2/Vtx_0x4430.vtx.inc.c>
};

/* Vtx: Vtx_0x4490 @ 0x4490 (10 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4490_Vtx[10] = {
	#include <CaptainSpecial2/Vtx_0x4490.vtx.inc.c>
};

/* Vtx: Vtx_0x4530 @ 0x4530 (12 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4530_Vtx[12] = {
	#include <CaptainSpecial2/Vtx_0x4530.vtx.inc.c>
};

/* Vtx: Vtx_0x45F0 @ 0x45F0 (16 vertices) */
Vtx dCaptainSpecial2_Vtx_0x45F0_Vtx[16] = {
	#include <CaptainSpecial2/Vtx_0x45F0.vtx.inc.c>
};

/* Vtx: Vtx_0x46F0 @ 0x46F0 (8 vertices) */
Vtx dCaptainSpecial2_Vtx_0x46F0_Vtx[8] = {
	#include <CaptainSpecial2/Vtx_0x46F0.vtx.inc.c>
};

/* Vtx: Vtx_0x4770 @ 0x4770 (4 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4770_Vtx[4] = {
	#include <CaptainSpecial2/Vtx_0x4770.vtx.inc.c>
};

/* Vtx: Vtx_0x47B0 @ 0x47B0 (31 vertices) */
Vtx dCaptainSpecial2_Vtx_0x47B0_Vtx[31] = {
	#include <CaptainSpecial2/Vtx_0x47B0.vtx.inc.c>
};

/* Vtx: Vtx_0x49A0 @ 0x49A0 (3 vertices) */
Vtx dCaptainSpecial2_Vtx_0x49A0_Vtx[3] = {
	#include <CaptainSpecial2/Vtx_0x49A0.vtx.inc.c>
};

/* Vtx: Vtx_0x49D0 @ 0x49D0 (30 vertices) */
Vtx dCaptainSpecial2_Vtx_0x49D0_Vtx[30] = {
	#include <CaptainSpecial2/Vtx_0x49D0.vtx.inc.c>
};

/* Vtx: Vtx_0x4BB0 @ 0x4BB0 (30 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4BB0_Vtx[30] = {
	#include <CaptainSpecial2/Vtx_0x4BB0.vtx.inc.c>
};

/* Vtx: Vtx_0x4D90 @ 0x4D90 (30 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4D90_Vtx[30] = {
	#include <CaptainSpecial2/Vtx_0x4D90.vtx.inc.c>
};

/* Vtx: Vtx_0x4F70 @ 0x4F70 (31 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4F70_Vtx[31] = {
	#include <CaptainSpecial2/Vtx_0x4F70.vtx.inc.c>
};

/* Vtx: Vtx_0x5160 @ 0x5160 (31 vertices) */
Vtx dCaptainSpecial2_Vtx_0x5160_Vtx[31] = {
	#include <CaptainSpecial2/Vtx_0x5160.vtx.inc.c>
};

/* Vtx: Vtx_0x5350 @ 0x5350 (20 vertices) */
Vtx dCaptainSpecial2_Vtx_0x5350_Vtx[20] = {
	#include <CaptainSpecial2/Vtx_0x5350.vtx.inc.c>
};

/* Vtx: Vtx_0x5490 @ 0x5490 (4 vertices) */
Vtx dCaptainSpecial2_Vtx_0x5490_Vtx[4] = {
	#include <CaptainSpecial2/Vtx_0x5490.vtx.inc.c>
};

/* Vtx: Vtx_0x54D0 @ 0x54D0 (4 vertices) */
Vtx dCaptainSpecial2_Vtx_0x54D0_Vtx[4] = {
	#include <CaptainSpecial2/Vtx_0x54D0.vtx.inc.c>
};

/* Vtx: Vtx_0x5510 @ 0x5510 (4 vertices) */
Vtx dCaptainSpecial2_Vtx_0x5510_Vtx[4] = {
	#include <CaptainSpecial2/Vtx_0x5510.vtx.inc.c>
};

/* Vtx: Vtx_0x5550 @ 0x5550 (20 vertices) */
Vtx dCaptainSpecial2_Vtx_0x5550_Vtx[20] = {
	#include <CaptainSpecial2/Vtx_0x5550.vtx.inc.c>
};

/* DisplayList: Joint_0x5690 @ 0x5690 (1488 bytes) */
Gfx dCaptainSpecial2_Joint_0x5690_DisplayList[186] = {
	#include <CaptainSpecial2/Joint_0x5690.dl.inc.c>
};

/* DisplayList: Joint_0x5C60 @ 0x5C60 (88 bytes) */
Gfx dCaptainSpecial2_Joint_0x5C60_DisplayList[11] = {
	#include <CaptainSpecial2/Joint_0x5C60.dl.inc.c>
};

/* Raw data from file offset 0x5CB8 to 0x5D20 (104 bytes) */
u8 dCaptainSpecial2_Joint_0x5C60_post[104] = {
	#include <CaptainSpecial2/Joint_0x5C60_post.data.inc.c>
};

/* DisplayList: Joint_0x5D20 @ 0x5D20 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5D20_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5D20.dl.inc.c>
};

/* DisplayList: Joint_0x5D50 @ 0x5D50 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5D50_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5D50.dl.inc.c>
};

/* DisplayList: Joint_0x5D80 @ 0x5D80 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5D80_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5D80.dl.inc.c>
};

/* DisplayList: Joint_0x5DB0 @ 0x5DB0 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5DB0_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5DB0.dl.inc.c>
};

/* DisplayList: Joint_0x5DE0 @ 0x5DE0 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5DE0_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5DE0.dl.inc.c>
};

/* DisplayList: Joint_0x5E10 @ 0x5E10 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5E10_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5E10.dl.inc.c>
};

/* DisplayList: Joint_0x5E40 @ 0x5E40 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5E40_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5E40.dl.inc.c>
};

/* DisplayList: Joint_0x5E70 @ 0x5E70 (176 bytes) */
Gfx dCaptainSpecial2_Joint_0x5E70_DisplayList[22] = {
	#include <CaptainSpecial2/Joint_0x5E70.dl.inc.c>
};

/* Raw data from file offset 0x5F20 to 0x5F30 (16 bytes) */
u8 dCaptainSpecial2_JointCmd_0x5F20[16] = {
	#include <CaptainSpecial2/JointCmd_0x5F20.data.inc.c>
};

/* Raw data from file offset 0x5F30 to 0x5F40 (16 bytes) */
u8 dCaptainSpecial2_JointCmd_0x5F30[16] = {
	#include <CaptainSpecial2/JointCmd_0x5F30.data.inc.c>
};

/* Raw data from file offset 0x5F40 to 0x5F50 (16 bytes) */
u8 dCaptainSpecial2_JointCmd_0x5F40[16] = {
	#include <CaptainSpecial2/JointCmd_0x5F40.data.inc.c>
};

/* Raw data from file offset 0x5F50 to 0x5F60 (16 bytes) */
u8 dCaptainSpecial2_JointCmd_0x5F50[16] = {
	#include <CaptainSpecial2/JointCmd_0x5F50.data.inc.c>
};

/* Raw data from file offset 0x5F60 to 0x5F70 (16 bytes) */
u8 dCaptainSpecial2_JointCmd_0x5F60[16] = {
	#include <CaptainSpecial2/JointCmd_0x5F60.data.inc.c>
};

/* Raw data from file offset 0x5F70 to 0x5F80 (16 bytes) */
u8 dCaptainSpecial2_JointCmd_0x5F70[16] = {
	#include <CaptainSpecial2/JointCmd_0x5F70.data.inc.c>
};

/* Raw data from file offset 0x5F80 to 0x5F90 (16 bytes) */
u8 dCaptainSpecial2_JointCmd_0x5F80[16] = {
	#include <CaptainSpecial2/JointCmd_0x5F80.data.inc.c>
};

/* Raw data from file offset 0x5F90 to 0x5FA0 (16 bytes) */
u8 dCaptainSpecial2_JointCmd_0x5F90[16] = {
	#include <CaptainSpecial2/JointCmd_0x5F90.data.inc.c>
};

/* Raw data from file offset 0x5FA0 to 0x5FB0 (16 bytes) */
u8 dCaptainSpecial2_JointCmd_0x5FA0[16] = {
	#include <CaptainSpecial2/JointCmd_0x5FA0.data.inc.c>
};

/* Raw data from file offset 0x5FB0 to 0x5FC0 (16 bytes) */
u8 dCaptainSpecial2_JointCmd_0x5FB0[16] = {
	#include <CaptainSpecial2/JointCmd_0x5FB0.data.inc.c>
};

/* DObjDesc: EntryCar @ 0x5FC0 (13 entries) */
DObjDesc dCaptainSpecial2_EntryCar[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dCaptainSpecial2_JointCmd_0x5F20, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F30, { 285.0f, 191.99990844726562f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F40, { 285.0f, 191.99990844726562f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F50, { 285.0f, 74.99987030029297f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F60, { 285.0f, 74.99987030029297f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F70, { -285.0f, 191.99990844726562f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F80, { -285.0f, 191.99990844726562f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F90, { -285.0f, 74.99987030029297f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5FA0, { -285.0f, 74.99987030029297f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dCaptainSpecial2_JointCmd_0x5FB0, { 0.0f, 376.199951171875f, 112.79999542236328f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x6200 to 0x6518 (792 bytes) */
u32 dCaptainSpecial2__6200__AnimJoint[198] = {
	#include <CaptainSpecial2/_6200__AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6518 to 0x6598 (128 bytes) */
u32 dCaptainSpecial2__6518__AnimJoint[32] = {
	#include <CaptainSpecial2/_6518__AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6598 to 0x65E0 (72 bytes) */
u32 dCaptainSpecial2__6598__AnimJoint[18] = {
	#include <CaptainSpecial2/_6598__AnimJoint.data.inc.c>
};

#endif  /* REGION_US */
