/* Sprite: NameTagTall */

Gfx dMNCharacters_NameTagTall_dl[] = { gsSPEndDisplayList() };

/* Texture: NameTagTall (119(128)x89 i4c, 2 tiles) */
u8 dMNCharacters_NameTagTall_tex[] = {
    #include <MNCharacters/NameTagTall.i4c.inc.c>
};

Bitmap dMNCharacters_NameTagTall_bitmaps[] = {
	{ 119, 128, 0, 0, dMNCharacters_NameTagTall_tex, 64, 0 },
	{ 119, 128, 0, 0, dMNCharacters_NameTagTall_tex + 0x1008, 25, 0 },
};

/* Sprite: NameTagTall (119x88 i4c) */
Sprite dMNCharacters_NameTagTall = {
	0, 0,
	119, 88,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	63, 64,
	4, 4,
	(Bitmap*)dMNCharacters_NameTagTall_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
