/* relocData file 86: ITCommonObject — common-item geometry pool.
 * Every item in ITCommonData has an ITAttributes struct whose `data`,
 * `p_mobjsubs`, `anim_joints`, and `p_matanim_joints` fields are patched
 * by fixRelocChain to point at offsets in this file. The block names
 * below mirror those extern reloc entries in 251_ITCommonData.reloc so
 * each chunk carries the same <Item>_<AttrType>_<Field> label as its
 * caller on the ITCommonData side. */

#include "relocdata_types.h"

/* Shared vertex / DL pool the item DObjDesc trees reference via the
 * intern chain. Not yet broken down into typed Vtx / Gfx / Tex blocks. */
/* @ 0x0000, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0008, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x0008[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x0008.palette.inc.c>
};

/* @ 0x0028, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0030, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x0030[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x0030.palette.inc.c>
};

/* @ 0x0050, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0058, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x0058[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x0058.palette.inc.c>
};

/* @ 0x0078, 408 bytes (raw gap) */
u8 dITCommonObject_data_0x0000_gap_0x0078[0x198] = {
	#include <ITCommonObject/dITCommonObject_data_0x0000_gap_0x0078.data.inc.c>
};

/* @ 0x0210, 224 bytes (14 vertices) */
Vtx dITCommonObject_Vtx_0x0210[14] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x0210.vtx.inc.c>
};

/* @ 0x02F0, 176 bytes (11 vertices) */
Vtx dITCommonObject_Vtx_0x02F0[11] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x02F0.vtx.inc.c>
};

/* @ 0x03A0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x03A0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x03A0.vtx.inc.c>
};

/* @ 0x03E0, 96 bytes (12 Gfx commands) */
Gfx dITCommonObject_Gfx_0x03E0[12] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x03E0.dl.inc.c>
};

/* @ 0x0440, 256 bytes (32 Gfx commands) */
Gfx dITCommonObject_Gfx_0x0440[32] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x0440.dl.inc.c>
};

/* @ 0x0540, 160 bytes (20 Gfx commands) */
Gfx dITCommonObject_Gfx_0x0540[20] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x0540.dl.inc.c>
};

/* @ 0x05E0, 144 bytes (18 Gfx commands) */
Gfx dITCommonObject_Gfx_0x05E0[18] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x05E0.dl.inc.c>
};

/* @ 0x00670, 1088 bytes */
DObjDesc dITCommonObject_Capsule_Item_data_DObjDesc[5] = {
	{ 0, NULL, { 0.0f, -90.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x03E0, { 0.0f, 90.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)dITCommonObject_Gfx_0x0540, { 0.0f, 45.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)dITCommonObject_Gfx_0x05E0, { 0.0f, -45.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x074C, 12 bytes (raw gap) */
PAD(12);

/* @ 0x0758, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x0758[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x0758.palette.inc.c>
};

/* @ 0x0778, 520 bytes (raw gap) */
u8 dITCommonObject_Capsule_Item_data_remainder_gap_0x0778[0x208] = {
	#include <ITCommonObject/dITCommonObject_Capsule_Item_data_remainder_gap_0x0778.data.inc.c>
};

/* @ 0x0980, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x0980[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x0980.vtx.inc.c>
};

/* @ 0x09C0, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x09C0[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x09C0.dl.inc.c>
};

/* @ 0x00AB0, 1704 bytes */
DObjDesc dITCommonObject_Tomato_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 390.0f, -75.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x09C0, { 0.0f, 75.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x0B34, 1572 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Tomato_Item_data_remainder[0x624] = {
	#include <ITCommonObject/dITCommonObject_Tomato_Item_data_remainder.data.inc.c>
};

/* @ 0x01158, 352 bytes */
DObjDesc dITCommonObject_Heart_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_Tomato_Item_data_remainder + 0x614), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11DC, 92 bytes (raw gap) */
u8 dITCommonObject_Heart_Item_data_remainder_gap_0x11DC[0x5C] = {
	#include <ITCommonObject/dITCommonObject_Heart_Item_data_remainder_gap_0x11DC.data.inc.c>
};

/* @ 0x1238, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x1238[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x1238.palette.inc.c>
};

/* @ 0x1258, 96 bytes (trailing gap) */
u8 dITCommonObject_Heart_Item_data_remainder_gap_0x1258[0x60] = {
	#include <ITCommonObject/dITCommonObject_Heart_Item_data_remainder_gap_0x1258.data.inc.c>
};

/* @ 0x012B8, 680 bytes */
/* @ 0x12B8, 280 bytes (raw gap) */
u8 dITCommonObject_Star_Item_mobjsubs_gap_0x12B8[0x118] = {
	#include <ITCommonObject/dITCommonObject_Star_Item_mobjsubs_gap_0x12B8.data.inc.c>
};

/* @ 0x13D0, 48 bytes (3 vertices) */
Vtx dITCommonObject_Vtx_0x13D0[3] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x13D0.vtx.inc.c>
};

/* @ 0x1400, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x1400[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x1400.vtx.inc.c>
};

/* @ 0x1440, 288 bytes (36 Gfx commands) */
Gfx dITCommonObject_Gfx_0x1440[36] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x1440.dl.inc.c>
};

/* @ 0x01560, 144 bytes */
DObjDesc dITCommonObject_Star_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x1440, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x15E4, 12 bytes (vertex / DL / texture pool) */
PAD(12);

/* @ 0x015F0, 808 bytes */
u32 dITCommonObject_Star_Item_matanimjoints[202] = {
	#include <ITCommonObject/Star_Item_matanimjoints.data.inc.c>
};

/* @ 0x01918, 1256 bytes */
DObjDesc dITCommonObject_Sword_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x308), { 0.0f, 360.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x318), { 0.0f, -267.0000305175781f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x19C8, 16 bytes (raw gap) */
PAD(16);

/* @ 0x19D8, 64 bytes (32-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x19D8[32] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x19D8.palette.inc.c>
};

/* @ 0x1A18, 8 bytes (raw gap) */
PAD(8);

/* @ 0x1A20, 64 bytes (32-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x1A20[32] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x1A20.palette.inc.c>
};

/* @ 0x1A60, 144 bytes (raw gap) */
u8 dITCommonObject_Sword_Item_data_remainder_gap_0x1A60[0x90] = {
	#include <ITCommonObject/dITCommonObject_Sword_Item_data_remainder_gap_0x1A60.data.inc.c>
};

/* @ 0x1AF0, 48 bytes (3 vertices) */
Vtx dITCommonObject_Vtx_0x1AF0[3] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x1AF0.vtx.inc.c>
};

/* @ 0x1B20, 144 bytes (9 vertices) */
Vtx dITCommonObject_Vtx_0x1B20[9] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x1B20.vtx.inc.c>
};

