/* Sprite: Cursor */

Gfx dMNVSItemSwitch_Cursor_dl[] = { gsSPEndDisplayList() };

/* Texture: Cursor (183(192)x13 i4) */
u8 dMNVSItemSwitch_Cursor_tex[] = {
    #include <MNVSItemSwitch/Cursor.i4.inc.c>
};

Bitmap dMNVSItemSwitch_Cursor_bitmaps[] = {
	{ 183, 192, 0, 0, dMNVSItemSwitch_Cursor_tex, 13, 0 },
};

/* Sprite: Cursor (183x13 i4) */
Sprite dMNVSItemSwitch_Cursor = {
	0, 0,
	183, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 0,
	(Bitmap*)dMNVSItemSwitch_Cursor_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
