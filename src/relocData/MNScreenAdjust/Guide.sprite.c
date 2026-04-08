/* Sprite: Guide */

/* Texture: Guide (300(304)x238 ci4, 19 tiles) */
u8 dMNScreenAdjust_Guide_tex[] = {
    #include <MNScreenAdjust/Guide.ci4.inc.c>
};

Bitmap dMNScreenAdjust_Guide_bitmaps[] = {
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x7C0, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0xF80, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x1740, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x1F00, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x26C0, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x2E80, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x3640, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x3E00, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x45C0, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x4D80, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x5540, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x5D00, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x64C0, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x6C80, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x7440, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x7C00, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x83C0, 13, 0 },
	{ 300, 304, 0, 0, dMNScreenAdjust_Guide_tex + 0x8B80, 4, 0 },
};

/* Sprite: Guide (300x220 ci4) */
Sprite dMNScreenAdjust_Guide = {
	0, 0,
	300, 220,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x263525D4,
	0, 1,
	19, 252,
	12, 13,
	2, 0,
	(Bitmap*)dMNScreenAdjust_Guide_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