/* @ 0x1BB0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x1BB0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x1BB0.vtx.inc.c>
};

/* @ 0x1BF0, 88 bytes (11 Gfx commands) */
Gfx dITCommonObject_Gfx_0x1BF0[11] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x1BF0.dl.inc.c>
};

/* @ 0x1C48, 256 bytes (32 Gfx commands) */
Gfx dITCommonObject_Gfx_0x1C48[32] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x1C48.dl.inc.c>
};

/* @ 0x1D48, 184 bytes (23 Gfx commands) */
Gfx dITCommonObject_Gfx_0x1D48[23] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x1D48.dl.inc.c>
};

/* @ 0x01E00, 920 bytes */
DObjDesc dITCommonObject_Bat_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x1BF0, { 0.0f, 139.58062744140625f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)dITCommonObject_Gfx_0x1D48, { 9.999999974752427e-07f, -198.36004638671875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x1EB0, 8 bytes (raw gap) */
PAD(8);

/* @ 0x1EB8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x1EB8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x1EB8.palette.inc.c>
};

/* @ 0x1ED8, 72 bytes (raw gap) */
u8 dITCommonObject_Bat_Item_data_remainder_gap_0x1ED8[0x48] = {
	#include <ITCommonObject/dITCommonObject_Bat_Item_data_remainder_gap_0x1ED8.data.inc.c>
};

/* @ 0x1F20, 384 bytes (24 vertices) */
Vtx dITCommonObject_Vtx_0x1F20[24] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x1F20.vtx.inc.c>
};

/* @ 0x20A0, 248 bytes (31 Gfx commands) */
Gfx dITCommonObject_Gfx_0x20A0[31] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x20A0.dl.inc.c>
};

/* @ 0x02198, 1464 bytes */
DObjDesc dITCommonObject_Harisen_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 158.99996948242188f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x20A0, { 0.0f, -209.99996948242188f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x2248, 128 bytes (raw gap) */
u8 dITCommonObject_Harisen_Item_data_remainder_gap_0x2248[0x80] = {
	#include <ITCommonObject/dITCommonObject_Harisen_Item_data_remainder_gap_0x2248.data.inc.c>
};

/* @ 0x22C8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x22C8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x22C8.palette.inc.c>
};

/* @ 0x22E8, 200 bytes (raw gap) */
u8 dITCommonObject_Harisen_Item_data_remainder_gap_0x22E8[0xC8] = {
	#include <ITCommonObject/dITCommonObject_Harisen_Item_data_remainder_gap_0x22E8.data.inc.c>
};

/* @ 0x23B0, 192 bytes (12 vertices) */
Vtx dITCommonObject_Vtx_0x23B0[12] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x23B0.vtx.inc.c>
};

/* @ 0x2470, 384 bytes (24 vertices) */
Vtx dITCommonObject_Vtx_0x2470[24] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x2470.vtx.inc.c>
};

/* @ 0x25F0, 352 bytes (44 Gfx commands) */
Gfx dITCommonObject_Gfx_0x25F0[44] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x25F0.dl.inc.c>
};

/* @ 0x02750, 2784 bytes */
DObjDesc dITCommonObject_Hammer_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x25F0, { 0.0f, 239.9998779296875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x27D4, 20 bytes (raw gap) */
PAD(20);

/* @ 0x27E8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x27E8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x27E8.palette.inc.c>
};

/* @ 0x2808, 2600 bytes (trailing gap) */
u8 dITCommonObject_Hammer_Item_data_remainder_gap_0x2808[0xA28] = {
	#include <ITCommonObject/dITCommonObject_Hammer_Item_data_remainder_gap_0x2808.data.inc.c>
};

/* @ 0x03230, 456 bytes */
/* @ 0x3230, 160 bytes (raw gap) */
u8 dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230[0xA0] = {
	#include <ITCommonObject/dITCommonObject_BombHei_Item_mobjsubs_gap_0x3230.data.inc.c>
};

/* @ 0x32D0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x32D0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x32D0.vtx.inc.c>
};

/* @ 0x3310, 232 bytes (29 Gfx commands) */
Gfx dITCommonObject_Gfx_0x3310[29] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x3310.dl.inc.c>
};

