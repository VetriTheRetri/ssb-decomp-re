/* relocData file 305: NKirbyModel */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#if defined(REGION_JP)

u8 dNKirbyModel[10032] = {
	#include <NKirbyModel/jp_raw.data.inc.c>
};

#else  /* REGION_US */

/* Vtx: JointVerts @ 0x0 (0 vertices — elided) */

/* Placeholder wrapper: the description slot collapsed to
 * zero vertices because an extras block starts at the
 * same offset. No C declaration is emitted so IDO CFE
 * does not choke on `Vtx X[0] = {}`.
 */

/* Raw data from file offset 0x0000 to 0x0008 (8 bytes) */
u8 dNKirbyModel_gap_0x0000[8] = {
	#include <NKirbyModel/gap_0x0000.data.inc.c>
};

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dNKirbyModel_Lut_0x0008_palette[16] = {
	#include <NKirbyModel/Lut_0x0008.palette.inc.c>
};

/* Raw data from file offset 0x0028 to 0x0030 (8 bytes) */
u8 dNKirbyModel_gap_0x0028[8] = {
	#include <NKirbyModel/gap_0x0028.data.inc.c>
};

/* Texture data @ 0x0030 (464 bytes) */
u8 dNKirbyModel_Tex_0x0030[464] = {
	#include <NKirbyModel/Tex_0x0030.tex.inc.c>
};

/* Vtx: Vtx_0x0200 @ 0x200 (28 vertices) */
Vtx dNKirbyModel_Vtx_0x0200_Vtx[28] = {
	#include <NKirbyModel/Vtx_0x0200.vtx.inc.c>
};

/* Vtx: Vtx_0x03C0 @ 0x3C0 (30 vertices) */
Vtx dNKirbyModel_Vtx_0x03C0_Vtx[30] = {
	#include <NKirbyModel/Vtx_0x03C0.vtx.inc.c>
};

/* Vtx: Vtx_0x05A0 @ 0x5A0 (30 vertices) */
Vtx dNKirbyModel_Vtx_0x05A0_Vtx[30] = {
	#include <NKirbyModel/Vtx_0x05A0.vtx.inc.c>
};

/* Vtx: Vtx_0x0780 @ 0x780 (30 vertices) */
Vtx dNKirbyModel_Vtx_0x0780_Vtx[30] = {
	#include <NKirbyModel/Vtx_0x0780.vtx.inc.c>
};

/* Vtx: Vtx_0x0960 @ 0x960 (31 vertices) */
Vtx dNKirbyModel_Vtx_0x0960_Vtx[31] = {
	#include <NKirbyModel/Vtx_0x0960.vtx.inc.c>
};

/* Vtx: Vtx_0x0B50 @ 0xB50 (3 vertices) */
Vtx dNKirbyModel_Vtx_0x0B50_Vtx[3] = {
	#include <NKirbyModel/Vtx_0x0B50.vtx.inc.c>
};

/* Vtx: Vtx_0x0B80 @ 0xB80 (28 vertices) */
Vtx dNKirbyModel_Vtx_0x0B80_Vtx[28] = {
	#include <NKirbyModel/Vtx_0x0B80.vtx.inc.c>
};

/* Vtx: Vtx_0x0D40 @ 0xD40 (31 vertices) */
Vtx dNKirbyModel_Vtx_0x0D40_Vtx[31] = {
	#include <NKirbyModel/Vtx_0x0D40.vtx.inc.c>
};

/* Vtx: Vtx_0x0F30 @ 0xF30 (3 vertices) */
Vtx dNKirbyModel_Vtx_0x0F30_Vtx[3] = {
	#include <NKirbyModel/Vtx_0x0F30.vtx.inc.c>
};

/* Vtx: Vtx_0x0F60 @ 0xF60 (28 vertices) */
Vtx dNKirbyModel_Vtx_0x0F60_Vtx[28] = {
	#include <NKirbyModel/Vtx_0x0F60.vtx.inc.c>
};

/* Vtx: Vtx_0x1120 @ 0x1120 (31 vertices) */
Vtx dNKirbyModel_Vtx_0x1120_Vtx[31] = {
	#include <NKirbyModel/Vtx_0x1120.vtx.inc.c>
};

/* Vtx: Vtx_0x1310 @ 0x1310 (30 vertices) */
Vtx dNKirbyModel_Vtx_0x1310_Vtx[30] = {
	#include <NKirbyModel/Vtx_0x1310.vtx.inc.c>
};

/* Vtx: Vtx_0x14F0 @ 0x14F0 (3 vertices) */
Vtx dNKirbyModel_Vtx_0x14F0_Vtx[3] = {
	#include <NKirbyModel/Vtx_0x14F0.vtx.inc.c>
};

