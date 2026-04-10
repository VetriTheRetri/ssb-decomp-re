/* Sprite: StandText */

Gfx dIFCommonItemNames_StandText_dl[] = { gsSPEndDisplayList() };

/* Texture: StandText (37(40)x16 ia8) */
u8 dIFCommonItemNames_StandText_tex[] = {
    #include <IFCommonItemNames/StandText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_StandText_bitmaps[] = {
	{ 37, 40, 0, 0, dIFCommonItemNames_StandText_tex, 16, 0 },
};

/* Sprite: StandText (37x16 ia8) */
Sprite dIFCommonItemNames_StandText = {
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
	(Bitmap*)dIFCommonItemNames_StandText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
