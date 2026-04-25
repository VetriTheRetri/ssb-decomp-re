/* relocData file 167: MNTitle */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Sprite: LogoAnimCutout */

Gfx dMNTitle_LogoAnimCutout_dl[] = { gsSPEndDisplayList() };

/* Texture: LogoAnimCutout (300(304)x239 i4, 20 tiles) */
u8 dMNTitle_LogoAnimCutout_tex[36480] = {
    #include <MNTitle/LogoAnimCutout.i4.inc.c>
};

Bitmap dMNTitle_LogoAnimCutout_bitmaps[] = {
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x728, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0xE50, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x1578, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x1CA0, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x23C8, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x2AF0, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x3218, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x3940, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x4068, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x4790, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x4EB8, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x55E0, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x5D08, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x6430, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x6B58, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x7280, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x79A8, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x80D0, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_LogoAnimCutout_tex + 0x87F8, 11, 0 },
};

/* Sprite: LogoAnimCutout (300x220 i4) */
Sprite dMNTitle_LogoAnimCutout = {
	0, 0,
	300, 220,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	20, 264,
	11, 12,
	4, 0,
	(Bitmap*)dMNTitle_LogoAnimCutout_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: LogoAnimStrikeV */

Gfx dMNTitle_LogoAnimStrikeV_dl[] = { gsSPEndDisplayList() };

/* Texture: LogoAnimStrikeV (30(32)x124 i4c) */
u8 dMNTitle_LogoAnimStrikeV_tex[1984] = {
    #include <MNTitle/LogoAnimStrikeV.i4c.inc.c>
};

Bitmap dMNTitle_LogoAnimStrikeV_bitmaps[] = {
	{ 30, 32, 0, 0, dMNTitle_LogoAnimStrikeV_tex, 124, 0 },
};

/* Sprite: LogoAnimStrikeV (30x124 i4c) */
Sprite dMNTitle_LogoAnimStrikeV = {
	0, 0,
	30, 124,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	124, 124,
	4, 4,
	(Bitmap*)dMNTitle_LogoAnimStrikeV_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: LogoAnimStrikeH */

Gfx dMNTitle_LogoAnimStrikeH_dl[] = { gsSPEndDisplayList() };

/* Texture: LogoAnimStrikeH (128x12 i4c) */
u8 dMNTitle_LogoAnimStrikeH_tex[768] = {
    #include <MNTitle/LogoAnimStrikeH.i4c.inc.c>
};

Bitmap dMNTitle_LogoAnimStrikeH_bitmaps[] = {
	{ 128, 128, 0, 0, dMNTitle_LogoAnimStrikeH_tex, 12, 0 },
};

/* Sprite: LogoAnimStrikeH (128x12 i4c) */
Sprite dMNTitle_LogoAnimStrikeH = {
	0, 0,
	128, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 4,
	(Bitmap*)dMNTitle_LogoAnimStrikeH_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: LogoAnimFull */

Gfx dMNTitle_LogoAnimFull_dl[] = { gsSPEndDisplayList() };

/* Texture: LogoAnimFull (128x127 i4, 4 tiles) */
u8 dMNTitle_LogoAnimFull_tex[8152] = {
    #include <MNTitle/LogoAnimFull.i4.inc.c>
};

Bitmap dMNTitle_LogoAnimFull_bitmaps[] = {
	{ 128, 128, 0, 0, dMNTitle_LogoAnimFull_tex, 32, 0 },
	{ 128, 128, 0, 0, dMNTitle_LogoAnimFull_tex + 0x808, 32, 0 },
	{ 128, 128, 0, 0, dMNTitle_LogoAnimFull_tex + 0x1010, 32, 0 },
	{ 128, 128, 0, 0, dMNTitle_LogoAnimFull_tex + 0x1818, 31, 0 },
};

/* Sprite: LogoAnimFull (128x124 i4) */
Sprite dMNTitle_LogoAnimFull = {
	0, 0,
	128, 124,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	4, 72,
	31, 32,
	4, 0,
	(Bitmap*)dMNTitle_LogoAnimFull_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: BorderUpper */

Gfx dMNTitle_BorderUpper_dl[] = { gsSPEndDisplayList() };

/* Texture: BorderUpper (300(304)x10 i4) */
u8 dMNTitle_BorderUpper_tex[1520] = {
    #include <MNTitle/BorderUpper.i4.inc.c>
};

Bitmap dMNTitle_BorderUpper_bitmaps[] = {
	{ 300, 304, 0, 0, dMNTitle_BorderUpper_tex, 10, 0 },
};

/* Sprite: BorderUpper (300x10 i4) */
Sprite dMNTitle_BorderUpper = {
	0, 0,
	300, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	10, 10,
	4, 0,
	(Bitmap*)dMNTitle_BorderUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Gradient */

Gfx dMNTitle_Gradient_dl[] = { gsSPEndDisplayList() };

/* Texture: Gradient (300(304)x80 i4, 7 tiles) */
u8 dMNTitle_Gradient_tex[12208] = {
    #include <MNTitle/Gradient.i4.inc.c>
};

Bitmap dMNTitle_Gradient_bitmaps[] = {
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex + 0x728, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex + 0xE50, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex + 0x1578, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex + 0x1CA0, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex + 0x23C8, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex + 0x2AF0, 8, 0 },
};

/* Sprite: Gradient (300x80 i4) */
Sprite dMNTitle_Gradient = {
	0, 0,
	300, 80,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	7, 108,
	12, 12,
	4, 0,
	(Bitmap*)dMNTitle_Gradient_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: TM */

Gfx dMNTitle_TM_dl[] = { gsSPEndDisplayList() };

/* Texture: TM (32x12 i4) */
u8 dMNTitle_TM_tex[192] = {
    #include <MNTitle/TM.i4.inc.c>
};

Bitmap dMNTitle_TM_bitmaps[] = {
	{ 32, 32, 0, 0, dMNTitle_TM_tex, 12, 0 },
};

/* Sprite: TM (32x12 i4) */
Sprite dMNTitle_TM = {
	0, 0,
	32, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dMNTitle_TM_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

#if defined(REGION_JP)

/* JP title text sprites — different from US (Japanese text vs English) */

Gfx dMNTitle_Cutout_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_Cutout_tex[4472] = {
    #include <MNTitle/Cutout.tex.inc.c>
};

Bitmap dMNTitle_Cutout_bitmaps[] = {
	{ 48, 48, 0, 0, dMNTitle_Cutout_tex, 85, 0 },
	{ 48, 48, 0, 0, dMNTitle_Cutout_tex + 0xFF8, 8, 0 },
};

Sprite dMNTitle_Cutout = {
	0, 0,
	48, 92,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	84, 85,
	3, 1,
	(Bitmap*)dMNTitle_Cutout_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

Gfx dMNTitle_JPChar2_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_JPChar2_tex[1728] = {
    #include <MNTitle/JPChar2.tex.inc.c>
};

Bitmap dMNTitle_JPChar2_bitmaps[] = {
	{ 48, 48, 0, 0, dMNTitle_JPChar2_tex, 36, 0 },
};

Sprite dMNTitle_JPChar2 = {
	0, 0,
	48, 36,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	36, 36,
	3, 1,
	(Bitmap*)dMNTitle_JPChar2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

Gfx dMNTitle_JPChar3_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_JPChar3_tex[1728] = {
    #include <MNTitle/JPChar3.tex.inc.c>
};

Bitmap dMNTitle_JPChar3_bitmaps[] = {
	{ 32, 32, 0, 0, dMNTitle_JPChar3_tex, 54, 0 },
};

Sprite dMNTitle_JPChar3 = {
	0, 0,
	32, 54,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	54, 54,
	3, 1,
	(Bitmap*)dMNTitle_JPChar3_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

Gfx dMNTitle_JPChar4_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_JPChar4_tex[4936] = {
    #include <MNTitle/JPChar4.tex.inc.c>
};

Bitmap dMNTitle_JPChar4_bitmaps[] = {
	{ 64, 64, 0, 0, dMNTitle_JPChar4_tex, 64, 0 },
	{ 64, 64, 0, 0, dMNTitle_JPChar4_tex + 0x1008, 13, 0 },
};

Sprite dMNTitle_JPChar4 = {
	0, 0,
	64, 76,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	63, 64,
	3, 1,
	(Bitmap*)dMNTitle_JPChar4_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

Gfx dMNTitle_JPChar5_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_JPChar5_tex[1728] = {
    #include <MNTitle/JPChar5.tex.inc.c>
};

Bitmap dMNTitle_JPChar5_bitmaps[] = {
	{ 32, 32, 0, 0, dMNTitle_JPChar5_tex, 54, 0 },
};

Sprite dMNTitle_JPChar5 = {
	0, 0,
	32, 54,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	54, 54,
	3, 1,
	(Bitmap*)dMNTitle_JPChar5_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

Gfx dMNTitle_JPChar6_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_JPChar6_tex[624] = {
    #include <MNTitle/JPChar6.tex.inc.c>
};

Bitmap dMNTitle_JPChar6_bitmaps[] = {
	{ 24, 24, 0, 0, dMNTitle_JPChar6_tex, 26, 0 },
};

Sprite dMNTitle_JPChar6 = {
	0, 0,
	24, 26,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	26, 26,
	3, 1,
	(Bitmap*)dMNTitle_JPChar6_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

Gfx dMNTitle_JPChar7_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_JPChar7_tex[1520] = {
    #include <MNTitle/JPChar7.tex.inc.c>
};

Bitmap dMNTitle_JPChar7_bitmaps[] = {
	{ 40, 40, 0, 0, dMNTitle_JPChar7_tex, 38, 0 },
};

Sprite dMNTitle_JPChar7 = {
	0, 0,
	40, 38,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	38, 38,
	3, 1,
	(Bitmap*)dMNTitle_JPChar7_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

Gfx dMNTitle_JPChar8_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_JPChar8_tex[384] = {
    #include <MNTitle/JPChar8.tex.inc.c>
};

Bitmap dMNTitle_JPChar8_bitmaps[] = {
	{ 24, 24, 0, 0, dMNTitle_JPChar8_tex, 16, 0 },
};

Sprite dMNTitle_JPChar8 = {
	0, 0,
	24, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dMNTitle_JPChar8_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

Gfx dMNTitle_JPChar9_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_JPChar9_tex[2304] = {
    #include <MNTitle/JPChar9.tex.inc.c>
};

Bitmap dMNTitle_JPChar9_bitmaps[] = {
	{ 32, 32, 0, 0, dMNTitle_JPChar9_tex, 72, 0 },
};

Sprite dMNTitle_JPChar9 = {
	0, 0,
	32, 72,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	72, 72,
	3, 1,
	(Bitmap*)dMNTitle_JPChar9_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

Gfx dMNTitle_JPChar10_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_JPChar10_tex[960] = {
    #include <MNTitle/JPChar10.tex.inc.c>
};

Bitmap dMNTitle_JPChar10_bitmaps[] = {
	{ 24, 24, 0, 0, dMNTitle_JPChar10_tex, 40, 0 },
};

Sprite dMNTitle_JPChar10 = {
	0, 0,
	24, 40,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	40, 40,
	3, 1,
	(Bitmap*)dMNTitle_JPChar10_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

Gfx dMNTitle_JPChar11_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_JPChar11_tex[1920] = {
    #include <MNTitle/JPChar11.tex.inc.c>
};

Bitmap dMNTitle_JPChar11_bitmaps[] = {
	{ 32, 32, 0, 0, dMNTitle_JPChar11_tex, 60, 0 },
};

Sprite dMNTitle_JPChar11 = {
	0, 0,
	32, 60,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	60, 60,
	3, 1,
	(Bitmap*)dMNTitle_JPChar11_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

Gfx dMNTitle_TMUnk_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_TMUnk_tex[160] = {
    #include <MNTitle/TMUnk.tex.inc.c>
};

Bitmap dMNTitle_TMUnk_bitmaps[] = {
	{ 16, 16, 0, 0, dMNTitle_TMUnk_tex, 10, 0 },
};

Sprite dMNTitle_TMUnk = {
	0, 0,
	16, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	10, 10,
	3, 1,
	(Bitmap*)dMNTitle_TMUnk_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

Gfx dMNTitle_Super_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_Super_tex[5104] = {
    #include <MNTitle/Super.tex.inc.c>
};

Bitmap dMNTitle_Super_bitmaps[] = {
	{ 56, 56, 0, 0, dMNTitle_Super_tex, 73, 0 },
	{ 56, 56, 0, 0, dMNTitle_Super_tex + 0x1000, 18, 0 },
};

Sprite dMNTitle_Super = {
	0, 0,
	56, 90,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	72, 73,
	3, 1,
	(Bitmap*)dMNTitle_Super_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

Gfx dMNTitle_Copyright_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_Copyright_tex[14312] = {
    #include <MNTitle/Copyright.tex.inc.c>
};

Bitmap dMNTitle_Copyright_bitmaps[] = {
	{ 300, 304, 0, 0, dMNTitle_Copyright_tex, 13, 0 },
	{ 300, 304, 0, 0, dMNTitle_Copyright_tex + 0xF78, 13, 0 },
	{ 300, 304, 0, 0, dMNTitle_Copyright_tex + 0x1EF0, 13, 0 },
	{ 300, 304, 0, 0, dMNTitle_Copyright_tex + 0x2E68, 8, 0 },
};

Sprite dMNTitle_Copyright = {
	0, 0,
	300, 44,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	4, 72,
	12, 13,
	3, 1,
	(Bitmap*)dMNTitle_Copyright_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

Gfx dMNTitle_PressStart_dl[] = { gsSPEndDisplayList() };

u8 dMNTitle_PressStart_tex[1728] = {
    #include <MNTitle/PressStart.ia8.inc.c>
};

Bitmap dMNTitle_PressStart_bitmaps[] = {
	{ 96, 96, 0, 0, dMNTitle_PressStart_tex, 18, 0 },
};

Sprite dMNTitle_PressStart = {
	0, 0,
	96, 18,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	18, 18,
	3, 1,
	(Bitmap*)dMNTitle_PressStart_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

#else /* US */

/* Sprite: Cutout */

Gfx dMNTitle_Cutout_dl[] = { gsSPEndDisplayList() };

/* Texture: Cutout (208x92 i4, 3 tiles) */
u8 dMNTitle_Cutout_tex[9584] = {
    #include <MNTitle/Cutout.i4.inc.c>
};

Bitmap dMNTitle_Cutout_bitmaps[] = {
	{ 208, 208, 0, 0, dMNTitle_Cutout_tex, 31, 0 },
	{ 208, 208, 0, 0, dMNTitle_Cutout_tex + 0xCA0, 31, 0 },
	{ 208, 208, 0, 0, dMNTitle_Cutout_tex + 0x1940, 30, 0 },
};

/* Sprite: Cutout (208x90 i4) */
Sprite dMNTitle_Cutout = {
	0, 0,
	208, 90,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	3, 60,
	30, 31,
	4, 0,
	(Bitmap*)dMNTitle_Cutout_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: TMUnk */

Gfx dMNTitle_TMUnk_dl[] = { gsSPEndDisplayList() };

/* Texture: TMUnk (32x12 i4) */
u8 dMNTitle_TMUnk_tex[192] = {
    #include <MNTitle/TMUnk.i4.inc.c>
};

Bitmap dMNTitle_TMUnk_bitmaps[] = {
	{ 32, 32, 0, 0, dMNTitle_TMUnk_tex, 12, 0 },
};

/* Sprite: TMUnk (32x12 i4) */
Sprite dMNTitle_TMUnk = {
	0, 0,
	32, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dMNTitle_TMUnk_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Copyright */

Gfx dMNTitle_Copyright_dl[] = { gsSPEndDisplayList() };

/* Texture: Copyright (300(304)x47 ia8, 4 tiles) */
u8 dMNTitle_Copyright_tex[14312] = {
    #include <MNTitle/Copyright.ia8.inc.c>
};

Bitmap dMNTitle_Copyright_bitmaps[] = {
	{ 300, 304, 0, 0, dMNTitle_Copyright_tex, 13, 0 },
	{ 300, 304, 0, 0, dMNTitle_Copyright_tex + 0xF78, 13, 0 },
	{ 300, 304, 0, 0, dMNTitle_Copyright_tex + 0x1EF0, 13, 0 },
	{ 300, 304, 0, 0, dMNTitle_Copyright_tex + 0x2E68, 8, 0 },
};

/* Sprite: Copyright (300x44 ia8) */
Sprite dMNTitle_Copyright = {
	0, 0,
	300, 44,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	4, 72,
	12, 13,
	3, 1,
	(Bitmap*)dMNTitle_Copyright_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: PressStart */

Gfx dMNTitle_PressStart_dl[] = { gsSPEndDisplayList() };

/* Texture: PressStart (96x18 ia8) */
u8 dMNTitle_PressStart_tex[1728] = {
    #include <MNTitle/PressStart.ia8.inc.c>
};

Bitmap dMNTitle_PressStart_bitmaps[] = {
	{ 96, 96, 0, 0, dMNTitle_PressStart_tex, 18, 0 },
};

/* Sprite: PressStart (96x18 ia8) */
Sprite dMNTitle_PressStart = {
	0, 0,
	96, 18,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	18, 18,
	3, 1,
	(Bitmap*)dMNTitle_PressStart_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Super */

Gfx dMNTitle_Super_dl[] = { gsSPEndDisplayList() };

/* Texture: Super (64x50 ia8) */
u8 dMNTitle_Super_tex[3200] = {
    #include <MNTitle/Super.ia8.inc.c>
};

Bitmap dMNTitle_Super_bitmaps[] = {
	{ 64, 64, 0, 0, dMNTitle_Super_tex, 50, 0 },
};

/* Sprite: Super (64x50 ia8) */
Sprite dMNTitle_Super = {
	0, 0,
	64, 50,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	50, 50,
	3, 1,
	(Bitmap*)dMNTitle_Super_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Smash */

Gfx dMNTitle_Smash_dl[] = { gsSPEndDisplayList() };

/* Texture: Smash (172x82 rgba32, 21 tiles) */
u8 dMNTitle_Smash_tex[56576] = {
    #include <MNTitle/Smash.rgba32.inc.c>
};

Bitmap dMNTitle_Smash_bitmaps[] = {
	{ 172, 172, 0, 0, dMNTitle_Smash_tex, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xAC8, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x1590, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x2058, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x2B20, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x35E8, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x40B0, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x4B78, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x5640, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x6108, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x6BD0, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x7698, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x8160, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x8C28, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0x96F0, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xA1B8, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xAC80, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xB748, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xC210, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xCCD8, 4, 0 },
	{ 172, 172, 0, 0, dMNTitle_Smash_tex + 0xD7A0, 2, 0 },
};

/* Sprite: Smash (172x62 rgba32) */
Sprite dMNTitle_Smash = {
	0, 0,
	172, 62,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	21, 276,
	3, 4,
	0, 3,
	(Bitmap*)dMNTitle_Smash_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Bros */

Gfx dMNTitle_Bros_dl[] = { gsSPEndDisplayList() };

/* Texture: Bros (56x52 ia8) */
u8 dMNTitle_Bros_tex[2912] = {
    #include <MNTitle/Bros.ia8.inc.c>
};

Bitmap dMNTitle_Bros_bitmaps[] = {
	{ 56, 56, 0, 0, dMNTitle_Bros_tex, 52, 0 },
};

/* Sprite: Bros (56x52 ia8) */
Sprite dMNTitle_Bros = {
	0, 0,
	56, 52,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	52, 52,
	3, 1,
	(Bitmap*)dMNTitle_Bros_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

#endif

/* Raw data from file offset 0x251D0 to 0x25350 (384 bytes) */
u32 dMNTitle_LogoAnimJoint_AnimJoint[96] = {
	aobjEvent32End(),
	(u32)((u8*)dMNTitle_LogoAnimJoint_AnimJoint + 0x14),
	(u32)((u8*)dMNTitle_LogoAnimJoint_AnimJoint + 0x48),
	(u32)((u8*)dMNTitle_LogoAnimJoint_AnimJoint + 0xB4),
	(u32)((u8*)dMNTitle_LogoAnimJoint_AnimJoint + 0x120),
	aobjEvent32SetValBlock(0x180, 0),
	    0x3FB33333,
	    0x3FB33333,
	aobjEvent32SetValBlock(0x180, 110),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x180, 1),
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32SetValBlock(0x180, 59),
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x010, 0),
	    0xC2040000,
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetVal0Rate(0x010, 30),
	    0xC2040000,
	aobjEvent32SetValBlock(0x180, 29),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x180, 1),
	    0x3FB37574,
	    0x3FB37574,
	aobjEvent32SetVal0Rate(0x010, 80),
	    0xC1B80000,
	aobjEvent32SetValBlock(0x180, 80),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetVal(0x010, 60),
	    0xC1B80000,
	aobjEvent32SetValBlock(0x180, 1),
	    0x37280000,
	    0x37280000,
	aobjEvent32SetValBlock(0x180, 59),
	    0x37280000,
	    0x37280000,
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x020, 0),
	    0xC1C80000,
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetVal0Rate(0x020, 60),
	    0xC1C80000,
	aobjEvent32SetValBlock(0x180, 59),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x180, 1),
	    0x3FAE2276,
	    0x3FAE2276,
	aobjEvent32SetVal0Rate(0x020, 50),
	    0xC1900000,
	aobjEvent32SetValBlock(0x180, 50),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetVal(0x020, 60),
	    0xC1900000,
	aobjEvent32SetValBlock(0x180, 1),
	    0x37280000,
	    0x37280000,
	aobjEvent32SetValBlock(0x180, 59),
	    0x37280000,
	    0x37280000,
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x030, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetVal0Rate(0x030, 110),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x180, 110),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetVal0Rate(0x030, 60),
	    0x42C80000,
	    0x42700000,
	aobjEvent32SetValBlock(0x180, 1),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x180, 59),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

#if defined(REGION_JP)
u32 dMNTitle_LabelsAnimJoint_AnimJoint[264] = {
	#include <MNTitle/LabelsAnimJoint_AnimJoint.data.inc.c>
};
#else
/* Raw data from file offset 0x25350 to 0x258D0 (1408 bytes) */
u32 dMNTitle_LabelsAnimJoint_AnimJoint[352] = {
	aobjEvent32End(),
	(u32)((u8*)dMNTitle_LabelsAnimJoint_AnimJoint + 0x20),
	(u32)((u8*)dMNTitle_LabelsAnimJoint_AnimJoint + 0xF8),
	(u32)((u8*)dMNTitle_LabelsAnimJoint_AnimJoint + 0x1A4),
	(u32)((u8*)dMNTitle_LabelsAnimJoint_AnimJoint + 0x328),
	(u32)((u8*)dMNTitle_LabelsAnimJoint_AnimJoint + 0x494),
	(u32)((u8*)dMNTitle_LabelsAnimJoint_AnimJoint + 0x4D4),
	(u32)((u8*)dMNTitle_LabelsAnimJoint_AnimJoint + 0x520),
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,
	    0x3727C5AC,
	aobjEvent32SetValBlock(0x180, 11),
	    0x00000000,
	    0x3727C5AC,
	aobjEvent32SetTargetRate(0x080, 0),
	    0x3A81192F,
	aobjEvent32SetVal0RateBlock(0x180, 5),
	    0x3F532C8C,
	    0x4039ACB1,
	aobjEvent32SetVal0RateBlock(0x180, 5),
	    0x405FA151,
	    0x3F2F1102,
	aobjEvent32SetVal0RateBlock(0x180, 5),
	    0x3ECC2F78,
	    0x402409A2,
	aobjEvent32SetVal0RateBlock(0x180, 3),
	    0x400F84DC,
	    0x3F2A17EE,
	aobjEvent32SetVal0RateBlock(0x180, 3),
	    0x3FB33334,
	    0x3FB33334,
	aobjEvent32SetVal(0x080, 11),
	    0x3F800000,
	aobjEvent32SetValBlock(0x100, 10),
	    0x3F800000,
	aobjEvent32SetTargetRate(0x100, 0),
	    0x3C28FF54,
	aobjEvent32SetValRate(0x100, 2),
	    0x3FB33333,
	    0x3BB829FB,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x080, 0),
	    0x3C55C16C,
	aobjEvent32SetValRate(0x080, 2),
	    0x3FB33333,
	    0x3BE8F060,
	aobjEvent32Wait(1),
	aobjEvent32SetVal0Rate(0x100, 2),
	    0x3F8D8BC5,
	aobjEvent32Wait(1),
	aobjEvent32SetVal0RateBlock(0x080, 1),
	    0x3F8D8BC5,
	aobjEvent32SetVal0Rate(0x100, 2),
	    0x3FB33333,
	aobjEvent32SetVal0RateBlock(0x080, 1),
	    0x3FB33333,
	aobjEvent32SetVal0Rate(0x080, 3),
	    0x3F800000,
	aobjEvent32Wait(1),
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x3F800000,
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,
	    0x3727C5AC,
	aobjEvent32SetValBlock(0x180, 11),
	    0x00000000,
	    0x3727C5AC,
	aobjEvent32SetTargetRate(0x080, 0),
	    0x3A81192F,
	aobjEvent32SetVal0RateBlock(0x180, 5),
	    0x3F7A863E,
	    0x403412F7,
	aobjEvent32SetVal0RateBlock(0x180, 5),
	    0x405E711B,
	    0x3F144867,
	aobjEvent32SetVal0RateBlock(0x180, 5),
	    0x3F045CED,
	    0x40368265,
	aobjEvent32SetVal0RateBlock(0x180, 3),
	    0x3FF9F7CD,
	    0x3EC5AFFC,
	aobjEvent32SetVal0RateBlock(0x180, 3),
	    0x3FB33334,
	    0x3FB33334,
	aobjEvent32SetValBlock(0x180, 10),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetTargetRate(0x180, 0),
	    0x3C9A94DE,
	    0x3C9DADA2,
	aobjEvent32SetValRate(0x080, 2),
	    0x3E3851F0,
	    0x3CE3C6F1,
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x3E199980,
	aobjEvent32SetValRateBlock(0x180, 3),
	    0x3FA66669,
	    0x3E0FA7DF,
	    0x3F9F7CF0,
	    0x3E14E95A,
	aobjEvent32SetVal0RateBlock(0x180, 3),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x41F00000,
	aobjEvent32SetValRate(0x180, 0),
	    0x00000000,
	    0x3F3DF7B0,
	    0x40A00000,
	    0xBF7FBBC5,
	aobjEvent32SetValBlock(0x010, 0),
	    0xC1200000,
	aobjEvent32SetVal0Rate(0x080, 6),
	    0x3FC00000,
	aobjEvent32SetVal(0x010, 9),
	    0xC1F5CA71,
	aobjEvent32SetValRate(0x020, 9),
	    0x42200000,
	    0xBE088887,
	aobjEvent32SetVal0RateBlock(0x100, 3),
	    0x3F800000,
	aobjEvent32SetVal0RateBlock(0x100, 3),
	    0x3F333333,
	aobjEvent32SetValRateBlock(0x180, 0),
	    0x3F19999A,
	    0x3BA73F74,
	    0x3F8F5C29,
	    0xBCBD3213,
	aobjEvent32SetValBlock(0x180, 2),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetVal(0x180, 8),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x030, 7),
	    0xC1F5CA71,
	    0x42200000,
	aobjEvent32SetTargetRate(0x180, 0),
	    0x3D9BD484,
	    0xBD754070,
	aobjEvent32SetTargetRate(0x030, 0),
	    0xC01A075C,
	    0xBF6C373E,
	aobjEvent32SetValRate(0x030, 10),
	    0xC34D8474,
	    0xBF949266,
	    0xC1FAC9A4,
	    0x40AD860D,
	aobjEvent32SetValRateBlock(0x180, 4),
	    0x3FAF2B22,
	    0x3CBC49F4,
	    0x3ED6C51D,
	    0x3C54A4AB,
	aobjEvent32SetValRateBlock(0x180, 2),
	    0x3F4112A4,
	    0xBAA19F30,
	    0x3FD10518,
	    0x3A01628A,
	aobjEvent32SetValRateBlock(0x180, 2),
	    0x3F800000,
	    0x3E4214A1,
	    0x3F4CCCCE,
	    0x3C20D5AD,
	aobjEvent32SetVal0Rate(0x180, 7),
	    0x400CCCCD,
	    0x3FE66669,
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x020, 2),
	    0x42CCA9A4,
	    0x408075DF,
	aobjEvent32SetValBlock(0x010, 2),
	    0xC374E6B2,
	aobjEvent32SetTargetRate(0x010, 0),
	    0x408DA7CF,
	aobjEvent32SetValRate(0x030, 14),
	    0xC2D20000,
	    0x40C8A50D,
	    0x41C00000,
	    0xC19371AE,
	aobjEvent32Wait(3),
	aobjEvent32SetVal0RateBlock(0x180, 11),
	    0x3F800000,
	    0x3F19999A,
	aobjEvent32SetVal(0x030, 8),
	    0xC2D20000,
	    0x41C00000,
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x3FE66666,
	    0x3FE66666,
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x3E99999A,
	    0x3E99999A,
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x180, 5),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x1B0, 0),
	    0x4191CEDA,
	    0x41C00000,
	    0x40A00000,
	    0x3727C5AC,
	aobjEvent32SetVal(0x020, 16),
	    0x41C00000,
	aobjEvent32SetValBlock(0x190, 4),
	    0x4191CEDA,
	    0x40A00000,
	    0x3727C5AC,
	aobjEvent32SetTargetRate(0x180, 0),
	    0xBFB8E8F7,
	    0x3F5E25BD,
	aobjEvent32SetValRate(0x100, 2),
	    0x3FE66666,
	    0x3DFFFF36,
	aobjEvent32SetVal(0x010, 5),
	    0x41F00000,
	aobjEvent32SetVal0RateBlock(0x080, 2),
	    0x3F800000,
	aobjEvent32SetValBlock(0x180, 2),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetVal(0x180, 10),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x010, 7),
	    0x41F00000,
	aobjEvent32SetTargetRate(0x010, 0),
	    0x404BAB0C,
	aobjEvent32SetValRate(0x030, 9),
	    0x4360B9F1,
	    0x415727C1,
	    0x42D00000,
	    0xC078D3BF,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x180, 0),
	    0x3D98B152,
	    0xBE071C4E,
	aobjEvent32SetValRate(0x100, 5),
	    0x3F67A058,
	    0xBEBFFFDA,
	aobjEvent32SetVal0RateBlock(0x080, 5),
	    0x4012B4E0,
	aobjEvent32SetValRate(0x100, 1),
	    0x3FA917DB,
	    0x3DE14779,
	aobjEvent32SetVal0RateBlock(0x080, 1),
	    0x3F20961A,
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x4006B4E3,
	    0x4006B4E3,
	aobjEvent32SetValRate(0x020, 7),
	    0xC2100000,
	    0xC08C7FEB,
	aobjEvent32SetVal0Rate(0x180, 9),
	    0x4006B4E3,
	    0x4006B4E3,
	aobjEvent32SetValBlock(0x010, 7),
	    0x436FD7C0,
	aobjEvent32SetTargetRate(0x010, 0),
	    0xC0CD000A,
	aobjEvent32SetValRate(0x030, 11),
	    0x42D80000,
	    0xC0E55A74,
	    0x41C00000,
	    0x4050C06F,
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x180, 7),
	    0x3F800000,
	    0xBD43C13A,
	    0x3F800000,
	    0xBD43C13A,
	aobjEvent32SetVal0RateBlock(0x180, 2),
	    0x3FE703B1,
	    0x3FE7035D,
	aobjEvent32SetVal(0x030, 7),
	    0x42D80000,
	    0x41C00000,
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x3E9C0EBB,
	    0x3E9C0D6B,
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x180, 5),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,
	    0x40800000,
	aobjEvent32SetValBlock(0x180, 30),
	    0x00000000,
	    0x40800000,
	aobjEvent32SetVal(0x080, 8),
	    0x3F800000,
	aobjEvent32SetValBlock(0x100, 4),
	    0x3F800000,
	aobjEvent32SetVal(0x100, 16),
	    0x3F800000,
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x080, 12),
	    0x3F800000,
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x1A0, 0),
	    0xC30E8000,
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32SetValBlock(0x1A0, 21),
	    0xC30E8000,
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32SetValBlock(0x180, 0),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetVal(0x180, 29),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetVal0RateBlock(0x020, 26),
	    0xC2B00000,
	aobjEvent32SetValBlock(0x020, 3),
	    0xC2B00000,
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x1A0, 0),
	    0x43013333,
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32SetVal(0x020, 26),
	    0x43013333,
	aobjEvent32SetValBlock(0x180, 25),
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32SetValBlock(0x180, 1),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC009224D,
	aobjEvent32SetVal(0x180, 24),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetVal0RateBlock(0x020, 20),
	    0x42D20000,
	aobjEvent32SetValBlock(0x020, 4),
	    0x42D20000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};
#endif

/* Raw data from file offset 0x258D0 to 0x25E70 (1440 bytes) */
u32 dMNTitle_PressStartAnimJoint_AnimJoint[360] = {
	aobjEvent32End(),
	(u32)((u8*)dMNTitle_PressStartAnimJoint_AnimJoint + 0x8),
	aobjEvent32SetValBlock(0x180, 0),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x180, 19),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x180, 1),
	    0x00000000,
	    0x3727C5AC,
	aobjEvent32SetValBlock(0x180, 19),
	    0x00000000,
	    0x00000000,
	    0x1C000000,
	(u32)((u8*)dMNTitle_PressStartAnimJoint_AnimJoint + 0x8),
	aobjEvent32End(),
	(u32)((u8*)dMNTitle_PressStartAnimJoint_AnimJoint + 0x4C),
	(u32)((u8*)dMNTitle_PressStartAnimJoint_AnimJoint + 0x2B8),
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x010, 0),
	    0x00000000,
	aobjEvent32SetValRate(0x020, 12),
	    0xBF435608,
	    0xBBB879E5,
	aobjEvent32SetValBlock(0x010, 4),
	    0x00000000,
	aobjEvent32SetVal0Rate(0x010, 15),
	    0xBE9999A1,
	aobjEvent32Wait(8),
	aobjEvent32SetValRate(0x020, 15),
	    0x3ED45E7C,
	    0x3CCE0E2D,
	aobjEvent32Wait(7),
	aobjEvent32SetValRateBlock(0x010, 6),
	    0x00000000,
	    0x3D12492B,
	aobjEvent32SetValRate(0x010, 8),
	    0x3E4CCCD5,
	    0xB112492E,
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x020, 11),
	    0xBE680B34,
	    0x3BE7E960,
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x010, 6),
	    0xB3000000,
	    0xBC7C0FCA,
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x020, 8),
	    0x3F0C27F1,
	    0x3C53AA65,
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x010, 7),
	    0x00000000,
	    0xBD088881,
	aobjEvent32SetValRate(0x020, 12),
	    0x3CE33BC7,
	    0xBD7EF8A2,
	aobjEvent32SetValRateBlock(0x010, 5),
	    0xBECCCCD5,
	    0xBC14F20C,
	aobjEvent32SetValRateBlock(0x010, 6),
	    0xBDCCCCD5,
	    0x3C6A0EBA,
	aobjEvent32SetValRate(0x010, 8),
	    0xBE4CCCD5,
	    0xBC14F20C,
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x020, 4),
	    0x3E2F9D26,
	    0xBCCFD876,
	aobjEvent32SetValRate(0x020, 12),
	    0xBEC8F364,
	    0xBC6D2EC6,
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x010, 3),
	    0xBE4CCCD5,
	    0x3D3A2E90,
	aobjEvent32SetValRate(0x010, 8),
	    0x3E9999A1,
	    0x3D124934,
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x020, 8),
	    0xBE022125,
	    0x3B9C1840,
	aobjEvent32Wait(2),
	aobjEvent32SetVal0RateBlock(0x010, 6),
	    0x3E9999A1,
	aobjEvent32SetValRate(0x020, 9),
	    0xBEA15136,
	    0x3C6EBB9A,
	aobjEvent32SetValRateBlock(0x010, 7),
	    0x3E9999A1,
	    0xBD162FD1,
	aobjEvent32SetValRate(0x010, 8),
	    0xBE800006,
	    0x3D5C8DC2,
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x020, 13),
	    0x3E3AF006,
	    0x3C48B16A,
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(0x010, 5),
	    0x3F800000,
	    0x3C9D89DF,
	aobjEvent32SetValRate(0x010, 8),
	    0x32000000,
	    0xBD9999A3,
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x020, 11),
	    0xBC8720FC,
	    0x3C71931F,
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x010, 6),
	    0xBD4CCCD5,
	    0xBCCC0F04,
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x020, 15),
	    0x3F11D163,
	    0x3C291A2B,
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x010, 13),
	    0xBEF12FB0,
	    0x3B1B9292,
	aobjEvent32SetValRate(0x010, 9),
	    0x3B3F42F2,
	    0x3BA546D4,
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x020, 8),
	    0xBEB52E6B,
	    0x3BFC5882,
	aobjEvent32SetValRate(0x010, 11),
	    0xBEBC8E88,
	    0xBBAF4B30,
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x3E29DB83,
	    0x3D6EF080,
	aobjEvent32SetValRate(0x020, 12),
	    0x3EF3765A,
	    0x3C9B73C2,
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x010, 11),
	    0xBDE3EE97,
	    0x3BEE9E51,
	aobjEvent32SetValRate(0x010, 15),
	    0xBE382380,
	    0x3BF9A7A4,
	aobjEvent32SetValRateBlock(0x020, 7),
	    0x3E9E889A,
	    0x3D0FB826,
	aobjEvent32SetValRateBlock(0x020, 4),
	    0x3F9E889A,
	    0xBCCE7816,
	aobjEvent32SetValRate(0x020, 19),
	    0x3F22C25A,
	    0x3DF27775,
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x010, 15),
	    0x3DFB94CF,
	    0x3B9FFD41,
	aobjEvent32SetVal0Rate(0x010, 22),
	    0x00000000,
	aobjEvent32SetValRateBlock(0x020, 7),
	    0x3DF91FCE,
	    0x3C71A741,
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x3F627A02,
	    0xBC068C7A,
	aobjEvent32SetVal0RateBlock(0x020, 5),
	    0x00000000,
	    0x1C000000,
	(u32)((u8*)dMNTitle_PressStartAnimJoint_AnimJoint + 0x4C),
	aobjEvent32SetVal0RateBlock(0x030, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValRate(0x010, 28),
	    0x3DFB94CF,
	    0xBB8A7090,
	aobjEvent32SetValRateBlock(0x020, 7),
	    0x3EB9D73D,
	    0x3B43EC1A,
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x3D4C6CBC,
	    0xBBC64B77,
	aobjEvent32SetValRateBlock(0x020, 7),
	    0x3E858E4C,
	    0xBD46F633,
	aobjEvent32SetValRate(0x020, 19),
	    0x3F0216A8,
	    0x3C296C4D,
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x010, 15),
	    0xBE382380,
	    0xBBFCEF7F,
	aobjEvent32SetValRate(0x010, 15),
	    0xBDE3EE97,
	    0xBBF1C07A,
	aobjEvent32SetValRateBlock(0x020, 4),
	    0xBD1F5000,
	    0xBC6BDD53,
	aobjEvent32SetValRateBlock(0x020, 7),
	    0x3E47C75A,
	    0x3D5380BF,
	aobjEvent32SetValRate(0x020, 11),
	    0x3D8B616A,
	    0xBCC4113E,
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x010, 10),
	    0xBEBC8E88,
	    0x3BB19864,
	aobjEvent32Wait(7),
	aobjEvent32SetValRate(0x020, 11),
	    0xBE14AC2E,
	    0xBB4F1177,
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x010, 11),
	    0x3B3F42F2,
	    0xBBA772D3,
	aobjEvent32Wait(8),
	aobjEvent32SetValRate(0x020, 8),
	    0x00000000,
	    0x3AA4AAB7,
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x010, 9),
	    0xBEF12FB0,
	    0xBB1D9E20,
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x020, 14),
	    0xBDF22556,
	    0x3B932B00,
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x010, 13),
	    0xBD4CCCD5,
	    0x3CCEBD9E,
	aobjEvent32Wait(10),
	aobjEvent32SetValRate(0x020, 12),
	    0x3DF1727A,
	    0xBB4F1B5E,
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x010, 6),
	    0x32000000,
	    0x3D9B9DEB,
	aobjEvent32SetValRate(0x010, 8),
	    0x3F800000,
	    0xBC9F9BBF,
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x020, 13),
	    0xBE4B561E,
	    0xBC17D231,
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x010, 5),
	    0xBE800006,
	    0xBD5F73A5,
	aobjEvent32SetValRate(0x010, 8),
	    0x3E9999A1,
	    0x3D182909,
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x020, 8),
	    0xBDA1D3E0,
	    0xBB4688C6,
	aobjEvent32Wait(5),
	aobjEvent32SetVal0Rate(0x010, 7),
	    0x3E9999A1,
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x020, 9),
	    0xBE7DBEDC,
	    0x3C16D5CF,
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x010, 5),
	    0x3E9999A1,
	    0xBD143503,
	aobjEvent32SetValRate(0x020, 12),
	    0x3DE30B6E,
	    0x3C842DA0,
	aobjEvent32SetValRateBlock(0x010, 8),
	    0xBE4CCCD5,
	    0xBD3CA10A,
	aobjEvent32SetValRateBlock(0x010, 3),
	    0xBE4CCCD5,
	    0x3C16E73A,
	aobjEvent32SetValRate(0x010, 8),
	    0xBDCCCCD5,
	    0xBC6D21DF,
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x020, 4),
	    0x3C9F3D98,
	    0x3D2225C1,
	aobjEvent32SetValRate(0x020, 12),
	    0x3EB32F00,
	    0xBC069B8A,
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x010, 6),
	    0xBECCCCD5,
	    0x3C16E6D2,
	aobjEvent32SetValRate(0x010, 5),
	    0x00000000,
	    0x3D0A53B4,
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x020, 8),
	    0xBE11B9B7,
	    0xBB937BA4,
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x010, 7),
	    0xB3000000,
	    0x3C7F5FCD,
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x020, 10),
	    0x3E87F9C5,
	    0xBC830A2F,
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x010, 6),
	    0x3E4CCCD5,
	    0x3114353A,
	aobjEvent32SetValRate(0x010, 8),
	    0x00000000,
	    0xBD143503,
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x020, 16),
	    0xBDF83E72,
	    0x3B7BDE6C,
	aobjEvent32Wait(5),
	aobjEvent32SetVal0RateBlock(0x010, 6),
	    0xBE9999A1,
	aobjEvent32SetVal0Rate(0x010, 15),
	    0x00000000,
	aobjEvent32Wait(5),
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,
	    0x1C000000,
	(u32)((u8*)dMNTitle_PressStartAnimJoint_AnimJoint + 0x2B8),
	aobjEvent32End(),
	(u32)((u8*)dMNTitle_PressStartAnimJoint_AnimJoint + 0x538),
	aobjEvent32SetValBlock(0x030, 0),
	    0xC3120000,
	    0x431B8000,
	aobjEvent32SetVal(0x030, 16),
	    0xC2A70000,
	    0x42600000,
	aobjEvent32Cmd12(0x030, 6),
	aobjEvent32SetValRate(0x180, 0),
	    0x403F6F54,
	    0x3EFB7E6F,
	    0x403F6F54,
	    0x3EF971D7,
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValRate(0x180, 12),
	    0x3F800000,
	    0x3E6407A5,
	    0x3F800000,
	    0x3E658B0A,
	aobjEvent32Wait(10),
	aobjEvent32SetValBlock(0x030, 2),
	    0xC2A70000,
	    0x42600000,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* Raw data from file offset 0x25E70 to 0x25F60 (240 bytes) */
