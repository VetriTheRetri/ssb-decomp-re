/* Sprite: EvadeText */

Gfx dIFCommonItemNames_EvadeText_dl[] = { gsSPEndDisplayList() };

/* Texture: EvadeText (37(40)x16 ia8) */
u8 dIFCommonItemNames_EvadeText_tex[] = {
    #include <IFCommonItemNames/EvadeText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_EvadeText_bitmaps[] = {
	{ 37, 40, 0, 0, dIFCommonItemNames_EvadeText_tex, 16, 0 },
};

/* Sprite: EvadeText (37x16 ia8) */
Sprite dIFCommonItemNames_EvadeText = {
	0, 0,
	37, 16,
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
	(Bitmap*)dIFCommonItemNames_EvadeText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
