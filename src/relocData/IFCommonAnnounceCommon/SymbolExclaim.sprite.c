/* Sprite: SymbolExclaim */

Gfx dIFCommonAnnounceCommon_SymbolExclaim_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolExclaim (10(16)x37 ia8) */
u8 dIFCommonAnnounceCommon_SymbolExclaim_tex[] = {
    #include <IFCommonAnnounceCommon/SymbolExclaim.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_SymbolExclaim_bitmaps[] = {
	{ 10, 16, 0, 0, dIFCommonAnnounceCommon_SymbolExclaim_tex, 37, 0 },
};

/* Sprite: SymbolExclaim (10x37 ia8) */
Sprite dIFCommonAnnounceCommon_SymbolExclaim = {
	0, 0,
	10, 37,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	37, 37,
	3, 1,
	(Bitmap*)dIFCommonAnnounceCommon_SymbolExclaim_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
