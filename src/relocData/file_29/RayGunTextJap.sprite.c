/* Sprite: RayGunTextJap */

Gfx dRelocFile29_RayGunTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: RayGunTextJap (43(48)x12 i4) */
u8 dRelocFile29_RayGunTextJap_tex[] = {
    #include <file_29/RayGunTextJap.i4.inc.c>
};

Bitmap dRelocFile29_RayGunTextJap_bitmaps[] = {
	{ 43, 48, 0, 0, dRelocFile29_RayGunTextJap_tex, 12, 0 },
};

/* Sprite: RayGunTextJap (43x12 i4) */
Sprite dRelocFile29_RayGunTextJap = {
	0, 0,
	43, 12,
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
	(Bitmap*)dRelocFile29_RayGunTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
