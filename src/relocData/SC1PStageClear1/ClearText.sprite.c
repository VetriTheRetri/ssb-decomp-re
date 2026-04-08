/* Sprite: ClearText */

Gfx dSC1PStageClear1_ClearText_dl[] = { gsSPEndDisplayList() };

/* Texture: ClearText (101(104)x24 ia8) */
u8 dSC1PStageClear1_ClearText_tex[] = {
    #include <SC1PStageClear1/ClearText.ia8.inc.c>
};

Bitmap dSC1PStageClear1_ClearText_bitmaps[] = {
	{ 101, 104, 0, 0, dSC1PStageClear1_ClearText_tex, 24, 0 },
};

/* Sprite: ClearText (101x24 ia8) */
Sprite dSC1PStageClear1_ClearText = {
	0, 0,
	101, 24,
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
	(Bitmap*)dSC1PStageClear1_ClearText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
