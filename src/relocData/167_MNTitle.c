/* relocData file 167: MNTitle */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"


#if defined(REGION_JP)

/* JP binary has a different layout; fold it in as a chain-encoded
 * raw u32 blob. The companion .jp.reloc is empty so fixRelocChain
 * leaves the pre-baked JP chain bytes alone. */
/* JP binary has a different layout; fold it in as a single raw
 * u8 block that extractRelocInc regenerates from the JP binary
 * whenever JP assets are extracted. The companion .jp.reloc is
 * empty so fixRelocChain leaves the pre-baked chain bytes alone. */
u8 dMNTitle[123680] = {
	#include <MNTitle/jp_raw.data.inc.c>
};

#else  /* REGION_US */

/* Sprite: LogoAnimCutout */

Gfx dMNTitle_LogoAnimCutout_dl[] = { gsSPEndDisplayList() };

/* Texture: LogoAnimCutout (300(304)x239 i4, 20 tiles) */
u8 dMNTitle_LogoAnimCutout_tex[] = {
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
u8 dMNTitle_LogoAnimStrikeV_tex[] = {
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
u8 dMNTitle_LogoAnimStrikeH_tex[] = {
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
u8 dMNTitle_LogoAnimFull_tex[] = {
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
u8 dMNTitle_BorderUpper_tex[] = {
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
u8 dMNTitle_Gradient_tex[] = {
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
u8 dMNTitle_TM_tex[] = {
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

/* Sprite: Cutout */

Gfx dMNTitle_Cutout_dl[] = { gsSPEndDisplayList() };

/* Texture: Cutout (208x92 i4, 3 tiles) */
u8 dMNTitle_Cutout_tex[] = {
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
u8 dMNTitle_TMUnk_tex[] = {
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
u8 dMNTitle_Copyright_tex[] = {
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
u8 dMNTitle_PressStart_tex[] = {
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
u8 dMNTitle_Super_tex[] = {
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
u8 dMNTitle_Smash_tex[] = {
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
u8 dMNTitle_Bros_tex[] = {
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

/* Raw data from file offset 0x251D0 to 0x25350 (384 bytes) */
u8 dMNTitle_LogoAnimJoint_AnimJoint[384] = {
	#include <MNTitle/LogoAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x25350 to 0x258D0 (1408 bytes) */
u8 dMNTitle_LabelsAnimJoint_AnimJoint[1408] = {
	#include <MNTitle/LabelsAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x258D0 to 0x25E70 (1440 bytes) */
u8 dMNTitle_PressStartAnimJoint_AnimJoint[1440] = {
	#include <MNTitle/PressStartAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x25E70 to 0x25F60 (240 bytes) */
u8 dMNTitle_SlashAnimJoint_AnimJoint[240] = {
	#include <MNTitle/SlashAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x25F60 to 0x26020 (192 bytes) */
u8 dMNTitle_SlashMat_AnimJoint[192] = {
	#include <MNTitle/SlashMat_AnimJoint.data.inc.c>
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

PAD(4);

/* DObjDesc: PressStartDObjDesc @ 0x262C0 (4 entries) */
DObjDesc dMNTitle_PressStartDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -1.0f, -58.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x26370 to 0x287D8 (9320 bytes) */
u8 dMNTitle_gap_0x26370[9320] = {
	#include <MNTitle/gap_0x26370.data.inc.c>
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
u8 dMNTitle_gap_0x28850[1368] = {
	#include <MNTitle/gap_0x28850.data.inc.c>
};

/* DObjDesc: SlashDObjDesc @ 0x28DA8 (6 entries) */
DObjDesc dMNTitle_SlashDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMNTitle_gap_0x28850 + 0x518), { -32.03997039794922f, -20.39999008178711f, 10.57111930847168f }, { 0.0f, 0.0f, 0.0f }, { 0.0010000000474974513f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMNTitle_gap_0x28850 + 0x528), { -32.03997039794922f, -265.3002624511719f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMNTitle_gap_0x28850 + 0x538), { -32.03997039794922f, -23.39999008178711f, 10.57111930847168f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 0.299888014793396f, 1.0f } },
	{ 1, (void*)((u8*)dMNTitle_gap_0x28850 + 0x548), { -72.04008483886719f, -25.399993896484375f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
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
u8 dMNTitle_FireAnimJoint_AnimJoint[144] = {
	#include <MNTitle/FireAnimJoint_AnimJoint.data.inc.c>
};

#endif
