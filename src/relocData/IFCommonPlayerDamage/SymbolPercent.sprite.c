/* Sprite: SymbolPercent */

Gfx dIFCommonPlayerDamage_SymbolPercent_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolPercent (19(24)x16 ia8) */
u8 dIFCommonPlayerDamage_SymbolPercent_tex[] = {
    #include <IFCommonPlayerDamage/SymbolPercent.ia8.inc.c>
};

Bitmap dIFCommonPlayerDamage_SymbolPercent_bitmaps[] = {
	{ 19, 24, 0, 0, dIFCommonPlayerDamage_SymbolPercent_tex, 16, 0 },
};

/* Sprite: SymbolPercent (19x16 ia8) */
Sprite dIFCommonPlayerDamage_SymbolPercent = {
	0, 0,
	19, 16,
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
	(Bitmap*)dIFCommonPlayerDamage_SymbolPercent_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
