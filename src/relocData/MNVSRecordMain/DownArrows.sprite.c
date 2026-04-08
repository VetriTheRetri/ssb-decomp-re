/* Sprite: DownArrows */

Gfx dMNVSRecordMain_DownArrows_dl[] = { gsSPEndDisplayList() };

/* Texture: DownArrows (16x6 i4) */
u8 dMNVSRecordMain_DownArrows_tex[] = {
    #include <MNVSRecordMain/DownArrows.i4.inc.c>
};

Bitmap dMNVSRecordMain_DownArrows_bitmaps[] = {
	{ 16, 16, 0, 0, dMNVSRecordMain_DownArrows_tex, 6, 0 },
};

/* Sprite: DownArrows (16x6 i4) */
Sprite dMNVSRecordMain_DownArrows = {
	0, 0,
	16, 6,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	6, 6,
	4, 0,
	(Bitmap*)dMNVSRecordMain_DownArrows_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
