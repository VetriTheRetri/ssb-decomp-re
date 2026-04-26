/* relocData file 142: GRBonus2LinkFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Raw data from file offset 0x0000 to 0x0938 (2360 bytes) */
/* Vtx: gap_0x0000 @ 0x0 (4 vertices) */
Vtx dGRBonus2LinkFile2_gap_0x0000[4] = {
	#include <GRBonus2LinkFile2/gap_0x0000.vtx.inc.c>
};

/* Vtx @ 0x0040 (4 vertices) */
Vtx dGRBonus2LinkFile2_gap_0x0000_sub_0x40[4] = {
	#include <GRBonus2LinkFile2/gap_0x0000_sub_0x40.vtx.inc.c>
};

/* Vtx @ 0x0080 (4 vertices) */
Vtx dGRBonus2LinkFile2_gap_0x0000_sub_0x80[4] = {
	#include <GRBonus2LinkFile2/gap_0x0000_sub_0x80.vtx.inc.c>
};

/* Vtx @ 0x00C0 (4 vertices) */
Vtx dGRBonus2LinkFile2_gap_0x0000_sub_0xC0[4] = {
	#include <GRBonus2LinkFile2/gap_0x0000_sub_0xC0.vtx.inc.c>
};

/* Vtx: gap_0x0000_sub_0x100 @ 0x100 (32 vertices) */
Vtx dGRBonus2LinkFile2_gap_0x0000_sub_0x100[32] = {
	#include <GRBonus2LinkFile2/gap_0x0000_sub_0x100.vtx.inc.c>
};

/* Vtx: gap_0x0000_sub_0x300 @ 0x300 (28 vertices) */
Vtx dGRBonus2LinkFile2_gap_0x0000_sub_0x300[28] = {
	#include <GRBonus2LinkFile2/gap_0x0000_sub_0x300.vtx.inc.c>
};

/* Vtx @ 0x04C0 (8 vertices) */
Vtx dGRBonus2LinkFile2_gap_0x0000_sub_0x4C0[8] = {
	#include <GRBonus2LinkFile2/gap_0x0000_sub_0x4C0.vtx.inc.c>
};

