/* Sprite: SymbolUnderscore */

Gfx dIFCommonTimer_SymbolUnderscore_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolUnderscore (11(16)x3 ia4) */
u8 dIFCommonTimer_SymbolUnderscore_tex[] = {
    #include <IFCommonTimer/SymbolUnderscore.ia4.inc.c>
};

Bitmap dIFCommonTimer_SymbolUnderscore_bitmaps[] = {
	{ 11, 16, 0, 0, dIFCommonTimer_SymbolUnderscore_tex, 3, 0 },
};

/* Sprite: SymbolUnderscore (11x3 ia4) */
Sprite dIFCommonTimer_SymbolUnderscore = {
	0, 0,
	11, 3,
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
	3, 0,
	(Bitmap*)dIFCommonTimer_SymbolUnderscore_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
