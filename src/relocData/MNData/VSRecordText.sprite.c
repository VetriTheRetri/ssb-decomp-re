/* Sprite: VSRecordText */

Gfx dMNData_VSRecordText_dl[] = { gsSPEndDisplayList() };

/* Texture: VSRecordText (107(112)x17 i4) */
u8 dMNData_VSRecordText_tex[] = {
    #include <MNData/VSRecordText.i4.inc.c>
};

Bitmap dMNData_VSRecordText_bitmaps[] = {
	{ 107, 112, 0, 0, dMNData_VSRecordText_tex, 17, 0 },
};

/* Sprite: VSRecordText (107x17 i4) */
Sprite dMNData_VSRecordText = {
	0, 0,
	107, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	4, 0,
	(Bitmap*)dMNData_VSRecordText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
