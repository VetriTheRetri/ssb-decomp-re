/* Sprite: AttackText2 */

Gfx dIFCommonItemNames_AttackText2_dl[] = { gsSPEndDisplayList() };

/* Texture: AttackText2 (42(48)x16 ia8) */
u8 dIFCommonItemNames_AttackText2_tex[] = {
    #include <IFCommonItemNames/AttackText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_AttackText2_bitmaps[] = {
	{ 42, 48, 0, 0, dIFCommonItemNames_AttackText2_tex, 16, 0 },
};

/* Sprite: AttackText2 (42x16 ia8) */
Sprite dIFCommonItemNames_AttackText2 = {
	0, 0,
	42, 16,
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
	(Bitmap*)dIFCommonItemNames_AttackText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
