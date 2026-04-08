/* Sprite: ScreenAdjustTextJap */

Gfx dMNIndex_ScreenAdjustTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: ScreenAdjustTextJap (59(64)x15 ia8) */
u8 dMNIndex_ScreenAdjustTextJap_tex[] = {
    #include <MNIndex/ScreenAdjustTextJap.ia8.inc.c>
};

Bitmap dMNIndex_ScreenAdjustTextJap_bitmaps[] = {
	{ 59, 64, 0, 0, dMNIndex_ScreenAdjustTextJap_tex, 15, 0 },
};

/* Sprite: ScreenAdjustTextJap (59x15 ia8) */
Sprite dMNIndex_ScreenAdjustTextJap = {
	0, 0,
	59, 15,
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
	(Bitmap*)dMNIndex_ScreenAdjustTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
