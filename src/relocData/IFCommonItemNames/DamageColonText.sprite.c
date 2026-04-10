/* Sprite: DamageColonText */

Gfx dIFCommonItemNames_DamageColonText_dl[] = { gsSPEndDisplayList() };

/* Texture: DamageColonText (50(56)x16 ia8) */
u8 dIFCommonItemNames_DamageColonText_tex[] = {
    #include <IFCommonItemNames/DamageColonText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_DamageColonText_bitmaps[] = {
	{ 50, 56, 0, 0, dIFCommonItemNames_DamageColonText_tex, 16, 0 },
};

/* Sprite: DamageColonText (50x16 ia8) */
Sprite dIFCommonItemNames_DamageColonText = {
	0, 0,
	50, 16,
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
	(Bitmap*)dIFCommonItemNames_DamageColonText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
