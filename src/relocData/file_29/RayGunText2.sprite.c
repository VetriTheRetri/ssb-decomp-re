/* Sprite: RayGunText2 */

Gfx dRelocFile29_RayGunText2_dl[] = { gsSPEndDisplayList() };

/* Texture: RayGunText2 (47(48)x15 ia8) */
u8 dRelocFile29_RayGunText2_tex[] = {
    #include <file_29/RayGunText2.ia8.inc.c>
};

Bitmap dRelocFile29_RayGunText2_bitmaps[] = {
	{ 47, 48, 0, 0, dRelocFile29_RayGunText2_tex, 15, 0 },
};

/* Sprite: RayGunText2 (47x15 ia8) */
Sprite dRelocFile29_RayGunText2 = {
	0, 0,
	47, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dRelocFile29_RayGunText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
