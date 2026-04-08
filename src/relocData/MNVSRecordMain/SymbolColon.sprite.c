/* Sprite: SymbolColon */

Gfx dMNVSRecordMain_SymbolColon_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolColon (2(16)x7 ia4) */
u8 dMNVSRecordMain_SymbolColon_tex[] = {
    #include <MNVSRecordMain/SymbolColon.ia4.inc.c>
};

Bitmap dMNVSRecordMain_SymbolColon_bitmaps[] = {
	{ 2, 16, 0, 0, dMNVSRecordMain_SymbolColon_tex, 7, 0 },
};

/* Sprite: SymbolColon (2x7 ia4) */
Sprite dMNVSRecordMain_SymbolColon = {
	0, 0,
	2, 7,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	7, 7,
	3, 0,
	(Bitmap*)dMNVSRecordMain_SymbolColon_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
