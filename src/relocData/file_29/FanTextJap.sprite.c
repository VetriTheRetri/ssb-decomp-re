/* Sprite: FanTextJap */

Gfx dRelocFile29_FanTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: FanTextJap (43(48)x12 i4) */
u8 dRelocFile29_FanTextJap_tex[] = {
    #include <file_29/FanTextJap.i4.inc.c>
};

Bitmap dRelocFile29_FanTextJap_bitmaps[] = {
	{ 43, 48, 0, 0, dRelocFile29_FanTextJap_tex, 12, 0 },
};

/* Sprite: FanTextJap (43x12 i4) */
Sprite dRelocFile29_FanTextJap = {
	0, 0,
	43, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dRelocFile29_FanTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
