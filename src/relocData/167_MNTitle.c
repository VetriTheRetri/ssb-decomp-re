/* relocData file 167: MNTitle */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u8 dMNTitle_Tex_0x26408[];
extern u8 dMNTitle_Tex_0x26B90[];
extern u8 dMNTitle_Tex_0x287C8[];
extern Vtx dMNTitle_gap_0x26370_sub_0x660[];
extern u16 dMNTitle_gap_0x26370_sub_0x7F8[];
extern Vtx dMNTitle_gap_0x28850_sub_0x118[];
extern Vtx dMNTitle_gap_0x28850_sub_0x158[];
extern Vtx dMNTitle_gap_0x28850_sub_0x198[];
extern Vtx dMNTitle_gap_0x28850_sub_0xD8[];
extern u32 dMNTitle_LogoAnimJoint_AnimJoint_0x251E4[];
extern u32 dMNTitle_LogoAnimJoint_AnimJoint_0x25218[];
extern u32 dMNTitle_LogoAnimJoint_AnimJoint_0x25284[];
extern u32 dMNTitle_LogoAnimJoint_AnimJoint_0x252F0[];

extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25370[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25448[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x254F4[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25678[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x257E4[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25824[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25870[];

extern u32 dMNTitle_SlashAnimJoint_AnimJoint_0x25E84[];
extern u32 dMNTitle_SlashAnimJoint_AnimJoint_0x25EBC[];
extern u32 dMNTitle_SlashAnimJoint_AnimJoint_0x25EF4[];
extern u32 dMNTitle_SlashAnimJoint_AnimJoint_0x25F24[];

extern u32 dMNTitle_SlashMat_AnimJoint_0x25F74[];
extern u32 dMNTitle_SlashMat_AnimJoint_0x25FB4[];
extern AObjEvent32 *dMNTitle_SlashMat_AnimJoint_0x26010[];
extern AObjEvent32 *dMNTitle_SlashMat_AnimJoint_0x26014[];

extern u32 dMNTitle_FireAnimJoint_AnimJoint_0x2902C[];
extern u32 dMNTitle_FireAnimJoint_AnimJoint_0x29038[];
extern u32 dMNTitle_FireAnimJoint_AnimJoint_0x29088[];


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
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dMNTitle_LogoAnimJoint_AnimJoint[5] = {
	NULL,
	(AObjEvent32 *)dMNTitle_LogoAnimJoint_AnimJoint_0x251E4,
	(AObjEvent32 *)dMNTitle_LogoAnimJoint_AnimJoint_0x25218,
	(AObjEvent32 *)dMNTitle_LogoAnimJoint_AnimJoint_0x25284,
	(AObjEvent32 *)dMNTitle_LogoAnimJoint_AnimJoint_0x252F0,
};

u32 dMNTitle_LogoAnimJoint_AnimJoint_0x251E4[] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x3FB33333,  /* 1.399999976158142f */
	    0x3FB33333,  /* 1.399999976158142f */
	aobjEvent32SetValBlock(0x180, 110),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x180, 1),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(0x180, 59),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32End(),
};

u32 dMNTitle_LogoAnimJoint_AnimJoint_0x25218[] = {
	aobjEvent32SetVal0Rate(0x010, 0),
	    0xC2040000,  /* -33.0f */
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x010, 30),
	    0xC2040000,  /* -33.0f */
	aobjEvent32SetValBlock(0x180, 29),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x180, 1),
	    0x3FB37574,  /* 1.402021884918213f */
	    0x3FB37574,  /* 1.402021884918213f */
	aobjEvent32SetVal0Rate(0x010, 80),
	    0xC1B80000,  /* -23.0f */
	aobjEvent32SetValBlock(0x180, 80),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(0x010, 60),
	    0xC1B80000,  /* -23.0f */
	aobjEvent32SetValBlock(0x180, 1),
	    0x37280000,  /* 1.0013580322265625e-05f */
	    0x37280000,  /* 1.0013580322265625e-05f */
	aobjEvent32SetValBlock(0x180, 59),
	    0x37280000,  /* 1.0013580322265625e-05f */
	    0x37280000,  /* 1.0013580322265625e-05f */
	aobjEvent32End(),
};

u32 dMNTitle_LogoAnimJoint_AnimJoint_0x25284[] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0xC1C80000,  /* -25.0f */
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x020, 60),
	    0xC1C80000,  /* -25.0f */
	aobjEvent32SetValBlock(0x180, 59),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x180, 1),
	    0x3FAE2276,  /* 1.360426664352417f */
	    0x3FAE2276,  /* 1.360426664352417f */
	aobjEvent32SetVal0Rate(0x020, 50),
	    0xC1900000,  /* -18.0f */
	aobjEvent32SetValBlock(0x180, 50),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(0x020, 60),
	    0xC1900000,  /* -18.0f */
	aobjEvent32SetValBlock(0x180, 1),
	    0x37280000,  /* 1.0013580322265625e-05f */
	    0x37280000,  /* 1.0013580322265625e-05f */
	aobjEvent32SetValBlock(0x180, 59),
	    0x37280000,  /* 1.0013580322265625e-05f */
	    0x37280000,  /* 1.0013580322265625e-05f */
	aobjEvent32End(),
};

u32 dMNTitle_LogoAnimJoint_AnimJoint_0x252F0[] = {
	aobjEvent32SetVal0Rate(0x030, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x030, 110),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x180, 110),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x030, 60),
	    0x42C80000,  /* 100.0f */
	    0x42700000,  /* 60.0f */
	aobjEvent32SetValBlock(0x180, 1),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x180, 59),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

PAD(8);

