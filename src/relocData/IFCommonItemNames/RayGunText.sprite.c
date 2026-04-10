/* Sprite: RayGunText */

Gfx dIFCommonItemNames_RayGunText_dl[] = { gsSPEndDisplayList() };

/* Texture: RayGunText (47(48)x16 ia8) */
u8 dIFCommonItemNames_RayGunText_tex[] = {
    #include <IFCommonItemNames/RayGunText.ia8.inc.c>
};

Bitmap dIFCommonItemNames_RayGunText_bitmaps[] = {
	{ 47, 48, 0, 0, dIFCommonItemNames_RayGunText_tex, 16, 0 },
};

/* Sprite: RayGunText (47x16 ia8) */
Sprite dIFCommonItemNames_RayGunText = {
	0, 0,
	47, 16,
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
	(Bitmap*)dIFCommonItemNames_RayGunText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
