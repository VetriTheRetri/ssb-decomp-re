/* Sprite: SymbolCross */

Gfx dIFCommonTimer_SymbolCross_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolCross (11(16)x11 ia8) */
u8 dIFCommonTimer_SymbolCross_tex[] = {
    #include <IFCommonTimer/SymbolCross.ia8.inc.c>
};

Bitmap dIFCommonTimer_SymbolCross_bitmaps[] = {
	{ 11, 16, 0, 0, dIFCommonTimer_SymbolCross_tex, 11, 0 },
};

/* Sprite: SymbolCross (11x11 ia8) */
Sprite dIFCommonTimer_SymbolCross = {
	0, 0,
	11, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	3, 1,
	(Bitmap*)dIFCommonTimer_SymbolCross_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
