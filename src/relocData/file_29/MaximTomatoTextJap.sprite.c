/* Sprite: MaximTomatoTextJap */

Gfx dRelocFile29_MaximTomatoTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: MaximTomatoTextJap (73(80)x12 i4) */
u8 dRelocFile29_MaximTomatoTextJap_tex[] = {
    #include <file_29/MaximTomatoTextJap.i4.inc.c>
};

Bitmap dRelocFile29_MaximTomatoTextJap_bitmaps[] = {
	{ 73, 80, 0, 0, dRelocFile29_MaximTomatoTextJap_tex, 12, 0 },
};

/* Sprite: MaximTomatoTextJap (73x12 i4) */
Sprite dRelocFile29_MaximTomatoTextJap = {
	0, 0,
	73, 12,
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
	(Bitmap*)dRelocFile29_MaximTomatoTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
