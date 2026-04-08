/* Sprite: 4P */

Gfx dIFCommonPlayerTags_4P_dl[] = { gsSPEndDisplayList() };

/* Texture: 4P (21(24)x24 ia8) */
u8 dIFCommonPlayerTags_4P_tex[] = {
    #include <IFCommonPlayerTags/4P.ia8.inc.c>
};

Bitmap dIFCommonPlayerTags_4P_bitmaps[] = {
	{ 21, 24, 0, 0, dIFCommonPlayerTags_4P_tex, 24, 0 },
};

/* Sprite: 4P (21x24 ia8) */
Sprite dIFCommonPlayerTags_4P = {
	0, 0,
	21, 24,
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
	(Bitmap*)dIFCommonPlayerTags_4P_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
