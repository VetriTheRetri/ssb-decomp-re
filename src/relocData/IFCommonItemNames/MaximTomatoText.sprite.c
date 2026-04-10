/* Sprite: MaximTomatoText */

Gfx dIFCommonItemNames_MaximTomatoText_dl[] = { gsSPEndDisplayList() };

/* Texture: MaximTomatoText (91(96)x16 ia8) */
u8 dIFCommonItemNames_MaximTomatoText_tex[] = {
    #include <IFCommonItemNames/MaximTomatoText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_MaximTomatoText_bitmaps[] = {
	{ 91, 96, 0, 0, dIFCommonItemNames_MaximTomatoText_tex, 16, 0 },
};

/* Sprite: MaximTomatoText (91x16 ia8) */
Sprite dIFCommonItemNames_MaximTomatoText = {
	0, 0,
	91, 16,
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
	(Bitmap*)dIFCommonItemNames_MaximTomatoText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
