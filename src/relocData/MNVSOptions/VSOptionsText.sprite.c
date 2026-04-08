/* Sprite: VSOptionsText */

Gfx dMNVSOptions_VSOptionsText_dl[] = { gsSPEndDisplayList() };

/* Texture: VSOptionsText (133(136)x18 ia8) */
u8 dMNVSOptions_VSOptionsText_tex[] = {
    #include <MNVSOptions/VSOptionsText.ia8.inc.c>
};

Bitmap dMNVSOptions_VSOptionsText_bitmaps[] = {
	{ 133, 136, 0, 0, dMNVSOptions_VSOptionsText_tex, 18, 0 },
};

/* Sprite: VSOptionsText (133x18 ia8) */
Sprite dMNVSOptions_VSOptionsText = {
	0, 0,
	133, 18,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	18, 18,
	3, 1,
	(Bitmap*)dMNVSOptions_VSOptionsText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
