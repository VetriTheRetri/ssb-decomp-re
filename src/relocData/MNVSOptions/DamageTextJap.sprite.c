/* Sprite: DamageTextJap */

Gfx dMNVSOptions_DamageTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: DamageTextJap (104x15 ia8) */
u8 dMNVSOptions_DamageTextJap_tex[] = {
    #include <MNVSOptions/DamageTextJap.ia8.inc.c>
};

Bitmap dMNVSOptions_DamageTextJap_bitmaps[] = {
	{ 104, 104, 0, 0, dMNVSOptions_DamageTextJap_tex, 15, 0 },
};

/* Sprite: DamageTextJap (104x15 ia8) */
Sprite dMNVSOptions_DamageTextJap = {
	0, 0,
	104, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNVSOptions_DamageTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
