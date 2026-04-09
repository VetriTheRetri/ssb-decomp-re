/* Sprite: 2Dark */

Gfx dMNPlayersCommon_2Dark_dl[] = { gsSPEndDisplayList() };

/* Texture: 2Dark (11(16)x11 ia8) */
u8 dMNPlayersCommon_2Dark_tex[] = {
    #include <MNPlayersCommon/2Dark.ia8.inc.c>
};

Bitmap dMNPlayersCommon_2Dark_bitmaps[] = {
	{ 11, 16, 0, 0, dMNPlayersCommon_2Dark_tex, 11, 0 },
};

/* Sprite: 2Dark (11x11 ia8) */
Sprite dMNPlayersCommon_2Dark = {
	0, 0,
	11, 11,
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
	3, 1,
	(Bitmap*)dMNPlayersCommon_2Dark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
