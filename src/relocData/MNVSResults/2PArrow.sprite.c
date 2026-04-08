/* Sprite: 2PArrow */

Gfx dMNVSResults_2PArrow_dl[] = { gsSPEndDisplayList() };

/* Texture: 2PArrow (15(16)x12 ia8) */
u8 dMNVSResults_2PArrow_tex[] = {
    #include <MNVSResults/2PArrow.ia8.inc.c>
};

Bitmap dMNVSResults_2PArrow_bitmaps[] = {
	{ 15, 16, 0, 0, dMNVSResults_2PArrow_tex, 12, 0 },
};

/* Sprite: 2PArrow (15x12 ia8) */
Sprite dMNVSResults_2PArrow = {
	0, 0,
	15, 12,
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
	3, 1,
	(Bitmap*)dMNVSResults_2PArrow_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
