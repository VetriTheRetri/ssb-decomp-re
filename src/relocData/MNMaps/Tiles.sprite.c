/* Sprite: Tiles */

Gfx dMNMaps_Tiles_dl[] = { gsSPEndDisplayList() };

/* Texture: Tiles (16x82 rgba16) */
u8 dMNMaps_Tiles_tex[] = {
    #include <MNMaps/Tiles.rgba16.inc.c>
};

Bitmap dMNMaps_Tiles_bitmaps[] = {
	{ 16, 16, 0, 0, dMNMaps_Tiles_tex, 82, 0 },
};

/* Sprite: Tiles (16x82 rgba16) */
Sprite dMNMaps_Tiles = {
	0, 0,
	16, 82,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	82, 82,
	0, 2,
	(Bitmap*)dMNMaps_Tiles_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
