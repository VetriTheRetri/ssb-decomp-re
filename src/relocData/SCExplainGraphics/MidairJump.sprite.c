/* Sprite: MidairJump */

/* Sprite: MidairJump (156x32 ci4) */

Bitmap dSCExplainGraphics_MidairJump_bitmaps[] = {
	{ 156, 160, 0, 0, dSCExplainGraphics_MidairJump_tex, 25, 0 },
	{ 156, 160, 0, 0, dSCExplainGraphics_MidairJump_tex + 0x7D8, 8, 0 },
};

Sprite dSCExplainGraphics_MidairJump = {
	0, 0,
	156, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x13618,
	0, 1,
	2, 48,
	24, 25,
	2, 0,
	(Bitmap*)dSCExplainGraphics_MidairJump_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
