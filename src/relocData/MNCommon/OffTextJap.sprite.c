/* Sprite: OffTextJap */

Gfx dMNCommon_OffTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: OffTextJap (24x13 ia8) */
u8 dMNCommon_OffTextJap_tex[] = {
    #include <MNCommon/OffTextJap.ia8.inc.c>
};

Bitmap dMNCommon_OffTextJap_bitmaps[] = {
	{ 24, 24, 0, 0, dMNCommon_OffTextJap_tex, 13, 0 },
};

/* Sprite: OffTextJap (24x13 ia8) */
Sprite dMNCommon_OffTextJap = {
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
	(Bitmap*)dMNCommon_OffTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
