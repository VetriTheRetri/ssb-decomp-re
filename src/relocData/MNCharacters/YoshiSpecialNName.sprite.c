/* Sprite: YoshiSpecialNName */

Gfx dMNCharacters_YoshiSpecialNName_dl[] = { gsSPEndDisplayList() };

/* Texture: YoshiSpecialNName (64x7 i4) */
u8 dMNCharacters_YoshiSpecialNName_tex[] = {
    #include <MNCharacters/YoshiSpecialNName.i4.inc.c>
};

Bitmap dMNCharacters_YoshiSpecialNName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_YoshiSpecialNName_tex, 7, 0 },
};

/* Sprite: YoshiSpecialNName (64x7 i4) */
Sprite dMNCharacters_YoshiSpecialNName = {
	0, 0,
	64, 7,
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
	(Bitmap*)dMNCharacters_YoshiSpecialNName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
