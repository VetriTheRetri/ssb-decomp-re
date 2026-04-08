/* Sprite: TeamText */

Gfx dMNVSMode_TeamText_dl[] = { gsSPEndDisplayList() };

/* Texture: TeamText (42(48)x13 i4) */
u8 dMNVSMode_TeamText_tex[] = {
    #include <MNVSMode/TeamText.i4.inc.c>
};

Bitmap dMNVSMode_TeamText_bitmaps[] = {
	{ 42, 48, 0, 0, dMNVSMode_TeamText_tex, 13, 0 },
};

/* Sprite: TeamText (42x13 i4) */
Sprite dMNVSMode_TeamText = {
	0, 0,
	42, 13,
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
	(Bitmap*)dMNVSMode_TeamText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
