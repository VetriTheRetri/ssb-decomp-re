/* Sprite: RedShellTextJap */

Gfx dIFCommonItemNames_RedShellTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: RedShellTextJap (64x12 i4) */
u8 dIFCommonItemNames_RedShellTextJap_tex[] = {
    #include <IFCommonItemNames/RedShellTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_RedShellTextJap_bitmaps[] = {
	{ 64, 64, 0, 0, dIFCommonItemNames_RedShellTextJap_tex, 12, 0 },
};

/* Sprite: RedShellTextJap (64x12 i4) */
Sprite dIFCommonItemNames_RedShellTextJap = {
	0, 0,
	64, 12,
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
	(Bitmap*)dIFCommonItemNames_RedShellTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