/* @ 0x033F8, 1448 bytes */
DObjDesc dITCommonObject_BombHei_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x3310, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x347C, 396 bytes (raw gap) */
u8 dITCommonObject_BombHei_Item_data_remainder_gap_0x347C[0x18C] = {
	#include <ITCommonObject/dITCommonObject_BombHei_Item_data_remainder_gap_0x347C.data.inc.c>
};

/* @ 0x3608, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x3608[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x3608.palette.inc.c>
};

/* @ 0x3628, 8 bytes (raw gap) */
PAD(8);

/* @ 0x3630, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x3630[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x3630.palette.inc.c>
};

/* @ 0x3650, 208 bytes (raw gap) */
u8 dITCommonObject_BombHei_Item_data_remainder_gap_0x3650[0xD0] = {
	#include <ITCommonObject/dITCommonObject_BombHei_Item_data_remainder_gap_0x3650.data.inc.c>
};

/* @ 0x3720, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x3720[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x3720.vtx.inc.c>
};

/* @ 0x3760, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x3760[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x3760.vtx.inc.c>
};

/* @ 0x37A0, 272 bytes (34 Gfx commands) */
Gfx dITCommonObject_Gfx_0x37A0[34] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x37A0.dl.inc.c>
};

/* @ 0x38B0, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x38B0[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x38B0.dl.inc.c>
};

/* @ 0x039A0, 1456 bytes */
DObjDesc dITCommonObject_MSBomb_Item_data_DObjDesc[5] = {
	{ 0, NULL, { -9.999999974752427e-07f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 9.999999974752427e-07f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x37A0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x38B0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x3A7C, 12 bytes (raw gap) */
PAD(12);

/* @ 0x3A88, 96 bytes (48-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x3A88[48] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x3A88.palette.inc.c>
};

/* @ 0x3AE8, 216 bytes (raw gap) */
u8 dITCommonObject_MSBomb_Item_data_remainder_gap_0x3AE8[0xD8] = {
	#include <ITCommonObject/dITCommonObject_MSBomb_Item_data_remainder_gap_0x3AE8.data.inc.c>
};

/* @ 0x3BC0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x3BC0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x3BC0.vtx.inc.c>
};

/* @ 0x3C00, 192 bytes (12 vertices) */
Vtx dITCommonObject_Vtx_0x3C00[12] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x3C00.vtx.inc.c>
};

/* @ 0x3CC0, 240 bytes (15 vertices) */
Vtx dITCommonObject_Vtx_0x3CC0[15] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x3CC0.vtx.inc.c>
};

/* @ 0x3DB0, 416 bytes (52 Gfx commands) */
Gfx dITCommonObject_Gfx_0x3DB0[52] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x3DB0.dl.inc.c>
};

/* @ 0x03F50, 344 bytes */
DObjDesc dITCommonObject_LGun_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x3DB0, { 0.0f, 39.89999771118164f, 78.00001525878906f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x3FD4, 212 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_LGun_Item_data_remainder[0xD4] = {
	#include <ITCommonObject/dITCommonObject_LGun_Item_data_remainder.data.inc.c>
};

/* Gfx DL: LGunAmmo_Weapon_data @ 0x40A8 (21 cmds) */
Gfx dITCommonObject_LGunAmmo_Weapon_data[21] = {
	#include <ITCommonObject/LGunAmmo_Weapon_data.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0x4150 (568 bytes) */
u8 dITCommonObject_LGunAmmo_Weapon_data_post[568] = {
	#include <ITCommonObject/LGunAmmo_Weapon_data_post.data.inc.c>
};

/* @ 0x04388, 808 bytes */
/* @ 0x4388, 152 bytes (raw gap) */
u8 dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388[0x98] = {
	#include <ITCommonObject/dITCommonObject_FFlower_Item_mobjsubs_gap_0x4388.data.inc.c>
};

/* @ 0x4420, 192 bytes (12 vertices) */
Vtx dITCommonObject_Vtx_0x4420[12] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x4420.vtx.inc.c>
};

/* @ 0x44E0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x44E0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x44E0.vtx.inc.c>
};

/* @ 0x4520, 88 bytes (11 Gfx commands) */
Gfx dITCommonObject_Gfx_0x4520[11] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x4520.dl.inc.c>
};

/* @ 0x4578, 144 bytes (18 Gfx commands) */
Gfx dITCommonObject_Gfx_0x4578[18] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x4578.dl.inc.c>
};

/* @ 0x4608, 168 bytes (21 Gfx commands) */
Gfx dITCommonObject_Gfx_0x4608[21] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x4608.dl.inc.c>
};

