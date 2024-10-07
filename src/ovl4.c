#include <ft/fighter.h>
#include <if/interface.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <sys/display.h>

// Externs
extern uintptr_t D_NF_8018E7E0;
extern uintptr_t D_NF_80392A00;
extern intptr_t D_NF_00000000;
extern intptr_t D_NF_00000030;
extern intptr_t D_NF_000000C7;
extern void func_800A26B8();

// Forward declarations
void scBattle_SetGeometryRenderLights(Gfx **display_list);
void scBattle_StartStockBattle();


// Data
// 0x8018E3D0
syColorRGBA dSCVSBattleCommonFadeColor = { 0x00, 0x00, 0x00, 0x00 };

// 0x8018E3D4
syColorRGBA dSCVSBattleSuddenDeathFadeColor = { 0x00, 0x00, 0x00, 0x00 };

// 0x8018E3D8
syDisplaySetup D_ovl4_8018E3D8 = SYDISPLAY_DEFINE_DEFAULT();

// 0x8018E3F4
scRuntimeInfo D_ovl4_8018E3F4 = {

	0x00000000, 0x8018d0c0,
	func_800A26B8, 0x8018e7e0,
	0x00000000, 0x00000001, 0x00000002, 0x0000f000, 0x00005000,
	0x00000000, 0x00000000, 0x0000d000, 0x00020000, 0x0000c000,
	scBattle_SetGeometryRenderLights, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800d5cac, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006c,
	0x00000000, 0x00000090,
	scBattle_StartStockBattle
};

// 0x8018D0C0
void scBattle_UpdateGameStatus()
{
	ifCommonBattleUpdateInterfaceAll();
}

// 0x8018D0E0 - Get player's initial facing direction for battle start
s32 scBattle_GetPlayerStartLR(s32 target_player)
{
	s32 lr;
	f32 near_spawn;
	f32 near_dist;
	f32 distx;
	Vec3f loop_spawn_pos;
	Vec3f target_spawn_pos;
	s32 loop_player;

	near_dist = 65536.0F;
	near_spawn = 0.0F;

	mpCollisionGetPlayerMapObjPosition(target_player, &target_spawn_pos);

	for (loop_player = 0; loop_player < ARRAY_COUNT(gBattleState->players); loop_player++)
	{
		if (loop_player == target_player)
		{
			continue;
		}
		else if (gBattleState->players[loop_player].pl_kind == nFTPlayerKindNot) 
		{
			continue;
		}
		else if (gBattleState->players[loop_player].player != gBattleState->players[target_player].player)
		{
			mpCollisionGetPlayerMapObjPosition(loop_player, &loop_spawn_pos);

			distx = (loop_spawn_pos.x < target_spawn_pos.x) ? -(loop_spawn_pos.x - target_spawn_pos.x) : (loop_spawn_pos.x - target_spawn_pos.x);

			if (near_dist > distx)
			{
				near_dist = distx;
				near_spawn = loop_spawn_pos.x - target_spawn_pos.x;
			}
		}
	}
	lr = (near_spawn >= 0.0F) ? nGMFacingR : nGMFacingL;

	return lr;
}

