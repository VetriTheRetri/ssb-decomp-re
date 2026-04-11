/* Sprite: BossMarker */

/* Sprite: BossMarker (16x16 ci4) */

Bitmap dSC1PIntro_BossMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_BossMarker_tex, 16, 0 },
};

Sprite dSC1PIntro_BossMarker = {
	0, 0,
	16, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x7E40,
	0, 1,
	1, 36,
	16, 16,
	2, 0,
	(Bitmap*)dSC1PIntro_BossMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
