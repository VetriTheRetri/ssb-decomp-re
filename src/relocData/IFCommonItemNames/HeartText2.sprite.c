/* Sprite: HeartText2 */

Gfx dIFCommonItemNames_HeartText2_dl[] = { gsSPEndDisplayList() };

/* Texture: HeartText2 (36(40)x16 ia8) */
u8 dIFCommonItemNames_HeartText2_tex[] = {
    #include <IFCommonItemNames/HeartText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_HeartText2_bitmaps[] = {
	{ 36, 40, 0, 0, dIFCommonItemNames_HeartText2_tex, 16, 0 },
};

/* Sprite: HeartText2 (36x16 ia8) */
Sprite dIFCommonItemNames_HeartText2 = {
	0, 0,
	36, 16,
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
	(Bitmap*)dIFCommonItemNames_HeartText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
