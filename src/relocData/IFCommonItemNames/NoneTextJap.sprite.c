/* Sprite: NoneTextJap */

Gfx dIFCommonItemNames_NoneTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: NoneTextJap (23(32)x12 i4) */
u8 dIFCommonItemNames_NoneTextJap_tex[] = {
    #include <IFCommonItemNames/NoneTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_NoneTextJap_bitmaps[] = {
	{ 23, 32, 0, 0, dIFCommonItemNames_NoneTextJap_tex, 12, 0 },
};

/* Sprite: NoneTextJap (23x12 i4) */
Sprite dIFCommonItemNames_NoneTextJap = {
	0, 0,
	23, 12,
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
	(Bitmap*)dIFCommonItemNames_NoneTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
