/* Sprite: JumpText2 */

Gfx dIFCommonItemNames_JumpText2_dl[] = { gsSPEndDisplayList() };

/* Texture: JumpText2 (34(40)x16 ia8) */
u8 dIFCommonItemNames_JumpText2_tex[] = {
    #include <IFCommonItemNames/JumpText2.ia8.inc.c>
};

Bitmap dIFCommonItemNames_JumpText2_bitmaps[] = {
	{ 34, 40, 0, 0, dIFCommonItemNames_JumpText2_tex, 16, 0 },
};

/* Sprite: JumpText2 (34x16 ia8) */
Sprite dIFCommonItemNames_JumpText2 = {
	0, 0,
	34, 16,
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
	(Bitmap*)dIFCommonItemNames_JumpText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
