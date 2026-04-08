/* Sprite: KirbyName */

Gfx dMNCharacters_KirbyName_dl[] = { gsSPEndDisplayList() };

/* Texture: KirbyName (64x46 i4c) */
u8 dMNCharacters_KirbyName_tex[] = {
    #include <MNCharacters/KirbyName.i4c.inc.c>
};

Bitmap dMNCharacters_KirbyName_bitmaps[] = {
	{ 64, 64, 0, 0, dMNCharacters_KirbyName_tex, 46, 0 },
};

/* Sprite: KirbyName (64x46 i4c) */
Sprite dMNCharacters_KirbyName = {
	0, 0,
	64, 46,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	46, 46,
	4, 4,
	(Bitmap*)dMNCharacters_KirbyName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
