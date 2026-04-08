/* Sprite: ConsoleIconDark */

Gfx dMNVSOptions_ConsoleIconDark_dl[] = { gsSPEndDisplayList() };

/* Texture: ConsoleIconDark (120(128)x115 i4, 2 tiles) */
u8 dMNVSOptions_ConsoleIconDark_tex[] = {
    #include <MNVSOptions/ConsoleIconDark.i4.inc.c>
};

Bitmap dMNVSOptions_ConsoleIconDark_bitmaps[] = {
	{ 120, 128, 0, 0, dMNVSOptions_ConsoleIconDark_tex, 64, 0 },
	{ 120, 128, 0, 0, dMNVSOptions_ConsoleIconDark_tex + 0x1008, 51, 0 },
};

/* Sprite: ConsoleIconDark (120x115 i4) */
Sprite dMNVSOptions_ConsoleIconDark = {
	0, 0,
	120, 115,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	64, 64,
	4, 0,
	(Bitmap*)dMNVSOptions_ConsoleIconDark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
