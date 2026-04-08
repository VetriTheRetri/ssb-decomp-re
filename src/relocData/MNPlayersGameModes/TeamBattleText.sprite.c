/* Sprite: TeamBattleText */

Gfx dMNPlayersGameModes_TeamBattleText_dl[] = { gsSPEndDisplayList() };

/* Texture: TeamBattleText (110(112)x9 i4) */
u8 dMNPlayersGameModes_TeamBattleText_tex[] = {
    #include <MNPlayersGameModes/TeamBattleText.i4.inc.c>
};

Bitmap dMNPlayersGameModes_TeamBattleText_bitmaps[] = {
	{ 110, 112, 0, 0, dMNPlayersGameModes_TeamBattleText_tex, 9, 0 },
};

/* Sprite: TeamBattleText (110x9 i4) */
Sprite dMNPlayersGameModes_TeamBattleText = {
	0, 0,
	110, 9,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	9, 9,
	4, 0,
	(Bitmap*)dMNPlayersGameModes_TeamBattleText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