#if defined(REGION_JP)
/* JP LabelsAnimJoint @ 0x25350 (1056 bytes) — 16-entry pointer table
 * + 15 per-joint AObjEvent32 scripts. The label set is larger than
 * the US version because JP titles have more glyphs. */
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25390[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x253C4[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25404[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25444[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25484[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x254C4[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25504[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25544[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25584[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x255C4[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25604[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25644[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25684[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x256C4[];
extern u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x2570C[22];

AObjEvent32 *dMNTitle_LabelsAnimJoint_AnimJoint[16] = {
	NULL,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25390,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x253C4,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25404,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25444,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25484,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x254C4,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25504,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25544,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25584,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x255C4,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25604,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25644,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25684,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x256C4,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x2570C,
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25390[13] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,  /* 0f */
	    0x40A00000,  /* 5f */
	aobjEvent32SetVal(0x080, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x100, 60),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x080, 56),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x253C4[16] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,  /* 0f */
	    0x40800000,  /* 4f */
	aobjEvent32SetValBlock(0x180, 24),
	    0x00000000,  /* 0f */
	    0x40800000,  /* 4f */
	aobjEvent32SetVal(0x080, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x100, 36),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x080, 32),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25404[16] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,  /* 0f */
	    0x40800000,  /* 4f */
	aobjEvent32SetValBlock(0x180, 9),
	    0x00000000,  /* 0f */
	    0x40800000,  /* 4f */
	aobjEvent32SetVal(0x080, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x100, 51),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x080, 47),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25444[16] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x40A00000,  /* 5f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetValBlock(0x180, 12),
	    0x40A00000,  /* 5f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetVal(0x100, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x080, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x080, 48),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x100, 44),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25484[16] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x40800000,  /* 4f */
	    0x00000000,  /* 0f */
	aobjEvent32SetValBlock(0x180, 6),
	    0x40800000,  /* 4f */
	    0x00000000,  /* 0f */
	aobjEvent32SetVal(0x100, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x080, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x080, 54),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x100, 50),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x254C4[16] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x3727C5AC,  /* 1e-05f */
	    0x40800000,  /* 4f */
	aobjEvent32SetValBlock(0x180, 21),
	    0x3727C5AC,  /* 1e-05f */
	    0x40800000,  /* 4f */
	aobjEvent32SetVal(0x080, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x100, 39),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x080, 35),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25504[16] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x40A00000,  /* 5f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetValBlock(0x180, 30),
	    0x40A00000,  /* 5f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetVal(0x100, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x080, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x080, 30),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x100, 26),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25544[16] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x40800000,  /* 4f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetValBlock(0x180, 15),
	    0x40800000,  /* 4f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetVal(0x100, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x080, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x080, 45),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x100, 41),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25584[16] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x40A00000,  /* 5f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetValBlock(0x180, 36),
	    0x40A00000,  /* 5f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetVal(0x100, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x080, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x080, 24),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x100, 20),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x255C4[16] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,  /* 0f */
	    0x40800000,  /* 4f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x00000000,  /* 0f */
	    0x40800000,  /* 4f */
	aobjEvent32SetVal(0x080, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x100, 57),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x080, 53),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25604[16] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x3727C5AC,  /* 1e-05f */
	    0x40800000,  /* 4f */
	aobjEvent32SetValBlock(0x180, 33),
	    0x3727C5AC,  /* 1e-05f */
	    0x40800000,  /* 4f */
	aobjEvent32SetVal(0x080, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x100, 27),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x080, 23),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25644[16] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x3727C5AC,  /* 1e-05f */
	    0x40A00000,  /* 5f */
	aobjEvent32SetValBlock(0x180, 18),
	    0x3727C5AC,  /* 1e-05f */
	    0x40A00000,  /* 5f */
	aobjEvent32SetVal(0x080, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x100, 42),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x080, 38),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25684[16] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x3727C5AC,  /* 1e-05f */
	    0x40A00000,  /* 5f */
	aobjEvent32SetValBlock(0x180, 27),
	    0x3727C5AC,  /* 1e-05f */
	    0x40A00000,  /* 5f */
	aobjEvent32SetVal(0x080, 8),
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal(0x100, 33),
	    0x3F800000,  /* 1f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x080, 29),
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x256C4[18] = {
	aobjEvent32SetValBlock(0x1A0, 0),
	    0xC30E8000,  /* -142.5f */
	    0x3727C5AC,  /* 1e-05f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetVal(0x020, 30),
	    0xC30E8000,  /* -142.5f */
	aobjEvent32SetValBlock(0x180, 29),
	    0x3727C5AC,  /* 1e-05f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetValBlock(0x180, 1),
	    0x3F800000,  /* 1f */
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal0Rate(0x020, 34),
	    0xC2B00000,  /* -88f */
	aobjEvent32SetValBlock(0x180, 34),
	    0x3F800000,  /* 1f */
	    0x3F800000,  /* 1f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x2570C[22] = {
	aobjEvent32SetValBlock(0x1A0, 0),
	    0x43013333,  /* 129.2f */
	    0x3727C5AC,  /* 1e-05f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetVal(0x020, 36),
	    0x43013333,  /* 129.2f */
	aobjEvent32SetValBlock(0x180, 35),
	    0x3727C5AC,  /* 1e-05f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetValBlock(0x180, 1),
	    0x3F800000,  /* 1f */
	    0x3F800000,  /* 1f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBFCAF553,  /* -1.58561f */
	aobjEvent32SetVal(0x180, 28),
	    0x3F800000,  /* 1f */
	    0x3F800000,  /* 1f */
	aobjEvent32SetVal0RateBlock(0x020, 27),
	    0x42D20000,  /* 105f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42D20000,  /* 105f */
	aobjEvent32End(),
};
PAD(12);
#else
/* Raw data from file offset 0x25350 to 0x258D0 (1408 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dMNTitle_LabelsAnimJoint_AnimJoint[8] = {
	NULL,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25370,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25448,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x254F4,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25678,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x257E4,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25824,
	(AObjEvent32 *)dMNTitle_LabelsAnimJoint_AnimJoint_0x25870,
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25370[] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,  /* 0.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(0x180, 11),
	    0x00000000,  /* 0.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetTargetRate(0x080, 0),
	    0x3A81192F,  /* 0.0009849424241110682f */
	aobjEvent32SetVal0RateBlock(0x180, 5),
	    0x3F532C8C,  /* 0.8248984813690186f */
	    0x4039ACB1,  /* 2.901165246963501f */
	aobjEvent32SetVal0RateBlock(0x180, 5),
	    0x405FA151,  /* 3.4942209720611572f */
	    0x3F2F1102,  /* 0.683853268623352f */
	aobjEvent32SetVal0RateBlock(0x180, 5),
	    0x3ECC2F78,  /* 0.3987996578216553f */
	    0x402409A2,  /* 2.5630879402160645f */
	aobjEvent32SetVal0RateBlock(0x180, 3),
	    0x400F84DC,  /* 2.2424840927124023f */
	    0x3F2A17EE,  /* 0.664427638053894f */
	aobjEvent32SetVal0RateBlock(0x180, 3),
	    0x3FB33334,  /* 1.4000000953674316f */
	    0x3FB33334,  /* 1.4000000953674316f */
	aobjEvent32SetVal(0x080, 11),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x100, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetTargetRate(0x100, 0),
	    0x3C28FF54,  /* 0.010314781218767166f */
	aobjEvent32SetValRate(0x100, 2),
	    0x3FB33333,  /* 1.399999976158142f */
	    0x3BB829FB,  /* 0.005620238836854696f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x080, 0),
	    0x3C55C16C,  /* 0.01304660364985466f */
	aobjEvent32SetValRate(0x080, 2),
	    0x3FB33333,  /* 1.399999976158142f */
	    0x3BE8F060,  /* 0.007108733057975769f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal0Rate(0x100, 2),
	    0x3F8D8BC5,  /* 1.1058279275894165f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal0RateBlock(0x080, 1),
	    0x3F8D8BC5,  /* 1.1058279275894165f */
	aobjEvent32SetVal0Rate(0x100, 2),
	    0x3FB33333,  /* 1.399999976158142f */
	aobjEvent32SetVal0RateBlock(0x080, 1),
	    0x3FB33333,  /* 1.399999976158142f */
	aobjEvent32SetVal0Rate(0x080, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25448[] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,  /* 0.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(0x180, 11),
	    0x00000000,  /* 0.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetTargetRate(0x080, 0),
	    0x3A81192F,  /* 0.0009849424241110682f */
	aobjEvent32SetVal0RateBlock(0x180, 5),
	    0x3F7A863E,  /* 0.9786108732223511f */
	    0x403412F7,  /* 2.813657522201538f */
	aobjEvent32SetVal0RateBlock(0x180, 5),
	    0x405E711B,  /* 3.4756534099578857f */
	    0x3F144867,  /* 0.5792297720909119f */
	aobjEvent32SetVal0RateBlock(0x180, 5),
	    0x3F045CED,  /* 0.5170429348945618f */
	    0x40368265,  /* 2.8517086505889893f */
	aobjEvent32SetVal0RateBlock(0x180, 3),
	    0x3FF9F7CD,  /* 1.952874779701233f */
	    0x3EC5AFFC,  /* 0.38610827922821045f */
	aobjEvent32SetVal0RateBlock(0x180, 3),
	    0x3FB33334,  /* 1.4000000953674316f */
	    0x3FB33334,  /* 1.4000000953674316f */
	aobjEvent32SetValBlock(0x180, 10),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetTargetRate(0x180, 0),
	    0x3C9A94DE,  /* 0.018869813531637192f */
	    0x3C9DADA2,  /* 0.019247833639383316f */
	aobjEvent32SetValRate(0x080, 2),
	    0x3E3851F0,  /* 0.18000006675720215f */
	    0x3CE3C6F1,  /* 0.027804823592305183f */
	aobjEvent32SetVal0RateBlock(0x100, 2),
	    0x3E199980,  /* 0.14999961853027344f */
	aobjEvent32SetValRateBlock(0x180, 3),
	    0x3FA66669,  /* 1.3000003099441528f */
	    0x3E0FA7DF,  /* 0.1402888149023056f */
	    0x3F9F7CF0,  /* 1.2460002899169922f */
	    0x3E14E95A,  /* 0.14542141556739807f */
	aobjEvent32SetVal0RateBlock(0x180, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x254F4[] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetValRate(0x180, 0),
	    0x00000000,  /* 0.0f */
	    0x3F3DF7B0,  /* 0.742060661315918f */
	    0x40A00000,  /* 5.0f */
	    0xBF7FBBC5,  /* -0.9989588856697083f */
	aobjEvent32SetValBlock(0x010, 0),
	    0xC1200000,  /* -10.0f */
	aobjEvent32SetVal0Rate(0x080, 6),
	    0x3FC00000,  /* 1.5f */
	aobjEvent32SetVal(0x010, 9),
	    0xC1F5CA71,  /* -30.723848342895508f */
	aobjEvent32SetValRate(0x020, 9),
	    0x42200000,  /* 40.0f */
	    0xBE088887,  /* -0.13333331048488617f */
	aobjEvent32SetVal0RateBlock(0x100, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 3),
	    0x3F333333,  /* 0.699999988079071f */
	aobjEvent32SetValRateBlock(0x180, 0),
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3BA73F74,  /* 0.005103999748826027f */
	    0x3F8F5C29,  /* 1.1200000047683716f */
	    0xBCBD3213,  /* -0.02309516631066799f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(0x180, 8),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x030, 7),
	    0xC1F5CA71,  /* -30.723848342895508f */
	    0x42200000,  /* 40.0f */
	aobjEvent32SetTargetRate(0x180, 0),
	    0x3D9BD484,  /* 0.07608893513679504f */
	    0xBD754070,  /* -0.05987590551376343f */
	aobjEvent32SetTargetRate(0x030, 0),
	    0xC01A075C,  /* -2.4066991806030273f */
	    0xBF6C373E,  /* -0.9227179288864136f */
	aobjEvent32SetValRate(0x030, 10),
	    0xC34D8474,  /* -205.51739501953125f */
	    0xBF949266,  /* -1.1607177257537842f */
	    0xC1FAC9A4,  /* -31.34845733642578f */
	    0x40AD860D,  /* 5.422613620758057f */
	aobjEvent32SetValRateBlock(0x180, 4),
	    0x3FAF2B22,  /* 1.3685038089752197f */
	    0x3CBC49F4,  /* 0.02298448234796524f */
	    0x3ED6C51D,  /* 0.4194726049900055f */
	    0x3C54A4AB,  /* 0.012978713028132915f */
	aobjEvent32SetValRateBlock(0x180, 2),
	    0x3F4112A4,  /* 0.7541906833648682f */
	    0xBAA19F30,  /* -0.0012330766767263412f */
	    0x3FD10518,  /* 1.6329679489135742f */
	    0x3A01628A,  /* 0.0004935642937198281f */
	aobjEvent32SetValRateBlock(0x180, 2),
	    0x3F800000,  /* 1.0f */
	    0x3E4214A1,  /* 0.1895318180322647f */
	    0x3F4CCCCE,  /* 0.8000000715255737f */
	    0x3C20D5AD,  /* 0.009816569276154041f */
	aobjEvent32SetVal0Rate(0x180, 7),
	    0x400CCCCD,  /* 2.200000047683716f */
	    0x3FE66669,  /* 1.8000003099441528f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x020, 2),
	    0x42CCA9A4,  /* 102.33132934570312f */
	    0x408075DF,  /* 4.014388561248779f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC374E6B2,  /* -244.90115356445312f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0x408DA7CF,  /* 4.426734447479248f */
	aobjEvent32SetValRate(0x030, 14),
	    0xC2D20000,  /* -105.0f */
	    0x40C8A50D,  /* 6.270147800445557f */
	    0x41C00000,  /* 24.0f */
	    0xC19371AE,  /* -18.43050765991211f */
	aobjEvent32Wait(3),
	aobjEvent32SetVal0RateBlock(0x180, 11),
	    0x3F800000,  /* 1.0f */
	    0x3F19999A,  /* 0.6000000238418579f */
	aobjEvent32SetVal(0x030, 8),
	    0xC2D20000,  /* -105.0f */
	    0x41C00000,  /* 24.0f */
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x3FE66666,  /* 1.7999999523162842f */
	    0x3FE66666,  /* 1.7999999523162842f */
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x3E99999A,  /* 0.30000001192092896f */
	    0x3E99999A,  /* 0.30000001192092896f */
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x180, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25678[] = {
	aobjEvent32SetValBlock(0x1B0, 0),
	    0x4191CEDA,  /* 18.226001739501953f */
	    0x41C00000,  /* 24.0f */
	    0x40A00000,  /* 5.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal(0x020, 16),
	    0x41C00000,  /* 24.0f */
	aobjEvent32SetValBlock(0x190, 4),
	    0x4191CEDA,  /* 18.226001739501953f */
	    0x40A00000,  /* 5.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetTargetRate(0x180, 0),
	    0xBFB8E8F7,  /* -1.444609522819519f */
	    0x3F5E25BD,  /* 0.867763340473175f */
	aobjEvent32SetValRate(0x100, 2),
	    0x3FE66666,  /* 1.7999999523162842f */
	    0x3DFFFF36,  /* 0.12499849498271942f */
	aobjEvent32SetVal(0x010, 5),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x080, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(0x180, 10),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x010, 7),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0x404BAB0C,  /* 3.182314872741699f */
	aobjEvent32SetValRate(0x030, 9),
	    0x4360B9F1,  /* 224.72633361816406f */
	    0x415727C1,  /* 13.447205543518066f */
	    0x42D00000,  /* 104.0f */
	    0xC078D3BF,  /* -3.8879239559173584f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x180, 0),
	    0x3D98B152,  /* 0.07455696165561676f */
	    0xBE071C4E,  /* -0.13194391131401062f */
	aobjEvent32SetValRate(0x100, 5),
	    0x3F67A058,  /* 0.9047904014587402f */
	    0xBEBFFFDA,  /* -0.37499886751174927f */
	aobjEvent32SetVal0RateBlock(0x080, 5),
	    0x4012B4E0,  /* 2.2922897338867188f */
	aobjEvent32SetValRate(0x100, 1),
	    0x3FA917DB,  /* 1.3210405111312866f */
	    0x3DE14779,  /* 0.10999960452318192f */
	aobjEvent32SetVal0RateBlock(0x080, 1),
	    0x3F20961A,  /* 0.6272903680801392f */
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x4006B4E3,  /* 2.104790449142456f */
	    0x4006B4E3,  /* 2.104790449142456f */
	aobjEvent32SetValRate(0x020, 7),
	    0xC2100000,  /* -36.0f */
	    0xC08C7FEB,  /* -4.390614986419678f */
	aobjEvent32SetVal0Rate(0x180, 9),
	    0x4006B4E3,  /* 2.104790449142456f */
	    0x4006B4E3,  /* 2.104790449142456f */
	aobjEvent32SetValBlock(0x010, 7),
	    0x436FD7C0,  /* 239.8427734375f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0xC0CD000A,  /* -6.406254768371582f */
	aobjEvent32SetValRate(0x030, 11),
	    0x42D80000,  /* 108.0f */
	    0xC0E55A74,  /* -7.167291641235352f */
	    0x41C00000,  /* 24.0f */
	    0x4050C06F,  /* 3.2617452144622803f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x180, 7),
	    0x3F800000,  /* 1.0f */
	    0xBD43C13A,  /* -0.04779169708490372f */
	    0x3F800000,  /* 1.0f */
	    0xBD43C13A,  /* -0.04779169708490372f */
	aobjEvent32SetVal0RateBlock(0x180, 2),
	    0x3FE703B1,  /* 1.8048001527786255f */
	    0x3FE7035D,  /* 1.8047901391983032f */
	aobjEvent32SetVal(0x030, 7),
	    0x42D80000,  /* 108.0f */
	    0x41C00000,  /* 24.0f */
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x3E9C0EBB,  /* 0.304799884557724f */
	    0x3E9C0D6B,  /* 0.30478987097740173f */
	aobjEvent32SetVal0RateBlock(0x180, 1),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x180, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x257E4[] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x00000000,  /* 0.0f */
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValBlock(0x180, 30),
	    0x00000000,  /* 0.0f */
	    0x40800000,  /* 4.0f */
	aobjEvent32SetVal(0x080, 8),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x100, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(0x100, 16),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(4),
	aobjEvent32SetValBlock(0x080, 12),
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25824[] = {
	aobjEvent32SetValBlock(0x1A0, 0),
	    0xC30E8000,  /* -142.5f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(0x1A0, 21),
	    0xC30E8000,  /* -142.5f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(0x180, 29),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x020, 26),
	    0xC2B00000,  /* -88.0f */
	aobjEvent32SetValBlock(0x020, 3),
	    0xC2B00000,  /* -88.0f */
	aobjEvent32End(),
};

u32 dMNTitle_LabelsAnimJoint_AnimJoint_0x25870[] = {
	aobjEvent32SetValBlock(0x1A0, 0),
	    0x43013333,  /* 129.1999969482422f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal(0x020, 26),
	    0x43013333,  /* 129.1999969482422f */
	aobjEvent32SetValBlock(0x180, 25),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(0x180, 1),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC009224D,  /* -2.142718553543091f */
	aobjEvent32SetVal(0x180, 24),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x020, 20),
	    0x42D20000,  /* 105.0f */
	aobjEvent32SetValBlock(0x020, 4),
	    0x42D20000,  /* 105.0f */
	aobjEvent32End(),
};

PAD(8);
#endif

/* Raw data from file offset 0x258D0 to 0x25E70 (1440 bytes) — split into
 * AObjEvent32* tables + AObjEvent32 scripts as the runtime walks them.
 * 3 tables (at +0x0, +0x40, +0x530) point at 4 scripts (at +0x8, +0x4C,
 * +0x2B8, +0x538). Macros not decoded; words kept as raw hex pending
 * aobjEvent32* macro decoding pass. */
extern u32 dMNTitle_PressStartAnimJoint_AnimJoint_0x258D8[14];
extern u32 dMNTitle_PressStartAnimJoint_AnimJoint_0x2591C[155];
extern u32 dMNTitle_PressStartAnimJoint_AnimJoint_0x25B88[158];
extern u32 dMNTitle_PressStartAnimJoint_AnimJoint_0x25E08[23];
extern AObjEvent32 *dMNTitle_PressStartAnimJoint_AnimJoint_0x25910[3];
extern AObjEvent32 *dMNTitle_PressStartAnimJoint_AnimJoint_0x25E00[2];

AObjEvent32 *dMNTitle_PressStartAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dMNTitle_PressStartAnimJoint_AnimJoint_0x258D8,
};

u32 dMNTitle_PressStartAnimJoint_AnimJoint_0x258D8[14] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x3F800000,  /* 1f */
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x180, 19),
	    0x3F800000,  /* 1f */
	    0x3F800000,  /* 1f */
	aobjEvent32SetValBlock(0x180, 1),
	    0x00000000,  /* 0f */
	    0x3727C5AC,  /* 1e-05f */
	aobjEvent32SetValBlock(0x180, 19),
	    0x00000000,  /* 0f */
	    0x00000000,  /* 0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dMNTitle_PressStartAnimJoint_AnimJoint_0x258D8,
};

AObjEvent32 *dMNTitle_PressStartAnimJoint_AnimJoint_0x25910[3] = {
	NULL,
	(AObjEvent32 *)dMNTitle_PressStartAnimJoint_AnimJoint_0x2591C,
	(AObjEvent32 *)dMNTitle_PressStartAnimJoint_AnimJoint_0x25B88,
};

u32 dMNTitle_PressStartAnimJoint_AnimJoint_0x2591C[155] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x00000000,  /* 0f */
	aobjEvent32SetValBlock(0x010, 0),
	    0x00000000,  /* 0f */
	aobjEvent32SetValRate(0x020, 12),
	    0xBF435608,  /* -0.763031f */
	    0xBBB879E5,  /* -0.00562977f */
	aobjEvent32SetValBlock(0x010, 4),
	    0x00000000,  /* 0f */
	aobjEvent32SetVal0Rate(0x010, 15),
	    0xBE9999A1,  /* -0.3f */
	aobjEvent32Wait(8),
	aobjEvent32SetValRate(0x020, 15),
	    0x3ED45E7C,  /* 0.414783f */
	    0x3CCE0E2D,  /* 0.0251532f */
	aobjEvent32Wait(7),
	aobjEvent32SetValRateBlock(0x010, 6),
	    0x00000000,  /* 0f */
	    0x3D12492B,  /* 0.0357143f */
	aobjEvent32SetValRate(0x010, 8),
	    0x3E4CCCD5,  /* 0.2f */
	    0xB112492E,  /* -2.12874e-09f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x020, 11),
	    0xBE680B34,  /* -0.226605f */
	    0x3BE7E960,  /* 0.00707738f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x010, 6),
	    0xB3000000,  /* -2.98023e-08f */
	    0xBC7C0FCA,  /* -0.0153846f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x020, 8),
	    0x3F0C27F1,  /* 0.547484f */
	    0x3C53AA65,  /* 0.012919f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x010, 7),
	    0x00000000,  /* 0f */
	    0xBD088881,  /* -0.0333333f */
	aobjEvent32SetValRate(0x020, 12),
	    0x3CE33BC7,  /* 0.0277385f */
	    0xBD7EF8A2,  /* -0.0622488f */
	aobjEvent32SetValRateBlock(0x010, 5),
	    0xBECCCCD5,  /* -0.4f */
	    0xBC14F20C,  /* -0.00909091f */
	aobjEvent32SetValRateBlock(0x010, 6),
	    0xBDCCCCD5,  /* -0.1f */
	    0x3C6A0EBA,  /* 0.0142857f */
	aobjEvent32SetValRate(0x010, 8),
	    0xBE4CCCD5,  /* -0.2f */
	    0xBC14F20C,  /* -0.00909091f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x020, 4),
	    0x3E2F9D26,  /* 0.171498f */
	    0xBCCFD876,  /* -0.0253718f */
	aobjEvent32SetValRate(0x020, 12),
	    0xBEC8F364,  /* -0.392482f */
	    0xBC6D2EC6,  /* -0.0144765f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x010, 3),
	    0xBE4CCCD5,  /* -0.2f */
	    0x3D3A2E90,  /* 0.0454546f */
	aobjEvent32SetValRate(0x010, 8),
	    0x3E9999A1,  /* 0.3f */
	    0x3D124934,  /* 0.0357143f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x020, 8),
	    0xBE022125,  /* -0.12708f */
	    0x3B9C1840,  /* 0.00476363f */
	aobjEvent32Wait(2),
	aobjEvent32SetVal0RateBlock(0x010, 6),
	    0x3E9999A1,  /* 0.3f */
	aobjEvent32SetValRate(0x020, 9),
	    0xBEA15136,  /* -0.315073f */
	    0x3C6EBB9A,  /* 0.0145711f */
	aobjEvent32SetValRateBlock(0x010, 7),
	    0x3E9999A1,  /* 0.3f */
	    0xBD162FD1,  /* -0.0366667f */
	aobjEvent32SetValRate(0x010, 8),
	    0xBE800006,  /* -0.25f */
	    0x3D5C8DC2,  /* 0.0538461f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x020, 13),
	    0x3E3AF006,  /* 0.182556f */
	    0x3C48B16A,  /* 0.0122493f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(0x010, 5),
	    0x3F800000,  /* 1f */
	    0x3C9D89DF,  /* 0.0192308f */
	aobjEvent32SetValRate(0x010, 8),
	    0x32000000,  /* 7.45058e-09f */
	    0xBD9999A3,  /* -0.0750001f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x020, 11),
	    0xBC8720FC,  /* -0.0164952f */
	    0x3C71931F,  /* 0.0147445f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x010, 6),
	    0xBD4CCCD5,  /* -0.05f */
	    0xBCCC0F04,  /* -0.0249095f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x020, 15),
	    0x3F11D163,  /* 0.569601f */
	    0x3C291A2B,  /* 0.0103212f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x010, 13),
	    0xBEF12FB0,  /* -0.471067f */
	    0x3B1B9292,  /* 0.00237385f */
	aobjEvent32SetValRate(0x010, 9),
	    0x3B3F42F2,  /* 0.00291842f */
	    0x3BA546D4,  /* 0.00504384f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x020, 8),
	    0xBEB52E6B,  /* -0.35387f */
	    0x3BFC5882,  /* 0.00770098f */
	aobjEvent32SetValRate(0x010, 11),
	    0xBEBC8E88,  /* -0.368275f */
	    0xBBAF4B30,  /* -0.00534954f */
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x3E29DB83,  /* 0.165876f */
	    0x3D6EF080,  /* 0.0583348f */
	aobjEvent32SetValRate(0x020, 12),
	    0x3EF3765A,  /* 0.475512f */
	    0x3C9B73C2,  /* 0.0189761f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x010, 11),
	    0xBDE3EE97,  /* -0.111295f */
	    0x3BEE9E51,  /* 0.00728206f */
	aobjEvent32SetValRate(0x010, 15),
	    0xBE382380,  /* -0.179823f */
	    0x3BF9A7A4,  /* 0.00761886f */
	aobjEvent32SetValRateBlock(0x020, 7),
	    0x3E9E889A,  /* 0.309636f */
	    0x3D0FB826,  /* 0.0350877f */
	aobjEvent32SetValRateBlock(0x020, 4),
	    0x3F9E889A,  /* 1.23854f */
	    0xBCCE7816,  /* -0.0252037f */
	aobjEvent32SetValRate(0x020, 19),
	    0x3F22C25A,  /* 0.635778f */
	    0x3DF27775,  /* 0.118392f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x010, 15),
	    0x3DFB94CF,  /* 0.122842f */
	    0x3B9FFD41,  /* 0.00488249f */
	aobjEvent32SetVal0Rate(0x010, 22),
	    0x00000000,  /* 0f */
	aobjEvent32SetValRateBlock(0x020, 7),
	    0x3DF91FCE,  /* 0.121643f */
	    0x3C71A741,  /* 0.0147493f */
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x3F627A02,  /* 0.884674f */
	    0xBC068C7A,  /* -0.0082122f */
	aobjEvent32SetVal0RateBlock(0x020, 5),
	    0x00000000,  /* 0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dMNTitle_PressStartAnimJoint_AnimJoint_0x2591C,
};

u32 dMNTitle_PressStartAnimJoint_AnimJoint_0x25B88[158] = {
	aobjEvent32SetVal0RateBlock(0x030, 0),
	    0x00000000,  /* 0f */
	    0x00000000,  /* 0f */
	aobjEvent32SetValRate(0x010, 28),
	    0x3DFB94CF,  /* 0.122842f */
	    0xBB8A7090,  /* -0.00422484f */
	aobjEvent32SetValRateBlock(0x020, 7),
	    0x3EB9D73D,  /* 0.36297f */
	    0x3B43EC1A,  /* 0.00298954f */
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x3D4C6CBC,  /* 0.0499084f */
	    0xBBC64B77,  /* -0.00605148f */
	aobjEvent32SetValRateBlock(0x020, 7),
	    0x3E858E4C,  /* 0.260851f */
	    0xBD46F633,  /* -0.0485746f */
	aobjEvent32SetValRate(0x020, 19),
	    0x3F0216A8,  /* 0.508158f */
	    0x3C296C4D,  /* 0.0103408f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x010, 15),
	    0xBE382380,  /* -0.179823f */
	    0xBBFCEF7F,  /* -0.00771898f */
	aobjEvent32SetValRate(0x010, 15),
	    0xBDE3EE97,  /* -0.111295f */
	    0xBBF1C07A,  /* -0.00737768f */
	aobjEvent32SetValRateBlock(0x020, 4),
	    0xBD1F5000,  /* -0.0388947f */
	    0xBC6BDD53,  /* -0.014396f */
	aobjEvent32SetValRateBlock(0x020, 7),
	    0x3E47C75A,  /* 0.195096f */
	    0x3D5380BF,  /* 0.0516365f */
	aobjEvent32SetValRate(0x020, 11),
	    0x3D8B616A,  /* 0.0680569f */
	    0xBCC4113E,  /* -0.023934f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x010, 10),
	    0xBEBC8E88,  /* -0.368275f */
	    0x3BB19864,  /* 0.00541978f */
	aobjEvent32Wait(7),
	aobjEvent32SetValRate(0x020, 11),
	    0xBE14AC2E,  /* -0.145188f */
	    0xBB4F1177,  /* -0.00315961f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x010, 11),
	    0x3B3F42F2,  /* 0.00291842f */
	    0xBBA772D3,  /* -0.00511012f */
	aobjEvent32Wait(8),
	aobjEvent32SetValRate(0x020, 8),
	    0x00000000,  /* 0f */
	    0x3AA4AAB7,  /* 0.00125631f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x010, 9),
	    0xBEF12FB0,  /* -0.471067f */
	    0xBB1D9E20,  /* -0.00240505f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x020, 14),
	    0xBDF22556,  /* -0.118235f */
	    0x3B932B00,  /* 0.00449121f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x010, 13),
	    0xBD4CCCD5,  /* -0.05f */
	    0x3CCEBD9E,  /* 0.0252369f */
	aobjEvent32Wait(10),
	aobjEvent32SetValRate(0x020, 12),
	    0x3DF1727A,  /* 0.117894f */
	    0xBB4F1B5E,  /* -0.0031602f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x010, 6),
	    0x32000000,  /* 7.45058e-09f */
	    0x3D9B9DEB,  /* 0.0759848f */
	aobjEvent32SetValRate(0x010, 8),
	    0x3F800000,  /* 1f */
	    0xBC9F9BBF,  /* -0.0194834f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x020, 13),
	    0xBE4B561E,  /* -0.198571f */
	    0xBC17D231,  /* -0.00926642f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x010, 5),
	    0xBE800006,  /* -0.25f */
	    0xBD5F73A5,  /* -0.0545536f */
	aobjEvent32SetValRate(0x010, 8),
	    0x3E9999A1,  /* 0.3f */
	    0x3D182909,  /* 0.0371485f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x020, 8),
	    0xBDA1D3E0,  /* -0.0790174f */
	    0xBB4688C6,  /* -0.00302939f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0Rate(0x010, 7),
	    0x3E9999A1,  /* 0.3f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x020, 9),
	    0xBE7DBEDC,  /* -0.247798f */
	    0x3C16D5CF,  /* 0.00920625f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x010, 5),
	    0x3E9999A1,  /* 0.3f */
	    0xBD143503,  /* -0.0361834f */
	aobjEvent32SetValRate(0x020, 12),
	    0x3DE30B6E,  /* 0.110862f */
	    0x3C842DA0,  /* 0.016135f */
	aobjEvent32SetValRateBlock(0x010, 8),
	    0xBE4CCCD5,  /* -0.2f */
	    0xBD3CA10A,  /* -0.046052f */
	aobjEvent32SetValRateBlock(0x010, 3),
	    0xBE4CCCD5,  /* -0.2f */
	    0x3C16E73A,  /* 0.0092104f */
	aobjEvent32SetValRate(0x010, 8),
	    0xBDCCCCD5,  /* -0.1f */
	    0xBC6D21DF,  /* -0.0144734f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x020, 4),
	    0x3C9F3D98,  /* 0.0194385f */
	    0x3D2225C1,  /* 0.0395868f */
	aobjEvent32SetValRate(0x020, 12),
	    0x3EB32F00,  /* 0.349968f */
	    0xBC069B8A,  /* -0.00821579f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x010, 6),
	    0xBECCCCD5,  /* -0.4f */
	    0x3C16E6D2,  /* 0.00921031f */
	aobjEvent32SetValRate(0x010, 5),
	    0x00000000,  /* 0f */
	    0x3D0A53B4,  /* 0.0337712f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x020, 8),
	    0xBE11B9B7,  /* -0.14231f */
	    0xBB937BA4,  /* -0.00450082f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x010, 7),
	    0xB3000000,  /* -2.98023e-08f */
	    0x3C7F5FCD,  /* 0.0155868f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x020, 10),
	    0x3E87F9C5,  /* 0.265577f */
	    0xBC830A2F,  /* -0.0159961f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x010, 6),
	    0x3E4CCCD5,  /* 0.2f */
	    0x3114353A,  /* 2.15671e-09f */
	aobjEvent32SetValRate(0x010, 8),
	    0x00000000,  /* 0f */
	    0xBD143503,  /* -0.0361834f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x020, 16),
	    0xBDF83E72,  /* -0.121213f */
	    0x3B7BDE6C,  /* 0.00384321f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0RateBlock(0x010, 6),
	    0xBE9999A1,  /* -0.3f */
	aobjEvent32SetVal0Rate(0x010, 15),
	    0x00000000,  /* 0f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dMNTitle_PressStartAnimJoint_AnimJoint_0x25B88,
};

AObjEvent32 *dMNTitle_PressStartAnimJoint_AnimJoint_0x25E00[2] = {
	NULL,
	(AObjEvent32 *)dMNTitle_PressStartAnimJoint_AnimJoint_0x25E08,
};

u32 dMNTitle_PressStartAnimJoint_AnimJoint_0x25E08[23] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0xC3120000,  /* -146f */
	    0x431B8000,  /* 155.5f */
	aobjEvent32SetVal(0x030, 16),
	    0xC2A70000,  /* -83.5f */
	    0x42600000,  /* 56f */
	aobjEvent32Cmd12(0x030, 6),
	aobjEvent32SetValRate(0x180, 0),
	    0x403F6F54,  /* 2.99117f */
	    0x3EFB7E6F,  /* 0.491199f */
	    0x403F6F54,  /* 2.99117f */
	    0x3EF971D7,  /* 0.487197f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValRate(0x180, 12),
	    0x3F800000,  /* 1f */
	    0x3E6407A5,  /* 0.222685f */
	    0x3F800000,  /* 1f */
	    0x3E658B0A,  /* 0.224163f */
	aobjEvent32Wait(10),
	aobjEvent32SetValBlock(0x030, 2),
	    0xC2A70000,  /* -83.5f */
	    0x42600000,  /* 56f */
	aobjEvent32End(),
};
PAD(12);

/* Raw data from file offset 0x25E70 to 0x25F60 (240 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dMNTitle_SlashAnimJoint_AnimJoint[5] = {
	NULL,
	(AObjEvent32 *)dMNTitle_SlashAnimJoint_AnimJoint_0x25E84,
	(AObjEvent32 *)dMNTitle_SlashAnimJoint_AnimJoint_0x25EBC,
	(AObjEvent32 *)dMNTitle_SlashAnimJoint_AnimJoint_0x25EF4,
	(AObjEvent32 *)dMNTitle_SlashAnimJoint_AnimJoint_0x25F24,
};

u32 dMNTitle_SlashAnimJoint_AnimJoint_0x25E84[] = {
	aobjEvent32SetVal(0x080, 0),
	    0x3FC050F0,  /* 1.5024700164794922f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValBlock(0x080, 30),
	    0x3FC05100,  /* 1.502471923828125f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValBlock(0x080, 5),
	    0x3E312C78,  /* 0.17302119731903076f */
	aobjEvent32SetValBlock(0x080, 15),
	    0x3A83126F,  /* 0.0010000000474974513f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValBlock(0x080, 30),
	    0x3A83126F,  /* 0.0010000000474974513f */
	aobjEvent32End(),
};

u32 dMNTitle_SlashAnimJoint_AnimJoint_0x25EBC[] = {
	aobjEvent32SetVal(0x020, 0),
	    0x437EB320,  /* 254.69970703125f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValBlock(0x020, 29),
	    0x437EB322,  /* 254.69973754882812f */
	aobjEvent32SetVal(0x020, 15),
	    0xC384A66F,  /* -265.3002624511719f */
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x000, 14),
	aobjEvent32SetVal(0x020, 36),
	    0xC384A66F,  /* -265.3002624511719f */
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x002, 35),
	aobjEvent32End(),
};

