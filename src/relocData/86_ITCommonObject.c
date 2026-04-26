/* relocData file 86: ITCommonObject — common-item geometry pool.
 * Every item in ITCommonData has an ITAttributes struct whose `data`,
 * `p_mobjsubs`, `anim_joints`, and `p_matanim_joints` fields are patched
 * by fixRelocChain to point at offsets in this file. The block names
 * below mirror those extern reloc entries in 251_ITCommonData.reloc so
 * each chunk carries the same <Item>_<AttrType>_<Field> label as its
 * caller on the ITCommonData side. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

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
	aobjEvent32End(),
	(u32)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x68),
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x8),
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x38),
	(u32)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x8),
	(u32)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x38),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 4369),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x022, 4642),
	aobjEvent32End(),
	aobjEvent32SetVal0RateBlock(0x244, 8738),
	    0x00000001,  /* 1.401298464324817e-45f */
	    0x12233333,  /* 5.149683892986268e-28f */
	    0x00000011,  /* 2.382207389352189e-44f */
	aobjEvent32Cmd17(0x066, 13380),
	    0x00000112,  /* 3.839557792249999e-43f */
	    0x33344455,  /* 4.197166347807979e-08f */
	aobjEvent32EndRaw(0x000, 4387),
	    0x3444557C,
	aobjEvent32EndRaw(0x000, 4643),
	    0x445566BF,
	aobjEvent32EndRaw(0x002, 4659),
	    0x455668FF,
	aobjEvent32EndRaw(0x002, 8756),
	    0x45667AFF,
	aobjEvent32EndRaw(0x022, 9012),
	    0x55677CFF,
	aobjEvent32EndRaw(0x024, 9028),
	    0x56778DFF,
	aobjEvent32EndRaw(0x024, 9029),
	    0x56788EFF,
	aobjEvent32EndRaw(0x024, 13125),
	    0x56788FFF,
	aobjEvent32EndRaw(0x024, 13125),
	    0x66789FFF,
	aobjEvent32EndRaw(0x01B, 32498),
	aobjEvent32EndRaw(0x090, 0),
	aobjEvent32End(),
	aobjEvent32SetValAfterBlock(0x2D0, 18176),
	    0x0004FEBA,  /* 4.587206574905862e-40f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xA7A50000,  /* -4.579669976578771e-15f */
	aobjEvent32EndRaw(0x01D, 32498),
	    0xFFB90000,
	aobjEvent32End(),
	aobjEvent32SetValAfter(0x0D1, 14592),
	    0xFFF0FEF2,  /* nanf */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x831A0000,  /* -4.525653250665807e-37f */
	    0xFFF5FE5E,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x81020000,
	    0xFFF7FEDE,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x81030000,
	aobjEvent32EndRaw(0x013, 32478),
	    0xFFF00000,
	aobjEvent32End(),
	    0x34028C00,
	aobjEvent32EndRaw(0x013, 32478),
	aobjEvent32EndRaw(0x020, 0),
	aobjEvent32End(),
	    0x33027500,
	aobjEvent32EndRaw(0x013, 32350),
	aobjEvent32EndRaw(0x026, 0),
	aobjEvent32End(),
	    0xE7BC6800,
	aobjEvent32EndRaw(0x013, 32350),
	    0xFFED0000,
	aobjEvent32End(),
	    0xE8BC9700,
	    0xFFF5FE5E,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x102, 0),
	aobjEvent32EndRaw(0x000, 693),
	aobjEvent32EndRaw(0x118, 0),
	aobjEvent32Wait(1024),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x001, 32764),
	aobjEvent32EndRaw(0x118, 0),
	aobjEvent32Wait(236),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x001, 32764),
	    0xFF740000,
	aobjEvent32EndRaw(0x000, 236),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x000, 693),
	    0xFF740000,
	aobjEvent32EndRaw(0x000, 1024),
	    0xFFFFFF00,
	    0xE7000000,
	aobjEvent32End(),
	    0xDB0A0000,
	    0x66000000,
	    0xDB0A0004,
	    0x66000000,
	    0xDB0A0018,
	aobjEvent32Cmd12(0x200, 0),
	    0xDB0A001C,
	aobjEvent32Cmd12(0x200, 0),
	    0xFCFFFFFF,
	    0xFFFE7D3E,
	    0xD7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x201, 12310),
	(u32)((u8*)dITCommonObject_Star_Item_matanimjoints + 0xF8),
	aobjEvent32SetValBlock(0x028, 4624),
	    0x000E1012,  /* 1.2914618880941093e-39f */
	    0x060C0E12,  /* 2.6341410691455524e-35f */
	aobjEvent32EndRaw(0x024, 2572),
	aobjEvent32SetValBlock(0x014, 4616),
	    0x000A0810,  /* 9.212472416102785e-40f */
	    0x06100E0A,  /* 2.709370411710775e-35f */
	aobjEvent32EndRaw(0x00C, 1026),
	aobjEvent32SetValBlock(0x004, 1024),
	    0x00000406,  /* 1.4433374182545616e-42f */
	aobjEvent32WaitRaw(0x204, 6),
	aobjEvent32End(),
	    0xDF000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xFC30FE61,
	    0x55FEF379,
	    0xFA000000,
	    0xFFFFFFFF,
	    0xFB000000,
	    0xFF0080FF,
	    0xF9000000,
	aobjEvent32EndRaw(0x000, 8),
	    0xF5900000,
	aobjEvent32SetValBlock(0x202, 64),
	    0xF5800200,  /* -3.245383606990553e+32f */
	    0x000D0340,  /* 1.195027330376204e-39f */
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x00F, 16508),
	    0xFD900000,
	(u32)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x78),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x207, 30720),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xD9FDFBFB,  /* -8936278070394880.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32EndRaw(0x200, 16392),
	(u32)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x1A8),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x004, 1028),
	    0xE2001E01,
	aobjEvent32End(),
	    0xDF000000,
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x1E8),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dITCommonObject_Star_Item_matanimjoints + 0x260),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
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
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0x28),
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x200, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(6),
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0xC),
	(u32)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0xC),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x003, 31295),
	    0xFC3FFFFF,
	aobjEvent32EndRaw(0x00E, 15),
	aobjEvent32EndRaw(0x02E, 29),
	aobjEvent32EndRaw(0x05A, 51),
	aobjEvent32EndRaw(0x072, 63),
	aobjEvent32Cmd12(0x1EE, 10611),
	    0x63256325,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x003, 31809),
	    0xFCC5FD4B,
	    0xFDCFFC00,
	    0xFE55FED9,
	    0xF71DF8C1,
	    0xFA01FB01,
	    0xFC01FD81,
	    0xFEC1FFC1,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetVal0RateBlock(0x246, 13106),
	    0x11233332,  /* 1.2874208528759454e-28f */
	    0x21123333,  /* 4.953448572145572e-19f */
	    0x21123333,  /* 4.953448572145572e-19f */
	    0x32112333,  /* 8.448114208192692e-09f */
	    0x32112333,
	    0x33211233,
	    0x33211233,
	    0x33321123,
	    0x33321123,
	    0x33332112,
	    0x33332112,
	aobjEvent32Cmd17(0x266, 12817),
	    0x23333211,  /* 9.714211417656357e-18f */
	    0x12333321,  /* 5.654546205642966e-28f */
	    0x12333321,  /* 5.654546205642966e-28f */
	aobjEvent32SetVal0RateBlock(0x246, 13106),
	    0x11233332,  /* 1.2874208528759454e-28f */
	    0x21123333,  /* 4.953448572145572e-19f */
	    0x21123333,  /* 4.953448572145572e-19f */
	    0x32112333,  /* 8.448114208192692e-09f */
	    0x32112333,
	    0x33211233,
	    0x33211233,
	    0x33321123,
	    0x33321123,
	    0x33332112,
	    0x33332112,
	aobjEvent32Cmd17(0x266, 12817),
	    0x23333211,  /* 9.714211417656357e-18f */
	    0x12333321,  /* 5.654546205642966e-28f */
	    0x12333321,  /* 5.654546205642966e-28f */
	aobjEvent32End(),
	aobjEvent32End(),
	    0x55555555,
	aobjEvent32End(),
	    0x55511455,
	aobjEvent32End(),
	    0x55513115,
	aobjEvent32End(),
	    0x55513342,
	aobjEvent32End(),
	    0x55524466,
	aobjEvent32End(),
	    0x55524667,
	aobjEvent32End(),
	    0x55416678,
	aobjEvent32End(),
	    0x54146788,
	aobjEvent32End(),
	    0x51346788,
	aobjEvent32End(),
	    0x51346778,
	aobjEvent32End(),
	    0x55222477,
	aobjEvent32End(),
	    0x55555246,
	aobjEvent32End(),
	    0x55555424,
	aobjEvent32End(),
	    0x55555523,
	aobjEvent32End(),
	    0x55555551,
	aobjEvent32End(),
	    0x55555555,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x034, 38),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x000, 1024),
	    (u32)0x7F000000,
	aobjEvent32EndRaw(0x035, 32565),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x000, 0),
	    (u32)0x7F000000,
	aobjEvent32EndRaw(0x034, 38),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1024),
	    0x7F000000,
	    0xFFF30026,
	aobjEvent32EndRaw(0x02E, 0),
	aobjEvent32EndRaw(0x28A, 1024),
	    0xC1006E00,
	aobjEvent32EndRaw(0x035, 32565),
	aobjEvent32End(),
	aobjEvent32End(),
	    0x7F000000,
	    0xFFF3FF35,
	aobjEvent32EndRaw(0x02E, 0),
	aobjEvent32EndRaw(0x28A, 0),
	    0xC1006E00,
	    0xFFF3FF35,
	    0xFFE90000,
	aobjEvent32EndRaw(0x174, 0),
	    0xC0009200,
	    0xFFF30026,
	    0xFFE90000,
	aobjEvent32EndRaw(0x174, 1024),
	    0xC0009200,
	aobjEvent32EndRaw(0x0B5, 32678),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x000, 0),
	    (u32)0xFFFFFF00,
	    0xFFA6FFA6,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xFFA6005A,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 512),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x0B4, 90),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x000, 512),
	    (u32)0xFFFFFF00,
	    0xE7000000,
	aobjEvent32End(),
	    0xDB0A0000,
	    0xFFFFFF00,
	    0xDB0A0004,
	    0xFFFFFF00,
	    0xDB0A0018,
	    0xB3B3B300,
	    0xDB0A001C,
	    0xB3B3B300,
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xE8000000,
	aobjEvent32End(),
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF9000000,
	aobjEvent32End(),
	    0xDE000000,
	(u32)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0x2B8),
	    0xDF000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xF5500000,
	aobjEvent32SetValBlock(0x202, 64),
	    0xF5400200,  /* -2.4339881876413433e+32f */
	    0x00090040,  /* 8.266091485236377e-40f */
	    0xFD100000,
	(u32)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0x38),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xF2000000,
	aobjEvent32EndRaw(0x007, 16508),
	    0xFD500000,
	(u32)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0x88),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x0703F800,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x201, 16),
	(u32)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0x190),
	aobjEvent32SetValBlock(0x01C, 3082),
	    0x00080C0E,  /* 7.39008376324836e-40f */
	    0x06060E0A,  /* 2.521291315579209e-35f */
	    0x0004080E,  /* 3.702314620654026e-40f */
	aobjEvent32SetValBlock(0x00C, 2562),
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xDF000000,  /* -9.223372036854776e+18f */
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 12408),
	    0xF5500000,
	aobjEvent32SetValBlock(0x202, 48),
	    0xF5400200,  /* -2.4339881876413433e+32f */
	    0x00090330,  /* 8.2766292496881e-40f */
	    0xFD100000,
	(u32)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0x60),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xF2000000,
	aobjEvent32EndRaw(0x007, 16444),
	    0xFD500000,
	(u32)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0x110),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x207, 30720),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xD9DDFBFF,  /* -7810380311035904.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32EndRaw(0x200, 16392),
	(u32)((u8*)dITCommonObject_FFlower_Item_matanimjoints + 0x210),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 1024),
	    0xE3001001,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32End(),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 8312),
	    0xDF000000,
	aobjEvent32End(),
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
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dITCommonObject_SpearSwarm_Weapon_matanimjoints + 0x11C),
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dITCommonObject_SpearSwarm_Weapon_matanimjoints + 0xC),
	(u32)((u8*)dITCommonObject_SpearSwarm_Weapon_matanimjoints + 0xC),
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6318EF79,
	    0xF661ED59,
	    0x9CE5B413,
	    0x83956319,
	    0x5AD55A4F,
	    0x319118C9,
	    0x85776471,
	    0x4B633A59,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x2CE, 0),
	    0x88800000,  /* -7.703719777548943e-34f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x04145669,  /* 1.7436993990031397e-36f */
	    0xA1980000,  /* -1.0299920638612292e-18f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32EndRaw(0x082, 5503),
	    0xF14AA000,
	aobjEvent32EndRaw(0x171, 6247),
	    0x88887000,
	aobjEvent32EndRaw(0x009, 15102),
	    0xDCEFB000,
	aobjEvent32EndRaw(0x017, 14662),
	    0x96541000,
	aobjEvent32EndRaw(0x017, 10990),
	    0xDDDFA000,
	aobjEvent32EndRaw(0x157, 16349),
	    0x76670000,
	aobjEvent32EndRaw(0x017, 12014),
	    0xEDDEFA00,
	aobjEvent32EndRaw(0x177, 12269),
	    0xDEF00000,
	aobjEvent32EndRaw(0x015, 32750),
	    0xEDDDFAB9,
	    0xABBAFEEE,
	    0xEF000000,
	aobjEvent32EndRaw(0x015, 32767),
	    0xEEDDEABB,
	    0xABAAFEEE,
	    0xEF000000,
	aobjEvent32EndRaw(0x0F5, 12287),
	    0xEEEEEFAB,
	    0xBBBAFFED,
	    0xEEF00000,
	aobjEvent32EndRaw(0x0F5, 11006),
	    0xEEEEEFFA,
	    0x99BBAFED,
	    0xDEF00000,
	aobjEvent32EndRaw(0x0F5, 12269),
	    0xDEEEEEA9,
	    0x6699BFEC,
	    0xDDF00000,
	aobjEvent32SetValBlock(0x357, 12013),
	    0xDDEEEF96,  /* -2.1521431034006077e+18f */
	    0x5556999C,  /* 14747202224128.0f */
	    0xCDF00000,  /* -503316480.0f */
	    0x0ABBAEED,  /* 1.807324474567587e-32f */
	    0xDDDEEF65,  /* -2.0080211808160317e+18f */
	    0x55556699,  /* 14664789393408.0f */
	    0x4DF00000,  /* 503316480.0f */
	aobjEvent32SetValRateBlock(0x377, 16365),
	    0xCDDDF553,  /* -465480288.0f */
	    0x33335569,  /* 4.1754365298629637e-08f */
	    0x9A000000,  /* -2.6469779601696886e-23f */
	    0x0AAABFED,  /* 1.6442598982215194e-32f */
	    0xCCDE6333,  /* -116595096.0f */
	    0x33333355,  /* 4.172337142449578e-08f */
	    0x99800000,  /* -1.3234889800848443e-23f */
	    0x0998FFED,  /* 3.6833340391428806e-33f */
	    0xCCD65533,  /* -112372120.0f */
	    0x33233335,  /* 3.7997967439196145e-08f */
	    0x69800000,  /* 1.9342813113834067e+25f */
	    0x098777F7,  /* 3.261288220843493e-33f */
	    0x66653333,  /* 2.7059159586555097e+23f */
	    0x22222333,  /* 2.1973728304080753e-18f */
	    0x56780000,  /* 68169720922112.0f */
	    0x08764449,  /* 7.410820105280127e-34f */
	    0x65533332,
	aobjEvent32Cmd17(0x044, 8755),
	    0x556AAA00,  /* 16125991583744.0f */
	aobjEvent32SetVal(0x0E8, 17476),
	    0x65333322,  /* 5.2890427146226436e+22f */
	    0x22222223,  /* 2.1973165821264217e-18f */
	    0x36BBBBA0,  /* 5.594876711256802e-06f */
	    0x00844411,  /* 1.21467031185957e-38f */
	    0x45333322,
	aobjEvent32Cmd17(0x044, 8755),
	    0x56FF1EE0,  /* 140254036099072.0f */
	aobjEvent32EndRaw(0x108, 16657),
	aobjEvent32SetValAfter(0x0AA, 13107),
	    0x22222233,  /* 2.197319890848872e-18f */
	    0x56EEF4E0,  /* 131367748763648.0f */
	    0x00841111,  /* 1.2128407765845475e-38f */
	    0x12533222,  /* 6.664165386291906e-28f */
	aobjEvent32Cmd17(0x044, 8739),
	    0x54EFF1E0,  /* 8244441382912.0f */
	aobjEvent32EndRaw(0x00C, 16657),
	aobjEvent32SetVal0RateBlock(0x2CA, 13106),
	    0x22222233,  /* 2.197319890848872e-18f */
	    0x5DEAA700,  /* 2.113560415748227e+18f */
	    0x00064444,  /* 5.755020689104878e-40f */
	    0x11153333,  /* 1.1769804465156253e-28f */
	    0x32223335,  /* 9.441284198885569e-09f */
	    0x4DEF0000,
	aobjEvent32EndRaw(0x013, 15289),
	    0x41145333,
	    0x33699556,
	    0xDDE70000,
	aobjEvent32EndRaw(0x011, 15281),
	    0x44116556,
	    0x99999999,
	    0xFE700000,
	aobjEvent32EndRaw(0x015, 15279),
	    0x7F114BB9,
	    0x55569996,
	    0x98000000,
	aobjEvent32EndRaw(0x017, 15076),
	aobjEvent32SetVal0RateBlock(0x282, 7061),
	    0x56BBABB6,  /* 103173083627520.0f */
	    0x58000000,  /* 562949953421312.0f */
	    0x000BAEDD,  /* 1.0729195834934038e-39f */
	    0x44117B9A,
	    0xBBAAFFFF,
	    0xF8000000,
	aobjEvent32EndRaw(0x015, 32493),
	    0xC1119BBA,
	    0xFEEDEEDE,
	    0xEE000000,
	aobjEvent32EndRaw(0x001, 32749),
	    0xC114BBAF,
	    0xEEDCCCCC,
	    0xCD000000,
	aobjEvent32End(),
	    0x4147BAFE,
	    0xEDDCCCCC,
	    0xCD000000,
	aobjEvent32End(),
	aobjEvent32WaitRaw(0x08F, 16382),
	    0xDDDCCCCC,
	    0xDE000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x111, 16369),
	    0xFAECCCEE,
	    0xD0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x015, 16353),
	    0xAEDCCCEA,
	aobjEvent32SetVal0RateBlock(0x000, 0),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x013, 16383),
	    0xECCCCCCE,
	aobjEvent32SetVal0RateBlock(0x000, 0),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x017, 16366),
	    0xDCCCCCCD,
	    0xE0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x017, 16365),
	    0xDCCCCCCD,
	    0xE0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01F, 30862),
	    0xDDDDDCDE,
	    0xE0000000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x27A, 317),
	aobjEvent32End(),
	aobjEvent32Wait(1280),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x27B, 32451),
	aobjEvent32End(),
	aobjEvent32Wait(0),
	    0xFFFFFF00,
	    0xFEC3FEC3,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xFEC3013D,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1279),
	    0xFFFFFF00,
	    0xE7000000,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 12408),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32End(),
	    0xE8000000,
	aobjEvent32End(),
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xF5500000,
	aobjEvent32SetValBlock(0x203, 80),
	    0xF5400400,  /* -2.434087222844486e+32f */
	    0x00098250,  /* 8.732667821917968e-40f */
	    0xFD100000,  /* -1.1963051962064243e+37f */
	(u32)((u8*)dITCommonObject_SpearSwarm_Weapon_matanimjoints + 0x128),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x00F, 16540),
	    0xFD500000,
	(u32)((u8*)dITCommonObject_SpearSwarm_Weapon_matanimjoints + 0x150),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	aobjEvent32SetValBlock(0x227, 29696),
	    0xE7000000,  /* -6.044629098073146e+23f */
	    0x00000000,  /* 0.0f */
	    0xD9DDFBFF,  /* -7810380311035904.0f */
	    0x00000000,  /* 0.0f */
	    0x01004008,  /* 2.3555827185300175e-38f */
	(u32)((u8*)dITCommonObject_SpearSwarm_Weapon_matanimjoints + 0x3D0),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 1024),
	    0xE3001001,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32End(),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 8312),
	    0xDF000000,
	aobjEvent32End(),
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
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dITCommonObject_KamexHydro_Weapon_animjoints_0xFA9C[];
extern u32 dITCommonObject_KamexHydro_Weapon_animjoints_0xFB4C[];

