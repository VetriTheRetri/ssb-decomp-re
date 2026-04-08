/* Sprite: PortraitQuestionMark */

Gfx dMNPlayersPortraits_PortraitQuestionMark_dl[] = { gsSPEndDisplayList() };

/* Texture: PortraitQuestionMark (45(48)x43 ia8) */
u8 dMNPlayersPortraits_PortraitQuestionMark_tex[] = {
    #include <MNPlayersPortraits/PortraitQuestionMark.ia8.inc.c>
};

Bitmap dMNPlayersPortraits_PortraitQuestionMark_bitmaps[] = {
	{ 45, 48, 0, 0, dMNPlayersPortraits_PortraitQuestionMark_tex, 43, 0 },
};

/* Sprite: PortraitQuestionMark (45x43 ia8) */
Sprite dMNPlayersPortraits_PortraitQuestionMark = {
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
	3, 1,
	(Bitmap*)dMNPlayersPortraits_PortraitQuestionMark_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
