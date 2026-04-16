/* relocData file 55: MVOpeningRun */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Raw data from file offset 0x0000 to 0x0004 (4 bytes) */
u8 dMVOpeningRun_gap_0x0000[4] = {
	#include <MVOpeningRun/gap_0x0000.data.inc.c>
};

/* Raw data from file offset 0x0004 to 0x00B4 (176 bytes) */
u32 dMVOpeningRun_Mario_AnimJoint[44] = {
	#include <MVOpeningRun/Mario_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x00B4 to 0x0124 (112 bytes) */
u32 dMVOpeningRun_Fox_AnimJoint[28] = {
	#include <MVOpeningRun/Fox_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0124 to 0x0184 (96 bytes) */
u32 dMVOpeningRun_Donkey_AnimJoint[24] = {
	aobjEvent32SetVal(0x050, 0),
	    0xC4231C23,
	    0xC4DC5A37,
	aobjEvent32SetValAfter(0x020, 0),
	    0x00000000,
	aobjEvent32SetVal(0x010, 135),
	    0xC4231C23,
	aobjEvent32SetValBlock(0x040, 115),
	    0xC4DC5A37,
	aobjEvent32SetTargetRate(0x040, 0),
	    0x4286A12D,
	aobjEvent32SetValRate(0x040, 30),
	    0x42C5B9EB,
	    0x419F6247,
	aobjEvent32Wait(20),
	aobjEvent32SetValRateBlock(0x010, 10),
	    0xC4231C23,
	    0xC07FBE6B,
	aobjEvent32SetVal0RateBlock(0x050, 35),
	    0xC450109D,
	    0x43F2F0A9,
	    0x00000000,
	    0x00000000,
	aobjEvent32End(),
};

/* Raw data from file offset 0x0184 to 0x0224 (160 bytes) */
u32 dMVOpeningRun_Samus_AnimJoint[40] = {
	aobjEvent32SetValBlock(0x070, 0),
	    0x4457C5A6,
	    0xC2E36497,
	    0xC481D6C6,
	aobjEvent32SetVal(0x030, 62),
	    0x4457C5A6,
	    0xC2E36497,
	aobjEvent32SetValBlock(0x040, 45),
	    0xC481D6C6,
	aobjEvent32SetTargetRate(0x040, 0),
	    0x43169029,
	aobjEvent32SetValRateBlock(0x040, 11),
	    0xC33250F3,
	    0x421E6BD6,
	aobjEvent32SetValRate(0x040, 20),
	    0x4325B98C,
	    0x3FBA6870,
	aobjEvent32Wait(6),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBF3DC5E4,
	aobjEvent32SetValRateBlock(0x030, 14),
	    0x44468D97,
	    0xC1B629A1,
	    0xC2F4119B,
	    0x3F8D3293,
	aobjEvent32SetValRateBlock(0x070, 22),
	    0x422D6D7E,
	    0xC1125509,
	    0xC293F827,
	    0x3FBCB040,
	    0xC2EA4D5F,
	    0xC182DE10,
	aobjEvent32SetValRate(0x040, 82),
	    0xC3C8FD00,
	    0x40A70EC2,
	aobjEvent32SetVal0RateBlock(0x030, 82),
	    0xC1C875B8,
	    0x00000000,
	    0x00000000,
	    0x00CC0089,
};

/* Raw data from file offset 0x0224 to 0x0334 (272 bytes) */
u32 dMVOpeningRun_Link_AnimJoint[68] = {
	#include <MVOpeningRun/Link_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0334 to 0x03A4 (112 bytes) */
u32 dMVOpeningRun_Yoshi_AnimJoint[28] = {
	#include <MVOpeningRun/Yoshi_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x03A4 to 0x0484 (224 bytes) */
u32 dMVOpeningRun_Kirby_AnimJoint[56] = {
	#include <MVOpeningRun/Kirby_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0484 to 0x0528 (164 bytes) */
u32 dMVOpeningRun_Pikachu_AnimJoint[41] = {
	#include <MVOpeningRun/Pikachu_AnimJoint.data.inc.c>
};

/* Texture data for sprite Wallpaper */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Wallpaper (160x130 ci8, 11 tiles) */
u8 dMVOpeningRun_Wallpaper_tex[] = {
    #include <MVOpeningRun/Wallpaper.ci8.inc.c>
};

/* Palette: @ 0x56C0 (16 colors RGBA5551) */
u16 dMVOpeningRun_palette_0x56C0[16] = {
	#include <MVOpeningRun/palette_0x56C0.palette.inc.c>
};

/* Raw data from file offset 0x56E0 to 0x57F0 (272 bytes) */
u8 dMVOpeningRun_gap_0x56E0[272] = {
	#include <MVOpeningRun/gap_0x56E0.data.inc.c>
};

/* Sprite: Wallpaper */

/* Sprite: Wallpaper (160x120 ci8) */

Bitmap dMVOpeningRun_Wallpaper_bitmaps[] = {
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x788, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0xF10, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x1698, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x1E20, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x25A8, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x2D30, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x34B8, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x3C40, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x43C8, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tex + 0x4B50, 10, 0 },
};

Sprite dMVOpeningRun_Wallpaper = {
	0, 0,
	160, 120,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMVOpeningRun_palette_0x56C0,
	0, 1,
	11, 156,
	11, 12,
	2, 1,
	(Bitmap*)dMVOpeningRun_Wallpaper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

