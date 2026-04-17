/* relocData file 330: PurinModel */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#if defined(REGION_JP)

u8 dPurinModel[32224] = {
	#include <PurinModel/jp_raw.data.inc.c>
};

#else  /* REGION_US */

/* Vtx: JointVerts @ 0x0 (2 vertices) */
Vtx dPurinModel_JointVerts_Vtx[2] = {
	#include <PurinModel/JointVerts.vtx.inc.c>
};

/* Raw data from file offset 0x0020 to 0x0040 (32 bytes) */
u8 dPurinModel_Joint_0x0020_post[32] = {
	#include <PurinModel/Joint_0x0020_post.data.inc.c>
};

/* Raw data from file offset 0x0040 to 0x0060 (32 bytes) */
u8 dPurinModel_Joint_0x0040_post[32] = {
	#include <PurinModel/Joint_0x0040_post.data.inc.c>
};

/* Raw data from file offset 0x0060 to 0x0080 (32 bytes) */
u8 dPurinModel_Joint_0x0060_post[32] = {
	#include <PurinModel/Joint_0x0060_post.data.inc.c>
};

/* Raw data from file offset 0x0080 to 0x00A0 (32 bytes) */
u8 dPurinModel_Joint_0x0080_post[32] = {
	#include <PurinModel/Joint_0x0080_post.data.inc.c>
};

/* Raw data from file offset 0x00A0 to 0x00C0 (32 bytes) */
u8 dPurinModel_Joint_0x00A0_post[32] = {
	#include <PurinModel/Joint_0x00A0_post.data.inc.c>
};

/* Raw data from file offset 0x00C0 to 0x00E0 (32 bytes) */
u8 dPurinModel_Joint_0x00C0_post[32] = {
	#include <PurinModel/Joint_0x00C0_post.data.inc.c>
};

/* Raw data from file offset 0x00E0 to 0x0100 (32 bytes) */
u8 dPurinModel_Joint_0x00E0_post[32] = {
	#include <PurinModel/Joint_0x00E0_post.data.inc.c>
};

/* Raw data from file offset 0x0100 to 0x0870 (1904 bytes) */
u8 dPurinModel_Joint_0x0100_post[1904] = {
	#include <PurinModel/Joint_0x0100_post.data.inc.c>
};

/* Vtx: Vtx_0x0870 @ 0x870 (10 vertices) */
Vtx dPurinModel_Vtx_0x0870_Vtx[10] = {
	#include <PurinModel/Vtx_0x0870.vtx.inc.c>
};

/* Vtx: Vtx_0x0910 @ 0x910 (10 vertices) */
Vtx dPurinModel_Vtx_0x0910_Vtx[10] = {
	#include <PurinModel/Vtx_0x0910.vtx.inc.c>
};

/* Vtx: Vtx_0x09B0 @ 0x9B0 (5 vertices) */
Vtx dPurinModel_Vtx_0x09B0_Vtx[5] = {
	#include <PurinModel/Vtx_0x09B0.vtx.inc.c>
};

/* Vtx: Vtx_0x0A00 @ 0xA00 (15 vertices) */
Vtx dPurinModel_Vtx_0x0A00_Vtx[15] = {
	#include <PurinModel/Vtx_0x0A00.vtx.inc.c>
};

/* Vtx: Vtx_0x0AF0 @ 0xAF0 (1 vertices) */
Vtx dPurinModel_Vtx_0x0AF0_Vtx[1] = {
	#include <PurinModel/Vtx_0x0AF0.vtx.inc.c>
};

/* Raw data from file offset 0x0B00 to 0x0B20 (32 bytes) */
u8 dPurinModel_gap_0x0B00[32] = {
	#include <PurinModel/gap_0x0B00.data.inc.c>
};

/* Vtx: Vtx_0x0B20 @ 0xB20 (1 vertices) */
Vtx dPurinModel_Vtx_0x0B20_Vtx[1] = {
	#include <PurinModel/Vtx_0x0B20.vtx.inc.c>
};

/* Raw data from file offset 0x0B30 to 0x0B40 (16 bytes) */
u8 dPurinModel_gap_0x0B30[16] = {
	#include <PurinModel/gap_0x0B30.data.inc.c>
};

/* Vtx: Vtx_0x0B40 @ 0xB40 (1 vertices) */
Vtx dPurinModel_Vtx_0x0B40_Vtx[1] = {
	#include <PurinModel/Vtx_0x0B40.vtx.inc.c>
};

/* Raw data from file offset 0x0B50 to 0x0B60 (16 bytes) */
u8 dPurinModel_gap_0x0B50[16] = {
	#include <PurinModel/gap_0x0B50.data.inc.c>
};

/* Vtx: Vtx_0x0B60 @ 0xB60 (1 vertices) */
Vtx dPurinModel_Vtx_0x0B60_Vtx[1] = {
	#include <PurinModel/Vtx_0x0B60.vtx.inc.c>
};

/* Raw data from file offset 0x0B70 to 0x0B80 (16 bytes) */
u8 dPurinModel_gap_0x0B70[16] = {
	#include <PurinModel/gap_0x0B70.data.inc.c>
};

/* Vtx: Vtx_0x0B80 @ 0xB80 (1 vertices) */
Vtx dPurinModel_Vtx_0x0B80_Vtx[1] = {
	#include <PurinModel/Vtx_0x0B80.vtx.inc.c>
};

/* Raw data from file offset 0x0B90 to 0x0BA0 (16 bytes) */
u8 dPurinModel_gap_0x0B90[16] = {
	#include <PurinModel/gap_0x0B90.data.inc.c>
};

/* Vtx: Vtx_0x0BA0 @ 0xBA0 (1 vertices) */
Vtx dPurinModel_Vtx_0x0BA0_Vtx[1] = {
	#include <PurinModel/Vtx_0x0BA0.vtx.inc.c>
};

/* Raw data from file offset 0x0BB0 to 0x0BC0 (16 bytes) */
u8 dPurinModel_gap_0x0BB0[16] = {
	#include <PurinModel/gap_0x0BB0.data.inc.c>
};

/* Vtx: Vtx_0x0BC0 @ 0xBC0 (1 vertices) */
Vtx dPurinModel_Vtx_0x0BC0_Vtx[1] = {
	#include <PurinModel/Vtx_0x0BC0.vtx.inc.c>
};

/* Raw data from file offset 0x0BD0 to 0x0BE0 (16 bytes) */
u8 dPurinModel_gap_0x0BD0[16] = {
	#include <PurinModel/gap_0x0BD0.data.inc.c>
};

/* Vtx: Vtx_0x0BE0 @ 0xBE0 (1 vertices) */
Vtx dPurinModel_Vtx_0x0BE0_Vtx[1] = {
	#include <PurinModel/Vtx_0x0BE0.vtx.inc.c>
};

/* Raw data from file offset 0x0BF0 to 0x0C00 (16 bytes) */
u8 dPurinModel_gap_0x0BF0[16] = {
	#include <PurinModel/gap_0x0BF0.data.inc.c>
};

/* Vtx: Vtx_0x0C00 @ 0xC00 (5 vertices) */
Vtx dPurinModel_Vtx_0x0C00_Vtx[5] = {
	#include <PurinModel/Vtx_0x0C00.vtx.inc.c>
};

/* Vtx: Vtx_0x0C50 @ 0xC50 (14 vertices) */
Vtx dPurinModel_Vtx_0x0C50_Vtx[14] = {
	#include <PurinModel/Vtx_0x0C50.vtx.inc.c>
};

