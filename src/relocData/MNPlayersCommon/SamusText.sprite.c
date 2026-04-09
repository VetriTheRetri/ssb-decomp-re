/* Sprite: SamusText */

Gfx dMNPlayersCommon_SamusText_dl[] = { gsSPEndDisplayList() };

/* Texture: SamusText (47(48)x16 ia8) */
u8 dMNPlayersCommon_SamusText_tex[] = {
    #include <MNPlayersCommon/SamusText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_SamusText_bitmaps[] = {
	{ 47, 48, 0, 0, dMNPlayersCommon_SamusText_tex, 16, 0 },
};

/* Sprite: SamusText (47x16 ia8) */
Sprite dMNPlayersCommon_SamusText = {
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
	(Bitmap*)dMNPlayersCommon_SamusText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
