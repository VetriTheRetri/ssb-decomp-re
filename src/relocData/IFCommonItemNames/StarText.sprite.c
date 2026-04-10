/* Sprite: StarText */

Gfx dIFCommonItemNames_StarText_dl[] = { gsSPEndDisplayList() };

/* Texture: StarText (32x16 ia8) */
u8 dIFCommonItemNames_StarText_tex[] = {
    #include <IFCommonItemNames/StarText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_StarText_bitmaps[] = {
	{ 32, 32, 0, 0, dIFCommonItemNames_StarText_tex, 16, 0 },
};

/* Sprite: StarText (32x16 ia8) */
Sprite dIFCommonItemNames_StarText = {
	0, 0,
	32, 16,
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
	(Bitmap*)dIFCommonItemNames_StarText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
