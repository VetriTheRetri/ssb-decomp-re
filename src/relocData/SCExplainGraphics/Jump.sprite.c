/* Sprite: Jump */

/* Sprite: Jump (170x32 ci4) */

Bitmap dSCExplainGraphics_Jump_bitmaps[] = {
	{ 170, 176, 0, 0, dSCExplainGraphics_Jump_tex, 23, 0 },
	{ 170, 176, 0, 0, dSCExplainGraphics_Jump_tex + 0x7F0, 10, 0 },
};

Sprite dSCExplainGraphics_Jump = {
	0, 0,
	170, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x12B20,
	0, 1,
	2, 48,
	22, 23,
	2, 0,
	(Bitmap*)dSCExplainGraphics_Jump_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
