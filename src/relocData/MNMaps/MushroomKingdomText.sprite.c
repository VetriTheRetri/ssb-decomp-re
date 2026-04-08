/* Sprite: MushroomKingdomText */

Gfx dMNMaps_MushroomKingdomText_dl[] = { gsSPEndDisplayList() };

/* Texture: MushroomKingdomText (96x10 i4) */
u8 dMNMaps_MushroomKingdomText_tex[] = {
    #include <MNMaps/MushroomKingdomText.i4.inc.c>
};

Bitmap dMNMaps_MushroomKingdomText_bitmaps[] = {
	{ 96, 96, 0, 0, dMNMaps_MushroomKingdomText_tex, 10, 0 },
};

/* Sprite: MushroomKingdomText (96x10 i4) */
Sprite dMNMaps_MushroomKingdomText = {
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
	(Bitmap*)dMNMaps_MushroomKingdomText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
