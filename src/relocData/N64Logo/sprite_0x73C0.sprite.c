/* Sprite: sprite_0x73C0 */

Gfx dN64Logo_sprite_0x73C0_dl[] = { gsSPEndDisplayList() };

/* Texture: sprite_0x73C0 (128x115 rgba16, 8 tiles) */
u8 dN64Logo_sprite_0x73C0_tex[] = {
    #include <N64Logo/sprite_0x73C0.rgba16.inc.c>
};

Bitmap dN64Logo_sprite_0x73C0_bitmaps[] = {
	{ 128, 128, 0, 0, dN64Logo_sprite_0x73C0_tex, 15, 0 },
	{ 128, 128, 0, 0, dN64Logo_sprite_0x73C0_tex + 0xF08, 15, 0 },
	{ 128, 128, 0, 0, dN64Logo_sprite_0x73C0_tex + 0x1E10, 15, 0 },
	{ 128, 128, 0, 0, dN64Logo_sprite_0x73C0_tex + 0x2D18, 15, 0 },
	{ 128, 128, 0, 0, dN64Logo_sprite_0x73C0_tex + 0x3C20, 15, 0 },
	{ 128, 128, 0, 0, dN64Logo_sprite_0x73C0_tex + 0x4B28, 15, 0 },
	{ 128, 128, 0, 0, dN64Logo_sprite_0x73C0_tex + 0x5A30, 15, 0 },
	{ 128, 128, 0, 0, dN64Logo_sprite_0x73C0_tex + 0x6938, 10, 0 },
};

/* Sprite: sprite_0x73C0 (128x108 rgba16) */
Sprite dN64Logo_sprite_0x73C0 = {
	0, 0,
	128, 108,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	8, 120,
	14, 15,
	0, 2,
	(Bitmap*)dN64Logo_sprite_0x73C0_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
