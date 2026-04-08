/* Sprite: QuestionMark */

Gfx dMNMaps_QuestionMark_dl[] = { gsSPEndDisplayList() };

/* Texture: QuestionMark (24(32)x44 i4) */
u8 dMNMaps_QuestionMark_tex[] = {
    #include <MNMaps/QuestionMark.i4.inc.c>
};

Bitmap dMNMaps_QuestionMark_bitmaps[] = {
	{ 24, 32, 0, 0, dMNMaps_QuestionMark_tex, 44, 0 },
};

/* Sprite: QuestionMark (24x44 i4) */
Sprite dMNMaps_QuestionMark = {
	0, 0,
	24, 44,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	44, 44,
	4, 0,
	(Bitmap*)dMNMaps_QuestionMark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
