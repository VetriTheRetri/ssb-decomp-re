/* Sprite: Digit4 */

Gfx dMNVSRecordMain_Digit4_dl[] = { gsSPEndDisplayList() };

/* Texture: Digit4 (4(16)x7 ia4) */
u8 dMNVSRecordMain_Digit4_tex[] = {
    #include <MNVSRecordMain/Digit4.ia4.inc.c>
};

Bitmap dMNVSRecordMain_Digit4_bitmaps[] = {
	{ 4, 16, 0, 0, dMNVSRecordMain_Digit4_tex, 7, 0 },
};

/* Sprite: Digit4 (4x7 ia4) */
Sprite dMNVSRecordMain_Digit4 = {
	0, 0,
	4, 7,
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
	3, 0,
	(Bitmap*)dMNVSRecordMain_Digit4_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
