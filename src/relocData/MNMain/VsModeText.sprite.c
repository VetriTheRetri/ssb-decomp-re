/* Sprite: VsModeText */

Gfx dMNMain_VsModeText_dl[] = { gsSPEndDisplayList() };

/* Texture: VsModeText (74(80)x13 i4) */
u8 dMNMain_VsModeText_tex[] = {
    #include <MNMain/VsModeText.i4.inc.c>
};

Bitmap dMNMain_VsModeText_bitmaps[] = {
	{ 74, 80, 0, 0, dMNMain_VsModeText_tex, 13, 0 },
};

/* Sprite: VsModeText (74x13 i4) */
Sprite dMNMain_VsModeText = {
	0, 0,
	74, 13,
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
	(Bitmap*)dMNMain_VsModeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
