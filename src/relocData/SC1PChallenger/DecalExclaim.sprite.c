/* Sprite: DecalExclaim */

/* Texture: DecalExclaim (40(48)x40 ci4) */
u8 dSC1PChallenger_DecalExclaim_tex[] = {
    #include <SC1PChallenger/DecalExclaim.ci4.inc.c>
};

Bitmap dSC1PChallenger_DecalExclaim_bitmaps[] = {
	{ 40, 48, 0, 0, dSC1PChallenger_DecalExclaim_tex, 40, 0 },
};

/* Sprite: DecalExclaim (40x40 ci4) */
Sprite dSC1PChallenger_DecalExclaim = {
	0, 0,
	40, 40,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x03790360,
	0, 1,
	1, 36,
	40, 40,
	2, 0,
	(Bitmap*)dSC1PChallenger_DecalExclaim_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
