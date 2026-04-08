/* Sprite: KirbySpecialNName */

Gfx dMNCharacters_KirbySpecialNName_dl[] = { gsSPEndDisplayList() };

/* Texture: KirbySpecialNName (64x8 i4, 2 tiles) */
u8 dMNCharacters_KirbySpecialNName_tex[] = {
    #include <MNCharacters/KirbySpecialNName.i4.inc.c>
};

Bitmap dMNCharacters_KirbySpecialNName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_KirbySpecialNName_tex, 7, 0 },
	{ 64, 64, 0, 0, dMNCharacters_KirbySpecialNName_tex + 0xE8, 1, 0 },
};

/* Sprite: KirbySpecialNName (64x8 i4) */
Sprite dMNCharacters_KirbySpecialNName = {
	0, 0,
	64, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	7, 7,
	4, 0,
	(Bitmap*)dMNCharacters_KirbySpecialNName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
