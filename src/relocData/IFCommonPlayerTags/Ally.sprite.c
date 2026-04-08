/* Sprite: Ally */

Gfx dIFCommonPlayerTags_Ally_dl[] = { gsSPEndDisplayList() };

/* Texture: Ally (15(16)x24 ia8) */
u8 dIFCommonPlayerTags_Ally_tex[] = {
    #include <IFCommonPlayerTags/Ally.ia8.inc.c>
};

Bitmap dIFCommonPlayerTags_Ally_bitmaps[] = {
	{ 15, 16, 0, 0, dIFCommonPlayerTags_Ally_tex, 24, 0 },
};

/* Sprite: Ally (15x24 ia8) */
Sprite dIFCommonPlayerTags_Ally = {
	0, 0,
	15, 24,
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
	(Bitmap*)dIFCommonPlayerTags_Ally_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