// 0x8018D228
void scBattle_StartStockBattle()
{
	s32 unused[4];
	s32 player;
	sb32(*proc_cache)();
	void *base_addr;
	ftCreateDesc player_spawn;
	syColorRGBA color;

	gSceneData.is_reset = FALSE;
	gSceneData.unk10 = 0;

	func_ovl4_8018E330();

	if (!(gSaveData.error_flags & LBBACKUP_ERROR_1PGAMEMARIO) && (gSaveData.unk5E3 >= 0x45))
	{
		base_addr = lbRelocGetFileExternHeap((intptr_t)&D_NF_000000C7, syTaskmanMalloc(lbRelocGetFileSize((intptr_t)&D_NF_000000C7), 0x10));

		proc_cache = (void*) ((uintptr_t)base_addr + (intptr_t)&D_NF_00000000);

		osWritebackDCache(proc_cache, *(s32*) ((uintptr_t)base_addr + (intptr_t)&D_NF_00000030));
		osInvalICache(proc_cache, *(s32*) ((uintptr_t)base_addr + (intptr_t)&D_NF_00000030));

		if (proc_cache() == FALSE)
		{
			gSaveData.error_flags |= LBBACKUP_ERROR_1PGAMEMARIO;
		}
	}
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 1, 0xFF);
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	grWallpaperMakeGroundWallpaper();
	func_ovl2_8010DB00();
	itManagerInitItems();
	grCommonSetupInitAll();
	ftManagerAllocFighter(2, GMCOMMON_PLAYERS_MAX);
	wpManagerAllocWeapons();
	efManagerInitEffects();
	ifScreenFlashMakeInterface(0xFF);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
	{
		player_spawn = dFTManagerDefaultFighterDesc;

		if (gBattleState->players[player].pl_kind == nFTPlayerKindNot)
			continue;

		ftManagerSetupFilesAllKind(gBattleState->players[player].ft_kind);
		player_spawn.ft_kind = gBattleState->players[player].ft_kind;

		mpCollisionGetPlayerMapObjPosition(player, &player_spawn.pos);
		player_spawn.lr_spawn = scBattle_GetPlayerStartLR(player);

		player_spawn.team = gBattleState->players[player].player;
		player_spawn.player = player;

		player_spawn.detail = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? nFTPartsDetailHigh : nFTPartsDetailLow;

		player_spawn.costume = gBattleState->players[player].costume;
		player_spawn.shade = gBattleState->players[player].shade;
		player_spawn.handicap = gBattleState->players[player].handicap;
		player_spawn.cp_level = gBattleState->players[player].level;
		player_spawn.stock_count = gBattleState->stock_setting;
		player_spawn.damage = 0;
		player_spawn.pl_kind = gBattleState->players[player].pl_kind;
		player_spawn.controller = &gPlayerControllers[player];

		player_spawn.figatree_heap = ftManagerAllocFigatreeHeapKind(gBattleState->players[player].ft_kind);

		ftParamInitPlayerBattleStats(player, ftManagerMakeFighter(&player_spawn));
	}
	ftManagerSetupFilesPlayablesAll();
	ifCommonBattleSetGameStatusWait();
	func_ovl2_8010E2D4();
	ifCommonPlayerArrowsInitInterface();
	func_ovl2_8010E1A4();
	ifCommonPlayerMagnifyMakeInterface();
	func_ovl2_8010DDC4();
	func_ovl2_8010E374();
	func_ovl2_8010E498();
	ifCommonPlayerTagMakeInterface();
	ifCommonPlayerDamageSetDigitPositions();
	ifCommonPlayerDamageInitInterface();
	ifCommonPlayerStockInitInterface();
	ifCommonEntryAllMakeInterface();
	mpCollisionSetPlayBGM();
	func_800269C0_275C0(nSYAudioVoicePublicityExcited);
	ifCommonTimerMakeInterface(ifCommonAnnounceTimeUpInitInterface);
	ifCommonTimerMakeDigits();

	color = dSCVSBattleCommonFadeColor;

	lbFadeMakeActor(nOMObjCommonKindTransition, nOMObjCommonLinkIDTransition, 10, &color, 12, TRUE, NULL);
}

