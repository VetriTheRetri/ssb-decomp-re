/* Sprite: PressStart */

Gfx dMNTitle_PressStart_dl[] = { gsSPEndDisplayList() };

/* Texture: PressStart (96x18 ia8) */
u8 dMNTitle_PressStart_tex[] = {
    #include <MNTitle/PressStart.ia8.inc.c>
};

Bitmap dMNTitle_PressStart_bitmaps[] = {
	{ 96, 96, 0, 0, dMNTitle_PressStart_tex, 18, 0 },
};

/* Sprite: PressStart (96x18 ia8) */
Sprite dMNTitle_PressStart = {
	0, 0,
	96, 18,
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
	(Bitmap*)dMNTitle_PressStart_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
