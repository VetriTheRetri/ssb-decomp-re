/* Sprite: StageText */

Gfx dSC1PStageClear1_StageText_dl[] = { gsSPEndDisplayList() };

/* Texture: StageText (103(104)x24 ia8) */
u8 dSC1PStageClear1_StageText_tex[] = {
    #include <SC1PStageClear1/StageText.ia8.inc.c>
};

Bitmap dSC1PStageClear1_StageText_bitmaps[] = {
	{ 103, 104, 0, 0, dSC1PStageClear1_StageText_tex, 24, 0 },
};

/* Sprite: StageText (103x24 ia8) */
Sprite dSC1PStageClear1_StageText = {
	0, 0,
	103, 24,
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
	(Bitmap*)dSC1PStageClear1_StageText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
