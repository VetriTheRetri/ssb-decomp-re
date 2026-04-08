/* Sprite: BackupClearTextJap */

Gfx dMNOption_BackupClearTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: BackupClearTextJap (115(120)x15 ia8) */
u8 dMNOption_BackupClearTextJap_tex[] = {
    #include <MNOption/BackupClearTextJap.ia8.inc.c>
};

Bitmap dMNOption_BackupClearTextJap_bitmaps[] = {
	{ 115, 120, 0, 0, dMNOption_BackupClearTextJap_tex, 15, 0 },
};

/* Sprite: BackupClearTextJap (115x15 ia8) */
Sprite dMNOption_BackupClearTextJap = {
	0, 0,
	115, 15,
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
	(Bitmap*)dMNOption_BackupClearTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
