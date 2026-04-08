/* Sprite: ScreenAdjustText */

Gfx dMNIndex_ScreenAdjustText_dl[] = { gsSPEndDisplayList() };

/* Texture: ScreenAdjustText (144x22 i4) */
u8 dMNIndex_ScreenAdjustText_tex[] = {
    #include <MNIndex/ScreenAdjustText.i4.inc.c>
};

Bitmap dMNIndex_ScreenAdjustText_bitmaps[] = {
	{ 144, 144, 0, 0, dMNIndex_ScreenAdjustText_tex, 22, 0 },
};

/* Sprite: ScreenAdjustText (144x22 i4) */
Sprite dMNIndex_ScreenAdjustText = {
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
	(Bitmap*)dMNIndex_ScreenAdjustText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
