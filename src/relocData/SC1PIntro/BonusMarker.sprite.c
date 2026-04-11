/* Sprite: BonusMarker */

/* Sprite: BonusMarker (8x8 ci4) */

Bitmap dSC1PIntro_BonusMarker_bitmaps[] = {
	{ 8, 16, 0, 0, dSC1PIntro_BonusMarker_tex, 8, 0 },
};

Sprite dSC1PIntro_BonusMarker = {
	0, 0,
	8, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7F10,
	0, 1,
	1, 36,
	8, 8,
	2, 0,
	(Bitmap*)dSC1PIntro_BonusMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
