/* Sprite: ConsoleIconDark */

Gfx dMNVSMode_ConsoleIconDark_dl[] = { gsSPEndDisplayList() };

/* Texture: ConsoleIconDark (144x135 i4, 3 tiles) */
u8 dMNVSMode_ConsoleIconDark_tex[] = {
    #include <MNVSMode/ConsoleIconDark.i4.inc.c>
};

Bitmap dMNVSMode_ConsoleIconDark_bitmaps[] = {
	{ 144, 144, 0, 0, dMNVSMode_ConsoleIconDark_tex, 56, 0 },
	{ 144, 144, 0, 0, dMNVSMode_ConsoleIconDark_tex + 0xFC8, 56, 0 },
	{ 144, 144, 0, 0, dMNVSMode_ConsoleIconDark_tex + 0x1F90, 23, 0 },
};

/* Sprite: ConsoleIconDark (144x133 i4) */
Sprite dMNVSMode_ConsoleIconDark = {
	0, 0,
	144, 133,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	3, 60,
	55, 56,
	4, 0,
	(Bitmap*)dMNVSMode_ConsoleIconDark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
