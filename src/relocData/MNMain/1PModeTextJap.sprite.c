/* Sprite: 1PModeTextJap */

Gfx dMNMain_1PModeTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: 1PModeTextJap (79(80)x15 ia8) */
u8 dMNMain_1PModeTextJap_tex[] = {
    #include <MNMain/1PModeTextJap.ia8.inc.c>
};

Bitmap dMNMain_1PModeTextJap_bitmaps[] = {
	{ 79, 80, 0, 0, dMNMain_1PModeTextJap_tex, 15, 0 },
};

/* Sprite: 1PModeTextJap (79x15 ia8) */
Sprite dMNMain_1PModeTextJap = {
	0, 0,
	79, 15,
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
	(Bitmap*)dMNMain_1PModeTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
