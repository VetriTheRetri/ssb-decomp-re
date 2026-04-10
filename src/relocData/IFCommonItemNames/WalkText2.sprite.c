/* Sprite: WalkText2 */

Gfx dIFCommonItemNames_WalkText2_dl[] = { gsSPEndDisplayList() };

/* Texture: WalkText2 (33(40)x16 ia8) */
u8 dIFCommonItemNames_WalkText2_tex[] = {
    #include <IFCommonItemNames/WalkText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_WalkText2_bitmaps[] = {
	{ 33, 40, 0, 0, dIFCommonItemNames_WalkText2_tex, 16, 0 },
};

/* Sprite: WalkText2 (33x16 ia8) */
Sprite dIFCommonItemNames_WalkText2 = {
	0, 0,
	33, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dIFCommonItemNames_WalkText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
