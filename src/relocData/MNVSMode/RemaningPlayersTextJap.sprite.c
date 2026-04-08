/* Sprite: RemaningPlayersTextJap */

Gfx dMNVSMode_RemaningPlayersTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: RemaningPlayersTextJap (72x15 ia8) */
u8 dMNVSMode_RemaningPlayersTextJap_tex[] = {
    #include <MNVSMode/RemaningPlayersTextJap.ia8.inc.c>
};

Bitmap dMNVSMode_RemaningPlayersTextJap_bitmaps[] = {
	{ 72, 72, 0, 0, dMNVSMode_RemaningPlayersTextJap_tex, 15, 0 },
};

/* Sprite: RemaningPlayersTextJap (72x15 ia8) */
Sprite dMNVSMode_RemaningPlayersTextJap = {
	0, 0,
	72, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNVSMode_RemaningPlayersTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
