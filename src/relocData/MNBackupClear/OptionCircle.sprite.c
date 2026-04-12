/* Sprite: OptionCircle */

Gfx dMNBackupClear_OptionCircle_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionCircle (40(48)x40 i4) */
u8 dMNBackupClear_OptionCircle_tex[] = {
    #include <MNBackupClear/OptionCircle.i4.inc.c>
};

Bitmap dMNBackupClear_OptionCircle_bitmaps[] = {
	{ 40, 48, 0, 0, dMNBackupClear_OptionCircle_tex, 40, 0 },
};

/* Sprite: OptionCircle (40x40 i4) */
Sprite dMNBackupClear_OptionCircle = {
	0, 0,
	40, 40,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	40, 40,
	4, 0,
	(Bitmap*)dMNBackupClear_OptionCircle_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
