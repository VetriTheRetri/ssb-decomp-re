/* Sprite: TrainingModeText */

Gfx dMNPlayersGameModes_TrainingModeText_dl[] = { gsSPEndDisplayList() };

/* Texture: TrainingModeText (88(96)x11 i4) */
u8 dMNPlayersGameModes_TrainingModeText_tex[] = {
    #include <MNPlayersGameModes/TrainingModeText.i4.inc.c>
};

Bitmap dMNPlayersGameModes_TrainingModeText_bitmaps[] = {
	{ 88, 96, 0, 0, dMNPlayersGameModes_TrainingModeText_tex, 11, 0 },
};

/* Sprite: TrainingModeText (88x11 i4) */
Sprite dMNPlayersGameModes_TrainingModeText = {
	0, 0,
	88, 11,
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
	(Bitmap*)dMNPlayersGameModes_TrainingModeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
