/* Sprite: FreeForAllText */

Gfx dMNPlayersGameModes_FreeForAllText_dl[] = { gsSPEndDisplayList() };

/* Texture: FreeForAllText (112x11 i4) */
u8 dMNPlayersGameModes_FreeForAllText_tex[] = {
    #include <MNPlayersGameModes/FreeForAllText.i4.inc.c>
};

Bitmap dMNPlayersGameModes_FreeForAllText_bitmaps[] = {
	{ 112, 112, 0, 0, dMNPlayersGameModes_FreeForAllText_tex, 11, 0 },
};

/* Sprite: FreeForAllText (112x11 i4) */
Sprite dMNPlayersGameModes_FreeForAllText = {
	0, 0,
	112, 11,
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
	(Bitmap*)dMNPlayersGameModes_FreeForAllText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
