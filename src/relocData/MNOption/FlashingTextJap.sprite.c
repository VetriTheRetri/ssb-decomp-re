/* Sprite: FlashingTextJap */

Gfx dMNOption_FlashingTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: FlashingTextJap (103(104)x15 ia8) */
u8 dMNOption_FlashingTextJap_tex[] = {
    #include <MNOption/FlashingTextJap.ia8.inc.c>
};

Bitmap dMNOption_FlashingTextJap_bitmaps[] = {
	{ 103, 104, 0, 0, dMNOption_FlashingTextJap_tex, 15, 0 },
};

/* Sprite: FlashingTextJap (103x15 ia8) */
Sprite dMNOption_FlashingTextJap = {
	0, 0,
	103, 15,
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
	(Bitmap*)dMNOption_FlashingTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