/* @ 0x046B0, 176 bytes */
DObjDesc dITCommonObject_FFlower_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, -105.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x4520, { 0.0f, 105.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)dITCommonObject_Gfx_0x4608, { 0.0f, 37.499977111816406f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x04760, 1024 bytes */
u32 dITCommonObject_FFlower_Item_matanimjoints[256] = {
	#include <ITCommonObject/FFlower_Item_matanimjoints.data.inc.c>
};

/* @ 0x04B60, 2296 bytes */
DObjDesc dITCommonObject_StarRod_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0x250), { 0.0f, 157.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void*)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0x340), { 0.0f, 105.44328308105469f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x4C10, 2120 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_StarRod_Item_data_remainder[0x848] = {
	#include <ITCommonObject/dITCommonObject_StarRod_Item_data_remainder.data.inc.c>
};

/* Gfx DL: StarRod_Weapon_data @ 0x5458 (22 cmds) */
Gfx dITCommonObject_StarRod_Weapon_data[22] = {
	#include <ITCommonObject/StarRod_Weapon_data.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0x5508 (2264 bytes) */
u8 dITCommonObject_StarRod_Weapon_data_post[2264] = {
	#include <ITCommonObject/StarRod_Weapon_data_post.data.inc.c>
};

/* @ 0x05DE0, 424 bytes */
/* @ 0x5DE0, 160 bytes (raw gap) */
u8 dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0[0xA0] = {
	#include <ITCommonObject/dITCommonObject_GShell_Item_mobjsubs_gap_0x5DE0.data.inc.c>
};

/* @ 0x5E80, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x5E80[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x5E80.vtx.inc.c>
};

/* @ 0x5EC0, 200 bytes (25 Gfx commands) */
Gfx dITCommonObject_Gfx_0x5EC0[25] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x5EC0.dl.inc.c>
};

/* @ 0x05F88, 2032 bytes */
DObjDesc dITCommonObject_GShell_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x5EC0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x600C, 140 bytes (raw gap) */
u8 dITCommonObject_GShell_Item_data_remainder_gap_0x600C[0x8C] = {
	#include <ITCommonObject/dITCommonObject_GShell_Item_data_remainder_gap_0x600C.data.inc.c>
};

/* @ 0x6098, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x6098[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x6098.palette.inc.c>
};

/* @ 0x60B8, 8 bytes (raw gap) */
PAD(8);

/* @ 0x60C0, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x60C0[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x60C0.palette.inc.c>
};

/* @ 0x60E0, 1040 bytes (raw gap) */
u8 dITCommonObject_GShell_Item_data_remainder_gap_0x60E0[0x410] = {
	#include <ITCommonObject/dITCommonObject_GShell_Item_data_remainder_gap_0x60E0.data.inc.c>
};

/* @ 0x64F0, 224 bytes (14 vertices) */
Vtx dITCommonObject_Vtx_0x64F0[14] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x64F0.vtx.inc.c>
};

/* @ 0x65D0, 96 bytes (6 vertices) */
Vtx dITCommonObject_Vtx_0x65D0[6] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x65D0.vtx.inc.c>
};

/* @ 0x6630, 328 bytes (41 Gfx commands) */
Gfx dITCommonObject_Gfx_0x6630[41] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x6630.dl.inc.c>
};

/* @ 0x06778, 2608 bytes */
DObjDesc dITCommonObject_Box_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 9.999999974752427e-07f, -225.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x6630, { 0.0f, -9.999999974752427e-07f, 224.99998474121094f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x67FC, 492 bytes (raw gap) */
u8 dITCommonObject_Box_Item_data_remainder_gap_0x67FC[0x1EC] = {
	#include <ITCommonObject/dITCommonObject_Box_Item_data_remainder_gap_0x67FC.data.inc.c>
};

/* @ 0x69E8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x69E8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x69E8.palette.inc.c>
};

/* @ 0x6A08, 8 bytes (raw gap) */
PAD(8);

/* @ 0x6A10, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x6A10[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x6A10.palette.inc.c>
};

/* @ 0x6A30, 1040 bytes (raw gap) */
u8 dITCommonObject_Box_Item_data_remainder_gap_0x6A30[0x410] = {
	#include <ITCommonObject/dITCommonObject_Box_Item_data_remainder_gap_0x6A30.data.inc.c>
};

/* @ 0x6E40, 160 bytes (10 vertices) */
Vtx dITCommonObject_Vtx_0x6E40[10] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x6E40.vtx.inc.c>
};

/* @ 0x6EE0, 288 bytes (18 vertices) */
Vtx dITCommonObject_Vtx_0x6EE0[18] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x6EE0.vtx.inc.c>
};

/* @ 0x7000, 424 bytes (53 Gfx commands) */
Gfx dITCommonObject_Gfx_0x7000[53] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x7000.dl.inc.c>
};

