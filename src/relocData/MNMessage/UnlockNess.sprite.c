/* Sprite: UnlockNess */

Gfx dMNMessage_UnlockNess_dl[] = { gsSPEndDisplayList() };

/* Texture: UnlockNess (252(256)x14 i4) */
u8 dMNMessage_UnlockNess_tex[] = {
    #include <MNMessage/UnlockNess.i4.inc.c>
};

Bitmap dMNMessage_UnlockNess_bitmaps[] = {
	{ 252, 256, 0, 0, dMNMessage_UnlockNess_tex, 14, 0 },
};

/* Sprite: UnlockNess (252x14 i4) */
Sprite dMNMessage_UnlockNess = {
	0, 0,
	252, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 0,
	(Bitmap*)dMNMessage_UnlockNess_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
