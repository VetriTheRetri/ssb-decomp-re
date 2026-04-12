/* Sprite: HeaderBackupClear */

Gfx dMNBackupClear_HeaderBackupClear_dl[] = { gsSPEndDisplayList() };

/* Texture: HeaderBackupClear (149(152)x19 ia8) */
u8 dMNBackupClear_HeaderBackupClear_tex[] = {
    #include <MNBackupClear/HeaderBackupClear.ia8.inc.c>
};

Bitmap dMNBackupClear_HeaderBackupClear_bitmaps[] = {
	{ 149, 152, 0, 0, dMNBackupClear_HeaderBackupClear_tex, 19, 0 },
};

/* Sprite: HeaderBackupClear (149x19 ia8) */
Sprite dMNBackupClear_HeaderBackupClear = {
	0, 0,
	149, 19,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	19, 19,
	3, 1,
	(Bitmap*)dMNBackupClear_HeaderBackupClear_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
