/* Sprite: DecalPause */

/* Texture: DecalPause (39(48)x12 i4) */
u8 dIFCommonBattlePause_DecalPause_tex[] = {
    #include <IFCommonBattlePause/DecalPause.i4.inc.c>
};

Bitmap dIFCommonBattlePause_DecalPause_bitmaps[] = {
	{ 39, 48, 0, 0, dIFCommonBattlePause_DecalPause_tex, 12, 0 },
};

/* Sprite: DecalPause (39x12 i4) */
Sprite dIFCommonBattlePause_DecalPause = {
	0, 0,
	39, 12,
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
	(Bitmap*)dIFCommonBattlePause_DecalPause_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
