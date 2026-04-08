/* Sprite: StageSelectTextJap */

Gfx dMNVSOptions_StageSelectTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: StageSelectTextJap (88x15 ia8) */
u8 dMNVSOptions_StageSelectTextJap_tex[] = {
    #include <MNVSOptions/StageSelectTextJap.ia8.inc.c>
};

Bitmap dMNVSOptions_StageSelectTextJap_bitmaps[] = {
	{ 88, 88, 0, 0, dMNVSOptions_StageSelectTextJap_tex, 15, 0 },
};

/* Sprite: StageSelectTextJap (88x15 ia8) */
Sprite dMNVSOptions_StageSelectTextJap = {
	0, 0,
	88, 15,
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
	(Bitmap*)dMNVSOptions_StageSelectTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
