/* Sprite: DamageText */

Gfx dSC1PStageClear1_DamageText_dl[] = { gsSPEndDisplayList() };

/* Texture: DamageText (64x20 ia8) */
u8 dSC1PStageClear1_DamageText_tex[] = {
    #include <SC1PStageClear1/DamageText.ia8.inc.c>
};

Bitmap dSC1PStageClear1_DamageText_bitmaps[] = {
	{ 64, 64, 0, 0, dSC1PStageClear1_DamageText_tex, 20, 0 },
};

/* Sprite: DamageText (64x20 ia8) */
Sprite dSC1PStageClear1_DamageText = {
	0, 0,
	64, 20,
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
	3, 1,
	(Bitmap*)dSC1PStageClear1_DamageText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
