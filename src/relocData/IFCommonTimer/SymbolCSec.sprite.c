/* Sprite: SymbolCSec */

Gfx dIFCommonTimer_SymbolCSec_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolCSec (9(16)x9 ia8) */
u8 dIFCommonTimer_SymbolCSec_tex[] = {
    #include <IFCommonTimer/SymbolCSec.ia8.inc.c>
};

Bitmap dIFCommonTimer_SymbolCSec_bitmaps[] = {
	{ 9, 16, 0, 0, dIFCommonTimer_SymbolCSec_tex, 9, 0 },
};

/* Sprite: SymbolCSec (9x9 ia8) */
Sprite dIFCommonTimer_SymbolCSec = {
	0, 0,
	9, 9,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	9, 9,
	3, 1,
	(Bitmap*)dIFCommonTimer_SymbolCSec_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
