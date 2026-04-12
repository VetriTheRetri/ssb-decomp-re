/* Sprite: OptionVSRecord */

Gfx dMNBackupClear_OptionVSRecord_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionVSRecord (131(144)x21 i4) */
u8 dMNBackupClear_OptionVSRecord_tex[] = {
    #include <MNBackupClear/OptionVSRecord.i4.inc.c>
};

Bitmap dMNBackupClear_OptionVSRecord_bitmaps[] = {
	{ 131, 144, 0, 0, dMNBackupClear_OptionVSRecord_tex, 21, 0 },
};

/* Sprite: OptionVSRecord (131x21 i4) */
Sprite dMNBackupClear_OptionVSRecord = {
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
	(Bitmap*)dMNBackupClear_OptionVSRecord_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
