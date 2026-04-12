/* Sprite: OptionAllDataClear */

Gfx dMNBackupClear_OptionAllDataClear_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionAllDataClear (131(144)x21 i4) */
u8 dMNBackupClear_OptionAllDataClear_tex[] = {
    #include <MNBackupClear/OptionAllDataClear.i4.inc.c>
};

Bitmap dMNBackupClear_OptionAllDataClear_bitmaps[] = {
	{ 131, 144, 0, 0, dMNBackupClear_OptionAllDataClear_tex, 21, 0 },
};

/* Sprite: OptionAllDataClear (131x21 i4) */
Sprite dMNBackupClear_OptionAllDataClear = {
	0, 0,
	131, 21,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	21, 21,
	4, 0,
	(Bitmap*)dMNBackupClear_OptionAllDataClear_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
