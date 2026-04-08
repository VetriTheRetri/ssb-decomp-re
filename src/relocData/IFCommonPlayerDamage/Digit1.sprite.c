/* Sprite: Digit1 */

Gfx dIFCommonPlayerDamage_Digit1_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit1 (11(16)x19 ia8) */
u8 dIFCommonPlayerDamage_Digit1_tex[] = {
    #include <IFCommonPlayerDamage/Digit1.ia8.inc.c>
};

Bitmap dIFCommonPlayerDamage_Digit1_bitmaps[] = {
	{ 11, 16, 0, 0, dIFCommonPlayerDamage_Digit1_tex, 19, 0 },
};

/* Sprite: Digit1 (11x19 ia8) */
Sprite dIFCommonPlayerDamage_Digit1 = {
	0, 0,
	11, 19,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	19, 19,
	3, 1,
	(Bitmap*)dIFCommonPlayerDamage_Digit1_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
