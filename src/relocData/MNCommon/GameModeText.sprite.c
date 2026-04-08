/* Sprite: GameModeText */

Gfx dMNCommon_GameModeText_dl[] = { gsSPEndDisplayList() };

/* Texture: GameModeText (112x108 i4, 2 tiles) */
u8 dMNCommon_GameModeText_tex[] = {
    #include <MNCommon/GameModeText.i4.inc.c>
};

Bitmap dMNCommon_GameModeText_bitmaps[] = {
	{ 112, 112, 0, 0, dMNCommon_GameModeText_tex, 72, 0 },
	{ 112, 112, 0, 0, dMNCommon_GameModeText_tex + 0xFC8, 36, 0 },
};

/* Sprite: GameModeText (112x108 i4) */
Sprite dMNCommon_GameModeText = {
	0, 0,
	112, 108,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	72, 72,
	4, 0,
	(Bitmap*)dMNCommon_GameModeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
