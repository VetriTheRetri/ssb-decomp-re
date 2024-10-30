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

extern void func_800A26B8();

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018E3D0
syColorRGBA dSCVSBattleCommonFadeColor = { 0x00, 0x00, 0x00, 0x00 };

// 0x8018E3D4
syColorRGBA dSCVSBattleSuddenDeathFadeColor = { 0x00, 0x00, 0x00, 0x00 };

// 0x8018E3D8
SYVideoSetup dSCVSBattleVideoSetup = SYVIDEO_DEFINE_DEFAULT();

// 0x8018E3F4
SYTaskmanSetup dSCVSBattleTaskmanSetup =
{
    // Task Logic Buffer Setup
    {
        0,                              // ???
        scVSBattleFuncUpdate,           // Update function
        func_800A26B8,                  // Frame draw function
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
        update_contdata,                // Controller I/O function
    },

    0,                                  // Number of GObjThreads
    sizeof(u64) * 192,                  // Thread stack size
    0,                                  // Number of thread stacks
    0,                                  // ???
    0,                                  // Number of GObjProcesses
    0,                                  // Number of GObjs
    sizeof(GObj),                       // GObj size
    0,                                  // Number of Object Manager Matrices
    dLBCommonFuncMatrixList,            // Matrix function list
    NULL,                               // Function for ejecting DObjVec?
    0,                                  // Number of AObjs
    0,                                  // Number of MObjs
    0,                                  // Number of DObjs
    sizeof(DObj),                       // DObj size
    0,                                  // Number of SObjs
    sizeof(SObj),                       // SObj size
    0,                                  // Number of Cameras
    sizeof(CObj),                     // Camera size
    
    scVSBattleFuncStart             	// Task start function
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

	for (loop_player = 0; loop_player < ARRAY_COUNT(gBattleState->players); loop_player++)
	{
		if (loop_player == target_player)
		{
			continue;
		}
		else if (gBattleState->players[loop_player].pkind == nFTPlayerKindNot) 
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
	lr = (near_spawn >= 0.0F) ? +1 : -1;

	return lr;
}

// 0x8018D228
void scVSBattleFuncStart(void)
{
	s32 unused[4];
	s32 player;
	sb32 (*func_dmem)(void);
	void *file;
	FTCreateDesc ft_desc;
	syColorRGBA color;

	gSceneData.is_reset = FALSE;
	gSceneData.unk10 = 0;

	scVSBattleSetupFiles();

	if (!(gSaveData.error_flags & LBBACKUP_ERROR_1PGAMEMARIO) && (gSaveData.unk5E3 >= 0x45))
	{
		file = lbRelocGetFileExternHeap((u32)&D_NF_000000C7, syTaskmanMalloc(lbRelocGetFileSize((u32)&D_NF_000000C7), 0x10));

		func_dmem = lbRelocGetFileData(sb32 (*)(void), file, &lSYDmemCheckValidFunc);

		osWritebackDCache(func_dmem, *lbRelocGetFileData(s32*, file, &lSYDmemCheckValidNBytes));
		osInvalICache(func_dmem, *lbRelocGetFileData(s32*, file, &lSYDmemCheckValidNBytes));

		if (func_dmem() == FALSE)
		{
			gSaveData.error_flags |= LBBACKUP_ERROR_1PGAMEMARIO;
		}
	}
	gcMakeDefaultCameraGObj(9, GOBJ_LINKORDER_DEFAULT, 100, COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
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

	for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
	{
		ft_desc = dFTManagerDefaultFighterDesc;

		if (gBattleState->players[player].pkind == nFTPlayerKindNot)
		{
			continue;
		}
		ftManagerSetupFilesAllKind(gBattleState->players[player].fkind);

		ft_desc.fkind = gBattleState->players[player].fkind;

		mpCollisionGetPlayerMapObjPosition(player, &ft_desc.pos);

		ft_desc.lr_spawn = scVSBattleGetStartPlayerLR(player);

		ft_desc.team = gBattleState->players[player].player;
		ft_desc.player = player;

		ft_desc.detail = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? nFTPartsDetailHigh : nFTPartsDetailLow;

		ft_desc.costume = gBattleState->players[player].costume;
		ft_desc.shade = gBattleState->players[player].shade;
		ft_desc.handicap = gBattleState->players[player].handicap;
		ft_desc.cp_level = gBattleState->players[player].level;
		ft_desc.stock_count = gBattleState->stock_setting;
		ft_desc.damage = 0;
		ft_desc.pkind = gBattleState->players[player].pkind;
		ft_desc.controller = &gPlayerControllers[player];

		ft_desc.figatree_heap = ftManagerAllocFigatreeHeapKind(gBattleState->players[player].fkind);

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

	if (!(gBattleState->game_rules & SCBATTLE_GAMERULE_TIME))
	{
		return FALSE;
	}
	D_800A4EF8 = gTransferBattleState;
	D_800A4EF8.pl_count = D_800A4EF8.cp_count = 0;

	for (i = 0; i < ARRAY_COUNT(D_800A4EF8.players); i++)
	{
		D_800A4EF8.players[i].pkind = nFTPlayerKindNot;
	}
	switch (gBattleState->is_team_battle)
	{
	case FALSE:
		for (result_count = i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
		{
			if (gBattleState->players[i].pkind == nFTPlayerKindNot)
			{
				continue;
			}
			player_results[result_count].tko = gBattleState->players[i].score - gBattleState->players[i].falls;
			player_results[result_count].kos = gBattleState->players[i].score;
			player_results[result_count].player_or_team = i;
			player_results[result_count].unk_battleres_0x9 = FALSE;

			if (gBattleState->players[i].pkind == nFTPlayerKindMan)
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
			D_800A4EF8.players[player_results[i].player_or_team].pkind = gBattleState->players[player_results[i].player_or_team].pkind;

			switch (D_800A4EF8.players[player_results[i].player_or_team].pkind)
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
			if (gBattleState->players[i].pkind == nFTPlayerKindNot)
			{
				continue;
			}
			for (j = 0; j < result_count; j++)
			{
				if (gBattleState->players[i].team == player_results[j].player_or_team)
				{
					player_results[j].tko += gBattleState->players[i].score - gBattleState->players[i].falls;
					player_results[j].kos += gBattleState->players[i].score;

					if (player_results[j].is_human_player || (gBattleState->players[i].pkind == nFTPlayerKindMan))
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

			if (player_results[result_count].is_human_player || (gBattleState->players[i].pkind == nFTPlayerKindMan))
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
			for (j = 0; j < ARRAY_COUNT(gBattleState->players); j++)
			{
				if (gBattleState->players[j].pkind == nFTPlayerKindNot)
				{
					continue;
				}
				if (gBattleState->players[j].team == player_results[i].player_or_team)
				{
					D_800A4EF8.players[j].pkind = gBattleState->players[j].pkind;

					switch (D_800A4EF8.players[j].pkind)
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
void scVSBattleStartSudddenDeath(void)
{
	s32 unused[3];
	GObj *fighter_gobj;
	s32 player;
	FTCreateDesc ft_desc;
	syColorRGBA color;

	gSceneData.is_reset = FALSE;

	scVSBattleSetupFiles();
	gcMakeDefaultCameraGObj(9, GOBJ_LINKORDER_DEFAULT, 100, COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
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

	for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
	{
		ft_desc = dFTManagerDefaultFighterDesc;

		if (gBattleState->players[player].pkind == nFTPlayerKindNot)
		{
			continue;
		}
		ftManagerSetupFilesAllKind(gBattleState->players[player].fkind);

		ft_desc.fkind = gBattleState->players[player].fkind;

		mpCollisionGetPlayerMapObjPosition(player, &ft_desc.pos);

		ft_desc.lr_spawn = scVSBattleGetStartPlayerLR(player);

		ft_desc.team = gBattleState->players[player].player;
		ft_desc.player = player;

		ft_desc.detail = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? nFTPartsDetailHigh : nFTPartsDetailLow;

		ft_desc.costume = gBattleState->players[player].costume;
		ft_desc.shade = gBattleState->players[player].shade;
		ft_desc.handicap = gBattleState->players[player].handicap;
		ft_desc.cp_level = gBattleState->players[player].level;
		ft_desc.stock_count = 0;
		ft_desc.damage = 300;
		ft_desc.is_skip_entry = TRUE;
		ft_desc.pkind = gBattleState->players[player].pkind;
		ft_desc.controller = &gPlayerControllers[player];

		ft_desc.figatree_heap = ftManagerAllocFigatreeHeapKind(gBattleState->players[player].fkind);

		fighter_gobj = ftManagerMakeFighter(&ft_desc);

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
	gBattleState = &gTransferBattleState;

	gBattleState->game_type = nSCBattleGameTypeRoyal;

	gBattleState->gkind = gSceneData.gkind;

	if (gSaveData.error_flags & LBBACKUP_ERROR_VSBATTLECASTLE)
	{
		gBattleState->gkind = nGRKindCastle;
	}
	dSCVSBattleVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dSCVSBattleVideoSetup);

	dSCVSBattleTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&gSCSubsysFramebuffer0 - (uintptr_t)&ovl4_BSS_END);
	dSCVSBattleTaskmanSetup.func_start = scVSBattleFuncStart;
	func_800A2698(&dSCVSBattleTaskmanSetup);

	auStopBGM();

	while (auIsBGMPlaying(0))
	{
		continue;
	}
	auSetBGMVolume(0, 0x7800);
	func_800266A0_272A0();
	gmRumbleInitPlayers();

	if (!(gSceneData.is_reset) && scVSBattleSetScoreCheckSuddenDeath() != FALSE)
	{
		gBattleState = &D_800A4EF8;

		gBattleState->game_type = nSCBattleGameTypeRoyal;

		dSCVSBattleTaskmanSetup.func_start = scVSBattleStartSudddenDeath;

		func_800A2698(&dSCVSBattleTaskmanSetup);
		auStopBGM();

		while (auIsBGMPlaying(0))
		{
			continue;
		}
		auSetBGMVolume(0, 0x7800);
		func_800266A0_272A0();
		gmRumbleInitPlayers();
	}
	gSceneData.scene_prev = gSceneData.scene_curr;
	gSceneData.scene_curr = nSCKindVSResults;
}
