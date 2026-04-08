/* Sprite: DecalExclaim */

/* Texture: DecalExclaim (40(48)x40 ci4) */
u8 dMNMessage_DecalExclaim_tex[] = {
    #include <MNMessage/DecalExclaim.ci4.inc.c>
};

Bitmap dMNMessage_DecalExclaim_bitmaps[] = {
	{ 40, 48, 0, 0, dMNMessage_DecalExclaim_tex, 40, 0 },
};

/* Sprite: DecalExclaim (40x40 ci4) */
Sprite dMNMessage_DecalExclaim = {
	0, 0,
	40, 40,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)0x14CD14B4,
	0, 1,
	1, 36,
	40, 40,
	2, 0,
	(Bitmap*)dMNMessage_DecalExclaim_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
