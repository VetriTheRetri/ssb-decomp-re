/* Sprite: ControllerIcon */

Gfx dMNMain_ControllerIcon_dl[] = { gsSPEndDisplayList() };

/* Texture: ControllerIcon (51(56)x51 ia8) */
u8 dMNMain_ControllerIcon_tex[] = {
    #include <MNMain/ControllerIcon.ia8.inc.c>
};

Bitmap dMNMain_ControllerIcon_bitmaps[] = {
	{ 51, 56, 0, 0, dMNMain_ControllerIcon_tex, 51, 0 },
};

/* Sprite: ControllerIcon (51x51 ia8) */
Sprite dMNMain_ControllerIcon = {
	0, 0,
	51, 51,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	51, 51,
	3, 1,
	(Bitmap*)dMNMain_ControllerIcon_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
