/* Sprite: PikachuText */

Gfx dMNPlayersCommon_PikachuText_dl[] = { gsSPEndDisplayList() };

/* Texture: PikachuText (57(64)x15 ia8) */
u8 dMNPlayersCommon_PikachuText_tex[] = {
    #include <MNPlayersCommon/PikachuText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_PikachuText_bitmaps[] = {
	{ 57, 64, 0, 0, dMNPlayersCommon_PikachuText_tex, 15, 0 },
};

/* Sprite: PikachuText (57x15 ia8) */
Sprite dMNPlayersCommon_PikachuText = {
	0, 0,
	57, 15,
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
	(Bitmap*)dMNPlayersCommon_PikachuText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
