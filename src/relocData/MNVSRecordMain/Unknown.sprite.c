/* Sprite: Unknown */

Gfx dMNVSRecordMain_Unknown_dl[] = { gsSPEndDisplayList() };

/* Texture: Unknown (18(32)x9 i4) */
u8 dMNVSRecordMain_Unknown_tex[] = {
    #include <MNVSRecordMain/Unknown.i4.inc.c>
};

Bitmap dMNVSRecordMain_Unknown_bitmaps[] = {
	{ 18, 32, 0, 0, dMNVSRecordMain_Unknown_tex, 9, 0 },
};

/* Sprite: Unknown (18x9 i4) */
Sprite dMNVSRecordMain_Unknown = {
	0, 0,
	18, 9,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	9, 9,
	4, 0,
	(Bitmap*)dMNVSRecordMain_Unknown_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
