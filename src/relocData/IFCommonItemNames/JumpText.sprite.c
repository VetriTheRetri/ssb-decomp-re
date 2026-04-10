/* Sprite: JumpText */

Gfx dIFCommonItemNames_JumpText_dl[] = { gsSPEndDisplayList() };

/* Texture: JumpText (35(40)x16 ia8) */
u8 dIFCommonItemNames_JumpText_tex[] = {
    #include <IFCommonItemNames/JumpText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_JumpText_bitmaps[] = {
	{ 35, 40, 0, 0, dIFCommonItemNames_JumpText_tex, 16, 0 },
};

/* Sprite: JumpText (35x16 ia8) */
Sprite dIFCommonItemNames_JumpText = {
	0, 0,
	35, 16,
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
	(Bitmap*)dIFCommonItemNames_JumpText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
