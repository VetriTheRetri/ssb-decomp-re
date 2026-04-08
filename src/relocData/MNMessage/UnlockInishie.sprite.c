/* Sprite: UnlockInishie */

Gfx dMNMessage_UnlockInishie_dl[] = { gsSPEndDisplayList() };

/* Texture: UnlockInishie (228(240)x12 i4) */
u8 dMNMessage_UnlockInishie_tex[] = {
    #include <MNMessage/UnlockInishie.i4.inc.c>
};

Bitmap dMNMessage_UnlockInishie_bitmaps[] = {
	{ 228, 240, 0, 0, dMNMessage_UnlockInishie_tex, 12, 0 },
};

/* Sprite: UnlockInishie (228x12 i4) */
Sprite dMNMessage_UnlockInishie = {
	0, 0,
	228, 12,
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
	4, 0,
	(Bitmap*)dMNMessage_UnlockInishie_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
