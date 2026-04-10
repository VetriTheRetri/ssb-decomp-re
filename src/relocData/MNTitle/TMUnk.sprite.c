/* Sprite: TMUnk */

Gfx dMNTitle_TMUnk_dl[] = { gsSPEndDisplayList() };

/* Texture: TMUnk (32x12 i4) */
u8 dMNTitle_TMUnk_tex[] = {
    #include <MNTitle/TMUnk.i4.inc.c>
};

Bitmap dMNTitle_TMUnk_bitmaps[] = {
	{ 32, 32, 0, 0, dMNTitle_TMUnk_tex, 12, 0 },
};

/* Sprite: TMUnk (32x12 i4) */
Sprite dMNTitle_TMUnk = {
	0, 0,
	32, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dMNTitle_TMUnk_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
