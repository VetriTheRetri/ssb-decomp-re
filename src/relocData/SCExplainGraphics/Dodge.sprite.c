/* Sprite: Dodge */

/* Sprite: Dodge (182x14 ci4) */

Bitmap dSCExplainGraphics_Dodge_bitmaps[] = {
	{ 182, 192, 0, 0, dSCExplainGraphics_Dodge_tex, 14, 0 },
};

Sprite dSCExplainGraphics_Dodge = {
	0, 0,
	182, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1A9E0,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_Dodge_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
