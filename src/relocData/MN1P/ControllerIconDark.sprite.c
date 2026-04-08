/* Sprite: ControllerIconDark */

Gfx dMN1P_ControllerIconDark_dl[] = { gsSPEndDisplayList() };

/* Texture: ControllerIconDark (144x136 i4, 3 tiles) */
u8 dMN1P_ControllerIconDark_tex[] = {
    #include <MN1P/ControllerIconDark.i4.inc.c>
};

Bitmap dMN1P_ControllerIconDark_bitmaps[] = {
	{ 144, 144, 0, 0, dMN1P_ControllerIconDark_tex, 56, 0 },
	{ 144, 144, 0, 0, dMN1P_ControllerIconDark_tex + 0xFC8, 56, 0 },
	{ 144, 144, 0, 0, dMN1P_ControllerIconDark_tex + 0x1F90, 24, 0 },
};

/* Sprite: ControllerIconDark (144x134 i4) */
Sprite dMN1P_ControllerIconDark = {
	0, 0,
	144, 134,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	3, 60,
	55, 56,
	4, 0,
	(Bitmap*)dMN1P_ControllerIconDark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
