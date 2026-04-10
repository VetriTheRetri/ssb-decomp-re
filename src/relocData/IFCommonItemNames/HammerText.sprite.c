/* Sprite: HammerText */

Gfx dIFCommonItemNames_HammerText_dl[] = { gsSPEndDisplayList() };

/* Texture: HammerText (52(56)x16 ia8) */
u8 dIFCommonItemNames_HammerText_tex[] = {
    #include <IFCommonItemNames/HammerText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_HammerText_bitmaps[] = {
	{ 52, 56, 0, 0, dIFCommonItemNames_HammerText_tex, 16, 0 },
};

/* Sprite: HammerText (52x16 ia8) */
Sprite dIFCommonItemNames_HammerText = {
	0, 0,
	52, 16,
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
	(Bitmap*)dIFCommonItemNames_HammerText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
