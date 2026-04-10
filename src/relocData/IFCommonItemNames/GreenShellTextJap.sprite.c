/* Sprite: GreenShellTextJap */

Gfx dIFCommonItemNames_GreenShellTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: GreenShellTextJap (72(80)x12 i4) */
u8 dIFCommonItemNames_GreenShellTextJap_tex[] = {
    #include <IFCommonItemNames/GreenShellTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_GreenShellTextJap_bitmaps[] = {
	{ 72, 80, 0, 0, dIFCommonItemNames_GreenShellTextJap_tex, 12, 0 },
};

/* Sprite: GreenShellTextJap (72x12 i4) */
Sprite dIFCommonItemNames_GreenShellTextJap = {
	0, 0,
	72, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dIFCommonItemNames_GreenShellTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
