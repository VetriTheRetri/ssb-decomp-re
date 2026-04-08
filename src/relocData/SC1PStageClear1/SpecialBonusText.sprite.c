/* Sprite: SpecialBonusText */

Gfx dSC1PStageClear1_SpecialBonusText_dl[] = { gsSPEndDisplayList() };

/* Texture: SpecialBonusText (136x5 ia8) */
u8 dSC1PStageClear1_SpecialBonusText_tex[] = {
    #include <SC1PStageClear1/SpecialBonusText.ia8.inc.c>
};

Bitmap dSC1PStageClear1_SpecialBonusText_bitmaps[] = {
	{ 136, 136, 0, 0, dSC1PStageClear1_SpecialBonusText_tex, 5, 0 },
};

/* Sprite: SpecialBonusText (136x5 ia8) */
Sprite dSC1PStageClear1_SpecialBonusText = {
	0, 0,
	136, 5,
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
	3, 1,
	(Bitmap*)dSC1PStageClear1_SpecialBonusText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
