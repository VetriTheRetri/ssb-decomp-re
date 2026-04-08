/* Sprite: JumpText */

Gfx dRelocFile29_JumpText_dl[] = { gsSPEndDisplayList() };

/* Texture: JumpText (35(40)x16 ia8) */
u8 dRelocFile29_JumpText_tex[] = {
    #include <file_29/JumpText.ia8.inc.c>
};

Bitmap dRelocFile29_JumpText_bitmaps[] = {
	{ 35, 40, 0, 0, dRelocFile29_JumpText_tex, 16, 0 },
};

/* Sprite: JumpText (35x16 ia8) */
Sprite dRelocFile29_JumpText = {
	0, 0,
	35, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dRelocFile29_JumpText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
