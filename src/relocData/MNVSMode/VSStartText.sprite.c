/* Sprite: VSStartText */

Gfx dMNVSMode_VSStartText_dl[] = { gsSPEndDisplayList() };

/* Texture: VSStartText (101(112)x18 i4) */
u8 dMNVSMode_VSStartText_tex[] = {
    #include <MNVSMode/VSStartText.i4.inc.c>
};

Bitmap dMNVSMode_VSStartText_bitmaps[] = {
	{ 101, 112, 0, 0, dMNVSMode_VSStartText_tex, 18, 0 },
};

/* Sprite: VSStartText (101x18 i4) */
Sprite dMNVSMode_VSStartText = {
	0, 0,
	101, 18,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	18, 18,
	4, 0,
	(Bitmap*)dMNVSMode_VSStartText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
