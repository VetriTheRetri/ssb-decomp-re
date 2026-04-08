/* Sprite: Digit9 */

Gfx dIFCommonPlayerDamage_Digit9_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit9 (17(24)x19 ia8) */
u8 dIFCommonPlayerDamage_Digit9_tex[] = {
    #include <IFCommonPlayerDamage/Digit9.ia8.inc.c>
};

Bitmap dIFCommonPlayerDamage_Digit9_bitmaps[] = {
	{ 17, 24, 0, 0, dIFCommonPlayerDamage_Digit9_tex, 19, 0 },
};

/* Sprite: Digit9 (17x19 ia8) */
Sprite dIFCommonPlayerDamage_Digit9 = {
	0, 0,
	17, 19,
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
	(Bitmap*)dIFCommonPlayerDamage_Digit9_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
