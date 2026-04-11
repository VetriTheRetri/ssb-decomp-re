/* Sprite: SamusAranText */

Gfx dSC1PIntro_SamusAranText_dl[] = { gsSPEndDisplayList() };

/* Texture: SamusAranText (76(80)x12 i4) */
u8 dSC1PIntro_SamusAranText_tex[] = {
    #include <SC1PIntro/SamusAranText.i4.inc.c>
};

Bitmap dSC1PIntro_SamusAranText_bitmaps[] = {
	{ 76, 80, 0, 0, dSC1PIntro_SamusAranText_tex, 12, 0 },
};

/* Sprite: SamusAranText (76x12 i4) */
Sprite dSC1PIntro_SamusAranText = {
	0, 0,
	76, 12,
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
	(Bitmap*)dSC1PIntro_SamusAranText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
