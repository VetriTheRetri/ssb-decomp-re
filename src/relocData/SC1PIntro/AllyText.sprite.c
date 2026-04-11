/* Sprite: AllyText */

Gfx dSC1PIntro_AllyText_dl[] = { gsSPEndDisplayList() };

/* Texture: AllyText (32x12 i4) */
u8 dSC1PIntro_AllyText_tex[] = {
    #include <SC1PIntro/AllyText.i4.inc.c>
};

Bitmap dSC1PIntro_AllyText_bitmaps[] = {
	{ 32, 32, 0, 0, dSC1PIntro_AllyText_tex, 12, 0 },
};

/* Sprite: AllyText (32x12 i4) */
Sprite dSC1PIntro_AllyText = {
	0, 0,
	32, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dSC1PIntro_AllyText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
