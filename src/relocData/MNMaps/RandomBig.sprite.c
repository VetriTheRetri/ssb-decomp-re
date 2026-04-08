/* Sprite: RandomBig */

/* Texture: RandomBig (110(112)x84 ci4, 3 tiles) */
u8 dMNMaps_RandomBig_tex[] = {
    #include <MNMaps/RandomBig.ci4.inc.c>
};

Bitmap dMNMaps_RandomBig_bitmaps[] = {
	{ 110, 112, 0, 0, dMNMaps_RandomBig_tex, 36, 0 },
	{ 110, 112, 0, 0, dMNMaps_RandomBig_tex + 0x7E8, 36, 0 },
	{ 110, 112, 0, 0, dMNMaps_RandomBig_tex + 0xFD0, 12, 0 },
};

/* Sprite: RandomBig (110x82 ci4) */
Sprite dMNMaps_RandomBig = {
	0, 0,
	110, 82,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x37993778,
	0, 1,
	3, 60,
	35, 36,
	2, 0,
	(Bitmap*)dMNMaps_RandomBig_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
