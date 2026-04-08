/* Sprite: FlashingText */

Gfx dMNOption_FlashingText_dl[] = { gsSPEndDisplayList() };

/* Texture: FlashingText (85(96)x22 i4) */
u8 dMNOption_FlashingText_tex[] = {
    #include <MNOption/FlashingText.i4.inc.c>
};

Bitmap dMNOption_FlashingText_bitmaps[] = {
	{ 85, 96, 0, 0, dMNOption_FlashingText_tex, 22, 0 },
};

/* Sprite: FlashingText (85x22 i4) */
Sprite dMNOption_FlashingText = {
	0, 0,
	85, 22,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	22, 22,
	4, 0,
	(Bitmap*)dMNOption_FlashingText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
