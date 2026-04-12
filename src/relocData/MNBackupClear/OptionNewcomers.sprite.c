/* Sprite: OptionNewcomers */

Gfx dMNBackupClear_OptionNewcomers_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionNewcomers (131(144)x21 i4) */
u8 dMNBackupClear_OptionNewcomers_tex[] = {
    #include <MNBackupClear/OptionNewcomers.i4.inc.c>
};

Bitmap dMNBackupClear_OptionNewcomers_bitmaps[] = {
	{ 131, 144, 0, 0, dMNBackupClear_OptionNewcomers_tex, 21, 0 },
};

/* Sprite: OptionNewcomers (131x21 i4) */
Sprite dMNBackupClear_OptionNewcomers = {
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
	(Bitmap*)dMNBackupClear_OptionNewcomers_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
