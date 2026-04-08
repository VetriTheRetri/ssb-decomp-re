/* Sprite: 2P */

Gfx dIFCommonPlayerTags_2P_dl[] = { gsSPEndDisplayList() };

/* Texture: 2P (20(24)x24 ia8) */
u8 dIFCommonPlayerTags_2P_tex[] = {
    #include <IFCommonPlayerTags/2P.ia8.inc.c>
};

Bitmap dIFCommonPlayerTags_2P_bitmaps[] = {
	{ 20, 24, 0, 0, dIFCommonPlayerTags_2P_tex, 24, 0 },
};

/* Sprite: 2P (20x24 ia8) */
Sprite dIFCommonPlayerTags_2P = {
	0, 0,
	20, 24,
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
	(Bitmap*)dIFCommonPlayerTags_2P_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
