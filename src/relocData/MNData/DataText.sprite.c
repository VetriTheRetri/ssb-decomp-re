/* Sprite: DataText */

Gfx dMNData_DataText_dl[] = { gsSPEndDisplayList() };

/* Texture: DataText (54(64)x49 i4) */
u8 dMNData_DataText_tex[] = {
    #include <MNData/DataText.i4.inc.c>
};

Bitmap dMNData_DataText_bitmaps[] = {
	{ 54, 64, 0, 0, dMNData_DataText_tex, 49, 0 },
};

/* Sprite: DataText (54x49 i4) */
Sprite dMNData_DataText = {
	0, 0,
	54, 49,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	49, 49,
	4, 0,
	(Bitmap*)dMNData_DataText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
