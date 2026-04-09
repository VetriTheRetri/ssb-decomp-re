/* Sprite: PlatformsText */

Gfx dMNPlayers1PMode_PlatformsText_dl[] = { gsSPEndDisplayList() };

/* Texture: PlatformsText (96x10 i4) */
u8 dMNPlayers1PMode_PlatformsText_tex[] = {
    #include <MNPlayers1PMode/PlatformsText.i4.inc.c>
};

Bitmap dMNPlayers1PMode_PlatformsText_bitmaps[] = {
	{ 96, 96, 0, 0, dMNPlayers1PMode_PlatformsText_tex, 10, 0 },
};

/* Sprite: PlatformsText (96x10 i4) */
Sprite dMNPlayers1PMode_PlatformsText = {
	0, 0,
	96, 10,
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
	4, 0,
	(Bitmap*)dMNPlayers1PMode_PlatformsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
