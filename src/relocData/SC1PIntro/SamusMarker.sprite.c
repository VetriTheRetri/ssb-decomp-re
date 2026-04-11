/* Sprite: SamusMarker */

/* Sprite: SamusMarker (16x24 ci4) */

Bitmap dSC1PIntro_SamusMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_SamusMarker_tex, 24, 0 },
};

Sprite dSC1PIntro_SamusMarker = {
	0, 0,
	16, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7AD0,
	0, 1,
	1, 36,
	24, 24,
	2, 0,
	(Bitmap*)dSC1PIntro_SamusMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
