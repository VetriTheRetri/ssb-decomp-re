/* Sprite: OptionNo */

/* Sprite: OptionNo (48x48 ci4) */

Bitmap dMNBackupClear_OptionNo_bitmaps[] = {
	{ 48, 48, 0, 0, dMNBackupClear_OptionNo_tex, 48, 0 },
};

Sprite dMNBackupClear_OptionNo = {
	0, 0,
	48, 48,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNBackupClear_OptionNoHighlight_Palette,
	0, 1,
	1, 36,
	48, 48,
	2, 0,
	(Bitmap*)dMNBackupClear_OptionNo_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
