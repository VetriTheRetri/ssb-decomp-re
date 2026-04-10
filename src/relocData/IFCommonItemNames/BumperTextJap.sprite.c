/* Sprite: BumperTextJap */

Gfx dIFCommonItemNames_BumperTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: BumperTextJap (44(48)x12 i4) */
u8 dIFCommonItemNames_BumperTextJap_tex[] = {
    #include <IFCommonItemNames/BumperTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_BumperTextJap_bitmaps[] = {
	{ 44, 48, 0, 0, dIFCommonItemNames_BumperTextJap_tex, 12, 0 },
};

/* Sprite: BumperTextJap (44x12 i4) */
Sprite dIFCommonItemNames_BumperTextJap = {
	0, 0,
	44, 12,
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
	(Bitmap*)dIFCommonItemNames_BumperTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
