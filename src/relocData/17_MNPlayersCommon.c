/* relocData file 17: MNPlayersCommon */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Sprite: ManText */

Gfx dMNPlayersCommon_ManText_dl[] = { gsSPEndDisplayList() };

/* Texture: ManText (16x5 i4) */
u8 dMNPlayersCommon_ManText_tex[] = {
    #include <MNPlayersCommon/ManText.i4.inc.c>
};

Bitmap dMNPlayersCommon_ManText_bitmaps[] = {
	{ 16, 16, 0, 0, dMNPlayersCommon_ManText_tex, 5, 0 },
};

/* Sprite: ManText (16x5 i4) */
Sprite dMNPlayersCommon_ManText = {
	0, 0,
	16, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_ManText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: ComText */

Gfx dMNPlayersCommon_ComText_dl[] = { gsSPEndDisplayList() };

/* Texture: ComText (15(16)x5 i4) */
u8 dMNPlayersCommon_ComText_tex[] = {
    #include <MNPlayersCommon/ComText.i4.inc.c>
};

Bitmap dMNPlayersCommon_ComText_bitmaps[] = {
	{ 15, 16, 0, 0, dMNPlayersCommon_ComText_tex, 5, 0 },
};

/* Sprite: ComText (15x5 i4) */
Sprite dMNPlayersCommon_ComText = {
	0, 0,
	15, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_ComText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: Colon0Text */

Gfx dMNPlayersCommon_Colon0Text_dl[] = { gsSPEndDisplayList() };

/* Texture: Colon0Text (7(16)x5 i4) */
u8 dMNPlayersCommon_Colon0Text_tex[] = {
    #include <MNPlayersCommon/Colon0Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_Colon0Text_bitmaps[] = {
	{ 7, 16, 0, 0, dMNPlayersCommon_Colon0Text_tex, 5, 0 },
};

/* Sprite: Colon0Text (7x5 i4) */
Sprite dMNPlayersCommon_Colon0Text = {
	0, 0,
	7, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_Colon0Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: Colon1Text */

Gfx dMNPlayersCommon_Colon1Text_dl[] = { gsSPEndDisplayList() };

/* Texture: Colon1Text (7(16)x5 i4) */
u8 dMNPlayersCommon_Colon1Text_tex[] = {
    #include <MNPlayersCommon/Colon1Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_Colon1Text_bitmaps[] = {
	{ 7, 16, 0, 0, dMNPlayersCommon_Colon1Text_tex, 5, 0 },
};

/* Sprite: Colon1Text (7x5 i4) */
Sprite dMNPlayersCommon_Colon1Text = {
	0, 0,
	7, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_Colon1Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: Colon2Text */

Gfx dMNPlayersCommon_Colon2Text_dl[] = { gsSPEndDisplayList() };

/* Texture: Colon2Text (7(16)x5 i4) */
u8 dMNPlayersCommon_Colon2Text_tex[] = {
    #include <MNPlayersCommon/Colon2Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_Colon2Text_bitmaps[] = {
	{ 7, 16, 0, 0, dMNPlayersCommon_Colon2Text_tex, 5, 0 },
};

/* Sprite: Colon2Text (7x5 i4) */
Sprite dMNPlayersCommon_Colon2Text = {
	0, 0,
	7, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_Colon2Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: Colon3Text */

Gfx dMNPlayersCommon_Colon3Text_dl[] = { gsSPEndDisplayList() };

/* Texture: Colon3Text (7(16)x5 i4) */
u8 dMNPlayersCommon_Colon3Text_tex[] = {
    #include <MNPlayersCommon/Colon3Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_Colon3Text_bitmaps[] = {
	{ 7, 16, 0, 0, dMNPlayersCommon_Colon3Text_tex, 5, 0 },
};

/* Sprite: Colon3Text (7x5 i4) */
Sprite dMNPlayersCommon_Colon3Text = {
	0, 0,
	7, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_Colon3Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: Colon4Text */

Gfx dMNPlayersCommon_Colon4Text_dl[] = { gsSPEndDisplayList() };

/* Texture: Colon4Text (7(16)x5 i4) */
u8 dMNPlayersCommon_Colon4Text_tex[] = {
    #include <MNPlayersCommon/Colon4Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_Colon4Text_bitmaps[] = {
	{ 7, 16, 0, 0, dMNPlayersCommon_Colon4Text_tex, 5, 0 },
};

/* Sprite: Colon4Text (7x5 i4) */
Sprite dMNPlayersCommon_Colon4Text = {
	0, 0,
	7, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_Colon4Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: PlayerText */

Gfx dMNPlayersCommon_PlayerText_dl[] = { gsSPEndDisplayList() };

/* Texture: PlayerText (32x5 i4) */
u8 dMNPlayersCommon_PlayerText_tex[] = {
    #include <MNPlayersCommon/PlayerText.i4.inc.c>
};

Bitmap dMNPlayersCommon_PlayerText_bitmaps[] = {
	{ 32, 32, 0, 0, dMNPlayersCommon_PlayerText_tex, 5, 0 },
};

/* Sprite: PlayerText (32x5 i4) */
Sprite dMNPlayersCommon_PlayerText = {
	0, 0,
	32, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_PlayerText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 1Text */

Gfx dMNPlayersCommon_1Text_dl[] = { gsSPEndDisplayList() };

/* Texture: 1Text (2(16)x5 i4) */
u8 dMNPlayersCommon_1Text_tex[] = {
    #include <MNPlayersCommon/1Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_1Text_bitmaps[] = {
	{ 2, 16, 0, 0, dMNPlayersCommon_1Text_tex, 5, 0 },
};

/* Sprite: 1Text (2x5 i4) */
Sprite dMNPlayersCommon_1Text = {
	0, 0,
	2, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_1Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: 2Text */

Gfx dMNPlayersCommon_2Text_dl[] = { gsSPEndDisplayList() };

/* Texture: 2Text (4(16)x5 i4) */
u8 dMNPlayersCommon_2Text_tex[] = {
    #include <MNPlayersCommon/2Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_2Text_bitmaps[] = {
	{ 4, 16, 0, 0, dMNPlayersCommon_2Text_tex, 5, 0 },
};

/* Sprite: 2Text (4x5 i4) */
Sprite dMNPlayersCommon_2Text = {
	0, 0,
	4, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_2Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: 3Text */

Gfx dMNPlayersCommon_3Text_dl[] = { gsSPEndDisplayList() };

/* Texture: 3Text (5(16)x5 i4) */
u8 dMNPlayersCommon_3Text_tex[] = {
    #include <MNPlayersCommon/3Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_3Text_bitmaps[] = {
	{ 5, 16, 0, 0, dMNPlayersCommon_3Text_tex, 5, 0 },
};

/* Sprite: 3Text (5x5 i4) */
Sprite dMNPlayersCommon_3Text = {
	0, 0,
	5, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_3Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: 4Text */

Gfx dMNPlayersCommon_4Text_dl[] = { gsSPEndDisplayList() };

/* Texture: 4Text (5(16)x5 i4) */
u8 dMNPlayersCommon_4Text_tex[] = {
    #include <MNPlayersCommon/4Text.i4.inc.c>
};

Bitmap dMNPlayersCommon_4Text_bitmaps[] = {
	{ 5, 16, 0, 0, dMNPlayersCommon_4Text_tex, 5, 0 },
};

/* Sprite: 4Text (5x5 i4) */
Sprite dMNPlayersCommon_4Text = {
	0, 0,
	5, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_4Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: 1PText */

Gfx dMNPlayersCommon_1PText_dl[] = { gsSPEndDisplayList() };

/* Texture: 1PText (39(48)x16 i4) */
u8 dMNPlayersCommon_1PText_tex[] = {
    #include <MNPlayersCommon/1PText.i4.inc.c>
};

Bitmap dMNPlayersCommon_1PText_bitmaps[] = {
	{ 39, 48, 0, 0, dMNPlayersCommon_1PText_tex, 16, 0 },
};

/* Sprite: 1PText (39x16 i4) */
Sprite dMNPlayersCommon_1PText = {
	0, 0,
	39, 16,
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
	(Bitmap*)dMNPlayersCommon_1PText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 2PText */

Gfx dMNPlayersCommon_2PText_dl[] = { gsSPEndDisplayList() };

/* Texture: 2PText (42(48)x16 i4) */
u8 dMNPlayersCommon_2PText_tex[] = {
    #include <MNPlayersCommon/2PText.i4.inc.c>
};

Bitmap dMNPlayersCommon_2PText_bitmaps[] = {
	{ 42, 48, 0, 0, dMNPlayersCommon_2PText_tex, 16, 0 },
};

/* Sprite: 2PText (42x16 i4) */
Sprite dMNPlayersCommon_2PText = {
	0, 0,
	42, 16,
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
	(Bitmap*)dMNPlayersCommon_2PText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 3PText */

Gfx dMNPlayersCommon_3PText_dl[] = { gsSPEndDisplayList() };

/* Texture: 3PText (42(48)x16 i4) */
u8 dMNPlayersCommon_3PText_tex[] = {
    #include <MNPlayersCommon/3PText.i4.inc.c>
};

Bitmap dMNPlayersCommon_3PText_bitmaps[] = {
	{ 42, 48, 0, 0, dMNPlayersCommon_3PText_tex, 16, 0 },
};

/* Sprite: 3PText (42x16 i4) */
Sprite dMNPlayersCommon_3PText = {
	0, 0,
	42, 16,
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
	(Bitmap*)dMNPlayersCommon_3PText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 4PText */

Gfx dMNPlayersCommon_4PText_dl[] = { gsSPEndDisplayList() };

/* Texture: 4PText (42(48)x16 i4) */
u8 dMNPlayersCommon_4PText_tex[] = {
    #include <MNPlayersCommon/4PText.i4.inc.c>
};

Bitmap dMNPlayersCommon_4PText_bitmaps[] = {
	{ 42, 48, 0, 0, dMNPlayersCommon_4PText_tex, 16, 0 },
};

/* Sprite: 4PText (42x16 i4) */
Sprite dMNPlayersCommon_4PText = {
	0, 0,
	42, 16,
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
	(Bitmap*)dMNPlayersCommon_4PText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: CPText */

Gfx dMNPlayersCommon_CPText_dl[] = { gsSPEndDisplayList() };

/* Texture: CPText (43(48)x16 i4) */
u8 dMNPlayersCommon_CPText_tex[] = {
    #include <MNPlayersCommon/CPText.i4.inc.c>
};

Bitmap dMNPlayersCommon_CPText_bitmaps[] = {
	{ 43, 48, 0, 0, dMNPlayersCommon_CPText_tex, 16, 0 },
};

/* Sprite: CPText (43x16 i4) */
Sprite dMNPlayersCommon_CPText = {
	0, 0,
	43, 16,
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
	(Bitmap*)dMNPlayersCommon_CPText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: HandicapText */

Gfx dMNPlayersCommon_HandicapText_dl[] = { gsSPEndDisplayList() };

/* Texture: HandicapText (24(32)x11 i4) */
u8 dMNPlayersCommon_HandicapText_tex[] = {
    #include <MNPlayersCommon/HandicapText.i4.inc.c>
};

Bitmap dMNPlayersCommon_HandicapText_bitmaps[] = {
	{ 24, 32, 0, 0, dMNPlayersCommon_HandicapText_tex, 11, 0 },
};

/* Sprite: HandicapText (24x11 i4) */
Sprite dMNPlayersCommon_HandicapText = {
	0, 0,
	24, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 0,
	(Bitmap*)dMNPlayersCommon_HandicapText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: CPLevelText */

Gfx dMNPlayersCommon_CPLevelText_dl[] = { gsSPEndDisplayList() };

/* Texture: CPLevelText (25(32)x11 i4) */
u8 dMNPlayersCommon_CPLevelText_tex[] = {
    #include <MNPlayersCommon/CPLevelText.i4.inc.c>
};

Bitmap dMNPlayersCommon_CPLevelText_bitmaps[] = {
	{ 25, 32, 0, 0, dMNPlayersCommon_CPLevelText_tex, 11, 0 },
};

/* Sprite: CPLevelText (25x11 i4) */
Sprite dMNPlayersCommon_CPLevelText = {
	0, 0,
	25, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 0,
	(Bitmap*)dMNPlayersCommon_CPLevelText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: PushText */

Gfx dMNPlayersCommon_PushText_dl[] = { gsSPEndDisplayList() };

/* Texture: PushText (19(32)x5 i4) */
u8 dMNPlayersCommon_PushText_tex[] = {
    #include <MNPlayersCommon/PushText.i4.inc.c>
};

Bitmap dMNPlayersCommon_PushText_bitmaps[] = {
	{ 19, 32, 0, 0, dMNPlayersCommon_PushText_tex, 5, 0 },
};

/* Sprite: PushText (19x5 i4) */
Sprite dMNPlayersCommon_PushText = {
	0, 0,
	19, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_PushText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: StartText */

Gfx dMNPlayersCommon_StartText_dl[] = { gsSPEndDisplayList() };

/* Texture: StartText (25(32)x5 i4) */
u8 dMNPlayersCommon_StartText_tex[] = {
    #include <MNPlayersCommon/StartText.i4.inc.c>
};

Bitmap dMNPlayersCommon_StartText_bitmaps[] = {
	{ 25, 32, 0, 0, dMNPlayersCommon_StartText_tex, 5, 0 },
};

/* Sprite: StartText (25x5 i4) */
Sprite dMNPlayersCommon_StartText = {
	0, 0,
	25, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_StartText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: ButtonText */

Gfx dMNPlayersCommon_ButtonText_dl[] = { gsSPEndDisplayList() };

/* Texture: ButtonText (29(32)x5 i4) */
u8 dMNPlayersCommon_ButtonText_tex[] = {
    #include <MNPlayersCommon/ButtonText.i4.inc.c>
};

Bitmap dMNPlayersCommon_ButtonText_bitmaps[] = {
	{ 29, 32, 0, 0, dMNPlayersCommon_ButtonText_tex, 5, 0 },
};

/* Sprite: ButtonText (29x5 i4) */
Sprite dMNPlayersCommon_ButtonText = {
	0, 0,
	29, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_ButtonText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: PressText */

Gfx dMNPlayersCommon_PressText_dl[] = { gsSPEndDisplayList() };

/* Texture: PressText (24(32)x5 i4) */
u8 dMNPlayersCommon_PressText_tex[] = {
    #include <MNPlayersCommon/PressText.i4.inc.c>
};

Bitmap dMNPlayersCommon_PressText_bitmaps[] = {
	{ 24, 32, 0, 0, dMNPlayersCommon_PressText_tex, 5, 0 },
};

/* Sprite: PressText (24x5 i4) */
Sprite dMNPlayersCommon_PressText = {
	0, 0,
	24, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNPlayersCommon_PressText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: MarioText */

Gfx dMNPlayersCommon_MarioText_dl[] = { gsSPEndDisplayList() };

/* Texture: MarioText (47(48)x16 ia8) */
u8 dMNPlayersCommon_MarioText_tex[] = {
    #include <MNPlayersCommon/MarioText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_MarioText_bitmaps[] = {
	{ 47, 48, 0, 0, dMNPlayersCommon_MarioText_tex, 16, 0 },
};

/* Sprite: MarioText (47x16 ia8) */
Sprite dMNPlayersCommon_MarioText = {
	0, 0,
	47, 16,
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
	(Bitmap*)dMNPlayersCommon_MarioText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: LuigiText */

Gfx dMNPlayersCommon_LuigiText_dl[] = { gsSPEndDisplayList() };

/* Texture: LuigiText (36(40)x16 ia8) */
u8 dMNPlayersCommon_LuigiText_tex[] = {
    #include <MNPlayersCommon/LuigiText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_LuigiText_bitmaps[] = {
	{ 36, 40, 0, 0, dMNPlayersCommon_LuigiText_tex, 16, 0 },
};

/* Sprite: LuigiText (36x16 ia8) */
Sprite dMNPlayersCommon_LuigiText = {
	0, 0,
	36, 16,
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
	(Bitmap*)dMNPlayersCommon_LuigiText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: DKText */

Gfx dMNPlayersCommon_DKText_dl[] = { gsSPEndDisplayList() };

/* Texture: DKText (66(72)x16 ia8) */
u8 dMNPlayersCommon_DKText_tex[] = {
    #include <MNPlayersCommon/DKText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_DKText_bitmaps[] = {
	{ 66, 72, 0, 0, dMNPlayersCommon_DKText_tex, 16, 0 },
};

/* Sprite: DKText (66x16 ia8) */
Sprite dMNPlayersCommon_DKText = {
	0, 0,
	66, 16,
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
	(Bitmap*)dMNPlayersCommon_DKText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: SamusText */

Gfx dMNPlayersCommon_SamusText_dl[] = { gsSPEndDisplayList() };

/* Texture: SamusText (47(48)x16 ia8) */
u8 dMNPlayersCommon_SamusText_tex[] = {
    #include <MNPlayersCommon/SamusText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_SamusText_bitmaps[] = {
	{ 47, 48, 0, 0, dMNPlayersCommon_SamusText_tex, 16, 0 },
};

/* Sprite: SamusText (47x16 ia8) */
Sprite dMNPlayersCommon_SamusText = {
	0, 0,
	47, 16,
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
	(Bitmap*)dMNPlayersCommon_SamusText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: FoxText */

Gfx dMNPlayersCommon_FoxText_dl[] = { gsSPEndDisplayList() };

/* Texture: FoxText (30(32)x16 ia8) */
u8 dMNPlayersCommon_FoxText_tex[] = {
    #include <MNPlayersCommon/FoxText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_FoxText_bitmaps[] = {
	{ 30, 32, 0, 0, dMNPlayersCommon_FoxText_tex, 16, 0 },
};

/* Sprite: FoxText (30x16 ia8) */
Sprite dMNPlayersCommon_FoxText = {
	0, 0,
	30, 16,
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
	(Bitmap*)dMNPlayersCommon_FoxText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: KirbyText */

Gfx dMNPlayersCommon_KirbyText_dl[] = { gsSPEndDisplayList() };

/* Texture: KirbyText (41(48)x15 ia8) */
u8 dMNPlayersCommon_KirbyText_tex[] = {
    #include <MNPlayersCommon/KirbyText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_KirbyText_bitmaps[] = {
	{ 41, 48, 0, 0, dMNPlayersCommon_KirbyText_tex, 15, 0 },
};

/* Sprite: KirbyText (41x15 ia8) */
Sprite dMNPlayersCommon_KirbyText = {
	0, 0,
	41, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNPlayersCommon_KirbyText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: LinkText */

Gfx dMNPlayersCommon_LinkText_dl[] = { gsSPEndDisplayList() };

/* Texture: LinkText (34(40)x15 ia8) */
u8 dMNPlayersCommon_LinkText_tex[] = {
    #include <MNPlayersCommon/LinkText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_LinkText_bitmaps[] = {
	{ 34, 40, 0, 0, dMNPlayersCommon_LinkText_tex, 15, 0 },
};

/* Sprite: LinkText (34x15 ia8) */
Sprite dMNPlayersCommon_LinkText = {
	0, 0,
	34, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNPlayersCommon_LinkText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: YoshiText */

Gfx dMNPlayersCommon_YoshiText_dl[] = { gsSPEndDisplayList() };

/* Texture: YoshiText (43(48)x15 ia8) */
u8 dMNPlayersCommon_YoshiText_tex[] = {
    #include <MNPlayersCommon/YoshiText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_YoshiText_bitmaps[] = {
	{ 43, 48, 0, 0, dMNPlayersCommon_YoshiText_tex, 15, 0 },
};

/* Sprite: YoshiText (43x15 ia8) */
Sprite dMNPlayersCommon_YoshiText = {
	0, 0,
	43, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNPlayersCommon_YoshiText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: PikachuText */

Gfx dMNPlayersCommon_PikachuText_dl[] = { gsSPEndDisplayList() };

/* Texture: PikachuText (57(64)x15 ia8) */
u8 dMNPlayersCommon_PikachuText_tex[] = {
    #include <MNPlayersCommon/PikachuText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_PikachuText_bitmaps[] = {
	{ 57, 64, 0, 0, dMNPlayersCommon_PikachuText_tex, 15, 0 },
};

/* Sprite: PikachuText (57x15 ia8) */
Sprite dMNPlayersCommon_PikachuText = {
	0, 0,
	57, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNPlayersCommon_PikachuText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: NessText */

Gfx dMNPlayersCommon_NessText_dl[] = { gsSPEndDisplayList() };

/* Texture: NessText (36(40)x15 ia8) */
u8 dMNPlayersCommon_NessText_tex[] = {
    #include <MNPlayersCommon/NessText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_NessText_bitmaps[] = {
	{ 36, 40, 0, 0, dMNPlayersCommon_NessText_tex, 15, 0 },
};

/* Sprite: NessText (36x15 ia8) */
Sprite dMNPlayersCommon_NessText = {
	0, 0,
	36, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNPlayersCommon_NessText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: CaptainFalconText */

Gfx dMNPlayersCommon_CaptainFalconText_dl[] = { gsSPEndDisplayList() };

/* Texture: CaptainFalconText (64x14 ia8) */
u8 dMNPlayersCommon_CaptainFalconText_tex[] = {
    #include <MNPlayersCommon/CaptainFalconText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_CaptainFalconText_bitmaps[] = {
	{ 64, 64, 0, 0, dMNPlayersCommon_CaptainFalconText_tex, 14, 0 },
};

/* Sprite: CaptainFalconText (64x14 ia8) */
Sprite dMNPlayersCommon_CaptainFalconText = {
	0, 0,
	64, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	3, 1,
	(Bitmap*)dMNPlayersCommon_CaptainFalconText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JigglypuffText */

Gfx dMNPlayersCommon_JigglypuffText_dl[] = { gsSPEndDisplayList() };

/* Texture: JigglypuffText (64x15 ia8) */
u8 dMNPlayersCommon_JigglypuffText_tex[] = {
    #include <MNPlayersCommon/JigglypuffText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_JigglypuffText_bitmaps[] = {
	{ 64, 64, 0, 0, dMNPlayersCommon_JigglypuffText_tex, 15, 0 },
};

/* Sprite: JigglypuffText (64x15 ia8) */
Sprite dMNPlayersCommon_JigglypuffText = {
	0, 0,
	64, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNPlayersCommon_JigglypuffText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: InfinityDark */

Gfx dMNPlayersCommon_InfinityDark_dl[] = { gsSPEndDisplayList() };

/* Texture: InfinityDark (17(24)x9 ia8) */
u8 dMNPlayersCommon_InfinityDark_tex[] = {
    #include <MNPlayersCommon/InfinityDark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_InfinityDark_bitmaps[] = {
	{ 17, 24, 0, 0, dMNPlayersCommon_InfinityDark_tex, 9, 0 },
};

/* Sprite: InfinityDark (17x9 ia8) */
Sprite dMNPlayersCommon_InfinityDark = {
	0, 0,
	17, 9,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	9, 9,
	3, 1,
	(Bitmap*)dMNPlayersCommon_InfinityDark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: TimeSelector */

Gfx dMNPlayersCommon_TimeSelector_dl[] = { gsSPEndDisplayList() };

/* Texture: TimeSelector (90(92)x13 rgba16) */
u8 dMNPlayersCommon_TimeSelector_tex[] = {
    #include <MNPlayersCommon/TimeSelector.rgba16.inc.c>
};

Bitmap dMNPlayersCommon_TimeSelector_bitmaps[] = {
	{ 90, 92, 0, 0, dMNPlayersCommon_TimeSelector_tex, 13, 0 },
};

/* Sprite: TimeSelector (90x13 rgba16) */
Sprite dMNPlayersCommon_TimeSelector = {
	0, 0,
	90, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	0, 2,
	(Bitmap*)dMNPlayersCommon_TimeSelector_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: StockSelector */

Gfx dMNPlayersCommon_StockSelector_dl[] = { gsSPEndDisplayList() };

/* Texture: StockSelector (90(92)x13 rgba16) */
u8 dMNPlayersCommon_StockSelector_tex[] = {
    #include <MNPlayersCommon/StockSelector.rgba16.inc.c>
};

Bitmap dMNPlayersCommon_StockSelector_bitmaps[] = {
	{ 90, 92, 0, 0, dMNPlayersCommon_StockSelector_tex, 13, 0 },
};

/* Sprite: StockSelector (90x13 rgba16) */
Sprite dMNPlayersCommon_StockSelector = {
	0, 0,
	90, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	0, 2,
	(Bitmap*)dMNPlayersCommon_StockSelector_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: 0Dark */

Gfx dMNPlayersCommon_0Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 0Dark (10(16)x11 ia8) */
u8 dMNPlayersCommon_0Dark_tex[] = {
    #include <MNPlayersCommon/0Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_0Dark_bitmaps[] = {
	{ 10, 16, 0, 0, dMNPlayersCommon_0Dark_tex, 11, 0 },
};

/* Sprite: 0Dark (10x11 ia8) */
Sprite dMNPlayersCommon_0Dark = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dMNPlayersCommon_0Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 1Dark */

Gfx dMNPlayersCommon_1Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 1Dark (7(8)x11 ia8) */
u8 dMNPlayersCommon_1Dark_tex[] = {
    #include <MNPlayersCommon/1Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_1Dark_bitmaps[] = {
	{ 7, 8, 0, 0, dMNPlayersCommon_1Dark_tex, 11, 0 },
};

/* Sprite: 1Dark (7x11 ia8) */
Sprite dMNPlayersCommon_1Dark = {
	0, 0,
	7, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dMNPlayersCommon_1Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: 2Dark */

Gfx dMNPlayersCommon_2Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 2Dark (11(16)x11 ia8) */
u8 dMNPlayersCommon_2Dark_tex[] = {
    #include <MNPlayersCommon/2Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_2Dark_bitmaps[] = {
	{ 11, 16, 0, 0, dMNPlayersCommon_2Dark_tex, 11, 0 },
};

/* Sprite: 2Dark (11x11 ia8) */
Sprite dMNPlayersCommon_2Dark = {
	0, 0,
	11, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dMNPlayersCommon_2Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 3Dark */

Gfx dMNPlayersCommon_3Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 3Dark (10(16)x11 ia8) */
u8 dMNPlayersCommon_3Dark_tex[] = {
    #include <MNPlayersCommon/3Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_3Dark_bitmaps[] = {
	{ 10, 16, 0, 0, dMNPlayersCommon_3Dark_tex, 11, 0 },
};

/* Sprite: 3Dark (10x11 ia8) */
Sprite dMNPlayersCommon_3Dark = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dMNPlayersCommon_3Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 4Dark */

Gfx dMNPlayersCommon_4Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 4Dark (10(16)x11 ia8) */
u8 dMNPlayersCommon_4Dark_tex[] = {
    #include <MNPlayersCommon/4Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_4Dark_bitmaps[] = {
	{ 10, 16, 0, 0, dMNPlayersCommon_4Dark_tex, 11, 0 },
};

/* Sprite: 4Dark (10x11 ia8) */
Sprite dMNPlayersCommon_4Dark = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dMNPlayersCommon_4Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 5Dark */

Gfx dMNPlayersCommon_5Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 5Dark (11(16)x11 ia8) */
u8 dMNPlayersCommon_5Dark_tex[] = {
    #include <MNPlayersCommon/5Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_5Dark_bitmaps[] = {
	{ 11, 16, 0, 0, dMNPlayersCommon_5Dark_tex, 11, 0 },
};

/* Sprite: 5Dark (11x11 ia8) */
Sprite dMNPlayersCommon_5Dark = {
	0, 0,
	11, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dMNPlayersCommon_5Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 6Dark */

Gfx dMNPlayersCommon_6Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 6Dark (9(16)x11 ia8) */
u8 dMNPlayersCommon_6Dark_tex[] = {
    #include <MNPlayersCommon/6Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_6Dark_bitmaps[] = {
	{ 9, 16, 0, 0, dMNPlayersCommon_6Dark_tex, 11, 0 },
};

/* Sprite: 6Dark (9x11 ia8) */
Sprite dMNPlayersCommon_6Dark = {
	0, 0,
	9, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dMNPlayersCommon_6Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 7Dark */

Gfx dMNPlayersCommon_7Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 7Dark (10(16)x11 ia8) */
u8 dMNPlayersCommon_7Dark_tex[] = {
    #include <MNPlayersCommon/7Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_7Dark_bitmaps[] = {
	{ 10, 16, 0, 0, dMNPlayersCommon_7Dark_tex, 11, 0 },
};

/* Sprite: 7Dark (10x11 ia8) */
Sprite dMNPlayersCommon_7Dark = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dMNPlayersCommon_7Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 8Dark */

Gfx dMNPlayersCommon_8Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 8Dark (10(16)x11 ia8) */
u8 dMNPlayersCommon_8Dark_tex[] = {
    #include <MNPlayersCommon/8Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_8Dark_bitmaps[] = {
	{ 10, 16, 0, 0, dMNPlayersCommon_8Dark_tex, 11, 0 },
};

/* Sprite: 8Dark (10x11 ia8) */
Sprite dMNPlayersCommon_8Dark = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dMNPlayersCommon_8Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 9Dark */

Gfx dMNPlayersCommon_9Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 9Dark (9(16)x11 ia8) */
u8 dMNPlayersCommon_9Dark_tex[] = {
    #include <MNPlayersCommon/9Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_9Dark_bitmaps[] = {
	{ 9, 16, 0, 0, dMNPlayersCommon_9Dark_tex, 11, 0 },
};

/* Sprite: 9Dark (9x11 ia8) */
Sprite dMNPlayersCommon_9Dark = {
	0, 0,
	9, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dMNPlayersCommon_9Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: HmnLabel */

Gfx dMNPlayersCommon_HmnLabel_dl[] = { gsSPEndDisplayList() };

/* Texture: HmnLabel (20x10 rgba32) */
u8 dMNPlayersCommon_HmnLabel_tex[] = {
    #include <MNPlayersCommon/HmnLabel.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_HmnLabel_bitmaps[] = {
	{ 20, 20, 0, 0, dMNPlayersCommon_HmnLabel_tex, 10, 0 },
};

/* Sprite: HmnLabel (20x10 rgba32) */
Sprite dMNPlayersCommon_HmnLabel = {
	0, 0,
	20, 10,
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
	0, 3,
	(Bitmap*)dMNPlayersCommon_HmnLabel_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: CPLabel */

Gfx dMNPlayersCommon_CPLabel_dl[] = { gsSPEndDisplayList() };

/* Texture: CPLabel (20x10 rgba32) */
u8 dMNPlayersCommon_CPLabel_tex[] = {
    #include <MNPlayersCommon/CPLabel.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_CPLabel_bitmaps[] = {
	{ 20, 20, 0, 0, dMNPlayersCommon_CPLabel_tex, 10, 0 },
};

/* Sprite: CPLabel (20x10 rgba32) */
Sprite dMNPlayersCommon_CPLabel = {
	0, 0,
	20, 10,
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
	0, 3,
	(Bitmap*)dMNPlayersCommon_CPLabel_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: NALabel */

Gfx dMNPlayersCommon_NALabel_dl[] = { gsSPEndDisplayList() };

/* Texture: NALabel (20x10 rgba32) */
u8 dMNPlayersCommon_NALabel_tex[] = {
    #include <MNPlayersCommon/NALabel.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_NALabel_bitmaps[] = {
	{ 20, 20, 0, 0, dMNPlayersCommon_NALabel_tex, 10, 0 },
};

/* Sprite: NALabel (20x10 rgba32) */
Sprite dMNPlayersCommon_NALabel = {
	0, 0,
	20, 10,
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
	0, 3,
	(Bitmap*)dMNPlayersCommon_NALabel_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: CursorHandPoint */

Gfx dMNPlayersCommon_CursorHandPoint_dl[] = { gsSPEndDisplayList() };

/* Texture: CursorHandPoint (27(28)x36 ia16) */
u8 dMNPlayersCommon_CursorHandPoint_tex[] = {
    #include <MNPlayersCommon/CursorHandPoint.ia16.inc.c>
};

Bitmap dMNPlayersCommon_CursorHandPoint_bitmaps[] = {
	{ 27, 28, 0, 0, dMNPlayersCommon_CursorHandPoint_tex, 36, 0 },
};

/* Sprite: CursorHandPoint (27x36 ia16) */
Sprite dMNPlayersCommon_CursorHandPoint = {
	0, 0,
	27, 36,
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
	3, 2,
	(Bitmap*)dMNPlayersCommon_CursorHandPoint_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: CursorHandGrab */

Gfx dMNPlayersCommon_CursorHandGrab_dl[] = { gsSPEndDisplayList() };

/* Texture: CursorHandGrab (30(32)x28 ia16) */
u8 dMNPlayersCommon_CursorHandGrab_tex[] = {
    #include <MNPlayersCommon/CursorHandGrab.ia16.inc.c>
};

Bitmap dMNPlayersCommon_CursorHandGrab_bitmaps[] = {
	{ 30, 32, 0, 0, dMNPlayersCommon_CursorHandGrab_tex, 28, 0 },
};

/* Sprite: CursorHandGrab (30x28 ia16) */
Sprite dMNPlayersCommon_CursorHandGrab = {
	0, 0,
	30, 28,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	28, 28,
	3, 2,
	(Bitmap*)dMNPlayersCommon_CursorHandGrab_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: CursorHandHover */

Gfx dMNPlayersCommon_CursorHandHover_dl[] = { gsSPEndDisplayList() };

/* Texture: CursorHandHover (35(36)x36 ia16) */
u8 dMNPlayersCommon_CursorHandHover_tex[] = {
    #include <MNPlayersCommon/CursorHandHover.ia16.inc.c>
};

Bitmap dMNPlayersCommon_CursorHandHover_bitmaps[] = {
	{ 35, 36, 0, 0, dMNPlayersCommon_CursorHandHover_tex, 36, 0 },
};

/* Sprite: CursorHandHover (35x36 ia16) */
Sprite dMNPlayersCommon_CursorHandHover = {
	0, 0,
	35, 36,
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
	3, 2,
	(Bitmap*)dMNPlayersCommon_CursorHandHover_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 1PTextGradient */

Gfx dMNPlayersCommon_1PTextGradient_dl[] = { gsSPEndDisplayList() };

/* Texture: 1PTextGradient (15(16)x10 ia8) */
u8 dMNPlayersCommon_1PTextGradient_tex[] = {
    #include <MNPlayersCommon/1PTextGradient.ia8.inc.c>
};

Bitmap dMNPlayersCommon_1PTextGradient_bitmaps[] = {
	{ 15, 16, 0, 0, dMNPlayersCommon_1PTextGradient_tex, 10, 0 },
};

/* Sprite: 1PTextGradient (15x10 ia8) */
Sprite dMNPlayersCommon_1PTextGradient = {
	0, 0,
	15, 10,
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
	(Bitmap*)dMNPlayersCommon_1PTextGradient_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 2PTextGradient */

Gfx dMNPlayersCommon_2PTextGradient_dl[] = { gsSPEndDisplayList() };

/* Texture: 2PTextGradient (15(16)x10 ia8) */
u8 dMNPlayersCommon_2PTextGradient_tex[] = {
    #include <MNPlayersCommon/2PTextGradient.ia8.inc.c>
};

Bitmap dMNPlayersCommon_2PTextGradient_bitmaps[] = {
	{ 15, 16, 0, 0, dMNPlayersCommon_2PTextGradient_tex, 10, 0 },
};

/* Sprite: 2PTextGradient (15x10 ia8) */
Sprite dMNPlayersCommon_2PTextGradient = {
	0, 0,
	15, 10,
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
	(Bitmap*)dMNPlayersCommon_2PTextGradient_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 3PTextGradient */

Gfx dMNPlayersCommon_3PTextGradient_dl[] = { gsSPEndDisplayList() };

/* Texture: 3PTextGradient (15(16)x10 ia8) */
u8 dMNPlayersCommon_3PTextGradient_tex[] = {
    #include <MNPlayersCommon/3PTextGradient.ia8.inc.c>
};

Bitmap dMNPlayersCommon_3PTextGradient_bitmaps[] = {
	{ 15, 16, 0, 0, dMNPlayersCommon_3PTextGradient_tex, 10, 0 },
};

/* Sprite: 3PTextGradient (15x10 ia8) */
Sprite dMNPlayersCommon_3PTextGradient = {
	0, 0,
	15, 10,
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
	(Bitmap*)dMNPlayersCommon_3PTextGradient_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 4PTextGradient */

Gfx dMNPlayersCommon_4PTextGradient_dl[] = { gsSPEndDisplayList() };

/* Texture: 4PTextGradient (15(16)x10 ia8) */
u8 dMNPlayersCommon_4PTextGradient_tex[] = {
    #include <MNPlayersCommon/4PTextGradient.ia8.inc.c>
};

Bitmap dMNPlayersCommon_4PTextGradient_bitmaps[] = {
	{ 15, 16, 0, 0, dMNPlayersCommon_4PTextGradient_tex, 10, 0 },
};

/* Sprite: 4PTextGradient (15x10 ia8) */
Sprite dMNPlayersCommon_4PTextGradient = {
	0, 0,
	15, 10,
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
	(Bitmap*)dMNPlayersCommon_4PTextGradient_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 1PPuck */

Gfx dMNPlayersCommon_1PPuck_dl[] = { gsSPEndDisplayList() };

/* Texture: 1PPuck (26(28)x24 rgba32) */
u8 dMNPlayersCommon_1PPuck_tex[] = {
    #include <MNPlayersCommon/1PPuck.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_1PPuck_bitmaps[] = {
	{ 26, 28, 0, 0, dMNPlayersCommon_1PPuck_tex, 24, 0 },
};

/* Sprite: 1PPuck (26x24 rgba32) */
Sprite dMNPlayersCommon_1PPuck = {
	0, 0,
	26, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	24, 24,
	0, 3,
	(Bitmap*)dMNPlayersCommon_1PPuck_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 2PPuck */

Gfx dMNPlayersCommon_2PPuck_dl[] = { gsSPEndDisplayList() };

/* Texture: 2PPuck (26(28)x24 rgba32) */
u8 dMNPlayersCommon_2PPuck_tex[] = {
    #include <MNPlayersCommon/2PPuck.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_2PPuck_bitmaps[] = {
	{ 26, 28, 0, 0, dMNPlayersCommon_2PPuck_tex, 24, 0 },
};

/* Sprite: 2PPuck (26x24 rgba32) */
Sprite dMNPlayersCommon_2PPuck = {
	0, 0,
	26, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	24, 24,
	0, 3,
	(Bitmap*)dMNPlayersCommon_2PPuck_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 3PPuck */

Gfx dMNPlayersCommon_3PPuck_dl[] = { gsSPEndDisplayList() };

/* Texture: 3PPuck (26(28)x24 rgba32) */
u8 dMNPlayersCommon_3PPuck_tex[] = {
    #include <MNPlayersCommon/3PPuck.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_3PPuck_bitmaps[] = {
	{ 26, 28, 0, 0, dMNPlayersCommon_3PPuck_tex, 24, 0 },
};

/* Sprite: 3PPuck (26x24 rgba32) */
Sprite dMNPlayersCommon_3PPuck = {
	0, 0,
	26, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	24, 24,
	0, 3,
	(Bitmap*)dMNPlayersCommon_3PPuck_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: 4PPuck */

Gfx dMNPlayersCommon_4PPuck_dl[] = { gsSPEndDisplayList() };

/* Texture: 4PPuck (26(28)x24 rgba32) */
u8 dMNPlayersCommon_4PPuck_tex[] = {
    #include <MNPlayersCommon/4PPuck.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_4PPuck_bitmaps[] = {
	{ 26, 28, 0, 0, dMNPlayersCommon_4PPuck_tex, 24, 0 },
};

/* Sprite: 4PPuck (26x24 rgba32) */
Sprite dMNPlayersCommon_4PPuck = {
	0, 0,
	26, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	24, 24,
	0, 3,
	(Bitmap*)dMNPlayersCommon_4PPuck_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: CPPuck */

Gfx dMNPlayersCommon_CPPuck_dl[] = { gsSPEndDisplayList() };

/* Texture: CPPuck (26(28)x24 rgba32) */
u8 dMNPlayersCommon_CPPuck_tex[] = {
    #include <MNPlayersCommon/CPPuck.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_CPPuck_bitmaps[] = {
	{ 26, 28, 0, 0, dMNPlayersCommon_CPPuck_tex, 24, 0 },
};

/* Sprite: CPPuck (26x24 rgba32) */
Sprite dMNPlayersCommon_CPPuck = {
	0, 0,
	26, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	24, 24,
	0, 3,
	(Bitmap*)dMNPlayersCommon_CPPuck_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: SmashLogoCardLeft */

Gfx dMNPlayersCommon_SmashLogoCardLeft_dl[] = { gsSPEndDisplayList() };

/* Texture: SmashLogoCardLeft (41(48)x93 ia8, 2 tiles) */
u8 dMNPlayersCommon_SmashLogoCardLeft_tex[] = {
    #include <MNPlayersCommon/SmashLogoCardLeft.ia8.inc.c>
};

Bitmap dMNPlayersCommon_SmashLogoCardLeft_bitmaps[] = {
	{ 41, 48, 0, 0, dMNPlayersCommon_SmashLogoCardLeft_tex, 85, 0 },
	{ 41, 48, 0, 0, dMNPlayersCommon_SmashLogoCardLeft_tex + 0xFF8, 8, 0 },
};

/* Sprite: SmashLogoCardLeft (41x92 ia8) */
Sprite dMNPlayersCommon_SmashLogoCardLeft = {
	0, 0,
	41, 92,
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
	(Bitmap*)dMNPlayersCommon_SmashLogoCardLeft_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: SmashLogoCardRight */

Gfx dMNPlayersCommon_SmashLogoCardRight_dl[] = { gsSPEndDisplayList() };

/* Texture: SmashLogoCardRight (41(48)x93 ia8, 2 tiles) */
u8 dMNPlayersCommon_SmashLogoCardRight_tex[] = {
    #include <MNPlayersCommon/SmashLogoCardRight.ia8.inc.c>
};

Bitmap dMNPlayersCommon_SmashLogoCardRight_bitmaps[] = {
	{ 41, 48, 0, 0, dMNPlayersCommon_SmashLogoCardRight_tex, 85, 0 },
	{ 41, 48, 0, 0, dMNPlayersCommon_SmashLogoCardRight_tex + 0xFF8, 8, 0 },
};

/* Sprite: SmashLogoCardRight (41x92 ia8) */
Sprite dMNPlayersCommon_SmashLogoCardRight = {
	0, 0,
	41, 92,
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
	(Bitmap*)dMNPlayersCommon_SmashLogoCardRight_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: RedLabel */

Gfx dMNPlayersCommon_RedLabel_dl[] = { gsSPEndDisplayList() };

/* Texture: RedLabel (24x10 rgba32) */
u8 dMNPlayersCommon_RedLabel_tex[] = {
    #include <MNPlayersCommon/RedLabel.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_RedLabel_bitmaps[] = {
	{ 24, 24, 0, 0, dMNPlayersCommon_RedLabel_tex, 10, 0 },
};

/* Sprite: RedLabel (24x10 rgba32) */
Sprite dMNPlayersCommon_RedLabel = {
	0, 0,
	24, 10,
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
	0, 3,
	(Bitmap*)dMNPlayersCommon_RedLabel_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: GreenLabel */

Gfx dMNPlayersCommon_GreenLabel_dl[] = { gsSPEndDisplayList() };

/* Texture: GreenLabel (24x10 rgba32) */
u8 dMNPlayersCommon_GreenLabel_tex[] = {
    #include <MNPlayersCommon/GreenLabel.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_GreenLabel_bitmaps[] = {
	{ 24, 24, 0, 0, dMNPlayersCommon_GreenLabel_tex, 10, 0 },
};

/* Sprite: GreenLabel (24x10 rgba32) */
Sprite dMNPlayersCommon_GreenLabel = {
	0, 0,
	24, 10,
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
	0, 3,
	(Bitmap*)dMNPlayersCommon_GreenLabel_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: BlueLabel */

Gfx dMNPlayersCommon_BlueLabel_dl[] = { gsSPEndDisplayList() };

/* Texture: BlueLabel (24x10 rgba32) */
u8 dMNPlayersCommon_BlueLabel_tex[] = {
    #include <MNPlayersCommon/BlueLabel.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_BlueLabel_bitmaps[] = {
	{ 24, 24, 0, 0, dMNPlayersCommon_BlueLabel_tex, 10, 0 },
};

/* Sprite: BlueLabel (24x10 rgba32) */
Sprite dMNPlayersCommon_BlueLabel = {
	0, 0,
	24, 10,
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
	0, 3,
	(Bitmap*)dMNPlayersCommon_BlueLabel_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite ArrowL */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: ArrowL (7(16)x11 ci4) */
u8 dMNPlayersCommon_ArrowL_tex[] = {
    #include <MNPlayersCommon/ArrowL.ci4.inc.c>
};

/* Palette: @ 0xECB8 (16 colors RGBA5551) */
u16 dMNPlayersCommon_palette_0xECB8[16] = {
	#include <MNPlayersCommon/palette_0xECB8.palette.inc.c>
};

/* Sprite: ArrowL */

/* Sprite: ArrowL (7x11 ci4) */

Bitmap dMNPlayersCommon_ArrowL_bitmaps[] = {
	{ 7, 16, 0, 0, dMNPlayersCommon_ArrowL_tex, 11, 0 },
};

Sprite dMNPlayersCommon_ArrowL = {
	0, 0,
	7, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNPlayersCommon_palette_0xECB8,
	0, 1,
	1, 36,
	11, 11,
	2, 0,
	(Bitmap*)dMNPlayersCommon_ArrowL_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite ArrowR */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: ArrowR (7(16)x11 ci4) */
u8 dMNPlayersCommon_ArrowR_tex[] = {
    #include <MNPlayersCommon/ArrowR.ci4.inc.c>
};

/* Palette: @ 0xED98 (16 colors RGBA5551) */
u16 dMNPlayersCommon_palette_0xED98[16] = {
	#include <MNPlayersCommon/palette_0xED98.palette.inc.c>
};

/* Sprite: ArrowR */

/* Sprite: ArrowR (7x11 ci4) */

Bitmap dMNPlayersCommon_ArrowR_bitmaps[] = {
	{ 7, 16, 0, 0, dMNPlayersCommon_ArrowR_tex, 11, 0 },
};

Sprite dMNPlayersCommon_ArrowR = {
	0, 0,
	7, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNPlayersCommon_palette_0xED98,
	0, 1,
	1, 36,
	11, 11,
	2, 0,
	(Bitmap*)dMNPlayersCommon_ArrowR_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: ReadyToFightText */

Gfx dMNPlayersCommon_ReadyToFightText_dl[] = { gsSPEndDisplayList() };

/* Texture: ReadyToFightText (224x7 ia8) */
u8 dMNPlayersCommon_ReadyToFightText_tex[] = {
    #include <MNPlayersCommon/ReadyToFightText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_ReadyToFightText_bitmaps[] = {
	{ 224, 224, 0, 0, dMNPlayersCommon_ReadyToFightText_tex, 7, 0 },
};

/* Sprite: ReadyToFightText (224x7 ia8) */
Sprite dMNPlayersCommon_ReadyToFightText = {
	0, 0,
	224, 7,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	7, 7,
	3, 1,
	(Bitmap*)dMNPlayersCommon_ReadyToFightText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: ReadyBanner */

Gfx dMNPlayersCommon_ReadyBanner_dl[] = { gsSPEndDisplayList() };

/* Texture: ReadyBanner (8x17 ia8) */
u8 dMNPlayersCommon_ReadyBanner_tex[] = {
    #include <MNPlayersCommon/ReadyBanner.ia8.inc.c>
};

Bitmap dMNPlayersCommon_ReadyBanner_bitmaps[] = {
	{ 8, 8, 0, 0, dMNPlayersCommon_ReadyBanner_tex, 17, 0 },
};

/* Sprite: ReadyBanner (8x17 ia8) */
Sprite dMNPlayersCommon_ReadyBanner = {
	0, 0,
	8, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	3, 1,
	(Bitmap*)dMNPlayersCommon_ReadyBanner_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite RedCard */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: RedCard (66(80)x92 ci4, 2 tiles) */
u8 dMNPlayersCommon_RedCard_tex[] = {
    #include <MNPlayersCommon/RedCard.ci4.inc.c>
};

/* Palette: GateMan1P @ 0x103F8 (16 colors RGBA5551) */
u16 dMNPlayersCommon_GateMan1P_palette[16] = {
	#include <MNPlayersCommon/GateMan1P.palette.inc.c>
};

PAD(8);

/* Palette: GateMan2P @ 0x10420 (16 colors RGBA5551) */
u16 dMNPlayersCommon_GateMan2P_palette[16] = {
	#include <MNPlayersCommon/GateMan2P.palette.inc.c>
};

PAD(8);

/* Palette: GateMan4P @ 0x10448 (16 colors RGBA5551) */
u16 dMNPlayersCommon_GateMan4P_palette[16] = {
	#include <MNPlayersCommon/GateMan4P.palette.inc.c>
};

PAD(8);

/* Palette: GateMan3P @ 0x10470 (16 colors RGBA5551) */
u16 dMNPlayersCommon_GateMan3P_palette[16] = {
	#include <MNPlayersCommon/GateMan3P.palette.inc.c>
};

/* Sprite: RedCard */

/* Sprite: RedCard (66x91 ci4) */

Bitmap dMNPlayersCommon_RedCard_bitmaps[] = {
	{ 66, 80, 0, 0, dMNPlayersCommon_RedCard_tex, 50, 0 },
	{ 66, 80, 0, 0, dMNPlayersCommon_RedCard_tex + 0x7D8, 42, 0 },
};

Sprite dMNPlayersCommon_RedCard = {
	0, 0,
	66, 91,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNPlayersCommon_GateMan1P_palette,
	0, 1,
	2, 48,
	49, 50,
	2, 0,
	(Bitmap*)dMNPlayersCommon_RedCard_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite GrayCard */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: GrayCard (66(80)x92 ci4, 2 tiles) */
u8 dMNPlayersCommon_GrayCard_tex[] = {
    #include <MNPlayersCommon/GrayCard.ci4.inc.c>
};

/* Palette: GateCom1P @ 0x11378 (16 colors RGBA5551) */
u16 dMNPlayersCommon_GateCom1P_palette[16] = {
	#include <MNPlayersCommon/GateCom1P.palette.inc.c>
};

PAD(8);

/* Palette: GateCom2P @ 0x113A0 (16 colors RGBA5551) */
u16 dMNPlayersCommon_GateCom2P_palette[16] = {
	#include <MNPlayersCommon/GateCom2P.palette.inc.c>
};

PAD(8);

/* Palette: GateCom4P @ 0x113C8 (16 colors RGBA5551) */
u16 dMNPlayersCommon_GateCom4P_palette[16] = {
	#include <MNPlayersCommon/GateCom4P.palette.inc.c>
};

PAD(8);

/* Palette: GateCom3P @ 0x113F0 (16 colors RGBA5551) */
u16 dMNPlayersCommon_GateCom3P_palette[16] = {
	#include <MNPlayersCommon/GateCom3P.palette.inc.c>
};

/* Sprite: GrayCard */

/* Sprite: GrayCard (66x91 ci4) */

Bitmap dMNPlayersCommon_GrayCard_bitmaps[] = {
	{ 66, 80, 0, 0, dMNPlayersCommon_GrayCard_tex, 50, 0 },
	{ 66, 80, 0, 0, dMNPlayersCommon_GrayCard_tex + 0x7D8, 42, 0 },
};

Sprite dMNPlayersCommon_GrayCard = {
	0, 0,
	66, 91,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNPlayersCommon_GateCom1P_palette,
	0, 1,
	2, 48,
	49, 50,
	2, 0,
	(Bitmap*)dMNPlayersCommon_GrayCard_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite BackButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: BackButton (48x11 ci4) */
u8 dMNPlayersCommon_BackButton_tex[] = {
    #include <MNPlayersCommon/BackButton.ci4.inc.c>
};

/* Palette: @ 0x11598 (16 colors RGBA5551) */
u16 dMNPlayersCommon_palette_0x11598[16] = {
	#include <MNPlayersCommon/palette_0x11598.palette.inc.c>
};

/* Sprite: BackButton */

/* Sprite: BackButton (48x11 ci4) */

Bitmap dMNPlayersCommon_BackButton_bitmaps[] = {
	{ 48, 48, 0, 0, dMNPlayersCommon_BackButton_tex, 11, 0 },
};

Sprite dMNPlayersCommon_BackButton = {
	0, 0,
	48, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNPlayersCommon_palette_0x11598,
	0, 1,
	1, 36,
	11, 11,
	2, 0,
	(Bitmap*)dMNPlayersCommon_BackButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

