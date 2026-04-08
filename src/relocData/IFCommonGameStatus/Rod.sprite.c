/* Sprite: Rod */

Gfx dIFCommonGameStatus_Rod_dl[] = { gsSPEndDisplayList() };

/* Texture: Rod (8x53 ia8) */
u8 dIFCommonGameStatus_Rod_tex[] = {
    #include <IFCommonGameStatus/Rod.ia8.inc.c>
};

Bitmap dIFCommonGameStatus_Rod_bitmaps[] = {
	{ 8, 8, 0, 0, dIFCommonGameStatus_Rod_tex, 53, 0 },
};

/* Sprite: Rod (8x53 ia8) */
Sprite dIFCommonGameStatus_Rod = {
	0, 0,
	8, 53,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	53, 53,
	3, 1,
	(Bitmap*)dIFCommonGameStatus_Rod_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
