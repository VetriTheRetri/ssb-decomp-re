/* Sprite: CaptainName */

Gfx dMNCharacters_CaptainName_dl[] = { gsSPEndDisplayList() };

/* Texture: CaptainName (91(96)x79 i4c) */
u8 dMNCharacters_CaptainName_tex[] = {
    #include <MNCharacters/CaptainName.i4c.inc.c>
};

Bitmap dMNCharacters_CaptainName_bitmaps[] = {
	{ 91, 96, 0, 0, dMNCharacters_CaptainName_tex, 79, 0 },
};

/* Sprite: CaptainName (91x79 i4c) */
Sprite dMNCharacters_CaptainName = {
	0, 0,
	91, 79,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	79, 79,
	4, 4,
	(Bitmap*)dMNCharacters_CaptainName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
