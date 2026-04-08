/* Sprite: SettingsIcon */

Gfx dMNMain_SettingsIcon_dl[] = { gsSPEndDisplayList() };

/* Texture: SettingsIcon (51(56)x51 ia8) */
u8 dMNMain_SettingsIcon_tex[] = {
    #include <MNMain/SettingsIcon.ia8.inc.c>
};

Bitmap dMNMain_SettingsIcon_bitmaps[] = {
	{ 51, 56, 0, 0, dMNMain_SettingsIcon_tex, 51, 0 },
};

/* Sprite: SettingsIcon (51x51 ia8) */
Sprite dMNMain_SettingsIcon = {
	0, 0,
	51, 51,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	51, 51,
	3, 1,
	(Bitmap*)dMNMain_SettingsIcon_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
