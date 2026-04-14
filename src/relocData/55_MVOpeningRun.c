/* relocData file 55: MVOpeningRun */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0004 (4 bytes) */
u8 dMVOpeningRun_gap_0x0000[4] = {
	#include <MVOpeningRun/gap_0x0000.data.inc.c>
};

/* Raw data from file offset 0x0004 to 0x00B4 (176 bytes) */
u8 dMVOpeningRun_Mario_AnimJoint[176] = {
	#include <MVOpeningRun/Mario_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x00B4 to 0x0124 (112 bytes) */
u8 dMVOpeningRun_Fox_AnimJoint[112] = {
	#include <MVOpeningRun/Fox_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0124 to 0x0184 (96 bytes) */
u8 dMVOpeningRun_Donkey_AnimJoint[96] = {
	#include <MVOpeningRun/Donkey_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0184 to 0x0224 (160 bytes) */
u8 dMVOpeningRun_Samus_AnimJoint[160] = {
	#include <MVOpeningRun/Samus_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0224 to 0x0334 (272 bytes) */
u8 dMVOpeningRun_Link_AnimJoint[272] = {
	#include <MVOpeningRun/Link_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0334 to 0x03A4 (112 bytes) */
u8 dMVOpeningRun_Yoshi_AnimJoint[112] = {
	#include <MVOpeningRun/Yoshi_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x03A4 to 0x0484 (224 bytes) */
u8 dMVOpeningRun_Kirby_AnimJoint[224] = {
	#include <MVOpeningRun/Kirby_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0484 to 0x0528 (164 bytes) */
u8 dMVOpeningRun_Pikachu_AnimJoint[164] = {
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

