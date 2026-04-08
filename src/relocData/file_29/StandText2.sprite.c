/* Sprite: StandText2 */

Gfx dRelocFile29_StandText2_dl[] = { gsSPEndDisplayList() };

/* Texture: StandText2 (37(40)x16 ia8) */
u8 dRelocFile29_StandText2_tex[] = {
    #include <file_29/StandText2.ia8.inc.c>
};

Bitmap dRelocFile29_StandText2_bitmaps[] = {
	{ 37, 40, 0, 0, dRelocFile29_StandText2_tex, 16, 0 },
};

/* Sprite: StandText2 (37x16 ia8) */
Sprite dRelocFile29_StandText2 = {
	0, 0,
	37, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dRelocFile29_StandText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
