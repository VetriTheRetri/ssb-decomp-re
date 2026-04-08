/* Sprite: WalkText2 */

Gfx dRelocFile29_WalkText2_dl[] = { gsSPEndDisplayList() };

/* Texture: WalkText2 (33(40)x16 ia8) */
u8 dRelocFile29_WalkText2_tex[] = {
    #include <file_29/WalkText2.ia8.inc.c>
};

Bitmap dRelocFile29_WalkText2_bitmaps[] = {
	{ 33, 40, 0, 0, dRelocFile29_WalkText2_tex, 16, 0 },
};

/* Sprite: WalkText2 (33x16 ia8) */
Sprite dRelocFile29_WalkText2 = {
	0, 0,
	33, 16,
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
	(Bitmap*)dRelocFile29_WalkText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
