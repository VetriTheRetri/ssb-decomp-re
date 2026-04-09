/* Sprite: 3PTextGradient */

Gfx dMNPlayersCommon_3PTextGradient_dl[] = { gsSPEndDisplayList() };

/* Texture: 3PTextGradient (15(16)x10 ia8) */
u8 dMNPlayersCommon_3PTextGradient_tex[] = {
    #include <MNPlayersCommon/3PTextGradient.ia8.inc.c>
};

Bitmap dMNPlayersCommon_3PTextGradient_bitmaps[] = {
	{ 15, 16, 0, 0, dMNPlayersCommon_3PTextGradient_tex, 10, 0 },
};

/* Sprite: 3PTextGradient (15x10 ia8) */
Sprite dMNPlayersCommon_3PTextGradient = {
	0, 0,
	15, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	10, 10,
	3, 1,
	(Bitmap*)dMNPlayersCommon_3PTextGradient_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
