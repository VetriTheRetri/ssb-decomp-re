/* Sprite: SlowTextJap */

Gfx dIFCommonItemNames_SlowTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: SlowTextJap (34(48)x12 i4) */
u8 dIFCommonItemNames_SlowTextJap_tex[] = {
    #include <IFCommonItemNames/SlowTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_SlowTextJap_bitmaps[] = {
	{ 34, 48, 0, 0, dIFCommonItemNames_SlowTextJap_tex, 12, 0 },
};

/* Sprite: SlowTextJap (34x12 i4) */
Sprite dIFCommonItemNames_SlowTextJap = {
	0, 0,
	34, 12,
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
	(Bitmap*)dIFCommonItemNames_SlowTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
