/* Sprite: Bros */

Gfx dMNTitle_Bros_dl[] = { gsSPEndDisplayList() };

/* Texture: Bros (56x52 ia8) */
u8 dMNTitle_Bros_tex[] = {
    #include <MNTitle/Bros.ia8.inc.c>
};

Bitmap dMNTitle_Bros_bitmaps[] = {
	{ 56, 56, 0, 0, dMNTitle_Bros_tex, 52, 0 },
};

/* Sprite: Bros (56x52 ia8) */
Sprite dMNTitle_Bros = {
	0, 0,
	56, 52,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	52, 52,
	3, 1,
	(Bitmap*)dMNTitle_Bros_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
