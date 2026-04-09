/* Sprite: CaptainFalconText */

Gfx dMNPlayersCommon_CaptainFalconText_dl[] = { gsSPEndDisplayList() };

/* Texture: CaptainFalconText (64x14 ia8) */
u8 dMNPlayersCommon_CaptainFalconText_tex[] = {
    #include <MNPlayersCommon/CaptainFalconText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_CaptainFalconText_bitmaps[] = {
	{ 64, 64, 0, 0, dMNPlayersCommon_CaptainFalconText_tex, 14, 0 },
};

/* Sprite: CaptainFalconText (64x14 ia8) */
Sprite dMNPlayersCommon_CaptainFalconText = {
	0, 0,
	64, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	3, 1,
	(Bitmap*)dMNPlayersCommon_CaptainFalconText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
