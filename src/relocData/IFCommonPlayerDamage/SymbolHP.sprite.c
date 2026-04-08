/* Sprite: SymbolHP */

Gfx dIFCommonPlayerDamage_SymbolHP_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolHP (20(24)x12 ia8) */
u8 dIFCommonPlayerDamage_SymbolHP_tex[] = {
    #include <IFCommonPlayerDamage/SymbolHP.ia8.inc.c>
};

Bitmap dIFCommonPlayerDamage_SymbolHP_bitmaps[] = {
	{ 20, 24, 0, 0, dIFCommonPlayerDamage_SymbolHP_tex, 12, 0 },
};

/* Sprite: SymbolHP (20x12 ia8) */
Sprite dIFCommonPlayerDamage_SymbolHP = {
	0, 0,
	20, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	3, 1,
	(Bitmap*)dIFCommonPlayerDamage_SymbolHP_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
