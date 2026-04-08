/* Sprite: SymbolSlash */

Gfx dMNVSRecordMain_SymbolSlash_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolSlash (3(16)x5 i4) */
u8 dMNVSRecordMain_SymbolSlash_tex[] = {
    #include <MNVSRecordMain/SymbolSlash.i4.inc.c>
};

Bitmap dMNVSRecordMain_SymbolSlash_bitmaps[] = {
	{ 3, 16, 0, 0, dMNVSRecordMain_SymbolSlash_tex, 5, 0 },
};

/* Sprite: SymbolSlash (3x5 i4) */
Sprite dMNVSRecordMain_SymbolSlash = {
	0, 0,
	3, 5,
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
	(Bitmap*)dMNVSRecordMain_SymbolSlash_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
