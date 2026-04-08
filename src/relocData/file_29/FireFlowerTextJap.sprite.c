/* Sprite: FireFlowerTextJap */

Gfx dRelocFile29_FireFlowerTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: FireFlowerTextJap (76(80)x12 i4) */
u8 dRelocFile29_FireFlowerTextJap_tex[] = {
    #include <file_29/FireFlowerTextJap.i4.inc.c>
};

Bitmap dRelocFile29_FireFlowerTextJap_bitmaps[] = {
	{ 76, 80, 0, 0, dRelocFile29_FireFlowerTextJap_tex, 12, 0 },
};

/* Sprite: FireFlowerTextJap (76x12 i4) */
Sprite dRelocFile29_FireFlowerTextJap = {
	0, 0,
	76, 12,
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
	(Bitmap*)dRelocFile29_FireFlowerTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
