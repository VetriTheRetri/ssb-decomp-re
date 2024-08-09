#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

extern void *gGMCommonFiles[];
extern u32 dCommonFileIDs[8];
extern intptr_t D_NF_80000023;
extern s32 D_NF_800A5240[];
extern intptr_t lOverlay5ArenaLo; // 8018D950
extern intptr_t lOverlay5ArenaHi; // 803903E0

void func_ovl1_803903E0();
void ftRenderLightsDrawReflect(Gfx **display_list, f32 arg1, f32 arg2);

// DATA

// 8018D580
ftExplainCommand D_ovl5_8018D580[] =
{
	FTEXPLAIN_EVENT_BUTTON(0, 180),                                       // 0x10B4, 0x0000
	FTEXPLAIN_EVENT_STICK(30, 0, 60),                                     // 0x203C, 0x1E00
	FTEXPLAIN_EVENT_STICK(0, 0, 0),                                       // 0x2000, 0x0000
	FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1),                                  // 0x1001, 0x8000
	FTEXPLAIN_EVENT_BUTTON(0, 12),                                        // 0x100C, 0x0000
	FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1),                                  // 0x1001, 0x8000
	FTEXPLAIN_EVENT_BUTTON(0, 12),                                        // 0x100C, 0x0000
	FTEXPLAIN_EVENT_BUTTON(A_BUTTON, 1),                                  // 0x1001, 0x8000
	FTEXPLAIN_EVENT_BUTTON(0, 30),                                        // 0x101E, 0x0000
	FTEXPLAIN_EVENT_STICK(0, I_CONTROLLER_RANGE_MAX, 0),                  // 0x2000, 0x0050
	FTEXPLAIN_EVENT_BUTTON(B_BUTTON, 1),                                  // 0x1001, 0x4000
	FTEXPLAIN_EVENT_STICK(0, 0, 0),                                       // 0x2000, 0x0000
	FTEXPLAIN_EVENT_BUTTON(0, 180),                                       // 0x10B4, 0x0000
	FTEXPLAIN_EVENT_END()                                                 // 0x0000
};

Unk800D4060 D_ovl5_8018D5B8 = { 0 };

scUnkDataBounds D_ovl5_8018D5BC = {
	0x80392a00, 0x803b6900, 0x803da800,
	0x00000000, 0x00000140, 0x000000f0, 0x00016a99,
};

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
rdFileNode D_ovl5_8018D678[20];
rdFileNode D_ovl5_8018D718[7];
GObj *gUnkExplainFighterGObj;
gmBattleState gUnkExplainBattleState;

// 8018D0C0
void func_ovl5_8018D0C0()
{
	rdSetup rldm_setup;

	rldm_setup.table_addr = (s32)&lRDManagerTableAddr;
	rldm_setup.table_files_num = (u32)&lRDManagerTableFilesNum;
	rldm_setup.file_heap = NULL;
	rldm_setup.file_heap_size = 0;
	rldm_setup.status_buf = D_ovl5_8018D678;
	rldm_setup.status_buf_size = ARRAY_COUNT(D_ovl5_8018D678);
	rldm_setup.force_buf = D_ovl5_8018D718;
	rldm_setup.force_buf_size = ARRAY_COUNT(D_ovl5_8018D718);

	rdManagerInitSetup(&rldm_setup);
	rdManagerLoadFiles(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs), gGMCommonFiles, gsMemoryAlloc(rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)), 0x10));
}

// 8018D160
void func_ovl5_8018D160(GObj *gobj)
{
	if (ftParamCheckExplainInputSeq(gUnkExplainFighterGObj) == FALSE)
	{
		func_800269C0_275C0(nGMSoundFGMTitlePressStart);
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
	Unk800D4060 unk_struct;

	gUnkExplainBattleState = gDefaultBattleState;
	gBattleState = &gUnkExplainBattleState;

	gBattleState->game_type = nGMBattleGameTypeUnk6;
	gBattleState->gr_kind = nGRKindPupupu;
	gBattleState->pl_count = 1;
	gBattleState->players[0].ft_kind = nFTKindMario;
	gBattleState->players[0].pl_kind = nFTPlayerKindKey;

	func_ovl5_8018D0C0();
	gcMakeGObjSPAfter(0x3F7U, func_ovl5_8018D160, 0xDU, GOBJ_LINKORDER_DEFAULT);
	func_8000B9FC(9, 0x80000000, 0x64, 1, 0xFF);
	efAllocInitParticleBank();
	ftParamGameSet();
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
	ftPublicitySetup();

	for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
	{
		player_spawn = dFTManagerDefaultFighterDesc;

		if (gBattleState->players[player].pl_kind == nFTPlayerKindNot) continue;

		ftManagerSetupFilesAllKind(gBattleState->players[player].ft_kind);

		player_spawn.ft_kind = gBattleState->players[player].ft_kind;
		player_spawn.pos.x = 0.0F;
		player_spawn.pos.y = 150.0F;
		player_spawn.pos.z = 0.0F;
		player_spawn.lr_spawn = nGMFacingR;
		player_spawn.team = gBattleState->players[player].team;
		player_spawn.player = player;
		player_spawn.model_lod = nFTPartsDetailHigh;
		player_spawn.costume = gBattleState->players[player].costume;
		player_spawn.handicap = gBattleState->players[player].handicap;
		player_spawn.cp_level = gBattleState->players[player].level;
		player_spawn.stock_count = gBattleState->stock_setting;
		player_spawn.damage = 0;
		player_spawn.pl_kind = gBattleState->players[player].pl_kind;
		player_spawn.controller = &gPlayerControllers[player];

		player_spawn.anim_heap = ftManagerAllocAnimHeapKind(gBattleState->players[player].ft_kind);

		fighter_gobj = ftManagerMakeFighter(&player_spawn);
		gUnkExplainFighterGObj = fighter_gobj;

		ftParamInitPlayerBattleStats(player, fighter_gobj);
		ftParamSetExplainInputSeq(fighter_gobj, D_ovl5_8018D580);

	}
	unk_struct = D_ovl5_8018D5B8;
	func_ovl0_800D4060(0x3FD, 0xD, 0xA, &unk_struct, 0xC, 1, 0);
}

// 8018D4BC
void func_ovl5_8018D4BC(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftRenderLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 8018D508
void overlay_set23_entry()
{
	D_ovl5_8018D5BC.unk_scdatabounds_0xC = (uintptr_t) ((s32) D_NF_800A5240 - 0x1900);
	func_80007024(&D_ovl5_8018D5BC);
	D_ovl5_8018D5D8.arena_size = (u32)((uintptr_t)&lOverlay5ArenaHi - (uintptr_t)&lOverlay5ArenaLo);
	func_800A2698(&D_ovl5_8018D5D8);
	auStopBGM();
	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = 1;
}