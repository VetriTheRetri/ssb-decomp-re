/* Sprite: UnlockItemSwitch */

Gfx dMNMessage_UnlockItemSwitch_dl[] = { gsSPEndDisplayList() };

/* Texture: UnlockItemSwitch (216(224)x29 i4, 2 tiles) */
u8 dMNMessage_UnlockItemSwitch_tex[] = {
    #include <MNMessage/UnlockItemSwitch.i4.inc.c>
};

Bitmap dMNMessage_UnlockItemSwitch_bitmaps[] = {
	{ 216, 224, 0, 0, dMNMessage_UnlockItemSwitch_tex, 18, 0 },
	{ 216, 224, 0, 0, dMNMessage_UnlockItemSwitch_tex + 0x7E8, 11, 0 },
};

/* Sprite: UnlockItemSwitch (216x28 i4) */
Sprite dMNMessage_UnlockItemSwitch = {
	0, 0,
	216, 28,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	17, 18,
	4, 0,
	(Bitmap*)dMNMessage_UnlockItemSwitch_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
