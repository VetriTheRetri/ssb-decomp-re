/* Sprite: DecalAButton */

/* Texture: DecalAButton (13(16)x13 ia8) */
u8 dIFCommonBattlePause_DecalAButton_tex[] = {
    #include <IFCommonBattlePause/DecalAButton.ia8.inc.c>
};

Bitmap dIFCommonBattlePause_DecalAButton_bitmaps[] = {
	{ 13, 16, 0, 0, dIFCommonBattlePause_DecalAButton_tex, 13, 0 },
};

/* Sprite: DecalAButton (13x13 ia8) */
Sprite dIFCommonBattlePause_DecalAButton = {
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
	(Bitmap*)dIFCommonBattlePause_DecalAButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
