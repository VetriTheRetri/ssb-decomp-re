/* Sprite: FanText2 */

Gfx dRelocFile29_FanText2_dl[] = { gsSPEndDisplayList() };

/* Texture: FanText2 (23(24)x15 ia8) */
u8 dRelocFile29_FanText2_tex[] = {
    #include <file_29/FanText2.ia8.inc.c>
};

Bitmap dRelocFile29_FanText2_bitmaps[] = {
	{ 23, 24, 0, 0, dRelocFile29_FanText2_tex, 15, 0 },
};

/* Sprite: FanText2 (23x15 ia8) */
Sprite dRelocFile29_FanText2 = {
	0, 0,
	23, 15,
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
	(Bitmap*)dRelocFile29_FanText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
