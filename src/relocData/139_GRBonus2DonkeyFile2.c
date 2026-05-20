/* relocData file 139: GRBonus2DonkeyFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Raw data from file offset 0x0000 to 0x0848 (2120 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 64 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0000[4] = {
	#include <GRBonus2DonkeyFile2/gap_0x0000.vtx.inc.c>
};

/* Vtx: gap_0x0000_sub_0x40 @ 0x40 (4 vertices) */
Vtx dGRBonus2DonkeyFile2_gap_0x0000_sub_0x40[4] = {
	#include <GRBonus2DonkeyFile2/gap_0x0000_sub_0x40.vtx.inc.c>
};

/* Vtx @ 0x0080 (32 vertices) */
Vtx dGRBonus2DonkeyFile2_gap_0x0000_sub_0x80[32] = {
	#include <GRBonus2DonkeyFile2/gap_0x0000_sub_0x80.vtx.inc.c>
};

/* Vtx: gap_0x0000_sub_0x280 @ 0x280 (28 vertices) */
Vtx dGRBonus2DonkeyFile2_gap_0x0000_sub_0x280[28] = {
	#include <GRBonus2DonkeyFile2/gap_0x0000_sub_0x280.vtx.inc.c>
};

/* Vtx: gap_0x0000_sub_0x440 @ 0x440 (8 vertices) */
Vtx dGRBonus2DonkeyFile2_gap_0x0000_sub_0x440[8] = {
	#include <GRBonus2DonkeyFile2/gap_0x0000_sub_0x440.vtx.inc.c>
};

/* Merged Gfx DL @ 0x4C0 — 3 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dGRBonus2DonkeyFile2_gap_0x0000_sub_0x4C0[23] = {
	#include <GRBonus2DonkeyFile2/gap_0x0000_sub_0x4C0.dl.inc.c>
};

/* gap sub-block @ 0x0578 (was gap+0x578, 32 bytes) */
Gfx dGRBonus2DonkeyFile2_DL_0x0578[4] = {
	#include <GRBonus2DonkeyFile2/DL_0x0578.dl.inc.c>
};

/* Merged Gfx DL @ 0x598 — 2 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dGRBonus2DonkeyFile2_gap_0x0000_sub_0x598[4] = {
	#include <GRBonus2DonkeyFile2/gap_0x0000_sub_0x598.dl.inc.c>
};

/* gap sub-block @ 0x05B8 (was gap+0x5B8, 32 bytes) */
Gfx dGRBonus2DonkeyFile2_DL_0x05B8[4] = {
	#include <GRBonus2DonkeyFile2/DL_0x05B8.dl.inc.c>
};

/* gap sub-block @ 0x05D8 (was gap+0x5D8, 32 bytes) */
Gfx dGRBonus2DonkeyFile2_DL_0x05D8[4] = {
	#include <GRBonus2DonkeyFile2/DL_0x05D8.dl.inc.c>
};

/* gap sub-block @ 0x05F8 (was gap+0x5F8, 32 bytes) */
Gfx dGRBonus2DonkeyFile2_DL_0x05F8[4] = {
	#include <GRBonus2DonkeyFile2/DL_0x05F8.dl.inc.c>
};

/* gap sub-block @ 0x0618 (was gap+0x618, 32 bytes) */
Gfx dGRBonus2DonkeyFile2_DL_0x0618[4] = {
	#include <GRBonus2DonkeyFile2/DL_0x0618.dl.inc.c>
};

/* gap sub-block @ 0x0638 (was gap+0x638, 32 bytes) */
Gfx dGRBonus2DonkeyFile2_DL_0x0638[4] = {
	#include <GRBonus2DonkeyFile2/DL_0x0638.dl.inc.c>
};

/* gap sub-block @ 0x0658 (was gap+0x658, 80 bytes) */
Gfx dGRBonus2DonkeyFile2_DL_0x0658[10] = {
	#include <GRBonus2DonkeyFile2/DL_0x0658.dl.inc.c>
};

/* gap sub-block @ 0x06A8 (was gap+0x6A8, 272 bytes) */
Gfx dGRBonus2DonkeyFile2_DL_0x06A8[34] = {
	#include <GRBonus2DonkeyFile2/DL_0x06A8.dl.inc.c>
};

