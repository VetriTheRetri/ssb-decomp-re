/* Sprite: LinkMarker */

/* Sprite: LinkMarker (16x24 ci4) */

Bitmap dSC1PIntro_LinkMarker_bitmaps[] = {
	{ 16, 16, 0, 0, dSC1PIntro_LinkMarker_tex, 24, 0 },
};

Sprite dSC1PIntro_LinkMarker = {
	0, 0,
	16, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSC1PIntro_palette_0x71A0,
	0, 1,
	1, 36,
	24, 24,
	2, 0,
	(Bitmap*)dSC1PIntro_LinkMarker_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
