/* Sprite: PeachsCastleText */

Gfx dMNMaps_PeachsCastleText_dl[] = { gsSPEndDisplayList() };

/* Texture: PeachsCastleText (96x10 i4) */
u8 dMNMaps_PeachsCastleText_tex[] = {
    #include <MNMaps/PeachsCastleText.i4.inc.c>
};

Bitmap dMNMaps_PeachsCastleText_bitmaps[] = {
	{ 96, 96, 0, 0, dMNMaps_PeachsCastleText_tex, 10, 0 },
};

/* Sprite: PeachsCastleText (96x10 i4) */
Sprite dMNMaps_PeachsCastleText = {
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
	1, 36,
	10, 10,
	4, 0,
	(Bitmap*)dMNMaps_PeachsCastleText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
