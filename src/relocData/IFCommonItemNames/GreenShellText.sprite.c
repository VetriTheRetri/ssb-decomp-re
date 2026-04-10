/* Sprite: GreenShellText */

Gfx dIFCommonItemNames_GreenShellText_dl[] = { gsSPEndDisplayList() };

/* Texture: GreenShellText (73(80)x16 ia8) */
u8 dIFCommonItemNames_GreenShellText_tex[] = {
    #include <IFCommonItemNames/GreenShellText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_GreenShellText_bitmaps[] = {
	{ 73, 80, 0, 0, dIFCommonItemNames_GreenShellText_tex, 16, 0 },
};

/* Sprite: GreenShellText (73x16 ia8) */
Sprite dIFCommonItemNames_GreenShellText = {
	0, 0,
	73, 16,
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
	(Bitmap*)dIFCommonItemNames_GreenShellText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