/* @ 0x071A8, 736 bytes */
DObjDesc dITCommonObject_Taru_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, -210.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x7000, { 0.0f, 0.0f, 210.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x722C, 604 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Taru_Item_data_remainder[0x25C] = {
	#include <ITCommonObject/dITCommonObject_Taru_Item_data_remainder.data.inc.c>
};

/* @ 0x07488, 448 bytes */
/* @ 0x7488, 144 bytes (raw gap) */
u8 dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488[0x90] = {
	#include <ITCommonObject/dITCommonObject_NBumper_Item_mobjsubs_gap_0x7488.data.inc.c>
};

/* @ 0x7518, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x7518[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x7518.vtx.inc.c>
};

/* @ 0x7558, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x7558[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x7558.dl.inc.c>
};

/* @ 0x07648, 6872 bytes */
DObjDesc dITCommonObject_NBumper_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x7558, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x76CC, 1732 bytes (raw gap) */
u8 dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC[0x6C4] = {
	#include <ITCommonObject/dITCommonObject_NBumper_Item_data_remainder_gap_0x76CC.data.inc.c>
};

/* @ 0x7D90, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x7D90[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x7D90.palette.inc.c>
};

/* @ 0x7DB0, 8 bytes (raw gap) */
PAD(8);

/* @ 0x7DB8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x7DB8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x7DB8.palette.inc.c>
};

/* @ 0x7DD8, 4936 bytes (trailing gap) */
u8 dITCommonObject_NBumper_Item_data_remainder_gap_0x7DD8[0x1348] = {
	#include <ITCommonObject/dITCommonObject_NBumper_Item_data_remainder_gap_0x7DD8.data.inc.c>
};

/* @ 0x09120, 784 bytes */
/* @ 0x9120, 176 bytes (raw gap) */
u8 dITCommonObject_MBall_Item_mobjsubs_gap_0x9120[0xB0] = {
	#include <ITCommonObject/dITCommonObject_MBall_Item_mobjsubs_gap_0x9120.data.inc.c>
};

/* @ 0x91D0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x91D0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x91D0.vtx.inc.c>
};

/* @ 0x9210, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x9210[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x9210.vtx.inc.c>
};

/* @ 0x9250, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x9250[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x9250.dl.inc.c>
};

/* @ 0x9340, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x9340[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x9340.dl.inc.c>
};

/* @ 0x09430, 3344 bytes */
DObjDesc dITCommonObject_MBall_Item_data_DObjDesc[5] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x9250, { -75.0f, 9.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x9340, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x950C, 988 bytes (raw gap) */
u8 dITCommonObject_MBall_Item_data_remainder_gap_0x950C[0x3DC] = {
	#include <ITCommonObject/dITCommonObject_MBall_Item_data_remainder_gap_0x950C.data.inc.c>
};

/* @ 0x98E8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x98E8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x98E8.palette.inc.c>
};

/* @ 0x9908, 1800 bytes (raw gap) */
u8 dITCommonObject_MBall_Item_data_remainder_gap_0x9908[0x708] = {
	#include <ITCommonObject/dITCommonObject_MBall_Item_data_remainder_gap_0x9908.data.inc.c>
};

/* @ 0xA010, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xA010[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xA010.vtx.inc.c>
};

/* @ 0xA050, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xA050[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xA050.dl.inc.c>
};

/* @ 0x0A140, 2192 bytes */
DObjDesc dITCommonObject_Wark_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xA050, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xA1C4, 1620 bytes (raw gap) */
u8 dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4[0x654] = {
	#include <ITCommonObject/dITCommonObject_Wark_Item_data_remainder_gap_0xA1C4.data.inc.c>
};

/* @ 0xA818, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xA818[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xA818.palette.inc.c>
};

/* @ 0xA838, 408 bytes (trailing gap) */
u8 dITCommonObject_Wark_Item_data_remainder_gap_0xA838[0x198] = {
	#include <ITCommonObject/dITCommonObject_Wark_Item_data_remainder_gap_0xA838.data.inc.c>
};

/* @ 0x0A9D0, 456 bytes */
/* @ 0xA9D0, 152 bytes (raw gap) */
u8 dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0[0x98] = {
	#include <ITCommonObject/dITCommonObject_WarkRock_Weapon_mobjsubs_gap_0xA9D0.data.inc.c>
};

/* @ 0xAA68, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xAA68[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xAA68.vtx.inc.c>
};

/* @ 0xAAA8, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xAAA8[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xAAA8.dl.inc.c>
};

/* @ 0x0AB98, 1472 bytes */
DObjDesc dITCommonObject_WarkRock_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xAAA8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xAC1C, 108 bytes (raw gap) */
u8 dITCommonObject_WarkRock_Weapon_data_remainder_gap_0xAC1C[0x6C] = {
	#include <ITCommonObject/dITCommonObject_WarkRock_Weapon_data_remainder_gap_0xAC1C.data.inc.c>
};

/* @ 0xAC88, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xAC88[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xAC88.palette.inc.c>
};

/* @ 0xACA8, 904 bytes (raw gap) */
u8 dITCommonObject_WarkRock_Weapon_data_remainder_gap_0xACA8[0x388] = {
	#include <ITCommonObject/dITCommonObject_WarkRock_Weapon_data_remainder_gap_0xACA8.data.inc.c>
};

/* @ 0xB030, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xB030[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xB030.vtx.inc.c>
};

/* @ 0xB070, 232 bytes (29 Gfx commands) */
Gfx dITCommonObject_Gfx_0xB070[29] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xB070.dl.inc.c>
};

/* @ 0x0B158, 1000 bytes */
DObjDesc dITCommonObject_Kabigon_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xB070, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xB1DC, 52 bytes (raw gap) */
u8 dITCommonObject_Kabigon_Item_data_remainder_gap_0xB1DC[0x34] = {
	#include <ITCommonObject/dITCommonObject_Kabigon_Item_data_remainder_gap_0xB1DC.data.inc.c>
};

/* @ 0xB210, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xB210[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xB210.palette.inc.c>
};

/* @ 0xB230, 784 bytes (trailing gap) */
u8 dITCommonObject_Kabigon_Item_data_remainder_gap_0xB230[0x310] = {
	#include <ITCommonObject/dITCommonObject_Kabigon_Item_data_remainder_gap_0xB230.data.inc.c>
};

/* @ 0x0B540, 456 bytes */
/* @ 0xB540, 152 bytes (raw gap) */
u8 dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540[0x98] = {
	#include <ITCommonObject/dITCommonObject_Tosakinto_Item_mobjsubs_gap_0xB540.data.inc.c>
};

/* @ 0xB5D8, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xB5D8[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xB5D8.vtx.inc.c>
};

/* @ 0xB618, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xB618[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xB618.dl.inc.c>
};

/* @ 0x0B708, 1464 bytes */
DObjDesc dITCommonObject_Tosakinto_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0xB618, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xB7B8, 432 bytes (raw gap) */
u8 dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8[0x1B0] = {
	#include <ITCommonObject/dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB7B8.data.inc.c>
};

/* @ 0xB968, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xB968[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xB968.palette.inc.c>
};

/* @ 0xB988, 520 bytes (raw gap) */
u8 dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB988[0x208] = {
	#include <ITCommonObject/dITCommonObject_Tosakinto_Item_data_remainder_gap_0xB988.data.inc.c>
};

/* @ 0xBB90, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xBB90[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xBB90.vtx.inc.c>
};

/* @ 0xBBD0, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xBBD0[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xBBD0.dl.inc.c>
};

/* @ 0x0BCC0, 1136 bytes */
DObjDesc dITCommonObject_Mew_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xBBD0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xBD44, 20 bytes (raw gap) */
PAD(20);

/* @ 0xBD58, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xBD58[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xBD58.palette.inc.c>
};

/* @ 0xBD78, 648 bytes (raw gap) */
u8 dITCommonObject_Mew_Item_data_remainder_gap_0xBD78[0x288] = {
	#include <ITCommonObject/dITCommonObject_Mew_Item_data_remainder_gap_0xBD78.data.inc.c>
};

/* @ 0xC000, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xC000[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xC000.vtx.inc.c>
};

/* @ 0xC040, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xC040[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xC040.dl.inc.c>
};

/* @ 0x0C130, 1008 bytes */
DObjDesc dITCommonObject_Nyars_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xC040, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xC1B4, 20 bytes (raw gap) */
PAD(20);

/* @ 0xC1C8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xC1C8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xC1C8.palette.inc.c>
};

/* @ 0xC1E8, 520 bytes (raw gap) */
u8 dITCommonObject_Nyars_Item_data_remainder_gap_0xC1E8[0x208] = {
	#include <ITCommonObject/dITCommonObject_Nyars_Item_data_remainder_gap_0xC1E8.data.inc.c>
};

/* @ 0xC3F0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xC3F0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xC3F0.vtx.inc.c>
};

/* @ 0xC430, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xC430[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xC430.dl.inc.c>
};

/* @ 0x0C520, 3824 bytes */
DObjDesc dITCommonObject_NyarsCoin_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xC430, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xC5A4, 60 bytes (raw gap) */
u8 dITCommonObject_NyarsCoin_Weapon_data_remainder_gap_0xC5A4[0x3C] = {
	#include <ITCommonObject/dITCommonObject_NyarsCoin_Weapon_data_remainder_gap_0xC5A4.data.inc.c>
};

/* @ 0xC5E0, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xC5E0[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xC5E0.palette.inc.c>
};

/* @ 0xC600, 3600 bytes (trailing gap) */
u8 dITCommonObject_NyarsCoin_Weapon_data_remainder_gap_0xC600[0xE10] = {
	#include <ITCommonObject/dITCommonObject_NyarsCoin_Weapon_data_remainder_gap_0xC600.data.inc.c>
};

/* @ 0x0D410, 432 bytes */
/* @ 0xD410, 144 bytes (raw gap) */
u8 dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410[0x90] = {
	#include <ITCommonObject/dITCommonObject_Lizardon_Item_mobjsubs_gap_0xD410.data.inc.c>
};

/* @ 0xD4A0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xD4A0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xD4A0.vtx.inc.c>
};

/* @ 0xD4E0, 224 bytes (28 Gfx commands) */
Gfx dITCommonObject_Gfx_0xD4E0[28] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xD4E0.dl.inc.c>
};

