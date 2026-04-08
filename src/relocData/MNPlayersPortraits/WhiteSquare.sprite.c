/* Sprite: WhiteSquare */

Gfx dMNPlayersPortraits_WhiteSquare_dl[] = { gsSPEndDisplayList() };

/* Texture: WhiteSquare (43(48)x41 i4) */
u8 dMNPlayersPortraits_WhiteSquare_tex[] = {
    #include <MNPlayersPortraits/WhiteSquare.i4.inc.c>
};

Bitmap dMNPlayersPortraits_WhiteSquare_bitmaps[] = {
	{ 43, 48, 0, 0, dMNPlayersPortraits_WhiteSquare_tex, 41, 0 },
};

/* Sprite: WhiteSquare (43x41 i4) */
Sprite dMNPlayersPortraits_WhiteSquare = {
	0, 0,
	43, 41,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	41, 41,
	4, 0,
	(Bitmap*)dMNPlayersPortraits_WhiteSquare_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
