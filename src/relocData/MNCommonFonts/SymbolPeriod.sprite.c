/* Sprite: SymbolPeriod */

Gfx dMNCommonFonts_SymbolPeriod_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolPeriod (3(16)x1 i4) */
u8 dMNCommonFonts_SymbolPeriod_tex[] = {
    #include <MNCommonFonts/SymbolPeriod.i4.inc.c>
};

Bitmap dMNCommonFonts_SymbolPeriod_bitmaps[] = {
	{ 3, 16, 0, 0, dMNCommonFonts_SymbolPeriod_tex, 1, 0 },
};

/* Sprite: SymbolPeriod (3x1 i4) */
Sprite dMNCommonFonts_SymbolPeriod = {
	0, 0,
	3, 1,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	1, 1,
	4, 0,
	(Bitmap*)dMNCommonFonts_SymbolPeriod_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
