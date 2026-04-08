/* Sprite: ResetTextJap */

Gfx dRelocFile29_ResetTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: ResetTextJap (44(48)x12 i4) */
u8 dRelocFile29_ResetTextJap_tex[] = {
    #include <file_29/ResetTextJap.i4.inc.c>
};

Bitmap dRelocFile29_ResetTextJap_bitmaps[] = {
	{ 44, 48, 0, 0, dRelocFile29_ResetTextJap_tex, 12, 0 },
};

/* Sprite: ResetTextJap (44x12 i4) */
Sprite dRelocFile29_ResetTextJap = {
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
	(Bitmap*)dRelocFile29_ResetTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
