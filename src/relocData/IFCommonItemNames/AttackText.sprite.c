/* Sprite: AttackText */

Gfx dIFCommonItemNames_AttackText_dl[] = { gsSPEndDisplayList() };

/* Texture: AttackText (43(48)x16 ia8) */
u8 dIFCommonItemNames_AttackText_tex[] = {
    #include <IFCommonItemNames/AttackText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_AttackText_bitmaps[] = {
	{ 43, 48, 0, 0, dIFCommonItemNames_AttackText_tex, 16, 0 },
};

/* Sprite: AttackText (43x16 ia8) */
Sprite dIFCommonItemNames_AttackText = {
	0, 0,
	43, 16,
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
	(Bitmap*)dIFCommonItemNames_AttackText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
