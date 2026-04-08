/* Sprite: DecalZTrigger */

/* Texture: DecalZTrigger (9(16)x15 ia8) */
u8 dIFCommonBattlePause_DecalZTrigger_tex[] = {
    #include <IFCommonBattlePause/DecalZTrigger.ia8.inc.c>
};

Bitmap dIFCommonBattlePause_DecalZTrigger_bitmaps[] = {
	{ 9, 16, 0, 0, dIFCommonBattlePause_DecalZTrigger_tex, 15, 0 },
};

/* Sprite: DecalZTrigger (9x15 ia8) */
Sprite dIFCommonBattlePause_DecalZTrigger = {
	0, 0,
	9, 15,
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
	(Bitmap*)dIFCommonBattlePause_DecalZTrigger_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
