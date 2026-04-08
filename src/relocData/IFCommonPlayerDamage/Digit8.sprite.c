/* Sprite: Digit8 */

Gfx dIFCommonPlayerDamage_Digit8_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit8 (17(24)x19 ia8) */
u8 dIFCommonPlayerDamage_Digit8_tex[] = {
    #include <IFCommonPlayerDamage/Digit8.ia8.inc.c>
};

Bitmap dIFCommonPlayerDamage_Digit8_bitmaps[] = {
	{ 17, 24, 0, 0, dIFCommonPlayerDamage_Digit8_tex, 19, 0 },
};

/* Sprite: Digit8 (17x19 ia8) */
Sprite dIFCommonPlayerDamage_Digit8 = {
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
	(Bitmap*)dIFCommonPlayerDamage_Digit8_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
