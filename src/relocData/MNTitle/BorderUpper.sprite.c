/* Sprite: BorderUpper */

Gfx dMNTitle_BorderUpper_dl[] = { gsSPEndDisplayList() };

/* Texture: BorderUpper (300(304)x10 i4) */
u8 dMNTitle_BorderUpper_tex[] = {
    #include <MNTitle/BorderUpper.i4.inc.c>
};

Bitmap dMNTitle_BorderUpper_bitmaps[] = {
	{ 300, 304, 0, 0, dMNTitle_BorderUpper_tex, 10, 0 },
};

/* Sprite: BorderUpper (300x10 i4) */
Sprite dMNTitle_BorderUpper = {
	0, 0,
	300, 10,
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
	(Bitmap*)dMNTitle_BorderUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
