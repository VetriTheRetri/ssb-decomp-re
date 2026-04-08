/* Sprite: DecalSmashBall */

Gfx dIFCommonBattlePause_DecalSmashBall_dl[] = { gsSPEndDisplayList() };

/* Texture: DecalSmashBall (12(16)x12 i4) */
u8 dIFCommonBattlePause_DecalSmashBall_tex[] = {
    #include <IFCommonBattlePause/DecalSmashBall.i4.inc.c>
};

Bitmap dIFCommonBattlePause_DecalSmashBall_bitmaps[] = {
	{ 12, 16, 0, 0, dIFCommonBattlePause_DecalSmashBall_tex, 12, 0 },
};

/* Sprite: DecalSmashBall (12x12 i4) */
Sprite dIFCommonBattlePause_DecalSmashBall = {
	0, 0,
	12, 12,
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
	(Bitmap*)dIFCommonBattlePause_DecalSmashBall_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
