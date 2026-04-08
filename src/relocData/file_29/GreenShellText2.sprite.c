/* Sprite: GreenShellText2 */

Gfx dRelocFile29_GreenShellText2_dl[] = { gsSPEndDisplayList() };

/* Texture: GreenShellText2 (69(72)x16 ia8) */
u8 dRelocFile29_GreenShellText2_tex[] = {
    #include <file_29/GreenShellText2.ia8.inc.c>
};

Bitmap dRelocFile29_GreenShellText2_bitmaps[] = {
	{ 69, 72, 0, 0, dRelocFile29_GreenShellText2_tex, 16, 0 },
};

/* Sprite: GreenShellText2 (69x16 ia8) */
Sprite dRelocFile29_GreenShellText2 = {
	0, 0,
	69, 16,
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
	(Bitmap*)dRelocFile29_GreenShellText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
