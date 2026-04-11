/* Sprite: YoshiTeamVS18Text */

Gfx dSC1PIntro_YoshiTeamVS18Text_dl[] = { gsSPEndDisplayList() };

/* Texture: YoshiTeamVS18Text (112x12 i4) */
u8 dSC1PIntro_YoshiTeamVS18Text_tex[] = {
    #include <SC1PIntro/YoshiTeamVS18Text.i4.inc.c>
};

Bitmap dSC1PIntro_YoshiTeamVS18Text_bitmaps[] = {
	{ 112, 112, 0, 0, dSC1PIntro_YoshiTeamVS18Text_tex, 12, 0 },
};

/* Sprite: YoshiTeamVS18Text (112x12 i4) */
Sprite dSC1PIntro_YoshiTeamVS18Text = {
	0, 0,
	112, 12,
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
	(Bitmap*)dSC1PIntro_YoshiTeamVS18Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
