/* Sprite: YoshiMarker */

/* Sprite: YoshiMarker (16x24 ci4) */

Bitmap dSC1PIntro_YoshiMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_YoshiMarker_tex, 24, 0 },
};

Sprite dSC1PIntro_YoshiMarker = {
	0, 0,
	16, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x72F0,
	0, 1,
	1, 36,
	24, 24,
	2, 0,
	(Bitmap*)dSC1PIntro_YoshiMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
