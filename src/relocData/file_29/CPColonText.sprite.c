/* Sprite: CPColonText */

Gfx dRelocFile29_CPColonText_dl[] = { gsSPEndDisplayList() };

/* Texture: CPColonText (49(56)x15 ia8) */
u8 dRelocFile29_CPColonText_tex[] = {
    #include <file_29/CPColonText.ia8.inc.c>
};

Bitmap dRelocFile29_CPColonText_bitmaps[] = {
	{ 49, 56, 0, 0, dRelocFile29_CPColonText_tex, 15, 0 },
};

/* Sprite: CPColonText (49x15 ia8) */
Sprite dRelocFile29_CPColonText = {
	0, 0,
	49, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dRelocFile29_CPColonText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
