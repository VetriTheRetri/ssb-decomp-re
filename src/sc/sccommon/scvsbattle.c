#include <ft/fighter.h>
#include <if/interface.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <sys/video.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lSYDmemCheckValidFunc;		// 0x00000000
extern intptr_t lSYDmemCheckValidNBytes;	// 0x00000030

extern intptr_t D_NF_000000C7;

extern void scManagerFuncDraw();

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018E3D0
SYColorRGBA dSCVSBattleCommonFadeColor = { 0x00, 0x00, 0x00, 0x00 };

// 0x8018E3D4
SYColorRGBA dSCVSBattleSuddenDeathFadeColor = { 0x00, 0x00, 0x00, 0x00 };

// 0x8018E3D8
SYVideoSetup dSCVSBattleVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x8018E3F4
SYTaskmanSetup dSCVSBattleTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                              // ???
        scVSBattleFuncUpdate,           // Update function
        scManagerFuncDraw,              // Frame draw function
        &ovl4_BSS_END,                 	// Allocatable memory pool start
        0,                              // Allocatable memory pool size
        1,                              // ???
        2,                              // Number of contexts?
        sizeof(Gfx) * 7680,             // Display List Buffer 0 Size
        sizeof(Gfx) * 2560,             // Display List Buffer 1 Size
        0,                              // Display List Buffer 2 Size
        0,                              // Display List Buffer 3 Size
        0xD000,                         // Graphics Heap Size
        2,                              // ???
        0xC000,                         // RDP Output Buffer Size
        scVSBattleFuncLights,       	// Pre-render function
        syControllerFuncRead,           // Controller I/O function
    },

    0,                                  // Number of GObjThreads
    sizeof(u64) * 192,                  // Thread stack size
    0,                                  // Number of thread stacks
    0,                                  // ???
    0,                                  // Number of GObjProcesses
    0,                                  // Number of GObjs
    sizeof(GObj),                       // GObj size
    0,                                  // Number of XObjs
    dLBCommonFuncMatrixList,            // Matrix function list
    NULL,                               // DObjVec eject function
    0,                                  // Number of AObjs
    0,                                  // Number of MObjs
    0,                                  // Number of DObjs
    sizeof(DObj),                       // DObj size
    0,                                  // Number of SObjs
    sizeof(SObj),                       // SObj size
    0,                                  // Number of Cameras
    sizeof(CObj),                       // Camera size
    
    scVSBattleStartBattle             	// Task start function
};

// 0x8018D0C0
void scVSBattleFuncUpdate(void)
{
	ifCommonBattleUpdateInterfaceAll();
}

// 0x8018D0E0 - Get player's initial facing direction for battle start
s32 scVSBattleGetStartPlayerLR(s32 target_player)
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

	for (loop_player = 0; loop_player < ARRAY_COUNT(gSCManagerBattleState->players); loop_player++)
	{
		if (loop_player == target_player)
		{
			continue;
		}
		else if (gSCManagerBattleState->players[loop_player].pkind == nFTPlayerKindNot) 
		{
			continue;
		}
		else if (gSCManagerBattleState->players[loop_player].player != gSCManagerBattleState->players[target_player].player)
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
	lr = (near_spawn >= 0.0F) ? +1 : -1;

	return lr;
}

