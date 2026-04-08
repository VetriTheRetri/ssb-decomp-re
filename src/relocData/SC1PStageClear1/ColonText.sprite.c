/* Sprite: ColonText */

Gfx dSC1PStageClear1_ColonText_dl[] = { gsSPEndDisplayList() };

/* Texture: ColonText (5(8)x11 ia8) */
u8 dSC1PStageClear1_ColonText_tex[] = {
    #include <SC1PStageClear1/ColonText.ia8.inc.c>
};

Bitmap dSC1PStageClear1_ColonText_bitmaps[] = {
	{ 5, 8, 0, 0, dSC1PStageClear1_ColonText_tex, 11, 0 },
};

/* Sprite: ColonText (5x11 ia8) */
Sprite dSC1PStageClear1_ColonText = {
	0, 0,
	5, 11,
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
	(Bitmap*)dSC1PStageClear1_ColonText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
