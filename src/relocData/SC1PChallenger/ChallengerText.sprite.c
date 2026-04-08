/* Sprite: ChallengerText */

Gfx dSC1PChallenger_ChallengerText_dl[] = { gsSPEndDisplayList() };

/* Texture: ChallengerText (94(96)x10 i4c) */
u8 dSC1PChallenger_ChallengerText_tex[] = {
    #include <SC1PChallenger/ChallengerText.i4c.inc.c>
};

Bitmap dSC1PChallenger_ChallengerText_bitmaps[] = {
	{ 94, 96, 0, 0, dSC1PChallenger_ChallengerText_tex, 10, 0 },
};

/* Sprite: ChallengerText (94x10 i4c) */
Sprite dSC1PChallenger_ChallengerText = {
	0, 0,
	94, 10,
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
	(Bitmap*)dSC1PChallenger_ChallengerText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
