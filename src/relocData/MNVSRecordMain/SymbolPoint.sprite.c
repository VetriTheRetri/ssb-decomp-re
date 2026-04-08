/* Sprite: SymbolPoint */

Gfx dMNVSRecordMain_SymbolPoint_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolPoint (2(16)x3 ia4) */
u8 dMNVSRecordMain_SymbolPoint_tex[] = {
    #include <MNVSRecordMain/SymbolPoint.ia4.inc.c>
};

Bitmap dMNVSRecordMain_SymbolPoint_bitmaps[] = {
	{ 2, 16, 0, 0, dMNVSRecordMain_SymbolPoint_tex, 3, 0 },
};

/* Sprite: SymbolPoint (2x3 ia4) */
Sprite dMNVSRecordMain_SymbolPoint = {
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
	3, 0,
	(Bitmap*)dMNVSRecordMain_SymbolPoint_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
