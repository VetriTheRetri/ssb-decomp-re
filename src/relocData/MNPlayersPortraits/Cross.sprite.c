/* Sprite: Cross */

Gfx dMNPlayersPortraits_Cross_dl[] = { gsSPEndDisplayList() };

/* Texture: Cross (37(48)x28 i4) */
u8 dMNPlayersPortraits_Cross_tex[] = {
    #include <MNPlayersPortraits/Cross.i4.inc.c>
};

Bitmap dMNPlayersPortraits_Cross_bitmaps[] = {
	{ 37, 48, 0, 0, dMNPlayersPortraits_Cross_tex, 28, 0 },
};

/* Sprite: Cross (37x28 i4) */
Sprite dMNPlayersPortraits_Cross = {
	0, 0,
	37, 28,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	28, 28,
	4, 0,
	(Bitmap*)dMNPlayersPortraits_Cross_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