AObjEvent32 *dITCommonObject_KamexHydro_Weapon_animjoints[3] = {
	NULL,
	(AObjEvent32 *)dITCommonObject_KamexHydro_Weapon_animjoints_0xFA9C,
	(AObjEvent32 *)dITCommonObject_KamexHydro_Weapon_animjoints_0xFB4C,
};

u32 dITCommonObject_KamexHydro_Weapon_animjoints_0xFA9C[] = {
	aobjEvent32SetValAfter(0x2E0, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x100, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F80B307,  /* 1.0054634809494019f */
	aobjEvent32SetValBlock(0x010, 0),
	    0x42700000,  /* 60.0f */
	aobjEvent32SetVal(0x010, 32),
	    0x45924000,  /* 4680.0f */
	aobjEvent32SetVal0RateBlock(0x100, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetVal0RateBlock(0x100, 5),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValRateBlock(0x100, 2),
	    0x3F800000,  /* 1.0f */
	    0xB923704A,  /* -0.00015586722292937338f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x100, 2),
	    0x40000000,  /* 2.0f */
	    0x39400277,  /* 0.0001831146510085091f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x100, 1),
	    0x40000000,  /* 2.0f */
	    0xBA02A295,  /* -0.0004983333055861294f */
	aobjEvent32SetValRateBlock(0x100, 4),
	    0x00000000,  /* 0.0f */
	    0xBEE77244,  /* -0.45204365253448486f */
	aobjEvent32SetValBlock(0x100, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dITCommonObject_KamexHydro_Weapon_animjoints + 0xC),
};

u32 dITCommonObject_KamexHydro_Weapon_animjoints_0xFB4C[] = {
	aobjEvent32SetVal(0x010, 0),
	    0xC3160000,  /* -150.0f */
	aobjEvent32SetValAfter(0x060, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 32),
	    0xC5951000,  /* -4770.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dITCommonObject_KamexHydro_Weapon_animjoints + 0xBC),
};

/* @ 0x0FB70, 1168 bytes */
u32 dITCommonObject_KamexHydro_Weapon_matanimjoints[292] = {
	aobjEvent32End(),
	(u32)((u8*)dITCommonObject_KamexHydro_Weapon_matanimjoints + 0x12C),
	(u32)((u8*)dITCommonObject_KamexHydro_Weapon_matanimjoints + 0x130),
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dITCommonObject_KamexHydro_Weapon_matanimjoints + 0xC),
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)((u8*)dITCommonObject_KamexHydro_Weapon_matanimjoints + 0x9C),
	(u32)((u8*)dITCommonObject_KamexHydro_Weapon_matanimjoints + 0x9C),
	(u32)((u8*)dITCommonObject_KamexHydro_Weapon_matanimjoints + 0xC),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8A0EFFFF,
	    0xFFBDFEF7,
	    0xFE73F5ED,
	    0xE569DCE5,
	    0xF569ECE5,
	    0xBBDDE4A3,
	    0xCC1FBB9B,
	    0xA2932183,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 28398),
	    0xEEEE00EE,
	    0xEEEEE00E,
	    0xEEEAE000,
	aobjEvent32EndRaw(0x001, 17990),
	    0xAAAAEEEE,
	    0xEEEEEEEA,
	    0x644A0000,
	aobjEvent32EndRaw(0x000, 3432),
	    0xCCEEEEED,
	    0xDDDDDDDD,
	    0xA4A00000,
	aobjEvent32EndRaw(0x000, 205),
	    0xEEEDDDDD,
	    0xCCCCCCBB,
	    0xAC000000,
	aobjEvent32EndRaw(0x000, 14),
	    0xEDDDCCCC,
	    0xAAAAA998,
	    0x89E00000,
	aobjEvent32EndRaw(0x000, 237),
	    0xDDCCCCAA,
	    0xAA776788,
	    0x558E0000,
	aobjEvent32EndRaw(0x000, 3805),
	    0xDCCCCAAA,
	    0x77677855,
	    0x44590000,
	aobjEvent32EndRaw(0x000, 3549),
	    0xCCBCAAA7,
	    0x66444784,
	    0x3345E000,
	aobjEvent32EndRaw(0x001, 28124),
	    0xCBBCB966,
	    0x64433483,
	    0x3334A000,
	aobjEvent32EndRaw(0x001, 28107),
	    0xBBBDC953,
	aobjEvent32Cmd17(0x044, 9011),
	    0x22339000,  /* 2.433525657461605e-18f */
	aobjEvent32EndRaw(0x001, 24011),
	    0xB98DB832,
	aobjEvent32Cmd16(0x222, 8754),
	aobjEvent32Cmd17(0x046, 20480),
	    0x0000DCB9,  /* 7.918036972667379e-41f */
	    0x988CB522,
	aobjEvent32SetVal0RateBlock(0x222, 4642),
	    0x22223000,  /* 2.1980504981249094e-18f */
	    0x0000DCB9,  /* 7.918036972667379e-41f */
	    0x885BB521,  /* -6.611583129056822e-34f */
	aobjEvent32SetVal0RateBlock(0x222, 4642),
	    0x22223000,  /* 2.1980504981249094e-18f */
	    0x0000ECB8,  /* 8.491868693808391e-41f */
	    0x85559321,  /* -1.0042235181215192e-35f */
	aobjEvent32SetVal0RateBlock(0x222, 4642),
	    0x22225000,  /* 2.199744564019418e-18f */
	    0x00000CB8,  /* 4.5626277998416044e-42f */
	    0x88554532,  /* -6.417869466058483e-34f */
	aobjEvent32SetVal0RateBlock(0x222, 8738),
	    0x21229000,  /* 5.507831739521088e-19f */
	    0x00000AB8,  /* 3.845162986107298e-42f */
	    0x89CC9433,  /* -4.9250579457424035e-33f */
	    0x3119B532,
	aobjEvent32SetVal0RateBlock(0x245, 8192),
	    0x00000E88,  /* 5.2128302872883195e-42f */
	    0x589EEC32,  /* 1397898306650112.0f */
	    0x229B4222,  /* 4.208285502266591e-18f */
	    0x11230000,  /* 1.2858432755102492e-28f */
	aobjEvent32EndRaw(0x000, 133),
	    0x5589EEB2,
	aobjEvent32SetExtValBlock(0x368, 4642),
	    0x11250000,  /* 1.3016204936146695e-28f */
	    0x000000B5,  /* 2.536350220427919e-43f */
	    0x54599C94,  /* 3738539393024.0f */
	    0x8A411221,  /* -9.296021649969767e-33f */
	    0x11290000,  /* 1.33317492982351e-28f */
	aobjEvent32EndRaw(0x1DD, 28360),
	    0x44348832,
	    0x93112211,
	aobjEvent32Cmd17(0x0BD, 27136),
	    0x0EA66AC9,  /* 4.102498982335896e-30f */
	    0x43333322,  /* 179.19973754882812f */
	    0x32122111,  /* 8.505836923689003e-09f */
	aobjEvent32Cmd17(0x34C, 18032),
	    0x0AD7767B,  /* 2.0748314301106274e-32f */
	    0x43322222,  /* 178.13333129882812f */
	    0x22222111,  /* 2.197259920254462e-18f */
	aobjEvent32SetExtValAfterBlock(0x288, 18256),
	    0x0A7A4677,  /* 1.2050315116541776e-32f */
	    0x53222225,  /* 696357552128.0f */
	    0x32211112,  /* 9.375314746762342e-09f */
	    0x444464B0,
	aobjEvent32EndRaw(0x14E, 25703),
	    0x5322223D,
	    0xA3211112,
	aobjEvent32Cmd17(0x088, 18432),
	    0x0000A976,  /* 6.079112997933921e-41f */
	    0x84222222,
	aobjEvent32Cmd17(0x042, 4386),
	    0x25570000,  /* 1.8648277366750676e-16f */
	aobjEvent32EndRaw(0x000, 10),
	    0x752225F2,
	aobjEvent32SetExtValAfterBlock(0x3E2, 4389),
	    0x50000000,  /* 8589934592.0f */
	    0x00000000,  /* 0.0f */
	    0x07422592,  /* 1.4605978782335116e-34f */
	    0x25921250,  /* 2.533937178193866e-16f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32EndRaw(0x0EA, 9201),
	aobjEvent32SetVal0Rate(0x3E4, 9472),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00064221,  /* 5.747355586505021e-40f */
	    0x12225000,  /* 5.121679427147419e-28f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32EndRaw(0x000, 2099),
	    0x33500000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x3F5, 32549),
	aobjEvent32End(),
	aobjEvent32WaitRaw(0x39E, 1),
	    0xFFFFFF00,
	    0xFE06FF25,
	aobjEvent32End(),
	    0xFE310001,
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x000, 540),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x3FE, 1518),
	    0xFFFFFF00,
	    0xE7000000,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 12408),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32End(),
	    0xE8000000,
	aobjEvent32End(),
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xF5500000,
	aobjEvent32SetValBlock(0x202, 16464),
	    0xF5400400,  /* -2.434087222844486e+32f */
	    0x00094250,  /* 8.50307908152299e-40f */
	    0xFD100000,
	(u32)((u8*)dITCommonObject_KamexHydro_Weapon_matanimjoints + 0x148),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x00F, 16508),
	    0xFD500000,
	(u32)((u8*)dITCommonObject_KamexHydro_Weapon_matanimjoints + 0x170),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x070FF400,
	    0xE7000000,
	aobjEvent32End(),
	    0xD9DDFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dITCommonObject_KamexHydro_Weapon_matanimjoints + 0x370),
	aobjEvent32WaitRaw(0x208, 512),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 1024),
	    0xE3001001,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32End(),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 8312),
	    0xDF000000,
	aobjEvent32End(),
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
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dITCommonObject_Egg_Item_animjoints + 0xC),
	aobjEvent32SetValRate(0x1A0, 0),
	    0x00000000,  /* 0.0f */
	    0x3F5295BC,  /* 0.8225972652435303f */
	    0x3F800000,  /* 1.0f */
	    0xBC0FA4F7,  /* -0.008767358027398586f */
	    0x3F800000,  /* 1.0f */
	    0x3C139FAB,  /* 0.009010235778987408f */
	aobjEvent32SetValAfterBlock(0x250, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x1A0, 4),
	    0x42966FA8,  /* 75.21807861328125f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3FCCCCCD,  /* 1.600000023841858f */
	aobjEvent32SetValRateBlock(0x1A0, 4),
	    0x00000000,  /* 0.0f */
	    0xBF63F565,  /* -0.8904631733894348f */
	    0x3F800000,  /* 1.0f */
	    0x3C172EAE,  /* 0.009227437898516655f */
	    0x3F800000,  /* 1.0f */
	    0xBC10ED80,  /* -0.008845686912536621f */
	aobjEvent32SetVal0RateBlock(0x1A0, 4),
	    0xC23D77D5,  /* -47.36702346801758f */
	    0x3FCCCCCD,  /* 1.600000023841858f */
	    0x3F19999A,  /* 0.6000000238418579f */
	aobjEvent32SetValRateBlock(0x1A0, 4),
	    0x00000000,  /* 0.0f */
	    0x3F6B6BEC,  /* 0.9196155071258545f */
	    0x3F800000,  /* 1.0f */
	    0xBC12E1E7,  /* -0.008964992128312588f */
	    0x3F800000,  /* 1.0f */
	    0x3C13EFC2,  /* 0.009029330685734749f */
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xAC68E66B,
	    0xF713C561,
	    0xD4CDDB11,
	    0x93555AD7,
	    0x5A93CCF1,
	    0xC4AFF26D,
	    0xAC698BA1,
	    0x731DE08B,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xAC68E66B,
	    0xF713C561,
	    0xD4CDDB11,
	    0x93555AD7,
	    0x5A93CCF1,
	    0xC4AFF26D,
	    0xAC698BA1,
	    0x731DE08B,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xAC68E66B,
	    0xF713C561,
	    0xD4CDDB11,
	    0x93555AD7,
	    0x5A93CCF1,
	    0xC4AFF26D,
	    0xAC698BA1,
	    0x731DE08B,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xAC68E66B,
	    0xF713C561,
	    0xD4CDDB11,
	    0x93555AD7,
	    0x5A93CCF1,
	    0xC4AFF26D,
	    0xAC698BA1,
	    0x731DE08B,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xAC68E66B,
	    0xF713C561,
	    0xD4CDDB11,
	    0x93555AD7,
	    0x5A93CCF1,
	    0xC4AFF26D,
	    0xAC698BA1,
	    0x731DE08B,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01B, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x019, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xED000000,
	aobjEvent32EndRaw(0x1D3, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xEDE00000,
	aobjEvent32SetVal(0x193, 16512),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xEDD00000,  /* -8.046610255354972e+27f */
	    0x0799C7CE,  /* 2.313831600721571e-34f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32SetValRate(0x3BC, 0),
	    0x8C99CA9E,  /* -2.369532830325407e-31f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDDE008,  /* 5.469644051325288e-30f */
	    0xE99999C8,  /* -2.3211482727716508e+25f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0ED66E88,  /* 5.286151075873794e-30f */
	    0x999999E0,  /* -1.5881978832633586e-23f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDD9D86,  /* 5.463239581943816e-30f */
	    0x99999C80,  /* -1.5883039061690204e-23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	    0x88D31642,
	    0x99999D80,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x86664421,
	    0x99999D00,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x85FF5421,
	    0x999A9E00,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6FFFF422,
	    0x9ADDDE00,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6BBFF522,
	    0xDEEDDE00,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 8),
	    0x5BBFF513,
	    0x333DDDE0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 136),
	    0x5BBFF522,
	aobjEvent32SetVal0RateBlock(0x39B, 24030),
	    0x00000000,  /* 0.0f */
	    0x00000888,  /* 3.0604358460854005e-42f */
	    0x6BBFF522,  /* 4.641248770479915e+26f */
	    0x6EEDDDEE,  /* 3.680812192850827e+28f */
	    0xE0000000,  /* -3.6893488147419103e+19f */
	    0x00008887,  /* 4.897678262661668e-41f */
	    0xCBBFF413,  /* -25159718.0f */
	    0xCCCDDDEE,
	    0xEE000000,
	aobjEvent32EndRaw(0x001, 28073),
	    0x94554223,
	    0x99999AAC,
	    0xDDD00000,
	aobjEvent32EndRaw(0x000, 237),
	    0xA2222243,
	    0x99999999,
	    0x9AD00000,
	aobjEvent32End(),
	    0xE2121124,
	    0xA999999C,
	    0xCC000000,
	aobjEvent32End(),
	    0x8D331932,
	    0x3999999A,
	    0xCCD00000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x11C, 6553),
	    0x99AECCCA,
	    0xACC00000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x011, 22937),
	    0x99D88CCC,
	    0xCCCE0000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3225),
	    0x99E00000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3225),
	    0x9C000000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3225),
	    0x9E000000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3241),
	    0xD0000000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3226),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3228),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01B, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x019, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xED000000,
	aobjEvent32EndRaw(0x1D3, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8DED0000,
	aobjEvent32SetVal(0x1B3, 8192),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xEDDCD000,  /* -8.54226984139697e+27f */
	    0x0899C000,  /* 9.253491529673047e-34f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x3BB, 22528),
	    0x8C99C000,  /* -2.3688938315963e-31f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDEDD08,  /* 5.4940070651217865e-30f */
	    0x7999D808,  /* 9.985038170693969e+34f */
	    0x88000000,  /* -3.851859888774472e-34f */
	    0x00000000,  /* 0.0f */
	    0x0ED66D88,  /* 5.286054779376575e-30f */
	    0x9999E888,  /* -1.5913747839008647e-23f */
	    0xCD000000,  /* -134217728.0f */
	    0x00000000,  /* 0.0f */
	    0x08DD9D86,  /* 1.333798726060502e-33f */
	    0x999978DA,  /* -1.586864077244811e-23f */
	    0x9D000000,  /* -1.6940658945086007e-21f */
	    0x00000000,  /* 0.0f */
	    0x08E31642,  /* 1.3667298329568037e-33f */
	    0x999ADA99,
	    0xC0000000,
	aobjEvent32End(),
	    0x86664421,
	    0x9999999A,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x85FF5421,
	    0x999A999D,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6FFFF422,
	    0x9ADEC9A0,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6BBFF522,
	    0xDEEEEDD0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 8),
	    0x5BBFF513,
	    0x333DEEE0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 136),
	    0x5BBFF522,
	aobjEvent32SetVal0RateBlock(0x39D, 28398),
	    0x00000000,  /* 0.0f */
	    0x00000888,  /* 3.0604358460854005e-42f */
	    0x6BBFF522,  /* 4.641248770479915e+26f */
	    0x6EEEEEEE,  /* 3.6973140302885666e+28f */
	    0xE0000000,  /* -3.6893488147419103e+19f */
	    0x00008887,  /* 4.897678262661668e-41f */
	    0xCBBFF413,  /* -25159718.0f */
	    0xCCCDDEEE,
	    0xEE000000,
	aobjEvent32EndRaw(0x001, 28073),
	    0x94554223,
	    0x99999ACC,
	    0xDED00000,
	aobjEvent32EndRaw(0x000, 237),
	    0xD2222243,
	    0x99999999,
	    0xCCE00000,
	aobjEvent32EndRaw(0x000, 8),
	    0x82121124,
	    0xA99AAAAC,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8DE31932,
	    0x399ACAAA,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x11C, 6553),
	    0x999AAAAA,
	    0xE0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x011, 27033),
	    0x9DCCAAAA,
	    0xD0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01D, 23193),
	    0x900CCCA9,
	    0xC0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x019, 19609),
	    0xC000CCC9,
	    0xC0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x019, 7321),
	    0xD00000CC,
	    0x90000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x195, 23706),
	aobjEvent32EndRaw(0x000, 12),
	    0xD0000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x1B8, 3228),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3277),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01B, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 224),
	aobjEvent32EndRaw(0x019, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xED000EA0,
	aobjEvent32EndRaw(0x1D3, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xEDE08EAE,
	aobjEvent32SetVal(0x1B3, 8192),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xEDD08EAD,  /* -8.068170809828324e+27f */
	    0x88A9A000,  /* -1.0208933338021403e-33f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x3BC, 32172),
	    0x8D99C000,  /* -9.4755753263852e-31f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0DDDEDAE,  /* 1.3677395870122638e-30f */
	    0x8999C000,  /* -3.701396611869219e-33f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDE6DD8,  /* 5.483300098337209e-30f */
	    0xA999D000,  /* -6.830647159006276e-14f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDD9D86,  /* 5.463239581943816e-30f */
	    0x9999E000,  /* -1.5910302094574642e-23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32SetVal(0x0E6, 5698),
	    0x99997000,  /* -1.5865065654825648e-23f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x86664421,  /* -4.330824532552554e-35f */
	    0x999C8888,  /* -1.618516647750261e-23f */
	    0x88E00000,
	aobjEvent32End(),
	    0x85FF5421,
	    0x999C87ED,
	    0xCA960000,
	aobjEvent32End(),
	    0x6FFFF422,
	    0x9ADEEA99,
	    0x99D70000,
	aobjEvent32End(),
	    0x6BBFF522,
	    0xDEEEEDA9,
	    0xAE800000,
	aobjEvent32EndRaw(0x000, 8),
	    0x5BBFF513,
	    0x333EEEDC,
	    0xE8000000,
	aobjEvent32EndRaw(0x000, 136),
	    0x5BBFF522,
	aobjEvent32SetVal0RateBlock(0x39D, 28398),
	    0x70000000,  /* 1.5845632502852868e+29f */
	    0x00000888,  /* 3.0604358460854005e-42f */
	    0x6BBFF522,  /* 4.641248770479915e+26f */
	    0x6EEEEEE7,  /* 3.6973123774602975e+28f */
	    0x80000000,  /* -0.0f */
	    0x0000888E,  /* 4.898659171586696e-41f */
	    0xABBFF413,  /* -1.3639110457361325e-12f */
	    0xCCCDDEE7,
	    0x88000000,
	aobjEvent32EndRaw(0x001, 27817),
	    0x94554223,
	    0x99999ACD,
	    0xEEE00000,
	aobjEvent32EndRaw(0x000, 237),
	    0xC2222243,
	    0x99999999,
	    0xCCE80000,
	aobjEvent32EndRaw(0x000, 8),
	    0x82121124,
	    0xA99A9AE8,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32SetValRate(0x31A, 6450),
	    0x39AAA9E8,  /* 0.0003255151677876711f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x08891999,  /* 8.251405554471087e-34f */
	    0x9AAA99D8,  /* -7.055890005013715e-23f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0CC9C999,  /* 3.1090285681649927e-31f */
	    0x9CC999D8,  /* -1.3340831927153452e-21f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	    0xCA9ADA99,
	    0xADCA99D8,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xCCC00A99,
	    0xC8DC99D8,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xC0000C99,
	    0xE80CA9D8,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3228),
	    0x8000C9D0,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3229),
	    0x8000C9D0,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3246),
	aobjEvent32EndRaw(0x000, 3296),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01B, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xEC7CA000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0xED000000,
	    0xDAE9A000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8DE00007,
	    0xCCD9A000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8DD00007,
	    0xAEA9A000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8DDE000D,
	    0xDD99C000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8EDDE088,
	    0x8999C000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x8EDE6D88,
	    0xC999D000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x88ED9D86,
	    0x9999D000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x88831642,
	    0x9999E000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x86664421,
	    0x999A7000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x85FF5421,
	    0x999C7000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6FFFF422,
	    0x9ACEE800,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6BBFF522,
	    0xDEEEEE88,
	    0x88800000,
	aobjEvent32EndRaw(0x000, 8),
	    0x5BBFF513,
	    0x333EEEED,
	    0xDDE60000,
	aobjEvent32EndRaw(0x000, 136),
	    0x5BBFF522,
	aobjEvent32SetVal0RateBlock(0x39D, 28398),
	    0xA9960000,  /* -6.661338147750939e-14f */
	    0x00000888,  /* 3.0604358460854005e-42f */
	    0x6BBFF522,  /* 4.641248770479915e+26f */
	    0x6EEEEEE8,  /* 3.6973126135786217e+28f */
	    0xDAD70000,  /* -3.025855999639552e+16f */
	    0x0000888D,  /* 4.898519041740263e-41f */
	    0xABBFF413,  /* -1.3639110457361325e-12f */
	    0xCCDDEE78,
	    0x88880000,
	aobjEvent32EndRaw(0x001, 27801),
	    0x94554223,
	    0x9999AACD,
	    0xEEEE0000,
	aobjEvent32EndRaw(0x000, 237),
	    0xD2222243,
	    0x99999999,
	    0xCC000000,
	aobjEvent32EndRaw(0x000, 8),
	    0x82121124,
	    0xA999ADE0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 14),
	    0xC1911932,
	    0x3999A000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 13),
	    0xCCC91999,
	    0x9999C000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 12),
	    0xC000C999,
	    0x9999C000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 18841),
	    0xAA99C000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 19097),
	    0xCC99D000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 19610),
	    0xEC99D000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 23708),
	    0x8C99E000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3229),
	aobjEvent32SetValRate(0x134, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000DA0,  /* 4.887729043564962e-42f */
	    0x009C0000,  /* 1.432633740064663e-38f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x01B, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x019, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xED000000,
	aobjEvent32EndRaw(0x1D3, 8192),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xEDE00000,
	aobjEvent32SetVal(0x1B3, 8192),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xEDDE0000,  /* -8.588209022542326e+27f */
	    0x08A9A000,  /* 1.0208933338021403e-33f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x3BA, 0),
	    0x8D99C000,  /* -9.4755753263852e-31f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDDE008,  /* 5.469644051325288e-30f */
	    0x8A99C000,  /* -1.4805586447476876e-32f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0EDE6D08,  /* 5.483221857433218e-30f */
	    0xC999D000,  /* -1260032.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x08ED9C86,  /* 1.4300717133928473e-33f */
	    0xA999D000,  /* -6.830647159006276e-14f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32SetVal(0x106, 5698),
	    0x9999D000,  /* -1.590383974603907e-23f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x86664421,
	    0xA999D000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x85FF5421,
	    0x999AD000,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6FFFF422,
	    0x9ADEEE00,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x6BBFF522,
	    0x6EEEEEE0,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 8),
	    0x5BBFF513,
	    0x333EEEEE,
	    0xE0000000,
	aobjEvent32EndRaw(0x000, 136),
	    0x5BBFF522,
	aobjEvent32SetVal0RateBlock(0x39D, 28398),
	    0xEE000000,  /* -9.903520314283042e+27f */
	    0x00000887,  /* 3.0590345476210757e-42f */
	    0x6BBFF522,  /* 4.641248770479915e+26f */
	    0xEEEEEEE7,  /* -3.6973123774602975e+28f */
	    0x7EE00000,  /* 1.4887353552791058e+38f */
	    0x0000887D,  /* 4.896276964197343e-41f */
	    0xCBBFF413,  /* -25159718.0f */
	    0xCCDDEE78,
	    0x87E80000,
	aobjEvent32EndRaw(0x001, 23705),
	    0x94554223,
	    0x9999ACDE,
	    0x7DAD0000,
	aobjEvent32EndRaw(0x000, 220),
	    0x32222243,
	    0x99999999,
	    0xACC60000,
	aobjEvent32End(),
	    0x62121124,
	    0xA9999CDE,
	    0xE0000000,
	aobjEvent32End(),
	aobjEvent32SetValRate(0x386, 6450),
	    0x399AE000,  /* 0.00029540061950683594f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x008D1999,  /* 1.2957987667113481e-38f */
	    0x999C0000,  /* -1.613002194478404e-23f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x0000C999,  /* 7.231961244533948e-41f */
	    0x999D0000,  /* -1.6233419521353168e-23f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 18841),
	    0x99AE0000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 18841),
	    0x99C00000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 23193),
	    0x99D00000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3226),
	    0x9AE00000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3244),
	    0x9C000000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 3277),
	    0x9E000000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
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
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dITCommonObject_DogasSmog_Weapon_animjoints_0x13198[];

AObjEvent32 *dITCommonObject_DogasSmog_Weapon_animjoints[2] = {
	NULL,
	(AObjEvent32 *)dITCommonObject_DogasSmog_Weapon_animjoints_0x13198,
};

u32 dITCommonObject_DogasSmog_Weapon_animjoints_0x13198[] = {
	aobjEvent32SetVal0Rate(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x180, 1),
	    0x3F800000,  /* 1.0f */
	    0x3F38B996,  /* 0.7215818166732788f */
	    0x3F800000,  /* 1.0f */
	    0x3F38A6F3,  /* 0.7212974429130554f */
	aobjEvent32SetVal0RateBlock(0x180, 15),
	    0x40B00000,  /* 5.5f */
	    0x40B00000,  /* 5.5f */
	aobjEvent32SetValBlock(0x180, 48),
	    0x40B00000,  /* 5.5f */
	    0x40B00000,  /* 5.5f */
	aobjEvent32End(),
};

