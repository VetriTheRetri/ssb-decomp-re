/* Sprite: AreYouSureText */

Gfx dMNBackupClear_AreYouSureText_dl[] = { gsSPEndDisplayList() };

/* Texture: AreYouSureText (202(208)x14 i4) */
u8 dMNBackupClear_AreYouSureText_tex[] = {
    #include <MNBackupClear/AreYouSureText.i4.inc.c>
};

Bitmap dMNBackupClear_AreYouSureText_bitmaps[] = {
	{ 202, 208, 0, 0, dMNBackupClear_AreYouSureText_tex, 14, 0 },
};

/* Sprite: AreYouSureText (202x14 i4) */
Sprite dMNBackupClear_AreYouSureText = {
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
	(Bitmap*)dMNBackupClear_AreYouSureText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