/* Vtx: Vtx_0x1520 @ 0x1520 (30 vertices) */
Vtx dNKirbyModel_Vtx_0x1520_Vtx[30] = {
	#include <NKirbyModel/Vtx_0x1520.vtx.inc.c>
};

/* Vtx: Vtx_0x1700 @ 0x1700 (31 vertices) */
Vtx dNKirbyModel_Vtx_0x1700_Vtx[31] = {
	#include <NKirbyModel/Vtx_0x1700.vtx.inc.c>
};

/* Vtx: Vtx_0x18F0 @ 0x18F0 (3 vertices) */
Vtx dNKirbyModel_Vtx_0x18F0_Vtx[3] = {
	#include <NKirbyModel/Vtx_0x18F0.vtx.inc.c>
};

/* DisplayList: Joint_0x1920 @ 0x1920 (536 bytes, 67 cmds) */
Gfx dNKirbyModel_Joint_0x1920_DisplayList[67] = {
	#include <NKirbyModel/Joint_0x1920.dl.inc.c>
};

/* DisplayList: Joint_0x1B38 @ 0x1B38 (296 bytes, 37 cmds) */
Gfx dNKirbyModel_Joint_0x1B38_DisplayList[37] = {
	#include <NKirbyModel/Joint_0x1B38.dl.inc.c>
};

/* DisplayList: Joint_0x1C60 @ 0x1C60 (280 bytes, 35 cmds) */
Gfx dNKirbyModel_Joint_0x1C60_DisplayList[35] = {
	#include <NKirbyModel/Joint_0x1C60.dl.inc.c>
};

/* DisplayList: Joint_0x1D78 @ 0x1D78 (296 bytes, 37 cmds) */
Gfx dNKirbyModel_Joint_0x1D78_DisplayList[37] = {
	#include <NKirbyModel/Joint_0x1D78.dl.inc.c>
};

/* DisplayList: Joint_0x1EA0 @ 0x1EA0 (280 bytes, 35 cmds) */
Gfx dNKirbyModel_Joint_0x1EA0_DisplayList[35] = {
	#include <NKirbyModel/Joint_0x1EA0.dl.inc.c>
};

/* DisplayList: Joint_0x1FB8 @ 0x1FB8 (336 bytes, 42 cmds) */
Gfx dNKirbyModel_Joint_0x1FB8_DisplayList[42] = {
	#include <NKirbyModel/Joint_0x1FB8.dl.inc.c>
};

/* DisplayList: Joint_0x2108 @ 0x2108 (336 bytes, 42 cmds) */
Gfx dNKirbyModel_Joint_0x2108_DisplayList[42] = {
	#include <NKirbyModel/Joint_0x2108.dl.inc.c>
};

/* DObjDesc: JointTree @ 0x2258 (28 entries) */
DObjDesc dNKirbyModel_JointTree[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dNKirbyModel_Joint_0x1920_DisplayList, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -19.500003814697266f, 39.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dNKirbyModel_Joint_0x1B38_DisplayList, { 0.0f, 0.0f, 0.0f }, { 1.570796012878418f, -0.684677004814148f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNKirbyModel_Joint_0x1C60_DisplayList, { 72.0719985961914f, 1.4000000192027073e-05f, -1.5999999959603883e-05f }, { 0.0f, 0.0f, -0.4802280068397522f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 45.83325958251953f, -0.26693299412727356f, -4.999999873689376e-06f }, { -0.25320300459861755f, -1.570796012878418f, 1.8366680145263672f }, { 1.0f, 1.0399980545043945f, 1.0000009536743164f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dNKirbyModel_Joint_0x1D78_DisplayList, { 0.0f, 0.0f, 0.0f }, { 1.570796012878418f, 2.4630630016326904f, -3.1415929794311523f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNKirbyModel_Joint_0x1EA0_DisplayList, { 72.0719985961914f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.4683310091495514f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 45.629737854003906f, -0.135670006275177f, -1.5999999959603883e-05f }, { 0.7883700132369995f, -1.570796012878418f, 0.7883700132369995f }, { 1.0f, 1.0399980545043945f, 1.0000009536743164f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { -0.5318750143051147f, -0.5556820034980774f, 0.3715670108795166f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.013922999612987041f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNKirbyModel_Joint_0x1FB8_DisplayList, { 9.999999974752427e-07f, 0.0f, 7.000000096013537e-06f }, { -3.7447760105133057f, 3.03692889213562f, -3.218498945236206f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.5355820059776306f, 0.552141010761261f, 0.37861400842666626f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNKirbyModel_Joint_0x2108_DisplayList, { 0.0f, 0.0f, 0.0f }, { -2.538408041000366f, -3.036932945251465f, 3.0716419219970703f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

#endif  /* REGION_US */
