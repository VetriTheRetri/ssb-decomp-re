/* Sprite: KOsText */

Gfx dMNVSResults_KOsText_dl[] = { gsSPEndDisplayList() };

/* Texture: KOsText (62(64)x13 ia8) */
u8 dMNVSResults_KOsText_tex[] = {
    #include <MNVSResults/KOsText.ia8.inc.c>
};

Bitmap dMNVSResults_KOsText_bitmaps[] = {
	{ 62, 64, 0, 0, dMNVSResults_KOsText_tex, 13, 0 },
};

/* Sprite: KOsText (62x13 ia8) */
Sprite dMNVSResults_KOsText = {
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
	(Bitmap*)dMNVSResults_KOsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
