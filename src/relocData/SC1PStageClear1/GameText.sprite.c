/* Sprite: GameText */

Gfx dSC1PStageClear1_GameText_dl[] = { gsSPEndDisplayList() };

/* Texture: GameText (95(96)x24 ia8) */
u8 dSC1PStageClear1_GameText_tex[] = {
    #include <SC1PStageClear1/GameText.ia8.inc.c>
};

Bitmap dSC1PStageClear1_GameText_bitmaps[] = {
	{ 95, 96, 0, 0, dSC1PStageClear1_GameText_tex, 24, 0 },
};

/* Sprite: GameText (95x24 ia8) */
Sprite dSC1PStageClear1_GameText = {
	0, 0,
	95, 24,
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
	(Bitmap*)dSC1PStageClear1_GameText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
