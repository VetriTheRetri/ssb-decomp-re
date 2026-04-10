/* Sprite: HeartText */

Gfx dIFCommonItemNames_HeartText_dl[] = { gsSPEndDisplayList() };

/* Texture: HeartText (37(40)x16 ia8) */
u8 dIFCommonItemNames_HeartText_tex[] = {
    #include <IFCommonItemNames/HeartText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_HeartText_bitmaps[] = {
	{ 37, 40, 0, 0, dIFCommonItemNames_HeartText_tex, 16, 0 },
};

/* Sprite: HeartText (37x16 ia8) */
Sprite dIFCommonItemNames_HeartText = {
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
	(Bitmap*)dIFCommonItemNames_HeartText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
