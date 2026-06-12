/* relocData file 11: SC1PIntro */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Sprite: VSDecal */

Gfx dSC1PIntro_VSDecal_dl[] = { gsSPEndDisplayList() };

/* Texture: VSDecal (52x38 rgba32, 2 tiles) */
u8 dSC1PIntro_VSDecal_tex[7912] = {
    #include <SC1PIntro/VSDecal.rgba32.inc.c>
};

Bitmap dSC1PIntro_VSDecal_bitmaps[] = {
	{ 52, 52, 0, 0, dSC1PIntro_VSDecal_tex, 19, 0 },
	{ 52, 52, 0, 0, dSC1PIntro_VSDecal_tex + 0xF78, 19, 0 },
};

/* Sprite: VSDecal (52x37 rgba32) */
Sprite dSC1PIntro_VSDecal = {
	0, 0,
	52, 37,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	18, 19,
	0, 3,
	(Bitmap*)dSC1PIntro_VSDecal_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: Number1 */

Gfx dSC1PIntro_Number1_dl[] = { gsSPEndDisplayList() };

/* Texture: Number1 (11(16)x20 i4) */
u8 dSC1PIntro_Number1_tex[160] = {
    #include <SC1PIntro/Number1.i4.inc.c>
};

Bitmap dSC1PIntro_Number1_bitmaps[] = {
	{ 11, 16, 0, 0, dSC1PIntro_Number1_tex, 20, 0 },
};

/* Sprite: Number1 (11x20 i4) */
Sprite dSC1PIntro_Number1 = {
	0, 0,
	11, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Number1_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Number2 */

Gfx dSC1PIntro_Number2_dl[] = { gsSPEndDisplayList() };

/* Texture: Number2 (12(16)x20 i4) */
u8 dSC1PIntro_Number2_tex[160] = {
    #include <SC1PIntro/Number2.i4.inc.c>
};

Bitmap dSC1PIntro_Number2_bitmaps[] = {
	{ 12, 16, 0, 0, dSC1PIntro_Number2_tex, 20, 0 },
};

/* Sprite: Number2 (12x20 i4) */
Sprite dSC1PIntro_Number2 = {
	0, 0,
	12, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Number2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Number3 */

Gfx dSC1PIntro_Number3_dl[] = { gsSPEndDisplayList() };

/* Texture: Number3 (12(16)x20 i4) */
u8 dSC1PIntro_Number3_tex[160] = {
    #include <SC1PIntro/Number3.i4.inc.c>
};

Bitmap dSC1PIntro_Number3_bitmaps[] = {
	{ 12, 16, 0, 0, dSC1PIntro_Number3_tex, 20, 0 },
};

/* Sprite: Number3 (12x20 i4) */
Sprite dSC1PIntro_Number3 = {
	0, 0,
	12, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Number3_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Number4 */

Gfx dSC1PIntro_Number4_dl[] = { gsSPEndDisplayList() };

/* Texture: Number4 (12(16)x20 i4) */
u8 dSC1PIntro_Number4_tex[160] = {
    #include <SC1PIntro/Number4.i4.inc.c>
};

Bitmap dSC1PIntro_Number4_bitmaps[] = {
	{ 12, 16, 0, 0, dSC1PIntro_Number4_tex, 20, 0 },
};

/* Sprite: Number4 (12x20 i4) */
Sprite dSC1PIntro_Number4 = {
	0, 0,
	12, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Number4_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Number5 */

Gfx dSC1PIntro_Number5_dl[] = { gsSPEndDisplayList() };

/* Texture: Number5 (13(16)x20 i4) */
u8 dSC1PIntro_Number5_tex[160] = {
    #include <SC1PIntro/Number5.i4.inc.c>
};

Bitmap dSC1PIntro_Number5_bitmaps[] = {
	{ 13, 16, 0, 0, dSC1PIntro_Number5_tex, 20, 0 },
};

/* Sprite: Number5 (13x20 i4) */
Sprite dSC1PIntro_Number5 = {
	0, 0,
	13, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Number5_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Number6 */

Gfx dSC1PIntro_Number6_dl[] = { gsSPEndDisplayList() };

/* Texture: Number6 (13(16)x20 i4) */
u8 dSC1PIntro_Number6_tex[160] = {
    #include <SC1PIntro/Number6.i4.inc.c>
};

Bitmap dSC1PIntro_Number6_bitmaps[] = {
	{ 13, 16, 0, 0, dSC1PIntro_Number6_tex, 20, 0 },
};

/* Sprite: Number6 (13x20 i4) */
Sprite dSC1PIntro_Number6 = {
	0, 0,
	13, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Number6_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Number7 */

Gfx dSC1PIntro_Number7_dl[] = { gsSPEndDisplayList() };

/* Texture: Number7 (12(16)x20 i4) */
u8 dSC1PIntro_Number7_tex[160] = {
    #include <SC1PIntro/Number7.i4.inc.c>
};

Bitmap dSC1PIntro_Number7_bitmaps[] = {
	{ 12, 16, 0, 0, dSC1PIntro_Number7_tex, 20, 0 },
};

/* Sprite: Number7 (12x20 i4) */
Sprite dSC1PIntro_Number7 = {
	0, 0,
	12, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Number7_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Number8 */

Gfx dSC1PIntro_Number8_dl[] = { gsSPEndDisplayList() };

/* Texture: Number8 (15(16)x20 i4) */
u8 dSC1PIntro_Number8_tex[160] = {
    #include <SC1PIntro/Number8.i4.inc.c>
};

Bitmap dSC1PIntro_Number8_bitmaps[] = {
	{ 15, 16, 0, 0, dSC1PIntro_Number8_tex, 20, 0 },
};

/* Sprite: Number8 (15x20 i4) */
Sprite dSC1PIntro_Number8 = {
	0, 0,
	15, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Number8_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Number9 */

Gfx dSC1PIntro_Number9_dl[] = { gsSPEndDisplayList() };

/* Texture: Number9 (13(16)x20 i4) */
u8 dSC1PIntro_Number9_tex[160] = {
    #include <SC1PIntro/Number9.i4.inc.c>
};

Bitmap dSC1PIntro_Number9_bitmaps[] = {
	{ 13, 16, 0, 0, dSC1PIntro_Number9_tex, 20, 0 },
};

/* Sprite: Number9 (13x20 i4) */
Sprite dSC1PIntro_Number9 = {
	0, 0,
	13, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Number9_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Number10 */

Gfx dSC1PIntro_Number10_dl[] = { gsSPEndDisplayList() };

/* Texture: Number10 (18(32)x20 i4) */
u8 dSC1PIntro_Number10_tex[320] = {
    #include <SC1PIntro/Number10.i4.inc.c>
};

Bitmap dSC1PIntro_Number10_bitmaps[] = {
	{ 18, 32, 0, 0, dSC1PIntro_Number10_tex, 20, 0 },
};

/* Sprite: Number10 (18x20 i4) */
Sprite dSC1PIntro_Number10 = {
	0, 0,
	18, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Number10_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Cross */

Gfx dSC1PIntro_Cross_dl[] = { gsSPEndDisplayList() };

/* Texture: Cross (17(32)x20 i4) */
u8 dSC1PIntro_Cross_tex[320] = {
    #include <SC1PIntro/Cross.i4.inc.c>
};

Bitmap dSC1PIntro_Cross_bitmaps[] = {
	{ 17, 32, 0, 0, dSC1PIntro_Cross_tex, 20, 0 },
};

/* Sprite: Cross (17x20 i4) */
Sprite dSC1PIntro_Cross = {
	0, 0,
	17, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_Cross_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: StageText */

Gfx dSC1PIntro_StageText_dl[] = { gsSPEndDisplayList() };

/* Texture: StageText (57(64)x20 i4) */
u8 dSC1PIntro_StageText_tex[640] = {
    #include <SC1PIntro/StageText.i4.inc.c>
};

Bitmap dSC1PIntro_StageText_bitmaps[] = {
	{ 57, 64, 0, 0, dSC1PIntro_StageText_tex, 20, 0 },
};

/* Sprite: StageText (57x20 i4) */
Sprite dSC1PIntro_StageText = {
	0, 0,
	57, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	4, 0,
	(Bitmap*)dSC1PIntro_StageText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: BonusText */

Gfx dSC1PIntro_BonusText_dl[] = { gsSPEndDisplayList() };

/* Texture: BonusText (62(64)x19 i4) */
u8 dSC1PIntro_BonusText_tex[608] = {
    #include <SC1PIntro/BonusText.i4.inc.c>
};

Bitmap dSC1PIntro_BonusText_bitmaps[] = {
	{ 62, 64, 0, 0, dSC1PIntro_BonusText_tex, 19, 0 },
};

/* Sprite: BonusText (62x19 i4) */
Sprite dSC1PIntro_BonusText = {
	0, 0,
	62, 19,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	19, 19,
	4, 0,
	(Bitmap*)dSC1PIntro_BonusText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: FinalText */

Gfx dSC1PIntro_FinalText_dl[] = { gsSPEndDisplayList() };

/* Texture: FinalText (48x19 i4) */
u8 dSC1PIntro_FinalText_tex[456] = {
    #include <SC1PIntro/FinalText.i4.inc.c>
};

Bitmap dSC1PIntro_FinalText_bitmaps[] = {
	{ 48, 48, 0, 0, dSC1PIntro_FinalText_tex, 19, 0 },
};

/* Sprite: FinalText (48x19 i4) */
Sprite dSC1PIntro_FinalText = {
	0, 0,
	48, 19,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	19, 19,
	4, 0,
	(Bitmap*)dSC1PIntro_FinalText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: BreakTheTargetsText */

Gfx dSC1PIntro_BreakTheTargetsText_dl[] = { gsSPEndDisplayList() };

/* Texture: BreakTheTargetsText (178(192)x20 i4) */
#if defined(REGION_JP)
u8 dSC1PIntro_BreakTheTargetsText_tex[1280] = {
#else
u8 dSC1PIntro_BreakTheTargetsText_tex[1920] = {
#endif
    #include <SC1PIntro/BreakTheTargetsText.i4.inc.c>
};

Bitmap dSC1PIntro_BreakTheTargetsText_bitmaps[] = {
#if defined(REGION_JP)
	{ 147, 160, 0, 0, dSC1PIntro_BreakTheTargetsText_tex, 16, 0 },
#else
	{ 178, 192, 0, 0, dSC1PIntro_BreakTheTargetsText_tex, 20, 0 },
#endif
};

/* Sprite: BreakTheTargetsText (178x20 i4) */
Sprite dSC1PIntro_BreakTheTargetsText = {
	0, 0,
#if defined(REGION_JP)
	147, 16,
#else
	178, 20,
#endif
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
#if defined(REGION_JP)
	16, 16,
#else
	20, 20,
#endif
	4, 0,
	(Bitmap*)dSC1PIntro_BreakTheTargetsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: BoardThePlatformsText */

Gfx dSC1PIntro_BoardThePlatformsText_dl[] = { gsSPEndDisplayList() };

/* Texture: BoardThePlatformsText (194(208)x20 i4) */
#if defined(REGION_JP)
u8 dSC1PIntro_BoardThePlatformsText_tex[1280] = {
#else
u8 dSC1PIntro_BoardThePlatformsText_tex[2080] = {
#endif
    #include <SC1PIntro/BoardThePlatformsText.i4.inc.c>
};

Bitmap dSC1PIntro_BoardThePlatformsText_bitmaps[] = {
#if defined(REGION_JP)
	{ 147, 160, 0, 0, dSC1PIntro_BoardThePlatformsText_tex, 16, 0 },
#else
	{ 194, 208, 0, 0, dSC1PIntro_BoardThePlatformsText_tex, 20, 0 },
#endif
};

/* Sprite: BoardThePlatformsText (194x20 i4) */
Sprite dSC1PIntro_BoardThePlatformsText = {
	0, 0,
#if defined(REGION_JP)
	147, 16,
#else
	194, 20,
#endif
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
#if defined(REGION_JP)
	16, 16,
#else
	20, 20,
#endif
	4, 0,
	(Bitmap*)dSC1PIntro_BoardThePlatformsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: RaceToTheFinishText */

Gfx dSC1PIntro_RaceToTheFinishText_dl[] = { gsSPEndDisplayList() };

/* Texture: RaceToTheFinishText (173(176)x20 i4) */
#if defined(REGION_JP)
u8 dSC1PIntro_RaceToTheFinishText_tex[1664] = {
#else
u8 dSC1PIntro_RaceToTheFinishText_tex[1760] = {
#endif
    #include <SC1PIntro/RaceToTheFinishText.i4.inc.c>
};

Bitmap dSC1PIntro_RaceToTheFinishText_bitmaps[] = {
#if defined(REGION_JP)
	{ 208, 208, 0, 0, dSC1PIntro_RaceToTheFinishText_tex, 16, 0 },
#else
	{ 173, 176, 0, 0, dSC1PIntro_RaceToTheFinishText_tex, 20, 0 },
#endif
};

/* Sprite: RaceToTheFinishText (173x20 i4) */
Sprite dSC1PIntro_RaceToTheFinishText = {
	0, 0,
#if defined(REGION_JP)
	208, 16,
#else
	173, 20,
#endif
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
#if defined(REGION_JP)
	16, 16,
#else
	20, 20,
#endif
	4, 0,
	(Bitmap*)dSC1PIntro_RaceToTheFinishText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 0x5028 */

Gfx dSC1PIntro_0x5028_dl[] = { gsSPEndDisplayList() };

/* Texture: 0x5028 (152(160)x16 i4) */
u8 dSC1PIntro_0x5028_tex[1280] = {
    #include <SC1PIntro/0x5028.i4.inc.c>
};

Bitmap dSC1PIntro_0x5028_bitmaps[] = {
	{ 152, 160, 0, 0, dSC1PIntro_0x5028_tex, 16, 0 },
};

/* Sprite: 0x5028 (152x16 i4) */
Sprite dSC1PIntro_0x5028 = {
	0, 0,
	152, 16,
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
	4, 0,
	(Bitmap*)dSC1PIntro_0x5028_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Dash */

Gfx dSC1PIntro_Dash_dl[] = { gsSPEndDisplayList() };

/* Texture: Dash (12(16)x12 i4) */
u8 dSC1PIntro_Dash_tex[96] = {
    #include <SC1PIntro/Dash.i4.inc.c>
};

Bitmap dSC1PIntro_Dash_bitmaps[] = {
	{ 12, 16, 0, 0, dSC1PIntro_Dash_tex, 12, 0 },
};

/* Sprite: Dash (12x12 i4) */
Sprite dSC1PIntro_Dash = {
	0, 0,
	12, 12,
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
	(Bitmap*)dSC1PIntro_Dash_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: MetalMarioText */

Gfx dSC1PIntro_MetalMarioText_dl[] = { gsSPEndDisplayList() };

/* Texture: MetalMarioText (72(80)x12 i4) */
u8 dSC1PIntro_MetalMarioText_tex[480] = {
    #include <SC1PIntro/MetalMarioText.i4.inc.c>
};

Bitmap dSC1PIntro_MetalMarioText_bitmaps[] = {
	{ 72, 80, 0, 0, dSC1PIntro_MetalMarioText_tex, 12, 0 },
};

/* Sprite: MetalMarioText (72x12 i4) */
Sprite dSC1PIntro_MetalMarioText = {
	0, 0,
	72, 12,
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
	(Bitmap*)dSC1PIntro_MetalMarioText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: MasterHandText */

Gfx dSC1PIntro_MasterHandText_dl[] = { gsSPEndDisplayList() };

/* Texture: MasterHandText (79(80)x12 i4) */
#if defined(REGION_JP)
u8 dSC1PIntro_MasterHandText_tex[576] = {
#else
u8 dSC1PIntro_MasterHandText_tex[480] = {
#endif
    #include <SC1PIntro/MasterHandText.i4.inc.c>
};

Bitmap dSC1PIntro_MasterHandText_bitmaps[] = {
#if defined(REGION_JP)
	{ 83, 96, 0, 0, dSC1PIntro_MasterHandText_tex, 12, 0 },
#else
	{ 79, 80, 0, 0, dSC1PIntro_MasterHandText_tex, 12, 0 },
#endif
};

/* Sprite: MasterHandText (79x12 i4) */
Sprite dSC1PIntro_MasterHandText = {
	0, 0,
#if defined(REGION_JP)
	83, 12,
#else
	79, 12,
#endif
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
	(Bitmap*)dSC1PIntro_MasterHandText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: GiantDKText */

Gfx dSC1PIntro_GiantDKText_dl[] = { gsSPEndDisplayList() };

/* Texture: GiantDKText (55(64)x12 i4) */
#if defined(REGION_JP)
u8 dSC1PIntro_GiantDKText_tex[1248] = {
#else
u8 dSC1PIntro_GiantDKText_tex[384] = {
#endif
    #include <SC1PIntro/GiantDKText.i4.inc.c>
};

Bitmap dSC1PIntro_GiantDKText_bitmaps[] = {
#if defined(REGION_JP)
	{ 83, 96, 0, 0, dSC1PIntro_GiantDKText_tex, 26, 0 },
#else
	{ 55, 64, 0, 0, dSC1PIntro_GiantDKText_tex, 12, 0 },
#endif
};

/* Sprite: GiantDKText (55x12 i4) */
Sprite dSC1PIntro_GiantDKText = {
	0, 0,
#if defined(REGION_JP)
	83, 26,
#else
	55, 12,
#endif
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
#if defined(REGION_JP)
	26, 26,
#else
	12, 12,
#endif
	4, 0,
	(Bitmap*)dSC1PIntro_GiantDKText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: FoxMcCloudText */

Gfx dSC1PIntro_FoxMcCloudText_dl[] = { gsSPEndDisplayList() };

/* Texture: FoxMcCloudText (77(80)x12 i4) */
#if defined(REGION_JP)
u8 dSC1PIntro_FoxMcCloudText_tex[864] = {
#else
u8 dSC1PIntro_FoxMcCloudText_tex[480] = {
#endif
    #include <SC1PIntro/FoxMcCloudText.i4.inc.c>
};

Bitmap dSC1PIntro_FoxMcCloudText_bitmaps[] = {
#if defined(REGION_JP)
	{ 132, 144, 0, 0, dSC1PIntro_FoxMcCloudText_tex, 12, 0 },
#else
	{ 77, 80, 0, 0, dSC1PIntro_FoxMcCloudText_tex, 12, 0 },
#endif
};

/* Sprite: FoxMcCloudText (77x12 i4) */
Sprite dSC1PIntro_FoxMcCloudText = {
	0, 0,
#if defined(REGION_JP)
	132, 12,
#else
	77, 12,
#endif
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
	(Bitmap*)dSC1PIntro_FoxMcCloudText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: KirbyTeamVS8Text */

Gfx dSC1PIntro_KirbyTeamVS8Text_dl[] = { gsSPEndDisplayList() };

/* Texture: KirbyTeamVS8Text (112x12 i4) */
u8 dSC1PIntro_KirbyTeamVS8Text_tex[672] = {
    #include <SC1PIntro/KirbyTeamVS8Text.i4.inc.c>
};

Bitmap dSC1PIntro_KirbyTeamVS8Text_bitmaps[] = {
#if defined(REGION_JP)
	{ 106, 112, 0, 0, dSC1PIntro_KirbyTeamVS8Text_tex, 12, 0 },
#else
	{ 112, 112, 0, 0, dSC1PIntro_KirbyTeamVS8Text_tex, 12, 0 },
#endif
};

/* Sprite: KirbyTeamVS8Text (112x12 i4) */
Sprite dSC1PIntro_KirbyTeamVS8Text = {
	0, 0,
#if defined(REGION_JP)
	106, 12,
#else
	112, 12,
#endif
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
	(Bitmap*)dSC1PIntro_KirbyTeamVS8Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: MarioBrosText */

Gfx dSC1PIntro_MarioBrosText_dl[] = { gsSPEndDisplayList() };

/* Texture: MarioBrosText (67(80)x12 i4) */
#if defined(REGION_JP)
u8 dSC1PIntro_MarioBrosText_tex[576] = {
#else
u8 dSC1PIntro_MarioBrosText_tex[480] = {
#endif
    #include <SC1PIntro/MarioBrosText.i4.inc.c>
};

Bitmap dSC1PIntro_MarioBrosText_bitmaps[] = {
#if defined(REGION_JP)
	{ 96, 96, 0, 0, dSC1PIntro_MarioBrosText_tex, 12, 0 },
#else
	{ 67, 80, 0, 0, dSC1PIntro_MarioBrosText_tex, 12, 0 },
#endif
};

/* Sprite: MarioBrosText (67x12 i4) */
Sprite dSC1PIntro_MarioBrosText = {
	0, 0,
#if defined(REGION_JP)
	96, 12,
#else
	67, 12,
#endif
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
	(Bitmap*)dSC1PIntro_MarioBrosText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: FightingPolygonTeamVS30Text */

Gfx dSC1PIntro_FightingPolygonTeamVS30Text_dl[] = { gsSPEndDisplayList() };

/* Texture: FightingPolygonTeamVS30Text (100(112)x22 i4) */
#if defined(REGION_JP)
u8 dSC1PIntro_FightingPolygonTeamVS30Text_tex[768] = {
#else
u8 dSC1PIntro_FightingPolygonTeamVS30Text_tex[1232] = {
#endif
    #include <SC1PIntro/FightingPolygonTeamVS30Text.i4.inc.c>
};

Bitmap dSC1PIntro_FightingPolygonTeamVS30Text_bitmaps[] = {
#if defined(REGION_JP)
	{ 125, 128, 0, 0, dSC1PIntro_FightingPolygonTeamVS30Text_tex, 12, 0 },
#else
	{ 100, 112, 0, 0, dSC1PIntro_FightingPolygonTeamVS30Text_tex, 22, 0 },
#endif
};

/* Sprite: FightingPolygonTeamVS30Text (100x22 i4) */
Sprite dSC1PIntro_FightingPolygonTeamVS30Text = {
	0, 0,
#if defined(REGION_JP)
	125, 12,
#else
	100, 22,
#endif
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
#if defined(REGION_JP)
	12, 12,
#else
	22, 22,
#endif
	4, 0,
	(Bitmap*)dSC1PIntro_FightingPolygonTeamVS30Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: SamusAranText */

Gfx dSC1PIntro_SamusAranText_dl[] = { gsSPEndDisplayList() };

/* Texture: SamusAranText (76(80)x12 i4) */
#if defined(REGION_JP)
u8 dSC1PIntro_SamusAranText_tex[576] = {
#else
u8 dSC1PIntro_SamusAranText_tex[480] = {
#endif
    #include <SC1PIntro/SamusAranText.i4.inc.c>
};

Bitmap dSC1PIntro_SamusAranText_bitmaps[] = {
#if defined(REGION_JP)
	{ 84, 96, 0, 0, dSC1PIntro_SamusAranText_tex, 12, 0 },
#else
	{ 76, 80, 0, 0, dSC1PIntro_SamusAranText_tex, 12, 0 },
#endif
};

/* Sprite: SamusAranText (76x12 i4) */
Sprite dSC1PIntro_SamusAranText = {
	0, 0,
#if defined(REGION_JP)
	84, 12,
#else
	76, 12,
#endif
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
	(Bitmap*)dSC1PIntro_SamusAranText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: YoshiTeamVS18Text */

Gfx dSC1PIntro_YoshiTeamVS18Text_dl[] = { gsSPEndDisplayList() };

/* Texture: YoshiTeamVS18Text (112x12 i4) */
#if defined(REGION_JP)
u8 dSC1PIntro_YoshiTeamVS18Text_tex[768] = {
#else
u8 dSC1PIntro_YoshiTeamVS18Text_tex[672] = {
#endif
    #include <SC1PIntro/YoshiTeamVS18Text.i4.inc.c>
};

Bitmap dSC1PIntro_YoshiTeamVS18Text_bitmaps[] = {
#if defined(REGION_JP)
	{ 124, 128, 0, 0, dSC1PIntro_YoshiTeamVS18Text_tex, 12, 0 },
#else
	{ 112, 112, 0, 0, dSC1PIntro_YoshiTeamVS18Text_tex, 12, 0 },
#endif
};

/* Sprite: YoshiTeamVS18Text (112x12 i4) */
Sprite dSC1PIntro_YoshiTeamVS18Text = {
	0, 0,
#if defined(REGION_JP)
	124, 12,
#else
	112, 12,
#endif
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
	(Bitmap*)dSC1PIntro_YoshiTeamVS18Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: VSText */

Gfx dSC1PIntro_VSText_dl[] = { gsSPEndDisplayList() };

/* Texture: VSText (16x12 i4) */
u8 dSC1PIntro_VSText_tex[96] = {
    #include <SC1PIntro/VSText.i4.inc.c>
};

Bitmap dSC1PIntro_VSText_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_VSText_tex, 12, 0 },
};

/* Sprite: VSText (16x12 i4) */
Sprite dSC1PIntro_VSText = {
	0, 0,
	16, 12,
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
	(Bitmap*)dSC1PIntro_VSText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: AllyText */

Gfx dSC1PIntro_AllyText_dl[] = { gsSPEndDisplayList() };

/* Texture: AllyText (32x12 i4) */
#if defined(REGION_JP)
u8 dSC1PIntro_AllyText_tex[288] = {
#else
u8 dSC1PIntro_AllyText_tex[192] = {
#endif
    #include <SC1PIntro/AllyText.i4.inc.c>
};

Bitmap dSC1PIntro_AllyText_bitmaps[] = {
#if defined(REGION_JP)
	{ 40, 48, 0, 0, dSC1PIntro_AllyText_tex, 12, 0 },
#else
	{ 32, 32, 0, 0, dSC1PIntro_AllyText_tex, 12, 0 },
#endif
};

/* Sprite: AllyText (32x12 i4) */
Sprite dSC1PIntro_AllyText = {
	0, 0,
#if defined(REGION_JP)
	40, 12,
#else
	32, 12,
#endif
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
	(Bitmap*)dSC1PIntro_AllyText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: AllyText2 */

Gfx dSC1PIntro_AllyText2_dl[] = { gsSPEndDisplayList() };

/* Texture: AllyText2 (32x12 i4) */
#if defined(REGION_JP)
u8 dSC1PIntro_AllyText2_tex[384] = {
#else
u8 dSC1PIntro_AllyText2_tex[192] = {
#endif
    #include <SC1PIntro/AllyText2.i4.inc.c>
};

Bitmap dSC1PIntro_AllyText2_bitmaps[] = {
#if defined(REGION_JP)
	{ 51, 64, 0, 0, dSC1PIntro_AllyText2_tex, 12, 0 },
#else
	{ 32, 32, 0, 0, dSC1PIntro_AllyText2_tex, 12, 0 },
#endif
};

/* Sprite: AllyText2 (32x12 i4) */
Sprite dSC1PIntro_AllyText2 = {
	0, 0,
#if defined(REGION_JP)
	51, 12,
#else
	32, 12,
#endif
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
	(Bitmap*)dSC1PIntro_AllyText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Raw data from file offset 0x6C80 to 0x6CB0 (48 bytes) */
u32 dSC1PIntro_FighterMarioCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0xC3F523C0,
	    0x438E33DA,
	    0x436D8261,
	    0xC201A4F0,
	    0x4361E6CA,
	    0x436DF174,
	    0x00000000,
	    0x422E7735,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6CB0 to 0x6CE0 (48 bytes) */
u32 dSC1PIntro_FighterFoxCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0xC4FB9666,
	    0x4426190C,
	    0x43886CB3,
	    0xC2A16667,
	    0x43B1FEE4,
	    0x43880762,
	    0x00000000,
	    0x4199A9FB,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6CE0 to 0x6D10 (48 bytes) */
u32 dSC1PIntro_FighterDonkeyCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0xC481AC0C,
	    0x42AC052A,
	    0x431E31BA,
	    0x41AF8840,
	    0x433D2674,
	    0x43208FB3,
	    0x00000000,
	    0x42262863,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6D10 to 0x6D40 (48 bytes) */
u32 dSC1PIntro_FighterSamusCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0xC45249AA,
	    0x43E39E70,
	    0x3FCAFF48,
	    0x42348C19,
	    0x43C48BDE,
	    0x3FA9EBC8,
	    0x00000000,
	    0x420BFFFF,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6D40 to 0x6D70 (48 bytes) */
u32 dSC1PIntro_FighterLuigiCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0xC5839063,
	    0x443AE3D5,
	    0x42D91A13,
	    0xC1BBCDC5,
	    0x4386DEC6,
	    0x42D8E6FC,
	    0x00000000,
	    0x40DC9F67,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6D70 to 0x6DA0 (48 bytes) */
u32 dSC1PIntro_FighterLinkCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0xC41A41A6,
	    0x4363FDE6,
	    0x428FA2FC,
	    0x42254E9C,
	    0x439E28FA,
	    0x4297FF3D,
	    0x00000000,
	    0x41EC2BA3,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6DA0 to 0x6DD0 (48 bytes) */
u32 dSC1PIntro_FighterYoshiCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0xC4713F6B,
	    0x43BF83E0,
	    0x431F8912,
	    0xC3073173,
	    0x438FD849,
	    0x431F4743,
	    0x00000000,
	    0x422627EF,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6DD0 to 0x6E00 (48 bytes) */
u32 dSC1PIntro_FighterCaptainCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0xC529BA15,
	    0x43ABC000,
	    0x42495C29,
	    0x418D9999,
	    0x436BD47B,
	    0x42553D70,
	    0x00000000,
	    0x413020C5,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6E00 to 0x6E30 (48 bytes) */
u32 dSC1PIntro_FighterKirbyCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0xC49B4E7A,
	    0xC3ED778F,
	    0x43022DAE,
	    0x42B43307,
	    0x43637F64,
	    0x4301E1DC,
	    0x00000000,
	    0x41D636AD,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6E30 to 0x6E60 (48 bytes) */
u32 dSC1PIntro_FighterPikachuCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0xC517AAA1,
	    0x43F9C97A,
	    0x42730E85,
	    0x42A4CE41,
	    0x4305D452,
	    0x428513C5,
	    0x00000000,
	    0x4133AF7F,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6E60 to 0x6E90 (48 bytes) */
u32 dSC1PIntro_FighterPurinCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0xC4ECC4C7,
	    0x43486773,
	    0x43395E24,
	    0xC3802C66,
	    0x432E8845,
	    0x43382F81,
	    0x00000000,
	    0x41838232,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6E90 to 0x6EC0 (48 bytes) */
u32 dSC1PIntro_FighterNessCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0xC4408381,
	    0x4343E74F,
	    0x43749F08,
	    0xC2BAFBF5,
	    0x4363851F,
	    0x4374665B,
	    0x00000000,
	    0x42200000,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6EC0 to 0x6EF0 (48 bytes) */
u32 dSC1PIntro_StageKirbyCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0x454AAE36,
	    0x44948F16,
	    0xC3443CD7,
	    0xC3C2D009,
	    0x43D2DA47,
	    0xC343D0D9,
	    0x00000000,
	    0x41B03BE9,
	aobjEvent32Wait(7),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6EF0 to 0x6F20 (48 bytes) */
u32 dSC1PIntro_StageYoshiCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0x4509FB6D,
	    0x43C706D7,
	    0x4451F546,
	    0xC304B3C6,
	    0x4377DC81,
	    0x4451DB5A,
	    0x00000000,
	    0x422627EF,
	aobjEvent32Wait(17),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6F20 to 0x6F50 (48 bytes) */
u32 dSC1PIntro_StageBossCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0x4514BFD1,
	    0x44712570,
	    0x445E67CB,
	    0xC37770C6,
	    0x442574CD,
	    0x445E03F3,
	    0x00000000,
	    0x42340000,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6F50 to 0x6F80 (48 bytes) */
u32 dSC1PIntro_StageSamusCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0x444BB14C,
	    0x441998E4,
	    0x4377E69D,
	    0xBF89DA48,
	    0x4401C318,
	    0x4377A4D0,
	    0x00000000,
	    0x4208B26B,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6F80 to 0x6FB0 (48 bytes) */
u32 dSC1PIntro_StageFoxCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0x44795109,
	    0x43F6D70C,
	    0x4365E164,
	    0x404EF6AE,
	    0x43CA85D8,
	    0x43659F97,
	    0x00000000,
	    0x4208B26B,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6FB0 to 0x6FE0 (48 bytes) */
u32 dSC1PIntro_StagePikachuCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0x44681DE4,
	    0x44359805,
	    0x43956F47,
	    0xC3073173,
	    0x434AD41B,
	    0x43954E60,
	    0x00000000,
	    0x4208B26B,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x6FE0 to 0x7010 (48 bytes) */
u32 dSC1PIntro_StageLinkCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0x4486A0F4,
	    0xC2C405F2,
	    0x4326F7F1,
	    0xBF4EACC0,
	    0x43B1B444,
	    0x4326AB6F,
	    0x00000000,
	    0x41983CD3,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x7010 to 0x7040 (48 bytes) */
u32 dSC1PIntro_StageDonkeyCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0x449C504B,
	    0x431F0749,
	    0x43CE391E,
	    0xBF5B9480,
	    0x43BDF6DA,
	    0x43CE6393,
	    0x00000000,
	    0x42262863,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x7040 to 0x7070 (48 bytes) */
u32 dSC1PIntro_StageMarioCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0x4483CB33,
	    0x43CA7C29,
	    0x4378E86B,
	    0xC39B9852,
	    0x439AD0A4,
	    0x4378A34C,
	    0x00000000,
	    0x42340000,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x7070 to 0x70A0 (48 bytes) */
u32 dSC1PIntro_StageMMarioCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0x448251F0,
	    0x43A0C538,
	    0x43868FE8,
	    0x4311F4D6,
	    0x439ADB3B,
	    0x43869718,
	    0x00000000,
	    0x4208B2CB,
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x70A0 to 0x70D8 (56 bytes) */
u32 dSC1PIntro_StageZakoCam_AnimJoint[11] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 0),
	    0x4501DBFD,
	    0x4450910F,
	    0x44570692,
	    0x3FD413AA,
	    0x43C27589,
	    0x44570692,
	    0x00000000,
	    0x422627F0,
	aobjEvent32Wait(2),
	aobjEvent32End(),
};

PAD(12);

/* Texture data for sprite LinkMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: LinkMarker (16x24 ci4) */
u8 dSC1PIntro_LinkMarker_tex[200] = {
    #include <SC1PIntro/LinkMarker.ci4.inc.c>
};

/* Palette: @ 0x71A0 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x71A0[16] = {
	#include <SC1PIntro/palette_0x71A0.palette.inc.c>
};

/* Sprite: LinkMarker */

/* Sprite: LinkMarker (16x24 ci4) */

Bitmap dSC1PIntro_LinkMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_LinkMarker_tex, 24, 0 },
};

Sprite dSC1PIntro_LinkMarker = {
	0, 0,
	16, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x71A0,
	0, 1,
	1, 36,
	24, 24,
	2, 0,
	(Bitmap*)dSC1PIntro_LinkMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite YoshiMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: YoshiMarker (16x24 ci4) */
u8 dSC1PIntro_YoshiMarker_tex[200] = {
    #include <SC1PIntro/YoshiMarker.ci4.inc.c>
};

/* Palette: @ 0x72F0 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x72F0[16] = {
	#include <SC1PIntro/palette_0x72F0.palette.inc.c>
};

/* Sprite: YoshiMarker */

/* Sprite: YoshiMarker (16x24 ci4) */

Bitmap dSC1PIntro_YoshiMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_YoshiMarker_tex, 24, 0 },
};

Sprite dSC1PIntro_YoshiMarker = {
	0, 0,
	16, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x72F0,
	0, 1,
	1, 36,
	24, 24,
	2, 0,
	(Bitmap*)dSC1PIntro_YoshiMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite FoxMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: FoxMarker (16x24 ci4) */
u8 dSC1PIntro_FoxMarker_tex[200] = {
    #include <SC1PIntro/FoxMarker.ci4.inc.c>
};

/* Palette: @ 0x7440 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x7440[16] = {
	#include <SC1PIntro/palette_0x7440.palette.inc.c>
};

/* Sprite: FoxMarker */

/* Sprite: FoxMarker (16x24 ci4) */

Bitmap dSC1PIntro_FoxMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_FoxMarker_tex, 24, 0 },
};

Sprite dSC1PIntro_FoxMarker = {
	0, 0,
	16, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7440,
	0, 1,
	1, 36,
	24, 24,
	2, 0,
	(Bitmap*)dSC1PIntro_FoxMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite MarioBrosMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: MarioBrosMarker (16x24 ci4) */
u8 dSC1PIntro_MarioBrosMarker_tex[200] = {
    #include <SC1PIntro/MarioBrosMarker.ci4.inc.c>
};

/* Palette: @ 0x7590 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x7590[16] = {
	#include <SC1PIntro/palette_0x7590.palette.inc.c>
};

/* Sprite: MarioBrosMarker */

/* Sprite: MarioBrosMarker (16x24 ci4) */

Bitmap dSC1PIntro_MarioBrosMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_MarioBrosMarker_tex, 24, 0 },
};

Sprite dSC1PIntro_MarioBrosMarker = {
	0, 0,
	16, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7590,
	0, 1,
	1, 36,
	24, 24,
	2, 0,
	(Bitmap*)dSC1PIntro_MarioBrosMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite PikachuMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: PikachuMarker (16x24 ci4) */
u8 dSC1PIntro_PikachuMarker_tex[200] = {
    #include <SC1PIntro/PikachuMarker.ci4.inc.c>
};

/* Palette: @ 0x76E0 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x76E0[16] = {
	#include <SC1PIntro/palette_0x76E0.palette.inc.c>
};

/* Sprite: PikachuMarker */

/* Sprite: PikachuMarker (16x24 ci4) */

Bitmap dSC1PIntro_PikachuMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_PikachuMarker_tex, 24, 0 },
};

Sprite dSC1PIntro_PikachuMarker = {
	0, 0,
	16, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x76E0,
	0, 1,
	1, 36,
	24, 24,
	2, 0,
	(Bitmap*)dSC1PIntro_PikachuMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite DKMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: DKMarker (16x24 ci4) */
u8 dSC1PIntro_DKMarker_tex[200] = {
    #include <SC1PIntro/DKMarker.ci4.inc.c>
};

/* Palette: @ 0x7830 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x7830[16] = {
	#include <SC1PIntro/palette_0x7830.palette.inc.c>
};

/* Sprite: DKMarker */

/* Sprite: DKMarker (16x24 ci4) */

Bitmap dSC1PIntro_DKMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_DKMarker_tex, 24, 0 },
};

Sprite dSC1PIntro_DKMarker = {
	0, 0,
	16, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7830,
	0, 1,
	1, 36,
	24, 24,
	2, 0,
	(Bitmap*)dSC1PIntro_DKMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite KirbyMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: KirbyMarker (16x24 ci4) */
u8 dSC1PIntro_KirbyMarker_tex[200] = {
    #include <SC1PIntro/KirbyMarker.ci4.inc.c>
};

/* Palette: @ 0x7980 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x7980[16] = {
	#include <SC1PIntro/palette_0x7980.palette.inc.c>
};

/* Sprite: KirbyMarker */

/* Sprite: KirbyMarker (16x24 ci4) */

Bitmap dSC1PIntro_KirbyMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_KirbyMarker_tex, 24, 0 },
};

Sprite dSC1PIntro_KirbyMarker = {
	0, 0,
	16, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7980,
	0, 1,
	1, 36,
	24, 24,
	2, 0,
	(Bitmap*)dSC1PIntro_KirbyMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite SamusMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: SamusMarker (16x24 ci4) */
u8 dSC1PIntro_SamusMarker_tex[200] = {
    #include <SC1PIntro/SamusMarker.ci4.inc.c>
};

/* Palette: @ 0x7AD0 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x7AD0[16] = {
	#include <SC1PIntro/palette_0x7AD0.palette.inc.c>
};

/* Sprite: SamusMarker */

/* Sprite: SamusMarker (16x24 ci4) */

Bitmap dSC1PIntro_SamusMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_SamusMarker_tex, 24, 0 },
};

Sprite dSC1PIntro_SamusMarker = {
	0, 0,
	16, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7AD0,
	0, 1,
	1, 36,
	24, 24,
	2, 0,
	(Bitmap*)dSC1PIntro_SamusMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite MarioMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: MarioMarker (16x24 ci4) */
u8 dSC1PIntro_MarioMarker_tex[200] = {
    #include <SC1PIntro/MarioMarker.ci4.inc.c>
};

/* Palette: @ 0x7C20 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x7C20[16] = {
	#include <SC1PIntro/palette_0x7C20.palette.inc.c>
};

/* Sprite: MarioMarker */

/* Sprite: MarioMarker (16x24 ci4) */

Bitmap dSC1PIntro_MarioMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_MarioMarker_tex, 24, 0 },
};

Sprite dSC1PIntro_MarioMarker = {
	0, 0,
	16, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7C20,
	0, 1,
	1, 36,
	24, 24,
	2, 0,
	(Bitmap*)dSC1PIntro_MarioMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite ExclamationMark */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: ExclamationMark (8(16)x16 ci4) */
u8 dSC1PIntro_ExclamationMark_tex[136] = {
    #include <SC1PIntro/ExclamationMark.ci4.inc.c>
};

/* Palette: @ 0x7D30 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x7D30[16] = {
	#include <SC1PIntro/palette_0x7D30.palette.inc.c>
};

/* Sprite: ExclamationMark */

/* Sprite: ExclamationMark (8x16 ci4) */

Bitmap dSC1PIntro_ExclamationMark_bitmaps[] = {
	{ 8, 16, 0, 0, dSC1PIntro_ExclamationMark_tex, 16, 0 },
};

Sprite dSC1PIntro_ExclamationMark = {
	0, 0,
	8, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7D30,
	0, 1,
	1, 36,
	16, 16,
	2, 0,
	(Bitmap*)dSC1PIntro_ExclamationMark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite BossMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: BossMarker (16x16 ci4) */
u8 dSC1PIntro_BossMarker_tex[136] = {
    #include <SC1PIntro/BossMarker.ci4.inc.c>
};

/* Palette: @ 0x7E40 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x7E40[16] = {
	#include <SC1PIntro/palette_0x7E40.palette.inc.c>
};

/* Sprite: BossMarker */

/* Sprite: BossMarker (16x16 ci4) */

Bitmap dSC1PIntro_BossMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_BossMarker_tex, 16, 0 },
};

Sprite dSC1PIntro_BossMarker = {
	0, 0,
	16, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7E40,
	0, 1,
	1, 36,
	16, 16,
	2, 0,
	(Bitmap*)dSC1PIntro_BossMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite BonusMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: BonusMarker (8(16)x8 ci4) */
u8 dSC1PIntro_BonusMarker_tex[72] = {
    #include <SC1PIntro/BonusMarker.ci4.inc.c>
};

/* Palette: @ 0x7F10 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x7F10[16] = {
	#include <SC1PIntro/palette_0x7F10.palette.inc.c>
};

/* Sprite: BonusMarker */

/* Sprite: BonusMarker (8x8 ci4) */

Bitmap dSC1PIntro_BonusMarker_bitmaps[] = {
	{ 8, 16, 0, 0, dSC1PIntro_BonusMarker_tex, 8, 0 },
};

Sprite dSC1PIntro_BonusMarker = {
	0, 0,
	8, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7F10,
	0, 1,
	1, 36,
	8, 8,
	2, 0,
	(Bitmap*)dSC1PIntro_BonusMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite BannerTop */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: BannerTop (300(304)x59 ci8, 10 tiles) */
u8 dSC1PIntro_BannerTop_tex[18016] = {
    #include <SC1PIntro/BannerTop.ci8.inc.c>
};

/* Palette: @ 0xC5F8 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0xC5F8[256] = {
	#include <SC1PIntro/palette_0xC5F8.palette.inc.c>
};

/* Sprite: BannerTop */

/* Sprite: BannerTop (300x50 ci8) */

Bitmap dSC1PIntro_BannerTop_bitmaps[] = {
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x728, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0xE50, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x1578, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x1CA0, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x23C8, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x2AF0, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x3218, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x3940, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerTop_tex + 0x4068, 5, 0 },
};

Sprite dSC1PIntro_BannerTop = {
	0, 0,
	300, 50,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0xC5F8,
	0, 1,
	10, 144,
	5, 6,
	2, 1,
	(Bitmap*)dSC1PIntro_BannerTop_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite BannerBottom */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: BannerBottom (300(304)x59 ci4, 10 tiles) */
u8 dSC1PIntro_BannerBottom_tex[9048] = {
    #include <SC1PIntro/BannerBottom.ci4.inc.c>
};

/* Palette: @ 0xEC40 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0xEC40[16] = {
	#include <SC1PIntro/palette_0xEC40.palette.inc.c>
};

/* Sprite: BannerBottom */

/* Sprite: BannerBottom (300x50 ci4) */

Bitmap dSC1PIntro_BannerBottom_bitmaps[] = {
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x398, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x730, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0xAC8, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0xE60, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x11F8, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x1590, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x1928, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x1CC0, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_BannerBottom_tex + 0x2058, 5, 0 },
};

Sprite dSC1PIntro_BannerBottom = {
	0, 0,
	300, 50,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0xEC40,
	0, 1,
	10, 144,
	5, 6,
	2, 0,
	(Bitmap*)dSC1PIntro_BannerBottom_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite Sky */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Sky (300(304)x155 ci4, 26 tiles) */
u8 dSC1PIntro_Sky_tex[23768] = {
    #include <SC1PIntro/Sky.ci4.inc.c>
};

/* Palette: @ 0x14A30 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0x14A30[16] = {
	#include <SC1PIntro/palette_0x14A30.palette.inc.c>
};

/* Sprite: Sky */

/* Sprite: Sky (300x130 ci4) */

Bitmap dSC1PIntro_Sky_bitmaps[] = {
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x398, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x730, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0xAC8, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0xE60, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x11F8, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x1590, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x1928, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x1CC0, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x2058, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x23F0, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x2788, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x2B20, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x2EB8, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x3250, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x35E8, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x3980, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x3D18, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x40B0, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x4448, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x47E0, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x4B78, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x4F10, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x52A8, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x5640, 6, 0 },
	{ 300, 304, 0, 0, dSC1PIntro_Sky_tex + 0x59D8, 5, 0 },
};

Sprite dSC1PIntro_Sky = {
	0, 0,
	300, 130,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x14A30,
	0, 1,
	26, 336,
	5, 6,
	2, 0,
	(Bitmap*)dSC1PIntro_Sky_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
