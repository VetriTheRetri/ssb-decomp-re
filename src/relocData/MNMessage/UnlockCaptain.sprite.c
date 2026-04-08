/* Sprite: UnlockCaptain */

Gfx dMNMessage_UnlockCaptain_dl[] = { gsSPEndDisplayList() };

/* Texture: UnlockCaptain (212(224)x31 i4, 2 tiles) */
u8 dMNMessage_UnlockCaptain_tex[] = {
    #include <MNMessage/UnlockCaptain.i4.inc.c>
};

Bitmap dMNMessage_UnlockCaptain_bitmaps[] = {
	{ 212, 224, 0, 0, dMNMessage_UnlockCaptain_tex, 18, 0 },
	{ 212, 224, 0, 0, dMNMessage_UnlockCaptain_tex + 0x7E8, 13, 0 },
};

/* Sprite: UnlockCaptain (212x30 i4) */
Sprite dMNMessage_UnlockCaptain = {
	0, 0,
	212, 30,
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
	(Bitmap*)dMNMessage_UnlockCaptain_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
