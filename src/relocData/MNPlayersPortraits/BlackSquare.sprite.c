/* Sprite: BlackSquare */

Gfx dMNPlayersPortraits_BlackSquare_dl[] = { gsSPEndDisplayList() };

/* Texture: BlackSquare (45(48)x43 ia4) */
u8 dMNPlayersPortraits_BlackSquare_tex[] = {
    #include <MNPlayersPortraits/BlackSquare.ia4.inc.c>
};

Bitmap dMNPlayersPortraits_BlackSquare_bitmaps[] = {
	{ 45, 48, 0, 0, dMNPlayersPortraits_BlackSquare_tex, 43, 0 },
};

/* Sprite: BlackSquare (45x43 ia4) */
Sprite dMNPlayersPortraits_BlackSquare = {
	0, 0,
	45, 43,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	43, 43,
	3, 0,
	(Bitmap*)dMNPlayersPortraits_BlackSquare_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
