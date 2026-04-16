/* relocData file 52: MVCommon */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dMVCommon_gap_0x1DD18[];
extern u8 dMVCommon_gap_0x1F170[];

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x0008_palette[16] = {
	#include <MVCommon/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0030 @ 0x30 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x0030_palette[16] = {
	#include <MVCommon/Lut_0x0030.palette.inc.c>
};

/* Raw data from file offset 0x0050 to 0x0080 (48 bytes) */
u8 dMVCommon_gap_0x0050[48] = {
	#include <MVCommon/gap_0x0050.data.inc.c>
};

/* Palette: Lut_0x0080 @ 0x80 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x0080_palette[16] = {
	#include <MVCommon/Lut_0x0080.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x00A8 @ 0xA8 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x00A8_palette[16] = {
	#include <MVCommon/Lut_0x00A8.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x00D0 @ 0xD0 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x00D0_palette[16] = {
	#include <MVCommon/Lut_0x00D0.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x00F8 @ 0xF8 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x00F8_palette[16] = {
	#include <MVCommon/Lut_0x00F8.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0120 @ 0x120 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x0120_palette[16] = {
	#include <MVCommon/Lut_0x0120.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0148 @ 0x148 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x0148_palette[16] = {
	#include <MVCommon/Lut_0x0148.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0170 @ 0x170 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x0170_palette[16] = {
	#include <MVCommon/Lut_0x0170.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0198 @ 0x198 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x0198_palette[16] = {
	#include <MVCommon/Lut_0x0198.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x01C0 @ 0x1C0 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x01C0_palette[16] = {
	#include <MVCommon/Lut_0x01C0.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x01E8 to 0x03B8 (464 bytes) */
u8 dMVCommon_Lut227_0x01E8[464] = {
	#include <MVCommon/Lut227_0x01E8.data.inc.c>
};

/* Raw data from file offset 0x03B8 to 0x0598 (480 bytes) */
u8 dMVCommon_Lut213_0x03B8[480] = {
	#include <MVCommon/Lut213_0x03B8.data.inc.c>
};

/* Palette: Lut_0x0598 @ 0x598 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x0598_palette[16] = {
	#include <MVCommon/Lut_0x0598.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x05C0 @ 0x5C0 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x05C0_palette[16] = {
	#include <MVCommon/Lut_0x05C0.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x05E8 @ 0x5E8 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x05E8_palette[16] = {
	#include <MVCommon/Lut_0x05E8.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0610 @ 0x610 (16 colors RGBA5551) */
