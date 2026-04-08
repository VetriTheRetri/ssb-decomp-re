/* Sprite: WarningText */

Gfx dMNOption_WarningText_dl[] = { gsSPEndDisplayList() };

/* Texture: WarningText (76(80)x14 ia8) */
u8 dMNOption_WarningText_tex[] = {
    #include <MNOption/WarningText.ia8.inc.c>
};

Bitmap dMNOption_WarningText_bitmaps[] = {
	{ 76, 80, 0, 0, dMNOption_WarningText_tex, 14, 0 },
};

/* Sprite: WarningText (76x14 ia8) */
Sprite dMNOption_WarningText = {
	0, 0,
	76, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	3, 1,
	(Bitmap*)dMNOption_WarningText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
