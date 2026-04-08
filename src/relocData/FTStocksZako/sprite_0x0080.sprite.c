/* Sprite: sprite_0x0080 */

/* Texture: sprite_0x0080 (8(16)x8 ci4) */
u8 dFTStocksZako_sprite_0x0080_tex[] = {
    #include <FTStocksZako/sprite_0x0080.ci4.inc.c>
};

Bitmap dFTStocksZako_sprite_0x0080_bitmaps[] = {
	{ 8, 16, 0, 0, dFTStocksZako_sprite_0x0080_tex, 8, 0 },
};

/* Sprite: sprite_0x0080 (8x8 ci4) */
Sprite dFTStocksZako_sprite_0x0080 = {
	0, 0,
	8, 8,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x002D0014,
	0, 1,
	1, 36,
	8, 8,
	2, 0,
	(Bitmap*)dFTStocksZako_sprite_0x0080_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
