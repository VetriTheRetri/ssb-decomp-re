/* Sprite: ComboColonText */

Gfx dIFCommonItemNames_ComboColonText_dl[] = { gsSPEndDisplayList() };

/* Texture: ComboColonText (44(48)x16 ia8) */
u8 dIFCommonItemNames_ComboColonText_tex[] = {
    #include <IFCommonItemNames/ComboColonText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_ComboColonText_bitmaps[] = {
	{ 44, 48, 0, 0, dIFCommonItemNames_ComboColonText_tex, 16, 0 },
};

/* Sprite: ComboColonText (44x16 ia8) */
Sprite dIFCommonItemNames_ComboColonText = {
	0, 0,
	44, 16,
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
	(Bitmap*)dIFCommonItemNames_ComboColonText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
