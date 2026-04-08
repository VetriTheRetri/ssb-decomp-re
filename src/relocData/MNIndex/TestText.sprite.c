/* Sprite: TestText */

Gfx dMNIndex_TestText_dl[] = { gsSPEndDisplayList() };

/* Texture: TestText (45(48)x17 i4) */
u8 dMNIndex_TestText_tex[] = {
    #include <MNIndex/TestText.i4.inc.c>
};

Bitmap dMNIndex_TestText_bitmaps[] = {
	{ 45, 48, 0, 0, dMNIndex_TestText_tex, 17, 0 },
};

/* Sprite: TestText (45x17 i4) */
Sprite dMNIndex_TestText = {
	0, 0,
	45, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	4, 0,
	(Bitmap*)dMNIndex_TestText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