/* @ 0x0D5C0, 1968 bytes */
DObjDesc dITCommonObject_Lizardon_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 9.999999974752427e-07f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xD4E0, { 0.0f, 0.0f, 0.0f }, { 0.0f, -3.1415929794311523f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xD644, 244 bytes (raw gap) */
u8 dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644[0xF4] = {
	#include <ITCommonObject/dITCommonObject_Lizardon_Item_data_remainder_gap_0xD644.data.inc.c>
};

/* @ 0xD738, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xD738[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xD738.palette.inc.c>
};

/* @ 0xD758, 1560 bytes (trailing gap) */
u8 dITCommonObject_Lizardon_Item_data_remainder_gap_0xD758[0x618] = {
	#include <ITCommonObject/dITCommonObject_Lizardon_Item_data_remainder_gap_0xD758.data.inc.c>
};

/* @ 0x0DD70, 456 bytes */
/* @ 0xDD70, 152 bytes (raw gap) */
u8 dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70[0x98] = {
	#include <ITCommonObject/dITCommonObject_Spear_Item_mobjsubs_gap_0xDD70.data.inc.c>
};

/* @ 0xDE08, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xDE08[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xDE08.vtx.inc.c>
};

/* @ 0xDE48, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xDE48[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xDE48.dl.inc.c>
};

/* @ 0x0DF38, 936 bytes */
DObjDesc dITCommonObject_Spear_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0xDE48, { -135.0f, -135.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xDFE8, 760 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Spear_Item_data_remainder[0x2F8] = {
	#include <ITCommonObject/dITCommonObject_Spear_Item_data_remainder.data.inc.c>
};

/* @ 0x0E2E0, 456 bytes */
/* @ 0xE2E0, 152 bytes (raw gap) */
u8 dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0[0x98] = {
	#include <ITCommonObject/dITCommonObject_SpearSwarm_Weapon_mobjsubs_gap_0xE2E0.data.inc.c>
};

/* @ 0xE378, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xE378[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xE378.vtx.inc.c>
};

/* @ 0xE3B8, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0xE3B8[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xE3B8.dl.inc.c>
};

/* @ 0x0E4A8, 184 bytes */
DObjDesc dITCommonObject_SpearSwarm_Weapon_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0xE3B8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xE558, 8 bytes (vertex / DL / texture pool) */
PAD(8);

/* @ 0x0E560, 1280 bytes */
u32 dITCommonObject_SpearSwarm_Weapon_matanimjoints[320] = {
	#include <ITCommonObject/SpearSwarm_Weapon_matanimjoints.data.inc.c>
};

/* @ 0x0EA60, 3168 bytes */
DObjDesc dITCommonObject_Kamex_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_SpearSwarm_Weapon_matanimjoints + 0x410), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xEAE4, 1108 bytes (raw gap) */
u8 dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4[0x454] = {
	#include <ITCommonObject/dITCommonObject_Kamex_Item_data_remainder_gap_0xEAE4.data.inc.c>
};

/* @ 0xEF38, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xEF38[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xEF38.palette.inc.c>
};

/* @ 0xEF58, 88 bytes (raw gap) */
u8 dITCommonObject_Kamex_Item_data_remainder_gap_0xEF58[0x58] = {
	#include <ITCommonObject/dITCommonObject_Kamex_Item_data_remainder_gap_0xEF58.data.inc.c>
};

/* @ 0xEFB0, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0xEFB0[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0xEFB0.palette.inc.c>
};

/* @ 0xEFD0, 1776 bytes (trailing gap) */
u8 dITCommonObject_Kamex_Item_data_remainder_gap_0xEFD0[0x6F0] = {
	#include <ITCommonObject/dITCommonObject_Kamex_Item_data_remainder_gap_0xEFD0.data.inc.c>
};

/* @ 0x0F6C0, 792 bytes */
/* @ 0xF6C0, 296 bytes (raw gap) */
u8 dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0[0x128] = {
	#include <ITCommonObject/dITCommonObject_KamexHydro_Weapon_mobjsubs_gap_0xF6C0.data.inc.c>
};

/* @ 0xF7E8, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0xF7E8[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xF7E8.vtx.inc.c>
};

/* @ 0xF828, 32 bytes (2 vertices) */
Vtx dITCommonObject_Vtx_0xF828[2] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0xF828.vtx.inc.c>
};

