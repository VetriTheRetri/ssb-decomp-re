/* Sprite: WoodenCircle */

/* Texture: WoodenCircle (84(96)x89 ci4, 5 tiles) */
u8 dMNMaps_WoodenCircle_tex[] = {
    #include <MNMaps/WoodenCircle.ci4.inc.c>
};

Bitmap dMNMaps_WoodenCircle_bitmaps[] = {
	{ 84, 96, 0, 0, dMNMaps_WoodenCircle_tex, 21, 0 },
	{ 84, 96, 0, 0, dMNMaps_WoodenCircle_tex + 0x3F8, 21, 0 },
	{ 84, 96, 0, 0, dMNMaps_WoodenCircle_tex + 0x7F0, 21, 0 },
	{ 84, 96, 0, 0, dMNMaps_WoodenCircle_tex + 0xBE8, 21, 0 },
	{ 84, 96, 0, 0, dMNMaps_WoodenCircle_tex + 0xFE0, 5, 0 },
};

/* Sprite: WoodenCircle (84x85 ci4) */
Sprite dMNMaps_WoodenCircle = {
	0, 0,
	84, 85,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x0E1D0DF4,
	0, 1,
	5, 84,
	20, 21,
	2, 0,
	(Bitmap*)dMNMaps_WoodenCircle_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
