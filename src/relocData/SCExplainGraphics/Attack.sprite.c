/* Sprite: Attack */

/* Sprite: Attack (100x14 ci4) */

Bitmap dSCExplainGraphics_Attack_bitmaps[] = {
	{ 100, 112, 0, 0, dSCExplainGraphics_Attack_tex, 14, 0 },
};

Sprite dSCExplainGraphics_Attack = {
	0, 0,
	100, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x139C0,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_Attack_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
