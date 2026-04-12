/* Sprite: 0x1b98 */

Gfx dMNBackupClear_0x1b98_dl[] = { gsSPEndDisplayList() };

/* Texture: 0x1b98 (58(64)x15 ia8) */
u8 dMNBackupClear_0x1b98_tex[] = {
    #include <MNBackupClear/0x1b98.ia8.inc.c>
};

Bitmap dMNBackupClear_0x1b98_bitmaps[] = {
	{ 58, 64, 0, 0, dMNBackupClear_0x1b98_tex, 15, 0 },
};

/* Sprite: 0x1b98 (58x15 ia8) */
Sprite dMNBackupClear_0x1b98 = {
	0, 0,
	58, 15,
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
	(Bitmap*)dMNBackupClear_0x1b98_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
