/* Sprite: 1PTextGradient */

Gfx dMNPlayersCommon_1PTextGradient_dl[] = { gsSPEndDisplayList() };

/* Texture: 1PTextGradient (15(16)x10 ia8) */
u8 dMNPlayersCommon_1PTextGradient_tex[] = {
    #include <MNPlayersCommon/1PTextGradient.ia8.inc.c>
};

Bitmap dMNPlayersCommon_1PTextGradient_bitmaps[] = {
	{ 15, 16, 0, 0, dMNPlayersCommon_1PTextGradient_tex, 10, 0 },
};

/* Sprite: 1PTextGradient (15x10 ia8) */
Sprite dMNPlayersCommon_1PTextGradient = {
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
	(Bitmap*)dMNPlayersCommon_1PTextGradient_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
