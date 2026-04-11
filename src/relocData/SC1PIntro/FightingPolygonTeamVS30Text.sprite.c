/* Sprite: FightingPolygonTeamVS30Text */

Gfx dSC1PIntro_FightingPolygonTeamVS30Text_dl[] = { gsSPEndDisplayList() };

/* Texture: FightingPolygonTeamVS30Text (100(112)x22 i4) */
u8 dSC1PIntro_FightingPolygonTeamVS30Text_tex[] = {
    #include <SC1PIntro/FightingPolygonTeamVS30Text.i4.inc.c>
};

Bitmap dSC1PIntro_FightingPolygonTeamVS30Text_bitmaps[] = {
	{ 100, 112, 0, 0, dSC1PIntro_FightingPolygonTeamVS30Text_tex, 22, 0 },
};

/* Sprite: FightingPolygonTeamVS30Text (100x22 i4) */
Sprite dSC1PIntro_FightingPolygonTeamVS30Text = {
	0, 0,
	100, 22,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	22, 22,
	4, 0,
	(Bitmap*)dSC1PIntro_FightingPolygonTeamVS30Text_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
