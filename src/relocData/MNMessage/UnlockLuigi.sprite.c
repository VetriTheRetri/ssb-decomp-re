/* Sprite: UnlockLuigi */

Gfx dMNMessage_UnlockLuigi_dl[] = { gsSPEndDisplayList() };

/* Texture: UnlockLuigi (148(160)x31 i4, 2 tiles) */
u8 dMNMessage_UnlockLuigi_tex[] = {
    #include <MNMessage/UnlockLuigi.i4.inc.c>
};

Bitmap dMNMessage_UnlockLuigi_bitmaps[] = {
	{ 148, 160, 0, 0, dMNMessage_UnlockLuigi_tex, 25, 0 },
	{ 148, 160, 0, 0, dMNMessage_UnlockLuigi_tex + 0x7D8, 6, 0 },
};

/* Sprite: UnlockLuigi (148x30 i4) */
Sprite dMNMessage_UnlockLuigi = {
	0, 0,
	148, 30,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	24, 25,
	4, 0,
	(Bitmap*)dMNMessage_UnlockLuigi_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
