/* Sprite: VSOptionsText */

Gfx dMNVSMode_VSOptionsText_dl[] = { gsSPEndDisplayList() };

/* Texture: VSOptionsText (128x22 i4) */
u8 dMNVSMode_VSOptionsText_tex[] = {
    #include <MNVSMode/VSOptionsText.i4.inc.c>
};

Bitmap dMNVSMode_VSOptionsText_bitmaps[] = {
	{ 128, 128, 0, 0, dMNVSMode_VSOptionsText_tex, 22, 0 },
};

/* Sprite: VSOptionsText (128x22 i4) */
Sprite dMNVSMode_VSOptionsText = {
	0, 0,
	128, 22,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	22, 22,
	4, 0,
	(Bitmap*)dMNVSMode_VSOptionsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