/* Merged Gfx DL @ 0x540 — 3 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dGRBonus2LinkFile2_gap_0x0000_sub_0x540[26] = {
	#include <GRBonus2LinkFile2/gap_0x0000_sub_0x540.dl.inc.c>
};

/* gap sub-block @ 0x0610 (was gap+0x610, 32 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x0610[4] = {
	#include <GRBonus2LinkFile2/DL_0x0610.dl.inc.c>
};

/* gap sub-block @ 0x0630 (was gap+0x630, 32 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x0630[4] = {
	#include <GRBonus2LinkFile2/DL_0x0630.dl.inc.c>
};

/* gap sub-block @ 0x0650 (was gap+0x650, 32 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x0650[4] = {
	#include <GRBonus2LinkFile2/DL_0x0650.dl.inc.c>
};

/* gap sub-block @ 0x0670 (was gap+0x670, 32 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x0670[4] = {
	#include <GRBonus2LinkFile2/DL_0x0670.dl.inc.c>
};

/* gap sub-block @ 0x0690 (was gap+0x690, 32 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x0690[4] = {
	#include <GRBonus2LinkFile2/DL_0x0690.dl.inc.c>
};

/* gap sub-block @ 0x06B0 (was gap+0x6B0, 32 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x06B0[4] = {
	#include <GRBonus2LinkFile2/DL_0x06B0.dl.inc.c>
};

/* gap sub-block @ 0x06D0 (was gap+0x6D0, 32 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x06D0[4] = {
	#include <GRBonus2LinkFile2/DL_0x06D0.dl.inc.c>
};

/* gap sub-block @ 0x06F0 (was gap+0x6F0, 32 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x06F0[4] = {
	#include <GRBonus2LinkFile2/DL_0x06F0.dl.inc.c>
};

/* gap sub-block @ 0x0710 (was gap+0x710, 32 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x0710[4] = {
	#include <GRBonus2LinkFile2/DL_0x0710.dl.inc.c>
};

/* gap sub-block @ 0x0730 (was gap+0x730, 72 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x0730[9] = {
	#include <GRBonus2LinkFile2/DL_0x0730.dl.inc.c>
};

/* Merged Gfx DL @ 0x778 — 3 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dGRBonus2LinkFile2_gap_0x0000_sub_0x778[34] = {
	#include <GRBonus2LinkFile2/gap_0x0000_sub_0x778.dl.inc.c>
};

/* DObjDLLink @ 0x888 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x0888[] = {
	{ 0, (Gfx*)dGRBonus2LinkFile2_gap_0x0000_sub_0x540 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x898 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x0898[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x0630 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x8A8 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x08A8[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x0650 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x8B8 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x08B8[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x0670 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x8C8 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x08C8[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x0690 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x8D8 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x08D8[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x06B0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x8E8 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x08E8[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x06D0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x8F8 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x08F8[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x06F0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x908 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x0908[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x0710 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x918 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x0918[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x0730 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x928 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x0928[] = {
	{ 1, (Gfx*)dGRBonus2LinkFile2_gap_0x0000_sub_0x778 },
	{ 4, NULL },
};

/* DObjDesc: Layer0DObj @ 0x938 (14 entries) */
DObjDesc dGRBonus2LinkFile2_Layer0DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x0888, { -6300.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 3.1415929794311523f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x0898, { -3000.0f, -3150.0f, 0.0f }, { 0.0f, 0.0f, 3.1415929794311523f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x08A8, { -4650.0f, 2550.0f, 0.0f }, { 0.0f, 0.0f, 3.1415929794311523f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x08B8, { 4650.0f, 2550.0f, 0.0f }, { 0.0f, 0.0f, 3.1415929794311523f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x08C8, { -2850.0f, 6150.0f, 0.0f }, { 0.0f, 0.0f, 1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x08D8, { 0.0f, -150.0f, 0.0f }, { 0.0f, 0.0f, 3.1415929794311523f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x08E8, { 2850.0f, 4350.0f, 0.0f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x08F8, { 6300.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 3.1415929794311523f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x0908, { 5550.0f, -1950.0f, 0.0f }, { 0.0f, 0.0f, 3.1415929794311523f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x0918, { -5850.0f, -2100.0f, 0.0f }, { 0.0f, 0.0f, 2.356194019317627f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x0928, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 0.0f, 1.0093875392553974e-22f, 1.5869173736100881e-37f }, { 7.174648137343064e-43f, 4.5559015672128453e-41f, 1.0093780729245348e-22f }, { 1.5869173736100881e-37f, 0.0f, 4.5559015672128453e-41f } },
};

/* Raw data from file offset 0x0BA0 to 0x3C28 (12424 bytes) */
/* gap sub-block @ 0x0BA0 (was gap+0x0, 224 bytes) */
u8 dGRBonus2LinkFile2_gap_0x0BA0[224] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0.data.inc.c>
};

/* gap sub-block @ 0x0C80 (was gap+0xE0, 256 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0xE0[16] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0xE0.vtx.inc.c>
};

/* gap sub-block @ 0x0D80 (was gap+0x1E0, 128 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1E0[8] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1E0.vtx.inc.c>
};

/* gap sub-block @ 0x0E00 (was gap+0x260, 512 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x260[32] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x260.vtx.inc.c>
};

/* gap sub-block @ 0x1000 (was gap+0x460, 256 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x460[16] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x460.vtx.inc.c>
};

/* gap sub-block @ 0x1100 (was gap+0x560, 240 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x560[15] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x560.vtx.inc.c>
};

/* gap sub-block @ 0x11F0 (was gap+0x650, 512 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x650[32] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x650.vtx.inc.c>
};

/* gap sub-block @ 0x13F0 (was gap+0x850, 256 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x850[16] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x850.vtx.inc.c>
};

/* gap sub-block @ 0x14F0 (was gap+0x950, 128 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x950[8] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x950.vtx.inc.c>
};

/* gap sub-block @ 0x1570 (was gap+0x9D0, 240 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x9D0[15] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x9D0.vtx.inc.c>
};

/* gap sub-block @ 0x1660 (was gap+0xAC0, 512 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0xAC0[32] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0xAC0.vtx.inc.c>
};

/* gap sub-block @ 0x1860 (was gap+0xCC0, 512 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0xCC0[32] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0xCC0.vtx.inc.c>
};

/* gap sub-block @ 0x1A60 (was gap+0xEC0, 320 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0xEC0[20] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0xEC0.vtx.inc.c>
};

/* gap sub-block @ 0x1BA0 (was gap+0x1000, 128 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1000[8] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1000.vtx.inc.c>
};

/* gap sub-block @ 0x1C20 (was gap+0x1080, 512 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1080[32] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1080.vtx.inc.c>
};

/* gap sub-block @ 0x1E20 (was gap+0x1280, 480 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1280[30] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1280.vtx.inc.c>
};

/* gap sub-block @ 0x2000 (was gap+0x1460, 448 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1460[28] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1460.vtx.inc.c>
};

/* gap sub-block @ 0x21C0 (was gap+0x1620, 64 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1620[4] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1620.vtx.inc.c>
};

/* gap sub-block @ 0x2200 (was gap+0x1660, 96 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1660[6] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1660.vtx.inc.c>
};

/* gap sub-block @ 0x2260 (was gap+0x16C0, 512 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x16C0[32] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x16C0.vtx.inc.c>
};

/* gap sub-block @ 0x2460 (was gap+0x18C0, 16 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x18C0[1] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x18C0.vtx.inc.c>
};

/* gap sub-block @ 0x2470 (was gap+0x18D0, 224 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x18D0[14] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x18D0.vtx.inc.c>
};

/* gap sub-block @ 0x2550 (was gap+0x19B0, 512 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x19B0[32] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x19B0.vtx.inc.c>
};

/* gap sub-block @ 0x2750 (was gap+0x1BB0, 128 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1BB0[8] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1BB0.vtx.inc.c>
};

/* gap sub-block @ 0x27D0 (was gap+0x1C30, 512 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1C30[32] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1C30.vtx.inc.c>
};

/* gap sub-block @ 0x29D0 (was gap+0x1E30, 128 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1E30[8] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1E30.vtx.inc.c>
};

/* gap sub-block @ 0x2A50 (was gap+0x1EB0, 128 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1EB0[8] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1EB0.vtx.inc.c>
};

/* gap sub-block @ 0x2AD0 (was gap+0x1F30, 64 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1F30[4] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1F30.vtx.inc.c>
};

/* gap sub-block @ 0x2B10 (was gap+0x1F70, 128 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1F70[8] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1F70.vtx.inc.c>
};

/* gap sub-block @ 0x2B90 (was gap+0x1FF0, 128 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x1FF0[8] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x1FF0.vtx.inc.c>
};

/* gap sub-block @ 0x2C10 (was gap+0x2070, 64 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x2070[4] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x2070.vtx.inc.c>
};

/* Vtx: gap_0x0BA0_sub_0x20B0 @ 0x2C50 (12 vertices) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x20B0[12] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x20B0.vtx.inc.c>
};

/* gap sub-block @ 0x2D10 (was gap+0x2170, 128 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x2170[8] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x2170.vtx.inc.c>
};

/* gap sub-block @ 0x2D90 (was gap+0x21F0, 80 bytes) */
Vtx dGRBonus2LinkFile2_gap_0x0BA0_sub_0x21F0[5] = {
	#include <GRBonus2LinkFile2/gap_0x0BA0_sub_0x21F0.vtx.inc.c>
};

/* gap sub-block @ 0x2DE0 (was gap+0x2240, 88 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x2DE0[11] = {
	#include <GRBonus2LinkFile2/DL_0x2DE0.dl.inc.c>
};

/* gap sub-block @ 0x2E38 (was gap+0x2298, 2208 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x2E38[276] = {
	#include <GRBonus2LinkFile2/DL_0x2E38.dl.inc.c>
};

/* gap sub-block @ 0x36D8 (was gap+0x2B38, 360 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x36D8[45] = {
	#include <GRBonus2LinkFile2/DL_0x36D8.dl.inc.c>
};

/* gap sub-block @ 0x3840 (was gap+0x2CA0, 352 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x3840[44] = {
	#include <GRBonus2LinkFile2/DL_0x3840.dl.inc.c>
};

/* gap sub-block @ 0x39A0 (was gap+0x2E00, 176 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x39A0[22] = {
	#include <GRBonus2LinkFile2/DL_0x39A0.dl.inc.c>
};

/* gap sub-block @ 0x3A50 (was gap+0x2EB0, 144 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x3A50[18] = {
	#include <GRBonus2LinkFile2/DL_0x3A50.dl.inc.c>
};

/* gap sub-block @ 0x3AE0 (was gap+0x2F40, 96 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x3AE0[12] = {
	#include <GRBonus2LinkFile2/DL_0x3AE0.dl.inc.c>
};

/* gap sub-block @ 0x3B40 (was gap+0x2FA0, 120 bytes) */
Gfx dGRBonus2LinkFile2_DL_0x3B40[15] = {
	#include <GRBonus2LinkFile2/DL_0x3B40.dl.inc.c>
};

/* DObjDLLink @ 0x3018 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x3BB8[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x2DE0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3028 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x3BC8[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x36D8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3038 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x3BD8[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x3840 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3048 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x3BE8[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x39A0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3058 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x3BF8[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x3A50 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3068 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x3C08[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x3AE0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3078 (2 entries) */
DObjDLLink dGRBonus2LinkFile2_DLLink_0x3C18[] = {
	{ 0, dGRBonus2LinkFile2_DL_0x3B40 },
	{ 4, NULL },
};

/* DObjDesc: Layer1DObj @ 0x3C28 (19 entries) */
DObjDesc dGRBonus2LinkFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 5100.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -900.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 1050.0f, 7.000000096013537e-06f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -1050.0f, 300.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 3750.0f, -1200.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 5100.0f, 3900.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -5100.0f, 6300.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -3150.0f, -1200.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 3.999999989900971e-06f, 1500.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -4800.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x3BB8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x3BC8, { 7500.0f, -1200.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x3BD8, { -7500.0f, -1200.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x3BE8, { -4.999999873689376e-06f, 3300.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x3BF8, { -2400.0f, 5100.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x3C08, { 2400.0f, 5100.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LinkFile2_DLLink_0x3C18, { 1.9999999949504854e-06f, 6900.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x3F6C to 0x465C (1776 bytes) */
/* gap sub-block @ 0x3F6C (was gap+0x0, 696 bytes) */
u8 dGRBonus2LinkFile2_gap_0x3F6C[696] = {
	#include <GRBonus2LinkFile2/gap_0x3F6C.data.inc.c>
};

/* gap sub-block @ 0x4224 (was gap+0x2B8, 376 bytes) */
u8 dGRBonus2LinkFile2_gap_0x3F6C_sub_0x2B8[376] = {
	#include <GRBonus2LinkFile2/gap_0x3F6C_sub_0x2B8.data.inc.c>
};

/* gap sub-block @ 0x439C (was gap+0x430, 364 bytes) */
u8 dGRBonus2LinkFile2_gap_0x3F6C_sub_0x430[364] = {
	#include <GRBonus2LinkFile2/gap_0x3F6C_sub_0x430.data.inc.c>
};

/* gap sub-block @ 0x4508 (was gap+0x59C, 308 bytes) */
u8 dGRBonus2LinkFile2_gap_0x3F6C_sub_0x59C[308] = {
	#include <GRBonus2LinkFile2/gap_0x3F6C_sub_0x59C.data.inc.c>
};

/* gap sub-block @ 0x463C (was gap+0x6D0, 32 bytes) */
u8 dGRBonus2LinkFile2_gap_0x3F6C_sub_0x6D0[32] = {
	#include <GRBonus2LinkFile2/gap_0x3F6C_sub_0x6D0.data.inc.c>
};

/* Raw data from file offset 0x465C to 0x4680 (36 bytes) */
u8 dGRBonus2LinkFile2_MPGeometryData_0x465C[36] = {
	#include <GRBonus2LinkFile2/MPGeometryData_0x465C.data.inc.c>
};

/* Raw data from file offset 0x4680 to 0x4950 (720 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x46C8[];
extern u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x46F4[];
extern u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4720[];
extern u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4754[];
extern u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4790[];
extern u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x47CC[];
extern u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4818[];
extern u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x487C[];
extern u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x48E0[];

AObjEvent32 *dGRBonus2LinkFile2_Layer1Anim_AnimJoint[18] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x46C8,
	(AObjEvent32 *)dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x46F4,
	(AObjEvent32 *)dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4720,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4754,
	(AObjEvent32 *)dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4790,
	(AObjEvent32 *)dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x47CC,
	(AObjEvent32 *)dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4818,
	(AObjEvent32 *)dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x487C,
	(AObjEvent32 *)dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x48E0,
};

u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x46C8[] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x4573C000,  /* 3900.0f */
	aobjEvent32SetValAfterBlock(0x050, 0),
	    0x459F6000,  /* 5100.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 300),
	    0x45C4E000,  /* 6300.0f */
	aobjEvent32SetVal0RateBlock(0x020, 300),
	    0x4573C000,  /* 3900.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x46C8),
};

u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x46F4[] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x45C4E000,  /* 6300.0f */
	aobjEvent32SetValAfterBlock(0x050, 0),
	    0xC59F6000,  /* -5100.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 300),
	    0x4573C000,  /* 3900.0f */
	aobjEvent32SetVal0RateBlock(0x020, 300),
	    0x45C4E000,  /* 6300.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x46F4),
};

u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4720[] = {
	aobjEvent32SetVal(0x010, 0),
	    0xC544E000,  /* -3150.0f */
	aobjEvent32SetValAfter(0x060, 0),
	    0xC4960000,  /* -1200.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 30),
	    0xC544E000,  /* -3150.0f */
	aobjEvent32SetValBlock(0x010, 270),
	    0xC59AB000,  /* -4950.0f */
	aobjEvent32SetValBlock(0x010, 300),
	    0xC544E000,  /* -3150.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4720),
};

u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4754[] = {
	aobjEvent32SetVal(0x010, 0),
	    0x45EA6000,  /* 7500.0f */
	aobjEvent32SetValAfter(0x060, 0),
	    0xC4960000,  /* -1200.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 180),
	    0x45D7A000,  /* 6900.0f */
	aobjEvent32SetValBlock(0x010, 60),
	    0x45D7A000,  /* 6900.0f */
	aobjEvent32SetValBlock(0x010, 180),
	    0x45EA6000,  /* 7500.0f */
	aobjEvent32SetValBlock(0x010, 180),
	    0x45EA6000,  /* 7500.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4754),
};

u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4790[] = {
	aobjEvent32SetVal(0x010, 0),
	    0xC5EA6000,  /* -7500.0f */
	aobjEvent32SetValAfter(0x060, 0),
	    0xC4960000,  /* -1200.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 180),
	    0xC5D7A000,  /* -6900.0f */
	aobjEvent32SetValBlock(0x010, 60),
	    0xC5D7A000,  /* -6900.0f */
	aobjEvent32SetValBlock(0x010, 180),
	    0xC5EA6000,  /* -7500.0f */
	aobjEvent32SetValBlock(0x010, 180),
	    0xC5EA6000,  /* -7500.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4790),
};

u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x47CC[] = {
	aobjEvent32SetVal(0x030, 0),
	    0xB6B40000,  /* -5.364418029785156e-06f */
	    0x454E4000,  /* 3300.0f */
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x030, 150),
	    0x45160000,  /* 2400.0f */
	    0x459F6000,  /* 5100.0f */
	aobjEvent32SetValBlock(0x030, 150),
	    0x00000000,  /* 0.0f */
	    0x45D7A000,  /* 6900.0f */
	aobjEvent32SetValBlock(0x030, 150),
	    0xC5160000,  /* -2400.0f */
	    0x459F6000,  /* 5100.0f */
	aobjEvent32SetValBlock(0x030, 150),
	    0x00000000,  /* 0.0f */
	    0x454E4000,  /* 3300.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x47CC),
};

u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4818[] = {
	aobjEvent32SetVal0Rate(0x030, 0),
	    0xC5160000,  /* -2400.0f */
	    0x459F6000,  /* 5100.0f */
	aobjEvent32SetValAfterBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 150),
	    0x00000000,  /* 0.0f */
	    0x41800000,  /* 16.0f */
	aobjEvent32SetVal0RateBlock(0x020, 150),
	    0x454E4000,  /* 3300.0f */
	aobjEvent32SetValRate(0x020, 150),
	    0x459F6000,  /* 5100.0f */
	    0x41400000,  /* 12.0f */
	aobjEvent32SetVal0RateBlock(0x010, 150),
	    0x45160000,  /* 2400.0f */
	aobjEvent32SetValRate(0x010, 150),
	    0x00000000,  /* 0.0f */
	    0xC1800000,  /* -16.0f */
	aobjEvent32SetVal0RateBlock(0x020, 150),
	    0x45D7A000,  /* 6900.0f */
	aobjEvent32SetVal0RateBlock(0x030, 150),
	    0xC5160000,  /* -2400.0f */
	    0x459F6000,  /* 5100.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x4818),
};

u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x487C[] = {
	aobjEvent32SetVal0Rate(0x030, 0),
	    0x45160000,  /* 2400.0f */
	    0x459F6000,  /* 5100.0f */
	aobjEvent32SetValAfterBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 150),
	    0x00000000,  /* 0.0f */
	    0xC1800000,  /* -16.0f */
	aobjEvent32SetVal0RateBlock(0x020, 150),
	    0x45D7A000,  /* 6900.0f */
	aobjEvent32SetValRate(0x020, 150),
	    0x459F6000,  /* 5100.0f */
	    0xC1400000,  /* -12.0f */
	aobjEvent32SetVal0RateBlock(0x010, 150),
	    0xC5160000,  /* -2400.0f */
	aobjEvent32SetValRate(0x010, 150),
	    0x00000000,  /* 0.0f */
	    0x41800000,  /* 16.0f */
	aobjEvent32SetVal0RateBlock(0x020, 150),
	    0x454E4000,  /* 3300.0f */
	aobjEvent32SetVal0RateBlock(0x030, 150),
	    0x45160000,  /* 2400.0f */
	    0x459F6000,  /* 5100.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x487C),
};

u32 dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x48E0[] = {
	aobjEvent32SetVal0Rate(0x030, 0),
	    0x35F00000,  /* 1.7881393432617188e-06f */
	    0x45D7A000,  /* 6900.0f */
	aobjEvent32SetValAfterBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x030, 150),
	    0xC5160000,  /* -2400.0f */
	    0xB1CCCCCD,  /* -5.9604645663569045e-09f */
	    0x459F6000,  /* 5100.0f */
	    0xC1400000,  /* -12.0f */
	aobjEvent32SetValRate(0x010, 150),
	    0x00000000,  /* 0.0f */
	    0x41800000,  /* 16.0f */
	aobjEvent32SetVal0RateBlock(0x020, 150),
	    0x454E4000,  /* 3300.0f */
	aobjEvent32SetValRateBlock(0x030, 150),
	    0x45160000,  /* 2400.0f */
	    0x31CCCCCD,  /* 5.9604645663569045e-09f */
	    0x459F6000,  /* 5100.0f */
	    0x41400000,  /* 12.0f */
	aobjEvent32SetVal0RateBlock(0x030, 150),
	    0x35F00000,  /* 1.7881393432617188e-06f */
	    0x45D7A000,  /* 6900.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus2LinkFile2_Layer1Anim_AnimJoint_0x48E0),
	aobjEvent32End(),
};

PAD(8);

