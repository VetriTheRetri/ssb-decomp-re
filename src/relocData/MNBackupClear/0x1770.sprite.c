/* Sprite: 0x1770 */

Gfx dMNBackupClear_0x1770_dl[] = { gsSPEndDisplayList() };

/* Texture: 0x1770 (88x15 ia8) */
u8 dMNBackupClear_0x1770_tex[] = {
    #include <MNBackupClear/0x1770.ia8.inc.c>
};

Bitmap dMNBackupClear_0x1770_bitmaps[] = {
	{ 88, 88, 0, 0, dMNBackupClear_0x1770_tex, 15, 0 },
};

/* Sprite: 0x1770 (88x15 ia8) */
Sprite dMNBackupClear_0x1770 = {
	0, 0,
	88, 15,
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
	(Bitmap*)dMNBackupClear_0x1770_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
