/* Sprite: StockSelector */

Gfx dMNPlayersCommon_StockSelector_dl[] = { gsSPEndDisplayList() };

/* Texture: StockSelector (90(92)x13 rgba16) */
u8 dMNPlayersCommon_StockSelector_tex[] = {
    #include <MNPlayersCommon/StockSelector.rgba16.inc.c>
};

Bitmap dMNPlayersCommon_StockSelector_bitmaps[] = {
	{ 90, 92, 0, 0, dMNPlayersCommon_StockSelector_tex, 13, 0 },
};

/* Sprite: StockSelector (90x13 rgba16) */
Sprite dMNPlayersCommon_StockSelector = {
	0, 0,
	90, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	0, 2,
	(Bitmap*)dMNPlayersCommon_StockSelector_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
