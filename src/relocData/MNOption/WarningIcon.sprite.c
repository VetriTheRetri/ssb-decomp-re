/* Sprite: WarningIcon */

Gfx dMNOption_WarningIcon_dl[] = { gsSPEndDisplayList() };

/* Texture: WarningIcon (41(48)x36 ia8) */
u8 dMNOption_WarningIcon_tex[] = {
    #include <MNOption/WarningIcon.ia8.inc.c>
};

Bitmap dMNOption_WarningIcon_bitmaps[] = {
	{ 41, 48, 0, 0, dMNOption_WarningIcon_tex, 36, 0 },
};

/* Sprite: WarningIcon (41x36 ia8) */
Sprite dMNOption_WarningIcon = {
	0, 0,
	41, 36,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	36, 36,
	3, 1,
	(Bitmap*)dMNOption_WarningIcon_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
