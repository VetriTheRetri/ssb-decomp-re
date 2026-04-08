/* Sprite: OptionTextJap */

Gfx dMNMain_OptionTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: OptionTextJap (99(104)x15 ia8) */
u8 dMNMain_OptionTextJap_tex[] = {
    #include <MNMain/OptionTextJap.ia8.inc.c>
};

Bitmap dMNMain_OptionTextJap_bitmaps[] = {
	{ 99, 104, 0, 0, dMNMain_OptionTextJap_tex, 15, 0 },
};

/* Sprite: OptionTextJap (99x15 ia8) */
Sprite dMNMain_OptionTextJap = {
	0, 0,
	99, 15,
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
	(Bitmap*)dMNMain_OptionTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
