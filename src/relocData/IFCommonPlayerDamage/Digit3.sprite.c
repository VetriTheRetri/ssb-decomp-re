/* Sprite: Digit3 */

Gfx dIFCommonPlayerDamage_Digit3_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit3 (16x19 ia8) */
u8 dIFCommonPlayerDamage_Digit3_tex[] = {
    #include <IFCommonPlayerDamage/Digit3.ia8.inc.c>
};

Bitmap dIFCommonPlayerDamage_Digit3_bitmaps[] = {
	{ 16, 16, 0, 0, dIFCommonPlayerDamage_Digit3_tex, 19, 0 },
};

/* Sprite: Digit3 (16x19 ia8) */
Sprite dIFCommonPlayerDamage_Digit3 = {
	0, 0,
	16, 19,
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
	(Bitmap*)dIFCommonPlayerDamage_Digit3_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
