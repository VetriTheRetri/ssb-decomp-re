/* Sprite: PeachsCastle */

Gfx dMNMaps_PeachsCastle_dl[] = { gsSPEndDisplayList() };

/* Texture: PeachsCastle (48x36 rgba16) */
u8 dMNMaps_PeachsCastle_tex[] = {
    #include <MNMaps/PeachsCastle.rgba16.inc.c>
};

Bitmap dMNMaps_PeachsCastle_bitmaps[] = {
	{ 48, 48, 0, 0, dMNMaps_PeachsCastle_tex, 36, 0 },
};

/* Sprite: PeachsCastle (48x36 rgba16) */
Sprite dMNMaps_PeachsCastle = {
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
	(Bitmap*)dMNMaps_PeachsCastle_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
