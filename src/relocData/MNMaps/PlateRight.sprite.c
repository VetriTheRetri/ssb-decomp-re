/* Sprite: PlateRight */

Gfx dMNMaps_PlateRight_dl[] = { gsSPEndDisplayList() };

/* Texture: PlateRight (24x20 rgba16) */
u8 dMNMaps_PlateRight_tex[] = {
    #include <MNMaps/PlateRight.rgba16.inc.c>
};

Bitmap dMNMaps_PlateRight_bitmaps[] = {
	{ 24, 24, 0, 0, dMNMaps_PlateRight_tex, 20, 0 },
};

/* Sprite: PlateRight (24x20 rgba16) */
Sprite dMNMaps_PlateRight = {
	0, 0,
	24, 20,
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
	(Bitmap*)dMNMaps_PlateRight_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
