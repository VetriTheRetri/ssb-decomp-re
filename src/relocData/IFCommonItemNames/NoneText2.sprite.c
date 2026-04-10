/* Sprite: NoneText2 */

Gfx dIFCommonItemNames_NoneText2_dl[] = { gsSPEndDisplayList() };

/* Texture: NoneText2 (34(40)x15 ia8) */
u8 dIFCommonItemNames_NoneText2_tex[] = {
    #include <IFCommonItemNames/NoneText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_NoneText2_bitmaps[] = {
	{ 34, 40, 0, 0, dIFCommonItemNames_NoneText2_tex, 15, 0 },
};

/* Sprite: NoneText2 (34x15 ia8) */
Sprite dIFCommonItemNames_NoneText2 = {
	0, 0,
	34, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dIFCommonItemNames_NoneText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
