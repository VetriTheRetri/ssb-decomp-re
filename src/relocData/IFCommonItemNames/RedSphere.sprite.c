/* Sprite: RedSphere */

Gfx dIFCommonItemNames_RedSphere_dl[] = { gsSPEndDisplayList() };

/* Texture: RedSphere (16x16 rgba32) */
u8 dIFCommonItemNames_RedSphere_tex[] = {
    #include <IFCommonItemNames/RedSphere.rgba32.inc.c>
};

Bitmap dIFCommonItemNames_RedSphere_bitmaps[] = {
	{ 16, 16, 0, 0, dIFCommonItemNames_RedSphere_tex, 16, 0 },
};

/* Sprite: RedSphere (16x16 rgba32) */
Sprite dIFCommonItemNames_RedSphere = {
	0, 0,
	16, 16,
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
	0, 3,
	(Bitmap*)dIFCommonItemNames_RedSphere_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
