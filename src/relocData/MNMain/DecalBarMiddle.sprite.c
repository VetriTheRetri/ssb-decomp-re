/* Sprite: DecalBarMiddle */

Gfx dMNMain_DecalBarMiddle_dl[] = { gsSPEndDisplayList() };

/* Texture: DecalBarMiddle (8(16)x38 i4) */
u8 dMNMain_DecalBarMiddle_tex[] = {
    #include <MNMain/DecalBarMiddle.i4.inc.c>
};

Bitmap dMNMain_DecalBarMiddle_bitmaps[] = {
	{ 8, 16, 0, 0, dMNMain_DecalBarMiddle_tex, 38, 0 },
};

/* Sprite: DecalBarMiddle (8x38 i4) */
Sprite dMNMain_DecalBarMiddle = {
	0, 0,
	8, 38,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	38, 38,
	4, 0,
	(Bitmap*)dMNMain_DecalBarMiddle_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
