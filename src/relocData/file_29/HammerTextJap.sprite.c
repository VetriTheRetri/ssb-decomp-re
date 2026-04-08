/* Sprite: HammerTextJap */

Gfx dRelocFile29_HammerTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: HammerTextJap (44(48)x12 i4) */
u8 dRelocFile29_HammerTextJap_tex[] = {
    #include <file_29/HammerTextJap.i4.inc.c>
};

Bitmap dRelocFile29_HammerTextJap_bitmaps[] = {
	{ 44, 48, 0, 0, dRelocFile29_HammerTextJap_tex, 12, 0 },
};

/* Sprite: HammerTextJap (44x12 i4) */
Sprite dRelocFile29_HammerTextJap = {
	0, 0,
	44, 12,
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
	(Bitmap*)dRelocFile29_HammerTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
