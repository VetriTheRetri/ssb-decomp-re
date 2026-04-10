/* Sprite: RedShellText */

Gfx dIFCommonItemNames_RedShellText_dl[] = { gsSPEndDisplayList() };

/* Texture: RedShellText (62(64)x16 ia8) */
u8 dIFCommonItemNames_RedShellText_tex[] = {
    #include <IFCommonItemNames/RedShellText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_RedShellText_bitmaps[] = {
	{ 62, 64, 0, 0, dIFCommonItemNames_RedShellText_tex, 16, 0 },
};

/* Sprite: RedShellText (62x16 ia8) */
Sprite dIFCommonItemNames_RedShellText = {
	0, 0,
	62, 16,
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
	(Bitmap*)dIFCommonItemNames_RedShellText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
