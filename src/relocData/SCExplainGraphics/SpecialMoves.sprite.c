/* Sprite: SpecialMoves */

/* Sprite: SpecialMoves (168x46 ci8) */

Bitmap dSCExplainGraphics_SpecialMoves_bitmaps[] = {
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex + 0x5F0, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex + 0xBE0, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex + 0x11D0, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex + 0x17C0, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex + 0x1DB0, 6, 0 },
};

Sprite dSCExplainGraphics_SpecialMoves = {
	0, 0,
	168, 46,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1A1E0,
	0, 1,
	6, 96,
	8, 9,
	2, 1,
	(Bitmap*)dSCExplainGraphics_SpecialMoves_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
