/* Sprite: DecalControlStick */

Gfx dIFCommonBattlePause_DecalControlStick_dl[] = { gsSPEndDisplayList() };

/* Texture: DecalControlStick (23(24)x22 ia8) */
u8 dIFCommonBattlePause_DecalControlStick_tex[] = {
    #include <IFCommonBattlePause/DecalControlStick.ia8.inc.c>
};

Bitmap dIFCommonBattlePause_DecalControlStick_bitmaps[] = {
	{ 23, 24, 0, 0, dIFCommonBattlePause_DecalControlStick_tex, 22, 0 },
};

/* Sprite: DecalControlStick (23x22 ia8) */
Sprite dIFCommonBattlePause_DecalControlStick = {
	0, 0,
	23, 22,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	22, 22,
	3, 1,
	(Bitmap*)dIFCommonBattlePause_DecalControlStick_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
