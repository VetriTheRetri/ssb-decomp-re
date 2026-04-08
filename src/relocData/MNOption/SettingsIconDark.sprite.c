/* Sprite: SettingsIconDark */

Gfx dMNOption_SettingsIconDark_dl[] = { gsSPEndDisplayList() };

/* Texture: SettingsIconDark (144x136 i4, 3 tiles) */
u8 dMNOption_SettingsIconDark_tex[] = {
    #include <MNOption/SettingsIconDark.i4.inc.c>
};

Bitmap dMNOption_SettingsIconDark_bitmaps[] = {
	{ 144, 144, 0, 0, dMNOption_SettingsIconDark_tex, 56, 0 },
	{ 144, 144, 0, 0, dMNOption_SettingsIconDark_tex + 0xFC8, 56, 0 },
	{ 144, 144, 0, 0, dMNOption_SettingsIconDark_tex + 0x1F90, 24, 0 },
};

/* Sprite: SettingsIconDark (144x134 i4) */
Sprite dMNOption_SettingsIconDark = {
	0, 0,
	144, 134,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	3, 60,
	55, 56,
	4, 0,
	(Bitmap*)dMNOption_SettingsIconDark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
