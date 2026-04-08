/* Sprite: LampRedDim */

Gfx dIFCommonGameStatus_LampRedDim_dl[] = { gsSPEndDisplayList() };

/* Texture: LampRedDim (15(16)x15 i4) */
u8 dIFCommonGameStatus_LampRedDim_tex[] = {
    #include <IFCommonGameStatus/LampRedDim.i4.inc.c>
};

Bitmap dIFCommonGameStatus_LampRedDim_bitmaps[] = {
	{ 15, 16, 0, 0, dIFCommonGameStatus_LampRedDim_tex, 15, 0 },
};

/* Sprite: LampRedDim (15x15 i4) */
Sprite dIFCommonGameStatus_LampRedDim = {
	0, 0,
	15, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	4, 0,
	(Bitmap*)dIFCommonGameStatus_LampRedDim_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
