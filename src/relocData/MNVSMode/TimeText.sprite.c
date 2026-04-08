/* Sprite: TimeText */

Gfx dMNVSMode_TimeText_dl[] = { gsSPEndDisplayList() };

/* Texture: TimeText (38(48)x13 i4) */
u8 dMNVSMode_TimeText_tex[] = {
    #include <MNVSMode/TimeText.i4.inc.c>
};

Bitmap dMNVSMode_TimeText_bitmaps[] = {
	{ 38, 48, 0, 0, dMNVSMode_TimeText_tex, 13, 0 },
};

/* Sprite: TimeText (38x13 i4) */
Sprite dMNVSMode_TimeText = {
	0, 0,
	38, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 0,
	(Bitmap*)dMNVSMode_TimeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
