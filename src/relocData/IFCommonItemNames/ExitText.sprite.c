/* Sprite: ExitText */

Gfx dIFCommonItemNames_ExitText_dl[] = { gsSPEndDisplayList() };

/* Texture: ExitText (48x15 ia8) */
u8 dIFCommonItemNames_ExitText_tex[] = {
    #include <IFCommonItemNames/ExitText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_ExitText_bitmaps[] = {
	{ 48, 48, 0, 0, dIFCommonItemNames_ExitText_tex, 15, 0 },
};

/* Sprite: ExitText (48x15 ia8) */
Sprite dIFCommonItemNames_ExitText = {
	0, 0,
	48, 15,
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
	(Bitmap*)dIFCommonItemNames_ExitText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
