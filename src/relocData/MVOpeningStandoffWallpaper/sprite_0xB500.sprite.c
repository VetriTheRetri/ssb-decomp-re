/* Sprite: sprite_0xB500 */

Gfx dMVOpeningStandoffWallpaper_sprite_0xB500_dl[] = { gsSPEndDisplayList() };

/* Texture: sprite_0xB500 (160x143 rgba16, 24 tiles) */
u8 dMVOpeningStandoffWallpaper_sprite_0xB500_tex[] = {
    #include <MVOpeningStandoffWallpaper/sprite_0xB500.rgba16.inc.c>
};

Bitmap dMVOpeningStandoffWallpaper_sprite_0xB500_bitmaps[] = {
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x788, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0xF10, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x1698, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x1E20, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x25A8, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x2D30, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x34B8, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x3C40, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x43C8, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x4B50, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x52D8, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x5A60, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x61E8, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x6970, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x70F8, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x7880, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x8008, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x8790, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x8F18, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x96A0, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0x9E28, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0xA5B0, 6, 0 },
	{ 160, 160, 0, 0, dMVOpeningStandoffWallpaper_sprite_0xB500_tex + 0xAD38, 5, 0 },
};

/* Sprite: sprite_0xB500 (160x120 rgba16) */
Sprite dMVOpeningStandoffWallpaper_sprite_0xB500 = {
	0, 0,
	160, 120,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	24, 312,
	5, 6,
	0, 2,
	(Bitmap*)dMVOpeningStandoffWallpaper_sprite_0xB500_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