u32 dMNTitle_SlashAnimJoint_AnimJoint[60] = {
	aobjEvent32End(),
	(u32)((u8*)dMNTitle_SlashAnimJoint_AnimJoint + 0x14),
	(u32)((u8*)dMNTitle_SlashAnimJoint_AnimJoint + 0x4C),
	(u32)((u8*)dMNTitle_SlashAnimJoint_AnimJoint + 0x84),
	(u32)((u8*)dMNTitle_SlashAnimJoint_AnimJoint + 0xB4),
	aobjEvent32SetVal(0x080, 0),
	    0x3FC050F0,
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValBlock(0x080, 30),
	    0x3FC05100,
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValBlock(0x080, 5),
	    0x3E312C78,
	aobjEvent32SetValBlock(0x080, 15),
	    0x3A83126F,
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValBlock(0x080, 30),
	    0x3A83126F,
	aobjEvent32End(),
	aobjEvent32SetVal(0x020, 0),
	    0x437EB320,
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValBlock(0x020, 29),
	    0x437EB322,
	aobjEvent32SetVal(0x020, 15),
	    0xC384A66F,
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x000, 14),
	aobjEvent32SetVal(0x020, 36),
	    0xC384A66F,
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x002, 35),
	aobjEvent32End(),
	aobjEvent32SetVal(0x100, 0),
	    0x40251EB8,
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValBlock(0x100, 60),
	    0x40251EB5,
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValBlock(0x100, 5),
	    0x3ED13099,
	aobjEvent32SetValBlock(0x100, 15),
	    0x3A83126F,
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
	aobjEvent32SetVal(0x010, 0),
	    0x438FFAE1,
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValBlock(0x010, 59),
	    0x438FFAE2,
	aobjEvent32SetVal(0x010, 15),
	    0xC37C0A3B,
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x000, 14),
	aobjEvent32SetVal(0x010, 6),
	    0xC37C0A3B,
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x002, 5),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* Raw data from file offset 0x25F60 to 0x26020 (192 bytes) */
u32 dMNTitle_SlashMat_AnimJoint[48] = {
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dMNTitle_SlashMat_AnimJoint + 0xB0),
	aobjEvent32End(),
	(u32)((u8*)dMNTitle_SlashMat_AnimJoint + 0xB4),
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 33),
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40400000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40A00000,
	aobjEvent32SetValAfter(0x001, 1),
	    0x40C00000,
	aobjEvent32Wait(43),
	aobjEvent32End(),
	aobjEvent32SetValAfterBlock(0x021, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x021, 64),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x021, 1),
	    0x40000000,
	    0x40000000,
	aobjEvent32SetValAfterBlock(0x021, 1),
	    0x40400000,
	    0x40400000,
	aobjEvent32SetValAfterBlock(0x021, 1),
	    0x40800000,
	    0x40800000,
	aobjEvent32SetValAfterBlock(0x021, 1),
	    0x40A00000,
	    0x40A00000,
	aobjEvent32SetValAfter(0x021, 1),
	    0x40C00000,
	    0x40C00000,
	aobjEvent32Wait(12),
	aobjEvent32End(),
	(u32)((u8*)dMNTitle_SlashMat_AnimJoint + 0x14),
	(u32)((u8*)dMNTitle_SlashMat_AnimJoint + 0x54),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* DObjDesc: LogoDObjDesc @ 0x26020 (6 entries) */
