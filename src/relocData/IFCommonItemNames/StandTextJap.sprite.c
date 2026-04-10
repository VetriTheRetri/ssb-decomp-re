/* Sprite: StandTextJap */

Gfx dIFCommonItemNames_StandTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: StandTextJap (23(32)x12 i4) */
u8 dIFCommonItemNames_StandTextJap_tex[] = {
    #include <IFCommonItemNames/StandTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_StandTextJap_bitmaps[] = {
	{ 23, 32, 0, 0, dIFCommonItemNames_StandTextJap_tex, 12, 0 },
};

/* Sprite: StandTextJap (23x12 i4) */
Sprite dIFCommonItemNames_StandTextJap = {
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
	(Bitmap*)dIFCommonItemNames_StandTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
