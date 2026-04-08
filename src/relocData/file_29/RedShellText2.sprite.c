/* Sprite: RedShellText2 */

Gfx dRelocFile29_RedShellText2_dl[] = { gsSPEndDisplayList() };

/* Texture: RedShellText2 (54(56)x16 ia8) */
u8 dRelocFile29_RedShellText2_tex[] = {
    #include <file_29/RedShellText2.ia8.inc.c>
};

Bitmap dRelocFile29_RedShellText2_bitmaps[] = {
	{ 54, 56, 0, 0, dRelocFile29_RedShellText2_tex, 16, 0 },
};

/* Sprite: RedShellText2 (54x16 ia8) */
Sprite dRelocFile29_RedShellText2 = {
	0, 0,
	54, 16,
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
	(Bitmap*)dRelocFile29_RedShellText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
