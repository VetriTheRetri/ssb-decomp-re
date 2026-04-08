/* Sprite: ScreenAdjustText */

Gfx dMNOption_ScreenAdjustText_dl[] = { gsSPEndDisplayList() };

/* Texture: ScreenAdjustText (144x22 i4) */
u8 dMNOption_ScreenAdjustText_tex[] = {
    #include <MNOption/ScreenAdjustText.i4.inc.c>
};

Bitmap dMNOption_ScreenAdjustText_bitmaps[] = {
	{ 144, 144, 0, 0, dMNOption_ScreenAdjustText_tex, 22, 0 },
};

/* Sprite: ScreenAdjustText (144x22 i4) */
Sprite dMNOption_ScreenAdjustText = {
	0, 0,
	144, 22,
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
	(Bitmap*)dMNOption_ScreenAdjustText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
