/* Sprite: BumperText */

Gfx dIFCommonItemNames_BumperText_dl[] = { gsSPEndDisplayList() };

/* Texture: BumperText (48x16 ia8) */
u8 dIFCommonItemNames_BumperText_tex[] = {
    #include <IFCommonItemNames/BumperText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_BumperText_bitmaps[] = {
	{ 48, 48, 0, 0, dIFCommonItemNames_BumperText_tex, 16, 0 },
};

/* Sprite: BumperText (48x16 ia8) */
Sprite dIFCommonItemNames_BumperText = {
	0, 0,
	48, 16,
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
	(Bitmap*)dIFCommonItemNames_BumperText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
