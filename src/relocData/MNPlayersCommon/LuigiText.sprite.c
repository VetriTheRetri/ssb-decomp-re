/* Sprite: LuigiText */

Gfx dMNPlayersCommon_LuigiText_dl[] = { gsSPEndDisplayList() };

/* Texture: LuigiText (36(40)x16 ia8) */
u8 dMNPlayersCommon_LuigiText_tex[] = {
    #include <MNPlayersCommon/LuigiText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_LuigiText_bitmaps[] = {
	{ 36, 40, 0, 0, dMNPlayersCommon_LuigiText_tex, 16, 0 },
};

/* Sprite: LuigiText (36x16 ia8) */
Sprite dMNPlayersCommon_LuigiText = {
	0, 0,
	36, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dMNPlayersCommon_LuigiText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
