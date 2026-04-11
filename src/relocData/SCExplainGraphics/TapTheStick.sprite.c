/* Sprite: TapTheStick */

/* Sprite: TapTheStick (264x50 ci4) */

Bitmap dSCExplainGraphics_TapTheStick_bitmaps[] = {
	{ 264, 272, 0, 0, dSCExplainGraphics_TapTheStick_tex, 14, 0 },
	{ 264, 272, 0, 0, dSCExplainGraphics_TapTheStick_tex + 0x778, 14, 0 },
	{ 264, 272, 0, 0, dSCExplainGraphics_TapTheStick_tex + 0xEF0, 14, 0 },
	{ 264, 272, 0, 0, dSCExplainGraphics_TapTheStick_tex + 0x1668, 11, 0 },
};

Sprite dSCExplainGraphics_TapTheStick = {
	0, 0,
	264, 50,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x11F00,
	0, 1,
	4, 72,
	13, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_TapTheStick_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
