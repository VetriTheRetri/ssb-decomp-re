/* Sprite: ResultText */

Gfx dSC1PStageClear1_ResultText_dl[] = { gsSPEndDisplayList() };

/* Texture: ResultText (112x24 ia8) */
u8 dSC1PStageClear1_ResultText_tex[] = {
    #include <SC1PStageClear1/ResultText.ia8.inc.c>
};

Bitmap dSC1PStageClear1_ResultText_bitmaps[] = {
	{ 112, 112, 0, 0, dSC1PStageClear1_ResultText_tex, 24, 0 },
};

/* Sprite: ResultText (112x24 ia8) */
Sprite dSC1PStageClear1_ResultText = {
	0, 0,
	112, 24,
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
	3, 1,
	(Bitmap*)dSC1PStageClear1_ResultText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
