/* Sprite: Banner */

/* Sprite: Banner (300x74 ci8) */

Bitmap dSCExplainGraphics_Banner_bitmaps[] = {
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x728, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0xE50, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x1578, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x1CA0, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x23C8, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x2AF0, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x3218, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x3940, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x4068, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x4790, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x4EB8, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x55E0, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x5D08, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x6430, 4, 0 },
};

Sprite dSCExplainGraphics_Banner = {
	0, 0,
	300, 74,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0xFF70,
	0, 1,
	15, 204,
	5, 6,
	2, 1,
	(Bitmap*)dSCExplainGraphics_Banner_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