/* Vtx: Vtx_0x0D30 @ 0xD30 (2 vertices) */
Vtx dPurinModel_Vtx_0x0D30_Vtx[2] = {
	#include <PurinModel/Vtx_0x0D30.vtx.inc.c>
};

/* Vtx: Vtx_0x0D50 @ 0xD50 (2 vertices) */
Vtx dPurinModel_Vtx_0x0D50_Vtx[2] = {
	#include <PurinModel/Vtx_0x0D50.vtx.inc.c>
};

/* Vtx: Vtx_0x0D70 @ 0xD70 (13 vertices) */
Vtx dPurinModel_Vtx_0x0D70_Vtx[13] = {
	#include <PurinModel/Vtx_0x0D70.vtx.inc.c>
};

/* Vtx: Vtx_0x0E40 @ 0xE40 (2 vertices) */
Vtx dPurinModel_Vtx_0x0E40_Vtx[2] = {
	#include <PurinModel/Vtx_0x0E40.vtx.inc.c>
};

/* Vtx: Vtx_0x0E60 @ 0xE60 (1 vertices) */
Vtx dPurinModel_Vtx_0x0E60_Vtx[1] = {
	#include <PurinModel/Vtx_0x0E60.vtx.inc.c>
};

/* Vtx: Vtx_0x0E70 @ 0xE70 (22 vertices) */
Vtx dPurinModel_Vtx_0x0E70_Vtx[22] = {
	#include <PurinModel/Vtx_0x0E70.vtx.inc.c>
};

/* Vtx: Vtx_0x0FD0 @ 0xFD0 (3 vertices) */
Vtx dPurinModel_Vtx_0x0FD0_Vtx[3] = {
	#include <PurinModel/Vtx_0x0FD0.vtx.inc.c>
};

/* Vtx: Vtx_0x1000 @ 0x1000 (8 vertices) */
Vtx dPurinModel_Vtx_0x1000_Vtx[8] = {
	#include <PurinModel/Vtx_0x1000.vtx.inc.c>
};

/* Vtx: Vtx_0x1080 @ 0x1080 (3 vertices) */
Vtx dPurinModel_Vtx_0x1080_Vtx[3] = {
	#include <PurinModel/Vtx_0x1080.vtx.inc.c>
};

/* Vtx: Vtx_0x10B0 @ 0x10B0 (8 vertices) */
Vtx dPurinModel_Vtx_0x10B0_Vtx[8] = {
	#include <PurinModel/Vtx_0x10B0.vtx.inc.c>
};

/* Vtx: Vtx_0x1130 @ 0x1130 (13 vertices) */
Vtx dPurinModel_Vtx_0x1130_Vtx[13] = {
	#include <PurinModel/Vtx_0x1130.vtx.inc.c>
};

/* Vtx: Vtx_0x1200 @ 0x1200 (6 vertices) */
Vtx dPurinModel_Vtx_0x1200_Vtx[6] = {
	#include <PurinModel/Vtx_0x1200.vtx.inc.c>
};

/* Vtx: Vtx_0x1260 @ 0x1260 (12 vertices) */
Vtx dPurinModel_Vtx_0x1260_Vtx[12] = {
	#include <PurinModel/Vtx_0x1260.vtx.inc.c>
};

/* Vtx: Vtx_0x1320 @ 0x1320 (6 vertices) */
Vtx dPurinModel_Vtx_0x1320_Vtx[6] = {
	#include <PurinModel/Vtx_0x1320.vtx.inc.c>
};

/* Vtx: Vtx_0x1380 @ 0x1380 (15 vertices) */
Vtx dPurinModel_Vtx_0x1380_Vtx[15] = {
	#include <PurinModel/Vtx_0x1380.vtx.inc.c>
};

/* Vtx: Vtx_0x1470 @ 0x1470 (15 vertices) */
Vtx dPurinModel_Vtx_0x1470_Vtx[15] = {
	#include <PurinModel/Vtx_0x1470.vtx.inc.c>
};

/* DisplayList: Joint_0x1560 @ 0x1560 (1728 bytes, 216 cmds) */
Gfx dPurinModel_Joint_0x1560_DisplayList[216] = {
	#include <PurinModel/Joint_0x1560.dl.inc.c>
};

/* DisplayList: Joint_0x1C20 @ 0x1C20 (152 bytes, 19 cmds) */
Gfx dPurinModel_Joint_0x1C20_DisplayList[19] = {
	#include <PurinModel/Joint_0x1C20.dl.inc.c>
};

/* DisplayList: Joint_0x1CB8 @ 0x1CB8 (192 bytes, 24 cmds) */
Gfx dPurinModel_Joint_0x1CB8_DisplayList[24] = {
	#include <PurinModel/Joint_0x1CB8.dl.inc.c>
};

/* DisplayList: Joint_0x1D78 @ 0x1D78 (160 bytes, 20 cmds) */
Gfx dPurinModel_Joint_0x1D78_DisplayList[20] = {
	#include <PurinModel/Joint_0x1D78.dl.inc.c>
};

/* DisplayList: Joint_0x1E18 @ 0x1E18 (192 bytes, 24 cmds) */
Gfx dPurinModel_Joint_0x1E18_DisplayList[24] = {
	#include <PurinModel/Joint_0x1E18.dl.inc.c>
};

/* DisplayList: Joint_0x1ED8 @ 0x1ED8 (184 bytes, 23 cmds) */
Gfx dPurinModel_Joint_0x1ED8_DisplayList[23] = {
	#include <PurinModel/Joint_0x1ED8.dl.inc.c>
};

/* DisplayList: Joint_0x1F90 @ 0x1F90 (152 bytes, 19 cmds) */
Gfx dPurinModel_Joint_0x1F90_DisplayList[19] = {
	#include <PurinModel/Joint_0x1F90.dl.inc.c>
};