u32 dMNTitle_SlashAnimJoint_AnimJoint_0x25EF4[] = {
	aobjEvent32SetVal(0x100, 0),
	    0x40251EB8,  /* 2.5799999237060547f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValBlock(0x100, 60),
	    0x40251EB5,  /* 2.5799992084503174f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValBlock(0x100, 5),
	    0x3ED13099,  /* 0.4085738956928253f */
	aobjEvent32SetValBlock(0x100, 15),
	    0x3A83126F,  /* 0.0010000000474974513f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dMNTitle_SlashAnimJoint_AnimJoint_0x25F24[] = {
	aobjEvent32SetVal(0x010, 0),
	    0x438FFAE1,  /* 287.9599914550781f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValBlock(0x010, 59),
	    0x438FFAE2,  /* 287.96002197265625f */
	aobjEvent32SetVal(0x010, 15),
	    0xC37C0A3B,  /* -252.0399627685547f */
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x000, 14),
	aobjEvent32SetVal(0x010, 6),
	    0xC37C0A3B,  /* -252.0399627685547f */
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x002, 5),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x25F60 to 0x26020 (192 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 **dMNTitle_SlashMat_AnimJoint[5] = {
	NULL,
	NULL,
	dMNTitle_SlashMat_AnimJoint_0x26010,
	NULL,
	dMNTitle_SlashMat_AnimJoint_0x26014,
};

u32 dMNTitle_SlashMat_AnimJoint_0x25F74[] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 33),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x40C00000,  /* 6.0f */
	aobjEvent32Wait(43),
	aobjEvent32End(),
};

