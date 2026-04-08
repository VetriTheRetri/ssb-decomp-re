/* Sprite: ItemList */

Gfx dMNVSItemSwitch_ItemList_dl[] = { gsSPEndDisplayList() };

/* Texture: ItemList (112x167 i4, 3 tiles) */
u8 dMNVSItemSwitch_ItemList_tex[] = {
    #include <MNVSItemSwitch/ItemList.i4.inc.c>
};

Bitmap dMNVSItemSwitch_ItemList_bitmaps[] = {
	{ 112, 112, 0, 0, dMNVSItemSwitch_ItemList_tex, 72, 0 },
	{ 112, 112, 0, 0, dMNVSItemSwitch_ItemList_tex + 0xFC8, 72, 0 },
	{ 112, 112, 0, 0, dMNVSItemSwitch_ItemList_tex + 0x1F90, 23, 0 },
};

/* Sprite: ItemList (112x165 i4) */
Sprite dMNVSItemSwitch_ItemList = {
	0, 0,
	112, 165,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	3, 60,
	71, 72,
	4, 0,
	(Bitmap*)dMNVSItemSwitch_ItemList_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
