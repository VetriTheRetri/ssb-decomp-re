/* Sprite: CloseUpText */

Gfx dRelocFile29_CloseUpText_dl[] = { gsSPEndDisplayList() };

/* Texture: CloseUpText (57(64)x15 ia8) */
u8 dRelocFile29_CloseUpText_tex[] = {
    #include <file_29/CloseUpText.ia8.inc.c>
};

Bitmap dRelocFile29_CloseUpText_bitmaps[] = {
	{ 57, 64, 0, 0, dRelocFile29_CloseUpText_tex, 15, 0 },
};

/* Sprite: CloseUpText (57x15 ia8) */
Sprite dRelocFile29_CloseUpText = {
	0, 0,
	57, 15,
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
	(Bitmap*)dRelocFile29_CloseUpText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