u32 dMNTitle_SlashMat_AnimJoint_0x25FB4[] = {
	aobjEvent32SetValAfterBlock(0x021, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x021, 64),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x021, 1),
	    0x40000000,  /* 2.0f */
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x021, 1),
	    0x40400000,  /* 3.0f */
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x021, 1),
	    0x40800000,  /* 4.0f */
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x021, 1),
	    0x40A00000,  /* 5.0f */
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfter(0x021, 1),
	    0x40C00000,  /* 6.0f */
	    0x40C00000,  /* 6.0f */
	aobjEvent32Wait(12),
	aobjEvent32End(),
};

AObjEvent32 *dMNTitle_SlashMat_AnimJoint_0x26010[] = { (AObjEvent32 *)dMNTitle_SlashMat_AnimJoint_0x25F74 };

AObjEvent32 *dMNTitle_SlashMat_AnimJoint_0x26014[] = {
	(AObjEvent32 *)dMNTitle_SlashMat_AnimJoint_0x25FB4,
	NULL,
};

PAD(4);

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

/* DObjDesc: PressStartDObjDesc @ 0x262C0 (3 entries + 12-byte alignment PAD). */
DObjDesc dMNTitle_PressStartDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -1.0f, -58.5f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
PAD(12);

/* DObjDesc tree @ 0x26350 — 3 unit-scale joints at y=273.077 (likely the
 * title-screen "PRESS START" text anchor pair) + sentinel. Previously
 * folded into gap_0x26370 (its leading {1,1,1} scale was the trailing
 * Vec3f of joint 0's scale field). Not referenced by any .reloc — the
 * consuming code looks it up by file offset. */
