/* Sprite: 1PModeText */

Gfx dMNMain_1PModeText_dl[] = { gsSPEndDisplayList() };

/* Texture: 1PModeText (72(80)x13 i4) */
u8 dMNMain_1PModeText_tex[] = {
    #include <MNMain/1PModeText.i4.inc.c>
};

Bitmap dMNMain_1PModeText_bitmaps[] = {
	{ 72, 80, 0, 0, dMNMain_1PModeText_tex, 13, 0 },
};

/* Sprite: 1PModeText (72x13 i4) */
Sprite dMNMain_1PModeText = {
	0, 0,
	72, 13,
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
	(Bitmap*)dMNMain_1PModeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
