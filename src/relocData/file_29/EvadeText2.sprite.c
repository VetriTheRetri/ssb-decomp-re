/* Sprite: EvadeText2 */

Gfx dRelocFile29_EvadeText2_dl[] = { gsSPEndDisplayList() };

/* Texture: EvadeText2 (39(40)x15 ia8) */
u8 dRelocFile29_EvadeText2_tex[] = {
    #include <file_29/EvadeText2.ia8.inc.c>
};

Bitmap dRelocFile29_EvadeText2_bitmaps[] = {
	{ 39, 40, 0, 0, dRelocFile29_EvadeText2_tex, 15, 0 },
};

/* Sprite: EvadeText2 (39x15 ia8) */
Sprite dRelocFile29_EvadeText2 = {
	0, 0,
	39, 15,
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
	(Bitmap*)dRelocFile29_EvadeText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
