/* Sprite: DecalBarEdge */

Gfx dMNMain_DecalBarEdge_dl[] = { gsSPEndDisplayList() };

/* Texture: DecalBarEdge (32x38 ia8) */
u8 dMNMain_DecalBarEdge_tex[] = {
    #include <MNMain/DecalBarEdge.ia8.inc.c>
};

Bitmap dMNMain_DecalBarEdge_bitmaps[] = {
	{ 32, 32, 0, 0, dMNMain_DecalBarEdge_tex, 38, 0 },
};

/* Sprite: DecalBarEdge (32x38 ia8) */
Sprite dMNMain_DecalBarEdge = {
	0, 0,
	32, 38,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	38, 38,
	3, 1,
	(Bitmap*)dMNMain_DecalBarEdge_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
