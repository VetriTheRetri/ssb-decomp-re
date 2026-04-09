/* Sprite: MarioText */

Gfx dMNPlayersCommon_MarioText_dl[] = { gsSPEndDisplayList() };

/* Texture: MarioText (47(48)x16 ia8) */
u8 dMNPlayersCommon_MarioText_tex[] = {
    #include <MNPlayersCommon/MarioText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_MarioText_bitmaps[] = {
	{ 47, 48, 0, 0, dMNPlayersCommon_MarioText_tex, 16, 0 },
};

/* Sprite: MarioText (47x16 ia8) */
Sprite dMNPlayersCommon_MarioText = {
	0, 0,
	47, 16,
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
	3, 1,
	(Bitmap*)dMNPlayersCommon_MarioText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
