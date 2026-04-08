/* Sprite: DecalLTrigger */

Gfx dIFCommonBattlePause_DecalLTrigger_dl[] = { gsSPEndDisplayList() };

/* Texture: DecalLTrigger (16x12 ia8) */
u8 dIFCommonBattlePause_DecalLTrigger_tex[] = {
    #include <IFCommonBattlePause/DecalLTrigger.ia8.inc.c>
};

Bitmap dIFCommonBattlePause_DecalLTrigger_bitmaps[] = {
	{ 16, 16, 0, 0, dIFCommonBattlePause_DecalLTrigger_tex, 12, 0 },
};

/* Sprite: DecalLTrigger (16x12 ia8) */
Sprite dIFCommonBattlePause_DecalLTrigger = {
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
	(Bitmap*)dIFCommonBattlePause_DecalLTrigger_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
