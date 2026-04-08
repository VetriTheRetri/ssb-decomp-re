/* Sprite: DecalReset */

/* Texture: DecalReset (38(48)x9 i4) */
u8 dIFCommonBattlePause_DecalReset_tex[] = {
    #include <IFCommonBattlePause/DecalReset.i4.inc.c>
};

Bitmap dIFCommonBattlePause_DecalReset_bitmaps[] = {
	{ 38, 48, 0, 0, dIFCommonBattlePause_DecalReset_tex, 9, 0 },
};

/* Sprite: DecalReset (38x9 i4) */
Sprite dIFCommonBattlePause_DecalReset = {
	0, 0,
	38, 9,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	9, 9,
	4, 0,
	(Bitmap*)dIFCommonBattlePause_DecalReset_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
