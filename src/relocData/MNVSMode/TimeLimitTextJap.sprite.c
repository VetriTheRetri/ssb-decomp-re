/* Sprite: TimeLimitTextJap */

Gfx dMNVSMode_TimeLimitTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: TimeLimitTextJap (56x15 ia8) */
u8 dMNVSMode_TimeLimitTextJap_tex[] = {
    #include <MNVSMode/TimeLimitTextJap.ia8.inc.c>
};

Bitmap dMNVSMode_TimeLimitTextJap_bitmaps[] = {
	{ 56, 56, 0, 0, dMNVSMode_TimeLimitTextJap_tex, 15, 0 },
};

/* Sprite: TimeLimitTextJap (56x15 ia8) */
Sprite dMNVSMode_TimeLimitTextJap = {
	0, 0,
	56, 15,
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
	(Bitmap*)dMNVSMode_TimeLimitTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
