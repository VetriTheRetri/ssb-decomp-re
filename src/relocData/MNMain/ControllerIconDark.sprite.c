/* Sprite: ControllerIconDark */

Gfx dMNMain_ControllerIconDark_dl[] = { gsSPEndDisplayList() };

/* Texture: ControllerIconDark (51(64)x51 i4) */
u8 dMNMain_ControllerIconDark_tex[] = {
    #include <MNMain/ControllerIconDark.i4.inc.c>
};

Bitmap dMNMain_ControllerIconDark_bitmaps[] = {
	{ 51, 64, 0, 0, dMNMain_ControllerIconDark_tex, 51, 0 },
};

/* Sprite: ControllerIconDark (51x51 i4) */
Sprite dMNMain_ControllerIconDark = {
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
	4, 0,
	(Bitmap*)dMNMain_ControllerIconDark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
