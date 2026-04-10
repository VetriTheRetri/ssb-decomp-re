/* Sprite: FireFlowerText2 */

Gfx dIFCommonItemNames_FireFlowerText2_dl[] = { gsSPEndDisplayList() };

/* Texture: FireFlowerText2 (69(72)x16 ia8) */
u8 dIFCommonItemNames_FireFlowerText2_tex[] = {
    #include <IFCommonItemNames/FireFlowerText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_FireFlowerText2_bitmaps[] = {
	{ 69, 72, 0, 0, dIFCommonItemNames_FireFlowerText2_tex, 16, 0 },
};

/* Sprite: FireFlowerText2 (69x16 ia8) */
Sprite dIFCommonItemNames_FireFlowerText2 = {
	0, 0,
	69, 16,
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
	(Bitmap*)dIFCommonItemNames_FireFlowerText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
