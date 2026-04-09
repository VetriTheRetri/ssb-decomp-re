/* Sprite: SmashLogo */

Gfx dMNPlayers1PMode_SmashLogo_dl[] = { gsSPEndDisplayList() };

/* Texture: SmashLogo (16x11 i4) */
u8 dMNPlayers1PMode_SmashLogo_tex[] = {
    #include <MNPlayers1PMode/SmashLogo.i4.inc.c>
};

Bitmap dMNPlayers1PMode_SmashLogo_bitmaps[] = {
	{ 16, 16, 0, 0, dMNPlayers1PMode_SmashLogo_tex, 11, 0 },
};

/* Sprite: SmashLogo (16x11 i4) */
Sprite dMNPlayers1PMode_SmashLogo = {
	0, 0,
	16, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 0,
	(Bitmap*)dMNPlayers1PMode_SmashLogo_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
