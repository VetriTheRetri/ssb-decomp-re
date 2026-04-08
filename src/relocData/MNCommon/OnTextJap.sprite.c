/* Sprite: OnTextJap */

Gfx dMNCommon_OnTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: OnTextJap (24x13 ia8) */
u8 dMNCommon_OnTextJap_tex[] = {
    #include <MNCommon/OnTextJap.ia8.inc.c>
};

Bitmap dMNCommon_OnTextJap_bitmaps[] = {
	{ 24, 24, 0, 0, dMNCommon_OnTextJap_tex, 13, 0 },
};

/* Sprite: OnTextJap (24x13 ia8) */
Sprite dMNCommon_OnTextJap = {
	0, 0,
	24, 13,
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
	(Bitmap*)dMNCommon_OnTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
