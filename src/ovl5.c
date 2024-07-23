#include <ft/fighter.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

extern void *gGMCommonFiles[];
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_001AC870;
extern u32 dCommonFileIDs[8];
extern intptr_t D_NF_80000023;
extern s32 D_NF_800A5240[];
extern intptr_t lOverlay5ArenaLo; // 8018D950
extern intptr_t lOverlay5ArenaHi; // 803903E0

void func_ovl1_803903E0();
void ftRender_Lights_DisplayLightReflect(Gfx **display_list, f32 arg1, f32 arg2);

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

	rldm_setup.tableRomAddr = (s32)&D_NF_001AC870;
	rldm_setup.tableFileCount = (u32)&D_NF_00000854;
	rldm_setup.fileHeap = NULL;
	rldm_setup.fileHeapSize = 0;
	rldm_setup.statusBuf = D_ovl5_8018D678;
	rldm_setup.statusBufSize = ARRAY_COUNT(D_ovl5_8018D678);
	rldm_setup.forceBuf = D_ovl5_8018D718;
	rldm_setup.forceBufSize = ARRAY_COUNT(D_ovl5_8018D718);

	rdManagerInitSetup(&rldm_setup);
	rdManagerLoadFiles(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs), gGMCommonFiles, gsMemoryAlloc(rdManagerGetAllocSize(dCommonFileIDs, ARRAY_COUNT(dCommonFileIDs)), 0x10));
}

// 8018D160
void func_ovl5_8018D160(GObj *gobj)
{
	if (ftCommon_CheckHowToPlayInputSeq(gUnkExplainFighterGObj) == FALSE)
	{
		func_800269C0_275C0(alSound_SFX_TitlePressStart);
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

	gBattleState->game_type = gmMatch_GameType_Unk6;
	gBattleState->gr_kind = Gr_Kind_Pupupu;
	gBattleState->pl_count = 1;
	gBattleState->player_block[0].character_kind = Ft_Kind_Mario;
	gBattleState->player_block[0].player_kind = Pl_Kind_Key;

	func_ovl5_8018D0C0();
	omMakeGObjSPAfter(0x3F7U, func_ovl5_8018D160, 0xDU, GOBJ_LINKORDER_DEFAULT);
	func_8000B9FC(9, 0x80000000, 0x64, 1, 0xFF);
	efAllocInitParticleBank();
	func_ovl2_800EC130();
	mpCollision_InitMapCollisionData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	grWallpaper_SetGroundWallpaper();
	func_ovl2_8010DB00();
	grCommonSetupInitAll();
	ftManagerAllocFighter(3, 1);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManager_AllocUserData();
	gmRumbleMakeActor();
	ftPublicitySetup();

	for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
	{
		player_spawn = dFTDefaultFighterDesc;

		if (gBattleState->player_block[player].player_kind == Pl_Kind_Not) continue;

		ftManagerSetupDataKind(gBattleState->player_block[player].character_kind);

		player_spawn.ft_kind = gBattleState->player_block[player].character_kind;
		player_spawn.pos.x = 0.0F;
		player_spawn.pos.y = 150.0F;
		player_spawn.pos.z = 0.0F;
		player_spawn.lr_spawn = LR_Right;
		player_spawn.team = gBattleState->player_block[player].team_index;
		player_spawn.player = player;
		player_spawn.model_lod = ftParts_LOD_HighPoly;
		player_spawn.costume = gBattleState->player_block[player].costume_index;
		player_spawn.handicap = gBattleState->player_block[player].handicap;
		player_spawn.cp_level = gBattleState->player_block[player].level;
		player_spawn.stock_count = gBattleState->stock_setting;
		player_spawn.damage = 0;
		player_spawn.pl_kind = gBattleState->player_block[player].player_kind;
		player_spawn.controller = &gPlayerControllers[player];

		player_spawn.anim_heap = ftManagerAllocAnimHeapKind(gBattleState->player_block[player].character_kind);

		fighter_gobj = ftManagerMakeFighter(&player_spawn);
		gUnkExplainFighterGObj = fighter_gobj;

		ftCommon_ClearPlayerMatchStats(player, fighter_gobj);
		ftCommon_SetHowToPlayInputSeq(fighter_gobj, D_ovl5_8018D580);

	}
	unk_struct = D_ovl5_8018D5B8;
	func_ovl0_800D4060(0x3FD, 0xD, 0xA, &unk_struct, 0xC, 1, 0);
}

// 8018D4BC
void func_ovl5_8018D4BC(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftRender_Lights_DisplayLightReflect(display_list, gMPLightAngleX, gMPLightAngleY);
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