/* @ 0xF848, 96 bytes (12 Gfx commands) */
Gfx dITCommonObject_Gfx_0xF848[12] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xF848.dl.inc.c>
};

/* @ 0xF8A8, 120 bytes (15 Gfx commands) */
Gfx dITCommonObject_Gfx_0xF8A8[15] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xF8A8.dl.inc.c>
};

/* @ 0xF920, 184 bytes (23 Gfx commands) */
Gfx dITCommonObject_Gfx_0xF920[23] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0xF920.dl.inc.c>
};

/* @ 0x0F9D8, 184 bytes */
DObjDesc dITCommonObject_KamexHydro_Weapon_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0xF848, { 4391.25f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 9.999999747378752e-06f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0xF920, { -4481.25f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xFA88, 8 bytes (vertex / DL / texture pool) */
PAD(8);

/* @ 0x0FA90, 224 bytes */
u32 dITCommonObject_KamexHydro_Weapon_animjoints[56] = {
	#include <ITCommonObject/KamexHydro_Weapon_animjoints.data.inc.c>
};

/* @ 0x0FB70, 1168 bytes */
u32 dITCommonObject_KamexHydro_Weapon_matanimjoints[292] = {
	#include <ITCommonObject/KamexHydro_Weapon_matanimjoints.data.inc.c>
};

/* @ 0x10000, 1184 bytes */
DObjDesc dITCommonObject_MLucky_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dITCommonObject_KamexHydro_Weapon_matanimjoints + 0x3A0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x100B0, 168 bytes (raw gap) */
u8 dITCommonObject_MLucky_Item_data_remainder_gap_0x100B0[0xA8] = {
	#include <ITCommonObject/dITCommonObject_MLucky_Item_data_remainder_gap_0x100B0.data.inc.c>
};

/* @ 0x10158, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x10158[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x10158.palette.inc.c>
};

/* @ 0x10178, 520 bytes (raw gap) */
u8 dITCommonObject_MLucky_Item_data_remainder_gap_0x10178[0x208] = {
	#include <ITCommonObject/dITCommonObject_MLucky_Item_data_remainder_gap_0x10178.data.inc.c>
};

/* @ 0x10380, 48 bytes (3 vertices) */
Vtx dITCommonObject_Vtx_0x10380[3] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x10380.vtx.inc.c>
};

/* @ 0x103B0, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x103B0[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x103B0.dl.inc.c>
};

/* @ 0x104A0, 176 bytes */
DObjDesc dITCommonObject_Egg_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x103B0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x10550, 2960 bytes */
u32 dITCommonObject_Egg_Item_animjoints[740] = {
	#include <ITCommonObject/Egg_Item_animjoints.data.inc.c>
};

/* @ 0x110E0, 160 bytes (raw gap) */
u8 dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0[0xA0] = {
	#include <ITCommonObject/dITCommonObject_Starmie_Item_mobjsubs_gap_0x110E0.data.inc.c>
};

/* @ 0x11180, 48 bytes (3 vertices) */
Vtx dITCommonObject_Vtx_0x11180[3] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x11180.vtx.inc.c>
};

