/* Sprite: Cursor */

Gfx dMNMaps_Cursor_dl[] = { gsSPEndDisplayList() };

/* Texture: Cursor (62(64)x50 i4) */
u8 dMNMaps_Cursor_tex[] = {
    #include <MNMaps/Cursor.i4.inc.c>
};

Bitmap dMNMaps_Cursor_bitmaps[] = {
	{ 62, 64, 0, 0, dMNMaps_Cursor_tex, 50, 0 },
};

/* Sprite: Cursor (62x50 i4) */
Sprite dMNMaps_Cursor = {
	0, 0,
	62, 50,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	50, 50,
	4, 0,
	(Bitmap*)dMNMaps_Cursor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
