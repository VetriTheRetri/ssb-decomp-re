/* Sprite: UnlockPurin */

Gfx dMNMessage_UnlockPurin_dl[] = { gsSPEndDisplayList() };

/* Texture: UnlockPurin (230(240)x31 i4, 2 tiles) */
u8 dMNMessage_UnlockPurin_tex[] = {
    #include <MNMessage/UnlockPurin.i4.inc.c>
};

Bitmap dMNMessage_UnlockPurin_bitmaps[] = {
	{ 230, 240, 0, 0, dMNMessage_UnlockPurin_tex, 17, 0 },
	{ 230, 240, 0, 0, dMNMessage_UnlockPurin_tex + 0x800, 14, 0 },
};

/* Sprite: UnlockPurin (230x30 i4) */
Sprite dMNMessage_UnlockPurin = {
	0, 0,
	230, 30,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	16, 17,
	4, 0,
	(Bitmap*)dMNMessage_UnlockPurin_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
