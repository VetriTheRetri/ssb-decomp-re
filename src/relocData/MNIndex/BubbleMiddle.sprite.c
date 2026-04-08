/* Sprite: BubbleMiddle */

Gfx dMNIndex_BubbleMiddle_dl[] = { gsSPEndDisplayList() };

/* Texture: BubbleMiddle (8(16)x27 ia4) */
u8 dMNIndex_BubbleMiddle_tex[] = {
    #include <MNIndex/BubbleMiddle.ia4.inc.c>
};

Bitmap dMNIndex_BubbleMiddle_bitmaps[] = {
	{ 8, 16, 0, 0, dMNIndex_BubbleMiddle_tex, 27, 0 },
};

/* Sprite: BubbleMiddle (8x27 ia4) */
Sprite dMNIndex_BubbleMiddle = {
	0, 0,
	8, 27,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	27, 27,
	3, 0,
	(Bitmap*)dMNIndex_BubbleMiddle_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
