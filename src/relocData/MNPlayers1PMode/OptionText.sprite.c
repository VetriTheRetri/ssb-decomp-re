/* Sprite: OptionText */

Gfx dMNPlayers1PMode_OptionText_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionText (72x18 ia8) */
u8 dMNPlayers1PMode_OptionText_tex[] = {
    #include <MNPlayers1PMode/OptionText.ia8.inc.c>
};

Bitmap dMNPlayers1PMode_OptionText_bitmaps[] = {
	{ 72, 72, 0, 0, dMNPlayers1PMode_OptionText_tex, 18, 0 },
};

/* Sprite: OptionText (72x18 ia8) */
Sprite dMNPlayers1PMode_OptionText = {
	0, 0,
	72, 18,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	18, 18,
	3, 1,
	(Bitmap*)dMNPlayers1PMode_OptionText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
