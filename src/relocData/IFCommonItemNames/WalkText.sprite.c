/* Sprite: WalkText */

Gfx dIFCommonItemNames_WalkText_dl[] = { gsSPEndDisplayList() };

/* Texture: WalkText (35(40)x16 ia8) */
u8 dIFCommonItemNames_WalkText_tex[] = {
    #include <IFCommonItemNames/WalkText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_WalkText_bitmaps[] = {
	{ 35, 40, 0, 0, dIFCommonItemNames_WalkText_tex, 16, 0 },
};

/* Sprite: WalkText (35x16 ia8) */
Sprite dIFCommonItemNames_WalkText = {
	0, 0,
	35, 16,
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
	(Bitmap*)dIFCommonItemNames_WalkText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
