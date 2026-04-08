/* Sprite: BonusText */

Gfx dSC1PStageClear1_BonusText_dl[] = { gsSPEndDisplayList() };

/* Texture: BonusText (80x7 i4) */
u8 dSC1PStageClear1_BonusText_tex[] = {
    #include <SC1PStageClear1/BonusText.i4.inc.c>
};

Bitmap dSC1PStageClear1_BonusText_bitmaps[] = {
	{ 80, 80, 0, 0, dSC1PStageClear1_BonusText_tex, 7, 0 },
};

/* Sprite: BonusText (80x7 i4) */
Sprite dSC1PStageClear1_BonusText = {
	0, 0,
	80, 7,
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
	4, 0,
	(Bitmap*)dSC1PStageClear1_BonusText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
