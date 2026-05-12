/* relocData file 52: MVCommon */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros
extern u8 dMVCommon_gap_0x1DD18[];
extern u8 dMVCommon_gap_0x1F170[];

extern MObjSub *dMVCommon_gap_0x1DD18_sub_0x10[];
extern MObjSub *dMVCommon_gap_0x1F170_sub_0x8[];

extern u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data[];
extern u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x14[];
extern u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x28[];
extern u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x3C[];
extern u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x50[];
extern u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x64[];
extern u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x78[];
extern AObjEvent32 *dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x8C[];
extern u32 dMVCommon_RoomBooksAnimJoint_AnimJoint_data[];
extern u32 dMVCommon_RoomPencilsAnimJoint_AnimJoint_data[];
extern u32 dMVCommon_RoomLampAnimJoint_AnimJoint_data[];
extern u32 dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data[];
extern u32 dMVCommon_RoomSnapAnimJoint_AnimJoint_data[];
extern u32 dMVCommon_RoomCloseUpEffectAirMatAnimJoint_MatAnimJoint_0x1DFE4[];
extern AObjEvent32 *dMVCommon_RoomCloseUpEffectAirMatAnimJoint_MatAnimJoint_0x1E008[];

extern u32 dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint_data[];
extern u32 dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint_data_at_0xC[];
extern u32 dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint_data_at_0x60[];
extern u8 dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint_data_at_0xDC[];
extern u32 dMVCommon_RoomCloseUpEffectGroundMatAnimJoint_MatAnimJoint_0x1F2FC[];
extern u32 dMVCommon_RoomCloseUpEffectGroundMatAnimJoint_MatAnimJoint_0x1F328[];

extern u32 dMVCommon_RoomCloseUpEffectGroundAnimJoint_AnimJoint_data[];
extern u32 dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data[];
extern u32 dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data[];
extern AObjEvent32 **dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint[];
extern AObjEvent32 *dMVCommon_RoomBooksAnimJoint_AnimJoint[];
extern AObjEvent32 *dMVCommon_RoomPencilsAnimJoint_AnimJoint[];
extern AObjEvent32 *dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint[];

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
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

PAD(8);

