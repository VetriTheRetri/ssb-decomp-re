/* Sprite: 1P */

Gfx dIFCommonPlayerTags_1P_dl[] = { gsSPEndDisplayList() };

/* Texture: 1P (19(24)x24 ia8) */
u8 dIFCommonPlayerTags_1P_tex[] = {
    #include <IFCommonPlayerTags/1P.ia8.inc.c>
};

Bitmap dIFCommonPlayerTags_1P_bitmaps[] = {
	{ 19, 24, 0, 0, dIFCommonPlayerTags_1P_tex, 24, 0 },
};

/* Sprite: 1P (19x24 ia8) */
Sprite dIFCommonPlayerTags_1P = {
	0, 0,
	19, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	24, 24,
	3, 1,
	(Bitmap*)dIFCommonPlayerTags_1P_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
