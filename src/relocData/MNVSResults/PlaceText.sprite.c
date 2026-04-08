/* Sprite: PlaceText */

Gfx dMNVSResults_PlaceText_dl[] = { gsSPEndDisplayList() };

/* Texture: PlaceText (83(88)x17 ia8) */
u8 dMNVSResults_PlaceText_tex[] = {
    #include <MNVSResults/PlaceText.ia8.inc.c>
};

Bitmap dMNVSResults_PlaceText_bitmaps[] = {
	{ 83, 88, 0, 0, dMNVSResults_PlaceText_tex, 17, 0 },
};

/* Sprite: PlaceText (83x17 ia8) */
Sprite dMNVSResults_PlaceText = {
	0, 0,
	83, 17,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	17, 17,
	3, 1,
	(Bitmap*)dMNVSResults_PlaceText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