/* gap sub-block @ 0x0058 (was gap+0x8, 40 bytes) */
u16 dMVCommon_gap_0x0050_sub_0x8[20] = {
	#include <MVCommon/gap_0x0050_sub_0x8.palette.inc.c>
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
u16 dMVCommon_Lut227_0x01E8[232] = {
	#include <MVCommon/Lut227_0x01E8.palette.inc.c>
};

/* Raw data from file offset 0x03B8 to 0x0598 (480 bytes) */
u16 dMVCommon_Lut213_0x03B8[240] = {
	#include <MVCommon/Lut213_0x03B8.palette.inc.c>
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
/* @tex fmt=CI4 dim=16x32 lut=dMVCommon_Lut_0x0008_palette */
u8 dMVCommon_Tex_0x0638[256] = {
	#include <MVCommon/Tex_0x0638.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x0740 (2056 bytes) */
/* @tex fmt=RGBA16 dim=32x32 */
u8 dMVCommon_Tex_0x0740[2048] = {
	#include <MVCommon/Tex_0x0740.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x0F48 (272 bytes) */
/* u8: dMVCommon_Tex_0x0F48 (136 u8) */
u8 dMVCommon_Tex_0x0F48[136] = {
	#include <MVCommon/Tex_0x0F48.tex.inc.c>
};

/* u8: dMVCommon_Tex_0x0F48_at_0x88 (136 u8) */
u8 dMVCommon_Tex_0x0F48_at_0x88[136] = {
	#include <MVCommon/Tex_0x0F48_at_0x88.tex.inc.c>
};

/* Texture data @ 0x1058 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dMVCommon_Lut_0x0080_palette */
u8 dMVCommon_Tex_0x1058[136] = {
	#include <MVCommon/Tex_0x1058.tex.inc.c>
};

/* Texture data @ 0x10E0 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dMVCommon_Lut_0x00A8_palette */
u8 dMVCommon_Tex_0x10E0[72] = {
	#include <MVCommon/Tex_0x10E0.tex.inc.c>
};

/* Texture data @ 0x1128 (264 bytes) */
/* @tex fmt=CI4 dim=16x32 lut=dMVCommon_Lut_0x00D0_palette */
u8 dMVCommon_Tex_0x1128[256] = {
	#include <MVCommon/Tex_0x1128.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x1230 (264 bytes) */
/* @tex fmt=CI4 dim=32x16 lut=dMVCommon_Lut_0x00F8_palette */
u8 dMVCommon_Tex_0x1230[256] = {
	#include <MVCommon/Tex_0x1230.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x1338 (264 bytes) */
/* @tex fmt=CI4 dim=32x16 lut=dMVCommon_Lut_0x0120_palette */
u8 dMVCommon_Tex_0x1338[256] = {
	#include <MVCommon/Tex_0x1338.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x1440 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dMVCommon_Lut_0x0148_palette */
u8 dMVCommon_Tex_0x1440[136] = {
	#include <MVCommon/Tex_0x1440.tex.inc.c>
};

/* Texture data @ 0x14C8 (520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dMVCommon_Lut_0x0170_palette */
u8 dMVCommon_Tex_0x14C8[512] = {
	#include <MVCommon/Tex_0x14C8.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x16D0 (520 bytes) */
/* @tex fmt=RGBA16 dim=16x16 */
u8 dMVCommon_Tex_0x16D0[512] = {
	#include <MVCommon/Tex_0x16D0.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x18D8 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dMVCommon_Lut_0x0198_palette */
u8 dMVCommon_Tex_0x18D8[128] = {
	#include <MVCommon/Tex_0x18D8.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x1960 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dMVCommon_Lut_0x01C0_palette */
u8 dMVCommon_Tex_0x1960[128] = {
	#include <MVCommon/Tex_0x1960.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x19E8 (2056 bytes) */
/* @tex fmt=CI8 dim=32x64 lut=dMVCommon_Lut227_0x01E8 */
u8 dMVCommon_Tex_0x19E8[2048] = {
	#include <MVCommon/Tex_0x19E8.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x21F0 (3088 bytes) */
/* @tex fmt=CI8 dim=32x64 lut=dMVCommon_Lut213_0x03B8 */
u8 dMVCommon_Tex_0x21F0[3088] = {
	#include <MVCommon/Tex_0x21F0.tex.inc.c>
};

/* Texture data @ 0x2E00 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dMVCommon_Lut_0x0598_palette */
u8 dMVCommon_Tex_0x2E00[128] = {
	#include <MVCommon/Tex_0x2E00.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x2E88 (96 bytes) */
/* @tex fmt=CI4 dim=16x11 lut=dMVCommon_Lut_0x05C0_palette */
u8 dMVCommon_Tex_0x2E88[96] = {
	#include <MVCommon/Tex_0x2E88.tex.inc.c>
};

/* Texture data @ 0x2EE8 (520 bytes) */
/* @tex fmt=CI8 dim=16x32 lut=dMVCommon_Lut_0x05E8_palette */
u8 dMVCommon_Tex_0x2EE8[512] = {
	#include <MVCommon/Tex_0x2EE8.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x30F0 (520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dMVCommon_Lut_0x0610_palette */
u8 dMVCommon_Tex_0x30F0[512] = {
	#include <MVCommon/Tex_0x30F0.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x32F8 (4096 bytes) */
/* @tex fmt=RGBA16 dim=64x32 */
u8 dMVCommon_Tex_0x32F8[4096] = {
	#include <MVCommon/Tex_0x32F8.tex.inc.c>
};

/* MObjSub: RoomBackgroundMObjSub @ 0x42F8 */
MObjSub dMVCommon_RoomBackgroundMObjSub_MObjSub[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
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
	}
};

/* Raw data from file offset 0x4370 to 0x7E98 (15144 bytes) */
/* Leading 44 zero bytes + 5-entry MObjSub** table at offset 0x2C
 * (NULL slot at index 2) + trailing 24 zero bytes. User hypothesised
 * MObjSub but the 0x78-byte layout doesn't fit — chain pointers at
 * +0x2C/0x30/0x38/0x3C look like a palettes-style MObjSub pointer
 * table. */
PAD(44);

extern MObjSub *dMVCommon_gap_0x4370_sub_0x3B8[];
extern MObjSub *dMVCommon_gap_0x4370_sub_0x3C0[];
extern MObjSub *dMVCommon_gap_0x4370_sub_0x3C8[];
extern MObjSub *dMVCommon_gap_0x4370_sub_0x3D0[];

/* MObjSub **[5] @ 0x4370+0x2C. */
MObjSub **dMVCommon_gap_0x4370_palettes[5] = {
	(MObjSub **)dMVCommon_gap_0x4370_sub_0x3B8,
	(MObjSub **)dMVCommon_gap_0x4370_sub_0x3C0,
	NULL,
	(MObjSub **)dMVCommon_gap_0x4370_sub_0x3C8,
	(MObjSub **)dMVCommon_gap_0x4370_sub_0x3D0,
};

PAD(24);

/* MObjSub @ 0x43C8 */
MObjSub dMVCommon_gap_0x4370_sub_0x58[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x00E0, 0x00A0,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x02, 0x00,
		0x0010,
		0x0010, 0x00E0, 0x00A0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xF1, 0xEE, 0xF1, 0x00 } },
		{ { 0xE2, 0xE4, 0xE6, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4440 */
MObjSub dMVCommon_gap_0x4370_sub_0xD0[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x00E0, 0x00A0,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x02, 0x00,
		0x0010,
		0x0010, 0x00E0, 0x00A0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xF1, 0xEE, 0xF1, 0x00 } },
		{ { 0xE2, 0xE4, 0xE6, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x44B8 */
MObjSub dMVCommon_gap_0x4370_sub_0x148[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x00E0, 0x00A0,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x02, 0x00,
		0x0010,
		0x0010, 0x00E0, 0x00A0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xF1, 0xEE, 0xF1, 0x00 } },
		{ { 0xE2, 0xE4, 0xE6, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4530 */
MObjSub dMVCommon_gap_0x4370_sub_0x1C0[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0020, 0x0003, 0x0020, 0x0020,
		0,
		-0.033243000507354736f, -0.033243000507354736f,
		1.0664869546890259f, 1.0664869546890259f,
		-0.033243000507354736f, 1.0664869546890259f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0020,
		0x0020, 0x0020, 0x0020,
		-0.033243000507354736f, -0.033243000507354736f,
		-0.033243000507354736f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xCC, 0xCC, 0xCC, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x45A8 */
MObjSub dMVCommon_gap_0x4370_sub_0x238[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0020, 0x0003, 0x0020, 0x0020,
		0,
		-0.033243000507354736f, -0.033243000507354736f,
		1.0664869546890259f, 1.0664869546890259f,
		-0.033243000507354736f, 1.0664869546890259f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0020,
		0x0020, 0x0020, 0x0020,
		-0.033243000507354736f, -0.033243000507354736f,
		-0.033243000507354736f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xCC, 0xCC, 0xCC, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4620 */
MObjSub dMVCommon_gap_0x4370_sub_0x2B0[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0010, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x02, 0x00,
		0x0010,
		0x0020, 0x0010, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x4698 */
MObjSub dMVCommon_gap_0x4370_sub_0x328[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0002, 0x0010, 0x0020,
		0,
		0.1103999987244606f, 0.0f,
		1.0f, 1.0f,
		0.1103999987244606f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x02, 0x00,
		0x0010,
		0x0020, 0x0010, 0x0020,
		0.1103999987244606f, 0.0f,
		0.1103999987244606f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x4710 (was gap+0x3A0, 8 bytes) */
MObjSub *dMVCommon_gap_0x4370_sub_0x3A0[2] = {
	(MObjSub *)dMVCommon_gap_0x4370_sub_0x58,
	NULL,
};

/* gap sub-block @ 0x4718 (was gap+0x3A8, 8 bytes) */
MObjSub *dMVCommon_gap_0x4370_sub_0x3A8[2] = {
	(MObjSub *)dMVCommon_gap_0x4370_sub_0xD0,
	NULL,
};

/* gap sub-block @ 0x4720 (was gap+0x3B0, 8 bytes) */
MObjSub *dMVCommon_gap_0x4370_sub_0x3B0[2] = {
	(MObjSub *)dMVCommon_gap_0x4370_sub_0x148,
	NULL,
};

/* gap sub-block @ 0x4728 (was gap+0x3B8, 8 bytes) */
MObjSub *dMVCommon_gap_0x4370_sub_0x3B8[2] = {
	(MObjSub *)dMVCommon_gap_0x4370_sub_0x1C0,
	NULL,
};

/* gap sub-block @ 0x4730 (was gap+0x3C0, 8 bytes) */
MObjSub *dMVCommon_gap_0x4370_sub_0x3C0[2] = {
	(MObjSub *)dMVCommon_gap_0x4370_sub_0x238,
	NULL,
};

/* gap sub-block @ 0x4738 (was gap+0x3C8, 8 bytes) */
MObjSub *dMVCommon_gap_0x4370_sub_0x3C8[2] = {
	(MObjSub *)dMVCommon_gap_0x4370_sub_0x2B0,
	NULL,
};

/* gap sub-block @ 0x4740 (was gap+0x3D0, 8 bytes) */
MObjSub *dMVCommon_gap_0x4370_sub_0x3D0[2] = {
	(MObjSub *)dMVCommon_gap_0x4370_sub_0x328,
	NULL,
};

/* gap sub-block @ 0x4748 (was gap+0x3D8, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x3D8[4] = {
	#include <MVCommon/gap_0x4370_sub_0x3D8.vtx.inc.c>
};

/* gap sub-block @ 0x4788 (was gap+0x418, 256 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x418[16] = {
	#include <MVCommon/gap_0x4370_sub_0x418.vtx.inc.c>
};

/* gap sub-block @ 0x4888 (was gap+0x518, 192 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x518[12] = {
	#include <MVCommon/gap_0x4370_sub_0x518.vtx.inc.c>
};

/* gap sub-block @ 0x4948 (was gap+0x5D8, 48 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x5D8[3] = {
	#include <MVCommon/gap_0x4370_sub_0x5D8.vtx.inc.c>
};

/* gap sub-block @ 0x4978 (was gap+0x608, 224 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x608[14] = {
	#include <MVCommon/gap_0x4370_sub_0x608.vtx.inc.c>
};

/* gap sub-block @ 0x4A58 (was gap+0x6E8, 192 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x6E8[12] = {
	#include <MVCommon/gap_0x4370_sub_0x6E8.vtx.inc.c>
};

/* gap sub-block @ 0x4B18 (was gap+0x7A8, 48 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x7A8[3] = {
	#include <MVCommon/gap_0x4370_sub_0x7A8.vtx.inc.c>
};

/* gap sub-block @ 0x4B48 (was gap+0x7D8, 320 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x7D8[20] = {
	#include <MVCommon/gap_0x4370_sub_0x7D8.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x4370_sub_0x918 (7 Vtx) */
Vtx dMVCommon_gap_0x4370_sub_0x918[7] = {
	#include <MVCommon/gap_0x4370_sub_0x918.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x4370_sub_0x988 (5 Vtx) */
Vtx dMVCommon_gap_0x4370_sub_0x988[5] = {
	#include <MVCommon/gap_0x4370_sub_0x988.vtx.inc.c>
};

/* gap sub-block @ 0x4D48 (was gap+0x9D8, 176 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x9D8[11] = {
	#include <MVCommon/gap_0x4370_sub_0x9D8.vtx.inc.c>
};

/* gap sub-block @ 0x4DF8 (was gap+0xA88, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xA88[4] = {
	#include <MVCommon/gap_0x4370_sub_0xA88.vtx.inc.c>
};

/* gap sub-block @ 0x4E38 (was gap+0xAC8, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xAC8[4] = {
	#include <MVCommon/gap_0x4370_sub_0xAC8.vtx.inc.c>
};

/* gap sub-block @ 0x4E78 (was gap+0xB08, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xB08[4] = {
	#include <MVCommon/gap_0x4370_sub_0xB08.vtx.inc.c>
};

/* gap sub-block @ 0x4EB8 (was gap+0xB48, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xB48[4] = {
	#include <MVCommon/gap_0x4370_sub_0xB48.vtx.inc.c>
};

/* gap sub-block @ 0x4EF8 (was gap+0xB88, 128 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xB88[8] = {
	#include <MVCommon/gap_0x4370_sub_0xB88.vtx.inc.c>
};

/* gap sub-block @ 0x4F78 (was gap+0xC08, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xC08[4] = {
	#include <MVCommon/gap_0x4370_sub_0xC08.vtx.inc.c>
};

/* gap sub-block @ 0x4FB8 (was gap+0xC48, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xC48[4] = {
	#include <MVCommon/gap_0x4370_sub_0xC48.vtx.inc.c>
};

/* gap sub-block @ 0x4FF8 (was gap+0xC88, 128 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xC88[8] = {
	#include <MVCommon/gap_0x4370_sub_0xC88.vtx.inc.c>
};

/* gap sub-block @ 0x5078 (was gap+0xD08, 128 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xD08[8] = {
	#include <MVCommon/gap_0x4370_sub_0xD08.vtx.inc.c>
};

/* gap sub-block @ 0x50F8 (was gap+0xD88, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xD88[4] = {
	#include <MVCommon/gap_0x4370_sub_0xD88.vtx.inc.c>
};

/* gap sub-block @ 0x5138 (was gap+0xDC8, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xDC8[4] = {
	#include <MVCommon/gap_0x4370_sub_0xDC8.vtx.inc.c>
};

/* gap sub-block @ 0x5178 (was gap+0xE08, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xE08[4] = {
	#include <MVCommon/gap_0x4370_sub_0xE08.vtx.inc.c>
};

/* gap sub-block @ 0x51B8 (was gap+0xE48, 192 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xE48[12] = {
	#include <MVCommon/gap_0x4370_sub_0xE48.vtx.inc.c>
};

/* gap sub-block @ 0x5278 (was gap+0xF08, 224 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xF08[14] = {
	#include <MVCommon/gap_0x4370_sub_0xF08.vtx.inc.c>
};

/* gap sub-block @ 0x5358 (was gap+0xFE8, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0xFE8[4] = {
	#include <MVCommon/gap_0x4370_sub_0xFE8.vtx.inc.c>
};

/* gap sub-block @ 0x5398 (was gap+0x1028, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x1028[4] = {
	#include <MVCommon/gap_0x4370_sub_0x1028.vtx.inc.c>
};

/* gap sub-block @ 0x53D8 (was gap+0x1068, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x1068[4] = {
	#include <MVCommon/gap_0x4370_sub_0x1068.vtx.inc.c>
};

/* gap sub-block @ 0x5418 (was gap+0x10A8, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x10A8[4] = {
	#include <MVCommon/gap_0x4370_sub_0x10A8.vtx.inc.c>
};

/* gap sub-block @ 0x5458 (was gap+0x10E8, 128 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x10E8[8] = {
	#include <MVCommon/gap_0x4370_sub_0x10E8.vtx.inc.c>
};

/* gap sub-block @ 0x54D8 (was gap+0x1168, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x1168[4] = {
	#include <MVCommon/gap_0x4370_sub_0x1168.vtx.inc.c>
};

/* gap sub-block @ 0x5518 (was gap+0x11A8, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x11A8[4] = {
	#include <MVCommon/gap_0x4370_sub_0x11A8.vtx.inc.c>
};

/* gap sub-block @ 0x5558 (was gap+0x11E8, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x11E8[4] = {
	#include <MVCommon/gap_0x4370_sub_0x11E8.vtx.inc.c>
};

/* gap sub-block @ 0x5598 (was gap+0x1228, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x1228[4] = {
	#include <MVCommon/gap_0x4370_sub_0x1228.vtx.inc.c>
};

/* gap sub-block @ 0x55D8 (was gap+0x1268, 192 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x1268[12] = {
	#include <MVCommon/gap_0x4370_sub_0x1268.vtx.inc.c>
};

/* gap sub-block @ 0x5698 (was gap+0x1328, 128 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x1328[8] = {
	#include <MVCommon/gap_0x4370_sub_0x1328.vtx.inc.c>
};

/* gap sub-block @ 0x5718 (was gap+0x13A8, 272 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x13A8[17] = {
	#include <MVCommon/gap_0x4370_sub_0x13A8.vtx.inc.c>
};

/* gap sub-block @ 0x5828 (was gap+0x14B8, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x14B8[4] = {
	#include <MVCommon/gap_0x4370_sub_0x14B8.vtx.inc.c>
};

/* gap sub-block @ 0x5868 (was gap+0x14F8, 112 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x14F8[7] = {
	#include <MVCommon/gap_0x4370_sub_0x14F8.vtx.inc.c>
};

/* gap sub-block @ 0x58D8 (was gap+0x1568, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x1568[4] = {
	#include <MVCommon/gap_0x4370_sub_0x1568.vtx.inc.c>
};

/* gap sub-block @ 0x5918 (was gap+0x15A8, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x15A8[4] = {
	#include <MVCommon/gap_0x4370_sub_0x15A8.vtx.inc.c>
};

/* gap sub-block @ 0x5958 (was gap+0x15E8, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x15E8[4] = {
	#include <MVCommon/gap_0x4370_sub_0x15E8.vtx.inc.c>
};

/* gap sub-block @ 0x5998 (was gap+0x1628, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x1628[4] = {
	#include <MVCommon/gap_0x4370_sub_0x1628.vtx.inc.c>
};

/* gap sub-block @ 0x59D8 (was gap+0x1668, 64 bytes) */
Vtx dMVCommon_gap_0x4370_sub_0x1668[4] = {
	#include <MVCommon/gap_0x4370_sub_0x1668.vtx.inc.c>
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

/* DObjDLLink @ 0x7D28 (3 entries) */
DObjDLLink dMVCommon_gap_0x4370_sub_0x39B8[] = {
	{ 0, dMVCommon_DL_0x64C0 },
	{ 1, dMVCommon_DL_0x74A0 },
	{ 4, NULL },
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

/* DObjDLLink @ 0x7DF0 (3 entries) */
DObjDLLink dMVCommon_gap_0x4370_sub_0x3A80[] = {
	{ 0, dMVCommon_DL_0x6DD0 },
	{ 1, dMVCommon_DL_0x7840 },
	{ 4, NULL },
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
	{ 2, (void*)dMVCommon_gap_0x4370_sub_0x39B8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
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
	{ 2, (void*)dMVCommon_gap_0x4370_sub_0x3A80, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
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
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 **dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint[51] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)&dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x8C[0],
	(AObjEvent32 **)&dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x8C[1],
	(AObjEvent32 **)&dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x8C[2],
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 **)&dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x8C[3],
	(AObjEvent32 **)&dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x8C[4],
	NULL,
	(AObjEvent32 **)&dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x8C[5],
	(AObjEvent32 **)&dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x8C[6],
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};

u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x14[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x28[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x3C[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x50[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x64[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x78[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

/* AObjEvent32 *[8] pointer table @ _data+0x8C, NULL-terminated. */
AObjEvent32 *dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x8C[8] = {
	(AObjEvent32 *)dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data,
	(AObjEvent32 *)dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x14,
	(AObjEvent32 *)dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x28,
	(AObjEvent32 *)dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x3C,
	(AObjEvent32 *)dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x50,
	(AObjEvent32 *)dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x64,
	(AObjEvent32 *)dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_at_0x78,
	NULL,
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_post_data_0x0000[0x30] = {
	#include <MVCommon/RoomBackgroundMatAnimJoint_MatAnimJoint_data_post_data_0x0000.data.inc.c>
};

u8 dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_post_Tex_0x0030[0x40] = {
	#include <MVCommon/RoomBackgroundMatAnimJoint_MatAnimJoint_data_post_Tex_0x0030.tex.inc.c>
};

Vtx dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_post_Vtx_0x0070[4] = {
	#include <MVCommon/RoomBackgroundMatAnimJoint_MatAnimJoint_data_post_Vtx_0x0070.vtx.inc.c>
};

Vtx dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_post_Vtx_0x00B0[31] = {
	#include <MVCommon/RoomBackgroundMatAnimJoint_MatAnimJoint_data_post_Vtx_0x00B0.vtx.inc.c>
};

Vtx dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_post_Vtx_0x02A0[16] = {
	#include <MVCommon/RoomBackgroundMatAnimJoint_MatAnimJoint_data_post_Vtx_0x02A0.vtx.inc.c>
};

Gfx dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint_data_post_DL_0x03A0[43] = {
	#include <MVCommon/RoomBackgroundMatAnimJoint_MatAnimJoint_data_post_DL_0x03A0.dl.inc.c>
};

/* DObjDesc: RoomDesk @ 0x8DF8 (3 entries) */
DObjDesc dMVCommon_RoomDesk[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomBackgroundMatAnimJoint_MatAnimJoint + 0x518), { 554.3527221679688f, 1828.836181640625f, -4022.0712890625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x8E7C to 0x98F8 (2684 bytes) */
PAD(12);

/* gap sub-block @ 0x8E88 (was gap+0xC, 40 bytes) */
u16 dMVCommon_gap_0x8E7C_sub_0xC[20] = {
	#include <MVCommon/gap_0x8E7C_sub_0xC.palette.inc.c>
};

/* gap sub-block @ 0x8EB0 (was gap+0x34, 2048 bytes) */
/* @tex fmt=CI8 dim=64x32 lut=dMVCommon_gap_0x8E7C_sub_0xC */
u8 dMVCommon_Tex_0x8EB0[2048] = {
	#include <MVCommon/Tex_0x8EB0.tex.inc.c>
};

/* gap sub-block @ 0x96B0 (was gap+0x834, 256 bytes) */
Vtx dMVCommon_gap_0x8E7C_sub_0x834[16] = {
	#include <MVCommon/gap_0x8E7C_sub_0x834.vtx.inc.c>
};

/* gap sub-block @ 0x97B0 (was gap+0x934, 328 bytes) */
Gfx dMVCommon_DL_0x97B0[41] = {
	#include <MVCommon/DL_0x97B0.dl.inc.c>
};

/* DisplayList: RoomHaze @ 0x98F8 (2872 bytes, 359 cmds) */
Gfx dMVCommon_RoomHaze_DisplayList[359] = {
	#include <MVCommon/RoomHaze.dl.inc.c>
};

/* Gfx DL: RoomHaze_post @ 0xA430 (55 cmds) */
Gfx dMVCommon_RoomHaze_post[55] = {
	#include <MVCommon/RoomHaze_post.dl.inc.c>
};

/* Gfx DL: RoomHaze_post_post @ 0xA5E8 (34 cmds) */
Gfx dMVCommon_RoomHaze_post_post[34] = {
	#include <MVCommon/RoomHaze_post_post.dl.inc.c>
};

/* DObjDesc: RoomBooksDObjDesc @ 0xA6F8 (4 entries) */
DObjDesc dMVCommon_RoomBooksDObjDesc[] = {
	{ 0, (void*)0x00000000, { -629.3348999023438f, 2549.01708984375f, -4845.73193359375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomHaze_DisplayList + 0xAF8), { -11.84549331665039f, 0.06088300049304962f, 0.06545999646186829f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMVCommon_RoomHaze_post_post, { 1001.095947265625f, -397.24365234375f, 0.06545999646186829f }, { 0.0f, 0.0f, 0.6999989748001099f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0xA7B0 to 0xAEB8 (1800 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dMVCommon_RoomBooksAnimJoint_AnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dMVCommon_RoomBooksAnimJoint_AnimJoint_data,
	(AObjEvent32 *)((u8*)dMVCommon_RoomBooksAnimJoint_AnimJoint_data + 0x30),
};

u32 dMVCommon_RoomBooksAnimJoint_AnimJoint_data[24] = {
	aobjEvent32SetVal(0x010, 0),
	    0x44051D4B,  /* 532.4577026367188f */
	aobjEvent32SetValAfter(0x060, 0),
	    0x3D796000,  /* 0.060882568359375f */
	    0x3D861000,  /* 0.065460205078125f */
	aobjEvent32SetValBlock(0x010, 155),
	    0x44051D4B,  /* 532.4577026367188f */
	aobjEvent32SetVal0RateBlock(0x010, 15),
	    0xC13D8724,  /* -11.84549331665039f */
	aobjEvent32SetValBlock(0x010, 130),
	    0xC13D8724,  /* -11.84549331665039f */
	aobjEvent32End(),
	aobjEvent32SetVal(0x004, 0),
	    0xB4E82000,  /* -4.323665052652359e-07f */
	aobjEvent32SetValAfter(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x004, 155),
	    0xB4E82000,  /* -4.323665052652359e-07f */
	aobjEvent32SetVal0RateBlock(0x004, 15),
	    0x3F33332A,  /* 0.6999994516372681f */
	aobjEvent32SetValBlock(0x004, 130),
	    0x3F33332A,  /* 0.6999994516372681f */
	aobjEvent32End(),
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomBooksAnimJoint_AnimJoint_data_post_data_0x0000[0x5C] = {
	#include <MVCommon/RoomBooksAnimJoint_AnimJoint_data_post_data_0x0000.data.inc.c>
};

u8 dMVCommon_RoomBooksAnimJoint_AnimJoint_data_post_Tex_0x005C[0x200] = {
	#include <MVCommon/RoomBooksAnimJoint_AnimJoint_data_post_Tex_0x005C.tex.inc.c>
};

PAD(8);

u8 dMVCommon_RoomBooksAnimJoint_AnimJoint_data_post_Tex_0x0264[0x100] = {
	#include <MVCommon/RoomBooksAnimJoint_AnimJoint_data_post_Tex_0x0264.tex.inc.c>
};

Vtx dMVCommon_RoomBooksAnimJoint_AnimJoint_data_post_Vtx_0x0364[15] = {
	#include <MVCommon/RoomBooksAnimJoint_AnimJoint_data_post_Vtx_0x0364.vtx.inc.c>
};

Vtx dMVCommon_RoomBooksAnimJoint_AnimJoint_data_post_Vtx_0x0454[4] = {
	#include <MVCommon/RoomBooksAnimJoint_AnimJoint_data_post_Vtx_0x0454.vtx.inc.c>
};

Vtx dMVCommon_RoomBooksAnimJoint_AnimJoint_data_post_Vtx_0x0494[4] = {
	#include <MVCommon/RoomBooksAnimJoint_AnimJoint_data_post_Vtx_0x0494.vtx.inc.c>
};

Gfx dMVCommon_RoomBooksAnimJoint_AnimJoint_data_post_DL_0x04D4[9] = {
	#include <MVCommon/RoomBooksAnimJoint_AnimJoint_data_post_DL_0x04D4.dl.inc.c>
};

Gfx dMVCommon_RoomBooksAnimJoint_AnimJoint_data_post_DL_0x051C[19] = {
	#include <MVCommon/RoomBooksAnimJoint_AnimJoint_data_post_DL_0x051C.dl.inc.c>
};

Gfx dMVCommon_RoomBooksAnimJoint_AnimJoint_data_post_DL_0x05B4[19] = {
	#include <MVCommon/RoomBooksAnimJoint_AnimJoint_data_post_DL_0x05B4.dl.inc.c>
};

Gfx dMVCommon_RoomBooksAnimJoint_AnimJoint_data_post_DL_0x064C[10] = {
	#include <MVCommon/RoomBooksAnimJoint_AnimJoint_data_post_DL_0x064C.dl.inc.c>
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
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dMVCommon_RoomPencilsAnimJoint_AnimJoint[3] = {
	(AObjEvent32 *)dMVCommon_RoomPencilsAnimJoint_AnimJoint_data,
	(AObjEvent32 *)((u8*)dMVCommon_RoomPencilsAnimJoint_AnimJoint_data + 0x860),
	(AObjEvent32 *)((u8*)dMVCommon_RoomPencilsAnimJoint_AnimJoint_data + 0x954),
};

u32 dMVCommon_RoomPencilsAnimJoint_AnimJoint_data[666] = {
	aobjEvent32SetValBlock(0x077, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x4487FA37,  /* 1087.8192138671875f */
	    0x45108503,  /* 2312.313232421875f */
	    0xC53EB87F,  /* -3051.531005859375f */
	aobjEvent32SetValBlock(0x077, 70),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x4487FA37,  /* 1087.8192138671875f */
	    0x45108503,  /* 2312.313232421875f */
	    0xC53EB87F,  /* -3051.531005859375f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x00000000,  /* 0.0f */
	    0xBDCD2603,  /* -0.10017015784978867f */
	    0xBEE65F4C,  /* -0.4499458074569702f */
	    0xBE8D1734,  /* -0.2755676507949829f */
	    0xB28E25DC,  /* -1.654819214991221e-08f */
	    0xBD52FE6C,  /* -0.05151216685771942f */
	    0x42C8A9F6,  /* 100.33195495605469f */
	    0xC3FFBE09,  /* -511.4846496582031f */
	    0x4517F825,  /* 2431.509033203125f */
	    0x42CCCC3A,  /* 102.39888000488281f */
	    0xC53FAA1E,  /* -3066.63232421875f */
	    0xC2177351,  /* -37.862613677978516f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBE4D26B7,  /* -0.20034299790859222f */
	    0xBE1E4EFE,  /* -0.154598206281662f */
	    0xBF0D17B0,  /* -0.551142692565918f */
	    0xBDA1E112,  /* -0.07904256880283356f */
	    0xBDD2FF25,  /* -0.10302571207284927f */
	    0xBCBD63B3,  /* -0.02311882935464382f */
	    0x4281AC2C,  /* 64.83627319335938f */
	    0xC282DBA5,  /* -65.42899322509766f */
	    0x451D51D2,  /* 2517.11376953125f */
	    0x424AE1A0,  /* 50.7203369140625f */
	    0xC543741D,  /* -3127.257080078125f */
	    0xC283F8B5,  /* -65.98575592041016f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBE9E4F88,  /* -0.3092005252838135f */
	    0xBD8964C2,  /* -0.06708671152591705f */
	    0xBF1BA80E,  /* -0.6080330610275269f */
	    0xBD2D83C7,  /* -0.04236200079321861f */
	    0xBD3D645D,  /* -0.04623829200863838f */
	    0x3DC6DA14,  /* 0.09709563851356506f */
	    0xC1F438E1,  /* -30.527772903442383f */
	    0xC2F05C57,  /* -120.18035125732422f */
	    0x451E4F38,  /* 2532.951171875f */
	    0xC0076207,  /* -2.1153581142425537f */
	    0xC547E9B0,  /* -3198.60546875f */
	    0xC29480CB,  /* -74.25154876708984f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBEAB4578,  /* -0.3345143795013428f */
	    0x3FC9F73D,  /* 1.5778576135635376f */
	    0xBF22C813,  /* -0.6358653903007507f */
	    0xBF730709,  /* -0.9493260979652405f */
	    0x3DBAB377,  /* 0.09116261452436447f */
	    0xBFB5C745,  /* -1.420143723487854f */
	    0xC32F8552,  /* -175.52078247070312f */
	    0xC31CF117,  /* -156.94175720214844f */
	    0x451D0E21,  /* 2512.883056640625f */
	    0xC1DAB63B,  /* -27.338979721069336f */
	    0xC54CBC21,  /* -3275.758056640625f */
	    0xC29951CC,  /* -76.65975952148438f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x40362C82,  /* 2.846466541290283f */
	    0x3FD06B9D,  /* 1.6282840967178345f */
	    0xC0206D0E,  /* -2.5066561698913574f */
	    0xBF7463FC,  /* -0.9546506404876709f */
	    0xC038BC21,  /* -2.8864824771881104f */
	    0xBFB4C6B6,  /* -1.4123141765594482f */
	    0xC3AC3408,  /* -344.406494140625f */
	    0xC32BC912,  /* -171.78543090820312f */
	    0x451AE462,  /* 2478.27392578125f */
	    0xC20349A1,  /* -32.821903228759766f */
	    0xC5517EC4,  /* -3351.9228515625f */
	    0xC28E739E,  /* -71.22581481933594f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x403B03A4,  /* 2.9220972061157227f */
	    0x3D9D0E32,  /* 0.07668723165988922f */
	    0xC022E46D,  /* -2.545192003250122f */
	    0xBD7BBE30,  /* -0.061460673809051514f */
	    0xC02EF1B8,  /* -2.7335033416748047f */
	    0x3E074CA5,  /* 0.13212831318378448f */
	    0xC401C628,  /* -519.09619140625f */
	    0xC32EE919,  /* -174.91053771972656f */
	    0x4518F3D1,  /* 2447.238525390625f */
	    0xC1A36EA9,  /* -20.429033279418945f */
	    0xC555A362,  /* -3418.21142578125f */
	    0xC2634D61,  /* -56.825565338134766f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x403FFD6D,  /* 2.999842882156372f */
	    0x3D823FA1,  /* 0.06359792500734329f */
	    0xC0284B06,  /* -2.6295790672302246f */
	    0xBDDE55F1,  /* -0.10856235772371292f */
	    0xC027D27E,  /* -2.622222423553467f */
	    0x3D913932,  /* 0.07090987265110016f */
	    0xC42D8EDD,  /* -694.2322387695312f */
	    0xC331BE15,  /* -177.7425079345703f */
	    0x451856A5,  /* 2437.415283203125f */
	    0x4120CA81,  /* 10.049439430236816f */
	    0xC5589935,  /* -3465.575439453125f */
	    0xC2088161,  /* -34.126346588134766f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x40432796,  /* 3.0492911338806152f */
	    0x3D1FE88E,  /* 0.03904014080762863f */
	    0xC030C9BF,  /* -2.7623136043548584f */
	    0xBE21392A,  /* -0.15744462609291077f */
	    0xC025DE2E,  /* -2.5916857719421387f */
	    0xBB6349FB,  /* -0.0034681546967476606f */
	    0xC45AA4DA,  /* -874.5758056640625f */
	    0xC33C9B56,  /* -188.60678100585938f */
	    0x451A3564,  /* 2467.3369140625f */
	    0x42475505,  /* 49.83302688598633f */
	    0xC559E769,  /* -3486.463134765625f */
	    0xC1308611,  /* -11.032731056213379f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x4044FCAD,  /* 3.0779221057891846f */
	    0x3CE6038D,  /* 0.02807786501944065f */
	    0xC03C7217,  /* -2.9444634914398193f */
	    0xBE51A2CD,  /* -0.204722598195076f */
	    0xC0284423,  /* -2.6291587352752686f */
	    0xBD36EFBA,  /* -0.04466221481561661f */
	    0xC485EE15,  /* -1071.4400634765625f */
	    0xC349F423,  /* -201.9536590576172f */
	    0x451E9147,  /* 2537.079833984375f */
	    0x42A332A9,  /* 81.59894561767578f */
	    0xC559FA40,  /* -3487.640625f */
	    0x3F315C65,  /* 0.6928160786628723f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x4046BFA8,  /* 3.105447769165039f */
	    0x3CD0E1F1,  /* 0.025498362258076668f */
	    0xC04AFE2F,  /* -3.1717641353607178f */
	    0xBE7AF023,  /* -0.24505667388439178f */
	    0xC02B95B1,  /* -2.681011438369751f */
	    0xBD66EE8A,  /* -0.056379832327365875f */
	    0xC49FCFA2,  /* -1278.488525390625f */
	    0xC34AFD45,  /* -202.9893341064453f */
	    0x45246898,  /* 2630.537109375f */
	    0x42CCEFBC,  /* 102.46823120117188f */
	    0xC559D13E,  /* -3485.07763671875f */
	    0xBF90AE41,  /* -1.1303178071975708f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x40484037,  /* 3.1289193630218506f */
	    0xBFC66901,  /* -1.5500794649124146f */
	    0xC05BD037,  /* -3.4345834255218506f */
	    0xBFA1EC4B,  /* -1.2650235891342163f */
	    0xC02F7B9D,  /* -2.741919755935669f */
	    0x3FC0DE25,  /* 1.5067793130874634f */
	    0xC4B8AD92,  /* -1477.424072265625f */
	    0xC33CDCE3,  /* -188.8628387451172f */
	    0x452B604E,  /* 2742.01904296875f */
	    0x42E734E9,  /* 115.60334014892578f */
	    0xC55A1E6B,  /* -3489.901123046875f */
	    0xC1749F25,  /* -15.288853645324707f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3BAED7E7,  /* 0.005335796158760786f */
	    0xBFC73CEF,  /* -1.5565470457077026f */
	    0xC0B674EC,  /* -5.701772689819336f */
	    0xBF7B4DAE,  /* -0.9816540479660034f */
	    0x3EAA3D99,  /* 0.33250120282173157f */
	    0x3FC01639,  /* 1.5006781816482544f */
	    0xC4CF06AB,  /* -1656.2083740234375f */
	    0xC3271D0C,  /* -167.11346435546875f */
	    0x4532DBD8,  /* 2861.740234375f */
	    0x42EB7A1C,  /* 117.73849487304688f */
	    0xC55BBA7A,  /* -3515.65478515625f */
	    0xC22945AB,  /* -42.31803512573242f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3C820740,  /* 0.015872597694396973f */
	    0x3B11FE04,  /* 0.002227664925158024f */
	    0xC0ACBB48,  /* -5.397861480712891f */
	    0x3E9CF1BF,  /* 0.3065318763256073f */
	    0x3E84CED8,  /* 0.25939059257507324f */
	    0xBDA372BB,  /* -0.07980867475271225f */
	    0xC4E274AC,  /* -1811.64599609375f */
	    0xC3125CD3,  /* -146.3625946044922f */
	    0x453A17E1,  /* 2977.492431640625f */
	    0x42D854AB,  /* 108.16536712646484f */
	    0xC55F6893,  /* -3574.535888671875f */
	    0xC29D5672,  /* -78.66883850097656f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3C206B35,  /* 0.009791185148060322f */
	    0xBDC6B3E0,  /* -0.09702277183532715f */
	    0xC0A2D6A3,  /* -5.088700771331787f */
	    0x3E9C9F6F,  /* 0.3059038817882538f */
	    0x3E3107E8,  /* 0.17288172245025635f */
	    0xBE333BF1,  /* -0.1750333458185196f */
	    0xC4F39E00,  /* -1948.9375f */
	    0xC304FE87,  /* -132.99424743652344f */
	    0x4540612F,  /* 3078.073974609375f */
	    0x42B31D19,  /* 89.55683135986328f */
	    0xC5658FEA,  /* -3672.99462890625f */
	    0xC2EA273E,  /* -117.07664489746094f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBE3673A7,  /* -0.17817555367946625f */
	    0x3D9FC6B6,  /* 0.07801572978496552f */
	    0xC0992749,  /* -4.786045551300049f */
	    0x3E985B9C,  /* 0.29757392406463623f */
	    0xBDB9B6DC,  /* -0.0906808078289032f */
	    0x3BBAADF1,  /* 0.005697004962712526f */
	    0xC501DA35,  /* -2077.637939453125f */
	    0xC3006269,  /* -128.38441467285156f */
	    0x454549BC,  /* 3156.6083984375f */
	    0x4285E11F,  /* 66.93968963623047f */
	    0xC56E0B14,  /* -3808.6923828125f */
	    0xC314B64A,  /* -148.71206665039062f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3E29CCC9,  /* 0.16582025587558746f */
	    0x3E1D80F4,  /* 0.1538122296333313f */
	    0xC08FCB42,  /* -4.493561744689941f */
	    0x3E8E671D,  /* 0.278130441904068f */
	    0x3E3CB2BB,  /* 0.1842755526304245f */
	    0x3DB64F17,  /* 0.08901803940534592f */
	    0xC509DB3D,  /* -2205.702392578125f */
	    0xC3004F47,  /* -128.30967712402344f */
	    0x4548BF38,  /* 3211.951171875f */
	    0x42359C1D,  /* 45.4024543762207f */
	    0xC57826A0,  /* -3970.4140625f */
	    0xC326187A,  /* -166.09561157226562f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3E048F58,  /* 0.12945306301116943f */
	    0xBCA95D9D,  /* -0.02067452110350132f */
	    0xC0875A56,  /* -4.2297773361206055f */
	    0x3E7C1B75,  /* 0.24619849026203156f */
	    0x3DB2E891,  /* 0.08735764771699905f */
	    0xBD9B6DE6,  /* -0.07589320838451385f */
	    0xC511E42C,  /* -2334.2607421875f */
	    0xC2F9C564,  /* -124.88552856445312f */
	    0x454AF6A2,  /* 3247.41455078125f */
	    0x41DFB6A4,  /* 27.96417999267578f */
	    0xC581671B,  /* -4140.88818359375f */
	    0xC3255663,  /* -165.3374481201172f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3DFEEA7A,  /* 0.12447066605091095f */
	    0xBB2F7D75,  /* -0.0026777659077197313f */
	    0xC080097D,  /* -4.001158237457275f */
	    0x3E52C6EF,  /* 0.20583699643611908f */
	    0x3D051134,  /* 0.032487109303474426f */
	    0xBD3C929C,  /* -0.04603825509548187f */
	    0xC51977A1,  /* -2455.476806640625f */
	    0xC2DBC004,  /* -109.87503051757812f */
	    0x454C3E16,  /* 3267.88037109375f */
	    0x416D5325,  /* 14.832798957824707f */
	    0xC58668BF,  /* -4301.09326171875f */
	    0xC312A399,  /* -146.63905334472656f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3DFE26E4,  /* 0.12409761548042297f */
	    0xB9C80E0D,  /* -0.00038157441304065287f */
	    0xC0745BE8,  /* -3.8181095123291016f */
	    0x3E1EE396,  /* 0.15516504645347595f */
	    0xBB9A94D7,  /* -0.004717450123280287f */
	    0xBCF0CE69,  /* -0.029395299032330513f */
	    0xC51FA01F,  /* -2554.007568359375f */
	    0xC29B3516,  /* -77.60368347167969f */
	    0x454CD147,  /* 3277.079833984375f */
	    0x40870627,  /* 4.21950101852417f */
	    0xC58A914B,  /* -4434.16162109375f */
	    0xC2E2196E,  /* -113.04966735839844f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3DFD5A5F,  /* 0.12370752543210983f */
	    0xBA8BFD6A,  /* -0.0010680381674319506f */
	    0xC06C369B,  /* -3.6908328533172607f */
	    0x3DDB5DBC,  /* 0.10711237788200378f */
	    0xBCD77886,  /* -0.026302587240934372f */
	    0xBC8B9279,  /* -0.017037617042660713f */
	    0xC5232AE9,  /* -2610.681884765625f */
	    0xC1F59A01,  /* -30.700197219848633f */
	    0x454CC51B,  /* 3276.319091796875f */
	    0xC0D0776A,  /* -6.5145769119262695f */
	    0xC58D7984,  /* -4527.189453125f */
	    0xC29703FE,  /* -75.50779724121094f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3DF9C6F5,  /* 0.12196151167154312f */
	    0xBB1D7C37,  /* -0.0024030336644500494f */
	    0xC066A601,  /* -3.603882074356079f */
	    0x3DA07B2D,  /* 0.0783599391579628f */
	    0xBD1EE58D,  /* -0.038793135434389114f */
	    0xBC3B7BDE,  /* -0.011443106457591057f */
	    0xC523768A,  /* -2615.40869140625f */
	    0x419217E4,  /* 18.26166534423828f */
	    0x454C00CF,  /* 3264.050537109375f */
	    0xC190E4A1,  /* -18.111635208129883f */
	    0xC58F496F,  /* -4585.17919921875f */
	    0xC23C2983,  /* -47.0405387878418f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3DF38293,  /* 0.11890139430761337f */
	    0xBB71B92D,  /* -0.0036884055007249117f */
	    0xC0622EE0,  /* -3.5341110229492188f */
	    0x3D7D801B,  /* 0.06188974902033806f */
	    0xBD497A84,  /* -0.04918910562992096f */
	    0xBC1A3CB1,  /* -0.0094138840213418f */
	    0xC520E287,  /* -2574.157958984375f */
	    0x4276C667,  /* 61.69375228881836f */
	    0x454A8187,  /* 3240.095458984375f */
	    0xC1E8189C,  /* -29.01201629638672f */
	    0xC5906A2C,  /* -4621.271484375f */
	    0xC1D2C6A3,  /* -26.34699058532715f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3DEAAB71,  /* 0.11458481103181839f */
	    0xBBA09222,  /* -0.0049002328887581825f */
	    0xC05EBA08,  /* -3.480104446411133f */
	    0x3D3FCEDE,  /* 0.046828143298625946f */
	    0xBD6C0398,  /* -0.057620614767074585f */
	    0xBBF6CA10,  /* -0.007531411945819855f */
	    0xC51BC05F,  /* -2492.023193359375f */
	    0x42C78D55,  /* 99.77603912353516f */
	    0x45486070,  /* 3206.02734375f */
	    0xC219775B,  /* -38.36655807495117f */
	    0xC590EEFB,  /* -4637.87255859375f */
	    0xC101CB62,  /* -8.112154006958008f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3DDF7063,  /* 0.1091010794043541f */
	    0xBBC4E415,  /* -0.006008634809404612f */
	    0xC05C306F,  /* -3.4404561519622803f */
	    0x3D07E134,  /* 0.033173754811286926f */
	    0xBD839665,  /* -0.06425169855356216f */
	    0xBBBEDD9E,  /* -0.005824758671224117f */
	    0xC51469BE,  /* -2374.60888671875f */
	    0x43040C19,  /* 132.04725646972656f */
	    0x4545B5D1,  /* 3163.363525390625f */
	    0xC238D809,  /* -46.21097183227539f */
	    0xC590EBF7,  /* -4637.49560546875f */
	    0x40F32B0B,  /* 7.59900426864624f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3DD20ED9,  /* 0.10256738215684891f */
	    0xBBE4FDB7,  /* -0.006988252978771925f */
	    0xC05A7AFA,  /* -3.4137558937072754f */
	    0x3CAB72F4,  /* 0.02092883735895157f */
	    0xBD8DDD95,  /* -0.0692702904343605f */
	    0xBB8D3FAB,  /* -0.004310568328946829f */
	    0xC50B3ECD,  /* -2227.925048828125f */
	    0x431E2386,  /* 158.13876342773438f */
	    0x454299AA,  /* 3113.60400390625f */
	    0xC2523116,  /* -52.547935485839844f */
	    0xC5907565,  /* -4622.67431640625f */
	    0x41A64CB6,  /* 20.787456512451172f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3DC2D093,  /* 0.09512438625097275f */
	    0xBC002269,  /* -0.007820704020559788f */
	    0xC05982A0,  /* -3.3985977172851562f */
	    0x3C2564F0,  /* 0.010094866156578064f */
	    0xBD953E6A,  /* -0.07287295162677765f */
	    0xBB43F266,  /* -0.0029899119399487972f */
	    0xC500A53C,  /* -2058.3271484375f */
	    0x4331C64D,  /* 177.7746124267578f */
	    0x453F2442,  /* 3058.26611328125f */
	    0xC265728D,  /* -57.36186599731445f */
	    0xC58F9F5D,  /* -4595.92041015625f */
	    0x41FBE14C,  /* 31.485008239746094f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3DB2065E,  /* 0.08692620694637299f */
	    0xBC0B2CC5,  /* -0.008494560606777668f */
	    0xC0593032,  /* -3.393566608428955f */
	    0x3A310395,  /* 0.0006752547924406826f */
	    0xBD9A1CAF,  /* -0.07525002211332321f */
	    0xBAF2437A,  /* -0.0018483244348317385f */
	    0xC4EA0C33,  /* -1872.3812255859375f */
	    0x433EC13F,  /* 190.75486755371094f */
	    0x453B6E1D,  /* 2998.882080078125f */
	    0xC272819D,  /* -60.6265754699707f */
	    0xC58E7DA4,  /* -4559.705078125f */
	    0x421EE953,  /* 39.72785568237305f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3DA00584,  /* 0.07813552021980286f */
	    0xBC13875E,  /* -0.009004442021250725f */
	    0xC0596C80,  /* -3.397247314453125f */
	    0xBBF02773,  /* -0.007328921463340521f */
	    0xBD9CD07E,  /* -0.07656954228878021f */
	    0xBA606D84,  /* -0.00085612409748137f */
	    0xC4D19A59,  /* -1676.8233642578125f */
	    0x4344F279,  /* 196.94715881347656f */
	    0x4537903D,  /* 2937.014892578125f */
	    0xC2794090,  /* -62.31304931640625f */
	    0xC58D23BA,  /* -4516.4658203125f */
	    0x42362F11,  /* 45.545963287353516f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3D8D2467,  /* 0.06891708821058273f */
	    0xBC192704,  /* -0.00934768095612526f */
	    0xC05A205A,  /* -3.408224582672119f */
	    0xBC63FEF1,  /* -0.01391576323658228f */
	    0xBD9D9E68,  /* -0.07696229219436646f */
	    0x37F43406,  /* 2.911129195126705e-05f */
	    0xC4B8CF6A,  /* -1478.481689453125f */
	    0x43444639,  /* 196.27430725097656f */
	    0x4533A412,  /* 2874.25439453125f */
	    0xC2799040,  /* -62.390869140625f */
	    0xC58BA4E6,  /* -4468.6123046875f */
	    0x4243D425,  /* 48.95717239379883f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3D737744,  /* 0.05943991243839264f */
	    0xBC1BFA52,  /* -0.009520130231976509f */
	    0xC05B3480,  /* -3.425079345703125f */
	    0xBC9C590F,  /* -0.019085435196757317f */
	    0xBD9CB1F8,  /* -0.07651132345199585f */
	    0x3A618476,  /* 0.0008602807065472007f */
	    0xC4A088A0,  /* -1284.26953125f */
	    0x433CB466,  /* 188.70468139648438f */
	    0x452FC3B4,  /* 2812.2314453125f */
	    0xC27353D9,  /* -60.83188247680664f */
	    0xC58A1467,  /* -4418.55029296875f */
	    0x4247DE7C,  /* 49.96726989746094f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3D4C4BF3,  /* 0.049877118319272995f */
	    0xBC1BDC87,  /* -0.009513027034699917f */
	    0xC05C91BC,  /* -3.446394920349121f */
	    0xBCBB1B4C,  /* -0.022840164601802826f */
	    0xBD9A185A,  /* -0.07524175941944122f */
	    0x3ADEAC9F,  /* 0.001698870095424354f */
	    0xC489A280,  /* -1101.078125f */
	    0x432E3E0D,  /* 174.2423858642578f */
	    0x452C097B,  /* 2752.592529296875f */
	    0xC2667092,  /* -57.60993194580078f */
	    0xC588856F,  /* -4368.67919921875f */
	    0x4242480E,  /* 48.57036590576172f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3D2588BC,  /* 0.04041360318660736f */
	    0xBC188852,  /* -0.009309845045208931f */
	    0xC05E20EF,  /* -3.4707601070404053f */
	    0xBCCE4E12,  /* -0.02518371120095253f */
	    0xBD95BC8C,  /* -0.07311353087425232f */
	    0x3B2B2917,  /* 0.002611702075228095f */
	    0xC469F1ED,  /* -935.7800903320312f */
	    0x4318EBBC,  /* 152.92083740234375f */
	    0x45289029,  /* 2697.010009765625f */
	    0xC252CEB4,  /* -52.70185852050781f */
	    0xC5870B44,  /* -4321.408203125f */
	    0x42330603,  /* 44.7558708190918f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3D000787,  /* 0.031257178634405136f */
	    0xBC119323,  /* -0.008885177783668041f */
	    0xC05FCAF7,  /* -3.496762990951538f */
	    0xBCD5FBE2,  /* -0.02612108364701271f */
	    0xBD8F65BF,  /* -0.07001828402280807f */
	    0x3B707569,  /* 0.0036691075656563044f */
	    0xC446CEDE,  /* -795.2322998046875f */
	    0x43054071,  /* 133.25172424316406f */
	    0x452572FF,  /* 2647.187255859375f */
	    0xC24CD03F,  /* -51.203365325927734f */
	    0xC585B954,  /* -4279.166015625f */
	    0x4228EF11,  /* 42.233463287353516f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3CB97EE7,  /* 0.022643519565463066f */
	    0xBC066BBA,  /* -0.008204394951462746f */
	    0xC06178DB,  /* -3.5230014324188232f */
	    0xBCD231BD,  /* -0.025658482685685158f */
	    0xBD86B545,  /* -0.06577543169260025f */
	    0x3BA1EFA7,  /* 0.004941898863762617f */
	    0xC42751F7,  /* -669.2807006835938f */
	    0x42F8EF7A,  /* 124.46772766113281f */
	    0x452229AE,  /* 2594.60498046875f */
	    0xC262FD03,  /* -56.7470817565918f */
	    0xC584678A,  /* -4236.9423828125f */
	    0x42315109,  /* 44.32913589477539f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3C7347B4,  /* 0.014848638325929642f */
	    0xBBECD3B7,  /* -0.007227386813610792f */
	    0xC06313BB,  /* -3.548079252243042f */
	    0xBCC2FED2,  /* -0.023803148418664932f */
	    0xBD764FBC,  /* -0.060134634375572205f */
	    0x3BD4E1F6,  /* 0.0064966632053256035f */
	    0xC408933E,  /* -546.3006591796875f */
	    0x42EE75C4,  /* 119.23001098632812f */
	    0x451E5B1E,  /* 2533.69482421875f */
	    0xC2780267,  /* -62.00234603881836f */
	    0xC582F413,  /* -4190.50927734375f */
	    0x423AEFEC,  /* 46.73429870605469f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3C062946,  /* 0.008188551291823387f */
	    0xBBC1CC59,  /* -0.00591425271704793f */
	    0xC06484D9,  /* -3.570608377456665f */
	    0xBCA86FAB,  /* -0.020561059936881065f */
	    0xBD5831DE,  /* -0.052781932055950165f */
	    0x3C097194,  /* 0.00838889554142952f */
	    0xC3D768A4,  /* -430.8175048828125f */
	    0x42DAF7D7,  /* 109.48406219482422f */
	    0x451A6994,  /* 2470.5986328125f */
	    0xC2746F2E,  /* -61.10857391357422f */
	    0xC5817BC8,  /* -4143.47265625f */
	    0x42361F21,  /* 45.530399322509766f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x3B45EACB,  /* 0.003019976196810603f */
	    0xBB8AB70E,  /* -0.004233247600495815f */
	    0xC065B57C,  /* -3.5892019271850586f */
	    0xBC828BCC,  /* -0.015935800969600677f */
	    0xBD3196B6,  /* -0.04335661977529526f */
	    0x3C2E8D87,  /* 0.010653859935700893f */
	    0xC3A3AA31,  /* -327.3296203613281f */
	    0x42BE87A4,  /* 95.26492309570312f */
	    0x4516B79E,  /* 2411.47607421875f */
	    0xC2583E57,  /* -54.06087875366211f */
	    0xC5801B94,  /* -4099.447265625f */
	    0x4222DFB7,  /* 40.71847152709961f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xB991A7A7,  /* -0.00027781465905718505f */
	    0xBB0E589D,  /* -0.002172029810026288f */
	    0xC0668F07,  /* -3.6024796962738037f */
	    0xBC22A91F,  /* -0.009928016923367977f */
	    0xBD00EB71,  /* -0.031474534422159195f */
	    0x3C59D371,  /* 0.013295040465891361f */
	    0xC3704A62,  /* -240.29055786132812f */
	    0x42992A03,  /* 76.5820541381836f */
	    0x4513A7A8,  /* 2362.478515625f */
	    0xC223737D,  /* -40.8627815246582f */
	    0xC57DE097,  /* -4062.036865234375f */
	    0x42013525,  /* 32.30189895629883f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBAAD8AA5,  /* -0.0013240171829238534f */
	    0x3983DFDF,  /* 0.00025153064052574337f */
	    0xC066FACD,  /* -3.609057664871216f */
	    0xBB25ED1E,  /* -0.002531833481043577f */
	    0xBC895AD5,  /* -0.016766944900155067f */
	    0x3C854CB9,  /* 0.016271935775876045f */
	    0xC32E2AF7,  /* -174.16783142089844f */
	    0x4255A280,  /* 53.40869140625f */
	    0x45119C07,  /* 2329.751708984375f */
	    0xC1AC3B35,  /* -21.52890968322754f */
	    0xC57C2D82,  /* -4034.84423828125f */
	    0x41A24322,  /* 20.282779693603516f */
	aobjEvent32SetVal0RateBlock(0x077, 1),
	    0x396C31FC,  /* 0.00022525334497913718f */
	    0xC066E1FD,  /* -3.6075432300567627f */
	    0x3A8C3787,  /* 0.0010697700781747699f */
	    0xC30578C5,  /* -133.4717559814453f */
	    0x4510F6B9,  /* 2319.420166015625f */
	    0xC57B5788,  /* -4021.470703125f */
	aobjEvent32SetValBlock(0x077, 190),
	    0x396C31FC,  /* 0.00022525334497913718f */
	    0xC066E1FD,  /* -3.6075432300567627f */
	    0x3A8C3787,  /* 0.0010697700781747699f */
	    0xC30578C5,  /* -133.4717559814453f */
	    0x4510F6B9,  /* 2319.420166015625f */
	    0xC57B5788,  /* -4021.470703125f */
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x007, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x070, 0),
	    0xC1C6660F,  /* -24.799833297729492f */
	    0xC3255523,  /* -165.3325653076172f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x007, 110),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x070, 97),
	    0xC1C6660F,  /* -24.799833297729492f */
	    0xC3255523,  /* -165.3325653076172f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x070, 13),
	    0xC1C6660F,  /* -24.799833297729492f */
	    0xC0467EA1,  /* -3.1014788150787354f */
	    0xC3255523,  /* -165.3325653076172f */
	    0xC03D65CD,  /* -2.959338426589966f */
	    0x00000000,  /* 0.0f */
	    0x3F0DCDA5,  /* 0.5539191365242004f */
	aobjEvent32SetValRate(0x007, 5),
	    0x00000000,  /* 0.0f */
	    0xBC7D788B,  /* -0.015470634214580059f */
	    0x00000000,  /* 0.0f */
	    0xBB1FF3B9,  /* -0.002440674463286996f */
	    0x00000000,  /* 0.0f */
	    0xBCFF21D3,  /* -0.03114405833184719f */
	aobjEvent32SetVal0RateBlock(0x070, 5),
	    0xC2A140C3,  /* -80.6264877319336f */
	    0xC35A99C7,  /* -218.60069274902344f */
	    0x411F8760,  /* 9.970550537109375f */
	aobjEvent32SetVal(0x070, 185),
	    0xC2A140C3,  /* -80.6264877319336f */
	    0xC35A99C7,  /* -218.60069274902344f */
	    0x411F8760,  /* 9.970550537109375f */
	aobjEvent32SetValRateBlock(0x007, 5),
	    0xBE1E6B2F,  /* -0.15470574796199799f */
	    0xBC8698A0,  /* -0.016430199146270752f */
	    0xBCC7F074,  /* -0.02440664917230606f */
	    0xBB0F7DBA,  /* -0.0021895007230341434f */
	    0xBE9F74FB,  /* -0.3114393651485443f */
	    0xBD070146,  /* -0.0329601988196373f */
	aobjEvent32SetValRateBlock(0x007, 3),
	    0xBE069898,  /* -0.13144147396087646f */
	    0xBA3A99E6,  /* -0.0007118269568309188f */
	    0xBC8F7DB1,  /* -0.017515989020466805f */
	    0xB9745220,  /* -0.00023300247266888618f */
	    0xBE87013E,  /* -0.2636813521385193f */
	    0xBAC0D173,  /* -0.0014710858231410384f */
	aobjEvent32SetVal0RateBlock(0x007, 3),
	    0xBE22CACB,  /* -0.1589767187833786f */
	    0xBCD36451,  /* -0.0258046705275774f */
	    0xBEA3F9E5,  /* -0.32026591897010803f */
	aobjEvent32SetValBlock(0x007, 174),
	    0xBE22CACB,  /* -0.1589767187833786f */
	    0xBCD36451,  /* -0.0258046705275774f */
	    0xBEA3F9E5,  /* -0.32026591897010803f */
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x007, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x070, 0),
	    0xC294CC91,  /* -74.39954376220703f */
	    0xC310AA97,  /* -144.66636657714844f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x070, 110),
	    0xC294CC91,  /* -74.39954376220703f */
	    0xC310AA97,  /* -144.66636657714844f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x007, 97),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x007, 13),
	    0x00000000,  /* 0.0f */
	    0x3C935B46,  /* 0.01798785850405693f */
	    0x00000000,  /* 0.0f */
	    0xB956773F,  /* -0.00020453053002711385f */
	    0x00000000,  /* 0.0f */
	    0x3CB57A26,  /* 0.022152971476316452f */
	aobjEvent32SetValRateBlock(0x077, 5),
	    0x3EA5C6B6,  /* 0.32378166913986206f */
	    0x3D252ED9,  /* 0.040327880531549454f */
	    0xBB714631,  /* -0.0036815518978983164f */
	    0x3B6637BF,  /* 0.0035128442104905844f */
	    0x3ECC2975,  /* 0.3987537920475006f */
	    0x3D1B9C87,  /* 0.03799107298254967f */
	    0xC294CC91,  /* -74.39954376220703f */
	    0x40FD32BE,  /* 7.912444114685059f */
	    0xC310AA97,  /* -144.66636657714844f */
	    0xBF6FE84F,  /* -0.9371384978294373f */
	    0x00000000,  /* 0.0f */
	    0xC08FBEC9,  /* -4.492039203643799f */
	aobjEvent32SetVal0Rate(0x070, 7),
	    0x41A465C8,  /* 20.549697875976562f */
	    0xC31BE97A,  /* -155.91201782226562f */
	    0xC2579E20,  /* -53.9044189453125f */
	aobjEvent32SetValRateBlock(0x007, 3),
	    0x3EA52ECE,  /* 0.32262271642684937f */
	    0xB517E9B2,  /* -5.659195494445157e-07f */
	    0x3CE637B2,  /* 0.028102729469537735f */
	    0x3AA6CF65,  /* 0.0012726603308692575f */
	    0x3E9B9C7F,  /* 0.30392834544181824f */
	    0xBB788615,  /* -0.003792171599343419f */
	aobjEvent32SetValRateBlock(0x007, 3),
	    0x3EA5C644,  /* 0.32377827167510986f */
	    0x3B86366A,  /* 0.004095842130482197f */
	    0x3B81943E,  /* 0.003954439423978329f */
	    0xBB90F10A,  /* -0.004423265345394611f */
	    0x3EC08329,  /* 0.37600067257881165f */
	    0x3D2C596D,  /* 0.04207747057080269f */
	aobjEvent32SetVal0Rate(0x007, 4),
	    0x3EB3DCC3,  /* 0.3512936532497406f */
	    0xBB3B7191,  /* -0.002860162639990449f */
	    0x3F193564,  /* 0.59847092628479f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x070, 178),
	    0x41A465C8,  /* 20.549697875976562f */
	    0xC31BE97A,  /* -155.91201782226562f */
	    0xC2579E20,  /* -53.9044189453125f */
	aobjEvent32Wait(3),
	aobjEvent32SetValBlock(0x007, 175),
	    0x3EB3DCC3,  /* 0.3512936532497406f */
	    0xBB3B7191,  /* -0.002860162639990449f */
	    0x3F193564,  /* 0.59847092628479f */
	aobjEvent32End(),
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomPencilsAnimJoint_AnimJoint_data_post_data_0x0000[0x34] = {
	#include <MVCommon/RoomPencilsAnimJoint_AnimJoint_data_post_data_0x0000.data.inc.c>
};

Vtx dMVCommon_RoomPencilsAnimJoint_AnimJoint_data_post_Vtx_0x0034[13] = {
	#include <MVCommon/RoomPencilsAnimJoint_AnimJoint_data_post_Vtx_0x0034.vtx.inc.c>
};

Vtx dMVCommon_RoomPencilsAnimJoint_AnimJoint_data_post_Vtx_0x0104[4] = {
	#include <MVCommon/RoomPencilsAnimJoint_AnimJoint_data_post_Vtx_0x0104.vtx.inc.c>
};

Vtx dMVCommon_RoomPencilsAnimJoint_AnimJoint_data_post_Vtx_0x0144[4] = {
	#include <MVCommon/RoomPencilsAnimJoint_AnimJoint_data_post_Vtx_0x0144.vtx.inc.c>
};

Vtx dMVCommon_RoomPencilsAnimJoint_AnimJoint_data_post_Vtx_0x0184[12] = {
	#include <MVCommon/RoomPencilsAnimJoint_AnimJoint_data_post_Vtx_0x0184.vtx.inc.c>
};

Gfx dMVCommon_RoomPencilsAnimJoint_AnimJoint_data_post_DL_0x0244[11] = {
	#include <MVCommon/RoomPencilsAnimJoint_AnimJoint_data_post_DL_0x0244.dl.inc.c>
};

Gfx dMVCommon_RoomPencilsAnimJoint_AnimJoint_data_post_DL_0x029C[16] = {
	#include <MVCommon/RoomPencilsAnimJoint_AnimJoint_data_post_DL_0x029C.dl.inc.c>
};

Gfx dMVCommon_RoomPencilsAnimJoint_AnimJoint_data_post_DL_0x031C[8] = {
	#include <MVCommon/RoomPencilsAnimJoint_AnimJoint_data_post_DL_0x031C.dl.inc.c>
};

Gfx dMVCommon_RoomPencilsAnimJoint_AnimJoint_data_post_DL_0x035C[16] = {
	#include <MVCommon/RoomPencilsAnimJoint_AnimJoint_data_post_DL_0x035C.dl.inc.c>
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
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dMVCommon_RoomLampAnimJoint_AnimJoint[4] = {
	(AObjEvent32 *)dMVCommon_RoomLampAnimJoint_AnimJoint_data,
	NULL,
	NULL,
	NULL,
};

u32 dMVCommon_RoomLampAnimJoint_AnimJoint_data[276] = {
	aobjEvent32SetValBlock(0x077, 0),
	    0xB29EA460,  /* -1.8468369944457663e-08f */
	    0x3F21CABD,  /* 0.6319997906684875f */
	    0xB21EA460,  /* -9.234184972228832e-09f */
	    0x4515A481,  /* 2394.281494140625f */
	    0x4553AA25,  /* 3386.634033203125f */
	    0xC5819C30,  /* -4147.5234375f */
	aobjEvent32SetValBlock(0x077, 270),
	    0xB29EA460,  /* -1.8468369944457663e-08f */
	    0x3F21CABD,  /* 0.6319997906684875f */
	    0xB21EA460,  /* -9.234184972228832e-09f */
	    0x4515A481,  /* 2394.281494140625f */
	    0x4553AA25,  /* 3386.634033203125f */
	    0xC5819C30,  /* -4147.5234375f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBB2430B3,  /* -0.002505344105884433f */
	    0xBB0F757E,  /* -0.002189009916037321f */
	    0x3F1D1310,  /* 0.6135721206665039f */
	    0xBCAD5A86,  /* -0.021161329001188278f */
	    0xBC642CFF,  /* -0.013926743529736996f */
	    0xBC4BBDC1,  /* -0.012435377575457096f */
	    0x4515AC98,  /* 2394.787109375f */
	    0xBF6A3233,  /* -0.9148284792900085f */
	    0x45539466,  /* 3385.27490234375f */
	    0x4016C09C,  /* 2.35550594329834f */
	    0xC581A1A4,  /* -4148.205078125f */
	    0xBF4CF54D,  /* -0.8006179928779602f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBB8F7624,  /* -0.004378097131848335f */
	    0xBAD6E2DB,  /* -0.0016394512495025992f */
	    0x3F16F50C,  /* 0.5896766185760498f */
	    0xBCD75917,  /* -0.02628759853541851f */
	    0xBCCBBE77,  /* -0.024871094152331352f */
	    0xBC1D8CF0,  /* -0.009616121649742126f */
	    0x4515873A,  /* 2392.45166015625f */
	    0xC0753615,  /* -3.831425905227661f */
	    0x4553F586,  /* 3391.34521484375f */
	    0x410F1A4F,  /* 8.943922996520996f */
	    0xC581A8FF,  /* -4149.12451171875f */
	    0xBF862706,  /* -1.0480659008026123f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBBBD895C,  /* -0.005784196779131889f */
	    0xBAA0E836,  /* -0.001227623550221324f */
	    0x3F0F9D8C,  /* 0.560997724533081f */
	    0xBCFBB604,  /* -0.030726440250873566f */
	    0xBD07D16A,  /* -0.03315869718790054f */
	    0xBBE8C529,  /* -0.0071035814471542835f */
	    0x451531FE,  /* 2387.12451171875f */
	    0xC0DCE5ED,  /* -6.903067111968994f */
	    0x4554B29A,  /* 3403.16259765625f */
	    0x415DB0E6,  /* 13.855688095092773f */
	    0xC581B269,  /* -4150.30126953125f */
	    0xBFA8B929,  /* -1.3181506395339966f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBBDFE9EE,  /* -0.006833306513726711f */
	    0xBA6D2250,  /* -0.0009045945480465889f */
	    0x3F0739BB,  /* 0.5282246470451355f */
	    0xBD0D3590,  /* -0.03447490930557251f */
	    0xBD20104B,  /* -0.039078038185834885f */
	    0xBB9F61E0,  /* -0.004863962531089783f */
	    0x4514AA55,  /* 2378.645751953125f */
	    0xC1221E92,  /* -10.132463455200195f */
	    0x4555B0E6,  /* 3419.05615234375f */
	    0x4188CBD7,  /* 17.099531173706055f */
	    0xC581BE16,  /* -4151.7607421875f */
	    0xBFCF894A,  /* -1.6213772296905518f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBBF8D223,  /* -0.00759340962395072f */
	    0xBA2637D5,  /* -0.0006340717081911862f */
	    0x3EFBED96,  /* 0.4920470118522644f */
	    0xBD19B955,  /* -0.037530262023210526f */
	    0xBD2FAA05,  /* -0.042886752635240555f */
	    0xBB3C3EBA,  /* -0.002872391138225794f */
	    0x4513EDC0,  /* 2366.859375f */
	    0xC1582733,  /* -13.509570121765137f */
	    0x4556D5CB,  /* 3437.362060546875f */
	    0x41956EA5,  /* 18.679025650024414f */
	    0xC581CC5A,  /* -4153.5439453125f */
	    0xBFFC36A3,  /* -1.9704173803329468f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBC04BC04,  /* -0.008101467043161392f */
	    0xB9CD4A45,  /* -0.0003915598208550364f */
	    0x3EE804FF,  /* 0.45316311717033386f */
	    0xBD236521,  /* -0.03989136591553688f */
	    0xBD379837,  /* -0.044822897762060165f */
	    0xBA91B907,  /* -0.0011117764515802264f */
	    0x4512FA05,  /* 2351.626220703125f */
	    0xC18820D0,  /* -17.016021728515625f */
	    0x455806A2,  /* 3456.41455078125f */
	    0x4194C06D,  /* 18.593957901000977f */
	    0xC581DD9D,  /* -4155.70166015625f */
	    0xC0181157,  /* -2.376058340072632f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBC093DA9,  /* -0.008376517333090305f */
	    0xB92A1C60,  /* -0.00016223033890128136f */
	    0x3ED31476,  /* 0.41226547956466675f */
	    0xBD2A3824,  /* -0.041557446122169495f */
	    0xBD38C58C,  /* -0.045110270380973816f */
	    0x39DFD11B,  /* 0.0004268967022653669f */
	    0x4511CD3E,  /* 2332.82763671875f */
	    0xC1A4FF3D,  /* -20.6246280670166f */
	    0x455928CA,  /* 3474.54931640625f */
	    0x4186B857,  /* 16.840009689331055f */
	    0xC581F25E,  /* -4158.2958984375f */
	    0xC03645F6,  /* -2.848020076751709f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBC0A0CE2,  /* -0.008425923064351082f */
	    0x387F7FA4,  /* 6.0915612266398966e-05f */
	    0x3EBD7721,  /* 0.37004950642585754f */
	    0xBD2E3190,  /* -0.042527735233306885f */
	    0xBD3418F6,  /* -0.04396911710500717f */
	    0x3AE509B2,  /* 0.0017474202904850245f */
	    0x4510660B,  /* 2310.377685546875f */
	    0xC1C26BAE,  /* -24.30257797241211f */
	    0x455A2182,  /* 3490.09423828125f */
	    0x4156939C,  /* 13.41103744506836f */
	    0xC5820B2E,  /* -4161.3974609375f */
	    0xC0593082,  /* -3.393585681915283f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBC073EA8,  /* -0.008254684507846832f */
	    0x3991724A,  /* 0.0002774170716293156f */
	    0x3EA787EC,  /* 0.32720887660980225f */
	    0xBD2F50FB,  /* -0.042801838368177414f */
	    0xBD2A74E4,  /* -0.041615381836891174f */
	    0x3B3AD522,  /* 0.0028508384712040424f */
	    0x450EC38D,  /* 2284.221923828125f */
	    0xC1E01A40,  /* -28.0128173828125f */
	    0x455AD5F3,  /* 3501.371826171875f */
	    0x4104D66C,  /* 8.302349090576172f */
	    0xC58228AA,  /* -4165.0830078125f */
	    0xC0807AD0,  /* -4.014991760253906f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBC00F5B5,  /* -0.007871081121265888f */
	    0x39FD95FD,  /* 0.0004836767038796097f */
	    0x3E91A2BC,  /* 0.2844446897506714f */
	    0xBD2D968F,  /* -0.04237991198897362f */
	    0xBD1CBE3E,  /* -0.03826736658811569f */
	    0x3B74B839,  /* 0.00373412505723536f */
	    0x450CE59F,  /* 2254.351318359375f */
	    0xC1FDBA0A,  /* -31.715839385986328f */
	    0x455B2B2F,  /* 3506.698974609375f */
	    0x3FDF159F,  /* 1.7428473234176636f */
	    0xC5824B6C,  /* -4169.427734375f */
	    0xC096BFD7,  /* -4.710917949676514f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBBEECAB0,  /* -0.007287345826625824f */
	    0x3A304480,  /* 0.0006724074482917786f */
	    0x3E7844E8,  /* 0.24245035648345947f */
	    0xBD29020C,  /* -0.041261717677116394f */
	    0xBD0BDDFC,  /* -0.034147247672080994f */
	    0x3B900412,  /* 0.004395016469061375f */
	    0x450ACCA9,  /* 2220.791259765625f */
	    0xC20D7D3C,  /* -35.37229919433594f */
	    0x455B0DB8,  /* 3504.857421875f */
	    0xC09F3AE5,  /* -4.9759392738342285f */
	    0xC582740A,  /* -4174.5048828125f */
	    0xC0AF3527,  /* -5.47523832321167f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBBD5DA24,  /* -0.006526248529553413f */
	    0x3A5AADEA,  /* 0.0008341955253854394f */
	    0x3E4EC427,  /* 0.20192013680934906f */
	    0xBD21935C,  /* -0.03944717347621918f */
	    0xBCF17A33,  /* -0.029477214440703392f */
	    0x3B9E4B13,  /* 0.0048307268880307674f */
	    0x450879B1,  /* 2183.605712890625f */
	    0xC21BC6F6,  /* -38.944297790527344f */
	    0x455A8BF4,  /* 3496.7470703125f */
	    0xC127F30D,  /* -10.496838569641113f */
	    0xC582A307,  /* -4180.37841796875f */
	    0xC0C98D70,  /* -6.298515319824219f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBBB81F06,  /* -0.005618932656943798f */
	    0x3A7B7FC5,  /* 0.0009593929280526936f */
	    0x3E277AF4,  /* 0.16355496644973755f */
	    0xBD174A9C,  /* -0.03693638741970062f */
	    0xBCC89629,  /* -0.024485664442181587f */
	    0x3BA510B7,  /* 0.00503739295527339f */
	    0x4505EE6D,  /* 2142.901611328125f */
	    0xC229980E,  /* -42.39849090576172f */
	    0x4559BDD1,  /* 3483.863525390625f */
	    0xC1685910,  /* -14.521743774414062f */
	    0xC582D8D1,  /* -4187.10205078125f */
	    0xC0E56405,  /* -7.168459415435791f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBB96FA71,  /* -0.004607491660863161f */
	    0x3A87D6B5,  /* 0.0010363670298829675f */
	    0x3E031F25,  /* 0.12804849445819855f */
	    0xBD0A280F,  /* -0.03372960910201073f */
	    0xBC9EF22A,  /* -0.019402582198381424f */
	    0x3BA44AD3,  /* 0.00501380255445838f */
	    0x45032CF6,  /* 2098.81005859375f */
	    0xC236D387,  /* -45.70656967163086f */
	    0x4558BB44,  /* 3467.7041015625f */
	    0xC1885D84,  /* -17.04566192626953f */
	    0xC58315B9,  /* -4194.71533203125f */
	    0xC10122A1,  /* -8.070954322814941f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBB6867E0,  /* -0.0035462304949760437f */
	    0x3A8A4326,  /* 0.001054857624694705f */
	    0x3DC4CE62,  /* 0.09609676897525787f */
	    0xBCF45785,  /* -0.02982688881456852f */
	    0xBC6CE224,  /* -0.01445821300148964f */
	    0x3B9BECB7,  /* 0.004758443217724562f */
	    0x450037D6,  /* 2051.48974609375f */
	    0xC243643B,  /* -48.84788131713867f */
	    0x45579C5D,  /* 3449.772705078125f */
	    0xC1907F26,  /* -18.062084197998047f */
	    0xC58359F3,  /* -4203.24365234375f */
	    0xC10FE1E2,  /* -8.992647171020508f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBB23B144,  /* -0.0024977484717965126f */
	    0x3A83BE55,  /* 0.0010051230201497674f */
	    0x3D8C121D,  /* 0.06839392334222794f */
	    0xBCCEACDE,  /* -0.025228913873434067f */
	    0xBC21F715,  /* -0.009885569103062153f */
	    0x3B8BEA3C,  /* 0.004269866272807121f */
	    0x44FA239E,  /* 2001.113037109375f */
	    0xC24F3DD3,  /* -51.81037521362305f */
	    0x45567945,  /* 3431.579345703125f */
	    0xC18C83DD,  /* -17.56438636779785f */
	    0xC583A59B,  /* -4212.70068359375f */
	    0xC11EBB65,  /* -9.920750617980957f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBAC9522F,  /* -0.0015359575627371669f */
	    0x3A663DCF,  /* 0.0008783013909123838f */
	    0x3D3AEF32,  /* 0.04563827067613602f */
	    0xBCA34F60,  /* -0.019935309886932373f */
	    0xBBC1EEDC,  /* -0.005918366834521294f */
	    0x3B687EF4,  /* 0.0035476060584187508f */
	    0x44F37BC4,  /* 1947.86767578125f */
	    0xC25A5E65,  /* -54.59218215942383f */
	    0x45556A4C,  /* 3414.6435546875f */
	    0xC178C031,  /* -15.546921730041504f */
	    0xC583F8AF,  /* -4223.08544921875f */
	    0xC12D8F9E,  /* -10.847562789916992f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBA424B3D,  /* -0.0007411724072881043f */
	    0x3A2F37D1,  /* 0.0006684037507511675f */
	    0x3CE9AAF9,  /* 0.02852390892803669f */
	    0xBC64803B,  /* -0.013946588151156902f */
	    0xBB36E03B,  /* -0.002790464786812663f */
	    0x3B29BCCC,  /* 0.002589988522231579f */
	    0x44EC7DC5,  /* 1891.9302978515625f */
	    0xC264CE32,  /* -57.20136260986328f */
	    0x455487C7,  /* 3400.486083984375f */
	    0xC1401770,  /* -12.005722045898438f */
	    0xC584532A,  /* -4234.3955078125f */
	    0xC13C567C,  /* -11.771114349365234f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xB950D86B,  /* -0.0001991704775718972f */
	    0x39C27E94,  /* 0.000370968715287745f */
	    0x3C915F0F,  /* 0.017745522782206535f */
	    0xBBEDFD82,  /* -0.007262886501848698f */
	    0xBA4195CF,  /* -0.0007384688942693174f */
	    0x3AB6D61C,  /* 0.001394930761307478f */
	    0x44E52EF0,  /* 1833.466796875f */
	    0xC26EA206,  /* -59.658226013183594f */
	    0x4553EA1E,  /* 3390.63232421875f */
	    0xC0DE17CE,  /* -6.94040584564209f */
	    0xC584B505,  /* -4246.62744140625f */
	    0xC14B1BDE,  /* -12.694303512573242f */
	aobjEvent32SetVal0RateBlock(0x077, 1),
	    0x35500538,  /* 7.749363248876762e-07f */
	    0x3C6557A1,  /* 0.013997943140566349f */
	    0xB51803D0,  /* -5.662996045430191e-07f */
	    0x44DD9397,  /* 1772.6121826171875f */
	    0x4553A9AE,  /* 3386.60498046875f */
	    0xC5851E46,  /* -4259.7841796875f */
	aobjEvent32SetValBlock(0x077, 10),
	    0x35500538,  /* 7.749363248876762e-07f */
	    0x3C6557A1,  /* 0.013997943140566349f */
	    0xB51803D0,  /* -5.662996045430191e-07f */
	    0x44DD9397,  /* 1772.6121826171875f */
	    0x4553A9AE,  /* 3386.60498046875f */
	    0xC5851E46,  /* -4259.7841796875f */
	aobjEvent32End(),
};

u8 dMVCommon_RoomLampAnimJoint_AnimJoint_data_post_data_0x0000[0x390] = {
	#include <MVCommon/RoomLampAnimJoint_AnimJoint_data_post_data_0x0000.data.inc.c>
};

/* DisplayList: RoomTissuesDisplayList @ 0xC690 (488 bytes, 61 cmds) */
Gfx dMVCommon_RoomTissuesDisplayList_DisplayList[61] = {
	#include <MVCommon/RoomTissuesDisplayList.dl.inc.c>
};

PAD(8);

extern u32 dMVCommon_RoomTissuesAnimJoint_AnimJoint[];
u32 dMVCommon_RoomTissues_AnimJointPtr[1] = { (u32)dMVCommon_RoomTissuesAnimJoint_AnimJoint };

/* Raw data from file offset 0xC884 to 0x1BC60 (62428 bytes) */
u32 dMVCommon_RoomTissuesAnimJoint_AnimJoint[297] = {
	aobjEvent32SetValBlock(0x077, 0),
	    0x00000000,  /* 0.0f */
	    0x3F589376,  /* 0.846000075340271f */
	    0x00000000,  /* 0.0f */
	    0x455D0616,  /* 3536.38037109375f */
	    0x42562C6A,  /* 53.543373107910156f */
	    0xC5406022,  /* -3078.00830078125f */
	aobjEvent32SetVal(0x007, 190),
	    0x00000000,  /* 0.0f */
	    0x3F589376,  /* 0.846000075340271f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x070, 189),
	    0x455D0616,  /* 3536.38037109375f */
	    0x42562C6A,  /* 53.543373107910156f */
	    0xC5406022,  /* -3078.00830078125f */
	aobjEvent32SetValRateBlock(0x070, 1),
	    0x44FECE1D,  /* 2038.4410400390625f */
	    0xC43D76C5,  /* -757.8557739257812f */
	    0x4513A2BF,  /* 2362.171630859375f */
	    0x448FB521,  /* 1149.6602783203125f */
	    0xC529A030,  /* -2714.01171875f */
	    0x43261941,  /* 166.09864807128906f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBB64B885,  /* -0.003490002127364278f */
	    0xBB739B9D,  /* -0.003717161016538739f */
	    0x3F51A931,  /* 0.8189879059791565f */
	    0xBD213017,  /* -0.039352502673864365f */
	    0xBBC8A3CE,  /* -0.006123042665421963f */
	    0xBB830BFB,  /* -0.003999230917543173f */
	    0x44FC9625,  /* 2020.6920166015625f */
	    0xC2222CFC,  /* -40.54393005371094f */
	    0x45130D43,  /* 2352.828857421875f */
	    0xC18E8163,  /* -17.81317710876465f */
	    0xC52B9D0F,  /* -2745.816162109375f */
	    0xC26A7D6F,  /* -58.622493743896484f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBBF39C72,  /* -0.007434421218931675f */
	    0xBB784D7A,  /* -0.003788797650486231f */
	    0x3F446D61,  /* 0.7672939896583557f */
	    0xBD7AB814,  /* -0.06121070683002472f */
	    0xBC030C6E,  /* -0.007998568937182426f */
	    0xB9446E1B,  /* -0.00018733034085016698f */
	    0x44F4AB45,  /* 1957.3521728515625f */
	    0xC2A219F9,  /* -81.05072784423828f */
	    0x451168B7,  /* 2326.544677734375f */
	    0xC200099C,  /* -32.00938415527344f */
	    0xC530F422,  /* -2831.25830078125f */
	    0xC2D19A17,  /* -104.80095672607422f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBC35554A,  /* -0.011067697778344154f */
	    0xBB5228C7,  /* -0.0032067762222141027f */
	    0x3F325213,  /* 0.6965648531913757f */
	    0xBD9E91BF,  /* -0.07742642611265182f */
	    0xBBD4EABB,  /* -0.006497708614915609f */
	    0x3B2EA5D4,  /* 0.002664913423359394f */
	    0x44E852D4,  /* 1858.58837890625f */
	    0xC2DF1C19,  /* -111.55487823486328f */
	    0x450F0CF2,  /* 2288.80908203125f */
	    0xC222D43B,  /* -40.70725631713867f */
	    0xC538B6BC,  /* -2955.4208984375f */
	    0xC3081C11,  /* -136.10963439941406f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBC62E234,  /* -0.013847876340150833f */
	    0xBB0EFC59,  /* -0.0021817891392856836f */
	    0x3F1CC919,  /* 0.6124435067176819f */
	    0xBDB4370D,  /* -0.08799562603235245f */
	    0xBB2EE76B,  /* -0.002668822882696986f */
	    0x3B90635F,  /* 0.004406377207487822f */
	    0x44D8C7DE,  /* 1734.245849609375f */
	    0xC3047CB0,  /* -132.487060546875f */
	    0x450C521A,  /* 2245.13134765625f */
	    0xC22FFB14,  /* -43.99519348144531f */
	    0xC541F793,  /* -3103.473388671875f */
	    0xC318E8E2,  /* -152.90969848632812f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBC7CD32F,  /* -0.015431209467351437f */
	    0xBA6717A0,  /* -0.0008815471082925797f */
	    0x3F05447C,  /* 0.5205762386322021f */
	    0xBDBE4BF4,  /* -0.09291830658912659f */
	    0x3B17B5C3,  /* 0.002314910991117358f */
	    0x3BA241E5,  /* 0.004951702896505594f */
	    0x44C733C9,  /* 1593.6182861328125f */
	    0xC3106360,  /* -144.38818359375f */
	    0x45098D1F,  /* 2200.820068359375f */
	    0xC2289CF7,  /* -42.15328598022461f */
	    0xC54BD3C5,  /* -3261.235595703125f */
	    0xC31C14DC,  /* -156.08148193359375f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBC7FC541,  /* -0.015610993839800358f */
	    0x3A1936F5,  /* 0.0005844676052220166f */
	    0x3EDA6BE4,  /* 0.42660439014434814f */
	    0xBDBCD0BC,  /* -0.09219500422477722f */
	    0x3BED1131,  /* 0.007234715390950441f */
	    0x3B8C6B92,  /* 0.0042852843180298805f */
	    0x44B4AEE6,  /* 1445.465576171875f */
	    0xC313AA7C,  /* -147.66595458984375f */
	    0x45070D2E,  /* 2160.82373046875f */
	    0xC20E4636,  /* -35.568565368652344f */
	    0xC5557A3F,  /* -3415.640380859375f */
	    0xC312DA0A,  /* -146.85171508789062f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBC69AC40,  /* -0.014262259006500244f */
	    0x3B0D8682,  /* 0.0021595065481960773f */
	    0x3EAC2048,  /* 0.3361837863922119f */
	    0xBDAFC750,  /* -0.08582937717437744f */
	    0x3C32597E,  /* 0.01088559441268444f */
	    0x3B1FD7F2,  /* 0.0024390188045799732f */
	    0x44A2490A,  /* 1298.282470703125f */
	    0xC30E739F,  /* -142.45164489746094f */
	    0x45051AEA,  /* 2129.68212890625f */
	    0xC1C5002D,  /* -24.625085830688477f */
	    0xC55E2F17,  /* -3554.943115234375f */
	    0xC2FD24BD,  /* -126.5717544555664f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBC390247,  /* -0.011292046867311f */
	    0x3B7BA7A9,  /* 0.0038399493787437677f */
	    0x3E828894,  /* 0.2549482583999634f */
	    0xBD9732C2,  /* -0.07382728159427643f */
	    0x3C467442,  /* 0.012112678959965706f */
	    0xBA0C0224,  /* -0.0005340895149856806f */
	    0x44911222,  /* 1160.566650390625f */
	    0xC3009671,  /* -128.58766174316406f */
	    0x4503F930,  /* 2111.57421875f */
	    0xC1196CB1,  /* -9.589035987854004f */
	    0xC5654C7B,  /* -3668.780029296875f */
	    0xC2C0F15A,  /* -96.47138977050781f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBBD7B1D2,  /* -0.006582477129995823f */
	    0x3BBA7FE4,  /* 0.005691515281796455f */
	    0x3E410E64,  /* 0.18853145837783813f */
	    0xBD662DF5,  /* -0.056196171790361404f */
	    0x3C20D94B,  /* 0.009817431680858135f */
	    0xBB9632CC,  /* -0.00458369217813015f */
	    0x4482238E,  /* 1041.111083984375f */
	    0xC2D37B49,  /* -105.74079132080078f */
	    0x4503E812,  /* 2110.50439453125f */
	    0x4117F853,  /* 9.498126029968262f */
	    0xC56A3E20,  /* -3747.8828125f */
	    0xC265A4E7,  /* -57.41103744506836f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x38BF2050,  /* 9.11360839381814e-05f */
	    0x39DAAD2B,  /* 0.00041709220386110246f */
	    0x3E11F9C8,  /* 0.1425544023513794f */
	    0xBB3C52D7,  /* -0.0028735899832099676f */
	    0x3B4103CA,  /* 0.0029451721347868443f */
	    0xB9E12E44,  /* -0.00042949814815074205f */
	    0x446D4543,  /* 949.0822143554688f */
	    0xC0B80ECD,  /* -5.751806735992432f */
	    0x45052922,  /* 2130.57080078125f */
	    0x3FA08644,  /* 1.2540974617004395f */
	    0xC56C79A9,  /* -3783.603759765625f */
	    0xC00EE12B,  /* -2.2324931621551514f */
	aobjEvent32SetValRateBlock(0x077, 15),
	    0x38BEDFA8,  /* 9.101565228775144e-05f */
	    0xB7A1660E,  /* -1.924021853483282e-05f */
	    0x3E11F9A7,  /* 0.14255391061306f */
	    0x3AB5FED7,  /* 0.0013885152293369174f */
	    0x3B410855,  /* 0.0029454429168254137f */
	    0x3756D973,  /* 1.2806022823497187e-05f */
	    0x446D453E,  /* 949.0819091796875f */
	    0x3F8FFA51,  /* 1.1248265504837036f */
	    0x4505291E,  /* 2130.56982421875f */
	    0x3CB8560C,  /* 0.02250196784734726f */
	    0xC56C79A5,  /* -3783.602783203125f */
	    0x3F13F6C9,  /* 0.5779843926429749f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xB9633BE1,  /* -0.00021670713613275439f */
	    0xB991E829,  /* -0.00027829527971334755f */
	    0x3E28B9A1,  /* 0.16477061808109283f */
	    0x3D2686DA,  /* 0.0406559482216835f */
	    0x3B4E7161,  /* 0.0031500684563070536f */
	    0x38112AAD,  /* 3.461043888819404e-05f */
	    0x4471C515,  /* 967.0794067382812f */
	    0x41D6F655,  /* 26.87027931213379f */
	    0x45052EE5,  /* 2130.930908203125f */
	    0x3E6D12ED,  /* 0.2315175086259842f */
	    0xC56BE5B2,  /* -3774.35595703125f */
	    0x41498BA2,  /* 12.596590042114258f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xB9F41742,  /* -0.0004655663506127894f */
	    0xB97ED2A6,  /* -0.0002430180029477924f */
	    0x3E653CC0,  /* 0.22386455535888672f */
	    0x3D956AED,  /* 0.0729578509926796f */
	    0x3B4591A6,  /* 0.003014662768691778f */
	    0xB9845D5A,  /* -0.000252465542871505f */
	    0x447AB495,  /* 1002.8215942382812f */
	    0x4222F24A,  /* 40.736610412597656f */
	    0x45053087,  /* 2131.032958984375f */
	    0x3C7D20FD,  /* 0.015449759550392628f */
	    0xC56AE690,  /* -3758.41015625f */
	    0x4191F4DE,  /* 18.244564056396484f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBA3837CC,  /* -0.000702735735103488f */
	    0xB98581D7,  /* -0.00025464475038461387f */
	    0x3E9F11FD,  /* 0.31068411469459534f */
	    0x3DC4D4D7,  /* 0.09610908478498459f */
	    0x3B2D5A2B,  /* 0.0026451449375599623f */
	    0xB9E4212D,  /* -0.00043512266711331904f */
	    0x448311A5,  /* 1048.5513916015625f */
	    0x423C77CB,  /* 47.11698532104492f */
	    0x45052F63,  /* 2130.961669921875f */
	    0xBDE75336,  /* -0.11295168101787567f */
	    0xC5699DE1,  /* -3737.867431640625f */
	    0x41ADBB1C,  /* 21.71636199951172f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBA7F8DED,  /* -0.000974862661678344f */
	    0xB9A6956E,  /* -0.0003177332109771669f */
	    0x3ED50922,  /* 0.41608530282974243f */
	    0x3DE1807A,  /* 0.11010833084583282f */
	    0x3B0C8929,  /* 0.0021444058511406183f */
	    0xBA07C734,  /* -0.0005179524887353182f */
	    0x448921D2,  /* 1097.056884765625f */
	    0x423A76EE,  /* 46.61614227294922f */
	    0x45052CEA,  /* 2130.80712890625f */
	    0xBE2ADB6B,  /* -0.16685263812541962f */
	    0xC5682FA1,  /* -3714.976806640625f */
	    0x41B11309,  /* 22.134294509887695f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBAAF66E6,  /* -0.0013382106553763151f */
	    0xB9E902DC,  /* -0.00044443353544920683f */
	    0x3F07E94E,  /* 0.530903697013855f */
	    0x3DEB6E51,  /* 0.11495650559663773f */
	    0x3AD2ECAB,  /* 0.0016092261066660285f */
	    0xBA056C86,  /* -0.000508971861563623f */
	    0x448EB91E,  /* 1141.784912109375f */
	    0x422BE359,  /* 42.97201919555664f */
	    0x45052A0C,  /* 2130.6279296875f */
	    0xBE6754E7,  /* -0.22590981423854828f */
	    0xC566D992,  /* -3693.59814453125f */
	    0x41947224,  /* 18.55573272705078f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBAF447F0,  /* -0.0018637161701917648f */
	    0xBA2A78AB,  /* -0.0006502966280095279f */
	    0x3F255FEA,  /* 0.6459947824478149f */
	    0x3DE29DFD,  /* 0.11065290123224258f */
	    0x3A93A651,  /* 0.0011264776112511754f */
	    0xB9DBD89B,  /* -0.00041932318708859384f */
	    0x4493DFFC,  /* 1182.99951171875f */
	    0x422324E4,  /* 40.78602600097656f */
	    0x450525AF,  /* 2130.355224609375f */
	    0xBEC11057,  /* -0.37707778811454773f */
	    0xC565DDDA,  /* -3677.86572265625f */
	    0x415D4BE6,  /* 13.831029891967773f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBB2CF013,  /* -0.002638821257278323f */
	    0xBA77BB63,  /* -0.0009450225043110549f */
	    0x3F4090FF,  /* 0.7522124648094177f */
	    0x3DC70FA2,  /* 0.09719778597354889f */
	    0x3A49FFFC,  /* 0.0007705686148256063f */
	    0xB986C2B5,  /* -0.0002570353972259909f */
	    0x4498EB75,  /* 1223.3580322265625f */
	    0x42188D63,  /* 38.1380729675293f */
	    0x45051DFB,  /* 2129.873779296875f */
	    0xBF1D68F6,  /* -0.6148828268051147f */
	    0xC5651EF9,  /* -3665.935791015625f */
	    0x412DB5B7,  /* 10.856863975524902f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0xBB760216,  /* -0.003753786440938711f */
	    0x3FC8E5A7,  /* 1.56950843334198f */
	    0x3F5723FE,  /* 0.8403929471969604f */
	    0x3F3E772C,  /* 0.7440059185028076f */
	    0x3A208977,  /* 0.0006123999482952058f */
	    0xBFC910ED,  /* -1.5708290338516235f */
	    0x449D68DB,  /* 1259.2767333984375f */
	    0x41FA6FAE,  /* 31.30453109741211f */
	    0x45051202,  /* 2129.12548828125f */
	    0xBF688FE9,  /* -0.9084458947181702f */
	    0xC564826E,  /* -3656.15185546875f */
	    0x410E010E,  /* 8.87525749206543f */
	aobjEvent32SetValRateBlock(0x077, 1),
	    0x4048B9A3,  /* 3.1363303661346436f */
	    0x3FC8D9A7,  /* 1.56914222240448f */
	    0x400F5F76,  /* 2.240201473236084f */
	    0x3F300569,  /* 0.6875825524330139f */
	    0xC0490384,  /* -3.1408395767211914f */
	    0xBFC903F7,  /* -1.570433497428894f */
	    0x44A0BEEB,  /* 1285.9661865234375f */
	    0x419AF547,  /* 19.36976432800293f */
	    0x450500EA,  /* 2128.05712890625f */
	    0xBF9D8BDE,  /* -1.2308309078216553f */
	    0xC56402F8,  /* -3648.185546875f */
	    0x40E6A3B7,  /* 7.207484722137451f */
	aobjEvent32SetVal0RateBlock(0x077, 1),
	    0x40489B5F,  /* 3.1344830989837646f */
	    0x400DCB5C,  /* 2.2155370712280273f */
	    0xC048F926,  /* -3.140206813812256f */
	    0x44A24080,  /* 1298.015625f */
	    0x4504EA9F,  /* 2126.663818359375f */
	    0xC5639BCB,  /* -3641.737060546875f */
	aobjEvent32SetValBlock(0x077, 75),
	    0x40489B5F,  /* 3.1344830989837646f */
	    0x400DCB5C,  /* 2.2155370712280273f */
	    0xC048F926,  /* -3.140206813812256f */
	    0x44A24080,  /* 1298.015625f */
	    0x4504EA9F,  /* 2126.663818359375f */
	    0xC5639BCB,  /* -3641.737060546875f */
	aobjEvent32End(),
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomTissuesAnimJoint_AnimJoint_post_data_0x0000[0xEF38] = {
	#include <MVCommon/RoomTissuesAnimJoint_AnimJoint_post_data_0x0000.data.inc.c>
};

/* MObjSub-list head @ 0x1bc60 — 2-entry MObjSub** array.
 * The real MObjSub data starts at +0x8 (dMVCommon_RoomLogoMObjSub_MObjSub_real below). */
MObjSub **dMVCommon_RoomLogoMObjSub_MObjSub[2] = {
	NULL,
	NULL,
};

/* The real MObjSub @ +0x8 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dMVCommon_RoomLogoMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_32b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0080, 0x0055,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_32b,
		0x0080,
		0x0055, 0x0080, 0x0055,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x1BCD8 to 0x1C4A8 (2000 bytes) */
/* gap sub-block @ 0x1BCE0 (was gap+0x8, 8 bytes) */
MObjSub *dMVCommon_gap_0x1BCD8_sub_0x8[2] = {
	&dMVCommon_RoomLogoMObjSub_MObjSub_real,
	NULL,
};

/* gap sub-block @ 0x1BCE8 (was gap+0x10, 64 bytes) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x10[4] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x10.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0x50 (1 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x50[1] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x50.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0x60 (2 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x60[2] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x60.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0x80 (1 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x80[1] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x80.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0x90 (2 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x90[2] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x90.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0xB0 (2 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0xB0[2] = {
	#include <MVCommon/gap_0x1BCD8_sub_0xB0.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0xD0 (2 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0xD0[2] = {
	#include <MVCommon/gap_0x1BCD8_sub_0xD0.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0xF0 (2 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0xF0[2] = {
	#include <MVCommon/gap_0x1BCD8_sub_0xF0.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0x110 (2 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x110[2] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x110.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0x130 (2 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x130[2] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x130.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0x150 (2 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x150[2] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x150.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0x170 (2 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x170[2] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x170.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0x190 (2 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x190[2] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x190.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x1BCD8_sub_0x1B0 (4 Vtx) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x1B0[4] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x1B0.vtx.inc.c>
};

/* gap sub-block @ 0x1BEC8 (was gap+0x1F0, 64 bytes) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x1F0[4] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x1F0.vtx.inc.c>
};

/* gap sub-block @ 0x1BF08 (was gap+0x230, 64 bytes) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x230[4] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x230.vtx.inc.c>
};

/* gap sub-block @ 0x1BF48 (was gap+0x270, 64 bytes) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x270[4] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x270.vtx.inc.c>
};

/* gap sub-block @ 0x1BF88 (was gap+0x2B0, 64 bytes) */
Vtx dMVCommon_gap_0x1BCD8_sub_0x2B0[4] = {
	#include <MVCommon/gap_0x1BCD8_sub_0x2B0.vtx.inc.c>
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
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint[2] = {
	(AObjEvent32 *)((u8*)dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data + 0x1C),
	NULL,
};

u32 dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data[7] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFF80,
	aobjEvent32End(),
};

AObjEvent32 *dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x1C[2] = {
	(AObjEvent32 *)dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data,
	NULL,
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x1C_post[16] = {
	#include <MVCommon/RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x1C_post.data.inc.c>
};

u8 dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x34[0x20] = {
	#include <MVCommon/RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x34.data.inc.c>
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x34_post_data_0x0000[0x3E0] = {
	#include <MVCommon/RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x34_post_data_0x0000.data.inc.c>
};

/* u32: dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x434 (20 u32) */
u32 dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x434[9] = {
	aobjEvent32EndRaw(0x30C, 0),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x3FC, 0),
	    (u32)0x00007F00,
	    0xFE7901A8,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 511),
	aobjEvent32EndRaw(0x000, 32512),
	aobjEvent32End(),
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x434_post[44] = {
	#include <MVCommon/RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x434_post.data.inc.c>
};

/* Gfx DL @ _data+0x484 (20 cmds) — starts with gsDPPipeSync, ends with
 * gsSPEndDisplayList; followed by 16 bytes of trailing literal data
 * (NOT chain-encoded — no .reloc entries point into +0xA0..+0xB0). */
Gfx dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x484[20] = {
	#include <MVCommon/RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x484.dl.inc.c>
};

/* DObjDLLink[2] @ _data+0x528 — entry 0 points back at the DL above.
 * The .reloc was missing the chain entry for this pointer slot; added
 * back so the chain encoding survives fixRelocChain. */
DObjDLLink dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x484_tail[] = {
	{ 1, dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint_data_at_0x484 },
	{ 4, NULL },
};

/* DObjDesc: RoomSnapDObjDesc @ 0x1CA68 (3 entries) */
DObjDesc dMVCommon_RoomSnapDObjDesc[] = {
	{ 0, (void*)0x00000000, { -0.0035409999545663595f, 2792.46533203125f, -1.883239984512329f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVCommon_RoomLogoMatAnimJoint_MatAnimJoint + 0x52C), { 65.25997161865234f, 760.6396484375f, 1680.64599609375f }, { 0.001395000028423965f, 0.2819969952106476f, 6.288197994232178f }, { 0.4499729871749878f, 0.4499729871749878f, 0.4499729871749878f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x1CAF0 to 0x1DCA0 (4528 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dMVCommon_RoomSnapAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dMVCommon_RoomSnapAnimJoint_AnimJoint_data,
};

u32 dMVCommon_RoomSnapAnimJoint_AnimJoint_data[37] = {
	aobjEvent32SetVal(0x387, 0),
	    0x00000000,  /* 0.0f */
	    0x3E90624D,  /* 0.28199997544288635f */
	    0x00000000,  /* 0.0f */
	    0x3E6A0356,  /* 0.22852835059165955f */
	    0x3E6A0356,  /* 0.22852835059165955f */
	    0x3E6A0356,  /* 0.22852835059165955f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32SetValBlock(0x387, 150),
	    0x00000000,  /* 0.0f */
	    0x3E90624D,  /* 0.28199997544288635f */
	    0x00000000,  /* 0.0f */
	    0x3E6A0356,  /* 0.22852835059165955f */
	    0x3E6A0356,  /* 0.22852835059165955f */
	    0x3E6A0356,  /* 0.22852835059165955f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetTargetRate(0x380, 0),
	    0x3D97FE35,  /* 0.07421533018350601f */
	    0x3D9632F9,  /* 0.07333941012620926f */
	    0x3D978711,  /* 0.07398808747529984f */
	aobjEvent32SetVal0RateBlock(0x387, 5),
	    0x3AB6D657,  /* 0.0013949376298114657f */
	    0x3E9061DB,  /* 0.28199657797813416f */
	    0x40C938EB,  /* 6.288197994232178f */
	    0x3EE662E6,  /* 0.44997328519821167f */
	    0x3EE662E6,  /* 0.44997328519821167f */
	    0x3EE662E6,  /* 0.44997328519821167f */
	aobjEvent32SetVal(0x387, 5),
	    0x3AB6D657,  /* 0.0013949376298114657f */
	    0x3E9061DB,  /* 0.28199657797813416f */
	    0x40C938EB,  /* 6.288197994232178f */
	    0x3EE662E6,  /* 0.44997328519821167f */
	    0x3EE662E6,  /* 0.44997328519821167f */
	    0x3EE662E6,  /* 0.44997328519821167f */
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x001, 4),
	aobjEvent32End(),
};

u8 dMVCommon_RoomSnapAnimJoint_AnimJoint_data_post_data_0x0000[0x1114] = {
	#include <MVCommon/RoomSnapAnimJoint_AnimJoint_data_post_data_0x0000.data.inc.c>
};

/* MObjSub-list head @ 0x1dca0 — 4-entry MObjSub** array.
 * The real MObjSub data starts at +0x10 (dMVCommon_RoomCloseUpEffectAirMObjSub_MObjSub_real below). */
MObjSub **dMVCommon_RoomCloseUpEffectAirMObjSub_MObjSub[4] = {
	NULL,
	NULL,
	NULL,
	NULL,
};

/* The real MObjSub @ +0x10 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dMVCommon_RoomCloseUpEffectAirMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_32b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_32b,
		0x0020,
		0x0020, 0x0040, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x1DD18 to 0x1DF28 (528 bytes) */
/* gap sub-block @ 0x1DD28 (was gap+0x10, 8 bytes) */
/* MObjSub.sprites pointer table @ +0x1DD28 (2 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
MObjSub *dMVCommon_gap_0x1DD18_sub_0x10[2] = {
	&dMVCommon_RoomCloseUpEffectAirMObjSub_MObjSub_real,
	NULL,
};

/* gap sub-block @ 0x1DD30 (was gap+0x18, 64 bytes) */
Vtx dMVCommon_gap_0x1DD18_sub_0x18[4] = {
	#include <MVCommon/gap_0x1DD18_sub_0x18.vtx.inc.c>
};

/* gap sub-block @ 0x1DD70 (was gap+0x58, 64 bytes) */
Vtx dMVCommon_gap_0x1DD18_sub_0x58[4] = {
	#include <MVCommon/gap_0x1DD18_sub_0x58.vtx.inc.c>
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
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
/* MatAnimJoint table @ 0x1DFD8 — array of AObjEvent32 ** (pointers to
 * arrays of AObjEvent32 *). Only slot 1 is populated; pointing at the
 * 2-element script-pointer array _0x1E008 below. */
AObjEvent32 **dMVCommon_RoomCloseUpEffectAirMatAnimJoint_MatAnimJoint[3] = {
	NULL,
	(AObjEvent32 **)dMVCommon_RoomCloseUpEffectAirMatAnimJoint_MatAnimJoint_0x1E008,
	NULL,
};

/* AObjEvent32 script @ 0x1DFE4 — referenced via _0x1E008 below. */
u32 dMVCommon_RoomCloseUpEffectAirMatAnimJoint_MatAnimJoint_0x1DFE4[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 118),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 58),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

/* AObjEvent32 *[2] script-pointer slot @ 0x1E008. MatAnimJoint[1] points
 * here; entry 0 is the actual script, entry 1 is a NULL terminator. */
AObjEvent32 *dMVCommon_RoomCloseUpEffectAirMatAnimJoint_MatAnimJoint_0x1E008[2] = {
	(AObjEvent32 *)dMVCommon_RoomCloseUpEffectAirMatAnimJoint_MatAnimJoint_0x1DFE4,
	NULL,
};

/* Raw data from file offset 0x1E010 to 0x1F0F8 (4328 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint[3] = {
	(AObjEvent32 *)dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint_data,
	(AObjEvent32 *)dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint_data_at_0xC,
	(AObjEvent32 *)dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint_data_at_0x60,
};

u32 dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint_data[3] = {
	aobjEvent32SetFlags(0x001, 110),
	aobjEvent32SetFlags(0x000, 70),
	aobjEvent32End(),
};

u32 dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint_data_at_0xC[21] = {
	aobjEvent32SetVal(0x180, 0),
	    0x3EF0A3DD,  /* 0.47000017762184143f */
	    0x3EF0A3DD,  /* 0.47000017762184143f */
	aobjEvent32SetValAfter(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32SetValBlock(0x180, 110),
	    0x3EF0A3DD,  /* 0.47000017762184143f */
	    0x3EF0A3DD,  /* 0.47000017762184143f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetTargetRate(0x180, 0),
	    0x3E2E3706,  /* 0.17013177275657654f */
	    0x3E2D092D,  /* 0.16898031532764435f */
	aobjEvent32SetVal0RateBlock(0x180, 12),
	    0x3FD92D7D,  /* 1.6967006921768188f */
	    0x3FD92D7D,  /* 1.6967006921768188f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32SetValBlock(0x180, 58),
	    0x3FD92D7D,  /* 1.6967006921768188f */
	    0x3FD92D7D,  /* 1.6967006921768188f */
	aobjEvent32End(),
};

u32 dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint_data_at_0x60[28] = {
	aobjEvent32SetVal(0x180, 0),
	    0x3F147AE1,  /* 0.5799999833106995f */
	    0x3F147AE1,  /* 0.5799999833106995f */
	aobjEvent32SetValAfter(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32SetValBlock(0x180, 110),
	    0x3F147AE1,  /* 0.5799999833106995f */
	    0x3F147AE1,  /* 0.5799999833106995f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValRateBlock(0x180, 1),
	    0x4017A541,  /* 2.3694612979888916f */
	    0x3C2D83D9,  /* 0.010590516962110996f */
	    0x4017A541,  /* 2.3694612979888916f */
	    0x3AAC09F5,  /* 0.0013125526020303369f */
	aobjEvent32SetValRateBlock(0x180, 8),
	    0x3E24AE2B,  /* 0.16082064807415009f */
	    0xBF06F1F4,  /* -0.5271294116973877f */
	    0x3E24AE2B,  /* 0.16082064807415009f */
	    0xBF094C57,  /* -0.5363211035728455f */
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x3E24AE2B,  /* 0.16082064807415009f */
	    0x3E24AE2B,  /* 0.16082064807415009f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32SetValBlock(0x180, 60),
	    0x3E24AE2B,  /* 0.16082064807415009f */
	    0x3E24AE2B,  /* 0.16082064807415009f */
	aobjEvent32End(),
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint_data_at_0x60_post[12] = {
	#include <MVCommon/RoomCloseUpEffectAirAnimJoint_AnimJoint_data_at_0x60_post.data.inc.c>
};

u8 dMVCommon_RoomCloseUpEffectAirAnimJoint_AnimJoint_data_at_0xDC[0x1000] = {
	#include <MVCommon/RoomCloseUpEffectAirAnimJoint_AnimJoint_data_at_0xDC.data.inc.c>
};

/* MObjSub-list head @ 0x1f0f8 — 2-entry MObjSub** array.
 * The real MObjSub data starts at +0x8 (dMVCommon_RoomCloseUpEffectGroundMObjSub_MObjSub_real below). */
MObjSub **dMVCommon_RoomCloseUpEffectGroundMObjSub_MObjSub[2] = {
	NULL,
	NULL,
};

/* The real MObjSub @ +0x8 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dMVCommon_RoomCloseUpEffectGroundMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_32b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x1200,
		G_IM_FMT_RGBA, G_IM_SIZ_32b,
		0x0020,
		0x0020, 0x0040, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x1F170 to 0x1F270 (256 bytes) */
/* gap sub-block @ 0x1F178 (was gap+0x8, 8 bytes) */
/* MObjSub.sprites pointer table @ +0x1F178 (2 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
MObjSub *dMVCommon_gap_0x1F170_sub_0x8[2] = {
	&dMVCommon_RoomCloseUpEffectGroundMObjSub_MObjSub_real,
	NULL,
};

/* gap sub-block @ 0x1F180 (was gap+0x10, 64 bytes) */
Vtx dMVCommon_gap_0x1F170_sub_0x10[4] = {
	#include <MVCommon/gap_0x1F170_sub_0x10.vtx.inc.c>
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
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dMVCommon_RoomCloseUpEffectGroundMatAnimJoint_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dMVCommon_RoomCloseUpEffectGroundMatAnimJoint_MatAnimJoint_0x1F328,
};

u32 dMVCommon_RoomCloseUpEffectGroundMatAnimJoint_MatAnimJoint_0x1F2FC[] = {
	aobjEvent32SetExtVal(0x001, 0),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x008, 0),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 150),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dMVCommon_RoomCloseUpEffectGroundMatAnimJoint_MatAnimJoint_0x1F328[] = {
	(u32)(dMVCommon_RoomCloseUpEffectGroundMatAnimJoint_MatAnimJoint_0x1F2FC),
	aobjEvent32End(),
};

/* Raw data from file offset 0x1F330 to 0x1F790 (1120 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dMVCommon_RoomCloseUpEffectGroundAnimJoint_AnimJoint[2] = {
	(AObjEvent32 *)dMVCommon_RoomCloseUpEffectGroundAnimJoint_AnimJoint_data,
	(AObjEvent32 *)((u8*)dMVCommon_RoomCloseUpEffectGroundAnimJoint_AnimJoint_data + 0x18),
};

u32 dMVCommon_RoomCloseUpEffectGroundAnimJoint_AnimJoint_data[33] = {
	aobjEvent32SetValAfter(0x070, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(180),
	aobjEvent32End(),
	aobjEvent32SetVal(0x280, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x170, 0),
	    0xC4881146,  /* -1088.539794921875f */
	    0x45044FC8,  /* 2116.986328125f */
	    0xC561C52F,  /* -3612.323974609375f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32SetValBlock(0x280, 147),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetTargetRate(0x280, 0),
	    0x3EE449AB,  /* 0.44587454199790955f */
	    0x3EE3A2FC,  /* 0.4446028470993042f */
	aobjEvent32SetVal0RateBlock(0x280, 13),
	    0x4041B094,  /* 3.026402473449707f */
	    0x4041B094,  /* 3.026402473449707f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32SetValBlock(0x280, 20),
	    0x4041B094,  /* 3.026402473449707f */
	    0x4041B094,  /* 3.026402473449707f */
	aobjEvent32End(),
	    0xFE790018,
	aobjEvent32EndRaw(0x244, 0),
	aobjEvent32End(),
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomCloseUpEffectGroundAnimJoint_AnimJoint_data_post_data_0x0000[0x3D4] = {
	#include <MVCommon/RoomCloseUpEffectGroundAnimJoint_AnimJoint_data_post_data_0x0000.data.inc.c>
};

/* DisplayList: RoomBossShadowDisplayList @ 0x1F790 (384 bytes, 48 cmds) */
Gfx dMVCommon_RoomBossShadowDisplayList_DisplayList[48] = {
	#include <MVCommon/RoomBossShadowDisplayList.dl.inc.c>
};

DObjDLLink dMVCommon_RoomBossShadowDLLink[] = {
	{ 1, dMVCommon_RoomBossShadowDisplayList_DisplayList },
	{ 4, NULL },
};

extern u32 dMVCommon_RoomBossShadowAnimJoint_AnimJoint[];
u32 dMVCommon_RoomBossShadow_AnimJointPtr[1] = { (u32)dMVCommon_RoomBossShadowAnimJoint_AnimJoint };

/* Raw data from file offset 0x1F924 to 0x20480 (2908 bytes) */
u32 dMVCommon_RoomBossShadowAnimJoint_AnimJoint[24] = {
	aobjEvent32SetVal(0x050, 0),
	    0x44C298F3,  /* 1556.7796630859375f */
	    0xC5998640,  /* -4912.78125f */
	aobjEvent32SetValAfter(0x020, 0),
	    0x450426BE,  /* 2114.42138671875f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValBlock(0x050, 90),
	    0x44C298F3,  /* 1556.7796630859375f */
	    0xC5998640,  /* -4912.78125f */
	aobjEvent32SetValRateBlock(0x050, 10),
	    0xC4A17138,  /* -1291.5380859375f */
	    0xC2BCF994,  /* -94.48745727539062f */
	    0xC51AB474,  /* -2475.2783203125f */
	    0x43128626,  /* 146.52401733398438f */
	aobjEvent32SetFlags(0x001, 0),
	aobjEvent32SetValRateBlock(0x050, 10),
	    0xC3A67C20,  /* -332.9697265625f */
	    0xC2BEFA29,  /* -95.48859405517578f */
	    0xC4F7C99C,  /* -1982.30029296875f */
	    0x433C5D55,  /* 188.3645782470703f */
	aobjEvent32SetValBlock(0x050, 450),
	    0xC3A67C20,  /* -332.9697265625f */
	    0xC4F7C99C,  /* -1982.30029296875f */
	aobjEvent32End(),
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomBossShadowAnimJoint_AnimJoint_post_data_0x0000[0xAFC] = {
	#include <MVCommon/RoomBossShadowAnimJoint_AnimJoint_post_data_0x0000.data.inc.c>
};

/* MObjSub-list head @ 0x20480 — 8-entry MObjSub** array.
 * The real MObjSub data starts at +0x20 (dMVCommon_RoomDeskGroundMObjSub_MObjSub_real below). */
MObjSub **dMVCommon_RoomDeskGroundMObjSub_MObjSub[8] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};

/* The real MObjSub @ +0x20 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dMVCommon_RoomDeskGroundMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0001, 0x0140, 0x0070,
		0,
		0.0020000000949949026f, 0.0f,
		1.0f, 1.0f,
		0.0020000000949949026f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0008, 0x0140, 0x0070,
		0.0020000000949949026f, 0.0f,
		0.0020000000949949026f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0x91 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xCC, 0x00 } },
		{ { 0xCC, 0xCC, 0xCC, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x204F8 to 0x22440 (8008 bytes) */
/* MObjSub @ 0x20518 */
MObjSub dMVCommon_gap_0x204F8_sub_0x20[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x01C0, 0x0018,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x02, 0x00,
		0x0010,
		0x0018, 0x01C0, 0x0018,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0x91 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x20590 */
MObjSub dMVCommon_gap_0x204F8_sub_0x98[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x00E0, 0x0018,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x02, 0x00,
		0x0010,
		0x0018, 0x00E0, 0x0018,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0x91 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x20608 */
MObjSub dMVCommon_gap_0x204F8_sub_0x110[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x01C0, 0x0018,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x02, 0x00,
		0x0010,
		0x0018, 0x01C0, 0x0018,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0x91 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x20680 */
MObjSub dMVCommon_gap_0x204F8_sub_0x188[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0030, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x02, 0x00,
		0x0030,
		0x0010, 0x0030, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0x91 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x206F8 */
MObjSub dMVCommon_gap_0x204F8_sub_0x200[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0030, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		0x02, 0x00,
		0x0030,
		0x0010, 0x0030, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0x91 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x20770 (was gap+0x278, 8 bytes) */
MObjSub *dMVCommon_gap_0x204F8_sub_0x278[2] = {
	&dMVCommon_RoomDeskGroundMObjSub_MObjSub_real,
	NULL,
};

/* gap sub-block @ 0x20778 (was gap+0x280, 16 bytes) */
MObjSub *dMVCommon_gap_0x204F8_sub_0x280[4] = {
	(MObjSub *)dMVCommon_gap_0x204F8_sub_0x20,
	(MObjSub *)dMVCommon_gap_0x204F8_sub_0x98,
	(MObjSub *)dMVCommon_gap_0x204F8_sub_0x110,
	NULL,
};

/* gap sub-block @ 0x20788 (was gap+0x290, 16 bytes) */
MObjSub *dMVCommon_gap_0x204F8_sub_0x290[4] = {
	(MObjSub *)dMVCommon_gap_0x204F8_sub_0x188,
	(MObjSub *)dMVCommon_gap_0x204F8_sub_0x200,
	NULL,
	NULL,
};

/* gap sub-block @ 0x20798 (was gap+0x2A0, 128 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x2A0[8] = {
	#include <MVCommon/gap_0x204F8_sub_0x2A0.vtx.inc.c>
};

/* gap sub-block @ 0x20818 (was gap+0x320, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x320[4] = {
	#include <MVCommon/gap_0x204F8_sub_0x320.vtx.inc.c>
};

/* gap sub-block @ 0x20858 (was gap+0x360, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x360[4] = {
	#include <MVCommon/gap_0x204F8_sub_0x360.vtx.inc.c>
};

/* gap sub-block @ 0x20898 (was gap+0x3A0, 288 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x3A0[18] = {
	#include <MVCommon/gap_0x204F8_sub_0x3A0.vtx.inc.c>
};

/* gap sub-block @ 0x209B8 (was gap+0x4C0, 128 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x4C0[8] = {
	#include <MVCommon/gap_0x204F8_sub_0x4C0.vtx.inc.c>
};

/* gap sub-block @ 0x20A38 (was gap+0x540, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x540[4] = {
	#include <MVCommon/gap_0x204F8_sub_0x540.vtx.inc.c>
};

/* gap sub-block @ 0x20A78 (was gap+0x580, 128 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x580[8] = {
	#include <MVCommon/gap_0x204F8_sub_0x580.vtx.inc.c>
};

/* gap sub-block @ 0x20AF8 (was gap+0x600, 128 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x600[8] = {
	#include <MVCommon/gap_0x204F8_sub_0x600.vtx.inc.c>
};

/* gap sub-block @ 0x20B78 (was gap+0x680, 160 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x680[10] = {
	#include <MVCommon/gap_0x204F8_sub_0x680.vtx.inc.c>
};

/* gap sub-block @ 0x20C18 (was gap+0x720, 160 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x720[10] = {
	#include <MVCommon/gap_0x204F8_sub_0x720.vtx.inc.c>
};

/* gap sub-block @ 0x20CB8 (was gap+0x7C0, 384 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x7C0[24] = {
	#include <MVCommon/gap_0x204F8_sub_0x7C0.vtx.inc.c>
};

/* gap sub-block @ 0x20E38 (was gap+0x940, 224 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x940[14] = {
	#include <MVCommon/gap_0x204F8_sub_0x940.vtx.inc.c>
};

/* gap sub-block @ 0x20F18 (was gap+0xA20, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xA20[4] = {
	#include <MVCommon/gap_0x204F8_sub_0xA20.vtx.inc.c>
};

/* gap sub-block @ 0x20F58 (was gap+0xA60, 80 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xA60[5] = {
	#include <MVCommon/gap_0x204F8_sub_0xA60.vtx.inc.c>
};

/* gap sub-block @ 0x20FA8 (was gap+0xAB0, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xAB0[4] = {
	#include <MVCommon/gap_0x204F8_sub_0xAB0.vtx.inc.c>
};

/* gap sub-block @ 0x20FE8 (was gap+0xAF0, 128 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xAF0[8] = {
	#include <MVCommon/gap_0x204F8_sub_0xAF0.vtx.inc.c>
};

/* gap sub-block @ 0x21068 (was gap+0xB70, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xB70[4] = {
	#include <MVCommon/gap_0x204F8_sub_0xB70.vtx.inc.c>
};

/* gap sub-block @ 0x210A8 (was gap+0xBB0, 256 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xBB0[16] = {
	#include <MVCommon/gap_0x204F8_sub_0xBB0.vtx.inc.c>
};

/* gap sub-block @ 0x211A8 (was gap+0xCB0, 96 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xCB0[6] = {
	#include <MVCommon/gap_0x204F8_sub_0xCB0.vtx.inc.c>
};

/* gap sub-block @ 0x21208 (was gap+0xD10, 256 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xD10[16] = {
	#include <MVCommon/gap_0x204F8_sub_0xD10.vtx.inc.c>
};

/* gap sub-block @ 0x21308 (was gap+0xE10, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xE10[4] = {
	#include <MVCommon/gap_0x204F8_sub_0xE10.vtx.inc.c>
};

/* gap sub-block @ 0x21348 (was gap+0xE50, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xE50[4] = {
	#include <MVCommon/gap_0x204F8_sub_0xE50.vtx.inc.c>
};

/* gap sub-block @ 0x21388 (was gap+0xE90, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xE90[4] = {
	#include <MVCommon/gap_0x204F8_sub_0xE90.vtx.inc.c>
};

/* gap sub-block @ 0x213C8 (was gap+0xED0, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xED0[4] = {
	#include <MVCommon/gap_0x204F8_sub_0xED0.vtx.inc.c>
};

/* gap sub-block @ 0x21408 (was gap+0xF10, 128 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xF10[8] = {
	#include <MVCommon/gap_0x204F8_sub_0xF10.vtx.inc.c>
};

/* gap sub-block @ 0x21488 (was gap+0xF90, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xF90[4] = {
	#include <MVCommon/gap_0x204F8_sub_0xF90.vtx.inc.c>
};

/* gap sub-block @ 0x214C8 (was gap+0xFD0, 128 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0xFD0[8] = {
	#include <MVCommon/gap_0x204F8_sub_0xFD0.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x204F8_sub_0x1050 (2 Vtx) */
Vtx dMVCommon_gap_0x204F8_sub_0x1050[2] = {
	#include <MVCommon/gap_0x204F8_sub_0x1050.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x204F8_sub_0x1070 (3 Vtx) */
Vtx dMVCommon_gap_0x204F8_sub_0x1070[3] = {
	#include <MVCommon/gap_0x204F8_sub_0x1070.vtx.inc.c>
};

/* Vtx: dMVCommon_gap_0x204F8_sub_0x10A0 (3 Vtx) */
Vtx dMVCommon_gap_0x204F8_sub_0x10A0[3] = {
	#include <MVCommon/gap_0x204F8_sub_0x10A0.vtx.inc.c>
};

/* gap sub-block @ 0x215C8 (was gap+0x10D0, 32 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x10D0[2] = {
	#include <MVCommon/gap_0x204F8_sub_0x10D0.vtx.inc.c>
};

/* gap sub-block @ 0x215E8 (was gap+0x10F0, 128 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x10F0[8] = {
	#include <MVCommon/gap_0x204F8_sub_0x10F0.vtx.inc.c>
};

/* gap sub-block @ 0x21668 (was gap+0x1170, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x1170[4] = {
	#include <MVCommon/gap_0x204F8_sub_0x1170.vtx.inc.c>
};

/* gap sub-block @ 0x216A8 (was gap+0x11B0, 64 bytes) */
Vtx dMVCommon_gap_0x204F8_sub_0x11B0[4] = {
	#include <MVCommon/gap_0x204F8_sub_0x11B0.vtx.inc.c>
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

/* DObjDLLink @ 0x223D8 (3 entries) */
DObjDLLink dMVCommon_gap_0x204F8_sub_0x1EE0[] = {
	{ 0, dMVCommon_DL_0x21828 },
	{ 1, dMVCommon_DL_0x221F0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x223F0 (2 entries) */
DObjDLLink dMVCommon_gap_0x204F8_sub_0x1EF8[] = {
	{ 0, dMVCommon_DL_0x21910 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x22400 (2 entries) */
DObjDLLink dMVCommon_gap_0x204F8_sub_0x1F08[] = {
	{ 1, dMVCommon_DL_0x222F0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x22410 (2 entries) */
DObjDLLink dMVCommon_gap_0x204F8_sub_0x1F18[] = {
	{ 0, dMVCommon_DL_0x21B50 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x22420 (2 entries) */
DObjDLLink dMVCommon_gap_0x204F8_sub_0x1F28[] = {
	{ 0, dMVCommon_DL_0x21E98 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x22430 (2 entries) */
DObjDLLink dMVCommon_gap_0x204F8_sub_0x1F38[] = {
	{ 0, dMVCommon_DL_0x22078 },
	{ 4, NULL },
};

/* DObjDesc: RoomDeskGroundDObjDesc @ 0x22440 (3 entries) */
DObjDesc dMVCommon_RoomDeskGroundDObjDesc[] = {
	{ 0, (void*)dMVCommon_DLLink_0x223B8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMVCommon_DLLink_0x223C8, { 371.76104736328125f, 2151.7734375f, -4845.66650390625f }, { 0.0f, 0.0f, 0.6999989748001099f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMVCommon_gap_0x204F8_sub_0x1EE0, { 524.3055419921875f, 1936.9608154296875f, -4229.2109375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
};

/* DObjDesc @ 0x224C4 (6 entries; continuation of RoomDeskGroundDObjDesc) */
DObjDesc dMVCommon_gap_0x224C4[] = {
	{ 0x2002, (void*)dMVCommon_gap_0x204F8_sub_0x1EF8, { -658.76171875f, 345.0677490234375f, 206.84234619140625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_gap_0x204F8_sub_0x1F08, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_gap_0x204F8_sub_0x1F18, { 1713.91162109375f, 8.938522338867188f, 572.97412109375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_gap_0x204F8_sub_0x1F28, { -3106.75634765625f, -219.53819274902344f, -711.1441040039062f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMVCommon_gap_0x204F8_sub_0x1F38, { 552.084228515625f, 218.26011657714844f, 433.7709045410156f }, { 0.0f, -0.6380000114440918f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x225CC to 0x22C90 (1732 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint[8] = {
	(AObjEvent32 *)((u8*)dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data + 0x78),
	NULL,
	(AObjEvent32 *)((u8*)dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data + 0x7C),
	NULL,
	(AObjEvent32 *)((u8*)dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data + 0x88),
	NULL,
	NULL,
	NULL,
};

u32 dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFFFF,
	aobjEvent32End(),
};

u32 dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x14[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFFFF,
	aobjEvent32End(),
};

u32 dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x28[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFFFF,
	aobjEvent32End(),
};

u32 dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x3C[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFFFF,
	aobjEvent32End(),
};

u32 dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x50[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFFFF,
	aobjEvent32End(),
};

u32 dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x64[5] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFFFFF,
	aobjEvent32End(),
};

AObjEvent32 *dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x78[1] = {
	(AObjEvent32 *)dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data,
};

AObjEvent32 *dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x7C[3] = {
	(AObjEvent32 *)dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x14,
	(AObjEvent32 *)dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x28,
	(AObjEvent32 *)dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x3C,
};

AObjEvent32 *dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x88[3] = {
	(AObjEvent32 *)dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x50,
	(AObjEvent32 *)dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x64,
	NULL,
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x88_post_data_0x0000[0x610] = {
	#include <MVCommon/RoomDeskGroundMatAnimJoint_MatAnimJoint_data_at_0x88_post_data_0x0000.data.inc.c>
};

/* MObjSub-list head @ 0x22c90 — 2-entry MObjSub** array.
 * The real MObjSub data starts at +0x8 (dMVCommon_RoomSpotlightMObjSub_MObjSub_real below). */
MObjSub **dMVCommon_RoomSpotlightMObjSub_MObjSub[2] = {
	NULL,
	NULL,
};

/* The real MObjSub @ +0x8 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dMVCommon_RoomSpotlightMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0010, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_I, G_IM_SIZ_8b,
		0x0010,
		0x0020, 0x0010, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x22D08 to 0x22E18 (272 bytes) */
/* gap sub-block @ 0x22D10 (was gap+0x8, 120 bytes) — secondary MObjSub */
MObjSub dMVCommon_gap_0x22D08_sub_0x8[1] = {
	{
		0x0000,
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_I, G_IM_SIZ_8b,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x22D88 (was gap+0x80, 16 bytes) — MObjSub*[4] list */
MObjSub *dMVCommon_gap_0x22D08_sub_0x80[4] = {
	&dMVCommon_RoomSpotlightMObjSub_MObjSub_real,
	&dMVCommon_gap_0x22D08_sub_0x8,
	NULL,
	NULL,
};

/* gap sub-block @ 0x22D98 (was gap+0x90, 64 bytes) */
Vtx dMVCommon_gap_0x22D08_sub_0x90[4] = {
	#include <MVCommon/gap_0x22D08_sub_0x90.vtx.inc.c>
};

/* gap sub-block @ 0x22DD8 (was gap+0xD0, 64 bytes) */
Vtx dMVCommon_gap_0x22D08_sub_0xD0[4] = {
	#include <MVCommon/gap_0x22D08_sub_0xD0.vtx.inc.c>
};

/* DisplayList: RoomSpotlightDisplayList @ 0x22E18 (232 bytes, 29 cmds) */
Gfx dMVCommon_RoomSpotlightDisplayList_DisplayList[29] = {
	#include <MVCommon/RoomSpotlightDisplayList.dl.inc.c>
};

/* Raw data from file offset 0x22F00 to 0x22F10 (16 bytes) */
DObjDLLink dMVCommon_RoomSpotlightDLLink[] = {
	{ 1, dMVCommon_RoomSpotlightDisplayList_DisplayList },
	{ 4, NULL },
};

/* Raw data from file offset 0x22F10 to 0x24200 (4848 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
AObjEvent32 *dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint[1] = {
	(AObjEvent32 *)((u8*)dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data + 0x48),
};

u32 dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data[9] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 150),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 100),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 160),
	    0xFFFFFF00,
	aobjEvent32End(),
};

u32 dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x24[9] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 150),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 100),
	    0xFFFFFF80,
	aobjEvent32SetExtValBlock(0x001, 160),
	    0xFFFFFF80,
	aobjEvent32End(),
};

AObjEvent32 *dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x48[3] = {
	(AObjEvent32 *)dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data,
	(AObjEvent32 *)dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x24,
	NULL,
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x48_post[16] = {
	#include <MVCommon/RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x48_post.data.inc.c>
};

u8 dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x64[0x804] = {
	#include <MVCommon/RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x64.data.inc.c>
};

/* Trailing region after 2nd consecutive aobjEvent32End() — kept
 * as raw bytes pending reloc-chain analysis. */
u8 dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x64_post[4] = {
	#include <MVCommon/RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x64_post.data.inc.c>
};

u8 dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x86C[0x800] = {
	#include <MVCommon/RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x86C.data.inc.c>
};

u8 dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x106C[0x90] = {
	#include <MVCommon/RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x106C.data.inc.c>
};

u8 dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x10FC[0x40] = {
	#include <MVCommon/RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x10FC.data.inc.c>
};

/* DL #1: ends at +0xD8 (gsSPEndDisplayList()) — 28 cmds */
Gfx dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x113C[28] = {
	#include <MVCommon/RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x113C.dl.inc.c>
};

/* DL #2: starts at parent +0x121C, ends at parent +0x12EC — 26 cmds */
Gfx dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x121C[26] = {
	#include <MVCommon/RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x121C.dl.inc.c>
};

/* RoomOutside scene-graph block @ 0x24200 (1288 bytes).
 * Header is a DObjDLLink[3] + padding + Vtx/Light data + embedded DL. */
DObjDLLink dMVCommon_RoomOutside_DisplayList[] = {
	{ 0, (Gfx *)((u8 *)dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x113C + 0x40) },
	{ 1, dMVCommon_RoomSpotlightMatAnimJoint_MatAnimJoint_data_at_0x121C },
	{ 4, NULL },
};

PAD(16);

u8 dMVCommon_RoomOutside_DisplayList_Tex_0x0028[0x400] = {
	#include <MVCommon/RoomOutside_DisplayList_Tex_0x0028.tex.inc.c>
};

Vtx dMVCommon_RoomOutside_DisplayList_Vtx_0x0428[4] = {
	#include <MVCommon/RoomOutside_DisplayList_Vtx_0x0428.vtx.inc.c>
};

Gfx dMVCommon_RoomOutside_DisplayList_DL_0x0468[20] = {
	#include <MVCommon/RoomOutside_DisplayList_DL_0x0468.dl.inc.c>
};

DObjDLLink dMVCommon_RoomSunlightDLLink[] = {
	{ 1, dMVCommon_RoomOutside_DisplayList_DL_0x0468 },
	{ 4, NULL },
};

PAD(8);

