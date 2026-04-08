/* Sprite: DecalRTrigger */

/* Texture: DecalRTrigger (16x12 ia8) */
u8 dIFCommonBattlePause_DecalRTrigger_tex[] = {
    #include <IFCommonBattlePause/DecalRTrigger.ia8.inc.c>
};

Bitmap dIFCommonBattlePause_DecalRTrigger_bitmaps[] = {
	{ 16, 16, 0, 0, dIFCommonBattlePause_DecalRTrigger_tex, 12, 0 },
};

/* Sprite: DecalRTrigger (16x12 ia8) */
Sprite dIFCommonBattlePause_DecalRTrigger = {
	0, 0,
	16, 12,
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
	3, 1,
	(Bitmap*)dIFCommonBattlePause_DecalRTrigger_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
