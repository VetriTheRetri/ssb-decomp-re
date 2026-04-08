/* Sprite: BonusPageArrow */

Gfx dSC1PStageClear1_BonusPageArrow_dl[] = { gsSPEndDisplayList() };

/* Texture: BonusPageArrow (11(12)x7 rgba32) */
u8 dSC1PStageClear1_BonusPageArrow_tex[] = {
    #include <SC1PStageClear1/BonusPageArrow.rgba32.inc.c>
};

Bitmap dSC1PStageClear1_BonusPageArrow_bitmaps[] = {
	{ 11, 12, 0, 0, dSC1PStageClear1_BonusPageArrow_tex, 7, 0 },
};

/* Sprite: BonusPageArrow (11x7 rgba32) */
Sprite dSC1PStageClear1_BonusPageArrow = {
	0, 0,
	11, 7,
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
	0, 3,
	(Bitmap*)dSC1PStageClear1_BonusPageArrow_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
