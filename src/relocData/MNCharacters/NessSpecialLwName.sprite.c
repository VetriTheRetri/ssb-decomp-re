/* Sprite: NessSpecialLwName */

Gfx dMNCharacters_NessSpecialLwName_dl[] = { gsSPEndDisplayList() };

/* Texture: NessSpecialLwName (64x7 i4) */
u8 dMNCharacters_NessSpecialLwName_tex[] = {
    #include <MNCharacters/NessSpecialLwName.i4.inc.c>
};

Bitmap dMNCharacters_NessSpecialLwName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_NessSpecialLwName_tex, 7, 0 },
};

/* Sprite: NessSpecialLwName (64x7 i4) */
Sprite dMNCharacters_NessSpecialLwName = {
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
	(Bitmap*)dMNCharacters_NessSpecialLwName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
