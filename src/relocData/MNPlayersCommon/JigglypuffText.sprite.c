/* Sprite: JigglypuffText */

Gfx dMNPlayersCommon_JigglypuffText_dl[] = { gsSPEndDisplayList() };

/* Texture: JigglypuffText (64x15 ia8) */
u8 dMNPlayersCommon_JigglypuffText_tex[] = {
    #include <MNPlayersCommon/JigglypuffText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_JigglypuffText_bitmaps[] = {
	{ 64, 64, 0, 0, dMNPlayersCommon_JigglypuffText_tex, 15, 0 },
};

/* Sprite: JigglypuffText (64x15 ia8) */
Sprite dMNPlayersCommon_JigglypuffText = {
	0, 0,
	64, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNPlayersCommon_JigglypuffText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
