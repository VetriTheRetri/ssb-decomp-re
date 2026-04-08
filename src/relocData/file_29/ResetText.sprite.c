/* Sprite: ResetText */

Gfx dRelocFile29_ResetText_dl[] = { gsSPEndDisplayList() };

/* Texture: ResetText (48x15 ia8) */
u8 dRelocFile29_ResetText_tex[] = {
    #include <file_29/ResetText.ia8.inc.c>
};

Bitmap dRelocFile29_ResetText_bitmaps[] = {
	{ 48, 48, 0, 0, dRelocFile29_ResetText_tex, 15, 0 },
};

/* Sprite: ResetText (48x15 ia8) */
Sprite dRelocFile29_ResetText = {
	0, 0,
	48, 15,
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
	(Bitmap*)dRelocFile29_ResetText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
