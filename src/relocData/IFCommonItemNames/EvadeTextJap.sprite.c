/* Sprite: EvadeTextJap */

Gfx dIFCommonItemNames_EvadeTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: EvadeTextJap (34(48)x12 i4) */
u8 dIFCommonItemNames_EvadeTextJap_tex[] = {
    #include <IFCommonItemNames/EvadeTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_EvadeTextJap_bitmaps[] = {
	{ 34, 48, 0, 0, dIFCommonItemNames_EvadeTextJap_tex, 12, 0 },
};

/* Sprite: EvadeTextJap (34x12 i4) */
Sprite dIFCommonItemNames_EvadeTextJap = {
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
	(Bitmap*)dIFCommonItemNames_EvadeTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
