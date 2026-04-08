/* Sprite: sprite_0x8460 */

/* Texture: sprite_0x8460 (300(304)x220 ci4, 17 tiles) */
u8 dMNNoController_sprite_0x8460_tex[] = {
    #include <MNNoController/sprite_0x8460.ci4.inc.c>
};

Bitmap dMNNoController_sprite_0x8460_bitmaps[] = {
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x7C0, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0xF80, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x1740, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x1F00, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x26C0, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x2E80, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x3640, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x3E00, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x45C0, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x4D80, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x5540, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x5D00, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x64C0, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x6C80, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x7440, 13, 0 },
	{ 300, 304, 0, 0, dMNNoController_sprite_0x8460_tex + 0x7C00, 12, 0 },
};

/* Sprite: sprite_0x8460 (300x220 ci4) */
Sprite dMNNoController_sprite_0x8460 = {
	0, 0,
	300, 220,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x212520CC,
	0, 1,
	17, 228,
	13, 13,
	2, 0,
	(Bitmap*)dMNNoController_sprite_0x8460_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
