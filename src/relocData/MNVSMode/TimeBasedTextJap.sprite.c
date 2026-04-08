/* Sprite: TimeBasedTextJap */

Gfx dMNVSMode_TimeBasedTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: TimeBasedTextJap (46(48)x15 ia8) */
u8 dMNVSMode_TimeBasedTextJap_tex[] = {
    #include <MNVSMode/TimeBasedTextJap.ia8.inc.c>
};

Bitmap dMNVSMode_TimeBasedTextJap_bitmaps[] = {
	{ 46, 48, 0, 0, dMNVSMode_TimeBasedTextJap_tex, 15, 0 },
};

/* Sprite: TimeBasedTextJap (46x15 ia8) */
Sprite dMNVSMode_TimeBasedTextJap = {
	0, 0,
	46, 15,
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
	(Bitmap*)dMNVSMode_TimeBasedTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