DObjDesc dMNTitle_LogoDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, -10.0f }, { 0.0f, 0.0f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 1.0f } },
	{ 1, (void*)0x00000000, { -23.0f, 0.0f, -8.698856353759766f }, { 0.0f, 0.0f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -18.0f, -8.698856353759766f }, { 0.0f, 0.0f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 1.0f } },
	{ 1, (void*)0x00000000, { 105.0f, 65.0f, -10.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

#if defined(REGION_JP)
/* DObjDesc: LabelsDObjDesc (17 entries in JP vs 9 in US) */
DObjDesc dMNTitle_LabelsDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -24.0f, 56.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 12.0f, 55.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 43.0f, 50.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -81.0f, -1.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -50.0f, -8.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -28.0f, -27.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -16.0f, 3.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 2.0f, -9.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 17.0f, -3.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 31.000001907348633f, -25.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 52.000003814697266f, -4.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 65.0f, -8.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 86.0f, 5.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -88.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 105.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
#else
/* DObjDesc: LabelsDObjDesc @ 0x26130 (9 entries) */
DObjDesc dMNTitle_LabelsDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -3.0f, 26.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 1.0f, 32.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -105.0f, 24.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 0.6247919797897339f } },
	{ 1, (void*)0x00000000, { 108.0f, 24.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 9.999999747378752e-06f } },
	{ 1, (void*)0x00000000, { 110.0f, -12.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -88.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 105.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
#endif

PAD(4);

/* DObjDesc: PressStartDObjDesc @ 0x262C0 (4 entries) */
DObjDesc dMNTitle_PressStartDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -1.0f, -58.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x26370 to 0x287D8 (9320 bytes) */
/* gap sub-block @ 0x26370 (was gap+0x0, 152 bytes) */
u8 dMNTitle_gap_0x26370[152] = {
	#include <MNTitle/gap_0x26370.data.inc.c>
};

/* gap sub-block @ 0x26408 (was gap+0x98, 1480 bytes) */
u8 dMNTitle_gap_0x26370_sub_0x98[1480] = {
	#include <MNTitle/gap_0x26370_sub_0x98.data.inc.c>
};

/* gap sub-block @ 0x269D0 (was gap+0x660, 64 bytes) */
Vtx dMNTitle_gap_0x26370_sub_0x660[4] = {
	#include <MNTitle/gap_0x26370_sub_0x660.vtx.inc.c>
};

/* gap sub-block @ 0x26A10 (was gap+0x6A0, 176 bytes) */
Gfx dMNTitle_DL_0x26A10[22] = {
	#include <MNTitle/DL_0x26A10.dl.inc.c>
};

/* gap sub-block @ 0x26AC0 (was gap+0x750, 168 bytes) */
u8 dMNTitle_gap_0x26370_sub_0x750[168] = {
	#include <MNTitle/gap_0x26370_sub_0x750.data.inc.c>
};

/* gap sub-block @ 0x26B68 (was gap+0x7F8, 40 bytes) */
u16 dMNTitle_gap_0x26370_sub_0x7F8[20] = {
	#include <MNTitle/gap_0x26370_sub_0x7F8.palette.inc.c>
};

/* gap sub-block @ 0x26B90 (was gap+0x820, 1032 bytes) */
u8 dMNTitle_gap_0x26370_sub_0x820[1032] = {
	#include <MNTitle/gap_0x26370_sub_0x820.data.inc.c>
};

/* gap sub-block @ 0x26F98 (was gap+0xC28, 1032 bytes) */
u8 dMNTitle_gap_0x26370_sub_0xC28[1032] = {
	#include <MNTitle/gap_0x26370_sub_0xC28.data.inc.c>
};

/* gap sub-block @ 0x273A0 (was gap+0x1030, 1032 bytes) */
u8 dMNTitle_gap_0x26370_sub_0x1030[1032] = {
	#include <MNTitle/gap_0x26370_sub_0x1030.data.inc.c>
};

/* gap sub-block @ 0x277A8 (was gap+0x1438, 1032 bytes) */
u8 dMNTitle_gap_0x26370_sub_0x1438[1032] = {
	#include <MNTitle/gap_0x26370_sub_0x1438.data.inc.c>
};

/* gap sub-block @ 0x27BB0 (was gap+0x1840, 1032 bytes) */
u8 dMNTitle_gap_0x26370_sub_0x1840[1032] = {
	#include <MNTitle/gap_0x26370_sub_0x1840.data.inc.c>
};

/* gap sub-block @ 0x27FB8 (was gap+0x1C48, 1032 bytes) */
u8 dMNTitle_gap_0x26370_sub_0x1C48[1032] = {
	#include <MNTitle/gap_0x26370_sub_0x1C48.data.inc.c>
};

/* gap sub-block @ 0x283C0 (was gap+0x2050, 1032 bytes) */
u8 dMNTitle_gap_0x26370_sub_0x2050[1032] = {
	#include <MNTitle/gap_0x26370_sub_0x2050.data.inc.c>
};

/* gap sub-block @ 0x287C8 (was gap+0x2458, 16 bytes) */
u8 dMNTitle_gap_0x26370_sub_0x2458[16] = {
	#include <MNTitle/gap_0x26370_sub_0x2458.data.inc.c>
};

/* MObjSub: SlashMObjSub @ 0x287D8 */
MObjSub dMNTitle_SlashMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x00000000,
	0xA1FA, 0xA246, 0x0000, 0x0000,
	-1577344440,
	-1.7118784018193176e-18f, -1.7186279888225971e-18f,
	-1.7253775758258767e-18f, -1.7321271628291563e-18f,
	-1.7430300236880646e-18f, -1.7565291976946237e-18f,
	(void**)((u8*)dMNTitle_gap_0x26370 + 0x820),
	0xA203,
	0xA0, 0xF0,
	0xA204,
	0x9FEE, 0xA205, 0x9EEC,
	-1.824398539773987e-18f, -1.8378977137805462e-18f,
	-1.8513968877871054e-18f, -1.892001116105802e-18f,
	0x00000000,
	{ { 0x00, 0x00, 0x03, 0x02 } },
	0xA2, 0x29, { 0xA1, 0xFB },
	{ { 0x00, 0x20, 0x00, 0x00 } },
	{ { 0x00, 0x20, 0x00, 0x40 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0, 1065353216,
	1065353216, 0,
};

/* Raw data from file offset 0x28850 to 0x28DA8 (1368 bytes) */
/* gap sub-block @ 0x28850 (was gap+0x0, 80 bytes) */
u8 dMNTitle_gap_0x28850[80] = {
	#include <MNTitle/gap_0x28850.data.inc.c>
};

/* gap sub-block @ 0x288A0 (was gap+0x50, 120 bytes) */
u8 dMNTitle_gap_0x28850_sub_0x50[120] = {
	#include <MNTitle/gap_0x28850_sub_0x50.data.inc.c>
};

/* gap sub-block @ 0x28918 (was gap+0xC8, 8 bytes) */
u8 dMNTitle_gap_0x28850_sub_0xC8[8] = {
	#include <MNTitle/gap_0x28850_sub_0xC8.data.inc.c>
};

/* gap sub-block @ 0x28920 (was gap+0xD0, 8 bytes) */
u8 dMNTitle_gap_0x28850_sub_0xD0[8] = {
	#include <MNTitle/gap_0x28850_sub_0xD0.data.inc.c>
};

/* gap sub-block @ 0x28928 (was gap+0xD8, 64 bytes) */
Vtx dMNTitle_gap_0x28850_sub_0xD8[4] = {
	#include <MNTitle/gap_0x28850_sub_0xD8.vtx.inc.c>
};

/* gap sub-block @ 0x28968 (was gap+0x118, 64 bytes) */
Vtx dMNTitle_gap_0x28850_sub_0x118[4] = {
	#include <MNTitle/gap_0x28850_sub_0x118.vtx.inc.c>
};

/* gap sub-block @ 0x289A8 (was gap+0x158, 64 bytes) */
Vtx dMNTitle_gap_0x28850_sub_0x158[4] = {
	#include <MNTitle/gap_0x28850_sub_0x158.vtx.inc.c>
};

/* gap sub-block @ 0x289E8 (was gap+0x198, 64 bytes) */
Vtx dMNTitle_gap_0x28850_sub_0x198[4] = {
	#include <MNTitle/gap_0x28850_sub_0x198.vtx.inc.c>
};

/* gap sub-block @ 0x28A28 (was gap+0x1D8, 200 bytes) */
Gfx dMNTitle_DL_0x28A28[25] = {
	#include <MNTitle/DL_0x28A28.dl.inc.c>
};

/* gap sub-block @ 0x28AF0 (was gap+0x2A0, 200 bytes) */
Gfx dMNTitle_DL_0x28AF0[25] = {
	#include <MNTitle/DL_0x28AF0.dl.inc.c>
};

/* gap sub-block @ 0x28BB8 (was gap+0x368, 232 bytes) */
Gfx dMNTitle_DL_0x28BB8[29] = {
	#include <MNTitle/DL_0x28BB8.dl.inc.c>
};

/* gap sub-block @ 0x28CA0 (was gap+0x450, 200 bytes) */
Gfx dMNTitle_DL_0x28CA0[25] = {
	#include <MNTitle/DL_0x28CA0.dl.inc.c>
};

/* DObjDLLink @ 0x518 (2 entries) */
DObjDLLink dMNTitle_DLLink_0x28D68[] = {
	{ 0, dMNTitle_DL_0x28A28 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x528 (2 entries) */
DObjDLLink dMNTitle_DLLink_0x28D78[] = {
	{ 1, dMNTitle_DL_0x28BB8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x538 (2 entries) */
DObjDLLink dMNTitle_DLLink_0x28D88[] = {
	{ 0, dMNTitle_DL_0x28AF0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x548 (2 entries) */
DObjDLLink dMNTitle_DLLink_0x28D98[] = {
	{ 1, dMNTitle_DL_0x28CA0 },
	{ 4, NULL },
};

/* DObjDesc: SlashDObjDesc @ 0x28DA8 (6 entries) */
DObjDesc dMNTitle_SlashDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMNTitle_DLLink_0x28D68, { -32.03997039794922f, -20.39999008178711f, 10.57111930847168f }, { 0.0f, 0.0f, 0.0f }, { 0.0010000000474974513f, 1.0f, 1.0f } },
	{ 1, (void*)dMNTitle_DLLink_0x28D78, { -32.03997039794922f, -265.3002624511719f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMNTitle_DLLink_0x28D88, { -32.03997039794922f, -23.39999008178711f, 10.57111930847168f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 0.299888014793396f, 1.0f } },
	{ 1, (void*)dMNTitle_DLLink_0x28D98, { -72.04008483886719f, -25.399993896484375f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* DObjDesc: FireDObjDesc @ 0x28EB0 (8 entries) */
DObjDesc dMNTitle_FireDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -101.76795959472656f, 131.76795959472656f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -405.9275207519531f, -1485.3929443359375f, -535.337890625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 138.23204040527344f, -78.23204040527344f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x29010 to 0x290A0 (144 bytes) */
u32 dMNTitle_FireAnimJoint_AnimJoint[36] = {
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dMNTitle_FireAnimJoint_AnimJoint + 0x1C),
	aobjEvent32End(),
	(u32)((u8*)dMNTitle_FireAnimJoint_AnimJoint + 0x28),
	aobjEvent32End(),
	(u32)((u8*)dMNTitle_FireAnimJoint_AnimJoint + 0x78),
	aobjEvent32Wait(35),
	aobjEvent32Cmd16(0x020, 195),
	aobjEvent32End(),
	aobjEvent32SetValAfter(0x050, 0),
	    0xC3CAF6B9,
	    0xC405D5A0,
	aobjEvent32SetValRate(0x020, 0),
	    0xC4745CB2,
	    0x421A81BB,
	aobjEvent32Cmd16(0x01F, 0),
	aobjEvent32SetValRateBlock(0x020, 20),
	    0xC3ABB590,
	    0x4129131C,
	aobjEvent32SetValBlock(0x020, 40),
	    0xC3ABB590,
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBE3BEC74,
	aobjEvent32SetValRateBlock(0x020, 20),
	    0xC4B9AC93,
	    0xC2AF7E85,
	aobjEvent32SetValBlock(0x020, 150),
	    0xC4B9AC93,
	aobjEvent32End(),
	aobjEvent32Wait(65),
	aobjEvent32Cmd16(0x021, 165),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};
