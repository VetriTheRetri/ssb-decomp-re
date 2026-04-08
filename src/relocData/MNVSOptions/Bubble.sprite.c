/* Sprite: Bubble */

Gfx dMNVSOptions_Bubble_dl[] = { gsSPEndDisplayList() };

/* Texture: Bubble (176x19 ia8) */
u8 dMNVSOptions_Bubble_tex[] = {
    #include <MNVSOptions/Bubble.ia8.inc.c>
};

Bitmap dMNVSOptions_Bubble_bitmaps[] = {
	{ 176, 176, 0, 0, dMNVSOptions_Bubble_tex, 19, 0 },
};

/* Sprite: Bubble (176x19 ia8) */
Sprite dMNVSOptions_Bubble = {
	0, 0,
	176, 19,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	19, 19,
	3, 1,
	(Bitmap*)dMNVSOptions_Bubble_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
