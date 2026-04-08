/* Sprite: DamageText */

Gfx dMNVSOptions_DamageText_dl[] = { gsSPEndDisplayList() };

/* Texture: DamageText (61(64)x16 i4) */
u8 dMNVSOptions_DamageText_tex[] = {
    #include <MNVSOptions/DamageText.i4.inc.c>
};

Bitmap dMNVSOptions_DamageText_bitmaps[] = {
	{ 61, 64, 0, 0, dMNVSOptions_DamageText_tex, 16, 0 },
};

/* Sprite: DamageText (61x16 i4) */
Sprite dMNVSOptions_DamageText = {
	0, 0,
	61, 16,
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
	4, 0,
	(Bitmap*)dMNVSOptions_DamageText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