// 0x8018D5E0 - Sort time battle winners and check for sudden death
sb32 scBattle_CheckSDSetTimeBattleResults()
{
	s32 result_count;
	s32 tied_players;
	s32 i, j;
	scBattleResults winner_results;
	scBattleResults player_results[GMCOMMON_PLAYERS_MAX];

	if (!(gBattleState->game_rules & SCBATTLE_GAMERULE_TIME))
	{
		return FALSE;
	}
	D_800A4EF8 = gTransferBattleState;
	D_800A4EF8.pl_count = D_800A4EF8.cp_count = 0;

	for (i = 0; i < ARRAY_COUNT(D_800A4EF8.players); i++)
	{
		D_800A4EF8.players[i].pl_kind = nFTPlayerKindNot;
	}
	switch (gBattleState->is_team_battle)
	{
	case FALSE:
		for (result_count = i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
		{
			if (gBattleState->players[i].pl_kind == nFTPlayerKindNot)
				continue;

			player_results[result_count].tko = gBattleState->players[i].score - gBattleState->players[i].falls;
			player_results[result_count].kos = gBattleState->players[i].score;
			player_results[result_count].player_or_team = i;
			player_results[result_count].unk_battleres_0x9 = FALSE;

			if (gBattleState->players[i].pl_kind == nFTPlayerKindMan)
				player_results[result_count].is_human_player = TRUE;
			else
				player_results[result_count].is_human_player = FALSE;

			result_count++;
		}
		for (i = 0; i < result_count; i++)
		{
			for (j = i + 1; j < result_count; j++)
			{
				if (player_results[i].tko < player_results[j].tko)
				{
					winner_results = player_results[i];
					player_results[i] = player_results[j];
					player_results[j] = winner_results;
				}
			}
		}
		player_results[0].unk_battleres_0x9 = TRUE;

		for (tied_players = 1, i = 1; i < result_count; i++)
		{
			if (player_results[0].tko == player_results[i].tko)
			{
				player_results[i].unk_battleres_0x9 = TRUE;
				tied_players++;
			}
		}

		if (tied_players < 2)
			return FALSE;

		for (i = 0; i < tied_players; i++)
		{
			D_800A4EF8.players[player_results[i].player_or_team].pl_kind = gBattleState->players[player_results[i].player_or_team].pl_kind;

			switch (D_800A4EF8.players[player_results[i].player_or_team].pl_kind)
			{
			case nFTPlayerKindMan:
				D_800A4EF8.pl_count++;
				break;

			case nFTPlayerKindCom:
				D_800A4EF8.cp_count++;
				break;
			}
		}
		break;

	case TRUE:
		for (result_count = i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
		{
			if (gBattleState->players[i].pl_kind == nFTPlayerKindNot)
				continue;

			for (j = 0; j < result_count; j++)
			{
				if (gBattleState->players[i].team == player_results[j].player_or_team)
				{
					player_results[j].tko += gBattleState->players[i].score - gBattleState->players[i].falls;
					player_results[j].kos += gBattleState->players[i].score;

					if (player_results[j].is_human_player || (gBattleState->players[i].pl_kind == nFTPlayerKindMan))
					{
						player_results[j].is_human_player = TRUE;
					}
					else player_results[j].is_human_player = FALSE;

					goto l_continue;
				}
			}
			player_results[result_count].tko = gBattleState->players[i].score - gBattleState->players[i].falls;
			player_results[result_count].kos = gBattleState->players[i].score;
			player_results[result_count].player_or_team = gBattleState->players[i].team;
			player_results[result_count].unk_battleres_0x9 = FALSE;

			if (player_results[result_count].is_human_player || (gBattleState->players[i].pl_kind == nFTPlayerKindMan))
			{
				player_results[result_count].is_human_player = TRUE;
			}
			else
				player_results[result_count].is_human_player = FALSE;

			result_count++;

		l_continue:
			continue;
		}
		for (i = 0; i < result_count; i++)
		{
			for (j = i + 1; j < result_count; j++)
			{
				if (player_results[i].tko < player_results[j].tko)
				{
					winner_results = player_results[i];
					player_results[i] = player_results[j];
					player_results[j] = winner_results;
				}
			}
		}
		player_results[0].unk_battleres_0x9 = TRUE;

		for (tied_players = 1, i = 1; i < result_count; i++)
		{
			if (player_results[0].tko == player_results[i].tko)
			{
				player_results[i].unk_battleres_0x9 = TRUE;
				tied_players++;
			}
		}

		if (tied_players < 2)
			return FALSE;

		for (i = 0; i < tied_players; i++)
		{
			for (j = 0; j < ARRAY_COUNT(gBattleState->players); j++)
			{
				if (gBattleState->players[j].pl_kind == nFTPlayerKindNot)
					continue;

				if (gBattleState->players[j].team == player_results[i].player_or_team)
				{
					D_800A4EF8.players[j].pl_kind = gBattleState->players[j].pl_kind;

					switch (D_800A4EF8.players[j].pl_kind)
					{
					case nFTPlayerKindMan:
						D_800A4EF8.pl_count++;
						break;

					case nFTPlayerKindCom:
						D_800A4EF8.cp_count++;
						break;
					}
				}
			}
		}
		break;
	}
	D_800A4EF8.game_rules = SCBATTLE_GAMERULE_STOCK;
	D_800A4EF8.is_display_score = FALSE;

	gSceneData.unk10 = 1;

	return TRUE;
}

// 0x8018DE20 - Start sudden death
void scBattle_StartSDBattle()
{
	s32 unused[3];
	GObj *fighter_gobj;
	s32 player;
	ftCreateDesc player_spawn;
	syColorRGBA color;

	gSceneData.is_reset = FALSE;

	func_ovl4_8018E330();
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 1, 0xFF);
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	grWallpaperMakeGroundWallpaper();
	func_ovl2_8010DB00();
	itManagerInitItems();
	grCommonSetupInitAll();
	ftManagerAllocFighter(2, GMCOMMON_PLAYERS_MAX);
	wpManagerAllocWeapons();
	efManagerInitEffects();
	ifScreenFlashMakeInterface(0xFF);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
	{
		player_spawn = dFTManagerDefaultFighterDesc;

		if (gBattleState->players[player].pl_kind == nFTPlayerKindNot)
			continue;

		ftManagerSetupFilesAllKind(gBattleState->players[player].ft_kind);
		player_spawn.ft_kind = gBattleState->players[player].ft_kind;

		mpCollisionGetPlayerMapObjPosition(player, &player_spawn.pos);

		player_spawn.lr_spawn = scBattle_GetPlayerStartLR(player);

		player_spawn.team = gBattleState->players[player].player;
		player_spawn.player = player;

		player_spawn.detail = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? nFTPartsDetailHigh : nFTPartsDetailLow;

		player_spawn.costume = gBattleState->players[player].costume;
		player_spawn.shade = gBattleState->players[player].shade;
		player_spawn.handicap = gBattleState->players[player].handicap;
		player_spawn.cp_level = gBattleState->players[player].level;
		player_spawn.stock_count = 0;
		player_spawn.damage = 300;
		player_spawn.is_skip_entry = TRUE;
		player_spawn.pl_kind = gBattleState->players[player].pl_kind;
		player_spawn.controller = &gPlayerControllers[player];

		player_spawn.figatree_heap = ftManagerAllocFigatreeHeapKind(gBattleState->players[player].ft_kind);

		fighter_gobj = ftManagerMakeFighter(&player_spawn);

		ftParamInitPlayerBattleStats(player, fighter_gobj);

		gBattleState->players[player].is_single_stockicon = FALSE;
	}
	ftManagerSetupFilesPlayablesAll();
	ifCommonBattleSetGameStatusWait();
	func_ovl2_8010E2D4();
	ifCommonPlayerArrowsInitInterface();
	func_ovl2_8010E1A4();
	ifCommonPlayerMagnifyMakeInterface();
	func_ovl2_8010DDC4();
	func_ovl2_8010E374();
	func_ovl2_8010E498();
	ifCommonPlayerTagMakeInterface();
	ifCommonPlayerDamageSetDigitPositions();
	ifCommonPlayerDamageInitInterface();
	ifCommonPlayerStockInitInterface();
	ifCommonSuddenDeathMakeInterface();
	mpCollisionSetPlayBGM();
	func_800269C0_275C0(nSYAudioVoicePublicityExcited);
	ifCommonTimerMakeInterface(ifCommonAnnounceTimeUpInitInterface);
	ifCommonTimerMakeDigits();

	color = dSCVSBattleSuddenDeathFadeColor;

	lbFadeMakeActor(nOMObjCommonKindTransition, nOMObjCommonLinkIDTransition, 10, &color, 12, TRUE, NULL);
}

// 0x8018E144
void scBattle_SetGeometryRenderLights(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);

	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018E190
void scBattleRoyalStartScene()
{
	gBattleState = &gTransferBattleState;

	gBattleState->game_type = nSCBattleGameTypeRoyal;

	gBattleState->gr_kind = gSceneData.gr_kind;

	if (gSaveData.error_flags & LBBACKUP_ERROR_VSBATTLECASTLE)
		gBattleState->gr_kind = nGRKindCastle;

	D_ovl4_8018E3D8.zbuffer = syDisplayGetZBuffer(6400);
	syDisplayInit(&D_ovl4_8018E3D8);
	D_ovl4_8018E3F4.arena_size = (uintptr_t)((uintptr_t)&D_NF_80392A00 - (uintptr_t)&D_NF_8018E7E0);
	D_ovl4_8018E3F4.func_start = scBattle_StartStockBattle;
	func_800A2698(&D_ovl4_8018E3F4);
	auStopBGM();

	while (auIsBGMPlaying(0))
		continue;

	auSetBGMVolume(0, 0x7800);
	func_800266A0_272A0();
	gmRumbleInitPlayers();

	if (!gSceneData.is_reset && scBattle_CheckSDSetTimeBattleResults())
	{
		gBattleState = &D_800A4EF8;

		gBattleState->game_type = nSCBattleGameTypeRoyal;

		D_ovl4_8018E3F4.func_start = scBattle_StartSDBattle;

		func_800A2698(&D_ovl4_8018E3F4);
		auStopBGM();

		while (auIsBGMPlaying(0))
			continue;

		auSetBGMVolume(0, 0x7800);
		func_800266A0_272A0();
		gmRumbleInitPlayers();
	}
	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = nSCKindVSResults;
}