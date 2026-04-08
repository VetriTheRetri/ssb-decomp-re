/* Sprite: ModeSelectText */

Gfx dMNMain_ModeSelectText_dl[] = { gsSPEndDisplayList() };

/* Texture: ModeSelectText (100(104)x39 ia8) */
u8 dMNMain_ModeSelectText_tex[] = {
    #include <MNMain/ModeSelectText.ia8.inc.c>
};

Bitmap dMNMain_ModeSelectText_bitmaps[] = {
	{ 100, 104, 0, 0, dMNMain_ModeSelectText_tex, 39, 0 },
};

/* Sprite: ModeSelectText (100x39 ia8) */
Sprite dMNMain_ModeSelectText = {
	0, 0,
	100, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	39, 39,
	3, 1,
	(Bitmap*)dMNMain_ModeSelectText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
