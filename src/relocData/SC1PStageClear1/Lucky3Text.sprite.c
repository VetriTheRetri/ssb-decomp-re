/* Sprite: Lucky3Text */

Gfx dSC1PStageClear1_Lucky3Text_dl[] = { gsSPEndDisplayList() };

/* Texture: Lucky3Text (86(96)x8 i4) */
u8 dSC1PStageClear1_Lucky3Text_tex[] = {
    #include <SC1PStageClear1/Lucky3Text.i4.inc.c>
};

Bitmap dSC1PStageClear1_Lucky3Text_bitmaps[] = {
	{ 86, 96, 0, 0, dSC1PStageClear1_Lucky3Text_tex, 8, 0 },
};

/* Sprite: Lucky3Text (86x8 i4) */
Sprite dSC1PStageClear1_Lucky3Text = {
	0, 0,
	86, 8,
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
	(Bitmap*)dSC1PStageClear1_Lucky3Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
