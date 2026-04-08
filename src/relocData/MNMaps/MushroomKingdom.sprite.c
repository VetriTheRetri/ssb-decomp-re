/* Sprite: MushroomKingdom */

Gfx dMNMaps_MushroomKingdom_dl[] = { gsSPEndDisplayList() };

/* Texture: MushroomKingdom (48x36 rgba16) */
u8 dMNMaps_MushroomKingdom_tex[] = {
    #include <MNMaps/MushroomKingdom.rgba16.inc.c>
};

Bitmap dMNMaps_MushroomKingdom_bitmaps[] = {
	{ 48, 48, 0, 0, dMNMaps_MushroomKingdom_tex, 36, 0 },
};

/* Sprite: MushroomKingdom (48x36 rgba16) */
Sprite dMNMaps_MushroomKingdom = {
	0, 0,
	48, 36,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	36, 36,
	0, 2,
	(Bitmap*)dMNMaps_MushroomKingdom_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
