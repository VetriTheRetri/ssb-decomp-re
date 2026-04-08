/* Sprite: DecalPlus */

/* Texture: DecalPlus (8(16)x8 i4) */
u8 dIFCommonBattlePause_DecalPlus_tex[] = {
    #include <IFCommonBattlePause/DecalPlus.i4.inc.c>
};

Bitmap dIFCommonBattlePause_DecalPlus_bitmaps[] = {
	{ 8, 16, 0, 0, dIFCommonBattlePause_DecalPlus_tex, 8, 0 },
};

/* Sprite: DecalPlus (8x8 i4) */
Sprite dIFCommonBattlePause_DecalPlus = {
	0, 0,
	8, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	8, 8,
	4, 0,
	(Bitmap*)dIFCommonBattlePause_DecalPlus_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
