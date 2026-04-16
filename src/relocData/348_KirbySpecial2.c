/* relocData file 348: KirbySpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

PAD(8);

/* Raw data from file offset 0x0008 to 0x0090 (136 bytes) */
u8 dKirbySpecial2_Tex_0x0008[136] = {
	#include <KirbySpecial2/Tex_0x0008.tex.inc.c>
};

/* Raw data from file offset 0x0090 to 0x0890 (2048 bytes) */
u8 dKirbySpecial2_Tex_0x0090[2048] = {
	#include <KirbySpecial2/Tex_0x0090.tex.inc.c>
};

/* Vtx: Vtx_0x0890 @ 0x890 (14 vertices) */
Vtx dKirbySpecial2_Vtx_0x0890_Vtx[14] = {
	#include <KirbySpecial2/Vtx_0x0890.vtx.inc.c>
};

/* Vtx: Vtx_0x0970 @ 0x970 (4 vertices) */
Vtx dKirbySpecial2_Vtx_0x0970_Vtx[4] = {
	#include <KirbySpecial2/Vtx_0x0970.vtx.inc.c>
};

/* DisplayList: Joint_0x09B0 @ 0x9B0 (64 bytes) */
Gfx dKirbySpecial2_Joint_0x09B0_DisplayList[8] = {
	#include <KirbySpecial2/Joint_0x09B0.dl.inc.c>
};

/* Raw data from file offset 0x09F0 to 0x0A78 (136 bytes) */
u8 dKirbySpecial2_Joint_0x09B0_post[136] = {
	#include <KirbySpecial2/Joint_0x09B0_post.data.inc.c>
};

/* DisplayList: Joint_0x0A78 @ 0xA78 (136 bytes) */
Gfx dKirbySpecial2_Joint_0x0A78_DisplayList[17] = {
	#include <KirbySpecial2/Joint_0x0A78.dl.inc.c>
};

/* Raw data from file offset 0x0B00 to 0x0B10 (16 bytes) */
u8 dKirbySpecial2_JointCmd_0x0B00[16] = {
	#include <KirbySpecial2/JointCmd_0x0B00.data.inc.c>
};

/* Raw data from file offset 0x0B10 to 0x0B20 (16 bytes) */
u8 dKirbySpecial2_JointCmd_0x0B10[16] = {
	#include <KirbySpecial2/JointCmd_0x0B10.data.inc.c>
};

