/* Sprite: Gradient */

Gfx dMNTitle_Gradient_dl[] = { gsSPEndDisplayList() };

/* Texture: Gradient (300(304)x80 i4, 7 tiles) */
u8 dMNTitle_Gradient_tex[] = {
    #include <MNTitle/Gradient.i4.inc.c>
};

Bitmap dMNTitle_Gradient_bitmaps[] = {
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex + 0x728, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex + 0xE50, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex + 0x1578, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex + 0x1CA0, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex + 0x23C8, 12, 0 },
	{ 300, 304, 0, 0, dMNTitle_Gradient_tex + 0x2AF0, 8, 0 },
};

/* Sprite: Gradient (300x80 i4) */
Sprite dMNTitle_Gradient = {
	0, 0,
	300, 80,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	7, 108,
	12, 12,
	4, 0,
	(Bitmap*)dMNTitle_Gradient_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
