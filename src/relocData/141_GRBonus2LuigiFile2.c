/* relocData file 141: GRBonus2LuigiFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros
#include <sys/interp.h>  // SYInterpDesc

/* Raw data from file offset 0x0000 to 0x0990 (2448 bytes) */
/* Vtx: gap_0x0000 @ 0x0 (4 vertices) */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u16 dBonus1CommonImages1_Lut_0x0008_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0288_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0380_palette[];
extern u16 dBonus1CommonImages1_Lut_0x04E8_palette[];
extern u16 dBonus1CommonImages1_Lut_0x06B0_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0720_palette[];
extern u16 dBonus1CommonImages1_Lut_0x07D0_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0A00_palette[];
extern u8 dBonus1CommonImages1_Tex_0x0030[];
extern u8 dBonus1CommonImages1_Tex_0x02B0[];
extern u8 dBonus1CommonImages1_Tex_0x03A8[];
extern u8 dBonus1CommonImages1_Tex_0x0510[];
extern u16 dBonus1CommonImages1_Tex_0x0598[];
extern u8 dBonus1CommonImages1_Tex_0x05A8[];
extern u8 dBonus1CommonImages1_Tex_0x06D8[];
extern u8 dBonus1CommonImages1_Tex_0x0748[];
extern u8 dBonus1CommonImages1_Tex_0x07F8[];
extern u8 dBonus1CommonImages1_Tex_0x0A28[];
extern Gfx dGRBonus2LuigiFile2_DL_0x22F0[];
extern u16 dBonus1CommonImages1_Lut_0x0008_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0288_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0380_palette[];
extern u16 dBonus1CommonImages1_Lut_0x04E8_palette[];
extern u16 dBonus1CommonImages1_Lut_0x06B0_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0720_palette[];
extern u16 dBonus1CommonImages1_Lut_0x07D0_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0A00_palette[];
extern u8 dBonus1CommonImages1_Tex_0x0030[];
extern u8 dBonus1CommonImages1_Tex_0x02B0[];
extern u8 dBonus1CommonImages1_Tex_0x03A8[];
extern u8 dBonus1CommonImages1_Tex_0x0510[];
extern u16 dBonus1CommonImages1_Tex_0x0598[];
extern u8 dBonus1CommonImages1_Tex_0x05A8[];
extern u8 dBonus1CommonImages1_Tex_0x06D8[];
extern u8 dBonus1CommonImages1_Tex_0x0748[];
extern u8 dBonus1CommonImages1_Tex_0x07F8[];
extern u8 dBonus1CommonImages1_Tex_0x0A28[];
extern u16 dBonus1CommonImages1_Lut_0x0008_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0288_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0380_palette[];
extern u16 dBonus1CommonImages1_Lut_0x04E8_palette[];
extern u16 dBonus1CommonImages1_Lut_0x06B0_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0720_palette[];
extern u16 dBonus1CommonImages1_Lut_0x07D0_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0A00_palette[];
extern u8 dBonus1CommonImages1_Tex_0x0030[];
extern u8 dBonus1CommonImages1_Tex_0x02B0[];
extern u8 dBonus1CommonImages1_Tex_0x03A8[];
extern u8 dBonus1CommonImages1_Tex_0x0510[];
extern u16 dBonus1CommonImages1_Tex_0x0598[];
extern u8 dBonus1CommonImages1_Tex_0x05A8[];
extern u8 dBonus1CommonImages1_Tex_0x06D8[];
extern u8 dBonus1CommonImages1_Tex_0x0748[];
extern u8 dBonus1CommonImages1_Tex_0x07F8[];
extern u8 dBonus1CommonImages1_Tex_0x0A28[];
extern u16 dBonus1CommonImages1_Lut_0x0008_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0288_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0380_palette[];
extern u16 dBonus1CommonImages1_Lut_0x04E8_palette[];
extern u16 dBonus1CommonImages1_Lut_0x06B0_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0720_palette[];
extern u16 dBonus1CommonImages1_Lut_0x07D0_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0A00_palette[];
extern u8 dBonus1CommonImages1_Tex_0x0030[];
extern u8 dBonus1CommonImages1_Tex_0x02B0[];
extern u8 dBonus1CommonImages1_Tex_0x03A8[];
extern u8 dBonus1CommonImages1_Tex_0x0510[];
extern u16 dBonus1CommonImages1_Tex_0x0598[];
extern u8 dBonus1CommonImages1_Tex_0x05A8[];
extern u8 dBonus1CommonImages1_Tex_0x06D8[];
extern u8 dBonus1CommonImages1_Tex_0x0748[];
extern u8 dBonus1CommonImages1_Tex_0x07F8[];
extern u8 dBonus1CommonImages1_Tex_0x0A28[];
extern u16 dBonus1CommonImages1_Lut_0x0008_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0288_palette[];
extern u16 dBonus1CommonImages1_Lut_0x04E8_palette[];
extern u16 dBonus1CommonImages1_Lut_0x06B0_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0720_palette[];
extern u16 dBonus1CommonImages1_Lut_0x07D0_palette[];
extern u16 dBonus1CommonImages1_Lut_0x0A00_palette[];
extern u8 dBonus1CommonImages1_Tex_0x0030[];
extern u8 dBonus1CommonImages1_Tex_0x02B0[];
extern u8 dBonus1CommonImages1_Tex_0x03A8[];
extern u8 dBonus1CommonImages1_Tex_0x0510[];
extern u16 dBonus1CommonImages1_Tex_0x0598[];
extern u8 dBonus1CommonImages1_Tex_0x05A8[];
extern u8 dBonus1CommonImages1_Tex_0x06D8[];
extern u8 dBonus1CommonImages1_Tex_0x0748[];
extern u8 dBonus1CommonImages1_Tex_0x07F8[];
extern u8 dBonus1CommonImages1_Tex_0x0A28[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x100[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x140[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x180[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x1C0[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x200[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x240[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x280[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x2C0[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x300[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x340[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x380[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x3C0[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x40[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x400[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x440[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x480[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x80[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0xC0[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x1028[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x11F8[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x1228[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x12D8[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x1418[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x1558[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x1698[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x17B8[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x1E8[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x328[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x528[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x628[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x8[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x828[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x868[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0xA68[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0xAE8[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0xCE8[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0xD68[];
extern Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0xE28[];
Vtx dGRBonus2LuigiFile2_gap_0x0000[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000.vtx.inc.c>
};

/* Vtx @ 0x0040 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x40[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x40.vtx.inc.c>
};

/* Vtx @ 0x0080 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x80[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x80.vtx.inc.c>
};

/* Vtx @ 0x00C0 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0xC0[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0xC0.vtx.inc.c>
};

/* Vtx @ 0x0100 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x100[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x100.vtx.inc.c>
};

/* Vtx @ 0x0140 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x140[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x140.vtx.inc.c>
};

/* Vtx @ 0x0180 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x180[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x180.vtx.inc.c>
};

/* Vtx @ 0x01C0 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x1C0[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x1C0.vtx.inc.c>
};

/* Vtx @ 0x0200 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x200[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x200.vtx.inc.c>
};

/* Vtx @ 0x0240 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x240[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x240.vtx.inc.c>
};

/* Vtx: gap_0x0000_sub_0x280 @ 0x280 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x280[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x280.vtx.inc.c>
};

/* Vtx @ 0x02C0 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x2C0[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x2C0.vtx.inc.c>
};

/* Vtx @ 0x0300 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x300[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x300.vtx.inc.c>
};

/* Vtx @ 0x0340 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x340[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x340.vtx.inc.c>
};

/* Vtx: gap_0x0000_sub_0x380 @ 0x380 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x380[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x380.vtx.inc.c>
};

/* Vtx @ 0x03C0 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x3C0[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x3C0.vtx.inc.c>
};

/* Vtx @ 0x0400 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x400[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x400.vtx.inc.c>
};

/* Vtx @ 0x0440 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x440[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x440.vtx.inc.c>
};

/* Vtx @ 0x0480 (4 vertices) */
Vtx dGRBonus2LuigiFile2_gap_0x0000_sub_0x480[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x480.vtx.inc.c>
};

/* Merged Gfx DL @ 0x4C0 — 5 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dGRBonus2LuigiFile2_gap_0x0000_sub_0x4C0[32] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x4C0.dl.inc.c>
};

/* Merged Gfx DL @ 0x5C0 — 2 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dGRBonus2LuigiFile2_gap_0x0000_sub_0x5C0[32] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x5C0.dl.inc.c>
};

/* Merged Gfx DL @ 0x6C0 — 4 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dGRBonus2LuigiFile2_gap_0x0000_sub_0x6C0[32] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x6C0.dl.inc.c>
};

/* Merged Gfx DL @ 0x7C0 — 3 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dGRBonus2LuigiFile2_gap_0x0000_sub_0x7C0[50] = {
	#include <GRBonus2LuigiFile2/gap_0x0000_sub_0x7C0.dl.inc.c>
};

/* DObjDLLink @ 0x950 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x0950[] = {
	{ 0, (Gfx*)dGRBonus2LuigiFile2_gap_0x0000_sub_0x4C0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x960 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x0960[] = {
	{ 0, (Gfx*)dGRBonus2LuigiFile2_gap_0x0000_sub_0x5C0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x970 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x0970[] = {
	{ 0, (Gfx*)dGRBonus2LuigiFile2_gap_0x0000_sub_0x6C0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x980 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x0980[] = {
	{ 1, (Gfx*)dGRBonus2LuigiFile2_gap_0x0000_sub_0x7C0 },
	{ 4, NULL },
};

/* DObjDesc: Layer0DObj @ 0x990 (6 entries) */
DObjDesc dGRBonus2LuigiFile2_Layer0DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x0950, { -5400.0f, -5850.0f, -600.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x0960, { 3750.0f, -4500.0f, -600.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x0970, { 3300.0f, -1650.0f, -600.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x0980, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x0A98 to 0x2CE0 (8776 bytes) */
PAD(8);

/* gap sub-block @ 0x0AA0 (was gap+0x8, 480 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x8[30] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x8.vtx.inc.c>
};

/* gap sub-block @ 0x0C80 (was gap+0x1E8, 320 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x1E8[20] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x1E8.vtx.inc.c>
};

/* gap sub-block @ 0x0DC0 (was gap+0x328, 512 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x328[32] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x328.vtx.inc.c>
};

/* gap sub-block @ 0x0FC0 (was gap+0x528, 256 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x528[16] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x528.vtx.inc.c>
};

/* gap sub-block @ 0x10C0 (was gap+0x628, 512 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x628[32] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x628.vtx.inc.c>
};

/* gap sub-block @ 0x12C0 (was gap+0x828, 64 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x828[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x828.vtx.inc.c>
};

/* gap sub-block @ 0x1300 (was gap+0x868, 512 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x868[32] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x868.vtx.inc.c>
};

/* gap sub-block @ 0x1500 (was gap+0xA68, 128 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0xA68[8] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0xA68.vtx.inc.c>
};

/* gap sub-block @ 0x1580 (was gap+0xAE8, 512 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0xAE8[32] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0xAE8.vtx.inc.c>
};

/* gap sub-block @ 0x1780 (was gap+0xCE8, 128 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0xCE8[8] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0xCE8.vtx.inc.c>
};

/* gap sub-block @ 0x1800 (was gap+0xD68, 192 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0xD68[12] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0xD68.vtx.inc.c>
};

/* gap sub-block @ 0x18C0 (was gap+0xE28, 512 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0xE28[32] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0xE28.vtx.inc.c>
};

/* gap sub-block @ 0x1AC0 (was gap+0x1028, 464 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x1028[29] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x1028.vtx.inc.c>
};

/* gap sub-block @ 0x1C90 (was gap+0x11F8, 48 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x11F8[3] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x11F8.vtx.inc.c>
};

/* gap sub-block @ 0x1CC0 (was gap+0x1228, 176 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x1228[11] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x1228.vtx.inc.c>
};

/* gap sub-block @ 0x1D70 (was gap+0x12D8, 320 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x12D8[20] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x12D8.vtx.inc.c>
};

/* gap sub-block @ 0x1EB0 (was gap+0x1418, 320 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x1418[20] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x1418.vtx.inc.c>
};

/* gap sub-block @ 0x1FF0 (was gap+0x1558, 320 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x1558[20] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x1558.vtx.inc.c>
};

/* gap sub-block @ 0x2130 (was gap+0x1698, 288 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x1698[18] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x1698.vtx.inc.c>
};

/* gap sub-block @ 0x2250 (was gap+0x17B8, 64 bytes) */
Vtx dGRBonus2LuigiFile2_gap_0x0A98_sub_0x17B8[4] = {
	#include <GRBonus2LuigiFile2/gap_0x0A98_sub_0x17B8.vtx.inc.c>
};

/* gap sub-block @ 0x2290 (was gap+0x17F8, 96 bytes) */
Gfx dGRBonus2LuigiFile2_DL_0x2290[12] = {
	#include <GRBonus2LuigiFile2/DL_0x2290.dl.inc.c>
};

/* gap sub-block @ 0x22F0 (was gap+0x1858, 1552 bytes) */
Gfx dGRBonus2LuigiFile2_DL_0x22F0[194] = {
	#include <GRBonus2LuigiFile2/DL_0x22F0.dl.inc.c>
};

/* gap sub-block @ 0x2900 (was gap+0x1E68, 168 bytes) */
Gfx dGRBonus2LuigiFile2_DL_0x2900[21] = {
	#include <GRBonus2LuigiFile2/DL_0x2900.dl.inc.c>
};

/* gap sub-block @ 0x29A8 (was gap+0x1F10, 168 bytes) */
Gfx dGRBonus2LuigiFile2_DL_0x29A8[21] = {
	#include <GRBonus2LuigiFile2/DL_0x29A8.dl.inc.c>
};

/* gap sub-block @ 0x2A50 (was gap+0x1FB8, 72 bytes) */
Gfx dGRBonus2LuigiFile2_DL_0x2A50[9] = {
	#include <GRBonus2LuigiFile2/DL_0x2A50.dl.inc.c>
};

/* gap sub-block @ 0x2A98 (was gap+0x2000, 168 bytes) */
Gfx dGRBonus2LuigiFile2_DL_0x2A98[21] = {
	#include <GRBonus2LuigiFile2/DL_0x2A98.dl.inc.c>
};

/* gap sub-block @ 0x2B40 (was gap+0x20A8, 136 bytes) */
Gfx dGRBonus2LuigiFile2_DL_0x2B40[17] = {
	#include <GRBonus2LuigiFile2/DL_0x2B40.dl.inc.c>
};

/* gap sub-block @ 0x2BC8 (was gap+0x2130, 32 bytes) */
Gfx dGRBonus2LuigiFile2_DL_0x2BC8[4] = {
	#include <GRBonus2LuigiFile2/DL_0x2BC8.dl.inc.c>
};

/* gap sub-block @ 0x2BE8 (was gap+0x2150, 32 bytes) */
Gfx dGRBonus2LuigiFile2_DL_0x2BE8[4] = {
	#include <GRBonus2LuigiFile2/DL_0x2BE8.dl.inc.c>
};

/* gap sub-block @ 0x2C08 (was gap+0x2170, 72 bytes) */
Gfx dGRBonus2LuigiFile2_DL_0x2C08[9] = {
	#include <GRBonus2LuigiFile2/DL_0x2C08.dl.inc.c>
};

/* DObjDLLink @ 0x21B8 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x2C50[] = {
	{ 0, dGRBonus2LuigiFile2_DL_0x2290 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x21C8 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x2C60[] = {
	{ 0, dGRBonus2LuigiFile2_DL_0x2900 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x21D8 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x2C70[] = {
	{ 0, dGRBonus2LuigiFile2_DL_0x29A8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x21E8 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x2C80[] = {
	{ 0, dGRBonus2LuigiFile2_DL_0x2A50 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x21F8 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x2C90[] = {
	{ 0, dGRBonus2LuigiFile2_DL_0x2A98 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2208 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x2CA0[] = {
	{ 0, dGRBonus2LuigiFile2_DL_0x2B40 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2218 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x2CB0[] = {
	{ 0, dGRBonus2LuigiFile2_DL_0x2BC8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2228 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x2CC0[] = {
	{ 0, dGRBonus2LuigiFile2_DL_0x2BE8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2238 (2 entries) */
DObjDLLink dGRBonus2LuigiFile2_DLLink_0x2CD0[] = {
	{ 0, dGRBonus2LuigiFile2_DL_0x2C08 },
	{ 4, NULL },
};

/* DObjDesc: Layer1DObj @ 0x2CE0 (21 entries) */
DObjDesc dGRBonus2LuigiFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -5550.0f, -6300.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -4050.0f, 4350.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 1050.0f, -6900.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 1200.0f, -3900.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 780.642333984375f, 1915.5321044921875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -5850.0f, 3300.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -4050.0f, 532.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -2250.0f, 3600.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 6300.0f, -4350.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 4050.0f, 5400.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x2C50, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x2C60, { 2550.0f, -6450.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x2C70, { 2118.981201171875f, 3281.02099609375f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x2C80, { 3307.2939453125f, 4492.70703125f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x2C90, { -15.910426139831543f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x2CA0, { 2712.85107421875f, 3887.1513671875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x2CB0, { 1522.707275390625f, 2672.758056640625f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x2CC0, { 39.06377410888672f, 1160.940185546875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus2LuigiFile2_DLLink_0x2CD0, { -559.90380859375f, 547.8846435546875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x307C to 0x3650 (1492 bytes) */
/* MPVertexData[94] @ 0x307C — vertex positions (MPGeometryData.vertex_data) */
MPVertexData dGRBonus2LuigiFile2_gap_0x307C[94] = {
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
	{ {   -450,   -300 }, 0x0000 },
	{ {   -450,      0 }, 0x000E },
	{ {    450,      0 }, 0x0000 },
	{ {    450,   -300 }, 0x0000 },
	{ {   -450,   -300 }, 0x0000 },
	{ {   -450,      0 }, 0x000E },
	{ {    450,      0 }, 0x0000 },
	{ {    450,   -300 }, 0x0000 },
	{ {   -450,   -300 }, 0x0000 },
	{ {   -450,      0 }, 0x000E },
	{ {    450,      0 }, 0x0000 },
	{ {    450,   -300 }, 0x0000 },
	{ {   -450,      0 }, 0x000E },
	{ {    450,      0 }, 0x0000 },
	{ {   -345,      0 }, 0x000E },
	{ {    345,      0 }, 0x0000 },
	{ {   -300,  -6600 }, 0x0000 },
	{ {  -1500,  -6600 }, 0x0000 },
	{ {  -1500,  -6300 }, 0x0000 },
	{ {   -300,  -6300 }, 0x0000 },
	{ {   -600,  -1200 }, 0x0000 },
	{ {  -3600,  -1200 }, 0x0000 },
	{ {  -3600,  -6600 }, 0x0000 },
	{ {  -2400,  -6600 }, 0x0000 },
	{ {  -2400,  -5400 }, 0x0000 },
	{ {   -600,  -5400 }, 0x0000 },
	{ {   -600,  -1200 }, 0x0000 },
	{ {   -600,   5400 }, 0x0000 },
	{ {  -7500,   5400 }, 0x0000 },
	{ {  -7500,  -2100 }, 0x0000 },
	{ {  -7200,  -2100 }, 0x0000 },
	{ {  -7200,   5100 }, 0x0000 },
	{ {   -900,   5100 }, 0x0000 },
	{ {   -900,  -1200 }, 0x0000 },
	{ {  -3600,   2100 }, 0x0000 },
	{ {  -4500,   2100 }, 0x0000 },
	{ {  -4500,   2700 }, 0x0000 },
	{ {  -3600,   2700 }, 0x0000 },
	{ {  -4800,  -1500 }, 0x0000 },
	{ {  -6000,  -1500 }, 0x0000 },
	{ {  -6000,  -1200 }, 0x0000 },
	{ {  -4800,  -1200 }, 0x0000 },
	{ {   5400,  -4950 }, 0x0000 },
	{ {   5100,  -4950 }, 0x0000 },
	{ {   5100,  -2850 }, 0x0000 },
	{ {   7500,  -2850 }, 0x0000 },
	{ {   7500,  -4950 }, 0x0000 },
	{ {   7200,  -4950 }, 0x0000 },
	{ {   7200,  -3150 }, 0x0000 },
	{ {   5400,  -3150 }, 0x0000 },
	{ {  -4950,   3000 }, 0x0000 },
	{ {  -6750,   3000 }, 0x0000 },
	{ {  -6750,   2400 }, 0x0000 },
	{ {  -6300,   1800 }, 0x0000 },
	{ {  -5400,   1800 }, 0x0000 },
	{ {  -4950,   2400 }, 0x0000 },
	{ {  -1350,   3300 }, 0x0000 },
	{ {  -3150,   3300 }, 0x0000 },
	{ {  -3150,   2700 }, 0x0000 },
	{ {  -2700,   2100 }, 0x0000 },
	{ {  -1800,   2100 }, 0x0000 },
	{ {  -1350,   2700 }, 0x0000 },
	{ {  -3150,    750 }, 0x0000 },
	{ {  -4950,    750 }, 0x0000 },
	{ {  -4950,    150 }, 0x0000 },
	{ {  -4500,   -450 }, 0x0000 },
	{ {  -3600,   -450 }, 0x0000 },
	{ {  -3150,    150 }, 0x0000 },
	{ {    450,   -150 }, 0x0000 },
	{ {   -450,   -150 }, 0x0000 },
	{ {   -450,    150 }, 0x0000 },
	{ {    450,    150 }, 0x0000 },
	{ {    300,   -300 }, 0x0000 },
	{ {   -300,   -300 }, 0x0000 },
	{ {   -300,      0 }, 0x0000 },
	{ {    300,      0 }, 0x0000 },
	{ {    150,   -300 }, 0x0000 },
	{ {   -150,   -300 }, 0x0000 },
	{ {   -150,      0 }, 0x0000 },
	{ {    150,      0 }, 0x0000 },
	{ {   -900,  -5100 }, 0x0000 },
	{ {  -5100,  -5100 }, 0x0000 },
	{ {  -3450,  -2700 }, 0x0000 },
	{ {   -900,  -2700 }, 0x0000 },
};

/* MPVertexArray (160 IDs) @ 0x32B0 — vertex_id table (MPGeometryData.vertex_id) */
u16 dGRBonus2LuigiFile2_gap_0x307C_sub_0x234[160] = {
	  0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  11,  12,  12,  13,  10,  11,
	 15,  16,  16,  17,  14,  15,  19,  20,  20,  21,  18,  19,  22,  23,  24,  25,
	 37,  38,  66,  67,  60,  61,  46,  47,  72,  73,  50,  51,  30,  31,  54,  55,
	 28,  29,  26,  27,  32,  33,  34,  35,  56,  57,  52,  53,  58,  59,  39,  40,
	 48,  49,  75,  76,  63,  64,  69,  70,  44,  45,  41,  42,  55,  56,  59,  52,
	 29,  26,  35,  36,  37,  70,  71,  66,  33,  34,  76,  77,  72,  47,  44,  51,
	 48,  64,  65,  60,  40,  41,  38,  39,  61,  62,  63,  49,  50,  73,  74,  75,
	 45,  46,  31,  32,  67,  68,  69,  27,  28,  42,  43,  53,  54,  57,  58,  80,
	 81,  78,  79,  81,  78,  79,  80,  84,  85,  82,  83,  85,  82,  83,  84,  88,
	 89,  86,  87,  89,  86,  87,  88,  92,  93,  90,  91,  93,  90,  91,  92,   0,
};

/* MPVertexLinks[76] @ 0x33F0 — line vertex pairs (MPGeometryData.vertex_links) */
MPVertexLinks dGRBonus2LuigiFile2_gap_0x307C_sub_0x374[76] = {
	{   0, 2 }, {   2, 2 }, {   4, 2 }, {   6, 2 }, {   8, 2 }, {  10, 2 },
	{  12, 2 }, {  14, 2 }, {  16, 2 }, {  18, 2 }, {  20, 2 }, {  22, 2 },
	{  24, 2 }, {  26, 2 }, {  28, 2 }, {  30, 2 }, {  32, 2 }, {  34, 2 },
	{  36, 2 }, {  38, 2 }, {  40, 2 }, {  42, 2 }, {  44, 2 }, {  46, 2 },
	{  48, 2 }, {  50, 2 }, {  52, 2 }, {  54, 2 }, {  56, 2 }, {  58, 2 },
	{  60, 2 }, {  62, 2 }, {  64, 2 }, {  66, 2 }, {  68, 2 }, {  70, 2 },
	{  72, 2 }, {  74, 2 }, {  76, 2 }, {  78, 2 }, {  80, 2 }, {  82, 3 },
	{  85, 3 }, {  88, 2 }, {  90, 3 }, {  93, 2 }, {  95, 2 }, {  97, 3 },
	{ 100, 2 }, { 102, 2 }, { 104, 3 }, { 107, 2 }, { 109, 3 }, { 112, 2 },
	{ 114, 2 }, { 116, 3 }, { 119, 2 }, { 121, 2 }, { 123, 2 }, { 125, 2 },
	{ 127, 2 }, { 129, 2 }, { 131, 2 }, { 133, 2 }, { 135, 2 }, { 137, 2 },
	{ 139, 2 }, { 141, 2 }, { 143, 2 }, { 145, 2 }, { 147, 2 }, { 149, 2 },
	{ 151, 2 }, { 153, 2 }, { 155, 2 }, { 157, 2 },
};

/* MPLineInfo[15] @ 0x3520 — yakumono line groups (MPGeometryData.line_info) */
MPLineInfo dGRBonus2LuigiFile2_gap_0x307C_sub_0x4A4[15] = {
	{ 1, { {  0,   1}, {  1,   0}, {  1,   0}, {  1,   0} } },
	{ 2, { {  1,   1}, {  2,   0}, {  2,   0}, {  2,   0} } },
	{ 3, { {  2,   1}, {  3,   0}, {  3,   0}, {  3,   0} } },
	{ 4, { {  3,   1}, {  4,   0}, {  4,   0}, {  4,   0} } },
	{ 5, { {  4,   1}, {  5,   0}, {  5,   0}, {  5,   0} } },
	{ 6, { {  5,   1}, {  6,   0}, {  6,   1}, {  7,   1} } },
	{ 7, { {  8,   1}, {  9,   0}, {  9,   1}, { 10,   1} } },
	{ 8, { { 11,   1}, { 12,   0}, { 12,   1}, { 13,   1} } },
	{ 9, { { 14,   1}, { 15,   0}, { 15,   0}, { 15,   0} } },
	{ 10, { { 15,   1}, { 16,   0}, { 16,   0}, { 16,   0} } },
	{ 11, { { 16,   9}, { 25,  13}, { 38,  11}, { 49,  11} } },
	{ 12, { { 60,   1}, { 61,   1}, { 62,   1}, { 63,   1} } },
	{ 13, { { 64,   1}, { 65,   1}, { 66,   1}, { 67,   1} } },
	{ 14, { { 68,   1}, { 69,   1}, { 70,   1}, { 71,   1} } },
	{ 15, { { 72,   1}, { 73,   1}, { 74,   1}, { 75,   1} } },
};

/* MPMapObjData[5] @ 0x3630 — map objects (MPGeometryData.mapobjs); 2 bytes pad to align next decl */
MPMapObjData dGRBonus2LuigiFile2_gap_0x307C_sub_0x5B4[5] = {
	{  33, { -4050,  2703 } },
	{   0, { -4050,  2703 } },
	{   1, { -5700, -1196 } },
	{   2, {  -900, -6297 } },
	{   3, { -5100, -1196 } },
};

/* MPGeometryData @ 0x3650 (28 bytes + 4 bytes pad) */
MPGeometryData dGRBonus2LuigiFile2_MPGeometryData_0x3650 = {
	15,
	(MPVertexPosContainer*)dGRBonus2LuigiFile2_gap_0x307C,
	(MPVertexArray*)dGRBonus2LuigiFile2_gap_0x307C_sub_0x234,
	dGRBonus2LuigiFile2_gap_0x307C_sub_0x374,
	dGRBonus2LuigiFile2_gap_0x307C_sub_0x4A4,
	5,
	(MPMapObjContainer*)dGRBonus2LuigiFile2_gap_0x307C_sub_0x5B4,
};
PAD(4);

/* Raw data from file offset 0x3670 to 0x3EA0 (2096 bytes) */
/* Split AnimJoint blob: forward decls for sub-scripts. */
extern Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x50[7];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0xA4[5];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0xB8[20];
extern SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x108[1];
extern u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x120[10];
extern u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x148[13];
extern u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x17C[18];
extern u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x1C4[18];
extern u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x20C[7];
extern Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x228[7];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x27C[5];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x290[20];
extern SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x2E0[1];
extern u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x2F8[10];
extern Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x320[7];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x374[5];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x388[20];
extern SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x3D8[1];
extern u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x3F0[10];
extern u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x418[13];
extern Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x44C[7];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x4A0[5];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x4B4[20];
extern SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x504[1];
extern u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x51C[10];
extern Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x544[7];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x598[5];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x5AC[20];
extern SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x5FC[1];
extern u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x614[10];
extern Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x63C[7];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x690[5];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x6A4[20];
extern SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x6F4[1];
extern u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x70C[10];
extern Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x734[7];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x788[5];
extern f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x79C[20];
extern SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x7EC[1];
extern u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x804[11];

AObjEvent32 *dGRBonus2LuigiFile2_Layer1Anim_AnimJoint[20] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x120,
	(AObjEvent32 *)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x148,
	(AObjEvent32 *)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x17C,
	(AObjEvent32 *)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x1C4,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x20C,
	(AObjEvent32 *)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x2F8,
	(AObjEvent32 *)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x3F0,
	(AObjEvent32 *)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x418,
	(AObjEvent32 *)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x51C,
	(AObjEvent32 *)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x614,
	(AObjEvent32 *)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x70C,
	(AObjEvent32 *)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x804,
};

Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x50[7] = {
	{ -450.0f, 3300.0f, 0.0f },
	{ 750.0f, 1950.0f, 0.0f },
	{ 1950.0f, 600.0f, 0.0f },
	{ 4050.0f, -150.0f, 0.0f },
	{ 6150.0f, 600.0f, 0.0f },
	{ 7350.0f, 1950.0f, 0.0f },
	{ 8550.0f, 3300.0f, 0.0f },
};f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0xA4[5] = {
	0.0f, 0.23591899871826172f, 0.5f, 0.7640810012817383f,
	1.0f,
};

f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0xB8[20] = {
	325.0000305175781f, 0.0f, 300.0f, 0.0f,
	3625.0f, 450.0f, -300.0f, -1400.0f,
	1900.0f, 4250.0f, 450.0f, -1500.0f,
	400.0f, 0.0f, 4900.0f, 325.0000305175781f,
	-1300.0f, 2250.0f, -1900.0f, 4250.0f,
};

SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x108[1] = {
	{
		nSYInterpKindBezier, 5, 0.0f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x50,
		260.88287353515625f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0xA4,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0xB8,
	},
};

u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x120[10] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x108,
	aobjEvent32SetVal0RateBlock(0x008, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x120,
};

u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x148[13] = {
	aobjEvent32SetVal(0x020, 0),
	    0x454E4000,  /* 3300.0f */
	aobjEvent32SetValAfter(0x050, 0),
	    0xC5B6D000,  /* -5850.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x020, 400),
	    0x454E4000,  /* 3300.0f */
	aobjEvent32SetValBlock(0x020, 100),
	    0x4528C000,  /* 2700.0f */
	aobjEvent32SetValBlock(0x020, 300),
	    0x454E4000,  /* 3300.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x148,
};

u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x17C[18] = {
	aobjEvent32SetValBlock(0x020, 0),
	    0x43960000,  /* 300.0f */
	aobjEvent32SetValAfterBlock(0x050, 0),
	    0xC57D2000,  /* -4050.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x020, 300),
	    0x44834000,  /* 1050.0f */
	aobjEvent32Cmd12(0x020, 75),
	aobjEvent32Wait(225),
	aobjEvent32SetValBlock(0x020, 400),
	    0x44834000,  /* 1050.0f */
	aobjEvent32SetValBlock(0x020, 100),
	    0x43960000,  /* 300.0f */
	aobjEvent32SetVal(0x020, 300),
	    0x44834000,  /* 1050.0f */
	aobjEvent32Wait(75),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x17C,
};

u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x1C4[18] = {
	aobjEvent32SetValBlock(0x020, 0),
	    0x45610000,  /* 3600.0f */
	aobjEvent32SetValAfterBlock(0x050, 0),
	    0xC50CA000,  /* -2250.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x020, 400),
	    0x45610000,  /* 3600.0f */
	aobjEvent32Cmd12(0x020, 350),
	aobjEvent32Wait(50),
	aobjEvent32SetValBlock(0x020, 100),
	    0x453B8000,  /* 3000.0f */
	aobjEvent32SetValBlock(0x020, 300),
	    0x45610000,  /* 3600.0f */
	aobjEvent32SetVal(0x020, 400),
	    0x45610000,  /* 3600.0f */
	aobjEvent32Wait(350),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x1C4,
};

u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x20C[7] = {
	aobjEvent32SetValAfter(0x070, 0),
	    0x451F6000,  /* 2550.0f */
	    0xC5C99000,  /* -6450.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(800),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x20C,
};

Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x228[7] = {
	{ 1350.0f, 4050.0f, 0.0f },
	{ 2100.0f, 3300.0f, 0.0f },
	{ 2850.0f, 2550.0f, 0.0f },
	{ 4050.0f, 2100.0f, 0.0f },
	{ 5250.0f, 2550.0f, 0.0f },
	{ 6000.0f, 3300.0f, 0.0f },
	{ 6750.0f, 4050.0f, 0.0f },
};f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x27C[5] = {
	0.0f, 0.23812800645828247f, 0.5f, 0.7618719935417175f,
	1.0f,
};

f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x290[20] = {
	81.25000762939453f, 0.0f, 124.99999237060547f, 0.0f,
	1250.0f, 156.25001525878906f, -24.999984741210938f, -562.5f,
	575.0f, 1456.25f, 156.25001525878906f, -600.0000610351562f,
	300.0f, 0.0f, 1600.0f, 81.25000762939453f,
	-325.0f, 612.5f, -575.0f, 1456.25f,
};

SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x2E0[1] = {
	{
		nSYInterpKindBezier, 5, 0.0f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x228,
		151.83554077148438f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x27C,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x290,
	},
};

u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x2F8[10] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x2E0,
	aobjEvent32SetVal0RateBlock(0x008, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x2F8,
};

Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x320[7] = {
	{ 3000.0f, 4800.0f, 0.0f },
	{ 3300.0f, 4500.0f, 0.0f },
	{ 3600.0f, 4200.0f, 0.0f },
	{ 4050.0f, 4050.0f, 0.0f },
	{ 4500.0f, 4200.0f, 0.0f },
	{ 4800.0f, 4500.0f, 0.0f },
	{ 5100.0f, 4800.0f, 0.0f },
};f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x374[5] = {
	0.0f, 0.2438810020685196f, 0.5f, 0.7561190128326416f,
	1.0f,
};

f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x388[20] = {
	12.500001907348633f, 0.0f, 0.0f, 0.0f,
	200.0f, 12.500001907348633f, 0.0f, -50.00000762939453f,
	50.0f, 212.5f, 12.500001907348633f, -50.000003814697266f,
	24.99999237060547f, 0.0f, 225.0f, 12.500001907348633f,
	-50.000003814697266f, 75.0f, -50.0f, 212.5f,
};

SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x3D8[1] = {
	{
		nSYInterpKindBezier, 5, 0.0f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x320,
		58.347286224365234f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x374,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x388,
	},
};

u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x3F0[10] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x3D8,
	aobjEvent32SetVal0RateBlock(0x008, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x3F0,
};

u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x418[13] = {
	aobjEvent32SetVal0Rate(0x030, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x030, 400),
	    0xC528C000,  /* -2700.0f */
	    0xB6700000,  /* -3.5762786865234375e-06f */
	aobjEvent32SetVal0RateBlock(0x030, 400),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x418,
};

Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x44C[7] = {
	{ 2250.0f, 4350.0f, 0.0f },
	{ 2700.0f, 3900.0f, 0.0f },
	{ 3150.0f, 3450.0f, 0.0f },
	{ 4050.0f, 3150.0f, 0.0f },
	{ 4950.0f, 3450.0f, 0.0f },
	{ 5400.0f, 3900.0f, 0.0f },
	{ 5850.0f, 4350.0f, 0.0f },
};f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x4A0[5] = {
	0.0f, 0.21985599398612976f, 0.5f, 0.7801439762115479f,
	1.0f,
};

f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x4B4[20] = {
	62.5f, 0.0f, 150.0f, 0.0f,
	450.0f, 112.5f, -150.0f, -275.0f,
	550.0f, 662.5f, 112.5f, -300.0f,
	-50.0f, 0.0f, 900.0f, 62.5f,
	-250.0f, 525.0f, -550.0f, 662.5f,
};

SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x504[1] = {
	{
		nSYInterpKindBezier, 5, 0.0f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x44C,
		102.79510498046875f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x4A0,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x4B4,
	},
};

u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x51C[10] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x504,
	aobjEvent32SetVal0RateBlock(0x008, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x51C,
};

Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x544[7] = {
	{ 750.0f, 3600.0f, 0.0f },
	{ 1500.0f, 2700.0f, 0.0f },
	{ 2250.0f, 1800.0f, 0.0f },
	{ 4050.0f, 1050.0f, 0.0f },
	{ 5850.0f, 1800.0f, 0.0f },
	{ 6600.0f, 2700.0f, 0.0f },
	{ 7350.0f, 3600.0f, 0.0f },
};f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x598[5] = {
	0.0f, 0.21252399682998657f, 0.5f, 0.7874760031700134f,
	1.0f,
};

f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x5AC[20] = {
	312.5f, 0.0f, 725.0000610351562f, 0.0f,
	1525.0f, 812.5f, -1000.0f, -1475.0f,
	2700.0f, 2562.5f, 812.5f, -2250.0f,
	400.0f, 0.0f, 3600.0f, 312.5f,
	-1250.0f, 2600.0f, -2700.0f, 2562.5f,
};

SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x5FC[1] = {
	{
		nSYInterpKindBezier, 5, 0.0f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x544,
		200.6129150390625f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x598,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x5AC,
	},
};

u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x614[10] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x5FC,
	aobjEvent32SetVal0RateBlock(0x008, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x614,
};

Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x63C[7] = {
	{ -1650.0f, 2850.0f, 0.0f },
	{ 0.0f, 1200.0f, 0.0f },
	{ 1650.0f, -450.0f, 0.0f },
	{ 4050.0f, -1050.0f, 0.0f },
	{ 6450.0f, -450.0f, 0.0f },
	{ 8100.0f, 1200.0f, 0.0f },
	{ 9750.0f, 2850.0f, 0.0f },
};f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x690[5] = {
	0.0f, 0.24703599512577057f, 0.5f, 0.7529640197753906f,
	1.0f,
};

f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x6A4[20] = {
	462.5000305175781f, 0.0f, -549.9999389648438f, 0.0f,
	6050.0f, 162.50003051757812f, -450.0f, -25.000244140625f,
	750.0f, 5962.5f, 162.50003051757812f, -200.00001525878906f,
	-400.000244140625f, 0.0f, 6400.0f, 462.5000305175781f,
	-1850.0f, 2225.000244140625f, -750.0f, 5962.5f,
};

SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x6F4[1] = {
	{
		nSYInterpKindBezier, 5, 0.0f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x63C,
		312.48394775390625f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x690,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x6A4,
	},
};

u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x70C[10] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x6F4,
	aobjEvent32SetVal0RateBlock(0x008, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x70C,
};

Vec3f dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x734[7] = {
	{ -2100.0f, 2550.0f, 0.0f },
	{ -600.0f, 600.0f, 0.0f },
	{ 900.0f, -1350.0f, 0.0f },
	{ 4050.0f, -2400.0f, 0.0f },
	{ 7200.0f, -1350.0f, 0.0f },
	{ 8700.0f, 600.0f, 0.0f },
	{ 10200.0f, 2550.0f, 0.0f },
};f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x788[5] = {
	0.0f, 0.2278040051460266f, 0.5f, 0.7721959948539734f,
	1.0f,
};

f32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x79C[20] = {
	981.2500610351562f, 0.0f, 800.0000610351562f, 0.0f,
	6725.0f, 1156.25f, -1825.0001220703125f, -2337.5f,
	5525.0f, 8506.25f, 1156.25f, -2800.0f,
	-875.00048828125f, 0.0f, 11025.0f, 981.2500610351562f,
	-3925.0f, 6687.5f, -5525.0f, 8506.25f,
};

SYInterpDesc dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x7EC[1] = {
	{
		nSYInterpKindBezier, 5, 0.0f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x734,
		371.9554443359375f,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x788,
		dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x79C,
	},
};

u32 dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x804[11] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x7EC,
	aobjEvent32SetVal0RateBlock(0x008, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x008, 400),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus2LuigiFile2_Layer1Anim_AnimJoint_0x804,
	aobjEvent32End(),
};

