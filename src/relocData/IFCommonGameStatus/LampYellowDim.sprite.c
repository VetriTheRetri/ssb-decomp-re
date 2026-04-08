/* Sprite: LampYellowDim */

Gfx dIFCommonGameStatus_LampYellowDim_dl[] = { gsSPEndDisplayList() };

/* Texture: LampYellowDim (11(16)x11 i4) */
u8 dIFCommonGameStatus_LampYellowDim_tex[] = {
    #include <IFCommonGameStatus/LampYellowDim.i4.inc.c>
};

Bitmap dIFCommonGameStatus_LampYellowDim_bitmaps[] = {
	{ 11, 16, 0, 0, dIFCommonGameStatus_LampYellowDim_tex, 11, 0 },
};

/* Sprite: LampYellowDim (11x11 i4) */
Sprite dIFCommonGameStatus_LampYellowDim = {
	0, 0,
	11, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 0,
	(Bitmap*)dIFCommonGameStatus_LampYellowDim_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
