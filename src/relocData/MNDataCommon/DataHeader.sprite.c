/* Sprite: DataHeader */

Gfx dMNDataCommon_DataHeader_dl[] = { gsSPEndDisplayList() };

/* Texture: DataHeader (272x21 i4) */
u8 dMNDataCommon_DataHeader_tex[] = {
    #include <MNDataCommon/DataHeader.i4.inc.c>
};

Bitmap dMNDataCommon_DataHeader_bitmaps[] = {
	{ 272, 272, 0, 0, dMNDataCommon_DataHeader_tex, 21, 0 },
};

/* Sprite: DataHeader (272x21 i4) */
Sprite dMNDataCommon_DataHeader = {
	0, 0,
	272, 21,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	21, 21,
	4, 0,
	(Bitmap*)dMNDataCommon_DataHeader_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
