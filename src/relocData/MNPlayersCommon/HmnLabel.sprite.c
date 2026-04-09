/* Sprite: HmnLabel */

Gfx dMNPlayersCommon_HmnLabel_dl[] = { gsSPEndDisplayList() };

/* Texture: HmnLabel (20x10 rgba32) */
u8 dMNPlayersCommon_HmnLabel_tex[] = {
    #include <MNPlayersCommon/HmnLabel.rgba32.inc.c>
};

Bitmap dMNPlayersCommon_HmnLabel_bitmaps[] = {
	{ 20, 20, 0, 0, dMNPlayersCommon_HmnLabel_tex, 10, 0 },
};

/* Sprite: HmnLabel (20x10 rgba32) */
Sprite dMNPlayersCommon_HmnLabel = {
	0, 0,
	20, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	10, 10,
	0, 3,
	(Bitmap*)dMNPlayersCommon_HmnLabel_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
