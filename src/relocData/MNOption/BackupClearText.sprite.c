/* Sprite: BackupClearText */

Gfx dMNOption_BackupClearText_dl[] = { gsSPEndDisplayList() };

/* Texture: BackupClearText (134(144)x21 i4) */
u8 dMNOption_BackupClearText_tex[] = {
    #include <MNOption/BackupClearText.i4.inc.c>
};

Bitmap dMNOption_BackupClearText_bitmaps[] = {
	{ 134, 144, 0, 0, dMNOption_BackupClearText_tex, 21, 0 },
};

/* Sprite: BackupClearText (134x21 i4) */
Sprite dMNOption_BackupClearText = {
	0, 0,
	134, 21,
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
	(Bitmap*)dMNOption_BackupClearText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