// 0x8018D228
void scVSBattleStartBattle(void)
{
	s32 unused[4];
	s32 player;
	sb32 (*func_dmem)(void);
	void *file;
	FTDesc ft_desc;
	SYColorRGBA color;

	gSCManagerSceneData.is_reset = FALSE;
	gSCManagerSceneData.is_suddendeath = FALSE;

	scVSBattleSetupFiles();

	if (!(gSCManagerBackupData.error_flags & LBBACKUP_ERROR_1PGAMEMARIO) && (gSCManagerBackupData.boot >= 69))
	{
		file = lbRelocGetExternHeapFile((u32)&D_NF_000000C7, syTaskmanMalloc(lbRelocGetFileSize((u32)&D_NF_000000C7), 0x10));

		func_dmem = lbRelocGetFileData(sb32 (*)(void), file, &lSYDmemCheckValidFunc);

		osWritebackDCache(func_dmem, *lbRelocGetFileData(s32*, file, &lSYDmemCheckValidNBytes));
		osInvalICache(func_dmem, *lbRelocGetFileData(s32*, file, &lSYDmemCheckValidNBytes));

		if (func_dmem() == FALSE)
		{
			gSCManagerBackupData.error_flags |= LBBACKUP_ERROR_1PGAMEMARIO;
		}
	}
	gcMakeDefaultCameraGObj(9, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	efParticleInitAll();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	grWallpaperMakeDecideKind();
	func_ovl2_8010DB00();
	itManagerInitItems();
	grCommonSetupInitAll();
	ftManagerAllocFighter(FTDATA_FLAG_MAINMOTION, GMCOMMON_PLAYERS_MAX);
	wpManagerAllocWeapons();
	efManagerInitEffects();
	ifScreenFlashMakeInterface(0xFF);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (player = 0; player < ARRAY_COUNT(gSCManagerBattleState->players); player++)
	{
		ft_desc = dFTManagerDefaultFighterDesc;

		if (gSCManagerBattleState->players[player].pkind == nFTPlayerKindNot)
		{
			continue;
		}
		ftManagerSetupFilesAllKind(gSCManagerBattleState->players[player].fkind);

		ft_desc.fkind = gSCManagerBattleState->players[player].fkind;

		mpCollisionGetPlayerMapObjPosition(player, &ft_desc.pos);

		ft_desc.lr = scVSBattleGetStartPlayerLR(player);

		ft_desc.team = gSCManagerBattleState->players[player].player;
		ft_desc.player = player;

		ft_desc.detail = ((gSCManagerBattleState->pl_count + gSCManagerBattleState->cp_count) < 3) ? nFTPartsDetailHigh : nFTPartsDetailLow;

		ft_desc.costume = gSCManagerBattleState->players[player].costume;
		ft_desc.shade = gSCManagerBattleState->players[player].shade;
		ft_desc.handicap = gSCManagerBattleState->players[player].handicap;
		ft_desc.level = gSCManagerBattleState->players[player].level;
		ft_desc.stock_count = gSCManagerBattleState->stocks;
		ft_desc.damage = 0;
		ft_desc.pkind = gSCManagerBattleState->players[player].pkind;
		ft_desc.controller = &gSYControllerDevices[player];

		ft_desc.figatree_heap = ftManagerAllocFigatreeHeapKind(gSCManagerBattleState->players[player].fkind);

		ftParamInitPlayerBattleStats(player, ftManagerMakeFighter(&ft_desc));
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

	lbFadeMakeActor(nGCCommonKindTransition, nGCCommonLinkIDTransition, 10, &color, 12, TRUE, NULL);
}

// 0x8018D5E0 - Sort time battle winners and check for sudden death
sb32 scVSBattleSetScoreCheckSuddenDeath(void)
{
	s32 result_count;
	s32 tied_players;
	s32 i, j;
	SCBattleResults winner_results;
	SCBattleResults player_results[GMCOMMON_PLAYERS_MAX];

	if (!(gSCManagerBattleState->game_rules & SCBATTLE_GAMERULE_TIME))
	{
		return FALSE;
	}
	gSCManagerVSBattleState = gSCManagerTransferBattleState;
	gSCManagerVSBattleState.pl_count = gSCManagerVSBattleState.cp_count = 0;

	for (i = 0; i < ARRAY_COUNT(gSCManagerVSBattleState.players); i++)
	{
		gSCManagerVSBattleState.players[i].pkind = nFTPlayerKindNot;
	}
	switch (gSCManagerBattleState->is_team_battle)
	{
	case FALSE:
		for (result_count = i = 0; i < ARRAY_COUNT(gSCManagerBattleState->players); i++)
		{
			if (gSCManagerBattleState->players[i].pkind == nFTPlayerKindNot)
			{
				continue;
			}
			player_results[result_count].tko = gSCManagerBattleState->players[i].score - gSCManagerBattleState->players[i].falls;
			player_results[result_count].kos = gSCManagerBattleState->players[i].score;
			player_results[result_count].player_or_team = i;
			player_results[result_count].unk_battleres_0x9 = FALSE;

			if (gSCManagerBattleState->players[i].pkind == nFTPlayerKindMan)
			{
				player_results[result_count].is_human_player = TRUE;
			}
			else player_results[result_count].is_human_player = FALSE;

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
		{
			return FALSE;
		}
		for (i = 0; i < tied_players; i++)
		{
			gSCManagerVSBattleState.players[player_results[i].player_or_team].pkind = gSCManagerBattleState->players[player_results[i].player_or_team].pkind;

			switch (gSCManagerVSBattleState.players[player_results[i].player_or_team].pkind)
			{
			case nFTPlayerKindMan:
				gSCManagerVSBattleState.pl_count++;
				break;

			case nFTPlayerKindCom:
				gSCManagerVSBattleState.cp_count++;
				break;
			}
		}
		break;

	case TRUE:
		for (result_count = i = 0; i < ARRAY_COUNT(gSCManagerBattleState->players); i++)
		{
			if (gSCManagerBattleState->players[i].pkind == nFTPlayerKindNot)
			{
				continue;
			}
			for (j = 0; j < result_count; j++)
			{
				if (gSCManagerBattleState->players[i].team == player_results[j].player_or_team)
				{
					player_results[j].tko += gSCManagerBattleState->players[i].score - gSCManagerBattleState->players[i].falls;
					player_results[j].kos += gSCManagerBattleState->players[i].score;

					if (player_results[j].is_human_player || (gSCManagerBattleState->players[i].pkind == nFTPlayerKindMan))
					{
						player_results[j].is_human_player = TRUE;
					}
					else player_results[j].is_human_player = FALSE;

					goto l_continue;
				}
			}
			player_results[result_count].tko = gSCManagerBattleState->players[i].score - gSCManagerBattleState->players[i].falls;
			player_results[result_count].kos = gSCManagerBattleState->players[i].score;
			player_results[result_count].player_or_team = gSCManagerBattleState->players[i].team;
			player_results[result_count].unk_battleres_0x9 = FALSE;

			if (player_results[result_count].is_human_player || (gSCManagerBattleState->players[i].pkind == nFTPlayerKindMan))
			{
				player_results[result_count].is_human_player = TRUE;
			}
			else player_results[result_count].is_human_player = FALSE;

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
		{
			return FALSE;
		}
		for (i = 0; i < tied_players; i++)
		{
			for (j = 0; j < ARRAY_COUNT(gSCManagerBattleState->players); j++)
			{
				if (gSCManagerBattleState->players[j].pkind == nFTPlayerKindNot)
				{
					continue;
				}
				if (gSCManagerBattleState->players[j].team == player_results[i].player_or_team)
				{
					gSCManagerVSBattleState.players[j].pkind = gSCManagerBattleState->players[j].pkind;

					switch (gSCManagerVSBattleState.players[j].pkind)
					{
					case nFTPlayerKindMan:
						gSCManagerVSBattleState.pl_count++;
						break;

					case nFTPlayerKindCom:
						gSCManagerVSBattleState.cp_count++;
						break;
					}
				}
			}
		}
		break;
	}
	gSCManagerVSBattleState.game_rules = SCBATTLE_GAMERULE_STOCK;
	gSCManagerVSBattleState.is_show_score = FALSE;

	gSCManagerSceneData.is_suddendeath = TRUE;

	return TRUE;
}

// 0x8018DE20 - Start sudden death
void scVSBattleStartSuddenDeath(void)
{
	s32 unused[3];
	GObj *fighter_gobj;
	s32 player;
	FTDesc ft_desc;
	SYColorRGBA color;

	gSCManagerSceneData.is_reset = FALSE;

	scVSBattleSetupFiles();
	gcMakeDefaultCameraGObj(9, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	efParticleInitAll();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	grWallpaperMakeDecideKind();
	func_ovl2_8010DB00();
	itManagerInitItems();
	grCommonSetupInitAll();
	ftManagerAllocFighter(2, GMCOMMON_PLAYERS_MAX);
	wpManagerAllocWeapons();
	efManagerInitEffects();
	ifScreenFlashMakeInterface(0xFF);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (player = 0; player < ARRAY_COUNT(gSCManagerBattleState->players); player++)
	{
		ft_desc = dFTManagerDefaultFighterDesc;

		if (gSCManagerBattleState->players[player].pkind == nFTPlayerKindNot)
		{
			continue;
		}
		ftManagerSetupFilesAllKind(gSCManagerBattleState->players[player].fkind);

		ft_desc.fkind = gSCManagerBattleState->players[player].fkind;

		mpCollisionGetPlayerMapObjPosition(player, &ft_desc.pos);

		ft_desc.lr = scVSBattleGetStartPlayerLR(player);

		ft_desc.team = gSCManagerBattleState->players[player].player;
		ft_desc.player = player;

		ft_desc.detail = ((gSCManagerBattleState->pl_count + gSCManagerBattleState->cp_count) < 3) ? nFTPartsDetailHigh : nFTPartsDetailLow;

		ft_desc.costume = gSCManagerBattleState->players[player].costume;
		ft_desc.shade = gSCManagerBattleState->players[player].shade;
		ft_desc.handicap = gSCManagerBattleState->players[player].handicap;
		ft_desc.level = gSCManagerBattleState->players[player].level;
		ft_desc.stock_count = 0;
		ft_desc.damage = 300;
		ft_desc.is_skip_entry = TRUE;
		ft_desc.pkind = gSCManagerBattleState->players[player].pkind;
		ft_desc.controller = &gSYControllerDevices[player];

		ft_desc.figatree_heap = ftManagerAllocFigatreeHeapKind(gSCManagerBattleState->players[player].fkind);

		fighter_gobj = ftManagerMakeFighter(&ft_desc);

		ftParamInitPlayerBattleStats(player, fighter_gobj);

		gSCManagerBattleState->players[player].is_single_stockicon = FALSE;
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

	lbFadeMakeActor(nGCCommonKindTransition, nGCCommonLinkIDTransition, 10, &color, 12, TRUE, NULL);
}

// 0x8018E144
void scVSBattleFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);

	ftDisplayLightsDrawReflect(dls, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018E190
void scVSBattleStartScene(void)
{
	gSCManagerBattleState = &gSCManagerTransferBattleState;

	gSCManagerBattleState->game_type = nSCBattleGameTypeRoyal;

	gSCManagerBattleState->gkind = gSCManagerSceneData.gkind;

	if (gSCManagerBackupData.error_flags & LBBACKUP_ERROR_VSBATTLECASTLE)
	{
		gSCManagerBattleState->gkind = nGRKindCastle;
	}
	dSCVSBattleVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dSCVSBattleVideoSetup);

	dSCVSBattleTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&gSYFramebufferSets - (uintptr_t)&ovl4_BSS_END);
	dSCVSBattleTaskmanSetup.func_start = scVSBattleStartBattle;
	scManagerFuncUpdate(&dSCVSBattleTaskmanSetup);

	auStopBGM();

	while (auIsBGMPlaying(0))
	{
		continue;
	}
	auSetBGMVolume(0, 0x7800);
	func_800266A0_272A0();
	gmRumbleInitPlayers();

	if (!(gSCManagerSceneData.is_reset) && scVSBattleSetScoreCheckSuddenDeath() != FALSE)
	{
		gSCManagerBattleState = &gSCManagerVSBattleState;

		gSCManagerBattleState->game_type = nSCBattleGameTypeRoyal;

		dSCVSBattleTaskmanSetup.func_start = scVSBattleStartSuddenDeath;

		scManagerFuncUpdate(&dSCVSBattleTaskmanSetup);
		auStopBGM();

		while (auIsBGMPlaying(0))
		{
			continue;
		}
		auSetBGMVolume(0, 0x7800);
		func_800266A0_272A0();
		gmRumbleInitPlayers();
	}
	gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
	gSCManagerSceneData.scene_curr = nSCKindVSResults;
}
