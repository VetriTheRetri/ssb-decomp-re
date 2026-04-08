/* Sprite: SmashLogo */

Gfx dMNMain_SmashLogo_dl[] = { gsSPEndDisplayList() };

/* Texture: SmashLogo (59(64)x59 i4) */
u8 dMNMain_SmashLogo_tex[] = {
    #include <MNMain/SmashLogo.i4.inc.c>
};

Bitmap dMNMain_SmashLogo_bitmaps[] = {
	{ 59, 64, 0, 0, dMNMain_SmashLogo_tex, 59, 0 },
};

/* Sprite: SmashLogo (59x59 i4) */
Sprite dMNMain_SmashLogo = {
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
	(Bitmap*)dMNMain_SmashLogo_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
