/* Sprite: LampBlueDim */

Gfx dIFCommonGameStatus_LampBlueDim_dl[] = { gsSPEndDisplayList() };

/* Texture: LampBlueDim (19(32)x19 i4) */
u8 dIFCommonGameStatus_LampBlueDim_tex[] = {
    #include <IFCommonGameStatus/LampBlueDim.i4.inc.c>
};

Bitmap dIFCommonGameStatus_LampBlueDim_bitmaps[] = {
	{ 19, 32, 0, 0, dIFCommonGameStatus_LampBlueDim_tex, 19, 0 },
};

/* Sprite: LampBlueDim (19x19 i4) */
Sprite dIFCommonGameStatus_LampBlueDim = {
	0, 0,
	19, 19,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	19, 19,
	4, 0,
	(Bitmap*)dIFCommonGameStatus_LampBlueDim_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
