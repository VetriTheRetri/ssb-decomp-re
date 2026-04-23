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
/* gap sub-block @ 0x0050 (was gap+0x0, 8 bytes) */
u8 dMVCommon_gap_0x0050[8] = {
	#include <MVCommon/gap_0x0050.data.inc.c>
};

/* gap sub-block @ 0x0058 (was gap+0x8, 40 bytes) */
u8 dMVCommon_gap_0x0050_sub_0x8[40] = {
	#include <MVCommon/gap_0x0050_sub_0x8.data.inc.c>
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
/* gap sub-block @ 0x4370 (was gap+0x0, 88 bytes) */
u8 dMVCommon_gap_0x4370[88] = {
	#include <MVCommon/gap_0x4370.data.inc.c>
};

/* gap sub-block @ 0x43C8 (was gap+0x58, 120 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x58[120] = {
	#include <MVCommon/gap_0x4370_sub_0x58.data.inc.c>
};

/* gap sub-block @ 0x4440 (was gap+0xD0, 120 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xD0[120] = {
	#include <MVCommon/gap_0x4370_sub_0xD0.data.inc.c>
};

/* gap sub-block @ 0x44B8 (was gap+0x148, 120 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x148[120] = {
	#include <MVCommon/gap_0x4370_sub_0x148.data.inc.c>
};

/* gap sub-block @ 0x4530 (was gap+0x1C0, 120 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x1C0[120] = {
	#include <MVCommon/gap_0x4370_sub_0x1C0.data.inc.c>
};

/* gap sub-block @ 0x45A8 (was gap+0x238, 120 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x238[120] = {
	#include <MVCommon/gap_0x4370_sub_0x238.data.inc.c>
};

/* gap sub-block @ 0x4620 (was gap+0x2B0, 120 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x2B0[120] = {
	#include <MVCommon/gap_0x4370_sub_0x2B0.data.inc.c>
};

/* gap sub-block @ 0x4698 (was gap+0x328, 120 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x328[120] = {
	#include <MVCommon/gap_0x4370_sub_0x328.data.inc.c>
};

/* gap sub-block @ 0x4710 (was gap+0x3A0, 8 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x3A0[8] = {
	#include <MVCommon/gap_0x4370_sub_0x3A0.data.inc.c>
};

/* gap sub-block @ 0x4718 (was gap+0x3A8, 8 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x3A8[8] = {
	#include <MVCommon/gap_0x4370_sub_0x3A8.data.inc.c>
};

/* gap sub-block @ 0x4720 (was gap+0x3B0, 8 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x3B0[8] = {
	#include <MVCommon/gap_0x4370_sub_0x3B0.data.inc.c>
};

/* gap sub-block @ 0x4728 (was gap+0x3B8, 8 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x3B8[8] = {
	#include <MVCommon/gap_0x4370_sub_0x3B8.data.inc.c>
};

/* gap sub-block @ 0x4730 (was gap+0x3C0, 8 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x3C0[8] = {
	#include <MVCommon/gap_0x4370_sub_0x3C0.data.inc.c>
};

/* gap sub-block @ 0x4738 (was gap+0x3C8, 8 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x3C8[8] = {
	#include <MVCommon/gap_0x4370_sub_0x3C8.data.inc.c>
};

/* gap sub-block @ 0x4740 (was gap+0x3D0, 8 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x3D0[8] = {
	#include <MVCommon/gap_0x4370_sub_0x3D0.data.inc.c>
};

/* gap sub-block @ 0x4748 (was gap+0x3D8, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x3D8[64] = {
	#include <MVCommon/gap_0x4370_sub_0x3D8.data.inc.c>
};

/* gap sub-block @ 0x4788 (was gap+0x418, 256 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x418[256] = {
	#include <MVCommon/gap_0x4370_sub_0x418.data.inc.c>
};

/* gap sub-block @ 0x4888 (was gap+0x518, 192 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x518[192] = {
	#include <MVCommon/gap_0x4370_sub_0x518.data.inc.c>
};

/* gap sub-block @ 0x4948 (was gap+0x5D8, 48 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x5D8[48] = {
	#include <MVCommon/gap_0x4370_sub_0x5D8.data.inc.c>
};

/* gap sub-block @ 0x4978 (was gap+0x608, 224 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x608[224] = {
	#include <MVCommon/gap_0x4370_sub_0x608.data.inc.c>
};

/* gap sub-block @ 0x4A58 (was gap+0x6E8, 192 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x6E8[192] = {
	#include <MVCommon/gap_0x4370_sub_0x6E8.data.inc.c>
};

/* gap sub-block @ 0x4B18 (was gap+0x7A8, 48 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x7A8[48] = {
	#include <MVCommon/gap_0x4370_sub_0x7A8.data.inc.c>
};

/* gap sub-block @ 0x4B48 (was gap+0x7D8, 320 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x7D8[320] = {
	#include <MVCommon/gap_0x4370_sub_0x7D8.data.inc.c>
};

/* gap sub-block @ 0x4C88 (was gap+0x918, 112 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x918[112] = {
	#include <MVCommon/gap_0x4370_sub_0x918.data.inc.c>
};

/* gap sub-block @ 0x4CF8 (was gap+0x988, 80 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x988[80] = {
	#include <MVCommon/gap_0x4370_sub_0x988.data.inc.c>
};

/* gap sub-block @ 0x4D48 (was gap+0x9D8, 176 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x9D8[176] = {
	#include <MVCommon/gap_0x4370_sub_0x9D8.data.inc.c>
};

/* gap sub-block @ 0x4DF8 (was gap+0xA88, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xA88[64] = {
	#include <MVCommon/gap_0x4370_sub_0xA88.data.inc.c>
};

/* gap sub-block @ 0x4E38 (was gap+0xAC8, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xAC8[64] = {
	#include <MVCommon/gap_0x4370_sub_0xAC8.data.inc.c>
};

/* gap sub-block @ 0x4E78 (was gap+0xB08, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xB08[64] = {
	#include <MVCommon/gap_0x4370_sub_0xB08.data.inc.c>
};

/* gap sub-block @ 0x4EB8 (was gap+0xB48, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xB48[64] = {
	#include <MVCommon/gap_0x4370_sub_0xB48.data.inc.c>
};

/* gap sub-block @ 0x4EF8 (was gap+0xB88, 128 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xB88[128] = {
	#include <MVCommon/gap_0x4370_sub_0xB88.data.inc.c>
};

/* gap sub-block @ 0x4F78 (was gap+0xC08, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xC08[64] = {
	#include <MVCommon/gap_0x4370_sub_0xC08.data.inc.c>
};

/* gap sub-block @ 0x4FB8 (was gap+0xC48, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xC48[64] = {
	#include <MVCommon/gap_0x4370_sub_0xC48.data.inc.c>
};

/* gap sub-block @ 0x4FF8 (was gap+0xC88, 128 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xC88[128] = {
	#include <MVCommon/gap_0x4370_sub_0xC88.data.inc.c>
};

/* gap sub-block @ 0x5078 (was gap+0xD08, 128 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xD08[128] = {
	#include <MVCommon/gap_0x4370_sub_0xD08.data.inc.c>
};

/* gap sub-block @ 0x50F8 (was gap+0xD88, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xD88[64] = {
	#include <MVCommon/gap_0x4370_sub_0xD88.data.inc.c>
};

/* gap sub-block @ 0x5138 (was gap+0xDC8, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xDC8[64] = {
	#include <MVCommon/gap_0x4370_sub_0xDC8.data.inc.c>
};

/* gap sub-block @ 0x5178 (was gap+0xE08, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xE08[64] = {
	#include <MVCommon/gap_0x4370_sub_0xE08.data.inc.c>
};

/* gap sub-block @ 0x51B8 (was gap+0xE48, 192 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xE48[192] = {
	#include <MVCommon/gap_0x4370_sub_0xE48.data.inc.c>
};

/* gap sub-block @ 0x5278 (was gap+0xF08, 224 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xF08[224] = {
	#include <MVCommon/gap_0x4370_sub_0xF08.data.inc.c>
};

/* gap sub-block @ 0x5358 (was gap+0xFE8, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0xFE8[64] = {
	#include <MVCommon/gap_0x4370_sub_0xFE8.data.inc.c>
};

/* gap sub-block @ 0x5398 (was gap+0x1028, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x1028[64] = {
	#include <MVCommon/gap_0x4370_sub_0x1028.data.inc.c>
};

/* gap sub-block @ 0x53D8 (was gap+0x1068, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x1068[64] = {
	#include <MVCommon/gap_0x4370_sub_0x1068.data.inc.c>
};

/* gap sub-block @ 0x5418 (was gap+0x10A8, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x10A8[64] = {
	#include <MVCommon/gap_0x4370_sub_0x10A8.data.inc.c>
};

/* gap sub-block @ 0x5458 (was gap+0x10E8, 128 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x10E8[128] = {
	#include <MVCommon/gap_0x4370_sub_0x10E8.data.inc.c>
};

/* gap sub-block @ 0x54D8 (was gap+0x1168, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x1168[64] = {
	#include <MVCommon/gap_0x4370_sub_0x1168.data.inc.c>
};

/* gap sub-block @ 0x5518 (was gap+0x11A8, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x11A8[64] = {
	#include <MVCommon/gap_0x4370_sub_0x11A8.data.inc.c>
};

/* gap sub-block @ 0x5558 (was gap+0x11E8, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x11E8[64] = {
	#include <MVCommon/gap_0x4370_sub_0x11E8.data.inc.c>
};

/* gap sub-block @ 0x5598 (was gap+0x1228, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x1228[64] = {
	#include <MVCommon/gap_0x4370_sub_0x1228.data.inc.c>
};

/* gap sub-block @ 0x55D8 (was gap+0x1268, 192 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x1268[192] = {
	#include <MVCommon/gap_0x4370_sub_0x1268.data.inc.c>
};

/* gap sub-block @ 0x5698 (was gap+0x1328, 128 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x1328[128] = {
	#include <MVCommon/gap_0x4370_sub_0x1328.data.inc.c>
};

/* gap sub-block @ 0x5718 (was gap+0x13A8, 272 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x13A8[272] = {
	#include <MVCommon/gap_0x4370_sub_0x13A8.data.inc.c>
};

/* gap sub-block @ 0x5828 (was gap+0x14B8, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x14B8[64] = {
	#include <MVCommon/gap_0x4370_sub_0x14B8.data.inc.c>
};

/* gap sub-block @ 0x5868 (was gap+0x14F8, 112 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x14F8[112] = {
	#include <MVCommon/gap_0x4370_sub_0x14F8.data.inc.c>
};

/* gap sub-block @ 0x58D8 (was gap+0x1568, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x1568[64] = {
	#include <MVCommon/gap_0x4370_sub_0x1568.data.inc.c>
};

/* gap sub-block @ 0x5918 (was gap+0x15A8, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x15A8[64] = {
	#include <MVCommon/gap_0x4370_sub_0x15A8.data.inc.c>
};

/* gap sub-block @ 0x5958 (was gap+0x15E8, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x15E8[64] = {
	#include <MVCommon/gap_0x4370_sub_0x15E8.data.inc.c>
};

/* gap sub-block @ 0x5998 (was gap+0x1628, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x1628[64] = {
	#include <MVCommon/gap_0x4370_sub_0x1628.data.inc.c>
};

/* gap sub-block @ 0x59D8 (was gap+0x1668, 64 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x1668[64] = {
	#include <MVCommon/gap_0x4370_sub_0x1668.data.inc.c>
};

/* gap sub-block @ 0x5A18 (was gap+0x16A8, 176 bytes) */
Gfx dMVCommon_DL_0x5A18[22] = {
	#include <MVCommon/DL_0x5A18.dl.inc.c>
};

/* gap sub-block @ 0x5AC8 (was gap+0x1758, 232 bytes) */
Gfx dMVCommon_DL_0x5AC8[29] = {
	#include <MVCommon/DL_0x5AC8.dl.inc.c>
};

/* gap sub-block @ 0x5BB0 (was gap+0x1840, 240 bytes) */
Gfx dMVCommon_DL_0x5BB0[30] = {
	#include <MVCommon/DL_0x5BB0.dl.inc.c>
};

/* gap sub-block @ 0x5CA0 (was gap+0x1930, 200 bytes) */
Gfx dMVCommon_DL_0x5CA0[25] = {
	#include <MVCommon/DL_0x5CA0.dl.inc.c>
};

/* gap sub-block @ 0x5D68 (was gap+0x19F8, 128 bytes) */
Gfx dMVCommon_DL_0x5D68[16] = {
	#include <MVCommon/DL_0x5D68.dl.inc.c>
};

/* gap sub-block @ 0x5DE8 (was gap+0x1A78, 192 bytes) */
Gfx dMVCommon_DL_0x5DE8[24] = {
	#include <MVCommon/DL_0x5DE8.dl.inc.c>
};

/* gap sub-block @ 0x5EA8 (was gap+0x1B38, 200 bytes) */
Gfx dMVCommon_DL_0x5EA8[25] = {
	#include <MVCommon/DL_0x5EA8.dl.inc.c>
};

/* gap sub-block @ 0x5F70 (was gap+0x1C00, 232 bytes) */
Gfx dMVCommon_DL_0x5F70[29] = {
	#include <MVCommon/DL_0x5F70.dl.inc.c>
};

/* gap sub-block @ 0x6058 (was gap+0x1CE8, 216 bytes) */
Gfx dMVCommon_DL_0x6058[27] = {
	#include <MVCommon/DL_0x6058.dl.inc.c>
};

/* gap sub-block @ 0x6130 (was gap+0x1DC0, 224 bytes) */
Gfx dMVCommon_DL_0x6130[28] = {
	#include <MVCommon/DL_0x6130.dl.inc.c>
};

/* gap sub-block @ 0x6210 (was gap+0x1EA0, 200 bytes) */
Gfx dMVCommon_DL_0x6210[25] = {
	#include <MVCommon/DL_0x6210.dl.inc.c>
};

/* gap sub-block @ 0x62D8 (was gap+0x1F68, 288 bytes) */
Gfx dMVCommon_DL_0x62D8[36] = {
	#include <MVCommon/DL_0x62D8.dl.inc.c>
};

/* gap sub-block @ 0x63F8 (was gap+0x2088, 200 bytes) */
Gfx dMVCommon_DL_0x63F8[25] = {
	#include <MVCommon/DL_0x63F8.dl.inc.c>
};

/* gap sub-block @ 0x64C0 (was gap+0x2150, 208 bytes) */
Gfx dMVCommon_DL_0x64C0[26] = {
	#include <MVCommon/DL_0x64C0.dl.inc.c>
};

/* gap sub-block @ 0x6590 (was gap+0x2220, 240 bytes) */
Gfx dMVCommon_DL_0x6590[30] = {
	#include <MVCommon/DL_0x6590.dl.inc.c>
};

/* gap sub-block @ 0x6680 (was gap+0x2310, 136 bytes) */
Gfx dMVCommon_DL_0x6680[17] = {
	#include <MVCommon/DL_0x6680.dl.inc.c>
};

/* gap sub-block @ 0x6708 (was gap+0x2398, 224 bytes) */
Gfx dMVCommon_DL_0x6708[28] = {
	#include <MVCommon/DL_0x6708.dl.inc.c>
};

/* gap sub-block @ 0x67E8 (was gap+0x2478, 208 bytes) */
Gfx dMVCommon_DL_0x67E8[26] = {
	#include <MVCommon/DL_0x67E8.dl.inc.c>
};

/* gap sub-block @ 0x68B8 (was gap+0x2548, 264 bytes) */
Gfx dMVCommon_DL_0x68B8[33] = {
	#include <MVCommon/DL_0x68B8.dl.inc.c>
};

/* gap sub-block @ 0x69C0 (was gap+0x2650, 240 bytes) */
Gfx dMVCommon_DL_0x69C0[30] = {
	#include <MVCommon/DL_0x69C0.dl.inc.c>
};

/* gap sub-block @ 0x6AB0 (was gap+0x2740, 560 bytes) */
Gfx dMVCommon_DL_0x6AB0[70] = {
	#include <MVCommon/DL_0x6AB0.dl.inc.c>
};

/* gap sub-block @ 0x6CE0 (was gap+0x2970, 240 bytes) */
Gfx dMVCommon_DL_0x6CE0[30] = {
	#include <MVCommon/DL_0x6CE0.dl.inc.c>
};

/* gap sub-block @ 0x6DD0 (was gap+0x2A60, 240 bytes) */
Gfx dMVCommon_DL_0x6DD0[30] = {
	#include <MVCommon/DL_0x6DD0.dl.inc.c>
};

/* gap sub-block @ 0x6EC0 (was gap+0x2B50, 280 bytes) */
Gfx dMVCommon_DL_0x6EC0[35] = {
	#include <MVCommon/DL_0x6EC0.dl.inc.c>
};

/* gap sub-block @ 0x6FD8 (was gap+0x2C68, 240 bytes) */
Gfx dMVCommon_DL_0x6FD8[30] = {
	#include <MVCommon/DL_0x6FD8.dl.inc.c>
};

/* gap sub-block @ 0x70C8 (was gap+0x2D58, 240 bytes) */
Gfx dMVCommon_DL_0x70C8[30] = {
	#include <MVCommon/DL_0x70C8.dl.inc.c>
};

/* gap sub-block @ 0x71B8 (was gap+0x2E48, 240 bytes) */
Gfx dMVCommon_DL_0x71B8[30] = {
	#include <MVCommon/DL_0x71B8.dl.inc.c>
};

/* gap sub-block @ 0x72A8 (was gap+0x2F38, 240 bytes) */
Gfx dMVCommon_DL_0x72A8[30] = {
	#include <MVCommon/DL_0x72A8.dl.inc.c>
};

/* gap sub-block @ 0x7398 (was gap+0x3028, 264 bytes) */
Gfx dMVCommon_DL_0x7398[33] = {
	#include <MVCommon/DL_0x7398.dl.inc.c>
};

/* gap sub-block @ 0x74A0 (was gap+0x3130, 256 bytes) */
Gfx dMVCommon_DL_0x74A0[32] = {
	#include <MVCommon/DL_0x74A0.dl.inc.c>
};

/* gap sub-block @ 0x75A0 (was gap+0x3230, 312 bytes) */
Gfx dMVCommon_DL_0x75A0[39] = {
	#include <MVCommon/DL_0x75A0.dl.inc.c>
};

/* gap sub-block @ 0x76D8 (was gap+0x3368, 232 bytes) */
Gfx dMVCommon_DL_0x76D8[29] = {
	#include <MVCommon/DL_0x76D8.dl.inc.c>
};

/* gap sub-block @ 0x77C0 (was gap+0x3450, 128 bytes) */
Gfx dMVCommon_DL_0x77C0[16] = {
	#include <MVCommon/DL_0x77C0.dl.inc.c>
};

/* gap sub-block @ 0x7840 (was gap+0x34D0, 232 bytes) */
Gfx dMVCommon_DL_0x7840[29] = {
	#include <MVCommon/DL_0x7840.dl.inc.c>
};

/* gap sub-block @ 0x7928 (was gap+0x35B8, 168 bytes) */
Gfx dMVCommon_DL_0x7928[21] = {
	#include <MVCommon/DL_0x7928.dl.inc.c>
};

/* gap sub-block @ 0x79D0 (was gap+0x3660, 168 bytes) */
Gfx dMVCommon_DL_0x79D0[21] = {
	#include <MVCommon/DL_0x79D0.dl.inc.c>
};

/* gap sub-block @ 0x7A78 (was gap+0x3708, 232 bytes) */
Gfx dMVCommon_DL_0x7A78[29] = {
	#include <MVCommon/DL_0x7A78.dl.inc.c>
};

/* gap sub-block @ 0x7B60 (was gap+0x37F0, 232 bytes) */
Gfx dMVCommon_DL_0x7B60[29] = {
	#include <MVCommon/DL_0x7B60.dl.inc.c>
};

/* DObjDLLink @ 0x38D8 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7C48[] = {
	{ 0, dMVCommon_DL_0x5A18 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x38E8 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7C58[] = {
	{ 0, dMVCommon_DL_0x5AC8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x38F8 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7C68[] = {
	{ 0, dMVCommon_DL_0x5BB0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3908 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7C78[] = {
	{ 0, dMVCommon_DL_0x5CA0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3918 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7C88[] = {
	{ 0, dMVCommon_DL_0x5D68 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3928 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7C98[] = {
	{ 0, dMVCommon_DL_0x5DE8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3938 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7CA8[] = {
	{ 0, dMVCommon_DL_0x5EA8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3948 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7CB8[] = {
	{ 0, dMVCommon_DL_0x5F70 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3958 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7CC8[] = {
	{ 0, dMVCommon_DL_0x6058 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3968 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7CD8[] = {
	{ 0, dMVCommon_DL_0x6130 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3978 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7CE8[] = {
	{ 0, dMVCommon_DL_0x6210 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3988 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7CF8[] = {
	{ 0, dMVCommon_DL_0x62D8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3998 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7D08[] = {
	{ 0, dMVCommon_DL_0x63F8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x39A8 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7D18[] = {
	{ 1, dMVCommon_DL_0x7398 },
	{ 4, NULL },
};

/* gap sub-block @ 0x7D28 (was gap+0x39B8, 24 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x39B8[24] = {
	#include <MVCommon/gap_0x4370_sub_0x39B8.data.inc.c>
};

/* DObjDLLink @ 0x39D0 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7D40[] = {
	{ 1, dMVCommon_DL_0x75A0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x39E0 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7D50[] = {
	{ 1, dMVCommon_DL_0x76D8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x39F0 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7D60[] = {
	{ 0, dMVCommon_DL_0x6590 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3A00 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7D70[] = {
	{ 0, dMVCommon_DL_0x6680 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3A10 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7D80[] = {
	{ 0, dMVCommon_DL_0x6708 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3A20 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7D90[] = {
	{ 0, dMVCommon_DL_0x67E8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3A30 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7DA0[] = {
	{ 0, dMVCommon_DL_0x68B8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3A40 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7DB0[] = {
	{ 1, dMVCommon_DL_0x77C0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3A50 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7DC0[] = {
	{ 0, dMVCommon_DL_0x69C0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3A60 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7DD0[] = {
	{ 0, dMVCommon_DL_0x6AB0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3A70 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7DE0[] = {
	{ 0, dMVCommon_DL_0x6CE0 },
	{ 4, NULL },
};

/* gap sub-block @ 0x7DF0 (was gap+0x3A80, 24 bytes) */
u8 dMVCommon_gap_0x4370_sub_0x3A80[24] = {
	#include <MVCommon/gap_0x4370_sub_0x3A80.data.inc.c>
};

/* DObjDLLink @ 0x3A98 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7E08[] = {
	{ 0, dMVCommon_DL_0x6EC0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3AA8 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7E18[] = {
	{ 1, dMVCommon_DL_0x7928 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3AB8 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7E28[] = {
	{ 1, dMVCommon_DL_0x79D0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3AC8 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7E38[] = {
	{ 1, dMVCommon_DL_0x7A78 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3AD8 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7E48[] = {
	{ 1, dMVCommon_DL_0x7B60 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3AE8 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7E58[] = {
	{ 0, dMVCommon_DL_0x6FD8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3AF8 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7E68[] = {
	{ 0, dMVCommon_DL_0x70C8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3B08 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7E78[] = {
	{ 0, dMVCommon_DL_0x71B8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x3B18 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x7E88[] = {
	{ 0, dMVCommon_DL_0x72A8 },
	{ 4, NULL },
};

/* DObjDesc: RoomBackgroundDObjDesc @ 0x7E98 (52 entries) */
DObjDesc dMVCommon_RoomBackgroundDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -2310.923095703125f, 0.0f, 3478.20654296875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7C48, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7C58, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7C68, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7C78, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7C88, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7C98, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7CA8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -5860.73779296875f, 0.0f, -858.4176025390625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -5.847014904022217f, 0.0f, 95.79534912109375f }, { 0.9100019931793213f, 0.9379990100860596f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7CB8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7CC8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7CD8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7CE8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -6605.94873046875f, 5282.9013671875f, -2908.06591796875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7CF8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMVCommon_DLLink_0x7D08, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7D18, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x39B8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7D40, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 2818.4521484375f, 3203.845947265625f, 5498.3056640625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7D50, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7D60, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7D70, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7D80, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7D90, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7DA0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7DB0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -3958.59228515625f, 0.0f, -4247.1357421875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -54.76043701171875f, 1105.5435791015625f, -133.63265991210938f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7DC0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7DD0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 645.5726318359375f, 1136.498779296875f, 1044.5704345703125f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7DE0, { -32.4151611328125f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVCommon_gap_0x4370 + 0x3A80), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7E08, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7E18, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7E28, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7E38, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMVCommon_DLLink_0x7E48, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7E58, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7E68, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7E78, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_DLLink_0x7E88, { 0.0f, -23.366546630859375f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x8788 to 0x8DF8 (1648 bytes) */
u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint[412] = {
	#include <MVCommon/RoomBackgroundMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* DObjDesc: RoomDesk @ 0x8DF8 (3 entries) */
DObjDesc dMVCommon_RoomDesk[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint + 0x518), { 554.3527221679688f, 1828.836181640625f, -4022.0712890625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x8E7C to 0x98F8 (2684 bytes) */
/* gap sub-block @ 0x8E7C (was gap+0x0, 12 bytes) */
u8 dMVCommon_gap_0x8E7C[12] = {
	#include <MVCommon/gap_0x8E7C.data.inc.c>
};

/* gap sub-block @ 0x8E88 (was gap+0xC, 40 bytes) */
u8 dMVCommon_gap_0x8E7C_sub_0xC[40] = {
	#include <MVCommon/gap_0x8E7C_sub_0xC.data.inc.c>
};

/* gap sub-block @ 0x8EB0 (was gap+0x34, 2048 bytes) */
u8 dMVCommon_gap_0x8E7C_sub_0x34[2048] = {
	#include <MVCommon/gap_0x8E7C_sub_0x34.data.inc.c>
};

/* gap sub-block @ 0x96B0 (was gap+0x834, 256 bytes) */
u8 dMVCommon_gap_0x8E7C_sub_0x834[256] = {
	#include <MVCommon/gap_0x8E7C_sub_0x834.data.inc.c>
};

/* gap sub-block @ 0x97B0 (was gap+0x934, 328 bytes) */
Gfx dMVCommon_DL_0x97B0[41] = {
	#include <MVCommon/DL_0x97B0.dl.inc.c>
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
u32 dMVCommon_RoomBooksAnimJoint_AnimJoint[450] = {
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
u32 dMVCommon_RoomPencilsAnimJoint_AnimJoint[916] = {
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
u32 dMVCommon_RoomLampAnimJoint_AnimJoint[508] = {
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
u32 dMVCommon_RoomTissuesAnimJoint_AnimJoint[15607] = {
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
/* gap sub-block @ 0x1BCD8 (was gap+0x0, 8 bytes) */
u8 dMVCommon_gap_0x1BCD8[8] = {
	#include <MVCommon/gap_0x1BCD8.data.inc.c>
};

/* gap sub-block @ 0x1BCE0 (was gap+0x8, 8 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x8[8] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x1BCE8 (was gap+0x10, 64 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x10[64] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x1BD28 (was gap+0x50, 16 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x50[16] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x50.data.inc.c>
};

/* gap sub-block @ 0x1BD38 (was gap+0x60, 32 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x60[32] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x60.data.inc.c>
};

/* gap sub-block @ 0x1BD58 (was gap+0x80, 16 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x80[16] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x80.data.inc.c>
};

/* gap sub-block @ 0x1BD68 (was gap+0x90, 32 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x90[32] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x90.data.inc.c>
};

/* gap sub-block @ 0x1BD88 (was gap+0xB0, 32 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0xB0[32] = {
	#include <MVCommon/gap_0x1BCD8_sub_0xB0.data.inc.c>
};

/* gap sub-block @ 0x1BDA8 (was gap+0xD0, 32 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0xD0[32] = {
	#include <MVCommon/gap_0x1BCD8_sub_0xD0.data.inc.c>
};

/* gap sub-block @ 0x1BDC8 (was gap+0xF0, 32 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0xF0[32] = {
	#include <MVCommon/gap_0x1BCD8_sub_0xF0.data.inc.c>
};

/* gap sub-block @ 0x1BDE8 (was gap+0x110, 32 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x110[32] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x110.data.inc.c>
};

/* gap sub-block @ 0x1BE08 (was gap+0x130, 32 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x130[32] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x130.data.inc.c>
};

/* gap sub-block @ 0x1BE28 (was gap+0x150, 32 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x150[32] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x150.data.inc.c>
};

/* gap sub-block @ 0x1BE48 (was gap+0x170, 32 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x170[32] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x170.data.inc.c>
};

/* gap sub-block @ 0x1BE68 (was gap+0x190, 32 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x190[32] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x190.data.inc.c>
};

/* gap sub-block @ 0x1BE88 (was gap+0x1B0, 64 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x1B0[64] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x1B0.data.inc.c>
};

/* gap sub-block @ 0x1BEC8 (was gap+0x1F0, 64 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x1F0[64] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x1F0.data.inc.c>
};

/* gap sub-block @ 0x1BF08 (was gap+0x230, 64 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x230[64] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x230.data.inc.c>
};

/* gap sub-block @ 0x1BF48 (was gap+0x270, 64 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x270[64] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x270.data.inc.c>
};

/* gap sub-block @ 0x1BF88 (was gap+0x2B0, 64 bytes) */
u8 dMVCommon_gap_0x1BCD8_sub_0x2B0[64] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x2B0.data.inc.c>
};

/* gap sub-block @ 0x1BFC8 (was gap+0x2F0, 80 bytes) */
Gfx dMVCommon_DL_0x1BFC8[10] = {
	#include <MVCommon/DL_0x1BFC8.dl.inc.c>
};

/* gap sub-block @ 0x1C018 (was gap+0x340, 832 bytes) */
Gfx dMVCommon_DL_0x1C018[104] = {
	#include <MVCommon/DL_0x1C018.dl.inc.c>
};

/* gap sub-block @ 0x1C358 (was gap+0x680, 304 bytes) */
Gfx dMVCommon_DL_0x1C358[38] = {
	#include <MVCommon/DL_0x1C358.dl.inc.c>
};

/* DObjDLLink @ 0x7B0 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x1C488[] = {
	{ 1, dMVCommon_DL_0x1BFC8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x7C0 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x1C498[] = {
	{ 1, dMVCommon_DL_0x1C358 },
	{ 4, NULL },
};

/* DObjDesc: RoomLogoDObjDesc @ 0x1C4A8 (3 entries) */
DObjDesc dMVCommon_RoomLogoDObjDesc[] = {
	{ 0, (void*)dMVCommon_DLLink_0x1C488, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMVCommon_DLLink_0x1C498, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x1C52C to 0x1CA68 (1340 bytes) */
u32 dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint[335] = {
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
u32 dMVCommon_RoomSnapAnimJoint_AnimJoint[1132] = {
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
/* gap sub-block @ 0x1DD18 (was gap+0x0, 16 bytes) */
u8 dMVCommon_gap_0x1DD18[16] = {
	#include <MVCommon/gap_0x1DD18.data.inc.c>
};

/* gap sub-block @ 0x1DD28 (was gap+0x10, 8 bytes) */
u8 dMVCommon_gap_0x1DD18_sub_0x10[8] = {
	#include <MVCommon/gap_0x1DD18_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x1DD30 (was gap+0x18, 64 bytes) */
u8 dMVCommon_gap_0x1DD18_sub_0x18[64] = {
	#include <MVCommon/gap_0x1DD18_sub_0x18.data.inc.c>
};

/* gap sub-block @ 0x1DD70 (was gap+0x58, 64 bytes) */
u8 dMVCommon_gap_0x1DD18_sub_0x58[64] = {
	#include <MVCommon/gap_0x1DD18_sub_0x58.data.inc.c>
};

/* gap sub-block @ 0x1DDB0 (was gap+0x98, 176 bytes) */
Gfx dMVCommon_DL_0x1DDB0[22] = {
	#include <MVCommon/DL_0x1DDB0.dl.inc.c>
};

/* gap sub-block @ 0x1DE60 (was gap+0x148, 168 bytes) */
Gfx dMVCommon_DL_0x1DE60[21] = {
	#include <MVCommon/DL_0x1DE60.dl.inc.c>
};

/* DObjDLLink @ 0x1F0 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x1DF08[] = {
	{ 1, dMVCommon_DL_0x1DDB0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x200 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x1DF18[] = {
	{ 1, dMVCommon_DL_0x1DE60 },
	{ 4, NULL },
};

/* DObjDesc: RoomCloseUpEffectAirDObjDesc @ 0x1DF28 (4 entries) */
DObjDesc dMVCommon_RoomCloseUpEffectAirDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMVCommon_DLLink_0x1DF08, { -1152.406005859375f, 3164.57861328125f, -3420.151611328125f }, { 0.0f, 0.0f, 0.0f }, { 1.2208930253982544f, 1.2189329862594604f, 1.0f } },
	{ 1, (void*)dMVCommon_DLLink_0x1DF18, { -1152.406005859375f, 3164.57861328125f, -3420.151611328125f }, { 0.0f, 0.0f, 0.0f }, { 1.8028620481491089f, 1.8027759790420532f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x1DFD8 to 0x1E010 (56 bytes) */
u32 dMVCommon_RoomCloseUpEffectAirMatAnimJoint_MatAnimJoint[14] = {
	#include <MVCommon/RoomCloseUpEffectAirMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x1E010 to 0x1F0F8 (4328 bytes) */
u32 dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint[1082] = {
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
/* gap sub-block @ 0x1F170 (was gap+0x0, 8 bytes) */
u8 dMVCommon_gap_0x1F170[8] = {
	#include <MVCommon/gap_0x1F170.data.inc.c>
};

/* gap sub-block @ 0x1F178 (was gap+0x8, 8 bytes) */
u8 dMVCommon_gap_0x1F170_sub_0x8[8] = {
	#include <MVCommon/gap_0x1F170_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x1F180 (was gap+0x10, 64 bytes) */
u8 dMVCommon_gap_0x1F170_sub_0x10[64] = {
	#include <MVCommon/gap_0x1F170_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x1F1C0 (was gap+0x50, 160 bytes) */
Gfx dMVCommon_DL_0x1F1C0[20] = {
	#include <MVCommon/DL_0x1F1C0.dl.inc.c>
};

/* DObjDLLink @ 0xF0 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x1F260[] = {
	{ 1, dMVCommon_DL_0x1F1C0 },
	{ 4, NULL },
};

/* DObjDesc: RoomCloseUpEffectGroundDObjDesc @ 0x1F270 (3 entries) */
DObjDesc dMVCommon_RoomCloseUpEffectGroundDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMVCommon_DLLink_0x1F260, { -1088.539794921875f, 2116.986328125f, -3612.323974609375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x1F2F4 to 0x1F330 (60 bytes) */
u32 dMVCommon_RoomCloseUpEffectGroundMatAnimJoint_MatAnimJoint[15] = {
	#include <MVCommon/RoomCloseUpEffectGroundMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x1F330 to 0x1F790 (1120 bytes) */
u32 dMVCommon_RoomCloseUpEffectGroundAnimJoint_AnimJoint[280] = {
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
u32 dMVCommon_RoomBossShadowAnimJoint_AnimJoint[727] = {
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
/* gap sub-block @ 0x204F8 (was gap+0x0, 32 bytes) */
u8 dMVCommon_gap_0x204F8[32] = {
	#include <MVCommon/gap_0x204F8.data.inc.c>
};

/* gap sub-block @ 0x20518 (was gap+0x20, 120 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x20[120] = {
	#include <MVCommon/gap_0x204F8_sub_0x20.data.inc.c>
};

/* gap sub-block @ 0x20590 (was gap+0x98, 120 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x98[120] = {
	#include <MVCommon/gap_0x204F8_sub_0x98.data.inc.c>
};

/* gap sub-block @ 0x20608 (was gap+0x110, 120 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x110[120] = {
	#include <MVCommon/gap_0x204F8_sub_0x110.data.inc.c>
};

/* gap sub-block @ 0x20680 (was gap+0x188, 120 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x188[120] = {
	#include <MVCommon/gap_0x204F8_sub_0x188.data.inc.c>
};

/* gap sub-block @ 0x206F8 (was gap+0x200, 120 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x200[120] = {
	#include <MVCommon/gap_0x204F8_sub_0x200.data.inc.c>
};

/* gap sub-block @ 0x20770 (was gap+0x278, 8 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x278[8] = {
	#include <MVCommon/gap_0x204F8_sub_0x278.data.inc.c>
};

/* gap sub-block @ 0x20778 (was gap+0x280, 16 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x280[16] = {
	#include <MVCommon/gap_0x204F8_sub_0x280.data.inc.c>
};

/* gap sub-block @ 0x20788 (was gap+0x290, 16 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x290[16] = {
	#include <MVCommon/gap_0x204F8_sub_0x290.data.inc.c>
};

/* gap sub-block @ 0x20798 (was gap+0x2A0, 128 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x2A0[128] = {
	#include <MVCommon/gap_0x204F8_sub_0x2A0.data.inc.c>
};

/* gap sub-block @ 0x20818 (was gap+0x320, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x320[64] = {
	#include <MVCommon/gap_0x204F8_sub_0x320.data.inc.c>
};

/* gap sub-block @ 0x20858 (was gap+0x360, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x360[64] = {
	#include <MVCommon/gap_0x204F8_sub_0x360.data.inc.c>
};

/* gap sub-block @ 0x20898 (was gap+0x3A0, 288 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x3A0[288] = {
	#include <MVCommon/gap_0x204F8_sub_0x3A0.data.inc.c>
};

/* gap sub-block @ 0x209B8 (was gap+0x4C0, 128 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x4C0[128] = {
	#include <MVCommon/gap_0x204F8_sub_0x4C0.data.inc.c>
};

/* gap sub-block @ 0x20A38 (was gap+0x540, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x540[64] = {
	#include <MVCommon/gap_0x204F8_sub_0x540.data.inc.c>
};

/* gap sub-block @ 0x20A78 (was gap+0x580, 128 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x580[128] = {
	#include <MVCommon/gap_0x204F8_sub_0x580.data.inc.c>
};

/* gap sub-block @ 0x20AF8 (was gap+0x600, 128 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x600[128] = {
	#include <MVCommon/gap_0x204F8_sub_0x600.data.inc.c>
};

/* gap sub-block @ 0x20B78 (was gap+0x680, 160 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x680[160] = {
	#include <MVCommon/gap_0x204F8_sub_0x680.data.inc.c>
};

/* gap sub-block @ 0x20C18 (was gap+0x720, 160 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x720[160] = {
	#include <MVCommon/gap_0x204F8_sub_0x720.data.inc.c>
};

/* gap sub-block @ 0x20CB8 (was gap+0x7C0, 384 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x7C0[384] = {
	#include <MVCommon/gap_0x204F8_sub_0x7C0.data.inc.c>
};

/* gap sub-block @ 0x20E38 (was gap+0x940, 224 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x940[224] = {
	#include <MVCommon/gap_0x204F8_sub_0x940.data.inc.c>
};

/* gap sub-block @ 0x20F18 (was gap+0xA20, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xA20[64] = {
	#include <MVCommon/gap_0x204F8_sub_0xA20.data.inc.c>
};

/* gap sub-block @ 0x20F58 (was gap+0xA60, 80 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xA60[80] = {
	#include <MVCommon/gap_0x204F8_sub_0xA60.data.inc.c>
};

/* gap sub-block @ 0x20FA8 (was gap+0xAB0, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xAB0[64] = {
	#include <MVCommon/gap_0x204F8_sub_0xAB0.data.inc.c>
};

/* gap sub-block @ 0x20FE8 (was gap+0xAF0, 128 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xAF0[128] = {
	#include <MVCommon/gap_0x204F8_sub_0xAF0.data.inc.c>
};

/* gap sub-block @ 0x21068 (was gap+0xB70, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xB70[64] = {
	#include <MVCommon/gap_0x204F8_sub_0xB70.data.inc.c>
};

/* gap sub-block @ 0x210A8 (was gap+0xBB0, 256 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xBB0[256] = {
	#include <MVCommon/gap_0x204F8_sub_0xBB0.data.inc.c>
};

/* gap sub-block @ 0x211A8 (was gap+0xCB0, 96 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xCB0[96] = {
	#include <MVCommon/gap_0x204F8_sub_0xCB0.data.inc.c>
};

/* gap sub-block @ 0x21208 (was gap+0xD10, 256 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xD10[256] = {
	#include <MVCommon/gap_0x204F8_sub_0xD10.data.inc.c>
};

/* gap sub-block @ 0x21308 (was gap+0xE10, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xE10[64] = {
	#include <MVCommon/gap_0x204F8_sub_0xE10.data.inc.c>
};

/* gap sub-block @ 0x21348 (was gap+0xE50, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xE50[64] = {
	#include <MVCommon/gap_0x204F8_sub_0xE50.data.inc.c>
};

/* gap sub-block @ 0x21388 (was gap+0xE90, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xE90[64] = {
	#include <MVCommon/gap_0x204F8_sub_0xE90.data.inc.c>
};

/* gap sub-block @ 0x213C8 (was gap+0xED0, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xED0[64] = {
	#include <MVCommon/gap_0x204F8_sub_0xED0.data.inc.c>
};

/* gap sub-block @ 0x21408 (was gap+0xF10, 128 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xF10[128] = {
	#include <MVCommon/gap_0x204F8_sub_0xF10.data.inc.c>
};

/* gap sub-block @ 0x21488 (was gap+0xF90, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xF90[64] = {
	#include <MVCommon/gap_0x204F8_sub_0xF90.data.inc.c>
};

/* gap sub-block @ 0x214C8 (was gap+0xFD0, 128 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0xFD0[128] = {
	#include <MVCommon/gap_0x204F8_sub_0xFD0.data.inc.c>
};

/* gap sub-block @ 0x21548 (was gap+0x1050, 32 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x1050[32] = {
	#include <MVCommon/gap_0x204F8_sub_0x1050.data.inc.c>
};

/* gap sub-block @ 0x21568 (was gap+0x1070, 48 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x1070[48] = {
	#include <MVCommon/gap_0x204F8_sub_0x1070.data.inc.c>
};

/* gap sub-block @ 0x21598 (was gap+0x10A0, 48 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x10A0[48] = {
	#include <MVCommon/gap_0x204F8_sub_0x10A0.data.inc.c>
};

/* gap sub-block @ 0x215C8 (was gap+0x10D0, 32 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x10D0[32] = {
	#include <MVCommon/gap_0x204F8_sub_0x10D0.data.inc.c>
};

/* gap sub-block @ 0x215E8 (was gap+0x10F0, 128 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x10F0[128] = {
	#include <MVCommon/gap_0x204F8_sub_0x10F0.data.inc.c>
};

/* gap sub-block @ 0x21668 (was gap+0x1170, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x1170[64] = {
	#include <MVCommon/gap_0x204F8_sub_0x1170.data.inc.c>
};

/* gap sub-block @ 0x216A8 (was gap+0x11B0, 64 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x11B0[64] = {
	#include <MVCommon/gap_0x204F8_sub_0x11B0.data.inc.c>
};

/* gap sub-block @ 0x216E8 (was gap+0x11F0, 88 bytes) */
Gfx dMVCommon_DL_0x216E8[11] = {
	#include <MVCommon/DL_0x216E8.dl.inc.c>
};

/* gap sub-block @ 0x21740 (was gap+0x1248, 232 bytes) */
Gfx dMVCommon_DL_0x21740[29] = {
	#include <MVCommon/DL_0x21740.dl.inc.c>
};

/* gap sub-block @ 0x21828 (was gap+0x1330, 232 bytes) */
Gfx dMVCommon_DL_0x21828[29] = {
	#include <MVCommon/DL_0x21828.dl.inc.c>
};

/* gap sub-block @ 0x21910 (was gap+0x1418, 576 bytes) */
Gfx dMVCommon_DL_0x21910[72] = {
	#include <MVCommon/DL_0x21910.dl.inc.c>
};

/* gap sub-block @ 0x21B50 (was gap+0x1658, 840 bytes) */
Gfx dMVCommon_DL_0x21B50[105] = {
	#include <MVCommon/DL_0x21B50.dl.inc.c>
};

/* gap sub-block @ 0x21E98 (was gap+0x19A0, 480 bytes) */
Gfx dMVCommon_DL_0x21E98[60] = {
	#include <MVCommon/DL_0x21E98.dl.inc.c>
};

/* gap sub-block @ 0x22078 (was gap+0x1B80, 144 bytes) */
Gfx dMVCommon_DL_0x22078[18] = {
	#include <MVCommon/DL_0x22078.dl.inc.c>
};

/* gap sub-block @ 0x22108 (was gap+0x1C10, 88 bytes) */
Gfx dMVCommon_DL_0x22108[11] = {
	#include <MVCommon/DL_0x22108.dl.inc.c>
};

/* gap sub-block @ 0x22160 (was gap+0x1C68, 144 bytes) */
Gfx dMVCommon_DL_0x22160[18] = {
	#include <MVCommon/DL_0x22160.dl.inc.c>
};

/* gap sub-block @ 0x221F0 (was gap+0x1CF8, 256 bytes) */
Gfx dMVCommon_DL_0x221F0[32] = {
	#include <MVCommon/DL_0x221F0.dl.inc.c>
};

/* gap sub-block @ 0x222F0 (was gap+0x1DF8, 200 bytes) */
Gfx dMVCommon_DL_0x222F0[25] = {
	#include <MVCommon/DL_0x222F0.dl.inc.c>
};

/* DObjDLLink @ 0x1EC0 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x223B8[] = {
	{ 1, dMVCommon_DL_0x22108 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x1ED0 (2 entries) */
DObjDLLink dMVCommon_DLLink_0x223C8[] = {
	{ 0, dMVCommon_DL_0x216E8 },
	{ 4, NULL },
};

/* gap sub-block @ 0x223D8 (was gap+0x1EE0, 24 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x1EE0[24] = {
	#include <MVCommon/gap_0x204F8_sub_0x1EE0.data.inc.c>
};

/* gap sub-block @ 0x223F0 (was gap+0x1EF8, 16 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x1EF8[16] = {
	#include <MVCommon/gap_0x204F8_sub_0x1EF8.data.inc.c>
};

/* gap sub-block @ 0x22400 (was gap+0x1F08, 16 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x1F08[16] = {
	#include <MVCommon/gap_0x204F8_sub_0x1F08.data.inc.c>
};

/* gap sub-block @ 0x22410 (was gap+0x1F18, 16 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x1F18[16] = {
	#include <MVCommon/gap_0x204F8_sub_0x1F18.data.inc.c>
};

/* gap sub-block @ 0x22420 (was gap+0x1F28, 16 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x1F28[16] = {
	#include <MVCommon/gap_0x204F8_sub_0x1F28.data.inc.c>
};

/* gap sub-block @ 0x22430 (was gap+0x1F38, 16 bytes) */
u8 dMVCommon_gap_0x204F8_sub_0x1F38[16] = {
	#include <MVCommon/gap_0x204F8_sub_0x1F38.data.inc.c>
};

/* DObjDesc: RoomDeskGroundDObjDesc @ 0x22440 (3 entries) */
DObjDesc dMVCommon_RoomDeskGroundDObjDesc[] = {
	{ 0, (void*)dMVCommon_DLLink_0x223B8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMVCommon_DLLink_0x223C8, { 371.76104736328125f, 2151.7734375f, -4845.66650390625f }, { 0.0f, 0.0f, 0.6999989748001099f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_gap_0x204F8 + 0x1EE0), { 524.3055419921875f, 1936.9608154296875f, -4229.2109375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
};

/* Raw data from file offset 0x224C4 to 0x225CC (264 bytes) */
u8 dMVCommon_gap_0x224C4[264] = {
	#include <MVCommon/gap_0x224C4.data.inc.c>
};

/* Raw data from file offset 0x225CC to 0x22C90 (1732 bytes) */
u32 dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint[433] = {
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
/* gap sub-block @ 0x22D08 (was gap+0x0, 8 bytes) */
u8 dMVCommon_gap_0x22D08[8] = {
	#include <MVCommon/gap_0x22D08.data.inc.c>
};

/* gap sub-block @ 0x22D10 (was gap+0x8, 120 bytes) */
u8 dMVCommon_gap_0x22D08_sub_0x8[120] = {
	#include <MVCommon/gap_0x22D08_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x22D88 (was gap+0x80, 16 bytes) */
u8 dMVCommon_gap_0x22D08_sub_0x80[16] = {
	#include <MVCommon/gap_0x22D08_sub_0x80.data.inc.c>
};

/* gap sub-block @ 0x22D98 (was gap+0x90, 64 bytes) */
u8 dMVCommon_gap_0x22D08_sub_0x90[64] = {
	#include <MVCommon/gap_0x22D08_sub_0x90.data.inc.c>
};

/* gap sub-block @ 0x22DD8 (was gap+0xD0, 64 bytes) */
u8 dMVCommon_gap_0x22D08_sub_0xD0[64] = {
	#include <MVCommon/gap_0x22D08_sub_0xD0.data.inc.c>
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
u32 dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint[1212] = {
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