DObjDesc dMNTitle_DObjDesc_0x26350[4] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -0.8f, 273.07703f, -30.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 4.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 3.999999f, 273.07703f, -30.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
PAD(8);

/* gap sub-block @ 0x26408 (was gap+0x98, 1480 bytes) */
/* @tex fmt=I4 dim=80x37 */
u8 dMNTitle_Tex_0x26408[1480] = {
	#include <MNTitle/Tex_0x26408.tex.inc.c>
};

/* gap sub-block @ 0x269D0 (was gap+0x660, 64 bytes) */
Vtx dMNTitle_gap_0x26370_sub_0x660[4] = {
	#include <MNTitle/gap_0x26370_sub_0x660.vtx.inc.c>
};

/* gap sub-block @ 0x26A10 (was gap+0x6A0, 176 bytes) */
Gfx dMNTitle_DL_0x26A10[22] = {
	#include <MNTitle/DL_0x26A10.dl.inc.c>
};

/* Scene-graph block @ 0x26AC0 (168 bytes): DObjDLLink[2] + DObjDesc[3] + PAD(20). */
DObjDLLink dMNTitle_DLLink_0x26AC0[2] = {
	{ 1, dMNTitle_DL_0x26A10 },
	{ 4, NULL },
};

DObjDesc dMNTitle_DObjDesc_0x26AD0[3] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMNTitle_DLLink_0x26AC0, { -83.5f, 56.0f, 0.0f }, { 0.0f, 0.0f, 0.296706f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(20);

/* gap sub-block @ 0x26B68 (was gap+0x7F8, 40 bytes) */
u16 dMNTitle_gap_0x26370_sub_0x7F8[16] = {
	#include <MNTitle/gap_0x26370_sub_0x7F8.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x26B90 (was gap+0x820, 1032 bytes) */
/* @tex fmt=IA8 dim=16x64 */
u8 dMNTitle_Tex_0x26B90[1032] = {
	#include <MNTitle/Tex_0x26B90.tex.inc.c>
};

/* Slash animation textures @ 0x26F98..0x287C8 — 6 frames of the Slash
 * effect (referenced via SlashMObjSub.sprites pointer array at +0x14..+0x28,
 * and again at +0x30..+0x44). Each is 1024 bytes IA8 16x64 + 8-byte pad. */
/* @tex fmt=IA8 dim=16x64 */
u8 dMNTitle_Tex_0x26F98[1032] = {
	#include <MNTitle/Tex_0x26F98.tex.inc.c>
};

/* @tex fmt=IA8 dim=16x64 */
u8 dMNTitle_Tex_0x273A0[1032] = {
	#include <MNTitle/Tex_0x273A0.tex.inc.c>
};

/* @tex fmt=IA8 dim=16x64 */
u8 dMNTitle_Tex_0x277A8[1032] = {
	#include <MNTitle/Tex_0x277A8.tex.inc.c>
};

/* @tex fmt=IA8 dim=16x64 */
u8 dMNTitle_Tex_0x27BB0[1032] = {
	#include <MNTitle/Tex_0x27BB0.tex.inc.c>
};

/* @tex fmt=IA8 dim=16x64 */
u8 dMNTitle_Tex_0x27FB8[1032] = {
	#include <MNTitle/Tex_0x27FB8.tex.inc.c>
};

/* @tex fmt=IA8 dim=16x64 */
u8 dMNTitle_Tex_0x283C0[1032] = {
	#include <MNTitle/Tex_0x283C0.tex.inc.c>
};

/* gap sub-block @ 0x287C8 (was gap+0x2458, 16 bytes) */
/* @tex fmt=CI4 dim=16x2 lut=dMNTitle_gap_0x26370_sub_0x7F8 */
u8 dMNTitle_Tex_0x287C8[16] = {
	#include <MNTitle/Tex_0x287C8.tex.inc.c>
};

/* SlashMObjSub block @ 0x287D8 (0x140 bytes total): MObjSub** table for the
 * 5-joint SlashDObjDesc tree (slots 2 & 4 populated) + 2 sprite-pointer
 * arrays + 2 MObjSub instances. The "real" instances live at +0x50 and
 * +0xC8 (the 120-byte block boundary the extractor first picked was
 * inside MObjSub #1).
 *
 *   +0x000  MObjSub **[5]  (top table, this symbol — what `MObjSub***` consumer reads)
 *   +0x014  void *[7]       (sprites array A — referenced by MObjSub #1)
 *   +0x030  void *[7]       (sprites array B — referenced by MObjSub #2)
 *   +0x04C  PAD(4)
 *   +0x050  MObjSub        (#1: sprites→SpritesA)
 *   +0x0C8  MObjSub        (#2: sprites→SpritesB)
 *   +0x140  MObjSub *[2]   (TableA: { &#1, NULL })  [was gap_0x28850_sub_0xC8]
 *   +0x148  MObjSub *[2]   (TableB: { &#2, NULL })  [was gap_0x28850_sub_0xD0]
 */
extern MObjSub *dMNTitle_SlashMObjSub_TableA[2];
extern MObjSub *dMNTitle_SlashMObjSub_TableB[2];
extern void *dMNTitle_SlashMObjSub_SpritesA[7];
extern void *dMNTitle_SlashMObjSub_SpritesB[7];
extern MObjSub dMNTitle_SlashMObjSub_Real1[1];
extern MObjSub dMNTitle_SlashMObjSub_Real2[1];

MObjSub **dMNTitle_SlashMObjSub_MObjSub[5] = {
	NULL,
	NULL,
	(MObjSub **)dMNTitle_SlashMObjSub_TableA,
	NULL,
	(MObjSub **)dMNTitle_SlashMObjSub_TableB,
};

void *dMNTitle_SlashMObjSub_SpritesA[7] = {
	(void *)dMNTitle_Tex_0x283C0,
	(void *)dMNTitle_Tex_0x27FB8,
	(void *)dMNTitle_Tex_0x27BB0,
	(void *)dMNTitle_Tex_0x277A8,
	(void *)dMNTitle_Tex_0x273A0,
	(void *)dMNTitle_Tex_0x26F98,
	(void *)dMNTitle_Tex_0x26B90,
};

void *dMNTitle_SlashMObjSub_SpritesB[7] = {
	(void *)dMNTitle_Tex_0x283C0,
	(void *)dMNTitle_Tex_0x27FB8,
	(void *)dMNTitle_Tex_0x27BB0,
	(void *)dMNTitle_Tex_0x277A8,
	(void *)dMNTitle_Tex_0x273A0,
	(void *)dMNTitle_Tex_0x26F98,
	(void *)dMNTitle_Tex_0x26B90,
};

PAD(4);

/* MObjSub #1: color sprite frames (sprites→SpritesA). */
MObjSub dMNTitle_SlashMObjSub_Real1[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)dMNTitle_SlashMObjSub_SpritesA,
		0x0020, 0x0000, 0x0020, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0010,
		0x0040, 0x0020, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0xFF, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub #2: alpha sprite frames (sprites→SpritesB) — was gap_0x28850_sub_0x50. */
MObjSub dMNTitle_SlashMObjSub_Real2[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)dMNTitle_SlashMObjSub_SpritesB,
		0x0020, 0x0000, 0x0020, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0003,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0010,
		0x0040, 0x0020, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0xFF, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub pointer table A @ 0x28918 — referenced by SlashMObjSub[2]. */
MObjSub *dMNTitle_SlashMObjSub_TableA[2] = {
	&dMNTitle_SlashMObjSub_Real1[0],
	NULL,
};

/* MObjSub pointer table B @ 0x28920 — referenced by SlashMObjSub[4]. */
MObjSub *dMNTitle_SlashMObjSub_TableB[2] = {
	&dMNTitle_SlashMObjSub_Real2[0],
	NULL,
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
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dMNTitle_FireAnimJoint_AnimJoint[7] = {
	NULL,
	NULL,
	(AObjEvent32 *)dMNTitle_FireAnimJoint_AnimJoint_0x2902C,
	NULL,
	(AObjEvent32 *)dMNTitle_FireAnimJoint_AnimJoint_0x29038,
	NULL,
	(AObjEvent32 *)dMNTitle_FireAnimJoint_AnimJoint_0x29088,
};

u32 dMNTitle_FireAnimJoint_AnimJoint_0x2902C[] = {
	aobjEvent32Wait(35),
	aobjEvent32Cmd16(0x020, 195),
	aobjEvent32End(),
};

u32 dMNTitle_FireAnimJoint_AnimJoint_0x29038[] = {
	aobjEvent32SetValAfter(0x050, 0),
	    0xC3CAF6B9,  /* -405.9275207519531f */
	    0xC405D5A0,  /* -535.337890625f */
	aobjEvent32SetValRate(0x020, 0),
	    0xC4745CB2,  /* -977.4483642578125f */
	    0x421A81BB,  /* 38.62668991088867f */
	aobjEvent32Cmd16(0x01F, 0),
	aobjEvent32SetValRateBlock(0x020, 20),
	    0xC3ABB590,  /* -343.41845703125f */
	    0x4129131C,  /* 10.56716537475586f */
	aobjEvent32SetValBlock(0x020, 40),
	    0xC3ABB590,  /* -343.41845703125f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBE3BEC74,  /* -0.183519184589386f */
	aobjEvent32SetValRateBlock(0x020, 20),
	    0xC4B9AC93,  /* -1485.3929443359375f */
	    0xC2AF7E85,  /* -87.74710845947266f */
	aobjEvent32SetValBlock(0x020, 150),
	    0xC4B9AC93,  /* -1485.3929443359375f */
	aobjEvent32End(),
};

u32 dMNTitle_FireAnimJoint_AnimJoint_0x29088[] = {
	aobjEvent32Wait(65),
	aobjEvent32Cmd16(0x021, 165),
	aobjEvent32End(),
};
