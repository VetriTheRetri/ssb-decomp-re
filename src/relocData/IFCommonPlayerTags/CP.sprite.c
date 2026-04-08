/* Sprite: CP */

Gfx dIFCommonPlayerTags_CP_dl[] = { gsSPEndDisplayList() };

/* Texture: CP (20(24)x24 ia8) */
u8 dIFCommonPlayerTags_CP_tex[] = {
    #include <IFCommonPlayerTags/CP.ia8.inc.c>
};

Bitmap dIFCommonPlayerTags_CP_bitmaps[] = {
	{ 20, 24, 0, 0, dIFCommonPlayerTags_CP_tex, 24, 0 },
};

/* Sprite: CP (20x24 ia8) */
Sprite dIFCommonPlayerTags_CP = {
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
	(Bitmap*)dIFCommonPlayerTags_CP_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