/* DObjDLLink @ 0x7B8 (2 entries) */
DObjDLLink dGRBonus2DonkeyFile2_DLLink_0x07B8[] = {
	{ 0, (Gfx*)dGRBonus2DonkeyFile2_gap_0x0000_sub_0x4C0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x7C8 (2 entries) */
DObjDLLink dGRBonus2DonkeyFile2_DLLink_0x07C8[] = {
	{ 0, (Gfx*)dGRBonus2DonkeyFile2_gap_0x0000_sub_0x598 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x7D8 (2 entries) */
DObjDLLink dGRBonus2DonkeyFile2_DLLink_0x07D8[] = {
	{ 0, dGRBonus2DonkeyFile2_DL_0x05B8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x7E8 (2 entries) */
DObjDLLink dGRBonus2DonkeyFile2_DLLink_0x07E8[] = {
	{ 0, dGRBonus2DonkeyFile2_DL_0x05D8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x7F8 (2 entries) */
DObjDLLink dGRBonus2DonkeyFile2_DLLink_0x07F8[] = {
	{ 0, dGRBonus2DonkeyFile2_DL_0x05F8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x808 (2 entries) */
DObjDLLink dGRBonus2DonkeyFile2_DLLink_0x0808[] = {
	{ 0, dGRBonus2DonkeyFile2_DL_0x0618 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x818 (2 entries) */
DObjDLLink dGRBonus2DonkeyFile2_DLLink_0x0818[] = {
	{ 0, dGRBonus2DonkeyFile2_DL_0x0638 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x828 (2 entries) */
DObjDLLink dGRBonus2DonkeyFile2_DLLink_0x0828[] = {
	{ 0, dGRBonus2DonkeyFile2_DL_0x0658 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x838 (2 entries) */
DObjDLLink dGRBonus2DonkeyFile2_DLLink_0x0838[] = {
	{ 1, dGRBonus2DonkeyFile2_DL_0x06A8 },
	{ 4, NULL },
};

/* DObjDesc: Layer0DObj @ 0x848 (11 entries) */
DObjDesc dGRBonus2DonkeyFile2_Layer0DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2DonkeyFile2_DLLink_0x07B8, { 1500.0f, 3300.0f, -600.0f }, { 0.0f, 0.0f, 3.1415929794311523f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2DonkeyFile2_DLLink_0x07C8, { 4200.0f, 5100.0f, -600.0f }, { 0.0f, 0.0f, 1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2DonkeyFile2_DLLink_0x07D8, { -6000.0f, -3450.0f, -600.0f }, { 0.0f, 0.0f, 3.1415929794311523f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2DonkeyFile2_DLLink_0x07E8, { -4200.0f, -6450.0f, -600.0f }, { 0.0f, 0.0f, 1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2DonkeyFile2_DLLink_0x07F8, { 750.0f, -6300.0f, -600.0f }, { 0.0f, 0.0f, 1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2DonkeyFile2_DLLink_0x0808, { 6450.0f, 2400.0f, -600.0f }, { 0.0f, 0.0f, 3.1415929794311523f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2DonkeyFile2_DLLink_0x0818, { 2550.0f, -1200.0f, -600.0f }, { 0.0f, 0.0f, 1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2DonkeyFile2_DLLink_0x0828, { -4050.0f, 3000.0f, -600.0f }, { 0.0f, 0.0f, 1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2DonkeyFile2_DLLink_0x0838, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x0A2C to 0x2D90 (9060 bytes) */
PAD(4);

/* gap sub-block @ 0x0A30 (was gap+0x4, 192 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x4[12] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x4.vtx.inc.c>
};

/* gap sub-block @ 0x0AF0 (was gap+0xC4, 384 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0xC4[24] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0xC4.vtx.inc.c>
};

/* gap sub-block @ 0x0C70 (was gap+0x244, 256 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x244[16] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x244.vtx.inc.c>
};

/* gap sub-block @ 0x0D70 (was gap+0x344, 272 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x344[17] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x344.vtx.inc.c>
};

/* gap sub-block @ 0x0E80 (was gap+0x454, 256 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x454[16] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x454.vtx.inc.c>
};

/* gap sub-block @ 0x0F80 (was gap+0x554, 192 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x554[12] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x554.vtx.inc.c>
};

/* gap sub-block @ 0x1040 (was gap+0x614, 384 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x614[24] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x614.vtx.inc.c>
};

/* gap sub-block @ 0x11C0 (was gap+0x794, 512 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x794[32] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x794.vtx.inc.c>
};

/* gap sub-block @ 0x13C0 (was gap+0x994, 320 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x994[20] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x994.vtx.inc.c>
};

/* gap sub-block @ 0x1500 (was gap+0xAD4, 400 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0xAD4[25] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0xAD4.vtx.inc.c>
};

/* gap sub-block @ 0x1690 (was gap+0xC64, 512 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0xC64[32] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0xC64.vtx.inc.c>
};

/* gap sub-block @ 0x1890 (was gap+0xE64, 16 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0xE64[1] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0xE64.vtx.inc.c>
};

/* gap sub-block @ 0x18A0 (was gap+0xE74, 128 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0xE74[8] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0xE74.vtx.inc.c>
};

/* gap sub-block @ 0x1920 (was gap+0xEF4, 272 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0xEF4[17] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0xEF4.vtx.inc.c>
};

/* gap sub-block @ 0x1A30 (was gap+0x1004, 480 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x1004[30] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x1004.vtx.inc.c>
};

/* gap sub-block @ 0x1C10 (was gap+0x11E4, 256 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x11E4[16] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x11E4.vtx.inc.c>
};

/* gap sub-block @ 0x1D10 (was gap+0x12E4, 352 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x12E4[22] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x12E4.vtx.inc.c>
};

/* gap sub-block @ 0x1E70 (was gap+0x1444, 352 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x1444[22] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x1444.vtx.inc.c>
};

/* gap sub-block @ 0x1FD0 (was gap+0x15A4, 288 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x15A4[18] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x15A4.vtx.inc.c>
};

/* gap sub-block @ 0x20F0 (was gap+0x16C4, 512 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x16C4[32] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x16C4.vtx.inc.c>
};

/* gap sub-block @ 0x22F0 (was gap+0x18C4, 64 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x18C4[4] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x18C4.vtx.inc.c>
};

/* gap sub-block @ 0x2330 (was gap+0x1904, 320 bytes) */
Vtx dGRBonus2DonkeyFile2_gap_0x0A2C_sub_0x1904[20] = {
	#include <GRBonus2DonkeyFile2/gap_0x0A2C_sub_0x1904.vtx.inc.c>
};

/* gap sub-block @ 0x2470 (was gap+0x1A44, 96 bytes) */
Gfx dGRBonus2DonkeyFile2_DL_0x2470[12] = {
	#include <GRBonus2DonkeyFile2/DL_0x2470.dl.inc.c>
};

/* gap sub-block @ 0x24D0 (was gap+0x1AA4, 1912 bytes) */
Gfx dGRBonus2DonkeyFile2_DL_0x24D0[239] = {
	#include <GRBonus2DonkeyFile2/DL_0x24D0.dl.inc.c>
};

/* gap sub-block @ 0x2C48 (was gap+0x221C, 176 bytes) */
Gfx dGRBonus2DonkeyFile2_DL_0x2C48[22] = {
	#include <GRBonus2DonkeyFile2/DL_0x2C48.dl.inc.c>
};

/* gap sub-block @ 0x2CF8 (was gap+0x22CC, 104 bytes) */
Gfx dGRBonus2DonkeyFile2_DL_0x2CF8[13] = {
	#include <GRBonus2DonkeyFile2/DL_0x2CF8.dl.inc.c>
};

/* DObjDLLink @ 0x2334 (2 entries) */
DObjDLLink dGRBonus2DonkeyFile2_DLLink_0x2D60[] = {
	{ 0, dGRBonus2DonkeyFile2_DL_0x2470 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2344 (2 entries) */
DObjDLLink dGRBonus2DonkeyFile2_DLLink_0x2D70[] = {
	{ 0, dGRBonus2DonkeyFile2_DL_0x2C48 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2354 (2 entries) */
DObjDLLink dGRBonus2DonkeyFile2_DLLink_0x2D80[] = {
	{ 0, dGRBonus2DonkeyFile2_DL_0x2CF8 },
	{ 4, NULL },
};

/* DObjDesc: Layer1DObj @ 0x2D90 (15 entries) */
DObjDesc dGRBonus2DonkeyFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -4050.0f, 1800.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -2850.0f, -3900.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -450.0f, 2100.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -2250.0f, 1200.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -6000.0f, -1500.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -6000.0f, -4980.6123046875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 4650.0f, -6300.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 5550.0f, -1200.00048828125f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 5100.0f, 6000.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 3300.0f, 6000.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2DonkeyFile2_DLLink_0x2D60, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2DonkeyFile2_DLLink_0x2D70, { 1350.0f, 3168.03271484375f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2DonkeyFile2_DLLink_0x2D80, { 4045.199951171875f, 4800.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x3024 to 0x34B0 (1164 bytes) */
/* MPVertexData[75] @ 0x3024 — vertex positions (MPGeometryData.vertex_data);
 * IDO 4-byte-aligns the following u16 array, supplying 2 zero pad bytes at 0x31E6. */
MPVertexData dGRBonus2DonkeyFile2_gap_0x3024[75] = {
	{ {   -750,      0 }, 0x000E },
	{ {    750,      0 }, 0x0000 },
	{ {   -750,      0 }, 0x000E },
	{ {    750,      0 }, 0x0000 },
	{ {   -750,      0 }, 0x000E },
	{ {    750,      0 }, 0x0000 },
	{ {   -750,      0 }, 0x000E },
	{ {    750,      0 }, 0x0000 },
	{ {   -450,      0 }, 0x000E },
	{ {    450,      0 }, 0x0000 },
	{ {   -450,      0 }, 0x000E },
	{ {    450,      0 }, 0x0000 },
	{ {   -450,      0 }, 0x000E },
	{ {    450,      0 }, 0x0000 },
	{ {   -450,      0 }, 0x000E },
	{ {    450,      0 }, 0x0000 },
	{ {   -600,      0 }, 0x400E },
	{ {    900,      0 }, 0x0000 },
	{ {   -900,      0 }, 0x400E },
	{ {    600,      0 }, 0x0000 },
	{ {   7500,  -7500 }, 0x0000 },
	{ {   6900,  -7500 }, 0x0000 },
	{ {   6900,  -4500 }, 0x0000 },
	{ {   -600,  -4500 }, 0x0000 },
	{ {  -1800,  -5700 }, 0x0000 },
	{ {  -3600,  -5700 }, 0x0008 },
	{ {  -3600,  -5100 }, 0x0008 },
	{ {  -2100,  -5100 }, 0x0008 },
	{ {   -900,  -3900 }, 0x0008 },
	{ {   6900,  -3900 }, 0x0000 },
	{ {   6900,   5700 }, 0x0000 },
	{ {   6000,   5700 }, 0x0000 },
	{ {   6000,   6900 }, 0x0000 },
	{ {   4500,   6900 }, 0x0000 },
	{ {   4500,   5700 }, 0x0000 },
	{ {   3900,   5700 }, 0x0000 },
	{ {   3900,   6900 }, 0x0000 },
	{ {   2400,   6900 }, 0x0000 },
	{ {   2400,   5700 }, 0x0000 },
	{ {    300,   5700 }, 0x0000 },
	{ {    300,   3900 }, 0x0000 },
	{ {  -6900,   3900 }, 0x0000 },
	{ {  -6900,   1800 }, 0x0000 },
	{ {  -5700,   1800 }, 0x0000 },
	{ {  -5700,   1200 }, 0x0000 },
	{ {  -6900,   1200 }, 0x0000 },
	{ {  -6900,    300 }, 0x0000 },
	{ {  -5100,    300 }, 0x0000 },
	{ {  -4500,    300 }, 0x0000 },
	{ {   1500,    300 }, 0x0000 },
	{ {   2400,   1200 }, 0x0000 },
	{ {   2400,   3000 }, 0x0000 },
	{ {   2400,   3900 }, 0x0000 },
	{ {   2700,   3900 }, 0x0008 },
	{ {   5700,   3900 }, 0x0000 },
	{ {   6000,   3900 }, 0x0000 },
	{ {   6000,   3000 }, 0x0000 },
	{ {   6000,    600 }, 0x0000 },
	{ {   2700,    600 }, 0x0000 },
	{ {   1800,   -300 }, 0x0000 },
	{ {  -4500,   -300 }, 0x0000 },
	{ {  -4500,  -4500 }, 0x0000 },
	{ {  -5100,  -4500 }, 0x0000 },
	{ {  -5100,   -300 }, 0x0000 },
	{ {  -6900,   -300 }, 0x0000 },
	{ {  -6900,  -7500 }, 0x0000 },
	{ {  -7500,  -7500 }, 0x0000 },
	{ {  -1500,  -7500 }, 0x0000 },
	{ {  -2700,  -7500 }, 0x0000 },
	{ {  -2700,  -6900 }, 0x0000 },
	{ {  -1500,  -6900 }, 0x0000 },
	{ {    450,      0 }, 0x4000 },
	{ {   -450,      0 }, 0x0000 },
	{ {    450,      0 }, 0x4000 },
	{ {   -450,      0 }, 0x0000 },
};

/* MPVertexArray (116 IDs) @ 0x31E8 — vertex_id table (MPGeometryData.vertex_id) */
u16 dGRBonus2DonkeyFile2_gap_0x3024_sub_0x1C4[116] = {
	  0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
	 16,  17,  18,  19,  52,  53,  54,  55,  42,  43,  46,  47,  48,  49,  26,  27,
	 28,  29,  69,  70,  67,  68,  65,  66,  20,  21,  24,  25,  22,  23,  61,  62,
	 59,  60,  63,  64,  57,  58,  44,  45,  40,  41,  38,  39,  34,  35,  30,  31,
	 36,  37,  32,  33,  55,  56,  57,  33,  34,  58,  59,  37,  38,  39,  40,  23,
	 24,  70,  67,  60,  61,  43,  44,  64,  65,  41,  42,  45,  46,  62,  63,  25,
	 26,  68,  69,  49,  50,  51,  52,  35,  36,  31,  32,  29,  30,  21,  22,  71,
	 72,  73,  74,   0,
};

/* MPVertexLinks[53] @ 0x32D0 — line vertex pairs (MPGeometryData.vertex_links) */
MPVertexLinks dGRBonus2DonkeyFile2_gap_0x3024_sub_0x2AC[53] = {
	{   0, 2 }, {   2, 2 }, {   4, 2 }, {   6, 2 }, {   8, 2 }, {  10, 2 },
	{  12, 2 }, {  14, 2 }, {  16, 2 }, {  18, 2 }, {  20, 4 }, {  24, 2 },
	{  26, 4 }, {  30, 4 }, {  34, 2 }, {  36, 2 }, {  38, 2 }, {  40, 2 },
	{  42, 2 }, {  44, 2 }, {  46, 2 }, {  48, 2 }, {  50, 2 }, {  52, 2 },
	{  54, 2 }, {  56, 2 }, {  58, 2 }, {  60, 2 }, {  62, 2 }, {  64, 2 },
	{  66, 2 }, {  68, 3 }, {  71, 2 }, {  73, 2 }, {  75, 2 }, {  77, 2 },
	{  79, 2 }, {  81, 2 }, {  83, 2 }, {  85, 2 }, {  87, 2 }, {  89, 2 },
	{  91, 2 }, {  93, 2 }, {  95, 2 }, {  97, 2 }, {  99, 4 }, { 103, 2 },
	{ 105, 2 }, { 107, 2 }, { 109, 2 }, { 111, 2 }, { 113, 2 },
};

/* MPLineInfo[13] @ 0x33A4 — yakumono line groups (MPGeometryData.line_info) */
MPLineInfo dGRBonus2DonkeyFile2_gap_0x3024_sub_0x380[13] = {
	{ 1, { {  0,   1}, {  1,   0}, {  1,   0}, {  1,   0} } },
	{ 2, { {  1,   1}, {  2,   0}, {  2,   0}, {  2,   0} } },
	{ 3, { {  2,   1}, {  3,   0}, {  3,   0}, {  3,   0} } },
	{ 4, { {  3,   1}, {  4,   0}, {  4,   0}, {  4,   0} } },
	{ 5, { {  4,   1}, {  5,   0}, {  5,   0}, {  5,   0} } },
	{ 6, { {  5,   1}, {  6,   0}, {  6,   0}, {  6,   0} } },
	{ 7, { {  6,   1}, {  7,   0}, {  7,   0}, {  7,   0} } },
	{ 8, { {  7,   1}, {  8,   0}, {  8,   0}, {  8,   0} } },
	{ 9, { {  8,   1}, {  9,   0}, {  9,   0}, {  9,   0} } },
	{ 10, { {  9,   1}, { 10,   0}, { 10,   0}, { 10,   0} } },
	{ 11, { { 10,   5}, { 15,  16}, { 31,  12}, { 43,   8} } },
	{ 12, { { 51,   1}, { 52,   0}, { 52,   0}, { 52,   0} } },
	{ 13, { { 52,   1}, { 53,   0}, { 53,   0}, { 53,   0} } },
};

/* MPMapObjData[5] @ 0x3490 — map objects (MPGeometryData.mapobjs); 2 bytes pad to align next decl */
MPMapObjData dGRBonus2DonkeyFile2_gap_0x3024_sub_0x46C[5] = {
	{  33, { -6300,  1803 } },
	{   0, { -6300,  1803 } },
	{   1, { -6600,   303 } },
	{   2, { -5700,   303 } },
	{   3, { -4800,   303 } },
};

/* MPGeometryData @ 0x34B0 (28 bytes + 4 bytes pad) */
MPGeometryData dGRBonus2DonkeyFile2_MPGeometryData_0x34B0 = {
	13,
	(MPVertexPosContainer*)dGRBonus2DonkeyFile2_gap_0x3024,
	(MPVertexArray*)dGRBonus2DonkeyFile2_gap_0x3024_sub_0x1C4,
	dGRBonus2DonkeyFile2_gap_0x3024_sub_0x2AC,
	dGRBonus2DonkeyFile2_gap_0x3024_sub_0x380,
	5,
	(MPMapObjContainer*)dGRBonus2DonkeyFile2_gap_0x3024_sub_0x46C,
};
PAD(4);

/* Raw data from file offset 0x34D0 to 0x35C0 (240 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint_0x3508[];
extern u32 dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint_0x3544[];
extern u32 dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint_0x3580[];

AObjEvent32 *dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint[14] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint_0x3508,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint_0x3544,
	(AObjEvent32 *)dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint_0x3580,
};

u32 dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint_0x3508[] = {
	aobjEvent32SetVal(0x020, 0),
	    0xC5D7A000,  /* -6900.0f */
	aobjEvent32SetValAfter(0x050, 0),
	    0xC5BB8000,  /* -6000.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x020, 101),
	    0xC5610000,  /* -3600.0f */
	aobjEvent32SetValBlock(0x020, 100),
	    0xC5D7A000,  /* -6900.0f */
	aobjEvent32SetValBlock(0x020, 101),
	    0xC5610000,  /* -3600.0f */
	aobjEvent32SetValBlock(0x020, 98),
	    0xC5D7A000,  /* -6900.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint_0x3508),
};

u32 dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint_0x3544[] = {
	aobjEvent32SetVal(0x020, 0),
	    0x44E10000,  /* 1800.0f */
	aobjEvent32SetValAfter(0x050, 0),
	    0x44A8C000,  /* 1350.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x020, 130),
	    0x44E10000,  /* 1800.0f */
	aobjEvent32SetValBlock(0x020, 120),
	    0x45960000,  /* 4800.0f */
	aobjEvent32SetValBlock(0x020, 25),
	    0x45960000,  /* 4800.0f */
	aobjEvent32SetValBlock(0x020, 125),
	    0x44E10000,  /* 1800.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint_0x3544),
};

u32 dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint_0x3580[] = {
	aobjEvent32SetVal(0x010, 0),
	    0x45AD7000,  /* 5550.0f */
	aobjEvent32SetValAfter(0x060, 0),
	    0x45960000,  /* 4800.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 250),
	    0x450CA000,  /* 2250.0f */
	aobjEvent32SetValBlock(0x010, 25),
	    0x450CA000,  /* 2250.0f */
	aobjEvent32SetValBlock(0x010, 125),
	    0x45AD7000,  /* 5550.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus2DonkeyFile2_Layer1Anim_AnimJoint_0x3580),
	aobjEvent32End(),
};

PAD(8);

