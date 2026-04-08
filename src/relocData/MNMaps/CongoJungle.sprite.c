/* Sprite: CongoJungle */

Gfx dMNMaps_CongoJungle_dl[] = { gsSPEndDisplayList() };

/* Texture: CongoJungle (48x36 rgba16) */
u8 dMNMaps_CongoJungle_tex[] = {
    #include <MNMaps/CongoJungle.rgba16.inc.c>
};

Bitmap dMNMaps_CongoJungle_bitmaps[] = {
	{ 48, 48, 0, 0, dMNMaps_CongoJungle_tex, 36, 0 },
};

/* Sprite: CongoJungle (48x36 rgba16) */
Sprite dMNMaps_CongoJungle = {
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
	(Bitmap*)dMNMaps_CongoJungle_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
