/* Sprite: Copyright */

Gfx dMNTitle_Copyright_dl[] = { gsSPEndDisplayList() };

/* Texture: Copyright (300(304)x47 ia8, 4 tiles) */
u8 dMNTitle_Copyright_tex[] = {
    #include <MNTitle/Copyright.ia8.inc.c>
};

Bitmap dMNTitle_Copyright_bitmaps[] = {
	{ 300, 304, 0, 0, dMNTitle_Copyright_tex, 13, 0 },
	{ 300, 304, 0, 0, dMNTitle_Copyright_tex + 0xF78, 13, 0 },
	{ 300, 304, 0, 0, dMNTitle_Copyright_tex + 0x1EF0, 13, 0 },
	{ 300, 304, 0, 0, dMNTitle_Copyright_tex + 0x2E68, 8, 0 },
};

/* Sprite: Copyright (300x44 ia8) */
Sprite dMNTitle_Copyright = {
	0, 0,
	300, 44,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	4, 72,
	12, 13,
	3, 1,
	(Bitmap*)dMNTitle_Copyright_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
