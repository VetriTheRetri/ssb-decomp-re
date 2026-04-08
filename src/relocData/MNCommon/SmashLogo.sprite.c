/* Sprite: SmashLogo */

Gfx dMNCommon_SmashLogo_dl[] = { gsSPEndDisplayList() };

/* Texture: SmashLogo (59(64)x59 i4) */
u8 dMNCommon_SmashLogo_tex[] = {
    #include <MNCommon/SmashLogo.i4.inc.c>
};

Bitmap dMNCommon_SmashLogo_bitmaps[] = {
	{ 59, 64, 0, 0, dMNCommon_SmashLogo_tex, 59, 0 },
};

/* Sprite: SmashLogo (59x59 i4) */
Sprite dMNCommon_SmashLogo = {
	0, 0,
	59, 59,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	59, 59,
	4, 0,
	(Bitmap*)dMNCommon_SmashLogo_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
