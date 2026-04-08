/* Sprite: RandomSmall */

/* Texture: RandomSmall (48x36 ci4) */
u8 dMNMaps_RandomSmall_tex[] = {
    #include <MNMaps/RandomSmall.ci4.inc.c>
};

Bitmap dMNMaps_RandomSmall_bitmaps[] = {
	{ 48, 48, 0, 0, dMNMaps_RandomSmall_tex, 36, 0 },
};

/* Sprite: RandomSmall (48x36 ci4) */
Sprite dMNMaps_RandomSmall = {
	0, 0,
	48, 36,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x32D132B8,
	0, 1,
	1, 36,
	36, 36,
	2, 0,
	(Bitmap*)dMNMaps_RandomSmall_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
