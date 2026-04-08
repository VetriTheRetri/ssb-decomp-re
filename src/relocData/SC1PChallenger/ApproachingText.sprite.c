/* Sprite: ApproachingText */

Gfx dSC1PChallenger_ApproachingText_dl[] = { gsSPEndDisplayList() };

/* Texture: ApproachingText (104(112)x10 i4c) */
u8 dSC1PChallenger_ApproachingText_tex[] = {
    #include <SC1PChallenger/ApproachingText.i4c.inc.c>
};

Bitmap dSC1PChallenger_ApproachingText_bitmaps[] = {
	{ 104, 112, 0, 0, dSC1PChallenger_ApproachingText_tex, 10, 0 },
};

/* Sprite: ApproachingText (104x10 i4c) */
Sprite dSC1PChallenger_ApproachingText = {
	0, 0,
	104, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	10, 10,
	4, 4,
	(Bitmap*)dSC1PChallenger_ApproachingText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
