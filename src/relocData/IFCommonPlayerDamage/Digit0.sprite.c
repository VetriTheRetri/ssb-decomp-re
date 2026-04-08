/* Sprite: Digit0 */

Gfx dIFCommonPlayerDamage_Digit0_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit0 (16x19 ia8) */
u8 dIFCommonPlayerDamage_Digit0_tex[] = {
    #include <IFCommonPlayerDamage/Digit0.ia8.inc.c>
};

Bitmap dIFCommonPlayerDamage_Digit0_bitmaps[] = {
	{ 16, 16, 0, 0, dIFCommonPlayerDamage_Digit0_tex, 19, 0 },
};

/* Sprite: Digit0 (16x19 ia8) */
Sprite dIFCommonPlayerDamage_Digit0 = {
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
	(Bitmap*)dIFCommonPlayerDamage_Digit0_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
