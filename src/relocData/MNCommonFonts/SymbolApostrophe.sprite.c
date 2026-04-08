/* Sprite: SymbolApostrophe */

Gfx dMNCommonFonts_SymbolApostrophe_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolApostrophe (2(16)x3 i4) */
u8 dMNCommonFonts_SymbolApostrophe_tex[] = {
    #include <MNCommonFonts/SymbolApostrophe.i4.inc.c>
};

Bitmap dMNCommonFonts_SymbolApostrophe_bitmaps[] = {
	{ 2, 16, 0, 0, dMNCommonFonts_SymbolApostrophe_tex, 3, 0 },
};

/* Sprite: SymbolApostrophe (2x3 i4) */
Sprite dMNCommonFonts_SymbolApostrophe = {
	0, 0,
	2, 3,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	3, 3,
	4, 0,
	(Bitmap*)dMNCommonFonts_SymbolApostrophe_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
