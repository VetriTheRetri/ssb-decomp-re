/* Sprite: MinText */

Gfx dMNVSMode_MinText_dl[] = { gsSPEndDisplayList() };

/* Texture: MinText (23(32)x10 i4) */
u8 dMNVSMode_MinText_tex[] = {
    #include <MNVSMode/MinText.i4.inc.c>
};

Bitmap dMNVSMode_MinText_bitmaps[] = {
	{ 23, 32, 0, 0, dMNVSMode_MinText_tex, 10, 0 },
};

/* Sprite: MinText (23x10 i4) */
Sprite dMNVSMode_MinText = {
	0, 0,
	23, 10,
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
	(Bitmap*)dMNVSMode_MinText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