/* DObjDesc: VulcanJab @ 0xB20 (3 entries) */
DObjDesc dKirbySpecial2_VulcanJab[] = {
	{ 0, (void*)dKirbySpecial2_JointCmd_0x0B00, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dKirbySpecial2_JointCmd_0x0B10, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(20);

/* Palette: Lut_0x0BB8 @ 0xBB8 (16 colors RGBA5551) */
u16 dKirbySpecial2_Lut_0x0BB8_palette[16] = {
	#include <KirbySpecial2/Lut_0x0BB8.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0BE0 to 0x0C20 (64 bytes) */
u8 dKirbySpecial2_Tex_0x0BE0[64] = {
	#include <KirbySpecial2/Tex_0x0BE0.tex.inc.c>
};

/* Vtx: Vtx_0x0C20 @ 0xC20 (3 vertices) */
Vtx dKirbySpecial2_Vtx_0x0C20_Vtx[3] = {
	#include <KirbySpecial2/Vtx_0x0C20.vtx.inc.c>
};

/* Vtx: Vtx_0x0C50 @ 0xC50 (2 vertices) */
Vtx dKirbySpecial2_Vtx_0x0C50_Vtx[2] = {
	#include <KirbySpecial2/Vtx_0x0C50.vtx.inc.c>
};

/* DisplayList: Joint_0x0C70 @ 0xC70 (112 bytes) */
Gfx dKirbySpecial2_Joint_0x0C70_DisplayList[14] = {
	#include <KirbySpecial2/Joint_0x0C70.dl.inc.c>
};

/* DisplayList: Joint_0x0CE0 @ 0xCE0 (248 bytes) */
Gfx dKirbySpecial2_Joint_0x0CE0_DisplayList[31] = {
	#include <KirbySpecial2/Joint_0x0CE0.dl.inc.c>
};

/* Raw data from file offset 0x0DD8 to 0x0DE8 (16 bytes) */
u8 dKirbySpecial2_JointCmd_0x0DD8[16] = {
	#include <KirbySpecial2/JointCmd_0x0DD8.data.inc.c>
};

/* Raw data from file offset 0x0DE8 to 0x0DF8 (16 bytes) */
u8 dKirbySpecial2_JointCmd_0x0DE8[16] = {
	#include <KirbySpecial2/JointCmd_0x0DE8.data.inc.c>
};

/* DObjDesc: CutterTrailDObjDesc @ 0xDF8 (4 entries) */
DObjDesc dKirbySpecial2_CutterTrailDObjDesc[] = {
	{ 0, (void*)0x00000000, { -25.403223037719727f, 1443.18359375f, 158.0520782470703f }, { 1.5732790231704712f, -0.003920000046491623f, -0.0026459998916834593f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dKirbySpecial2_JointCmd_0x0DD8, { 9.999999974752427e-07f, 300.0f, -15.000012397766113f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dKirbySpecial2_JointCmd_0x0DE8, { 0.0f, 210.0f, -390.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Vtx: Vtx_0x0EB0 @ 0xEB0 (16 vertices) */
Vtx dKirbySpecial2_Vtx_0x0EB0_Vtx[16] = {
	#include <KirbySpecial2/Vtx_0x0EB0.vtx.inc.c>
};

/* Vtx: Vtx_0x0FB0 @ 0xFB0 (16 vertices) */
Vtx dKirbySpecial2_Vtx_0x0FB0_Vtx[16] = {
	#include <KirbySpecial2/Vtx_0x0FB0.vtx.inc.c>
};

/* Vtx: Vtx_0x10B0 @ 0x10B0 (16 vertices) */
Vtx dKirbySpecial2_Vtx_0x10B0_Vtx[16] = {
	#include <KirbySpecial2/Vtx_0x10B0.vtx.inc.c>
};

/* DisplayList: Joint_0x11B0 @ 0x11B0 (104 bytes) */
Gfx dKirbySpecial2_Joint_0x11B0_DisplayList[13] = {
	#include <KirbySpecial2/Joint_0x11B0.dl.inc.c>
};

/* DisplayList: Joint_0x1218 @ 0x1218 (104 bytes) */
Gfx dKirbySpecial2_Joint_0x1218_DisplayList[13] = {
	#include <KirbySpecial2/Joint_0x1218.dl.inc.c>
};

/* DisplayList: Joint_0x1280 @ 0x1280 (104 bytes) */
Gfx dKirbySpecial2_Joint_0x1280_DisplayList[13] = {
	#include <KirbySpecial2/Joint_0x1280.dl.inc.c>
};

/* DObjDesc: CutterUpDObjDesc @ 0x12E8 (6 entries) */
DObjDesc dKirbySpecial2_CutterUpDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dKirbySpecial2_Joint_0x11B0_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dKirbySpecial2_Joint_0x1218_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dKirbySpecial2_Joint_0x1280_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x13F0 to 0x1470 (128 bytes) */
u32 dKirbySpecial2_CutterTrailAnimJoint_AnimJoint[32] = {
	#include <KirbySpecial2/CutterTrailAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x1470 to 0x14B8 (72 bytes) */
u32 dKirbySpecial2_CutterUpAnimJoint_AnimJoint[18] = {
	#include <KirbySpecial2/CutterUpAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x14B8 to 0x1CB8 (2048 bytes) */
u8 dKirbySpecial2_Tex_0x14B8[2048] = {
	#include <KirbySpecial2/Tex_0x14B8.tex.inc.c>
};

/* Vtx: Vtx_0x1CB8 @ 0x1CB8 (4 vertices) */
Vtx dKirbySpecial2_Vtx_0x1CB8_Vtx[4] = {
	#include <KirbySpecial2/Vtx_0x1CB8.vtx.inc.c>
};

/* DisplayList: Joint_0x1CF8 @ 0x1CF8 (160 bytes) */
Gfx dKirbySpecial2_Joint_0x1CF8_DisplayList[20] = {
	#include <KirbySpecial2/Joint_0x1CF8.dl.inc.c>
};

/* Raw data from file offset 0x1D98 to 0x1DA8 (16 bytes) */
u8 dKirbySpecial2_JointCmd_0x1D98[16] = {
	#include <KirbySpecial2/JointCmd_0x1D98.data.inc.c>
};

/* DObjDesc: EntryStar @ 0x1DA8 (3 entries) */
DObjDesc dKirbySpecial2_EntryStar[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dKirbySpecial2_JointCmd_0x1D98, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x1E30 to 0x1EA0 (112 bytes) */
u32 dKirbySpecial2_EntryStarL_AnimJoint[28] = {
	#include <KirbySpecial2/EntryStarL_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x1EA0 to 0x1F10 (112 bytes) */
u32 dKirbySpecial2_EntryStarR_AnimJoint[28] = {
	#include <KirbySpecial2/EntryStarR_AnimJoint.data.inc.c>
};

/* Vtx: Vtx_0x1F10 @ 0x1F10 (12 vertices) */
Vtx dKirbySpecial2_Vtx_0x1F10_Vtx[12] = {
	#include <KirbySpecial2/Vtx_0x1F10.vtx.inc.c>
};

/* Vtx: Vtx_0x1FD0 @ 0x1FD0 (12 vertices) */
Vtx dKirbySpecial2_Vtx_0x1FD0_Vtx[12] = {
	#include <KirbySpecial2/Vtx_0x1FD0.vtx.inc.c>
};

/* Vtx: Vtx_0x2090 @ 0x2090 (12 vertices) */
Vtx dKirbySpecial2_Vtx_0x2090_Vtx[12] = {
	#include <KirbySpecial2/Vtx_0x2090.vtx.inc.c>
};

/* Vtx: Vtx_0x2150 @ 0x2150 (12 vertices) */
Vtx dKirbySpecial2_Vtx_0x2150_Vtx[12] = {
	#include <KirbySpecial2/Vtx_0x2150.vtx.inc.c>
};

/* DisplayList: Joint_0x2210 @ 0x2210 (96 bytes) */
Gfx dKirbySpecial2_Joint_0x2210_DisplayList[12] = {
	#include <KirbySpecial2/Joint_0x2210.dl.inc.c>
};

/* DisplayList: Joint_0x2270 @ 0x2270 (96 bytes) */
Gfx dKirbySpecial2_Joint_0x2270_DisplayList[12] = {
	#include <KirbySpecial2/Joint_0x2270.dl.inc.c>
};

/* DisplayList: Joint_0x22D0 @ 0x22D0 (96 bytes) */
Gfx dKirbySpecial2_Joint_0x22D0_DisplayList[12] = {
	#include <KirbySpecial2/Joint_0x22D0.dl.inc.c>
};

/* DisplayList: Joint_0x2330 @ 0x2330 (96 bytes) */
Gfx dKirbySpecial2_Joint_0x2330_DisplayList[12] = {
	#include <KirbySpecial2/Joint_0x2330.dl.inc.c>
};

/* DObjDesc: CutterDownDObjDesc @ 0x2390 (7 entries) */
DObjDesc dKirbySpecial2_CutterDownDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 1638.3333740234375f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 165.0f, 67.5f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dKirbySpecial2_Joint_0x2210_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dKirbySpecial2_Joint_0x2270_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dKirbySpecial2_Joint_0x22D0_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dKirbySpecial2_Joint_0x2330_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x24D0 to 0x2538 (104 bytes) */
u32 dKirbySpecial2_CutterDownAnimJoint_AnimJoint[26] = {
	#include <KirbySpecial2/CutterDownAnimJoint_AnimJoint.data.inc.c>
};

/* Palette: Lut_0x2538 @ 0x2538 (16 colors RGBA5551) */
u16 dKirbySpecial2_Lut_0x2538_palette[16] = {
	#include <KirbySpecial2/Lut_0x2538.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x2560 to 0x2760 (512 bytes) */
u8 dKirbySpecial2_Tex_0x2560[512] = {
	#include <KirbySpecial2/Tex_0x2560.tex.inc.c>
};

/* Vtx: Vtx_0x2760 @ 0x2760 (4 vertices) */
Vtx dKirbySpecial2_Vtx_0x2760_Vtx[4] = {
	#include <KirbySpecial2/Vtx_0x2760.vtx.inc.c>
};

/* DisplayList: Joint_0x27A0 @ 0x27A0 (232 bytes) */
Gfx dKirbySpecial2_Joint_0x27A0_DisplayList[29] = {
	#include <KirbySpecial2/Joint_0x27A0.dl.inc.c>
};

/* DObjDesc: CutterDraw @ 0x2888 (3 entries) */
DObjDesc dKirbySpecial2_CutterDraw[] = {
	{ 0, (void*)0x00000000, { -25.303394317626953f, 1443.2432861328125f, 157.96707153320312f }, { 1.5734879970550537f, 0.0016240000259131193f, 0.0015030000358819962f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dKirbySpecial2_Joint_0x27A0_DisplayList, { 0.0f, 150.0f, 52.5f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

