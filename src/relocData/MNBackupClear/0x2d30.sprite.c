/* Sprite: 0x2d30 */

Gfx dMNBackupClear_0x2d30_dl[] = { gsSPEndDisplayList() };

/* Texture: 0x2d30 (70(72)x15 ia8) */
u8 dMNBackupClear_0x2d30_tex[] = {
    #include <MNBackupClear/0x2d30.ia8.inc.c>
};

Bitmap dMNBackupClear_0x2d30_bitmaps[] = {
	{ 70, 72, 0, 0, dMNBackupClear_0x2d30_tex, 15, 0 },
};

/* Sprite: 0x2d30 (70x15 ia8) */
Sprite dMNBackupClear_0x2d30 = {
	0, 0,
	70, 15,
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
	(Bitmap*)dMNBackupClear_0x2d30_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
