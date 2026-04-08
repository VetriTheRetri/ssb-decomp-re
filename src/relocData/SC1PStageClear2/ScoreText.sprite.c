/* Sprite: ScoreText */

Gfx dSC1PStageClear2_ScoreText_dl[] = { gsSPEndDisplayList() };

/* Texture: ScoreText (72x14 ia8) */
u8 dSC1PStageClear2_ScoreText_tex[] = {
    #include <SC1PStageClear2/ScoreText.ia8.inc.c>
};

Bitmap dSC1PStageClear2_ScoreText_bitmaps[] = {
	{ 72, 72, 0, 0, dSC1PStageClear2_ScoreText_tex, 14, 0 },
};

/* Sprite: ScoreText (72x14 ia8) */
Sprite dSC1PStageClear2_ScoreText = {
	0, 0,
	72, 14,
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
	(Bitmap*)dSC1PStageClear2_ScoreText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
