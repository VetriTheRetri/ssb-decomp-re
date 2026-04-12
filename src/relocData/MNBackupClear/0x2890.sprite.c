/* Sprite: 0x2890 */

Gfx dMNBackupClear_0x2890_dl[] = { gsSPEndDisplayList() };

/* Texture: 0x2890 (84(88)x15 ia8) */
u8 dMNBackupClear_0x2890_tex[] = {
    #include <MNBackupClear/0x2890.ia8.inc.c>
};

Bitmap dMNBackupClear_0x2890_bitmaps[] = {
	{ 84, 88, 0, 0, dMNBackupClear_0x2890_tex, 15, 0 },
};

/* Sprite: 0x2890 (84x15 ia8) */
Sprite dMNBackupClear_0x2890 = {
	0, 0,
	84, 15,
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
	(Bitmap*)dMNBackupClear_0x2890_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
