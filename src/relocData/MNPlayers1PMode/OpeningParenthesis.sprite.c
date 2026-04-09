/* Sprite: OpeningParenthesis */

Gfx dMNPlayers1PMode_OpeningParenthesis_dl[] = { gsSPEndDisplayList() };

/* Texture: OpeningParenthesis (3(16)x8 i4) */
u8 dMNPlayers1PMode_OpeningParenthesis_tex[] = {
    #include <MNPlayers1PMode/OpeningParenthesis.i4.inc.c>
};

Bitmap dMNPlayers1PMode_OpeningParenthesis_bitmaps[] = {
	{ 3, 16, 0, 0, dMNPlayers1PMode_OpeningParenthesis_tex, 8, 0 },
};

/* Sprite: OpeningParenthesis (3x8 i4) */
Sprite dMNPlayers1PMode_OpeningParenthesis = {
	0, 0,
	3, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	8, 8,
	4, 0,
	(Bitmap*)dMNPlayers1PMode_OpeningParenthesis_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
