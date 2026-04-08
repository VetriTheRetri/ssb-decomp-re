/* Sprite: MonoTextJap */

Gfx dMNOption_MonoTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: MonoTextJap (48x13 ia8) */
u8 dMNOption_MonoTextJap_tex[] = {
    #include <MNOption/MonoTextJap.ia8.inc.c>
};

Bitmap dMNOption_MonoTextJap_bitmaps[] = {
	{ 48, 48, 0, 0, dMNOption_MonoTextJap_tex, 13, 0 },
};

/* Sprite: MonoTextJap (48x13 ia8) */
Sprite dMNOption_MonoTextJap = {
	0, 0,
	48, 13,
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
	(Bitmap*)dMNOption_MonoTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
