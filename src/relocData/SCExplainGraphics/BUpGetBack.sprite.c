/* Sprite: BUpGetBack */

/* Sprite: BUpGetBack (162x46 ci8) */

Bitmap dSCExplainGraphics_BUpGetBack_bitmaps[] = {
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex, 11, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex + 0x740, 11, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex + 0xE80, 11, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex + 0x15C0, 11, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex + 0x1D00, 6, 0 },
};

Sprite dSCExplainGraphics_BUpGetBack = {
	0, 0,
	162, 46,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x17D90,
	0, 1,
	5, 84,
	10, 11,
	2, 1,
	(Bitmap*)dSCExplainGraphics_BUpGetBack_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
