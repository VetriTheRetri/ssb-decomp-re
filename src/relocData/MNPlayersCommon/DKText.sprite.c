/* Sprite: DKText */

Gfx dMNPlayersCommon_DKText_dl[] = { gsSPEndDisplayList() };

/* Texture: DKText (66(72)x16 ia8) */
u8 dMNPlayersCommon_DKText_tex[] = {
    #include <MNPlayersCommon/DKText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_DKText_bitmaps[] = {
	{ 66, 72, 0, 0, dMNPlayersCommon_DKText_tex, 16, 0 },
};

/* Sprite: DKText (66x16 ia8) */
Sprite dMNPlayersCommon_DKText = {
	0, 0,
	66, 16,
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
	(Bitmap*)dMNPlayersCommon_DKText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
