/* Sprite: TeamAttackText */

Gfx dMNVSOptions_TeamAttackText_dl[] = { gsSPEndDisplayList() };

/* Texture: TeamAttackText (94(96)x13 i4) */
u8 dMNVSOptions_TeamAttackText_tex[] = {
    #include <MNVSOptions/TeamAttackText.i4.inc.c>
};

Bitmap dMNVSOptions_TeamAttackText_bitmaps[] = {
	{ 94, 96, 0, 0, dMNVSOptions_TeamAttackText_tex, 13, 0 },
};

/* Sprite: TeamAttackText (94x13 i4) */
Sprite dMNVSOptions_TeamAttackText = {
	0, 0,
	94, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 0,
	(Bitmap*)dMNVSOptions_TeamAttackText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