PAD(4);

/* @ 0x131E0, 952 bytes */
u32 dITCommonObject_DogasSmog_Weapon_matanimjoints[238] = {
	aobjEvent32End(),
	(u32)((u8*)dITCommonObject_DogasSmog_Weapon_matanimjoints + 0x64),
	aobjEvent32SetExtValAfter(0x018, 0),
	    0xB3800000,  /* -5.960464477539063e-08f */
	    0x59595900,  /* 3823620405067776.0f */
	aobjEvent32SetExtVal(0x001, 0),
	    0x996600FF,  /* -1.1890922464980604e-23f */
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtVal(0x001, 10),
	    0x996600FF,  /* -1.1890922464980604e-23f */
	aobjEvent32SetValAfterBlock(0x001, 8),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetExtVal(0x001, 38),
	    0x99660000,  /* -1.1890721305449773e-23f */
	aobjEvent32Wait(2),
	aobjEvent32SetValAfter(0x001, 52),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(36),
	aobjEvent32SetExtValBlock(0x001, 16),
	    0x99660000,  /* -1.1890721305449773e-23f */
	aobjEvent32End(),
	(u32)((u8*)dITCommonObject_DogasSmog_Weapon_matanimjoints + 0x8),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0x4A4AF7BB,
	    0xF6F7EEF5,
	    0xE62FD56B,
	    0xC4E5B421,
	    0x9C21835B,
	    0x6B17FB19,
	    0x5AD56B0D,
	    0x4A4B2183,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x001, 19456),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 2440),
	    0x90000000,
	aobjEvent32EndRaw(0x001, 1690),
	    0xC0000000,
	aobjEvent32EndRaw(0x013, 1075),
	    0x49000000,
	aobjEvent32EndRaw(0x001, 1417),
	    0xAAACCCAA,
	    0x99753311,
	aobjEvent32Cmd12(0x000, 0),
	aobjEvent32EndRaw(0x001, 10377),
	    0xAAAA9998,
	    0x87531111,
	aobjEvent32Cmd12(0x000, 0),
	aobjEvent32EndRaw(0x000, 2185),
	    0xAA998877,
	    0x66421111,
	aobjEvent32SetValAfter(0x200, 0),
	    0x0000088A,  /* 3.06323844301405e-42f */
	    0xC9986666,
	    0x66411111,
	aobjEvent32SetValAfter(0x000, 0),
	aobjEvent32EndRaw(0x000, 2460),
	    0xA9865556,
	    0x84431111,
	aobjEvent32SetVal0Rate(0x092, 0),
	    0x000968CA,  /* 8.641106980258984e-40f */
	    0x98654447,  /* -2.9632027542318917e-24f */
	    0x71144111,  /* 7.341190705930277e+29f */
	aobjEvent32SetVal0RateBlock(0x227, 4096),
	    0x000515C9,  /* 4.669925223254956e-40f */
	    0x86543225,  /* -3.990960876314762e-35f */
	    0x21114631,  /* 4.922080849341795e-19f */
	    0x11113000,  /* 1.1453274267677565e-28f */
	    0x00921398,  /* 1.341501135216377e-38f */
	    0x65422214,
	    0x41111451,
	aobjEvent32SetVal0Rate(0x084, 6144),
	    0x00811166,  /* 1.185302038774097e-38f */
	    0x54222111,  /* 2785357856768.0f */
	    0x52111142,
	aobjEvent32SetVal0Rate(0x0C4, 5632),
	    0x00611155,  /* 8.914260688611357e-39f */
	    0x42211111,  /* 40.266666412353516f */
	    0x35211133,  /* 6.000220196256123e-07f */
	aobjEvent32SetVal0Rate(0x0E8, 5120),
	    0x00411144,  /* 5.975500989481744e-39f */
	    0x22111111,  /* 1.966019925654038e-18f */
	    0x15411122,  /* 3.8989555011137483e-26f */
	    0x11541400,  /* 1.673001416650749e-28f */
	aobjEvent32EndRaw(0x0A2, 4675),
	aobjEvent32Cmd16(0x288, 4369),
	aobjEvent32SetVal0Rate(0x042, 4385),
	    0x11321600,  /* 1.4048503386338253e-28f */
	    0x00811242,  /* 1.185332867340312e-38f */
	aobjEvent32SetVal0Rate(0x116, 8465),
	    0x11111111,  /* 1.1443742118159064e-28f */
	    0x11111000,  /* 1.1443413506362303e-28f */
	    0x00A41222,  /* 1.5067526197381954e-38f */
	    0x14FE4121,  /* 2.567313457451575e-26f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x11114000,  /* 1.1458204648335196e-28f */
	    0x0008422B,  /* 7.584205639511278e-40f */
	    0xB12111BB,  /* -2.343866212228818e-09f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x11150000,  /* 1.1754027487793076e-28f */
	    0x00096312,  /* 8.620591970741269e-40f */
	    0x32112321,  /* 8.448098220981137e-09f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x12700000,  /* 7.573064690121713e-28f */
	    0x00008411,  /* 4.737649978035774e-41f */
	    0x4F312F11,  /* 2972651776.0f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x14900000,  /* 1.454028420503369e-26f */
	    0x00008421,  /* 4.739892055578694e-41f */
	    0x2F212F11,  /* 1.465958604507378e-10f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x12380000,  /* 5.806016262426647e-28f */
	    0x00009521,  /* 5.349737147252854e-41f */
	    0x1F111F11,  /* 3.0730641866920083e-20f */
	aobjEvent32SetVal0RateBlock(0x222, 4387),
	    0x11160000,  /* 1.1832913578315177e-28f */
	    0x00008621,  /* 4.811638536952124e-41f */
	    0x11342111,  /* 1.4209685667090236e-28f */
	aobjEvent32SetVal0RateBlock(0x222, 4431),
	    0xE8500000,  /* -3.929008913747545e+24f */
	    0x00005442,  /* 3.0226007875486304e-41f */
	    0x58997411,  /* 1349790243749888.0f */
	aobjEvent32SetVal0RateBlock(0x222, 4376),
	    0xFFA00000,  /* nanf */
	    0x00082225,  /* 7.46932719140593e-40f */
	    0x99864431,  /* -1.38828175499081e-23f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x6FF00000,  /* 1.4855280471424563e+29f */
	    0x00E81115,  /* 2.1311962986838454e-38f */
	    0x86542122,  /* -3.989711052609237e-35f */
	aobjEvent32SetVal0RateBlock(0x222, 4369),
	    0x4DFF0000,  /* 534773760.0f */
	    0x00ED6115,  /* 2.1799839060177782e-38f */
	    0x64211112,  /* 1.1884623366061854e+22f */
	aobjEvent32SetVal0RateBlock(0x222, 4371),
	    0x9DEFE000,  /* -6.3494383819570404e-21f */
	    0x0EEDD415,  /* 5.862923836025661e-30f */
	    0x52111111,  /* 155764146176.0f */
	aobjEvent32SetVal0RateBlock(0x222, 4372),
	    0xDDDEF000,  /* -2.00804248385382e+18f */
	    0x0EEED922,  /* 5.888062111856414e-30f */
	    0x31111111,  /* 2.110997820992111e-09f */
	aobjEvent32SetVal0RateBlock(0x222, 4372),
	    0xDDDDDE00,  /* -1.99840196590148e+18f */
	    0x00000099,  /* 2.14398665041697e-43f */
	    0x72112211,  /* 2.874656651660297e+30f */
	aobjEvent32SetVal0RateBlock(0x293, 6246),
	    0x9DDDDD00,  /* -5.872672156396789e-21f */
	    0x00000000,  /* 0.0f */
	    0x06111111,  /* 2.728400735416189e-35f */
	    0x14A00000,  /* 1.6155871338926322e-26f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32EndRaw(0x004, 4389),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x349, 32588),
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x001, 32763),
	    0xFFFFFF00,  /* nanf */
	    0xFE5CFF4C,
	aobjEvent32End(),
	    0xFE00FFFB,
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x000, 453),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x3FE, 1774),
	    0xFFFFFF00,
	    0xE7000000,
	aobjEvent32End(),
	    0xE3001001,
	aobjEvent32EndRaw(0x001, 0),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32End(),
	    0xE8000000,
	aobjEvent32End(),
	    0xF5000100,
	aobjEvent32WaitRaw(0x200, 0),
	    0xF5500000,
	aobjEvent32SetValBlock(0x202, 16464),
	    0xF5400400,  /* -2.434087222844486e+32f */
	    0x00094250,  /* 8.50307908152299e-40f */
	    0xFD100000,
	(u32)((u8*)dITCommonObject_DogasSmog_Weapon_matanimjoints + 0x78),
	    0xE6000000,
	aobjEvent32End(),
	    0xF0000000,
	aobjEvent32WaitRaw(0x207, 16384),
	    0xE7000000,
	aobjEvent32End(),
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x00F, 16508),
	    0xFD500000,
	(u32)((u8*)dITCommonObject_DogasSmog_Weapon_matanimjoints + 0xA0),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x070FF400,
	    0xE7000000,
	aobjEvent32End(),
	    0xD9DDFBFF,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 12294),
	(u32)((u8*)dITCommonObject_DogasSmog_Weapon_matanimjoints + 0x2A0),
	aobjEvent32WaitRaw(0x208, 512),
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 1024),
	    0xE3001001,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32End(),
	    0xE200001C,
	aobjEvent32EndRaw(0x0AA, 8312),
	    0xDF000000,
	aobjEvent32End(),
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
