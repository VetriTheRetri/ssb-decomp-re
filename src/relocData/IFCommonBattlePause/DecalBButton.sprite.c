/* Sprite: DecalBButton */

/* Texture: DecalBButton (13(16)x13 ia8) */
u8 dIFCommonBattlePause_DecalBButton_tex[] = {
    #include <IFCommonBattlePause/DecalBButton.ia8.inc.c>
};

Bitmap dIFCommonBattlePause_DecalBButton_bitmaps[] = {
	{ 13, 16, 0, 0, dIFCommonBattlePause_DecalBButton_tex, 13, 0 },
};

/* Sprite: DecalBButton (13x13 ia8) */
Sprite dIFCommonBattlePause_DecalBButton = {
	0, 0,
	13, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	3, 1,
	(Bitmap*)dIFCommonBattlePause_DecalBButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
