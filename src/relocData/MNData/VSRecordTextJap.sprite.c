/* Sprite: VSRecordTextJap */

Gfx dMNData_VSRecordTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: VSRecordTextJap (59(64)x15 ia8) */
u8 dMNData_VSRecordTextJap_tex[] = {
    #include <MNData/VSRecordTextJap.ia8.inc.c>
};

Bitmap dMNData_VSRecordTextJap_bitmaps[] = {
	{ 59, 64, 0, 0, dMNData_VSRecordTextJap_tex, 15, 0 },
};

/* Sprite: VSRecordTextJap (59x15 ia8) */
Sprite dMNData_VSRecordTextJap = {
	0, 0,
	59, 15,
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
	(Bitmap*)dMNData_VSRecordTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
