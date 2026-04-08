/* Sprite: PlayerNum2P */

/* Texture: PlayerNum2P (16x12 i4) */
u8 dIFCommonBattlePause_PlayerNum2P_tex[] = {
    #include <IFCommonBattlePause/PlayerNum2P.i4.inc.c>
};

Bitmap dIFCommonBattlePause_PlayerNum2P_bitmaps[] = {
	{ 16, 16, 0, 0, dIFCommonBattlePause_PlayerNum2P_tex, 12, 0 },
};

/* Sprite: PlayerNum2P (16x12 i4) */
Sprite dIFCommonBattlePause_PlayerNum2P = {
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
	(Bitmap*)dIFCommonBattlePause_PlayerNum2P_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
