/* Sprite: Digit5 */

Gfx dIFCommonPlayerDamage_Digit5_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit5 (15(16)x19 ia8) */
u8 dIFCommonPlayerDamage_Digit5_tex[] = {
    #include <IFCommonPlayerDamage/Digit5.ia8.inc.c>
};

Bitmap dIFCommonPlayerDamage_Digit5_bitmaps[] = {
	{ 15, 16, 0, 0, dIFCommonPlayerDamage_Digit5_tex, 19, 0 },
};

/* Sprite: Digit5 (15x19 ia8) */
Sprite dIFCommonPlayerDamage_Digit5 = {
	0, 0,
	15, 19,
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
	(Bitmap*)dIFCommonPlayerDamage_Digit5_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