u16 dMVCommon_Lut_0x0610_palette[16] = {
	#include <MVCommon/Lut_0x0610.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0638 (264 bytes) */
u8 dMVCommon_Tex_0x0638[264] = {
	#include <MVCommon/Tex_0x0638.tex.inc.c>
};

/* Texture data @ 0x0740 (2056 bytes) */
u8 dMVCommon_Tex_0x0740[2056] = {
	#include <MVCommon/Tex_0x0740.tex.inc.c>
};

/* Texture data @ 0x0F48 (272 bytes) */
u8 dMVCommon_Tex_0x0F48[272] = {
	#include <MVCommon/Tex_0x0F48.tex.inc.c>
};

/* Texture data @ 0x1058 (136 bytes) */
u8 dMVCommon_Tex_0x1058[136] = {
	#include <MVCommon/Tex_0x1058.tex.inc.c>
};

/* Texture data @ 0x10E0 (72 bytes) */
u8 dMVCommon_Tex_0x10E0[72] = {
	#include <MVCommon/Tex_0x10E0.tex.inc.c>
};

/* Texture data @ 0x1128 (264 bytes) */
u8 dMVCommon_Tex_0x1128[264] = {
	#include <MVCommon/Tex_0x1128.tex.inc.c>
};

/* Texture data @ 0x1230 (264 bytes) */
u8 dMVCommon_Tex_0x1230[264] = {
	#include <MVCommon/Tex_0x1230.tex.inc.c>
};

/* Texture data @ 0x1338 (264 bytes) */
u8 dMVCommon_Tex_0x1338[264] = {
	#include <MVCommon/Tex_0x1338.tex.inc.c>
};

/* Texture data @ 0x1440 (136 bytes) */
u8 dMVCommon_Tex_0x1440[136] = {
	#include <MVCommon/Tex_0x1440.tex.inc.c>
};

/* Texture data @ 0x14C8 (520 bytes) */
u8 dMVCommon_Tex_0x14C8[520] = {
	#include <MVCommon/Tex_0x14C8.tex.inc.c>
};

/* Texture data @ 0x16D0 (520 bytes) */
u8 dMVCommon_Tex_0x16D0[520] = {
	#include <MVCommon/Tex_0x16D0.tex.inc.c>
};

/* Texture data @ 0x18D8 (136 bytes) */
u8 dMVCommon_Tex_0x18D8[136] = {
	#include <MVCommon/Tex_0x18D8.tex.inc.c>
};

/* Texture data @ 0x1960 (136 bytes) */
u8 dMVCommon_Tex_0x1960[136] = {
	#include <MVCommon/Tex_0x1960.tex.inc.c>
};

/* Texture data @ 0x19E8 (2056 bytes) */
u8 dMVCommon_Tex_0x19E8[2056] = {
	#include <MVCommon/Tex_0x19E8.tex.inc.c>
};

/* Texture data @ 0x21F0 (3088 bytes) */
u8 dMVCommon_Tex_0x21F0[3088] = {
	#include <MVCommon/Tex_0x21F0.tex.inc.c>
};

/* Texture data @ 0x2E00 (136 bytes) */
u8 dMVCommon_Tex_0x2E00[136] = {
	#include <MVCommon/Tex_0x2E00.tex.inc.c>
};

/* Texture data @ 0x2E88 (96 bytes) */
u8 dMVCommon_Tex_0x2E88[96] = {
	#include <MVCommon/Tex_0x2E88.tex.inc.c>
};

/* Texture data @ 0x2EE8 (520 bytes) */
u8 dMVCommon_Tex_0x2EE8[520] = {
	#include <MVCommon/Tex_0x2EE8.tex.inc.c>
};

/* Texture data @ 0x30F0 (520 bytes) */
u8 dMVCommon_Tex_0x30F0[520] = {
	#include <MVCommon/Tex_0x30F0.tex.inc.c>
};

/* Texture data @ 0x32F8 (4096 bytes) */
u8 dMVCommon_Tex_0x32F8[4096] = {
	#include <MVCommon/Tex_0x32F8.tex.inc.c>
};

/* MObjSub: RoomBackgroundMObjSub @ 0x42F8 */
MObjSub dMVCommon_RoomBackgroundMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x00000000,
	0x0000, 0x0000, 0x0000, 0x0000,
	0,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0.0f, 0.0f,
	(void**)0x00000000,
	0x0000,
	0x00, 0x00,
	0x0000,
	0x0000, 0x0000, 0x0000,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x10D211C4,
	{ { 0x10, 0xD3, 0x11, 0xC6 } },
	0x10, 0xE7, { 0x11, 0xC8 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0, 0,
	0, 0,
};

/* Raw data from file offset 0x4370 to 0x7E98 (15144 bytes) */
u8 dMVCommon_gap_0x4370[15144] = {
	#include <MVCommon/gap_0x4370.data.inc.c>
};

/* DObjDesc: RoomBackgroundDObjDesc @ 0x7E98 (52 entries) */
DObjDesc dMVCommon_RoomBackgroundDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -2310.923095703125f, 0.0f, 3478.20654296875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x38D8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x38E8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x38F8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3908), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3918), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3928), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3938), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -5860.73779296875f, 0.0f, -858.4176025390625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -5.847014904022217f, 0.0f, 95.79534912109375f }, { 0.9100019931793213f, 0.9379990100860596f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3948), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3958), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3968), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3978), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -6605.94873046875f, 5282.9013671875f, -2908.06591796875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3988), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3998), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x39A8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x39B8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x39D0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 2818.4521484375f, 3203.845947265625f, 5498.3056640625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x39E0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x39F0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3A00), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3A10), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3A20), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3A30), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3A40), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -3958.59228515625f, 0.0f, -4247.1357421875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -54.76043701171875f, 1105.5435791015625f, -133.63265991210938f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3A50), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3A60), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 645.5726318359375f, 1136.498779296875f, 1044.5704345703125f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3A70), { -32.4151611328125f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3A80), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3A98), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3AA8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3AB8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3AC8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3AD8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3AE8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3AF8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3B08), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3B18), { 0.0f, -23.366546630859375f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x8788 to 0x8DF8 (1648 bytes) */
u8 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint[1648] = {
	#include <MVCommon/RoomBackgroundMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* DObjDesc: RoomDesk @ 0x8DF8 (3 entries) */
DObjDesc dMVCommon_RoomDesk[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint + 0x518), { 554.3527221679688f, 1828.836181640625f, -4022.0712890625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x8E7C to 0x98F8 (2684 bytes) */
u8 dMVCommon_gap_0x8E7C[2684] = {
	#include <MVCommon/gap_0x8E7C.data.inc.c>
};

/* DisplayList: RoomHaze @ 0x98F8 (2872 bytes, 359 cmds) */
Gfx dMVCommon_RoomHaze_DisplayList[359] = {
	#include <MVCommon/RoomHaze.dl.inc.c>
};

/* Raw data from file offset 0xA430 to 0xA6F8 (712 bytes) */
u8 dMVCommon_RoomHaze_post[712] = {
	#include <MVCommon/RoomHaze_post.data.inc.c>
};

/* DObjDesc: RoomBooksDObjDesc @ 0xA6F8 (4 entries) */
DObjDesc dMVCommon_RoomBooksDObjDesc[] = {
	{ 0, (void*)0x00000000, { -629.3348999023438f, 2549.01708984375f, -4845.73193359375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomHaze_DisplayList + 0xAF8), { -11.84549331665039f, 0.06088300049304962f, 0.06545999646186829f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomHaze_post + 0x1B8), { 1001.095947265625f, -397.24365234375f, 0.06545999646186829f }, { 0.0f, 0.0f, 0.6999989748001099f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0xA7B0 to 0xAEB8 (1800 bytes) */
u8 dMVCommon_RoomBooksAnimJoint_AnimJoint[1800] = {
	#include <MVCommon/RoomBooksAnimJoint_AnimJoint.data.inc.c>
};

/* DObjDesc: RoomPencilsDObjDesc @ 0xAEB8 (4 entries) */
DObjDesc dMVCommon_RoomPencilsDObjDesc[] = {
	{ 0, (void*)((u8*)dMVCommon_RoomBooksAnimJoint_AnimJoint + 0x540), { -133.4717559814453f, 2319.420166015625f, -4021.470703125f }, { 0.00022499999613501132f, -3.6075429916381836f, 0.001069999998435378f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomBooksAnimJoint_AnimJoint + 0x620), { -80.6264877319336f, -218.60069274902344f, 9.970550537109375f }, { -0.15897700190544128f, -0.025805000215768814f, -0.3202660083770752f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomBooksAnimJoint_AnimJoint + 0x6B8), { 20.549697875976562f, -155.91201782226562f, -53.9044189453125f }, { 0.35129401087760925f, -0.002859999891370535f, 0.5984709858894348f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0xAF70 to 0xBDC0 (3664 bytes) */
u8 dMVCommon_RoomPencilsAnimJoint_AnimJoint[3664] = {
	#include <MVCommon/RoomPencilsAnimJoint_AnimJoint.data.inc.c>
};

/* DObjDesc: RoomLampDObjDesc @ 0xBDC0 (5 entries) */
DObjDesc dMVCommon_RoomLampDObjDesc[] = {
	{ 0, (void*)0x00000000, { 1772.6121826171875f, 3386.60498046875f, -4259.7841796875f }, { 9.999999974752427e-07f, 0.0139979999512434f, -9.999999974752427e-07f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomPencilsAnimJoint_AnimJoint + 0xCB8), { 332.2461242675781f, -1119.63916015625f, -402.0698547363281f }, { 0.0f, 0.8999999761581421f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomPencilsAnimJoint_AnimJoint + 0xD90), { 550.4309692382812f, -1130.4405517578125f, -677.0164794921875f }, { -0.7708160281181335f, 0.5225570201873779f, -1.0961140394210815f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomPencilsAnimJoint_AnimJoint + 0xDD0), { 27.59868621826172f, -102.3028564453125f, -18.170928955078125f }, { -0.0377810001373291f, 0.8994330167770386f, -0.04823800176382065f }, { 1.0f, 0.9999930262565613f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0xBEA0 to 0xC690 (2032 bytes) */
u8 dMVCommon_RoomLampAnimJoint_AnimJoint[2032] = {
	#include <MVCommon/RoomLampAnimJoint_AnimJoint.data.inc.c>
};

/* DisplayList: RoomTissuesDisplayList @ 0xC690 (488 bytes, 61 cmds) */
Gfx dMVCommon_RoomTissuesDisplayList_DisplayList[61] = {
	#include <MVCommon/RoomTissuesDisplayList.dl.inc.c>
};

/* Raw data from file offset 0xC878 to 0xC884 (12 bytes) */
u8 dMVCommon_RoomTissuesDisplayList_post[12] = {
	#include <MVCommon/RoomTissuesDisplayList_post.data.inc.c>
};

/* Raw data from file offset 0xC884 to 0x1BC60 (62428 bytes) */
u8 dMVCommon_RoomTissuesAnimJoint_AnimJoint[62428] = {
	#include <MVCommon/RoomTissuesAnimJoint_AnimJoint.data.inc.c>
};

/* MObjSub: RoomLogoMObjSub @ 0x1BC60 */
MObjSub dMVCommon_RoomLogoMObjSub_MObjSub = {
	0x6F38,
	0x6F, 0x38,
	(void**)0x00000000,
	0x0000, 0x0003, 0x0000, 0x0000,
	2097152,
	1.1755062618592343e-38f, 0.0f,
	0.0f, 0.0f,
	1.0f, 1.0f,
	(void**)0x00000000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x0200, 0x0003,
	1.1755062618592343e-38f, 1.1755062618592343e-38f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x02, { 0x22, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	-256, -256,
	0, 0,
};

/* Raw data from file offset 0x1BCD8 to 0x1C4A8 (2000 bytes) */
u8 dMVCommon_gap_0x1BCD8[2000] = {
	#include <MVCommon/gap_0x1BCD8.data.inc.c>
};

/* DObjDesc: RoomLogoDObjDesc @ 0x1C4A8 (3 entries) */
DObjDesc dMVCommon_RoomLogoDObjDesc[] = {
	{ 0, (void*)((u8*)dMVCommon_gap_0x1BCD8 + 0x7B0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_gap_0x1BCD8 + 0x7C0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x1C52C to 0x1CA68 (1340 bytes) */
u8 dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint[1340] = {
	#include <MVCommon/RoomLogoMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* DObjDesc: RoomSnapDObjDesc @ 0x1CA68 (3 entries) */
DObjDesc dMVCommon_RoomSnapDObjDesc[] = {
	{ 0, (void*)0x00000000, { -0.0035409999545663595f, 2792.46533203125f, -1.883239984512329f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint + 0x52C), { 65.25997161865234f, 760.6396484375f, 1680.64599609375f }, { 0.001395000028423965f, 0.2819969952106476f, 6.288197994232178f }, { 0.4499729871749878f, 0.4499729871749878f, 0.4499729871749878f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x1CAF0 to 0x1DCA0 (4528 bytes) */
u8 dMVCommon_RoomSnapAnimJoint_AnimJoint[4528] = {
	#include <MVCommon/RoomSnapAnimJoint_AnimJoint.data.inc.c>
};

/* MObjSub: RoomCloseUpEffectAirMObjSub @ 0x1DCA0 */
MObjSub dMVCommon_RoomCloseUpEffectAirMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dMVCommon_gap_0x1DD18 + 0x10),
	0x0000, 0x0000, 0x0000, 0x0000,
	3,
	0.0f, 2.938735877055719e-39f,
	5.877561437213154e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.403958169694614e-38f,
	2.938780718606577e-39f, 5.877561437213154e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x02, 0x22, 0x05 } },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	255, 8,
	-256, -256,
};

/* Raw data from file offset 0x1DD18 to 0x1DF28 (528 bytes) */
u8 dMVCommon_gap_0x1DD18[528] = {
	#include <MVCommon/gap_0x1DD18.data.inc.c>
};

/* DObjDesc: RoomCloseUpEffectAirDObjDesc @ 0x1DF28 (4 entries) */
DObjDesc dMVCommon_RoomCloseUpEffectAirDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_gap_0x1DD18 + 0x1F0), { -1152.406005859375f, 3164.57861328125f, -3420.151611328125f }, { 0.0f, 0.0f, 0.0f }, { 1.2208930253982544f, 1.2189329862594604f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_gap_0x1DD18 + 0x200), { -1152.406005859375f, 3164.57861328125f, -3420.151611328125f }, { 0.0f, 0.0f, 0.0f }, { 1.8028620481491089f, 1.8027759790420532f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x1DFD8 to 0x1E010 (56 bytes) */
u8 dMVCommon_RoomCloseUpEffectAirMatAnimJoint_MatAnimJoint[56] = {
	#include <MVCommon/RoomCloseUpEffectAirMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x1E010 to 0x1F0F8 (4328 bytes) */
u8 dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint[4328] = {
	#include <MVCommon/RoomCloseUpEffectAirAnimJoint_AnimJoint.data.inc.c>
};

/* MObjSub: RoomCloseUpEffectGroundMObjSub @ 0x1F0F8 */
MObjSub dMVCommon_RoomCloseUpEffectGroundMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dMVCommon_gap_0x1F170 + 0x8),
	0x0000, 0x0003, 0x0000, 0x0000,
	2097152,
	5.877561437213154e-39f, 0.0f,
	0.0f, 0.0f,
	1.0f, 1.0f,
	(void**)0x00000000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x1200, 0x0003,
	2.938780718606577e-39f, 5.877561437213154e-39f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x20, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	-256, -2139062272,
	0, 0,
};

/* Raw data from file offset 0x1F170 to 0x1F270 (256 bytes) */
u8 dMVCommon_gap_0x1F170[256] = {
	#include <MVCommon/gap_0x1F170.data.inc.c>
};

/* DObjDesc: RoomCloseUpEffectGroundDObjDesc @ 0x1F270 (3 entries) */
DObjDesc dMVCommon_RoomCloseUpEffectGroundDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_gap_0x1F170 + 0xF0), { -1088.539794921875f, 2116.986328125f, -3612.323974609375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x1F2F4 to 0x1F330 (60 bytes) */
u8 dMVCommon_RoomCloseUpEffectGroundMatAnimJoint_MatAnimJoint[60] = {
	#include <MVCommon/RoomCloseUpEffectGroundMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x1F330 to 0x1F790 (1120 bytes) */
u8 dMVCommon_RoomCloseUpEffectGroundAnimJoint_AnimJoint[1120] = {
	#include <MVCommon/RoomCloseUpEffectGroundAnimJoint_AnimJoint.data.inc.c>
};

/* DisplayList: RoomBossShadowDisplayList @ 0x1F790 (384 bytes, 48 cmds) */
Gfx dMVCommon_RoomBossShadowDisplayList_DisplayList[48] = {
	#include <MVCommon/RoomBossShadowDisplayList.dl.inc.c>
};

/* Raw data from file offset 0x1F910 to 0x1F924 (20 bytes) */
u8 dMVCommon_RoomBossShadowDisplayList_post[20] = {
	#include <MVCommon/RoomBossShadowDisplayList_post.data.inc.c>
};

/* Raw data from file offset 0x1F924 to 0x20480 (2908 bytes) */
u8 dMVCommon_RoomBossShadowAnimJoint_AnimJoint[2908] = {
	#include <MVCommon/RoomBossShadowAnimJoint_AnimJoint.data.inc.c>
};

/* MObjSub: RoomDeskGroundMObjSub @ 0x20480 */
MObjSub dMVCommon_RoomDeskGroundMObjSub_MObjSub = {
	0x8122,
	0x81, 0xDC,
	(void**)0x00000000,
	0x8124, 0x81DE, 0x0000, 0x0000,
	-2116255262,
	0.0f, 0.0f,
	0.0f, 7.20267410662956e-43f,
	0.0f, 2.938737278354183e-39f,
	(void**)0x01400070,
	0x0000,
	0x00, 0x00,
	0x3B03,
	0x126F, 0x0000, 0x0000,
	1.0f, 1.0f,
	0.0020000000949949026f, 1.0f,
	0x00000000,
	{ { 0x02, 0x00, 0x02, 0x00 } },
	0x00, 0x10, { 0x00, 0x08 },
	{ { 0x01, 0x40, 0x00, 0x70 } },
	{ { 0x3B, 0x03, 0x12, 0x6F } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x3B, 0x03, 0x12, 0x6F } },
	0, 8197,
	-111, 0,
};

/* Raw data from file offset 0x204F8 to 0x22440 (8008 bytes) */
u8 dMVCommon_gap_0x204F8[8008] = {
	#include <MVCommon/gap_0x204F8.data.inc.c>
};

/* DObjDesc: RoomDeskGroundDObjDesc @ 0x22440 (3 entries) */
DObjDesc dMVCommon_RoomDeskGroundDObjDesc[] = {
	{ 0, (void*)((u8*)dMVCommon_gap_0x204F8 + 0x1EC0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_gap_0x204F8 + 0x1ED0), { 371.76104736328125f, 2151.7734375f, -4845.66650390625f }, { 0.0f, 0.0f, 0.6999989748001099f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_gap_0x204F8 + 0x1EE0), { 524.3055419921875f, 1936.9608154296875f, -4229.2109375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
};

/* Raw data from file offset 0x224C4 to 0x225CC (264 bytes) */
u8 dMVCommon_gap_0x224C4[264] = {
	#include <MVCommon/gap_0x224C4.data.inc.c>
};

/* Raw data from file offset 0x225CC to 0x22C90 (1732 bytes) */
u8 dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint[1732] = {
	#include <MVCommon/RoomDeskGroundMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* MObjSub: RoomSpotlightMObjSub @ 0x22C90 */
MObjSub dMVCommon_RoomSpotlightMObjSub_MObjSub = {
	0x8B62,
	0x8B, 0x62,
	(void**)0x00000000,
	0x0000, 0x0402, 0x0000, 0x0000,
	2097152,
	1.4694127800787178e-39f, 0.0f,
	0.0f, 0.0f,
	1.0f, 1.0f,
	(void**)0x00000000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x0200, 0x0401,
	1.4694127800787178e-39f, 1.4694127800787178e-39f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x22, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	-256, 0,
	0, 0,
};

/* Raw data from file offset 0x22D08 to 0x22E18 (272 bytes) */
u8 dMVCommon_gap_0x22D08[272] = {
	#include <MVCommon/gap_0x22D08.data.inc.c>
};

/* DisplayList: RoomSpotlightDisplayList @ 0x22E18 (232 bytes, 29 cmds) */
Gfx dMVCommon_RoomSpotlightDisplayList_DisplayList[29] = {
	#include <MVCommon/RoomSpotlightDisplayList.dl.inc.c>
};

/* Raw data from file offset 0x22F00 to 0x22F10 (16 bytes) */
u8 dMVCommon_RoomSpotlightDisplayList_post[16] = {
	#include <MVCommon/RoomSpotlightDisplayList_post.data.inc.c>
};

/* Raw data from file offset 0x22F10 to 0x24200 (4848 bytes) */
u8 dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint[4848] = {
	#include <MVCommon/RoomSpotlightMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* DisplayList: RoomOutside @ 0x24200 (1288 bytes, 161 cmds) */
Gfx dMVCommon_RoomOutside_DisplayList[161] = {
	#include <MVCommon/RoomOutside.dl.inc.c>
};

/* Raw data from file offset 0x24708 to 0x24720 (24 bytes) */
u8 dMVCommon_RoomSunlight_post[24] = {
	#include <MVCommon/RoomSunlight_post.data.inc.c>
};

