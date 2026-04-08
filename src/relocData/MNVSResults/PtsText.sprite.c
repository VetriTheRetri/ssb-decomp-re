/* Sprite: PtsText */

Gfx dMNVSResults_PtsText_dl[] = { gsSPEndDisplayList() };

/* Texture: PtsText (62(64)x13 ia8) */
u8 dMNVSResults_PtsText_tex[] = {
    #include <MNVSResults/PtsText.ia8.inc.c>
};

Bitmap dMNVSResults_PtsText_bitmaps[] = {
	{ 62, 64, 0, 0, dMNVSResults_PtsText_tex, 13, 0 },
};

/* Sprite: PtsText (62x13 ia8) */
Sprite dMNVSResults_PtsText = {
	0, 0,
	62, 13,
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
	3, 1,
	(Bitmap*)dMNVSResults_PtsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
