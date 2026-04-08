/* Sprite: TKOText */

Gfx dMNVSResults_TKOText_dl[] = { gsSPEndDisplayList() };

/* Texture: TKOText (62(64)x13 ia8) */
u8 dMNVSResults_TKOText_tex[] = {
    #include <MNVSResults/TKOText.ia8.inc.c>
};

Bitmap dMNVSResults_TKOText_bitmaps[] = {
	{ 62, 64, 0, 0, dMNVSResults_TKOText_tex, 13, 0 },
};

/* Sprite: TKOText (62x13 ia8) */
Sprite dMNVSResults_TKOText = {
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
	(Bitmap*)dMNVSResults_TKOText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
