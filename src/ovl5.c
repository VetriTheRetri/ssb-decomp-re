#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <lb/library.h>

extern uintptr_t ovl5_BSS_END; 	// 8018D950

// DATA

// 8018D580
ftKeyCommand D_ovl5_8018D580[] =
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

syDisplaySetup D_ovl5_8018D5BC = SYDISPLAY_DEFINE_DEFAULT();

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
lbFileNode D_ovl5_8018D678[20];
lbFileNode D_ovl5_8018D718[7];
GObj *gUnkExplainFighterGObj;
scBattleState gUnkExplainBattleState;

// 8018D0C0
void func_ovl5_8018D0C0()
{
	lbRelocSetup rldm_setup;

	rldm_setup.table_addr = (s32)&lLBRelocTableAddr;
	rldm_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rldm_setup.file_heap = NULL;
	rldm_setup.file_heap_size = 0;
	rldm_setup.status_buf = D_ovl5_8018D678;
	rldm_setup.status_buf_size = ARRAY_COUNT(D_ovl5_8018D678);
	rldm_setup.force_buf = D_ovl5_8018D718;
	rldm_setup.force_buf_size = ARRAY_COUNT(D_ovl5_8018D718);

	lbRelocInitSetup(&rldm_setup);
	lbRelocLoadFilesExtern(dGMCommonFileIDs, ARRAY_COUNT(dGMCommonFileIDs), gGMCommonFiles, gsMemoryAlloc(lbRelocGetAllocSize(dGMCommonFileIDs, ARRAY_COUNT(dGMCommonFileIDs)), 0x10));
}

// 8018D160
void func_ovl5_8018D160(GObj *gobj)
{
	if (ftParamCheckHaveKey(gUnkExplainFighterGObj) == FALSE)
	{
		func_800269C0_275C0(nSYAudioFGMTitlePressStart);
		leoInitUnit_atten();
	}
}

// 8018D1A0
void func_ovl5_8018D1A0()
{
	s32 unused[3];
	GObj *fighter_gobj;
	s32 player;
	ftCreateDesc player_spawn;
	syColorRGBA color;

	gUnkExplainBattleState = gDefaultBattleState;
	gBattleState = &gUnkExplainBattleState;

	gBattleState->game_type = nSCBattleGameTypeUnk6;
	gBattleState->gr_kind = nGRKindPupupu;
	gBattleState->pl_count = 1;
	gBattleState->players[0].ft_kind = nFTKindMario;
	gBattleState->players[0].pl_kind = nFTPlayerKindKey;

	func_ovl5_8018D0C0();
	gcMakeGObjSPAfter(0x3F7U, func_ovl5_8018D160, 0xDU, GOBJ_LINKORDER_DEFAULT);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 1, 0xFF);
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	grWallpaperMakeGroundWallpaper();
	func_ovl2_8010DB00();
	grCommonSetupInitAll();
	ftManagerAllocFighter(3, 1);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
	{
		player_spawn = dFTManagerDefaultFighterDesc;

		if (gBattleState->players[player].pl_kind == nFTPlayerKindNot)
		{
			continue;
		}
		ftManagerSetupFilesAllKind(gBattleState->players[player].ft_kind);

		player_spawn.ft_kind = gBattleState->players[player].ft_kind;
		player_spawn.pos.x = 0.0F;
		player_spawn.pos.y = 150.0F;
		player_spawn.pos.z = 0.0F;
		player_spawn.lr_spawn = nGMFacingR;
		player_spawn.team = gBattleState->players[player].team;
		player_spawn.player = player;
		player_spawn.detail = nFTPartsDetailHigh;
		player_spawn.costume = gBattleState->players[player].costume;
		player_spawn.handicap = gBattleState->players[player].handicap;
		player_spawn.cp_level = gBattleState->players[player].level;
		player_spawn.stock_count = gBattleState->stock_setting;
		player_spawn.damage = 0;
		player_spawn.pl_kind = gBattleState->players[player].pl_kind;
		player_spawn.controller = &gPlayerControllers[player];

		player_spawn.figatree_heap = ftManagerAllocAnimHeapKind(gBattleState->players[player].ft_kind);

		fighter_gobj = ftManagerMakeFighter(&player_spawn);
		gUnkExplainFighterGObj = fighter_gobj;

		ftParamInitPlayerBattleStats(player, fighter_gobj);
		ftParamSetKey(fighter_gobj, D_ovl5_8018D580);
	}
	color = dSCUnusedMarioFadeColor;

	lbFadeMakeActor(nOMObjCommonKindTransition, nOMObjCommonLinkIDTransition, 10, &color, 12, TRUE, NULL);
}

// 8018D4BC
void func_ovl5_8018D4BC(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 8018D508
void overlay_set23_entry()
{
	D_ovl5_8018D5BC.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl5_8018D5BC);
	D_ovl5_8018D5D8.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl5_BSS_END);
	func_800A2698(&D_ovl5_8018D5D8);
	auStopBGM();
	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = nSCKindTitle;
}
