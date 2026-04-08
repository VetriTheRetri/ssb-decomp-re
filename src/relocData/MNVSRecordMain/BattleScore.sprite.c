/* Sprite: BattleScore */

Gfx dMNVSRecordMain_BattleScore_dl[] = { gsSPEndDisplayList() };

/* Texture: BattleScore (72(80)x7 i4) */
u8 dMNVSRecordMain_BattleScore_tex[] = {
    #include <MNVSRecordMain/BattleScore.i4.inc.c>
};

Bitmap dMNVSRecordMain_BattleScore_bitmaps[] = {
	{ 72, 80, 0, 0, dMNVSRecordMain_BattleScore_tex, 7, 0 },
};

/* Sprite: BattleScore (72x7 i4) */
Sprite dMNVSRecordMain_BattleScore = {
	0, 0,
	72, 7,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	7, 7,
	4, 0,
	(Bitmap*)dMNVSRecordMain_BattleScore_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
