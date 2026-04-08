/* Sprite: LampRedLight */

Gfx dIFCommonGameStatus_LampRedLight_dl[] = { gsSPEndDisplayList() };

/* Texture: LampRedLight (32x41 i8) */
u8 dIFCommonGameStatus_LampRedLight_tex[] = {
    #include <IFCommonGameStatus/LampRedLight.i8.inc.c>
};

Bitmap dIFCommonGameStatus_LampRedLight_bitmaps[] = {
	{ 32, 32, 0, 0, dIFCommonGameStatus_LampRedLight_tex, 41, 0 },
};

/* Sprite: LampRedLight (32x41 i8) */
Sprite dIFCommonGameStatus_LampRedLight = {
	0, 0,
	32, 41,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	41, 41,
	4, 1,
	(Bitmap*)dIFCommonGameStatus_LampRedLight_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
