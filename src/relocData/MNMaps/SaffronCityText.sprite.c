/* Sprite: SaffronCityText */

Gfx dMNMaps_SaffronCityText_dl[] = { gsSPEndDisplayList() };

/* Texture: SaffronCityText (96x10 i4) */
u8 dMNMaps_SaffronCityText_tex[] = {
    #include <MNMaps/SaffronCityText.i4.inc.c>
};

Bitmap dMNMaps_SaffronCityText_bitmaps[] = {
	{ 96, 96, 0, 0, dMNMaps_SaffronCityText_tex, 10, 0 },
};

/* Sprite: SaffronCityText (96x10 i4) */
Sprite dMNMaps_SaffronCityText = {
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
	(Bitmap*)dMNMaps_SaffronCityText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
