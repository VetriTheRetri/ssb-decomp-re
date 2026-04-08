/* Sprite: SymbolPercent */

Gfx dMNCommonFonts_SymbolPercent_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolPercent (7(16)x5 i4) */
u8 dMNCommonFonts_SymbolPercent_tex[] = {
    #include <MNCommonFonts/SymbolPercent.i4.inc.c>
};

Bitmap dMNCommonFonts_SymbolPercent_bitmaps[] = {
	{ 7, 16, 0, 0, dMNCommonFonts_SymbolPercent_tex, 5, 0 },
};

/* Sprite: SymbolPercent (7x5 i4) */
Sprite dMNCommonFonts_SymbolPercent = {
	0, 0,
	7, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 0,
	(Bitmap*)dMNCommonFonts_SymbolPercent_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
