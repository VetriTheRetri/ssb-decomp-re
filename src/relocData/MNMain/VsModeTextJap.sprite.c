/* Sprite: VsModeTextJap */

Gfx dMNMain_VsModeTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: VsModeTextJap (69(72)x15 ia8) */
u8 dMNMain_VsModeTextJap_tex[] = {
    #include <MNMain/VsModeTextJap.ia8.inc.c>
};

Bitmap dMNMain_VsModeTextJap_bitmaps[] = {
	{ 69, 72, 0, 0, dMNMain_VsModeTextJap_tex, 15, 0 },
};

/* Sprite: VsModeTextJap (69x15 ia8) */
Sprite dMNMain_VsModeTextJap = {
	0, 0,
	69, 15,
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
	(Bitmap*)dMNMain_VsModeTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
