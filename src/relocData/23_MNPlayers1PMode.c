/* relocData file 23: MNPlayers1PMode */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Sprite: 1PlayerGameText */

Gfx dMNPlayers1PMode_1PlayerGameText_dl[] = { gsSPEndDisplayList() };

/* Texture: 1PlayerGameText (86(96)x11 i4) */
u8 dMNPlayers1PMode_1PlayerGameText_tex[] = {
    #include <MNPlayers1PMode/1PlayerGameText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_1PlayerGameText_bitmaps[] = {
	{ 86, 96, 0, 0, dMNPlayers1PMode_1PlayerGameText_tex, 11, 0 },
};

/* Sprite: 1PlayerGameText (86x11 i4) */
Sprite dMNPlayers1PMode_1PlayerGameText = {
	0, 0,
	86, 11,
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
	(Bitmap*)dMNPlayers1PMode_1PlayerGameText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: ClosingParenthesis */

Gfx dMNPlayers1PMode_ClosingParenthesis_dl[] = { gsSPEndDisplayList() };

/* Texture: ClosingParenthesis (3(16)x8 i4) */
u8 dMNPlayers1PMode_ClosingParenthesis_tex[] = {
    #include <MNPlayers1PMode/ClosingParenthesis.i4.inc.c>
};

Bitmap dMNPlayers1PMode_ClosingParenthesis_bitmaps[] = {
	{ 3, 16, 0, 0, dMNPlayers1PMode_ClosingParenthesis_tex, 8, 0 },
};

/* Sprite: ClosingParenthesis (3x8 i4) */
Sprite dMNPlayers1PMode_ClosingParenthesis = {
	0, 0,
	3, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	8, 8,
	4, 0,
	(Bitmap*)dMNPlayers1PMode_ClosingParenthesis_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: OpeningParenthesis */

Gfx dMNPlayers1PMode_OpeningParenthesis_dl[] = { gsSPEndDisplayList() };

/* Texture: OpeningParenthesis (3(16)x8 i4) */
u8 dMNPlayers1PMode_OpeningParenthesis_tex[] = {
    #include <MNPlayers1PMode/OpeningParenthesis.i4.inc.c>
};

Bitmap dMNPlayers1PMode_OpeningParenthesis_bitmaps[] = {
	{ 3, 16, 0, 0, dMNPlayers1PMode_OpeningParenthesis_tex, 8, 0 },
};

/* Sprite: OpeningParenthesis (3x8 i4) */
Sprite dMNPlayers1PMode_OpeningParenthesis = {
	0, 0,
	3, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	8, 8,
	4, 0,
	(Bitmap*)dMNPlayers1PMode_OpeningParenthesis_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: LevelColonText */

Gfx dMNPlayers1PMode_LevelColonText_dl[] = { gsSPEndDisplayList() };

/* Texture: LevelColonText (45(48)x8 i4) */
u8 dMNPlayers1PMode_LevelColonText_tex[] = {
    #include <MNPlayers1PMode/LevelColonText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_LevelColonText_bitmaps[] = {
	{ 45, 48, 0, 0, dMNPlayers1PMode_LevelColonText_tex, 8, 0 },
};

/* Sprite: LevelColonText (45x8 i4) */
Sprite dMNPlayers1PMode_LevelColonText = {
	0, 0,
	45, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	8, 8,
	4, 0,
	(Bitmap*)dMNPlayers1PMode_LevelColonText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: StockColonText */

Gfx dMNPlayers1PMode_StockColonText_dl[] = { gsSPEndDisplayList() };

/* Texture: StockColonText (46(48)x8 i4) */
u8 dMNPlayers1PMode_StockColonText_tex[] = {
    #include <MNPlayers1PMode/StockColonText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_StockColonText_bitmaps[] = {
	{ 46, 48, 0, 0, dMNPlayers1PMode_StockColonText_tex, 8, 0 },
};

/* Sprite: StockColonText (46x8 i4) */
Sprite dMNPlayers1PMode_StockColonText = {
	0, 0,
	46, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	8, 8,
	4, 0,
	(Bitmap*)dMNPlayers1PMode_StockColonText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: OptionOutline */

Gfx dMNPlayers1PMode_OptionOutline_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionOutline (192x32 i4c) */
u8 dMNPlayers1PMode_OptionOutline_tex[] = {
    #include <MNPlayers1PMode/OptionOutline.i4c.inc.c>
};

Bitmap dMNPlayers1PMode_OptionOutline_bitmaps[] = {
	{ 192, 192, 0, 0, dMNPlayers1PMode_OptionOutline_tex, 32, 0 },
};

/* Sprite: OptionOutline (192x32 i4c) */
Sprite dMNPlayers1PMode_OptionOutline = {
	0, 0,
	192, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 4,
	(Bitmap*)dMNPlayers1PMode_OptionOutline_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: BestTimeText */

Gfx dMNPlayers1PMode_BestTimeText_dl[] = { gsSPEndDisplayList() };

/* Texture: BestTimeText (40(48)x5 i4) */
u8 dMNPlayers1PMode_BestTimeText_tex[] = {
    #include <MNPlayers1PMode/BestTimeText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_BestTimeText_bitmaps[] = {
	{ 40, 48, 0, 0, dMNPlayers1PMode_BestTimeText_tex, 5, 0 },
};

/* Sprite: BestTimeText (40x5 i4) */
Sprite dMNPlayers1PMode_BestTimeText = {
	0, 0,
	40, 5,
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
	(Bitmap*)dMNPlayers1PMode_BestTimeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: TotalBestTimeText */

Gfx dMNPlayers1PMode_TotalBestTimeText_dl[] = { gsSPEndDisplayList() };

/* Texture: TotalBestTimeText (68(80)x5 i4) */
u8 dMNPlayers1PMode_TotalBestTimeText_tex[] = {
    #include <MNPlayers1PMode/TotalBestTimeText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_TotalBestTimeText_bitmaps[] = {
	{ 68, 80, 0, 0, dMNPlayers1PMode_TotalBestTimeText_tex, 5, 0 },
};

/* Sprite: TotalBestTimeText (68x5 i4) */
Sprite dMNPlayers1PMode_TotalBestTimeText = {
	0, 0,
	68, 5,
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
	(Bitmap*)dMNPlayers1PMode_TotalBestTimeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: TargetsText */

Gfx dMNPlayers1PMode_TargetsText_dl[] = { gsSPEndDisplayList() };

/* Texture: TargetsText (95(96)x10 i4) */
u8 dMNPlayers1PMode_TargetsText_tex[] = {
    #include <MNPlayers1PMode/TargetsText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_TargetsText_bitmaps[] = {
	{ 95, 96, 0, 0, dMNPlayers1PMode_TargetsText_tex, 10, 0 },
};

/* Sprite: TargetsText (95x10 i4) */
Sprite dMNPlayers1PMode_TargetsText = {
	0, 0,
	95, 10,
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
	(Bitmap*)dMNPlayers1PMode_TargetsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: PlatformsText */

Gfx dMNPlayers1PMode_PlatformsText_dl[] = { gsSPEndDisplayList() };

/* Texture: PlatformsText (96x10 i4) */
u8 dMNPlayers1PMode_PlatformsText_tex[] = {
    #include <MNPlayers1PMode/PlatformsText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_PlatformsText_bitmaps[] = {
	{ 96, 96, 0, 0, dMNPlayers1PMode_PlatformsText_tex, 10, 0 },
};

/* Sprite: PlatformsText (96x10 i4) */
Sprite dMNPlayers1PMode_PlatformsText = {
	0, 0,
	96, 10,
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
	(Bitmap*)dMNPlayers1PMode_PlatformsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: SmashLogo */

Gfx dMNPlayers1PMode_SmashLogo_dl[] = { gsSPEndDisplayList() };

/* Texture: SmashLogo (16x11 i4) */
u8 dMNPlayers1PMode_SmashLogo_tex[] = {
    #include <MNPlayers1PMode/SmashLogo.i4.inc.c>
};

Bitmap dMNPlayers1PMode_SmashLogo_bitmaps[] = {
	{ 16, 16, 0, 0, dMNPlayers1PMode_SmashLogo_tex, 11, 0 },
};

/* Sprite: SmashLogo (16x11 i4) */
Sprite dMNPlayers1PMode_SmashLogo = {
	0, 0,
	16, 11,
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
	(Bitmap*)dMNPlayers1PMode_SmashLogo_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: OptionText */

Gfx dMNPlayers1PMode_OptionText_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionText (72x18 ia8) */
u8 dMNPlayers1PMode_OptionText_tex[] = {
    #include <MNPlayers1PMode/OptionText.ia8.inc.c>
};

Bitmap dMNPlayers1PMode_OptionText_bitmaps[] = {
	{ 72, 72, 0, 0, dMNPlayers1PMode_OptionText_tex, 18, 0 },
};

/* Sprite: OptionText (72x18 ia8) */
Sprite dMNPlayers1PMode_OptionText = {
	0, 0,
	72, 18,
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
	(Bitmap*)dMNPlayers1PMode_OptionText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Sec */

Gfx dMNPlayers1PMode_Sec_dl[] = { gsSPEndDisplayList() };

/* Texture: Sec (3(8)x4 ia8) */
u8 dMNPlayers1PMode_Sec_tex[] = {
    #include <MNPlayers1PMode/Sec.ia8.inc.c>
};

Bitmap dMNPlayers1PMode_Sec_bitmaps[] = {
	{ 3, 8, 0, 0, dMNPlayers1PMode_Sec_tex, 4, 0 },
};

/* Sprite: Sec (3x4 ia8) */
Sprite dMNPlayers1PMode_Sec = {
	0, 0,
	3, 4,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	4, 4,
	3, 1,
	(Bitmap*)dMNPlayers1PMode_Sec_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: CSec */

Gfx dMNPlayers1PMode_CSec_dl[] = { gsSPEndDisplayList() };

/* Texture: CSec (5(8)x4 ia8) */
u8 dMNPlayers1PMode_CSec_tex[] = {
    #include <MNPlayers1PMode/CSec.ia8.inc.c>
};

Bitmap dMNPlayers1PMode_CSec_bitmaps[] = {
	{ 5, 8, 0, 0, dMNPlayers1PMode_CSec_tex, 4, 0 },
};

/* Sprite: CSec (5x4 ia8) */
Sprite dMNPlayers1PMode_CSec = {
	0, 0,
	5, 4,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	4, 4,
	3, 1,
	(Bitmap*)dMNPlayers1PMode_CSec_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite RedCard */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: RedCard (82(96)x95 ci4, 5 tiles) */
u8 dMNPlayers1PMode_RedCard_tex[] = {
    #include <MNPlayers1PMode/RedCard.ci4.inc.c>
};

/* Palette: @ 0x3210 (16 colors RGBA5551) */
u16 dMNPlayers1PMode_palette_0x3210[16] = {
	#include <MNPlayers1PMode/palette_0x3210.palette.inc.c>
};

PAD(8);

/* Palette: GateCP @ 0x3238 (16 colors RGBA5551) */
u16 dMNPlayers1PMode_GateCP_palette[16] = {
	#include <MNPlayers1PMode/GateCP.palette.inc.c>
};

/* Sprite: RedCard */

/* Sprite: RedCard (82x91 ci4) */

Bitmap dMNPlayers1PMode_RedCard_bitmaps[] = {
	{ 82, 96, 0, 0, dMNPlayers1PMode_RedCard_tex, 21, 0 },
	{ 82, 96, 0, 0, dMNPlayers1PMode_RedCard_tex + 0x3F8, 21, 0 },
	{ 82, 96, 0, 0, dMNPlayers1PMode_RedCard_tex + 0x7F0, 21, 0 },
	{ 82, 96, 0, 0, dMNPlayers1PMode_RedCard_tex + 0xBE8, 21, 0 },
	{ 82, 96, 0, 0, dMNPlayers1PMode_RedCard_tex + 0xFE0, 11, 0 },
};

Sprite dMNPlayers1PMode_RedCard = {
	0, 0,
	82, 91,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNPlayers1PMode_palette_0x3210,
	0, 1,
	5, 84,
	20, 21,
	2, 0,
	(Bitmap*)dMNPlayers1PMode_RedCard_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

