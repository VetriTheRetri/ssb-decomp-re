/* Sprite: ConsoleIconDark */

Gfx dMNMain_ConsoleIconDark_dl[] = { gsSPEndDisplayList() };

/* Texture: ConsoleIconDark (51(64)x51 i4) */
u8 dMNMain_ConsoleIconDark_tex[] = {
    #include <MNMain/ConsoleIconDark.i4.inc.c>
};

Bitmap dMNMain_ConsoleIconDark_bitmaps[] = {
	{ 51, 64, 0, 0, dMNMain_ConsoleIconDark_tex, 51, 0 },
};

/* Sprite: ConsoleIconDark (51x51 i4) */
Sprite dMNMain_ConsoleIconDark = {
	0, 0,
	51, 51,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	51, 51,
	4, 0,
	(Bitmap*)dMNMain_ConsoleIconDark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
