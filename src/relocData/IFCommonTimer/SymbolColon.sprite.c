/* Sprite: SymbolColon */

Gfx dIFCommonTimer_SymbolColon_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolColon (6(8)x16 ia8) */
u8 dIFCommonTimer_SymbolColon_tex[] = {
    #include <IFCommonTimer/SymbolColon.ia8.inc.c>
};

Bitmap dIFCommonTimer_SymbolColon_bitmaps[] = {
	{ 6, 8, 0, 0, dIFCommonTimer_SymbolColon_tex, 16, 0 },
};

/* Sprite: SymbolColon (6x16 ia8) */
Sprite dIFCommonTimer_SymbolColon = {
	0, 0,
	6, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dIFCommonTimer_SymbolColon_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
