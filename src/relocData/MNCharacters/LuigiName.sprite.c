/* Sprite: LuigiName */

Gfx dMNCharacters_LuigiName_dl[] = { gsSPEndDisplayList() };

/* Texture: LuigiName (54(64)x48 i4c) */
u8 dMNCharacters_LuigiName_tex[] = {
    #include <MNCharacters/LuigiName.i4c.inc.c>
};

Bitmap dMNCharacters_LuigiName_bitmaps[] = {
	{ 54, 64, 0, 0, dMNCharacters_LuigiName_tex, 48, 0 },
};

/* Sprite: LuigiName (54x48 i4c) */
Sprite dMNCharacters_LuigiName = {
	0, 0,
	54, 48,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	48, 48,
	4, 4,
	(Bitmap*)dMNCharacters_LuigiName_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
