/* Sprite: AutoTextJap */

Gfx dMNCommon_AutoTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: AutoTextJap (28(32)x13 ia8) */
u8 dMNCommon_AutoTextJap_tex[] = {
    #include <MNCommon/AutoTextJap.ia8.inc.c>
};

Bitmap dMNCommon_AutoTextJap_bitmaps[] = {
	{ 28, 32, 0, 0, dMNCommon_AutoTextJap_tex, 13, 0 },
};

/* Sprite: AutoTextJap (28x13 ia8) */
Sprite dMNCommon_AutoTextJap = {
	0, 0,
	28, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	3, 1,
	(Bitmap*)dMNCommon_AutoTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