/* @ 0x111B0, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x111B0[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x111B0.dl.inc.c>
};

/* @ 0x112A0, 1848 bytes */
DObjDesc dITCommonObject_Starmie_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x111B0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11324, 1716 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Starmie_Item_data_remainder[0x6B4] = {
	#include <ITCommonObject/dITCommonObject_Starmie_Item_data_remainder.data.inc.c>
};

/* @ 0x119D8, 1384 bytes */
DObjDesc dITCommonObject_StarmieSwift_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_Starmie_Item_data_remainder + 0x6A4), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11A5C, 12 bytes (raw gap) */
PAD(12);

/* @ 0x11A68, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x11A68[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x11A68.palette.inc.c>
};

/* @ 0x11A88, 904 bytes (raw gap) */
u8 dITCommonObject_StarmieSwift_Weapon_data_remainder_gap_0x11A88[0x388] = {
	#include <ITCommonObject/dITCommonObject_StarmieSwift_Weapon_data_remainder_gap_0x11A88.data.inc.c>
};

/* @ 0x11E10, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x11E10[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x11E10.vtx.inc.c>
};

/* @ 0x11E50, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x11E50[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x11E50.dl.inc.c>
};

/* @ 0x11F40, 2272 bytes */
DObjDesc dITCommonObject_Sawamura_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dITCommonObject_Gfx_0x11E50, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x11FC4, 1284 bytes (raw gap) */
u8 dITCommonObject_Sawamura_Item_data_remainder_gap_0x11FC4[0x504] = {
	#include <ITCommonObject/dITCommonObject_Sawamura_Item_data_remainder_gap_0x11FC4.data.inc.c>
};

/* @ 0x124C8, 32 bytes (16-color RGBA5551 palette) */
u16 dITCommonObject_LUT_0x124C8[16] = {
	#include <ITCommonObject/dITCommonObject_LUT_0x124C8.palette.inc.c>
};

/* @ 0x124E8, 520 bytes (raw gap) */
u8 dITCommonObject_Sawamura_Item_data_remainder_gap_0x124E8[0x208] = {
	#include <ITCommonObject/dITCommonObject_Sawamura_Item_data_remainder_gap_0x124E8.data.inc.c>
};

/* @ 0x126F0, 64 bytes (4 vertices) */
Vtx dITCommonObject_Vtx_0x126F0[4] = {
	#include <ITCommonObject/dITCommonObject_Vtx_0x126F0.vtx.inc.c>
};

/* @ 0x12730, 240 bytes (30 Gfx commands) */
Gfx dITCommonObject_Gfx_0x12730[30] = {
	#include <ITCommonObject/dITCommonObject_Gfx_0x12730.dl.inc.c>
};

/* @ 0x12820, 1880 bytes */
DObjDesc dITCommonObject_Dogas_Item_data_DObjDesc[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dITCommonObject_Gfx_0x12730, { 0.0f, -5.439370155334473f, 0.0f }, { 0.0f, 0.0f, 0.0866909995675087f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x128D0, 1704 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Dogas_Item_data_remainder[0x6A8] = {
	#include <ITCommonObject/dITCommonObject_Dogas_Item_data_remainder.data.inc.c>
};

/* @ 0x12F78, 392 bytes */
u8 dITCommonObject_DogasSmog_Weapon_mobjsubs[0x188] = {
	#include <ITCommonObject/DogasSmog_Weapon_mobjsubs.data.inc.c>
};

/* @ 0x13100, 144 bytes */
DObjDesc dITCommonObject_DogasSmog_Weapon_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_DogasSmog_Weapon_mobjsubs + 0x178), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 5.5f, 5.5f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x13184, 12 bytes (vertex / DL / texture pool) */
PAD(12);

/* @ 0x13190, 80 bytes */
u32 dITCommonObject_DogasSmog_Weapon_animjoints[20] = {
	#include <ITCommonObject/DogasSmog_Weapon_animjoints.data.inc.c>
};

/* @ 0x131E0, 952 bytes */
u32 dITCommonObject_DogasSmog_Weapon_matanimjoints[238] = {
	#include <ITCommonObject/DogasSmog_Weapon_matanimjoints.data.inc.c>
};

/* @ 0x13598, 328 bytes */
DObjDesc dITCommonObject_Pippi_Item_data_DObjDesc[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dITCommonObject_DogasSmog_Weapon_matanimjoints + 0x2D0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x1361C, 196 bytes (vertex / DL / texture pool) */
u8 dITCommonObject_Pippi_Item_data_remainder[0xC4] = {
	#include <ITCommonObject/dITCommonObject_Pippi_Item_data_remainder.data.inc.c>
};
