/* Sprite: Unknown1 */

Gfx dMNVSRecordMain_Unknown1_dl[] = { gsSPEndDisplayList() };

/* Texture: Unknown1 (60(64)x7 i4) */
u8 dMNVSRecordMain_Unknown1_tex[] = {
    #include <MNVSRecordMain/Unknown1.i4.inc.c>
};

Bitmap dMNVSRecordMain_Unknown1_bitmaps[] = {
	{ 60, 64, 0, 0, dMNVSRecordMain_Unknown1_tex, 7, 0 },
};

/* Sprite: Unknown1 (60x7 i4) */
Sprite dMNVSRecordMain_Unknown1 = {
	0, 0,
	60, 7,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	7, 7,
	4, 0,
	(Bitmap*)dMNVSRecordMain_Unknown1_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
