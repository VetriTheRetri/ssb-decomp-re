/* Sprite: Unknown2 */

Gfx dMNVSRecordMain_Unknown2_dl[] = { gsSPEndDisplayList() };

/* Texture: Unknown2 (57(64)x7 i4) */
u8 dMNVSRecordMain_Unknown2_tex[] = {
    #include <MNVSRecordMain/Unknown2.i4.inc.c>
};

Bitmap dMNVSRecordMain_Unknown2_bitmaps[] = {
	{ 57, 64, 0, 0, dMNVSRecordMain_Unknown2_tex, 7, 0 },
};

/* Sprite: Unknown2 (57x7 i4) */
Sprite dMNVSRecordMain_Unknown2 = {
	0, 0,
	57, 7,
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
	(Bitmap*)dMNVSRecordMain_Unknown2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
