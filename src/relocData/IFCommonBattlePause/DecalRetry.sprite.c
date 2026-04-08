/* Sprite: DecalRetry */

Gfx dIFCommonBattlePause_DecalRetry_dl[] = { gsSPEndDisplayList() };

/* Texture: DecalRetry (37(48)x10 i4) */
u8 dIFCommonBattlePause_DecalRetry_tex[] = {
    #include <IFCommonBattlePause/DecalRetry.i4.inc.c>
};

Bitmap dIFCommonBattlePause_DecalRetry_bitmaps[] = {
	{ 37, 48, 0, 0, dIFCommonBattlePause_DecalRetry_tex, 10, 0 },
};

/* Sprite: DecalRetry (37x10 i4) */
Sprite dIFCommonBattlePause_DecalRetry = {
	0, 0,
	37, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	10, 10,
	4, 0,
	(Bitmap*)dIFCommonBattlePause_DecalRetry_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
