/* Sprite: IsOkayText */

Gfx dMNBackupClear_IsOkayText_dl[] = { gsSPEndDisplayList() };

/* Texture: IsOkayText (202(208)x14 i4) */
u8 dMNBackupClear_IsOkayText_tex[] = {
    #include <MNBackupClear/IsOkayText.i4.inc.c>
};

Bitmap dMNBackupClear_IsOkayText_bitmaps[] = {
	{ 202, 208, 0, 0, dMNBackupClear_IsOkayText_tex, 14, 0 },
};

/* Sprite: IsOkayText (202x14 i4) */
Sprite dMNBackupClear_IsOkayText = {
	0, 0,
	202, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 0,
	(Bitmap*)dMNBackupClear_IsOkayText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
