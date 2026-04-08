/* Sprite: HyruleCastleText */

Gfx dMNMaps_HyruleCastleText_dl[] = { gsSPEndDisplayList() };

/* Texture: HyruleCastleText (96x10 i4, 2 tiles) */
u8 dMNMaps_HyruleCastleText_tex[] = {
    #include <MNMaps/HyruleCastleText.i4.inc.c>
};

Bitmap dMNMaps_HyruleCastleText_bitmaps[] = {
	{ 96, 96, 0, 0, dMNMaps_HyruleCastleText_tex, 9, 0 },
	{ 96, 96, 0, 0, dMNMaps_HyruleCastleText_tex + 0x1B8, 1, 0 },
};

/* Sprite: HyruleCastleText (96x10 i4) */
Sprite dMNMaps_HyruleCastleText = {
	0, 0,
	96, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	9, 9,
	4, 0,
	(Bitmap*)dMNMaps_HyruleCastleText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
