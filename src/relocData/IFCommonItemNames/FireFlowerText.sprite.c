/* Sprite: FireFlowerText */

Gfx dIFCommonItemNames_FireFlowerText_dl[] = { gsSPEndDisplayList() };

/* Texture: FireFlowerText (73(80)x16 ia8) */
u8 dIFCommonItemNames_FireFlowerText_tex[] = {
    #include <IFCommonItemNames/FireFlowerText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_FireFlowerText_bitmaps[] = {
	{ 73, 80, 0, 0, dIFCommonItemNames_FireFlowerText_tex, 16, 0 },
};

/* Sprite: FireFlowerText (73x16 ia8) */
Sprite dIFCommonItemNames_FireFlowerText = {
	0, 0,
	73, 16,
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
	(Bitmap*)dIFCommonItemNames_FireFlowerText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
