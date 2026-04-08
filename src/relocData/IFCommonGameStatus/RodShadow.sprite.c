/* Sprite: RodShadow */

Gfx dIFCommonGameStatus_RodShadow_dl[] = { gsSPEndDisplayList() };

/* Texture: RodShadow (15(16)x11 ia8) */
u8 dIFCommonGameStatus_RodShadow_tex[] = {
    #include <IFCommonGameStatus/RodShadow.ia8.inc.c>
};

Bitmap dIFCommonGameStatus_RodShadow_bitmaps[] = {
	{ 15, 16, 0, 0, dIFCommonGameStatus_RodShadow_tex, 11, 0 },
};

/* Sprite: RodShadow (15x11 ia8) */
Sprite dIFCommonGameStatus_RodShadow = {
	0, 0,
	15, 11,
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
	3, 1,
	(Bitmap*)dIFCommonGameStatus_RodShadow_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
