/* Sprite: LinkText */

Gfx dMNPlayersCommon_LinkText_dl[] = { gsSPEndDisplayList() };

/* Texture: LinkText (34(40)x15 ia8) */
u8 dMNPlayersCommon_LinkText_tex[] = {
    #include <MNPlayersCommon/LinkText.ia8.inc.c>
};

Bitmap dMNPlayersCommon_LinkText_bitmaps[] = {
	{ 34, 40, 0, 0, dMNPlayersCommon_LinkText_tex, 15, 0 },
};

/* Sprite: LinkText (34x15 ia8) */
Sprite dMNPlayersCommon_LinkText = {
	0, 0,
	34, 15,
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
	(Bitmap*)dMNPlayersCommon_LinkText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
