/* Sprite: BubbleLeft */

Gfx dMNIndex_BubbleLeft_dl[] = { gsSPEndDisplayList() };

/* Texture: BubbleLeft (16x27 ia4) */
u8 dMNIndex_BubbleLeft_tex[] = {
    #include <MNIndex/BubbleLeft.ia4.inc.c>
};

Bitmap dMNIndex_BubbleLeft_bitmaps[] = {
	{ 16, 16, 0, 0, dMNIndex_BubbleLeft_tex, 27, 0 },
};

/* Sprite: BubbleLeft (16x27 ia4) */
Sprite dMNIndex_BubbleLeft = {
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
	(Bitmap*)dMNIndex_BubbleLeft_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