/* DObjDesc: JointTree @ 0x2028 (28 entries) */
DObjDesc dPurinModel_JointTree[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPurinModel_Joint_0x1560_DisplayList, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -19.500003814697266f, 39.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -94.80000305175781f, -30.0f }, { 0.0f, -1.0471980571746826f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPurinModel_Joint_0x1C20_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.9038249850273132f, -0.6086379885673523f, 5.9965410232543945f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x1CB8_DisplayList, { 72.0719985961914f, 1.4000000192027073e-05f, -1.5999999959603883e-05f }, { 0.0f, 0.0f, -0.4704279899597168f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -94.79998016357422f, -30.0f }, { 0.0f, 1.0471980571746826f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPurinModel_Joint_0x1D78_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.9065089821815491f, 0.6037060022354126f, -0.29135599732398987f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x1E18_DisplayList, { 72.0719985961914f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.4582650065422058f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 45.629737854003906f, -0.135670006275177f, -1.5999999959603883e-05f }, { 0.7883700132369995f, -1.570796012878418f, 0.7883700132369995f }, { 1.0f, 1.0399980545043945f, 1.0000009536743164f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { -0.5318750143051147f, -0.5556820034980774f, 0.3715670108795166f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.013922999612987041f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x1ED8_DisplayList, { 9.999999974752427e-07f, 0.0f, 7.000000096013537e-06f }, { -3.7447760105133057f, 3.03692889213562f, -3.218498945236206f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.5355820059776306f, 0.552141010761261f, 0.37861400842666626f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x1F90_DisplayList, { 0.0f, 0.0f, 0.0f }, { -2.538408041000366f, -3.036932945251465f, 3.0716419219970703f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 0.0f, 2.2393685335362908e-33f, 0.0f }, { 0.0f, 0.0f, 2.251407248727642e-33f }, { 2.287518618855895e-33f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x24F8 to 0x3028 (2864 bytes) */
/* gap sub-block @ 0x24F8 (was gap+0x0, 64 bytes) */
u8 dPurinModel_gap_0x24F8[64] = {
	#include <PurinModel/gap_0x24F8.data.inc.c>
};

/* gap sub-block @ 0x2538 (was gap+0x40, 92 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x40[92] = {
	#include <PurinModel/gap_0x24F8_sub_0x40.data.inc.c>
};

/* gap sub-block @ 0x2594 (was gap+0x9C, 92 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x9C[92] = {
	#include <PurinModel/gap_0x24F8_sub_0x9C.data.inc.c>
};

/* gap sub-block @ 0x25F0 (was gap+0xF8, 48 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0xF8[48] = {
	#include <PurinModel/gap_0x24F8_sub_0xF8.data.inc.c>
};

/* gap sub-block @ 0x2620 (was gap+0x128, 48 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x128[48] = {
	#include <PurinModel/gap_0x24F8_sub_0x128.data.inc.c>
};

/* gap sub-block @ 0x2650 (was gap+0x158, 48 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x158[48] = {
	#include <PurinModel/gap_0x24F8_sub_0x158.data.inc.c>
};

/* gap sub-block @ 0x2680 (was gap+0x188, 48 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x188[48] = {
	#include <PurinModel/gap_0x24F8_sub_0x188.data.inc.c>
};

/* gap sub-block @ 0x26B0 (was gap+0x1B8, 48 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x1B8[48] = {
	#include <PurinModel/gap_0x24F8_sub_0x1B8.data.inc.c>
};

/* gap sub-block @ 0x26E0 (was gap+0x1E8, 48 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x1E8[48] = {
	#include <PurinModel/gap_0x24F8_sub_0x1E8.data.inc.c>
};

/* gap sub-block @ 0x2710 (was gap+0x218, 48 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x218[48] = {
	#include <PurinModel/gap_0x24F8_sub_0x218.data.inc.c>
};

/* gap sub-block @ 0x2740 (was gap+0x248, 48 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x248[48] = {
	#include <PurinModel/gap_0x24F8_sub_0x248.data.inc.c>
};

/* gap sub-block @ 0x2770 (was gap+0x278, 48 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x278[48] = {
	#include <PurinModel/gap_0x24F8_sub_0x278.data.inc.c>
};

/* gap sub-block @ 0x27A0 (was gap+0x2A8, 48 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x2A8[48] = {
	#include <PurinModel/gap_0x24F8_sub_0x2A8.data.inc.c>
};

/* gap sub-block @ 0x27D0 (was gap+0x2D8, 48 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x2D8[48] = {
	#include <PurinModel/gap_0x24F8_sub_0x2D8.data.inc.c>
};

/* gap sub-block @ 0x2800 (was gap+0x308, 48 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x308[48] = {
	#include <PurinModel/gap_0x24F8_sub_0x308.data.inc.c>
};

/* gap sub-block @ 0x2830 (was gap+0x338, 56 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x338[56] = {
	#include <PurinModel/gap_0x24F8_sub_0x338.data.inc.c>
};

/* gap sub-block @ 0x2868 (was gap+0x370, 36 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x370[36] = {
	#include <PurinModel/gap_0x24F8_sub_0x370.data.inc.c>
};

/* gap sub-block @ 0x288C (was gap+0x394, 4 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x394[4] = {
	#include <PurinModel/gap_0x24F8_sub_0x394.data.inc.c>
};

/* gap sub-block @ 0x2890 (was gap+0x398, 4 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x398[4] = {
	#include <PurinModel/gap_0x24F8_sub_0x398.data.inc.c>
};

/* gap sub-block @ 0x2894 (was gap+0x39C, 4 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x39C[4] = {
	#include <PurinModel/gap_0x24F8_sub_0x39C.data.inc.c>
};

/* gap sub-block @ 0x2898 (was gap+0x3A0, 4 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x3A0[4] = {
	#include <PurinModel/gap_0x24F8_sub_0x3A0.data.inc.c>
};

/* gap sub-block @ 0x289C (was gap+0x3A4, 4 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x3A4[4] = {
	#include <PurinModel/gap_0x24F8_sub_0x3A4.data.inc.c>
};

/* gap sub-block @ 0x28A0 (was gap+0x3A8, 16 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x3A8[16] = {
	#include <PurinModel/gap_0x24F8_sub_0x3A8.data.inc.c>
};

/* gap sub-block @ 0x28B0 (was gap+0x3B8, 104 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x3B8[104] = {
	#include <PurinModel/gap_0x24F8_sub_0x3B8.data.inc.c>
};

/* gap sub-block @ 0x2918 (was gap+0x420, 32 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x420[32] = {
	#include <PurinModel/gap_0x24F8_sub_0x420.data.inc.c>
};

/* gap sub-block @ 0x2938 (was gap+0x440, 20 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x440[20] = {
	#include <PurinModel/gap_0x24F8_sub_0x440.data.inc.c>
};

/* gap sub-block @ 0x294C (was gap+0x454, 32 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x454[32] = {
	#include <PurinModel/gap_0x24F8_sub_0x454.data.inc.c>
};

/* gap sub-block @ 0x296C (was gap+0x474, 20 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x474[20] = {
	#include <PurinModel/gap_0x24F8_sub_0x474.data.inc.c>
};

/* gap sub-block @ 0x2980 (was gap+0x488, 20 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x488[20] = {
	#include <PurinModel/gap_0x24F8_sub_0x488.data.inc.c>
};

/* gap sub-block @ 0x2994 (was gap+0x49C, 20 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x49C[20] = {
	#include <PurinModel/gap_0x24F8_sub_0x49C.data.inc.c>
};

/* gap sub-block @ 0x29A8 (was gap+0x4B0, 24 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x4B0[24] = {
	#include <PurinModel/gap_0x24F8_sub_0x4B0.data.inc.c>
};

/* gap sub-block @ 0x29C0 (was gap+0x4C8, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x4C8[120] = {
	#include <PurinModel/gap_0x24F8_sub_0x4C8.data.inc.c>
};

/* gap sub-block @ 0x2A38 (was gap+0x540, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x540[120] = {
	#include <PurinModel/gap_0x24F8_sub_0x540.data.inc.c>
};

/* gap sub-block @ 0x2AB0 (was gap+0x5B8, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x5B8[120] = {
	#include <PurinModel/gap_0x24F8_sub_0x5B8.data.inc.c>
};

/* gap sub-block @ 0x2B28 (was gap+0x630, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x630[120] = {
	#include <PurinModel/gap_0x24F8_sub_0x630.data.inc.c>
};

/* gap sub-block @ 0x2BA0 (was gap+0x6A8, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x6A8[120] = {
	#include <PurinModel/gap_0x24F8_sub_0x6A8.data.inc.c>
};

/* gap sub-block @ 0x2C18 (was gap+0x720, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x720[120] = {
	#include <PurinModel/gap_0x24F8_sub_0x720.data.inc.c>
};

/* gap sub-block @ 0x2C90 (was gap+0x798, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x798[120] = {
	#include <PurinModel/gap_0x24F8_sub_0x798.data.inc.c>
};

/* gap sub-block @ 0x2D08 (was gap+0x810, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x810[120] = {
	#include <PurinModel/gap_0x24F8_sub_0x810.data.inc.c>
};

/* gap sub-block @ 0x2D80 (was gap+0x888, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x888[120] = {
	#include <PurinModel/gap_0x24F8_sub_0x888.data.inc.c>
};

/* gap sub-block @ 0x2DF8 (was gap+0x900, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x900[120] = {
	#include <PurinModel/gap_0x24F8_sub_0x900.data.inc.c>
};

/* gap sub-block @ 0x2E70 (was gap+0x978, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x978[120] = {
	#include <PurinModel/gap_0x24F8_sub_0x978.data.inc.c>
};

/* gap sub-block @ 0x2EE8 (was gap+0x9F0, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0x9F0[120] = {
	#include <PurinModel/gap_0x24F8_sub_0x9F0.data.inc.c>
};

/* gap sub-block @ 0x2F60 (was gap+0xA68, 120 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0xA68[120] = {
	#include <PurinModel/gap_0x24F8_sub_0xA68.data.inc.c>
};

/* gap sub-block @ 0x2FD8 (was gap+0xAE0, 32 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0xAE0[32] = {
	#include <PurinModel/gap_0x24F8_sub_0xAE0.data.inc.c>
};

/* gap sub-block @ 0x2FF8 (was gap+0xB00, 8 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0xB00[8] = {
	#include <PurinModel/gap_0x24F8_sub_0xB00.data.inc.c>
};

/* gap sub-block @ 0x3000 (was gap+0xB08, 8 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0xB08[8] = {
	#include <PurinModel/gap_0x24F8_sub_0xB08.data.inc.c>
};

/* gap sub-block @ 0x3008 (was gap+0xB10, 8 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0xB10[8] = {
	#include <PurinModel/gap_0x24F8_sub_0xB10.data.inc.c>
};

/* gap sub-block @ 0x3010 (was gap+0xB18, 8 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0xB18[8] = {
	#include <PurinModel/gap_0x24F8_sub_0xB18.data.inc.c>
};

/* gap sub-block @ 0x3018 (was gap+0xB20, 8 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0xB20[8] = {
	#include <PurinModel/gap_0x24F8_sub_0xB20.data.inc.c>
};

/* gap sub-block @ 0x3020 (was gap+0xB28, 8 bytes) */
u8 dPurinModel_gap_0x24F8_sub_0xB28[8] = {
	#include <PurinModel/gap_0x24F8_sub_0xB28.data.inc.c>
};

/* Vtx: Vtx_0x3028 @ 0x3028 (10 vertices) */
Vtx dPurinModel_Vtx_0x3028_Vtx[10] = {
	#include <PurinModel/Vtx_0x3028.vtx.inc.c>
};

/* Vtx: Vtx_0x30C8 @ 0x30C8 (10 vertices) */
Vtx dPurinModel_Vtx_0x30C8_Vtx[10] = {
	#include <PurinModel/Vtx_0x30C8.vtx.inc.c>
};

/* Vtx: Vtx_0x3168 @ 0x3168 (5 vertices) */
Vtx dPurinModel_Vtx_0x3168_Vtx[5] = {
	#include <PurinModel/Vtx_0x3168.vtx.inc.c>
};

/* Vtx: Vtx_0x31B8 @ 0x31B8 (3 vertices) */
Vtx dPurinModel_Vtx_0x31B8_Vtx[3] = {
	#include <PurinModel/Vtx_0x31B8.vtx.inc.c>
};

/* Vtx: Vtx_0x31E8 @ 0x31E8 (3 vertices) */
Vtx dPurinModel_Vtx_0x31E8_Vtx[3] = {
	#include <PurinModel/Vtx_0x31E8.vtx.inc.c>
};

/* Vtx: Vtx_0x3218 @ 0x3218 (32 vertices) */
Vtx dPurinModel_Vtx_0x3218_Vtx[32] = {
	#include <PurinModel/Vtx_0x3218.vtx.inc.c>
};

/* Vtx: Vtx_0x3418 @ 0x3418 (5 vertices) */
Vtx dPurinModel_Vtx_0x3418_Vtx[5] = {
	#include <PurinModel/Vtx_0x3418.vtx.inc.c>
};

/* Vtx: Vtx_0x3468 @ 0x3468 (6 vertices) */
Vtx dPurinModel_Vtx_0x3468_Vtx[6] = {
	#include <PurinModel/Vtx_0x3468.vtx.inc.c>
};

/* Vtx: Vtx_0x34C8 @ 0x34C8 (5 vertices) */
Vtx dPurinModel_Vtx_0x34C8_Vtx[5] = {
	#include <PurinModel/Vtx_0x34C8.vtx.inc.c>
};

/* Vtx: Vtx_0x3518 @ 0x3518 (13 vertices) */
Vtx dPurinModel_Vtx_0x3518_Vtx[13] = {
	#include <PurinModel/Vtx_0x3518.vtx.inc.c>
};

/* Vtx: Vtx_0x35E8 @ 0x35E8 (1 vertices) */
Vtx dPurinModel_Vtx_0x35E8_Vtx[1] = {
	#include <PurinModel/Vtx_0x35E8.vtx.inc.c>
};

/* Vtx: Vtx_0x35F8 @ 0x35F8 (1 vertices) */
Vtx dPurinModel_Vtx_0x35F8_Vtx[1] = {
	#include <PurinModel/Vtx_0x35F8.vtx.inc.c>
};

/* Raw data from file offset 0x3608 to 0x3668 (96 bytes) */
u8 dPurinModel_gap_0x3608[96] = {
	#include <PurinModel/gap_0x3608.data.inc.c>
};

/* Vtx: Vtx_0x3668 @ 0x3668 (1 vertices) */
Vtx dPurinModel_Vtx_0x3668_Vtx[1] = {
	#include <PurinModel/Vtx_0x3668.vtx.inc.c>
};

/* Vtx: Vtx_0x3678 @ 0x3678 (4 vertices) */
Vtx dPurinModel_Vtx_0x3678_Vtx[4] = {
	#include <PurinModel/Vtx_0x3678.vtx.inc.c>
};

/* Vtx: Vtx_0x36B8 @ 0x36B8 (2 vertices) */
Vtx dPurinModel_Vtx_0x36B8_Vtx[2] = {
	#include <PurinModel/Vtx_0x36B8.vtx.inc.c>
};

/* Vtx: Vtx_0x36D8 @ 0x36D8 (1 vertices) */
Vtx dPurinModel_Vtx_0x36D8_Vtx[1] = {
	#include <PurinModel/Vtx_0x36D8.vtx.inc.c>
};

/* Vtx: Vtx_0x36E8 @ 0x36E8 (2 vertices) */
Vtx dPurinModel_Vtx_0x36E8_Vtx[2] = {
	#include <PurinModel/Vtx_0x36E8.vtx.inc.c>
};

/* Vtx: Vtx_0x3708 @ 0x3708 (4 vertices) */
Vtx dPurinModel_Vtx_0x3708_Vtx[4] = {
	#include <PurinModel/Vtx_0x3708.vtx.inc.c>
};

/* Vtx: Vtx_0x3748 @ 0x3748 (3 vertices) */
Vtx dPurinModel_Vtx_0x3748_Vtx[3] = {
	#include <PurinModel/Vtx_0x3748.vtx.inc.c>
};

/* Vtx: Vtx_0x3778 @ 0x3778 (9 vertices) */
Vtx dPurinModel_Vtx_0x3778_Vtx[9] = {
	#include <PurinModel/Vtx_0x3778.vtx.inc.c>
};

/* Vtx: Vtx_0x3808 @ 0x3808 (9 vertices) */
Vtx dPurinModel_Vtx_0x3808_Vtx[9] = {
	#include <PurinModel/Vtx_0x3808.vtx.inc.c>
};

/* DisplayList: Joint_0x3898 @ 0x3898 (1144 bytes, 143 cmds) */
Gfx dPurinModel_Joint_0x3898_DisplayList[143] = {
	#include <PurinModel/Joint_0x3898.dl.inc.c>
};

/* DisplayList: Joint_0x3D10 @ 0x3D10 (128 bytes, 16 cmds) */
Gfx dPurinModel_Joint_0x3D10_DisplayList[16] = {
	#include <PurinModel/Joint_0x3D10.dl.inc.c>
};

/* DisplayList: Joint_0x3D90 @ 0x3D90 (168 bytes, 21 cmds) */
Gfx dPurinModel_Joint_0x3D90_DisplayList[21] = {
	#include <PurinModel/Joint_0x3D90.dl.inc.c>
};

/* DisplayList: Joint_0x3E38 @ 0x3E38 (160 bytes, 20 cmds) */
Gfx dPurinModel_Joint_0x3E38_DisplayList[20] = {
	#include <PurinModel/Joint_0x3E38.dl.inc.c>
};

/* DisplayList: Joint_0x3ED8 @ 0x3ED8 (184 bytes, 23 cmds) */
Gfx dPurinModel_Joint_0x3ED8_DisplayList[23] = {
	#include <PurinModel/Joint_0x3ED8.dl.inc.c>
};

/* DisplayList: Joint_0x3F90 @ 0x3F90 (136 bytes, 17 cmds) */
Gfx dPurinModel_Joint_0x3F90_DisplayList[17] = {
	#include <PurinModel/Joint_0x3F90.dl.inc.c>
};

/* DisplayList: Joint_0x4018 @ 0x4018 (136 bytes, 17 cmds) */
Gfx dPurinModel_Joint_0x4018_DisplayList[17] = {
	#include <PurinModel/Joint_0x4018.dl.inc.c>
};

/* DObjDesc: JointTree_0x40A0 @ 0x40A0 (29 entries) */
DObjDesc dPurinModel_JointTree_0x40A0[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPurinModel_Joint_0x3898_DisplayList, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -19.500003814697266f, 39.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -94.80000305175781f, -30.0f }, { 0.0f, -1.0471980571746826f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPurinModel_Joint_0x3D10_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.9038249850273132f, -0.6086369752883911f, -0.28664499521255493f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x3D90_DisplayList, { 72.0719985961914f, 1.4000000192027073e-05f, -1.5999999959603883e-05f }, { 0.0f, 0.0f, -0.470427006483078f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -94.79998016357422f, -30.0f }, { 0.0f, 1.0471980571746826f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPurinModel_Joint_0x3E38_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.9065089821815491f, 0.6037049889564514f, -0.29135701060295105f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x3ED8_DisplayList, { 72.0719985961914f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.45826199650764465f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 45.629737854003906f, -0.135670006275177f, -1.5999999959603883e-05f }, { 0.7883700132369995f, -1.570796012878418f, 0.7883700132369995f }, { 1.0f, 1.0399980545043945f, 1.0000009536743164f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { -0.5355820059776306f, -0.552141010761261f, 0.37861400842666626f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x3F90_DisplayList, { 9.999999974752427e-07f, 0.0f, 7.000000096013537e-06f }, { -3.744776964187622f, 3.036932945251465f, -3.2115440368652344f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.5355820059776306f, 0.552141010761261f, 0.37861400842666626f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x4018_DisplayList, { 0.0f, 0.0f, 0.0f }, { -2.538408041000366f, -3.036932945251465f, 3.0716419219970703f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 1.720275293065678e-28f, 0.0f, 0.0f }, { 0.0f, 1.7281647447122388e-28f, 1.7518306922394907e-28f } },
	{ 0, (void*)0x00000000, { 1.7597194216623223e-28f, 1.8228284144506248e-28f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x459C to 0x4BF0 (1620 bytes) */
/* gap sub-block @ 0x459C (was gap+0x0, 28 bytes) */
u8 dPurinModel_gap_0x459C[28] = {
	#include <PurinModel/gap_0x459C.data.inc.c>
};

/* gap sub-block @ 0x45B8 (was gap+0x1C, 92 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x1C[92] = {
	#include <PurinModel/gap_0x459C_sub_0x1C.data.inc.c>
};

/* gap sub-block @ 0x4614 (was gap+0x78, 92 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x78[92] = {
	#include <PurinModel/gap_0x459C_sub_0x78.data.inc.c>
};

/* gap sub-block @ 0x4670 (was gap+0xD4, 48 bytes) */
u8 dPurinModel_gap_0x459C_sub_0xD4[48] = {
	#include <PurinModel/gap_0x459C_sub_0xD4.data.inc.c>
};

/* gap sub-block @ 0x46A0 (was gap+0x104, 48 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x104[48] = {
	#include <PurinModel/gap_0x459C_sub_0x104.data.inc.c>
};

/* gap sub-block @ 0x46D0 (was gap+0x134, 48 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x134[48] = {
	#include <PurinModel/gap_0x459C_sub_0x134.data.inc.c>
};

/* gap sub-block @ 0x4700 (was gap+0x164, 48 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x164[48] = {
	#include <PurinModel/gap_0x459C_sub_0x164.data.inc.c>
};

/* gap sub-block @ 0x4730 (was gap+0x194, 48 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x194[48] = {
	#include <PurinModel/gap_0x459C_sub_0x194.data.inc.c>
};

/* gap sub-block @ 0x4760 (was gap+0x1C4, 48 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x1C4[48] = {
	#include <PurinModel/gap_0x459C_sub_0x1C4.data.inc.c>
};

/* gap sub-block @ 0x4790 (was gap+0x1F4, 48 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x1F4[48] = {
	#include <PurinModel/gap_0x459C_sub_0x1F4.data.inc.c>
};

/* gap sub-block @ 0x47C0 (was gap+0x224, 48 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x224[48] = {
	#include <PurinModel/gap_0x459C_sub_0x224.data.inc.c>
};

/* gap sub-block @ 0x47F0 (was gap+0x254, 48 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x254[48] = {
	#include <PurinModel/gap_0x459C_sub_0x254.data.inc.c>
};

/* gap sub-block @ 0x4820 (was gap+0x284, 48 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x284[48] = {
	#include <PurinModel/gap_0x459C_sub_0x284.data.inc.c>
};

/* gap sub-block @ 0x4850 (was gap+0x2B4, 48 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x2B4[48] = {
	#include <PurinModel/gap_0x459C_sub_0x2B4.data.inc.c>
};

/* gap sub-block @ 0x4880 (was gap+0x2E4, 28 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x2E4[28] = {
	#include <PurinModel/gap_0x459C_sub_0x2E4.data.inc.c>
};

/* gap sub-block @ 0x489C (was gap+0x300, 4 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x300[4] = {
	#include <PurinModel/gap_0x459C_sub_0x300.data.inc.c>
};

/* gap sub-block @ 0x48A0 (was gap+0x304, 4 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x304[4] = {
	#include <PurinModel/gap_0x459C_sub_0x304.data.inc.c>
};

/* gap sub-block @ 0x48A4 (was gap+0x308, 4 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x308[4] = {
	#include <PurinModel/gap_0x459C_sub_0x308.data.inc.c>
};

/* gap sub-block @ 0x48A8 (was gap+0x30C, 4 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x30C[4] = {
	#include <PurinModel/gap_0x459C_sub_0x30C.data.inc.c>
};

/* gap sub-block @ 0x48AC (was gap+0x310, 4 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x310[4] = {
	#include <PurinModel/gap_0x459C_sub_0x310.data.inc.c>
};

/* gap sub-block @ 0x48B0 (was gap+0x314, 20 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x314[20] = {
	#include <PurinModel/gap_0x459C_sub_0x314.data.inc.c>
};

/* gap sub-block @ 0x48C4 (was gap+0x328, 12 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x328[12] = {
	#include <PurinModel/gap_0x459C_sub_0x328.data.inc.c>
};

/* gap sub-block @ 0x48D0 (was gap+0x334, 16 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x334[16] = {
	#include <PurinModel/gap_0x459C_sub_0x334.data.inc.c>
};

/* gap sub-block @ 0x48E0 (was gap+0x344, 120 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x344[120] = {
	#include <PurinModel/gap_0x459C_sub_0x344.data.inc.c>
};

/* gap sub-block @ 0x4958 (was gap+0x3BC, 120 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x3BC[120] = {
	#include <PurinModel/gap_0x459C_sub_0x3BC.data.inc.c>
};

/* gap sub-block @ 0x49D0 (was gap+0x434, 16 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x434[16] = {
	#include <PurinModel/gap_0x459C_sub_0x434.data.inc.c>
};

/* gap sub-block @ 0x49E0 (was gap+0x444, 64 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x444[64] = {
	#include <PurinModel/gap_0x459C_sub_0x444.data.inc.c>
};

/* gap sub-block @ 0x4A20 (was gap+0x484, 64 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x484[64] = {
	#include <PurinModel/gap_0x459C_sub_0x484.data.inc.c>
};

/* gap sub-block @ 0x4A60 (was gap+0x4C4, 308 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x4C4[308] = {
	#include <PurinModel/gap_0x459C_sub_0x4C4.data.inc.c>
};

/* gap sub-block @ 0x4B94 (was gap+0x5F8, 40 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x5F8[40] = {
	#include <PurinModel/gap_0x459C_sub_0x5F8.data.inc.c>
};

/* gap sub-block @ 0x4BBC (was gap+0x620, 40 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x620[40] = {
	#include <PurinModel/gap_0x459C_sub_0x620.data.inc.c>
};

/* gap sub-block @ 0x4BE4 (was gap+0x648, 12 bytes) */
u8 dPurinModel_gap_0x459C_sub_0x648[12] = {
	#include <PurinModel/gap_0x459C_sub_0x648.data.inc.c>
};

/* Vtx: Vtx_0x4BF0 @ 0x4BF0 (6 vertices) */
Vtx dPurinModel_Vtx_0x4BF0_Vtx[6] = {
	#include <PurinModel/Vtx_0x4BF0.vtx.inc.c>
};

/* Vtx: Vtx_0x4C50 @ 0x4C50 (2 vertices) */
Vtx dPurinModel_Vtx_0x4C50_Vtx[2] = {
	#include <PurinModel/Vtx_0x4C50.vtx.inc.c>
};

/* Vtx: Vtx_0x4C70 @ 0x4C70 (2 vertices) */
Vtx dPurinModel_Vtx_0x4C70_Vtx[2] = {
	#include <PurinModel/Vtx_0x4C70.vtx.inc.c>
};

/* Vtx: Vtx_0x4C90 @ 0x4C90 (1 vertices) */
Vtx dPurinModel_Vtx_0x4C90_Vtx[1] = {
	#include <PurinModel/Vtx_0x4C90.vtx.inc.c>
};

/* Vtx: Vtx_0x4CA0 @ 0x4CA0 (1 vertices) */
Vtx dPurinModel_Vtx_0x4CA0_Vtx[1] = {
	#include <PurinModel/Vtx_0x4CA0.vtx.inc.c>
};

/* Raw data from file offset 0x4CB0 to 0x4CF0 (64 bytes) */
u8 dPurinModel_gap_0x4CB0[64] = {
	#include <PurinModel/gap_0x4CB0.data.inc.c>
};

/* Vtx: Vtx_0x4CF0 @ 0x4CF0 (1 vertices) */
Vtx dPurinModel_Vtx_0x4CF0_Vtx[1] = {
	#include <PurinModel/Vtx_0x4CF0.vtx.inc.c>
};

/* Raw data from file offset 0x4D00 to 0x4D10 (16 bytes) */
u8 dPurinModel_gap_0x4D00[16] = {
	#include <PurinModel/gap_0x4D00.data.inc.c>
};

/* Vtx: Vtx_0x4D10 @ 0x4D10 (1 vertices) */
Vtx dPurinModel_Vtx_0x4D10_Vtx[1] = {
	#include <PurinModel/Vtx_0x4D10.vtx.inc.c>
};

/* Raw data from file offset 0x4D20 to 0x4D30 (16 bytes) */
u8 dPurinModel_gap_0x4D20[16] = {
	#include <PurinModel/gap_0x4D20.data.inc.c>
};

/* Vtx: Vtx_0x4D30 @ 0x4D30 (1 vertices) */
Vtx dPurinModel_Vtx_0x4D30_Vtx[1] = {
	#include <PurinModel/Vtx_0x4D30.vtx.inc.c>
};

/* Vtx: Vtx_0x4D40 @ 0x4D40 (1 vertices) */
Vtx dPurinModel_Vtx_0x4D40_Vtx[1] = {
	#include <PurinModel/Vtx_0x4D40.vtx.inc.c>
};

/* Vtx: Vtx_0x4D50 @ 0x4D50 (1 vertices) */
Vtx dPurinModel_Vtx_0x4D50_Vtx[1] = {
	#include <PurinModel/Vtx_0x4D50.vtx.inc.c>
};

/* Raw data from file offset 0x4D60 to 0x4D70 (16 bytes) */
u8 dPurinModel_gap_0x4D60[16] = {
	#include <PurinModel/gap_0x4D60.data.inc.c>
};

/* Vtx: Vtx_0x4D70 @ 0x4D70 (1 vertices) */
Vtx dPurinModel_Vtx_0x4D70_Vtx[1] = {
	#include <PurinModel/Vtx_0x4D70.vtx.inc.c>
};

/* Raw data from file offset 0x4D80 to 0x4D90 (16 bytes) */
u8 dPurinModel_gap_0x4D80[16] = {
	#include <PurinModel/gap_0x4D80.data.inc.c>
};

/* Vtx: Vtx_0x4D90 @ 0x4D90 (1 vertices) */
Vtx dPurinModel_Vtx_0x4D90_Vtx[1] = {
	#include <PurinModel/Vtx_0x4D90.vtx.inc.c>
};

/* Vtx: Vtx_0x4DA0 @ 0x4DA0 (2 vertices) */
Vtx dPurinModel_Vtx_0x4DA0_Vtx[2] = {
	#include <PurinModel/Vtx_0x4DA0.vtx.inc.c>
};

/* Vtx: Vtx_0x4DC0 @ 0x4DC0 (1 vertices) */
Vtx dPurinModel_Vtx_0x4DC0_Vtx[1] = {
	#include <PurinModel/Vtx_0x4DC0.vtx.inc.c>
};

/* Raw data from file offset 0x4DD0 to 0x4DE0 (16 bytes) */
u8 dPurinModel_gap_0x4DD0[16] = {
	#include <PurinModel/gap_0x4DD0.data.inc.c>
};

/* Vtx: Vtx_0x4DE0 @ 0x4DE0 (1 vertices) */
Vtx dPurinModel_Vtx_0x4DE0_Vtx[1] = {
	#include <PurinModel/Vtx_0x4DE0.vtx.inc.c>
};

/* Raw data from file offset 0x4DF0 to 0x4E00 (16 bytes) */
u8 dPurinModel_gap_0x4DF0[16] = {
	#include <PurinModel/gap_0x4DF0.data.inc.c>
};

/* Vtx: Vtx_0x4E00 @ 0x4E00 (1 vertices) */
Vtx dPurinModel_Vtx_0x4E00_Vtx[1] = {
	#include <PurinModel/Vtx_0x4E00.vtx.inc.c>
};

/* Raw data from file offset 0x4E10 to 0x4E30 (32 bytes) */
u8 dPurinModel_gap_0x4E10[32] = {
	#include <PurinModel/gap_0x4E10.data.inc.c>
};

/* Vtx: Vtx_0x4E30 @ 0x4E30 (2 vertices) */
Vtx dPurinModel_Vtx_0x4E30_Vtx[2] = {
	#include <PurinModel/Vtx_0x4E30.vtx.inc.c>
};

/* Vtx: Vtx_0x4E50 @ 0x4E50 (4 vertices) */
Vtx dPurinModel_Vtx_0x4E50_Vtx[4] = {
	#include <PurinModel/Vtx_0x4E50.vtx.inc.c>
};

/* Vtx: Vtx_0x4E90 @ 0x4E90 (1 vertices) */
Vtx dPurinModel_Vtx_0x4E90_Vtx[1] = {
	#include <PurinModel/Vtx_0x4E90.vtx.inc.c>
};

/* Vtx: Vtx_0x4EA0 @ 0x4EA0 (1 vertices) */
Vtx dPurinModel_Vtx_0x4EA0_Vtx[1] = {
	#include <PurinModel/Vtx_0x4EA0.vtx.inc.c>
};

/* Vtx: Vtx_0x4EB0 @ 0x4EB0 (17 vertices) */
Vtx dPurinModel_Vtx_0x4EB0_Vtx[17] = {
	#include <PurinModel/Vtx_0x4EB0.vtx.inc.c>
};

/* Vtx: Vtx_0x4FC0 @ 0x4FC0 (1 vertices) */
Vtx dPurinModel_Vtx_0x4FC0_Vtx[1] = {
	#include <PurinModel/Vtx_0x4FC0.vtx.inc.c>
};

/* Vtx: Vtx_0x4FD0 @ 0x4FD0 (15 vertices) */
Vtx dPurinModel_Vtx_0x4FD0_Vtx[15] = {
	#include <PurinModel/Vtx_0x4FD0.vtx.inc.c>
};

/* Vtx: Vtx_0x50C0 @ 0x50C0 (3 vertices) */
Vtx dPurinModel_Vtx_0x50C0_Vtx[3] = {
	#include <PurinModel/Vtx_0x50C0.vtx.inc.c>
};

/* Vtx: Vtx_0x50F0 @ 0x50F0 (9 vertices) */
Vtx dPurinModel_Vtx_0x50F0_Vtx[9] = {
	#include <PurinModel/Vtx_0x50F0.vtx.inc.c>
};

/* Vtx: Vtx_0x5180 @ 0x5180 (8 vertices) */
Vtx dPurinModel_Vtx_0x5180_Vtx[8] = {
	#include <PurinModel/Vtx_0x5180.vtx.inc.c>
};

/* Vtx: Vtx_0x5200 @ 0x5200 (12 vertices) */
Vtx dPurinModel_Vtx_0x5200_Vtx[12] = {
	#include <PurinModel/Vtx_0x5200.vtx.inc.c>
};

/* Vtx: Vtx_0x52C0 @ 0x52C0 (9 vertices) */
Vtx dPurinModel_Vtx_0x52C0_Vtx[9] = {
	#include <PurinModel/Vtx_0x52C0.vtx.inc.c>
};

/* Vtx: Vtx_0x5350 @ 0x5350 (13 vertices) */
Vtx dPurinModel_Vtx_0x5350_Vtx[13] = {
	#include <PurinModel/Vtx_0x5350.vtx.inc.c>
};

/* Vtx: Vtx_0x5420 @ 0x5420 (10 vertices) */
Vtx dPurinModel_Vtx_0x5420_Vtx[10] = {
	#include <PurinModel/Vtx_0x5420.vtx.inc.c>
};

/* DisplayList: Joint_0x54C0 @ 0x54C0 (912 bytes, 114 cmds) */
Gfx dPurinModel_Joint_0x54C0_DisplayList[114] = {
	#include <PurinModel/Joint_0x54C0.dl.inc.c>
};

/* DisplayList: Joint_0x5850 @ 0x5850 (128 bytes, 16 cmds) */
Gfx dPurinModel_Joint_0x5850_DisplayList[16] = {
	#include <PurinModel/Joint_0x5850.dl.inc.c>
};

/* DisplayList: Joint_0x58D0 @ 0x58D0 (168 bytes, 21 cmds) */
Gfx dPurinModel_Joint_0x58D0_DisplayList[21] = {
	#include <PurinModel/Joint_0x58D0.dl.inc.c>
};

/* DisplayList: Joint_0x5978 @ 0x5978 (128 bytes, 16 cmds) */
Gfx dPurinModel_Joint_0x5978_DisplayList[16] = {
	#include <PurinModel/Joint_0x5978.dl.inc.c>
};

/* DisplayList: Joint_0x59F8 @ 0x59F8 (168 bytes, 21 cmds) */
Gfx dPurinModel_Joint_0x59F8_DisplayList[21] = {
	#include <PurinModel/Joint_0x59F8.dl.inc.c>
};

/* DisplayList: Joint_0x5AA0 @ 0x5AA0 (136 bytes, 17 cmds) */
Gfx dPurinModel_Joint_0x5AA0_DisplayList[17] = {
	#include <PurinModel/Joint_0x5AA0.dl.inc.c>
};

/* DisplayList: Joint_0x5B28 @ 0x5B28 (136 bytes, 17 cmds) */
Gfx dPurinModel_Joint_0x5B28_DisplayList[17] = {
	#include <PurinModel/Joint_0x5B28.dl.inc.c>
};

/* DObjDesc: JointTree_0x5BB0 @ 0x5BB0 (26 entries) */
DObjDesc dPurinModel_JointTree_0x5BB0[] = {
	{ 0, (void*)0x00000000, { 0.0f, 182.09222412109375f, -3.999999989900971e-06f }, { -0.785398006439209f, 1.1344640254974365f, -0.5934119820594788f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 58.49999237060547f, 39.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPurinModel_Joint_0x54C0_DisplayList, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -94.80000305175781f, -30.0f }, { 0.0f, -1.0471980571746826f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPurinModel_Joint_0x5850_DisplayList, { 0.0f, 0.0f, 0.0f }, { 1.3153259754180908f, -0.7221639752388f, -1.1007790565490723f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x58D0_DisplayList, { 72.0719985961914f, 1.4000000192027073e-05f, -1.5999999959603883e-05f }, { 0.0f, 0.0f, -0.013074999675154686f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, -94.79998016357422f, -30.0f }, { 0.0f, 1.0471980571746826f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -132.0f, 82.5f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPurinModel_Joint_0x5978_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.3026680052280426f, 1.3106609582901f, -0.29833701252937317f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x59F8_DisplayList, { 72.0719985961914f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.16277199983596802f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 45.629737854003906f, -0.135670006275177f, -1.5999999959603883e-05f }, { 0.7883700132369995f, -1.570796012878418f, 0.7883700132369995f }, { 1.0f, 1.0399980545043945f, 1.0000009536743164f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { -2.0617239475250244f, -0.5303580164909363f, -0.92569899559021f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x5AA0_DisplayList, { 9.999999974752427e-07f, 0.0f, 7.000000096013537e-06f }, { -4.259256839752197f, 0.833840012550354f, -4.074271202087402f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 78.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 2.7891058921813965f, 0.7046949863433838f, -0.8597949743270874f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 61.84658432006836f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.013935999944806099f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 60.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPurinModel_Joint_0x5B28_DisplayList, { 0.0f, 0.0f, 0.0f }, { -2.490288019180298f, -0.4021880030632019f, 2.368514060974121f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x6028 to 0x6948 (2336 bytes) */
/* gap sub-block @ 0x6028 (was gap+0x0, 8 bytes) */
u8 dPurinModel_gap_0x6028[8] = {
	#include <PurinModel/gap_0x6028.data.inc.c>
};

/* gap sub-block @ 0x6030 (was gap+0x8, 80 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x8[80] = {
	#include <PurinModel/gap_0x6028_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x6080 (was gap+0x58, 336 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x58[336] = {
	#include <PurinModel/gap_0x6028_sub_0x58.data.inc.c>
};

/* gap sub-block @ 0x61D0 (was gap+0x1A8, 144 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x1A8[144] = {
	#include <PurinModel/gap_0x6028_sub_0x1A8.data.inc.c>
};

/* gap sub-block @ 0x6260 (was gap+0x238, 224 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x238[224] = {
	#include <PurinModel/gap_0x6028_sub_0x238.data.inc.c>
};

/* gap sub-block @ 0x6340 (was gap+0x318, 144 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x318[144] = {
	#include <PurinModel/gap_0x6028_sub_0x318.data.inc.c>
};

/* gap sub-block @ 0x63D0 (was gap+0x3A8, 80 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x3A8[80] = {
	#include <PurinModel/gap_0x6028_sub_0x3A8.data.inc.c>
};

/* gap sub-block @ 0x6420 (was gap+0x3F8, 32 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x3F8[32] = {
	#include <PurinModel/gap_0x6028_sub_0x3F8.data.inc.c>
};

/* gap sub-block @ 0x6440 (was gap+0x418, 144 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x418[144] = {
	#include <PurinModel/gap_0x6028_sub_0x418.data.inc.c>
};

/* gap sub-block @ 0x64D0 (was gap+0x4A8, 728 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x4A8[728] = {
	#include <PurinModel/gap_0x6028_sub_0x4A8.data.inc.c>
};

/* gap sub-block @ 0x67A8 (was gap+0x780, 40 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x780[40] = {
	#include <PurinModel/gap_0x6028_sub_0x780.data.inc.c>
};

/* gap sub-block @ 0x67D0 (was gap+0x7A8, 136 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x7A8[136] = {
	#include <PurinModel/gap_0x6028_sub_0x7A8.data.inc.c>
};

/* gap sub-block @ 0x6858 (was gap+0x830, 40 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x830[40] = {
	#include <PurinModel/gap_0x6028_sub_0x830.data.inc.c>
};

/* gap sub-block @ 0x6880 (was gap+0x858, 40 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x858[40] = {
	#include <PurinModel/gap_0x6028_sub_0x858.data.inc.c>
};

/* gap sub-block @ 0x68A8 (was gap+0x880, 40 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x880[40] = {
	#include <PurinModel/gap_0x6028_sub_0x880.data.inc.c>
};

/* gap sub-block @ 0x68D0 (was gap+0x8A8, 40 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x8A8[40] = {
	#include <PurinModel/gap_0x6028_sub_0x8A8.data.inc.c>
};

/* gap sub-block @ 0x68F8 (was gap+0x8D0, 40 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x8D0[40] = {
	#include <PurinModel/gap_0x6028_sub_0x8D0.data.inc.c>
};

/* gap sub-block @ 0x6920 (was gap+0x8F8, 40 bytes) */
u8 dPurinModel_gap_0x6028_sub_0x8F8[40] = {
	#include <PurinModel/gap_0x6028_sub_0x8F8.data.inc.c>
};

/* Palette: Lut_0x6948 @ 0x6948 (16 colors RGBA5551) */
u16 dPurinModel_Lut_0x6948_palette[16] = {
	#include <PurinModel/Lut_0x6948.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x6970 (3296 bytes) */
u8 dPurinModel_Tex_0x6970[3296] = {
	#include <PurinModel/Tex_0x6970.tex.inc.c>
};

/* Texture data @ 0x7650 (1080 bytes) */
u8 dPurinModel_Tex_0x7650[1080] = {
	#include <PurinModel/Tex_0x7650.tex.inc.c>
};

/* Texture data for sprite Stock */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Stock (8(16)x10 ci4) */
u8 dPurinModel_Stock_tex[] = {
    #include <PurinModel/Stock.ci4.inc.c>
};

/* Palette: @ 0x7AE0 (16 colors RGBA5551) */
u16 dPurinModel_palette_0x7AE0[16] = {
	#include <PurinModel/palette_0x7AE0.palette.inc.c>
};

/* Raw data from file offset 0x7B00 to 0x7BA0 (160 bytes) */
/* gap sub-block @ 0x7B00 (was gap+0x0, 8 bytes) */
u8 dPurinModel_gap_0x7B00[8] = {
	#include <PurinModel/gap_0x7B00.data.inc.c>
};

/* gap sub-block @ 0x7B08 (was gap+0x8, 40 bytes) */
u8 dPurinModel_gap_0x7B00_sub_0x8[40] = {
	#include <PurinModel/gap_0x7B00_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x7B30 (was gap+0x30, 40 bytes) */
u8 dPurinModel_gap_0x7B00_sub_0x30[40] = {
	#include <PurinModel/gap_0x7B00_sub_0x30.data.inc.c>
};

/* gap sub-block @ 0x7B58 (was gap+0x58, 40 bytes) */
u8 dPurinModel_gap_0x7B00_sub_0x58[40] = {
	#include <PurinModel/gap_0x7B00_sub_0x58.data.inc.c>
};

/* gap sub-block @ 0x7B80 (was gap+0x80, 32 bytes) */
u8 dPurinModel_gap_0x7B00_sub_0x80[32] = {
	#include <PurinModel/gap_0x7B00_sub_0x80.data.inc.c>
};

/* Sprite: Stock */

/* Sprite: Stock (8x10 ci4) */

Bitmap dPurinModel_Stock_bitmaps[] = {
	{ 8, 16, 0, 0, dPurinModel_Stock_tex, 10, 0 },
};

Sprite dPurinModel_Stock = {
	0, 0,
	8, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dPurinModel_palette_0x7AE0,
	0, 1,
	1, 36,
	10, 10,
	2, 0,
	(Bitmap*)dPurinModel_Stock_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: FTEmblem */

Gfx dPurinModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (24(32)x24 i4) */
u8 dPurinModel_FTEmblem_tex[] = {
    #include <PurinModel/FTEmblem.i4.inc.c>
};

Bitmap dPurinModel_FTEmblem_bitmaps[] = {
	{ 24, 32, 0, 0, dPurinModel_FTEmblem_tex, 24, 0 },
};

/* Sprite: FTEmblem (24x24 i4) */
Sprite dPurinModel_FTEmblem = {
	0, 0,
	24, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	24, 24,
	4, 0,
	(Bitmap*)dPurinModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

#endif  /* REGION_US */
