/* Sprite: Cursor */

Gfx dMN1PContinue_Cursor_dl[] = { gsSPEndDisplayList() };

/* Texture: Cursor (64x42 ia8) */
u8 dMN1PContinue_Cursor_tex[] = {
    #include <MN1PContinue/Cursor.ia8.inc.c>
};

Bitmap dMN1PContinue_Cursor_bitmaps[] = {
	{ 64, 64, 0, 0, dMN1PContinue_Cursor_tex, 42, 0 },
};

/* Sprite: Cursor (64x42 ia8) */
Sprite dMN1PContinue_Cursor = {
	0, 0,
	64, 42,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	42, 42,
	3, 1,
	(Bitmap*)dMN1PContinue_Cursor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
