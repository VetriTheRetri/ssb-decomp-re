/* Sprite: PlayerNum4P */

/* Texture: PlayerNum4P (16x12 i4) */
u8 dIFCommonBattlePause_PlayerNum4P_tex[] = {
    #include <IFCommonBattlePause/PlayerNum4P.i4.inc.c>
};

Bitmap dIFCommonBattlePause_PlayerNum4P_bitmaps[] = {
	{ 16, 16, 0, 0, dIFCommonBattlePause_PlayerNum4P_tex, 12, 0 },
};

/* Sprite: PlayerNum4P (16x12 i4) */
Sprite dIFCommonBattlePause_PlayerNum4P = {
	0, 0,
	16, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 0,
	(Bitmap*)dIFCommonBattlePause_PlayerNum4P_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
