/* Sprite: VSText */

Gfx dMNVSMode_VSText_dl[] = { gsSPEndDisplayList() };

/* Texture: VSText (32x32 i4) */
u8 dMNVSMode_VSText_tex[] = {
    #include <MNVSMode/VSText.i4.inc.c>
};

Bitmap dMNVSMode_VSText_bitmaps[] = {
	{ 32, 32, 0, 0, dMNVSMode_VSText_tex, 32, 0 },
};

/* Sprite: VSText (32x32 i4) */
Sprite dMNVSMode_VSText = {
	0, 0,
	32, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dMNVSMode_VSText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
