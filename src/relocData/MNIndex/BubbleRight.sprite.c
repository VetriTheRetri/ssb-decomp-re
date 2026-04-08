/* Sprite: BubbleRight */

Gfx dMNIndex_BubbleRight_dl[] = { gsSPEndDisplayList() };

/* Texture: BubbleRight (16x27 ia4) */
u8 dMNIndex_BubbleRight_tex[] = {
    #include <MNIndex/BubbleRight.ia4.inc.c>
};

Bitmap dMNIndex_BubbleRight_bitmaps[] = {
	{ 16, 16, 0, 0, dMNIndex_BubbleRight_tex, 27, 0 },
};

/* Sprite: BubbleRight (16x27 ia4) */
Sprite dMNIndex_BubbleRight = {
	0, 0,
	16, 27,
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
	(Bitmap*)dMNIndex_BubbleRight_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
