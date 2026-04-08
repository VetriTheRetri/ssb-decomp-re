/* Sprite: Frame */

Gfx dIFCommonGameStatus_Frame_dl[] = { gsSPEndDisplayList() };

/* Texture: Frame (97(104)x33 ia8) */
u8 dIFCommonGameStatus_Frame_tex[] = {
    #include <IFCommonGameStatus/Frame.ia8.inc.c>
};

Bitmap dIFCommonGameStatus_Frame_bitmaps[] = {
	{ 97, 104, 0, 0, dIFCommonGameStatus_Frame_tex, 33, 0 },
};

/* Sprite: Frame (97x33 ia8) */
Sprite dIFCommonGameStatus_Frame = {
	0, 0,
	97, 33,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	33, 33,
	3, 1,
	(Bitmap*)dIFCommonGameStatus_Frame_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
