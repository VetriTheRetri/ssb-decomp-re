/* Sprite: TextShadow */

Gfx dSC1PStageClear1_TextShadow_dl[] = { gsSPEndDisplayList() };

/* Texture: TextShadow (256x26 i4) */
u8 dSC1PStageClear1_TextShadow_tex[] = {
    #include <SC1PStageClear1/TextShadow.i4.inc.c>
};

Bitmap dSC1PStageClear1_TextShadow_bitmaps[] = {
	{ 256, 256, 0, 0, dSC1PStageClear1_TextShadow_tex, 26, 0 },
};

/* Sprite: TextShadow (256x26 i4) */
Sprite dSC1PStageClear1_TextShadow = {
	0, 0,
	256, 26,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	26, 26,
	4, 0,
	(Bitmap*)dSC1PStageClear1_TextShadow_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
