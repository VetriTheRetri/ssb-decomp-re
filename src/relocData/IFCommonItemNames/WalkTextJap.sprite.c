/* Sprite: WalkTextJap */

Gfx dIFCommonItemNames_WalkTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: WalkTextJap (23(32)x12 i4) */
u8 dIFCommonItemNames_WalkTextJap_tex[] = {
    #include <IFCommonItemNames/WalkTextJap.i4.inc.c>
};

Bitmap dIFCommonItemNames_WalkTextJap_bitmaps[] = {
	{ 23, 32, 0, 0, dIFCommonItemNames_WalkTextJap_tex, 12, 0 },
};

/* Sprite: WalkTextJap (23x12 i4) */
Sprite dIFCommonItemNames_WalkTextJap = {
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
	(Bitmap*)dIFCommonItemNames_WalkTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
