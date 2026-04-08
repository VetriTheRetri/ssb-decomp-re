/* Sprite: ScreenAdjustTextJap */

Gfx dMNOption_ScreenAdjustTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: ScreenAdjustTextJap (83(88)x15 ia8) */
u8 dMNOption_ScreenAdjustTextJap_tex[] = {
    #include <MNOption/ScreenAdjustTextJap.ia8.inc.c>
};

Bitmap dMNOption_ScreenAdjustTextJap_bitmaps[] = {
	{ 83, 88, 0, 0, dMNOption_ScreenAdjustTextJap_tex, 15, 0 },
};

/* Sprite: ScreenAdjustTextJap (83x15 ia8) */
Sprite dMNOption_ScreenAdjustTextJap = {
	0, 0,
	83, 15,
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
	(Bitmap*)dMNOption_ScreenAdjustTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
