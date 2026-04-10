/* Sprite: ItemTextJap */

Gfx dIFCommonItemNames_ItemTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: ItemTextJap (42(48)x12 i4) */
u8 dIFCommonItemNames_ItemTextJap_tex[] = {
    #include <IFCommonItemNames/ItemTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_ItemTextJap_bitmaps[] = {
	{ 42, 48, 0, 0, dIFCommonItemNames_ItemTextJap_tex, 12, 0 },
};

/* Sprite: ItemTextJap (42x12 i4) */
Sprite dIFCommonItemNames_ItemTextJap = {
	0, 0,
	42, 12,
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
	(Bitmap*)dIFCommonItemNames_ItemTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
