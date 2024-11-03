#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/video.h>
#include <lb/library.h>

extern uintptr_t ovl5_BSS_END; 	// 0x8018D950

// DATA

// 0x8018D580
FTKeyCommand D_ovl5_8018D580[] =
{
	FTKEY_EVENT_BUTTON(0, 180),                                       // 0x10B4, 0x0000
	FTKEY_EVENT_STICK(30, 0, 60),                                     // 0x203C, 0x1E00
	FTKEY_EVENT_STICK(0, 0, 0),                                       // 0x2000, 0x0000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                                  // 0x1001, 0x8000
	FTKEY_EVENT_BUTTON(0, 12),                                        // 0x100C, 0x0000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                                  // 0x1001, 0x8000
	FTKEY_EVENT_BUTTON(0, 12),                                        // 0x100C, 0x0000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                                  // 0x1001, 0x8000
	FTKEY_EVENT_BUTTON(0, 30),                                        // 0x101E, 0x0000
	FTKEY_EVENT_STICK(0, I_CONTROLLER_RANGE_MAX, 0),                  // 0x2000, 0x0050
	FTKEY_EVENT_BUTTON(B_BUTTON, 1),                                  // 0x1001, 0x4000
	FTKEY_EVENT_STICK(0, 0, 0),                                       // 0x2000, 0x0000
	FTKEY_EVENT_BUTTON(0, 180),                                       // 0x10B4, 0x0000
	FTKEY_EVENT_END()                                                 // 0x0000
};

// 0x8018D5B8
syColorRGBA dSCUnusedMarioFadeColor = { 0x00, 0x00, 0x00, 0x00 };

SYVideoSetup D_ovl5_8018D5BC = SYVIDEO_DEFINE_DEFAULT();

scRuntimeInfo D_ovl5_8018D5D8 = {
	0x00000000, 0x8000a5e4,
	0x800a26b8, 0x8018d950, 0x00000000, 0x00000001,
	0x00000002, 0x00004000, 0x00002000, 0x00000000,
	0x00000000, 0x00008000, 0x00020000, 0x0000c000,
	0x8018d4bc, 0x80004310, 0x00000000, 0x00000600,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000088, 0x00000000, 0x800d5cac, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000088,
	0x00000000, 0x0000006c, 0x00000000, 0x00000090,
	0x8018d1a0
};

// BSS
u32 D_8018D670;
u32 D_ovl5_8018D674;
LBFileNode D_ovl5_8018D678[20];
LBFileNode D_ovl5_8018D718[7];
GObj *gUnkExplainFighterGObj;
SCBattleState gUnkExplainBattleState;

// 0x8018D0C0
void func_ovl5_8018D0C0()
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = D_ovl5_8018D678;
	rl_setup.status_buffer_size = ARRAY_COUNT(D_ovl5_8018D678);
	rl_setup.force_status_buffer = D_ovl5_8018D718;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(D_ovl5_8018D718);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(dGMCommonFileIDs, ARRAY_COUNT(dGMCommonFileIDs), gGMCommonFiles, syTaskmanMalloc(lbRelocGetAllocSize(dGMCommonFileIDs, ARRAY_COUNT(dGMCommonFileIDs)), 0x10));
}

// 0x8018D160
void func_ovl5_8018D160(GObj *gobj)
{
	if (ftParamCheckHaveKey(gUnkExplainFighterGObj) == FALSE)
	{
		func_800269C0_275C0(nSYAudioFGMTitlePressStart);
		syTaskmanSetLoadScene();
	}
}

// 0x8018D1A0
void func_ovl5_8018D1A0()
{
	s32 unused[3];
	GObj *fighter_gobj;
	s32 player;
	FTCreateDesc player_spawn;
	syColorRGBA color;

	gUnkExplainBattleState = gSCManagerDefaultBattleState;
	gSCManagerBattleState = &gUnkExplainBattleState;

	gSCManagerBattleState->game_type = nSCBattleGameTypeUnk6;
	gSCManagerBattleState->gkind = nGRKindPupupu;
	gSCManagerBattleState->pl_count = 1;
	gSCManagerBattleState->players[0].fkind = nFTKindMario;
	gSCManagerBattleState->players[0].pkind = nFTPlayerKindKey;

	func_ovl5_8018D0C0();
	gcMakeGObjSPAfter(0x3F7U, func_ovl5_8018D160, 0xDU, GOBJ_PRIORITY_DEFAULT);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 1, 0xFF);
	efParticleInitAll();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	grWallpaperMakeDecideKind();
	func_ovl2_8010DB00();
	grCommonSetupInitAll();
	ftManagerAllocFighter(3, 1);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (player = 0; player < ARRAY_COUNT(gSCManagerBattleState->players); player++)
	{
		player_spawn = dFTManagerDefaultFighterDesc;

		if (gSCManagerBattleState->players[player].pkind == nFTPlayerKindNot)
		{
			continue;
		}
		ftManagerSetupFilesAllKind(gSCManagerBattleState->players[player].fkind);

		player_spawn.fkind = gSCManagerBattleState->players[player].fkind;
		player_spawn.pos.x = 0.0F;
		player_spawn.pos.y = 150.0F;
		player_spawn.pos.z = 0.0F;
		player_spawn.lr_spawn = +1;
		player_spawn.team = gSCManagerBattleState->players[player].team;
		player_spawn.player = player;
		player_spawn.detail = nFTPartsDetailHigh;
		player_spawn.costume = gSCManagerBattleState->players[player].costume;
		player_spawn.handicap = gSCManagerBattleState->players[player].handicap;
		player_spawn.cp_level = gSCManagerBattleState->players[player].level;
		player_spawn.stock_count = gSCManagerBattleState->stocks;
		player_spawn.damage = 0;
		player_spawn.pkind = gSCManagerBattleState->players[player].pkind;
		player_spawn.controller = &gPlayerControllers[player];

		player_spawn.figatree_heap = ftManagerAllocFigatreeHeapKind(gSCManagerBattleState->players[player].fkind);

		fighter_gobj = ftManagerMakeFighter(&player_spawn);
		gUnkExplainFighterGObj = fighter_gobj;

		ftParamInitPlayerBattleStats(player, fighter_gobj);
		ftParamSetKey(fighter_gobj, D_ovl5_8018D580);
	}
	color = dSCUnusedMarioFadeColor;

	lbFadeMakeActor(nGCCommonKindTransition, nGCCommonLinkIDTransition, 10, &color, 12, TRUE, NULL);
}

// 0x8018D4BC
void func_ovl5_8018D4BC(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018D508
void overlay_set23_entry()
{
	D_ovl5_8018D5BC.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl5_8018D5BC);
	D_ovl5_8018D5D8.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl5_BSS_END);
	func_800A2698(&D_ovl5_8018D5D8);
	auStopBGM();
	gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
	gSCManagerSceneData.scene_curr = nSCKindTitle;
}
