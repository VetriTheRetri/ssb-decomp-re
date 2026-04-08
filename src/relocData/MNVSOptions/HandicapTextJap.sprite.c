/* Sprite: HandicapTextJap */

Gfx dMNVSOptions_HandicapTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: HandicapTextJap (55(56)x15 ia8) */
u8 dMNVSOptions_HandicapTextJap_tex[] = {
    #include <MNVSOptions/HandicapTextJap.ia8.inc.c>
};

Bitmap dMNVSOptions_HandicapTextJap_bitmaps[] = {
	{ 55, 56, 0, 0, dMNVSOptions_HandicapTextJap_tex, 15, 0 },
};

/* Sprite: HandicapTextJap (55x15 ia8) */
Sprite dMNVSOptions_HandicapTextJap = {
	0, 0,
	55, 15,
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
	(Bitmap*)dMNVSOptions_HandicapTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
