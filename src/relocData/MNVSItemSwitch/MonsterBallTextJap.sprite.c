/* Sprite: MonsterBallTextJap */

Gfx dMNVSItemSwitch_MonsterBallTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: MonsterBallTextJap (80x11 i4) */
u8 dMNVSItemSwitch_MonsterBallTextJap_tex[] = {
    #include <MNVSItemSwitch/MonsterBallTextJap.i4.inc.c>
};

Bitmap dMNVSItemSwitch_MonsterBallTextJap_bitmaps[] = {
	{ 80, 80, 0, 0, dMNVSItemSwitch_MonsterBallTextJap_tex, 11, 0 },
};

/* Sprite: MonsterBallTextJap (80x11 i4) */
Sprite dMNVSItemSwitch_MonsterBallTextJap = {
	0, 0,
	80, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 0,
	(Bitmap*)dMNVSItemSwitch_MonsterBallTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
