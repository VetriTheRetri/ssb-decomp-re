/* Sprite: IndexText */

Gfx dMNIndex_IndexText_dl[] = { gsSPEndDisplayList() };

/* Texture: IndexText (72(80)x67 i4) */
u8 dMNIndex_IndexText_tex[] = {
    #include <MNIndex/IndexText.i4.inc.c>
};

Bitmap dMNIndex_IndexText_bitmaps[] = {
	{ 72, 80, 0, 0, dMNIndex_IndexText_tex, 67, 0 },
};

/* Sprite: IndexText (72x67 i4) */
Sprite dMNIndex_IndexText = {
	0, 0,
	72, 67,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	67, 67,
	4, 0,
	(Bitmap*)dMNIndex_IndexText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
