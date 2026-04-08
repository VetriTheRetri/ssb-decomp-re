/* Sprite: VSStartTextJap */

Gfx dMNVSMode_VSStartTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: VSStartTextJap (82(88)x15 ia8) */
u8 dMNVSMode_VSStartTextJap_tex[] = {
    #include <MNVSMode/VSStartTextJap.ia8.inc.c>
};

Bitmap dMNVSMode_VSStartTextJap_bitmaps[] = {
	{ 82, 88, 0, 0, dMNVSMode_VSStartTextJap_tex, 15, 0 },
};

/* Sprite: VSStartTextJap (82x15 ia8) */
Sprite dMNVSMode_VSStartTextJap = {
	0, 0,
	82, 15,
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
	(Bitmap*)dMNVSMode_VSStartTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
