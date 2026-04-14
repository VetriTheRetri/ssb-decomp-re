/* relocData file 11: SC1PIntro */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Sprite: VSDecal */

Gfx dSC1PIntro_VSDecal_dl[] = { gsSPEndDisplayList() };

/* Texture: VSDecal (52x38 rgba32, 2 tiles) */
u8 dSC1PIntro_VSDecal_tex[] = {
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
u8 dSC1PIntro_Number1_tex[] = {
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
u8 dSC1PIntro_Number2_tex[] = {
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
u8 dSC1PIntro_Number3_tex[] = {
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
u8 dSC1PIntro_Number4_tex[] = {
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
u8 dSC1PIntro_Number5_tex[] = {
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
u8 dSC1PIntro_Number6_tex[] = {
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
u8 dSC1PIntro_Number7_tex[] = {
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
u8 dSC1PIntro_Number8_tex[] = {
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
u8 dSC1PIntro_Number9_tex[] = {
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
u8 dSC1PIntro_Number10_tex[] = {
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
u8 dSC1PIntro_Cross_tex[] = {
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
u8 dSC1PIntro_StageText_tex[] = {
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
u8 dSC1PIntro_BonusText_tex[] = {
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
u8 dSC1PIntro_FinalText_tex[] = {
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
u8 dSC1PIntro_BreakTheTargetsText_tex[] = {
    #include <SC1PIntro/BreakTheTargetsText.i4.inc.c>
};

Bitmap dSC1PIntro_BreakTheTargetsText_bitmaps[] = {
	{ 178, 192, 0, 0, dSC1PIntro_BreakTheTargetsText_tex, 20, 0 },
};

/* Sprite: BreakTheTargetsText (178x20 i4) */
Sprite dSC1PIntro_BreakTheTargetsText = {
	0, 0,
	178, 20,
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
	(Bitmap*)dSC1PIntro_BreakTheTargetsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: BoardThePlatformsText */

Gfx dSC1PIntro_BoardThePlatformsText_dl[] = { gsSPEndDisplayList() };

/* Texture: BoardThePlatformsText (194(208)x20 i4) */
u8 dSC1PIntro_BoardThePlatformsText_tex[] = {
    #include <SC1PIntro/BoardThePlatformsText.i4.inc.c>
};

Bitmap dSC1PIntro_BoardThePlatformsText_bitmaps[] = {
	{ 194, 208, 0, 0, dSC1PIntro_BoardThePlatformsText_tex, 20, 0 },
};

/* Sprite: BoardThePlatformsText (194x20 i4) */
Sprite dSC1PIntro_BoardThePlatformsText = {
	0, 0,
	194, 20,
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
	(Bitmap*)dSC1PIntro_BoardThePlatformsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: RaceToTheFinishText */

Gfx dSC1PIntro_RaceToTheFinishText_dl[] = { gsSPEndDisplayList() };

/* Texture: RaceToTheFinishText (173(176)x20 i4) */
u8 dSC1PIntro_RaceToTheFinishText_tex[] = {
    #include <SC1PIntro/RaceToTheFinishText.i4.inc.c>
};

Bitmap dSC1PIntro_RaceToTheFinishText_bitmaps[] = {
	{ 173, 176, 0, 0, dSC1PIntro_RaceToTheFinishText_tex, 20, 0 },
};

/* Sprite: RaceToTheFinishText (173x20 i4) */
Sprite dSC1PIntro_RaceToTheFinishText = {
	0, 0,
	173, 20,
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
	(Bitmap*)dSC1PIntro_RaceToTheFinishText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 0x5028 */

Gfx dSC1PIntro_0x5028_dl[] = { gsSPEndDisplayList() };

/* Texture: 0x5028 (152(160)x16 i4) */
u8 dSC1PIntro_0x5028_tex[] = {
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
u8 dSC1PIntro_Dash_tex[] = {
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
u8 dSC1PIntro_MetalMarioText_tex[] = {
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
u8 dSC1PIntro_MasterHandText_tex[] = {
    #include <SC1PIntro/MasterHandText.i4.inc.c>
};

Bitmap dSC1PIntro_MasterHandText_bitmaps[] = {
	{ 79, 80, 0, 0, dSC1PIntro_MasterHandText_tex, 12, 0 },
};

/* Sprite: MasterHandText (79x12 i4) */
Sprite dSC1PIntro_MasterHandText = {
	0, 0,
	79, 12,
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
u8 dSC1PIntro_GiantDKText_tex[] = {
    #include <SC1PIntro/GiantDKText.i4.inc.c>
};

Bitmap dSC1PIntro_GiantDKText_bitmaps[] = {
	{ 55, 64, 0, 0, dSC1PIntro_GiantDKText_tex, 12, 0 },
};

/* Sprite: GiantDKText (55x12 i4) */
Sprite dSC1PIntro_GiantDKText = {
	0, 0,
	55, 12,
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
	(Bitmap*)dSC1PIntro_GiantDKText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: FoxMcCloudText */

Gfx dSC1PIntro_FoxMcCloudText_dl[] = { gsSPEndDisplayList() };

/* Texture: FoxMcCloudText (77(80)x12 i4) */
u8 dSC1PIntro_FoxMcCloudText_tex[] = {
    #include <SC1PIntro/FoxMcCloudText.i4.inc.c>
};

Bitmap dSC1PIntro_FoxMcCloudText_bitmaps[] = {
	{ 77, 80, 0, 0, dSC1PIntro_FoxMcCloudText_tex, 12, 0 },
};

/* Sprite: FoxMcCloudText (77x12 i4) */
Sprite dSC1PIntro_FoxMcCloudText = {
	0, 0,
	77, 12,
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
u8 dSC1PIntro_KirbyTeamVS8Text_tex[] = {
    #include <SC1PIntro/KirbyTeamVS8Text.i4.inc.c>
};

Bitmap dSC1PIntro_KirbyTeamVS8Text_bitmaps[] = {
	{ 112, 112, 0, 0, dSC1PIntro_KirbyTeamVS8Text_tex, 12, 0 },
};

/* Sprite: KirbyTeamVS8Text (112x12 i4) */
Sprite dSC1PIntro_KirbyTeamVS8Text = {
	0, 0,
	112, 12,
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
u8 dSC1PIntro_MarioBrosText_tex[] = {
    #include <SC1PIntro/MarioBrosText.i4.inc.c>
};

Bitmap dSC1PIntro_MarioBrosText_bitmaps[] = {
	{ 67, 80, 0, 0, dSC1PIntro_MarioBrosText_tex, 12, 0 },
};

/* Sprite: MarioBrosText (67x12 i4) */
Sprite dSC1PIntro_MarioBrosText = {
	0, 0,
	67, 12,
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
u8 dSC1PIntro_FightingPolygonTeamVS30Text_tex[] = {
    #include <SC1PIntro/FightingPolygonTeamVS30Text.i4.inc.c>
};

Bitmap dSC1PIntro_FightingPolygonTeamVS30Text_bitmaps[] = {
	{ 100, 112, 0, 0, dSC1PIntro_FightingPolygonTeamVS30Text_tex, 22, 0 },
};

/* Sprite: FightingPolygonTeamVS30Text (100x22 i4) */
Sprite dSC1PIntro_FightingPolygonTeamVS30Text = {
	0, 0,
	100, 22,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	22, 22,
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
u8 dSC1PIntro_SamusAranText_tex[] = {
    #include <SC1PIntro/SamusAranText.i4.inc.c>
};

Bitmap dSC1PIntro_SamusAranText_bitmaps[] = {
	{ 76, 80, 0, 0, dSC1PIntro_SamusAranText_tex, 12, 0 },
};

/* Sprite: SamusAranText (76x12 i4) */
Sprite dSC1PIntro_SamusAranText = {
	0, 0,
	76, 12,
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
u8 dSC1PIntro_YoshiTeamVS18Text_tex[] = {
    #include <SC1PIntro/YoshiTeamVS18Text.i4.inc.c>
};

Bitmap dSC1PIntro_YoshiTeamVS18Text_bitmaps[] = {
	{ 112, 112, 0, 0, dSC1PIntro_YoshiTeamVS18Text_tex, 12, 0 },
};

/* Sprite: YoshiTeamVS18Text (112x12 i4) */
Sprite dSC1PIntro_YoshiTeamVS18Text = {
	0, 0,
	112, 12,
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
u8 dSC1PIntro_VSText_tex[] = {
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
u8 dSC1PIntro_AllyText_tex[] = {
    #include <SC1PIntro/AllyText.i4.inc.c>
};

Bitmap dSC1PIntro_AllyText_bitmaps[] = {
	{ 32, 32, 0, 0, dSC1PIntro_AllyText_tex, 12, 0 },
};

/* Sprite: AllyText (32x12 i4) */
Sprite dSC1PIntro_AllyText = {
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
	(Bitmap*)dSC1PIntro_AllyText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: AllyText2 */

Gfx dSC1PIntro_AllyText2_dl[] = { gsSPEndDisplayList() };

/* Texture: AllyText2 (32x12 i4) */
u8 dSC1PIntro_AllyText2_tex[] = {
    #include <SC1PIntro/AllyText2.i4.inc.c>
};

Bitmap dSC1PIntro_AllyText2_bitmaps[] = {
	{ 32, 32, 0, 0, dSC1PIntro_AllyText2_tex, 12, 0 },
};

/* Sprite: AllyText2 (32x12 i4) */
Sprite dSC1PIntro_AllyText2 = {
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
	(Bitmap*)dSC1PIntro_AllyText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Raw data from file offset 0x6C80 to 0x6CB0 (48 bytes) */
u8 dSC1PIntro_FighterMarioCam_AnimJoint[48] = {
	#include <SC1PIntro/FighterMarioCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6CB0 to 0x6CE0 (48 bytes) */
u8 dSC1PIntro_FighterFoxCam_AnimJoint[48] = {
	#include <SC1PIntro/FighterFoxCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6CE0 to 0x6D10 (48 bytes) */
u8 dSC1PIntro_FighterDonkeyCam_AnimJoint[48] = {
	#include <SC1PIntro/FighterDonkeyCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6D10 to 0x6D40 (48 bytes) */
u8 dSC1PIntro_FighterSamusCam_AnimJoint[48] = {
	#include <SC1PIntro/FighterSamusCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6D40 to 0x6D70 (48 bytes) */
u8 dSC1PIntro_FighterLuigiCam_AnimJoint[48] = {
	#include <SC1PIntro/FighterLuigiCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6D70 to 0x6DA0 (48 bytes) */
u8 dSC1PIntro_FighterLinkCam_AnimJoint[48] = {
	#include <SC1PIntro/FighterLinkCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6DA0 to 0x6DD0 (48 bytes) */
u8 dSC1PIntro_FighterYoshiCam_AnimJoint[48] = {
	#include <SC1PIntro/FighterYoshiCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6DD0 to 0x6E00 (48 bytes) */
u8 dSC1PIntro_FighterCaptainCam_AnimJoint[48] = {
	#include <SC1PIntro/FighterCaptainCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6E00 to 0x6E30 (48 bytes) */
u8 dSC1PIntro_FighterKirbyCam_AnimJoint[48] = {
	#include <SC1PIntro/FighterKirbyCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6E30 to 0x6E60 (48 bytes) */
u8 dSC1PIntro_FighterPikachuCam_AnimJoint[48] = {
	#include <SC1PIntro/FighterPikachuCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6E60 to 0x6E90 (48 bytes) */
u8 dSC1PIntro_FighterPurinCam_AnimJoint[48] = {
	#include <SC1PIntro/FighterPurinCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6E90 to 0x6EC0 (48 bytes) */
u8 dSC1PIntro_FighterNessCam_AnimJoint[48] = {
	#include <SC1PIntro/FighterNessCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6EC0 to 0x6EF0 (48 bytes) */
u8 dSC1PIntro_StageKirbyCam_AnimJoint[48] = {
	#include <SC1PIntro/StageKirbyCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6EF0 to 0x6F20 (48 bytes) */
u8 dSC1PIntro_StageYoshiCam_AnimJoint[48] = {
	#include <SC1PIntro/StageYoshiCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6F20 to 0x6F50 (48 bytes) */
u8 dSC1PIntro_StageBossCam_AnimJoint[48] = {
	#include <SC1PIntro/StageBossCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6F50 to 0x6F80 (48 bytes) */
u8 dSC1PIntro_StageSamusCam_AnimJoint[48] = {
	#include <SC1PIntro/StageSamusCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6F80 to 0x6FB0 (48 bytes) */
u8 dSC1PIntro_StageFoxCam_AnimJoint[48] = {
	#include <SC1PIntro/StageFoxCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6FB0 to 0x6FE0 (48 bytes) */
u8 dSC1PIntro_StagePikachuCam_AnimJoint[48] = {
	#include <SC1PIntro/StagePikachuCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6FE0 to 0x7010 (48 bytes) */
u8 dSC1PIntro_StageLinkCam_AnimJoint[48] = {
	#include <SC1PIntro/StageLinkCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x7010 to 0x7040 (48 bytes) */
u8 dSC1PIntro_StageDonkeyCam_AnimJoint[48] = {
	#include <SC1PIntro/StageDonkeyCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x7040 to 0x7070 (48 bytes) */
u8 dSC1PIntro_StageMarioCam_AnimJoint[48] = {
	#include <SC1PIntro/StageMarioCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x7070 to 0x70A0 (48 bytes) */
u8 dSC1PIntro_StageMMarioCam_AnimJoint[48] = {
	#include <SC1PIntro/StageMMarioCam_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x70A0 to 0x70D8 (56 bytes) */
u8 dSC1PIntro_StageZakoCam_AnimJoint[56] = {
	#include <SC1PIntro/StageZakoCam_AnimJoint.data.inc.c>
};

/* Texture data for sprite LinkMarker */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: LinkMarker (16x24 ci4) */
u8 dSC1PIntro_LinkMarker_tex[] = {
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
u8 dSC1PIntro_YoshiMarker_tex[] = {
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
u8 dSC1PIntro_FoxMarker_tex[] = {
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
u8 dSC1PIntro_MarioBrosMarker_tex[] = {
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
u8 dSC1PIntro_PikachuMarker_tex[] = {
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
u8 dSC1PIntro_DKMarker_tex[] = {
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
u8 dSC1PIntro_KirbyMarker_tex[] = {
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
u8 dSC1PIntro_SamusMarker_tex[] = {
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
u8 dSC1PIntro_MarioMarker_tex[] = {
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
u8 dSC1PIntro_ExclamationMark_tex[] = {
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
u8 dSC1PIntro_BossMarker_tex[] = {
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
u8 dSC1PIntro_BonusMarker_tex[] = {
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
u8 dSC1PIntro_BannerTop_tex[] = {
    #include <SC1PIntro/BannerTop.ci8.inc.c>
};

/* Palette: @ 0xC5F8 (16 colors RGBA5551) */
u16 dSC1PIntro_palette_0xC5F8[16] = {
	#include <SC1PIntro/palette_0xC5F8.palette.inc.c>
};

/* Raw data from file offset 0xC618 to 0xC7F8 (480 bytes) */
u8 dSC1PIntro_gap_0xC618[480] = {
	#include <SC1PIntro/gap_0xC618.data.inc.c>
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
u8 dSC1PIntro_BannerBottom_tex[] = {
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
u8 dSC1PIntro_Sky_tex[] = {
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

PAD(12);

