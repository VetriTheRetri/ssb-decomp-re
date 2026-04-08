/* Sprite: DataText */

Gfx dMNMain_DataText_dl[] = { gsSPEndDisplayList() };

/* Texture: DataText (45(48)x13 i4) */
u8 dMNMain_DataText_tex[] = {
    #include <MNMain/DataText.i4.inc.c>
};

Bitmap dMNMain_DataText_bitmaps[] = {
	{ 45, 48, 0, 0, dMNMain_DataText_tex, 13, 0 },
};

/* Sprite: DataText (45x13 i4) */
Sprite dMNMain_DataText = {
	0, 0,
	45, 13,
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
	(Bitmap*)dMNMain_DataText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
