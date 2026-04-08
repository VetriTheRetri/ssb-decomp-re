/* Sprite: PlateLeft */

Gfx dMNMaps_PlateLeft_dl[] = { gsSPEndDisplayList() };

/* Texture: PlateLeft (12x20 rgba16) */
u8 dMNMaps_PlateLeft_tex[] = {
    #include <MNMaps/PlateLeft.rgba16.inc.c>
};

Bitmap dMNMaps_PlateLeft_bitmaps[] = {
	{ 12, 12, 0, 0, dMNMaps_PlateLeft_tex, 20, 0 },
};

/* Sprite: PlateLeft (12x20 rgba16) */
Sprite dMNMaps_PlateLeft = {
	0, 0,
	12, 20,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	20, 20,
	0, 2,
	(Bitmap*)dMNMaps_PlateLeft_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
