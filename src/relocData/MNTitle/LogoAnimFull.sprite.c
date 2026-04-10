/* Sprite: LogoAnimFull */

Gfx dMNTitle_LogoAnimFull_dl[] = { gsSPEndDisplayList() };

/* Texture: LogoAnimFull (128x127 i4, 4 tiles) */
u8 dMNTitle_LogoAnimFull_tex[] = {
    #include <MNTitle/LogoAnimFull.i4.inc.c>
};

Bitmap dMNTitle_LogoAnimFull_bitmaps[] = {
	{ 128, 128, 0, 0, dMNTitle_LogoAnimFull_tex, 32, 0 },
	{ 128, 128, 0, 0, dMNTitle_LogoAnimFull_tex + 0x808, 32, 0 },
	{ 128, 128, 0, 0, dMNTitle_LogoAnimFull_tex + 0x1010, 32, 0 },
	{ 128, 128, 0, 0, dMNTitle_LogoAnimFull_tex + 0x1818, 31, 0 },
};

/* Sprite: LogoAnimFull (128x124 i4) */
Sprite dMNTitle_LogoAnimFull = {
	0, 0,
	128, 124,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	4, 72,
	31, 32,
	4, 0,
	(Bitmap*)dMNTitle_LogoAnimFull_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
