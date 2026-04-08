/* Sprite: SymbolPeriod */

Gfx dIFCommonAnnounceCommon_SymbolPeriod_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolPeriod (8x11 ia8) */
u8 dIFCommonAnnounceCommon_SymbolPeriod_tex[] = {
    #include <IFCommonAnnounceCommon/SymbolPeriod.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_SymbolPeriod_bitmaps[] = {
	{ 8, 8, 0, 0, dIFCommonAnnounceCommon_SymbolPeriod_tex, 11, 0 },
};

/* Sprite: SymbolPeriod (8x11 ia8) */
Sprite dIFCommonAnnounceCommon_SymbolPeriod = {
	0, 0,
	8, 11,
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
	(Bitmap*)dIFCommonAnnounceCommon_SymbolPeriod_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
