/* Sprite: ItemColonText */

Gfx dRelocFile29_ItemColonText_dl[] = { gsSPEndDisplayList() };

/* Texture: ItemColonText (49(56)x15 ia8) */
u8 dRelocFile29_ItemColonText_tex[] = {
    #include <file_29/ItemColonText.ia8.inc.c>
};

Bitmap dRelocFile29_ItemColonText_bitmaps[] = {
	{ 49, 56, 0, 0, dRelocFile29_ItemColonText_tex, 15, 0 },
};

/* Sprite: ItemColonText (49x15 ia8) */
Sprite dRelocFile29_ItemColonText = {
	0, 0,
	49, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dRelocFile29_ItemColonText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
