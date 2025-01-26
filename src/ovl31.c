#include <mn/menu.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <if/interface.h>
#include <sc/scene.h>
#include <sys/video.h>
#include <sys/audio.h>

extern u32 lMNVSResultsFileID;				// 0x00000022

extern void scManagerFuncDraw();

typedef struct MNVSResultsScore
{
	s32 score;
	s32 place;
	s32 player;

} MNVSResultsScore;

// Externs
extern f32 dSCSubsysDemoFighterScales[12];           // 0x80390D90

extern intptr_t FILE_022_TKO_TEXTURE_IMAGE_OFFSET; // file 0x022 image offset for TKO texture
extern intptr_t FILE_022_PLACE_TEXTURE_IMAGE_OFFSET; // file 0x022 image offset for Place texture
extern intptr_t FILE_022_POINTS_TEXTURE_IMAGE_OFFSET; // file 0x022 image offset for Pts texture
extern intptr_t FILE_022_KOS_TEXTURE_IMAGE_OFFSET; // file 0x022 image offset for KOs texture
extern intptr_t FILE_022_BACKGROUND_IMAGE_OFFSET; // file 0x022 image offset for background image
extern intptr_t FILE_022_FIRST_PLACE_ICON_IMAGE_OFFSET; // file 0x022 image offset for 1st place icon
extern intptr_t FILE_024_DASH_IMAGE_OFFSET; // file 0x024 image offset for dash
extern intptr_t FILE_026_INDICATOR_CP_IMAGE_OFFSET; // file 0x026 image offset for CPU player indicator
extern intptr_t FILE_0A4_1_IMAGE_OFFSET; // file 0x0A4 image offset for number 1

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern void* func_800269C0_275C0(u16);

extern u8 dIFCommonPlayerTagEnvColorsR[];
extern u8 dIFCommonPlayerTagEnvColorsG[];
extern u8 dIFCommonPlayerTagEnvColorsB[];
extern u8 dIFCommonPlayerTagPrimColorsR[];
extern u8 dIFCommonPlayerTagPrimColorsG[];
extern u8 dIFCommonPlayerTagPrimColorsB[];
extern ALCSPlayer *gSYAudioALCSPlayers;

// Forward declarations
void mnVSResultsFuncStart();
void mnVSResultsDrawResults0(GObj *gobj);
void mnVSResultsDrawResults1(GObj *gobj);
void mnVSResultsDrawResults2(GObj *gobj);
void mnVSResultsDrawResults3(GObj *gobj);
void mnVSResultsDrawResultsNoContest(GObj *gobj);
u8 mnVSResultsGetWinTeam();
s32 mnVSResultsGetWinPlayer();
s32 mnVSResultsGetFighterKind(s32 player);
s32 mnVSResultsGetPointsDirect(s32 player);
s32 mnVSResultsGetPlayerCountByPlace(s32 place);

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80138EF0
s32 dMNVSResultsUnused0x80138EF0[/* */] =
{
	0x8B179319,
	0x935B9B5B,
	0x82D78295,
	0x7A937251,
	0x721169CF,
	0x69CD618D,
	0x614B5949,
	0x00000000
};

// 0x80138F10
s32 dMNVSResultsUnused0x80138F10[/* */] =
{
	0x639B6BDD,
	0x741F5B99,
	0x53575317,
	0x4B154AD5,
	0x42D53A93,
	0x3A91324F,
	0x2A4F2A0D,
	0x00000000
};

// 0x80138F30
s32 dMNVSResultsUnused0x80138F30[/* */] =
{
	0x73B17BF3,
	0x84338435,
	0x6B6F632F,
	0x5AED52AB,
	0x4A6B4A69,
	0x422939E7,
	0x4A6B4A69,
	0x00000000
};

// 0x80138F50
s32 dMNVSResultsUnused0x80138F50[/* */] =
{
	0x94199C5B,
	0x8BD783D5,
	0x83939417,
	0x7B51734F,
	0x730F72CD,
	0x6ACB730F,
	0x72CD6ACB,
	0x00000000
};

// 0x80138F70
u32 dMNVSResultsFileIDs[/* */] =
{
	&lMNVSResultsFileID,
	&lIFCommonPlayerTagsFileID,
	&lMNPlayersGameModesFileID,
	&lIFCommonPlayerDamageFileID,
	&lFTEmblemModelsFileID,
	&lIFCommonDigitsFileID,
	&lIFCommonAnnounceCommonFileID,
	&lFTStocksZakoFileID
};

// 0x80138F90
s32 dMNVSResultsUnused0x80138F90[/* */] =
{
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x0A0A3C00,
	0x00000000
};

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801398A0
s32 sMNVSResultsPad0x801398A0[182];

// 0x80139B78 - frames elapsed on Results screen
s32 sMNVSResultsTotalTimeTics;

// 0x80139B7C
s32 sMNVSResultsHorizontalLineWidth;

// 0x80139B80
s32 sMNVSResultsKOs[GMCOMMON_PLAYERS_MAX];

// 0x80139B90
s32 sMNVSResultsTKO[GMCOMMON_PLAYERS_MAX];

// 0x80139BA0;
s32 sMNVSResultsPoints[GMCOMMON_PLAYERS_MAX];

// 0x80139BB0
s32 sMNVSResultsPlaces[GMCOMMON_PLAYERS_MAX];

// 0x80139BC0
u32 sMNVSResultsOverlayAlpha;

// 0x80139BC4
s32 sMNVSResultsBackgroundOverlayAlpha;

// 0x80139BC8
s32 sMNVSResultsBackgroundOverlay2Alpha;

// 0x80139BD0
sb32 sMNVSResultsIsPresent[GMCOMMON_PLAYERS_MAX];

// 0x80139BE0
GObj *sMNVSResultsFighterGObjs[GMCOMMON_PLAYERS_MAX];

// 0x80139BF0
s32 sMNVSResultsFighterKinds[GMCOMMON_PLAYERS_MAX];

// 0x80139C00
void *sMNVSResultsFigatreeHeaps[GMCOMMON_PLAYERS_MAX];

// 0x80139C10
s32 sMNVSResultsGameRule;

// 0x80139C14
ub8 sMNVSResultsIsTeamBattle;

// 0x80139C18 frames to wait until pressing start will exit the Results screen
s32 sMNVSResultsAllowExitWait;

// 0x80139C20
sb32 sMNVSResultsIsSharedWinner[GMCOMMON_PLAYERS_MAX];

// 0x80139C30
sb32 sMNVSResultsPad0x80139C30[GMCOMMON_PLAYERS_MAX];

// 0x80139C40
s32 sMNVSResultsCharacterAlpha;

// 0x80139C44
s32 sMNVSResultsDrawBackgroundFrame;

// 0x80139C48
s32 smnVSResultsMakeResultsTextFrame;

// 0x80139C4C
s32 smnVSResultsInitFightersAllFrame;

// 0x80139C50
LBFileNode sMNVSResultsStatusBuffer[120];

// 0x8013A010
LBFileNode sMNVSResultsForceStatusBuffer[7];

// 0x8013A048
void *sMNVSResultsFiles[ARRAY_COUNT(dMNVSResultsFileIDs)];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B20
void mnVSResultsFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B78
s32 mnVSResultsGetPlayerCount(void)
{
	return gSCManagerTransferBattleState.pl_count + gSCManagerTransferBattleState.cp_count;
}

// 0x80131B90
void mnVSResultsSaveBackup(void)
{
	LBBackupVSRecord *vs_record;
	s32 i, j;
	u8 this_fkind, vs_fkind;

	gSCManagerBackupData.vs_total_battles++;
	gSCManagerBackupData.ground_mask |= (1 << gSCManagerTransferBattleState.gkind);

	if (gSCManagerBackupData.vs_itemswitch_battles < U8_MAX)
	{
		gSCManagerBackupData.vs_itemswitch_battles++;
	}
	for (i = 0; i < ARRAY_COUNT(gSCManagerTransferBattleState.players); i++)
	{
		if (gSCManagerTransferBattleState.players[i].pkind != nFTPlayerKindNot)
		{
			this_fkind = gSCManagerTransferBattleState.players[i].fkind;
			vs_record = &gSCManagerBackupData.vs_records[this_fkind];

			vs_record->time_used += (gSCManagerTransferBattleState.time_passed / UPDATE_INTERVAL);

			if (vs_record->time_used > I_MIN_TO_TICS(1000) - 1)
			{
				vs_record->time_used = I_MIN_TO_TICS(1000) - 1;
			}
			vs_record->damage_given += gSCManagerTransferBattleState.players[i].total_damage_given;

			if (vs_record->damage_given > 999999)
			{
				vs_record->damage_given = 999999;
			}
			vs_record->damage_taken += gSCManagerTransferBattleState.players[i].total_damage_all;

			if (vs_record->damage_taken > 999999)
			{
				vs_record->damage_taken = 999999;
			}
			vs_record->selfdestructs += gSCManagerTransferBattleState.players[i].total_selfdestructs;

			if (vs_record->selfdestructs > 9999)
			{
				vs_record->selfdestructs = 9999;
			}
			vs_record->games_played++;
			vs_record->player_count_tally += mnVSResultsGetPlayerCount();

			for (j = 0; j < ARRAY_COUNT(gSCManagerTransferBattleState.players); j++)
			{
				if ((i != j) && (gSCManagerTransferBattleState.players[j].pkind != nFTPlayerKindNot))
				{
					vs_fkind = gSCManagerTransferBattleState.players[j].fkind;

					gSCManagerBackupData.vs_records[this_fkind].ko_count[vs_fkind] += gSCManagerTransferBattleState.players[i].total_kos_players[j];

					if (gSCManagerBackupData.vs_records[this_fkind].ko_count[vs_fkind] > 9999)
					{
						gSCManagerBackupData.vs_records[this_fkind].ko_count[vs_fkind] = 9999;
					}
					gSCManagerBackupData.vs_records[this_fkind].player_count_tallies[vs_fkind] += mnVSResultsGetPlayerCount();
					gSCManagerBackupData.vs_records[this_fkind].played_against[vs_fkind]++;
				}
			}
		}
	}
	lbBackupWrite();
}

// 0x80131E18
sb32 mnVSResultsCheckExit(void)
{
	s32 i;

	if (sMNVSResultsTotalTimeTics >= sMNVSResultsAllowExitWait)
	{
		for (i = 0; i < ARRAY_COUNT(gSYControllerDevices); i++)
		{
			if (gSYControllerDevices[i].button_tap & START_BUTTON)
			{
				return TRUE;
			}
		}
	}
	return FALSE;
}

// 0x80131EB0
void mnVSResultsAnnounceWinner(void)
{
	u32 announcer_names[/* */] =
	{
		nSYAudioVoiceAnnounceMario,
		nSYAudioVoiceAnnounceFox,
		nSYAudioVoiceAnnounceDonkey,
		nSYAudioVoiceAnnounceSamus,
		nSYAudioVoiceAnnounceLuigi,
		nSYAudioVoiceAnnounceLink,
		nSYAudioVoiceAnnounceYoshi,
		nSYAudioVoiceAnnounceCaptain,
		nSYAudioVoiceAnnounceKirby,
		nSYAudioVoiceAnnouncePikachu,
		nSYAudioVoiceAnnouncePurin,
		nSYAudioVoiceAnnounceNess
	};
	u32 announcer_teams[/* */] =
	{
		nSYAudioVoiceAnnounceRedTeam,
		nSYAudioVoiceAnnounceBlueTeam,
		nSYAudioVoiceAnnounceGreenTeam
	};

	if (sMNVSResultsGameRule == 4)
	{
		// No Contest
		switch (sMNVSResultsTotalTimeTics)
		{
		case 2:
			func_800269C0_275C0(nSYAudioVoiceAnnounceNoContest);
			break;
			
		case 71:
			func_800269C0_275C0(nSYAudioVoicePublicNoContest);
			break;
		}
	}
	else if (sMNVSResultsIsTeamBattle == FALSE)
	{
		// FFA - "This Game's Winner Is..."
		switch (sMNVSResultsTotalTimeTics)
		{
		case 81:
			func_800269C0_275C0(nSYAudioVoiceAnnounceWinnerIs);
			break;
			
		case 210:
			func_800269C0_275C0(announcer_names[mnVSResultsGetFighterKind(mnVSResultsGetWinPlayer())]);
			break;
			
		case 270:
			func_800269C0_275C0(nSYAudioVoicePublicExcited);
			break;
		}
	}
	else
	{
		// Teams - "Red/Blue/Grean Team Wins!"
		switch (sMNVSResultsTotalTimeTics)
		{
		case 81:
			func_800269C0_275C0(announcer_teams[mnVSResultsGetWinTeam()]);
			break;
			
		case 130:
			func_800269C0_275C0(nSYAudioVoiceAnnounceWins);
			break;
			
		case 150:
			func_800269C0_275C0(nSYAudioVoicePublicExcited);
			break;
		}
	}
}

// 0x8013205C
s32 mnVSResultsGetPresentCount(void)
{
	s32 i, sum = 0;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if (sMNVSResultsIsPresent[i] == TRUE)
		{
			sum++;
		}
	}
	return sum;
}

// 0x801320B8
s32 mnVSResultsGetPresentLowerCount(s32 player)
{
	s32 i, sum = 0;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if (player != i)
		{
			if (sMNVSResultsIsPresent[i] == TRUE)
			{
				sum++;
			}
		}
		else break;
	}
	return sum;
}

// 0x80132100
s32 mnVSResultsGetPlacePlayer(s32 place)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if ((sMNVSResultsIsPresent[i]) && (place == sMNVSResultsPlaces[i]))
		{
			return i;
		}
	}
	return -1;
}

// 0x801321AC
s32 mnVSResultsGetPlayerDistanceID(s32 player)
{
	s32 foes = mnVSResultsGetPresentLowerCount(player);

	if (mnVSResultsGetPlayerCountByPlace(0) == 1)
	{
		switch (mnVSResultsGetPresentCount())
		{
		case 2:
			break;
			
		case 3:
			if (sMNVSResultsPlaces[player] == 0)
			{
				switch (mnVSResultsGetPresentLowerCount(player))
				{
				case 0:
					foes = 1;
					break;
						
				case 2:
					foes = 1;
					break;
				}
			}
			else if (mnVSResultsGetPresentLowerCount(player) == 1)
			{
				foes = mnVSResultsGetPresentLowerCount(mnVSResultsGetPlacePlayer(0));
			}
			break;

		default:
			switch (player)
			{
			case 0:
				if ((sMNVSResultsPlaces[0] == 0) && (sMNVSResultsPlaces[1] != 0))
				{
					foes = 1;
				}
				break;
					
			case 1:
				if ((sMNVSResultsPlaces[0] == 0) && (sMNVSResultsPlaces[1] != 0))
				{
					foes = 0;
				}
				break;
					
			case 2:
				if ((sMNVSResultsPlaces[3] == 0) && (sMNVSResultsPlaces[2] != 0))
				{
					foes = 3;
				}
				break;
					
			case 3:
				if ((sMNVSResultsPlaces[3] == 0) && (sMNVSResultsPlaces[2] != 0))
				{
					foes = 2;
				}
				break;
			}
			break;
		}
	}
	return foes;
}

// 0x8013234C
s32 mnVSResultsGetWinPlayer(void)
{
	s32 i;
	sb32 winners_possible[GMCOMMON_PLAYERS_MAX];
	s32 score[GMCOMMON_PLAYERS_MAX];
	s32 win_player = 666;
	sb32 winners_multi[GMCOMMON_PLAYERS_MAX];
	sb32 is_winners_multi;
	s32 unused;

	// If FFA, use place
	if ((sMNVSResultsGameRule == nSCBattleGameRuleTime) || (sMNVSResultsGameRule == nSCBattleGameRuleStock))
	{
		for (i = 0; i < (ARRAY_COUNT(sMNVSResultsIsPresent) + ARRAY_COUNT(sMNVSResultsPlaces)) / 2; i++)
		{
			if ((sMNVSResultsIsPresent[i] == TRUE) && (sMNVSResultsPlaces[i] == 0))
			{
				return i;
			}
		}
	}
	else
	{
		// If here, it's teams

		// Get KOs minus TKO for each port
		for (i = 0; i < ARRAY_COUNT(score); i++)
		{
			score[i] = mnVSResultsGetPointsDirect(i); // gets kos minus tkos
		}
		
		// Set lowest present port to winner and remember which ports may be the winner
		for (i = 0; i < (ARRAY_COUNT(sMNVSResultsIsPresent) + ARRAY_COUNT(sMNVSResultsPlaces) + ARRAY_COUNT(winners_possible)) / 3; i++)
		{
			if ((sMNVSResultsIsPresent[i] != FALSE) && (sMNVSResultsPlaces[i] == 0))
			{
				if (win_player == 666)
				{
					win_player = i;
				}
				winners_possible[i] = TRUE;
			}
			else winners_possible[i] = FALSE;
		}

		// Initialize as no multi winners
		for (i = 0; i < ARRAY_COUNT(winners_multi); i++)
		{
			winners_multi[i] = FALSE;
		}
		
		// Get the winner port based on highest KOs minus TKO score
		for (i = win_player + 1; i < (ARRAY_COUNT(winners_possible) + ARRAY_COUNT(score)) / 2; i++)
		{
			if ((winners_possible[i] != FALSE) && (score[win_player] < score[i]))
			{
				win_player = i;
			}
		}
		is_winners_multi = FALSE;

		// Figure out if any potential winners have the same KOs minus TKO score
		for (i = win_player + 1; i < (ARRAY_COUNT(winners_possible) + ARRAY_COUNT(score) + ARRAY_COUNT(winners_multi)) / 3; i++)
		{
			if ((winners_possible[i] != FALSE) && (score[win_player] == score[i]))
			{
				winners_multi[win_player] = winners_multi[i] = TRUE;
				is_winners_multi = TRUE;
			}
		}
		if (is_winners_multi != FALSE)
		{
			// Break the tie based on number of KOs
			for (i = win_player + 1; i < (ARRAY_COUNT(winners_multi) + ARRAY_COUNT(sMNVSResultsKOs)) / 2; i++)
			{
				if ((winners_multi[i]) && (sMNVSResultsKOs[win_player] < sMNVSResultsKOs[i]))
				{
					win_player = i;
				}
			}
			for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsSharedWinner); i++)
			{
				sMNVSResultsIsSharedWinner[i] = FALSE;
			}
			for (i = win_player + 1; i < (ARRAY_COUNT(sMNVSResultsKOs) + ARRAY_COUNT(sMNVSResultsIsSharedWinner)) / 2; i++)
			{
				if (sMNVSResultsKOs[win_player] == sMNVSResultsKOs[i])
				{
					sMNVSResultsIsSharedWinner[i] = TRUE;
					sMNVSResultsIsSharedWinner[win_player] = TRUE;
				}
			}
		}
		return win_player;
	}
}

// 0x80132A2C
u8 mnVSResultsGetWinTeam(void)
{
	return gSCManagerTransferBattleState.players[mnVSResultsGetWinPlayer()].team;
}

// 0x80132A68
void mnVSResultsEmblemProcUpdate(GObj *gobj)
{
	f32 new_scale;
	f32 min_scale = 10.0F;
	f32 max_y = 1000.0F;

	if (sMNVSResultsTotalTimeTics >= 40)
	{
		if (min_scale < DObjGetStruct(gobj)->scale.vec.f.x)
		{
			new_scale = DObjGetStruct(gobj)->scale.vec.f.x - 0.15F;

			if (new_scale < min_scale)
			{
				new_scale = min_scale;
			}
			DObjGetStruct(gobj)->scale.vec.f.x = new_scale;
			DObjGetStruct(gobj)->scale.vec.f.y = new_scale;
		}
		if (DObjGetStruct(gobj)->translate.vec.f.y < max_y)
		{
			DObjGetStruct(gobj)->translate.vec.f.y += 11.0F;

			if (DObjGetStruct(gobj)->translate.vec.f.y > max_y)
			{
				DObjGetStruct(gobj)->translate.vec.f.y = max_y;
			}
		}
	}
}

// 0x80132B20
void mnVSResultsMakeEmblem(void)
{
	GObj *gobj;
	s32 win_player;
	s32 win_fkind;
	s32 color;

	intptr_t dobjdescs[/* */] =
	{
		&lFTEmblemModelsMarioDObjDesc, 			&lFTEmblemModelsFoxDObjDesc,
		&lFTEmblemModelsDonkeyDObjDesc, 		&lFTEmblemModelsMetroidDObjDesc,
		&lFTEmblemModelsMarioDObjDesc,			&lFTEmblemModelsZeldaDObjDesc,
		&lFTEmblemModelsYoshiDObjDesc, 			&lFTEmblemModelsFZeroDObjDesc,
		&lFTEmblemModelsKirbyDObjDesc, 	 		&lFTEmblemModelsPMonstersDObjDesc,
		&lFTEmblemModelsPMonstersDObjDesc,		&lFTEmblemModelsMotherDObjDesc
	};
	intptr_t mobjsubs[/* */] =
	{
		&lFTEmblemModelsMarioMObjSub, 			&lFTEmblemModelsFoxMObjSub,
		&lFTEmblemModelsDonkeyMObjSub, 			&lFTEmblemModelsMetroidMObjSub,
		&lFTEmblemModelsMarioMObjSub,			&lFTEmblemModelsZeldaMObjSub,
		&lFTEmblemModelsYoshiMObjSub, 			&lFTEmblemModelsFZeroMObjSub,
		&lFTEmblemModelsKirbyMObjSub, 	 		&lFTEmblemModelsPMonstersMObjSub,
		&lFTEmblemModelsPMonstersMObjSub,		&lFTEmblemModelsMotherMObjSub
	};
	intptr_t matanim_joints[/* */] =
	{
		&lFTEmblemModelsMarioMatAnimJoint, 		&lFTEmblemModelsFoxMatAnimJoint,
		&lFTEmblemModelsDonkeyMatAnimJoint, 	&lFTEmblemModelsMetroidMatAnimJoint,
		&lFTEmblemModelsMarioMatAnimJoint,		&lFTEmblemModelsZeldaMatAnimJoint,
		&lFTEmblemModelsYoshiMatAnimJoint, 		&lFTEmblemModelsFZeroMatAnimJoint,
		&lFTEmblemModelsKirbyMatAnimJoint, 	 	&lFTEmblemModelsPMonstersMatAnimJoint,
		&lFTEmblemModelsPMonstersMatAnimJoint,	&lFTEmblemModelsMotherMatAnimJoint
	};
	s32 colors[/* */] = { 0, 1, 3 };

	if (sMNVSResultsIsTeamBattle == FALSE)
	{
		win_player = mnVSResultsGetWinPlayer();
		win_fkind = mnVSResultsGetFighterKind(win_player);
		color = win_player;
	}
	if (sMNVSResultsIsTeamBattle == TRUE)
	{
		win_fkind = mnVSResultsGetFighterKind(mnVSResultsGetWinPlayer());
		color = colors[mnVSResultsGetWinTeam()];
	}
	gobj = gcMakeGObjSPAfter(0, NULL, 23, GOBJ_PRIORITY_DEFAULT);

	gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMNVSResultsFiles[4], dobjdescs[win_fkind]), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 33, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMNVSResultsFiles[4], mobjsubs[win_fkind]));
	gcAddMatAnimJointAll(gobj, lbRelocGetFileData(AObjEvent32***, sMNVSResultsFiles[4], matanim_joints[win_fkind]), color);
	gcPlayAnimAll(gobj);
	gcAddGObjProcess(gobj, mnVSResultsEmblemProcUpdate, nGCProcessKindFunc, 1);

	DObjGetStruct(gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(gobj)->translate.vec.f.y = 100.0F;
	DObjGetStruct(gobj)->translate.vec.f.z = -11000.0F;
	DObjGetStruct(gobj)->scale.vec.f.x = 25.0F;
	DObjGetStruct(gobj)->scale.vec.f.y = 25.0F;
}

// 0x80132D84
void mnVSResultsWallpaperProcDisplay(GObj *gobj)
{
	SObj *sobj = SObjGetStruct(gobj);

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, sobj->sprite.red, sobj->sprite.green, sobj->sprite.blue, sobj->sprite.alpha);
	gDPSetEnvColor(gSYTaskmanDLHeads[0]++, sobj->envcolor.r, sobj->envcolor.g, sobj->envcolor.b, sobj->envcolor.a);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,  0, 0, 0, 1,  PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,  0, 0, 0, 1);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

	lbCommonDrawSObjNoAttr(gobj);
}

// 0x80132EA8
void mnVSResultsMakeWallpaper(void)
{
	GObj *gobj;
	SObj *sobj;
	GObj *camera_gobj;
	s32 unused[2];
	s32 win_player;

	SYColorRGBPair unused_colors[/* */] =
	{
		{ { 0xAB, 0x31, 0x25 }, { 0xAF, 0x56, 0x4E } },
		{ { 0x00, 0x3F, 0xFF }, { 0x39, 0x6A, 0xFF } },
		{ { 0xDE, 0xB2, 0x00 }, { 0xFF, 0xD7, 0x33 } },
		{ { 0x17, 0x7E, 0x43 }, { 0x2A, 0x98, 0x45 } }
	};
	s32 *unused_array_pointers[/* */] =
	{
		dMNVSResultsUnused0x80138EF0,
		dMNVSResultsUnused0x80138F30,
		dMNVSResultsUnused0x80138F50,
		dMNVSResultsUnused0x80138F10
	};
	s32 team_colors[/* */] = { 0, 1, 3 };

	SYColorRGBPair colors[/* */] =
	{
		{ { 0x5C, 0x2B, 0x27 }, { 0x98, 0x6F, 0x6C } },
		{ { 0x39, 0x39, 0x99 }, { 0x86, 0x86, 0xD1 } },
		{ { 0x69, 0x58, 0x2B }, { 0x9B, 0x8E, 0x6C } },
		{ { 0x2B, 0x44, 0x36 }, { 0x71, 0x82, 0x78 } }
	};
	CObj *cobj;

	camera_gobj = gcMakeCameraGObj
	(
		nGCCommonKindSceneCamera,
		NULL,
		16,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSprite,
		80,
		COBJ_MASK_DLLINK(26),
		~0,
		FALSE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	if (sMNVSResultsGameRule == 4)
	{
		win_player = syUtilsGetRandomIntRange(GMCOMMON_PLAYERS_MAX);
	}
	else
	{
		if (sMNVSResultsIsTeamBattle == FALSE)
		{
			win_player = mnVSResultsGetWinPlayer();
		}
		if (sMNVSResultsIsTeamBattle == TRUE)
		{
			win_player = team_colors[mnVSResultsGetWinTeam()];
		}
	}
	gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mnVSResultsWallpaperProcDisplay, 26, GOBJ_PRIORITY_DEFAULT, ~0);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSResultsFiles[0], &FILE_022_BACKGROUND_IMAGE_OFFSET));

	SObjGetStruct(gobj)->pos.x = 10.0F;
	SObjGetStruct(gobj)->pos.y = 10.0F;
	sobj->envcolor.r = colors[win_player].prim.r;
	sobj->envcolor.g = colors[win_player].prim.g;
	sobj->envcolor.b = colors[win_player].prim.b;
	sobj->sprite.red = colors[win_player].env.r;
	sobj->sprite.green = colors[win_player].env.g;
	sobj->sprite.blue = colors[win_player].env.b;
}

// 0x80133134
s32 mnVSResultsGetPlace(s32 player)
{
	return sMNVSResultsPlaces[player];
}

// 0x80133148
s32 mnVSResultsGetFighterKind(s32 player)
{
	return sMNVSResultsFighterKinds[player];
}

// 0x8013315C
void mnVSResultsSetFighterKindAll(void)
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(sMNVSResultsIsPresent) + ARRAY_COUNT(sMNVSResultsFighterKinds) + ARRAY_COUNT(gSCManagerTransferBattleState.players)) / 3; i++)
	{
		if (sMNVSResultsIsPresent[i])
		{
			sMNVSResultsFighterKinds[i] = gSCManagerTransferBattleState.players[i].fkind;
		}
	}
}

// 0x801331DC
void mnVSResultsSetFighterPosition(GObj* fighter_gobj, s32 player, s32 place)
{
	f32 pos_x_2p[/* */][4] =
	{
		-150.0F, -350.0F, -700.0F, -1000.0F,
		 100.0F,  250.0F,  600.0F,  1000.0F
	};
	f32 pos_x_3p[/* */][4] =
	{
		-450.0F, -900.0F, -2000.0F, -3000.0F,
		   0.0F,    0.0F,     0.0F,     0.0F,
		 400.0F,  800.0F,  1800.0F,  2800.0F
	};
	f32 pos_x_4p[/* */][4] =
	{
		-450.0F, -900.0F, -2000.0F, -3000.0F,
		-150.0F, -350.0F,  -700.0F, -1000.0F,
		 150.0F,  300.0F,   700.0F,  1000.0F,
		 400.0F,  800.0F,  1800.0F,  2800.0F
	};
	f32 pos_yz[/* */][2] =
	{
		{ -350.0F, 	   0.0F },
		{ -450.0F, -2000.0F },
		{ -700.0F, -5000.0F },
		{ -900.0F, -9000.0F }
	};

	switch (mnVSResultsGetPresentCount())
	{
	case 2:
		DObjGetStruct(fighter_gobj)->translate.vec.f.x = pos_x_2p[mnVSResultsGetPlayerDistanceID(player)][place];
		break;

	case 3:
		DObjGetStruct(fighter_gobj)->translate.vec.f.x = pos_x_3p[mnVSResultsGetPlayerDistanceID(player)][place];
		break;

	case 4:
	default:
		DObjGetStruct(fighter_gobj)->translate.vec.f.x = pos_x_4p[mnVSResultsGetPlayerDistanceID(player)][place];
		break;
	}
	DObjGetStruct(fighter_gobj)->translate.vec.f.y = pos_yz[place][0];
	DObjGetStruct(fighter_gobj)->translate.vec.f.z = pos_yz[place][1];
}

// 0x801333E4
void mnVSResultsFaceWinner(GObj *fighter_gobj, s32 player, s32 place)
{
	s32 win_player = mnVSResultsGetWinPlayer();

	if (place != 0)
	{
		DObj *fighter_dobj = DObjGetStruct(fighter_gobj);
		DObj *winner_dobj = DObjGetStruct(sMNVSResultsFighterGObjs[win_player]);
		f32 x1 = fighter_dobj->translate.vec.f.x;
		f32 z1 = fighter_dobj->translate.vec.f.z;
		f32 x2 = winner_dobj->translate.vec.f.x;
		f32 z2 = winner_dobj->translate.vec.f.z;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = syUtilsArcTan2(x2 - x1, z2 - z1);
	}
}

// 0x8013345C
s32 mnVSResultsGetStatusWin(s32 fkind)
{
	s32 status_ids[/* */] =
	{
		nFTDemoStatusWin1,
		nFTDemoStatusWin2,
		nFTDemoStatusWin3
	};

	if (fkind == nFTKindKirby)
	{
		return status_ids[syUtilsGetRandomIntRange(2)];
	}
	else return status_ids[syUtilsGetRandomIntRange(3)];
}

// 0x801334CC - bruh
s32 mnVSResultsGetStatusLose(s32 fkind)
{
	return nFTDemoStatusLose;
}

// 0x801334DC
void mnVSResultsSetFighterStatus(GObj *fighter_gobj, s32 player)
{
	if (sMNVSResultsGameRule == 4)
	{
		scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetStatusLose(mnVSResultsGetFighterKind(player)));
	}
	else switch (mnVSResultsGetPresentCount())
	{
	case 2:
		switch (sMNVSResultsPlaces[player])
		{
		case 0:
			scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetStatusWin(mnVSResultsGetFighterKind(player)));
			break;
			
		case 1:
			scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetStatusLose(mnVSResultsGetFighterKind(player)));
			break;
		}
		break;

	case 3:
		if (sMNVSResultsPlaces[player] == 0)
		{
			scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetStatusWin(mnVSResultsGetFighterKind(player)));
		}
		else scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetStatusLose(mnVSResultsGetFighterKind(player)));
		break;
		
	case 4:
	default:
		if (sMNVSResultsPlaces[player] == 0)
		{
			scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetStatusWin(mnVSResultsGetFighterKind(player)));
		}
		else scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetStatusLose(mnVSResultsGetFighterKind(player)));
		break;
	}
}

// 0x80133684
s32 mnVSResultsGetPlayerCountByPlace(s32 place)
{
	s32 num = 0;
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if ((sMNVSResultsIsPresent[i] != FALSE) && (place == sMNVSResultsPlaces[i]))
		{
			num++;
		}
	}
	return num;
}

// 0x80133718
s32 mnVSResultsGetPlayerCountAhead(s32 player)
{
	s32 num = 0;
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(sMNVSResultsIsPresent) + ARRAY_COUNT(sMNVSResultsPlaces)) / 2; i++)
	{
		if ((player != i) && (sMNVSResultsIsPresent[i]) && (sMNVSResultsPlaces[i] < sMNVSResultsPlaces[player]))
		{
			num++;
		}
	}
	return num;
}

// 0x80133810
s32 mnVSResultsGetSpot(s32 player)
{
	sb32 sp40[/* */] = { 0, 0, 1, 1 };
	sb32 sp2C[/* */] = { 0, 0, 1, 1, 1 };

	return sMNVSResultsPlaces[player] + sp40[sMNVSResultsPlaces[player] - mnVSResultsGetPlayerCountAhead(player)] + sp2C[mnVSResultsGetPlayerCountByPlace(sMNVSResultsPlaces[player])];
}

// 0x801338EC
void mnVSResultsSetFighterScale(GObj *fighter_gobj, s32 player, s32 fkind, s32 place)
{
	DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysDemoFighterScales[fkind];
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysDemoFighterScales[fkind];
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysDemoFighterScales[fkind];
}

// 0x8013392C
void mnVSResultsMakeFighter(s32 player)
{
	s32 unused[3];
	FTDesc desc = dFTManagerDefaultFighterDesc;

	desc.fkind = mnVSResultsGetFighterKind(player);
	desc.costume = gSCManagerTransferBattleState.players[player].costume;
	desc.shade = gSCManagerTransferBattleState.players[player].shade;
	desc.figatree_heap = sMNVSResultsFigatreeHeaps[player];
	sMNVSResultsFighterGObjs[player] = ftManagerMakeFighter(&desc);
}

// 0x801339F4
void mnVSResultsSetPlayerTagPosition(GObj *gobj, s32 player)
{
	s32 spot, dist;

	Vec2f pos_xy_2p[/* */][4] =
	{
		{ { 115.0F, 50.0F }, { 112.0F, 75.0F }, { 115.0F, 96.0F }, { 115.0F, 103.0F } },
		{ { 173.0F, 50.0F }, { 177.0F, 75.0F }, { 183.0F, 96.0F }, { 186.0F, 103.0F } }
	};
	Vec2f pos_xy_3p[/* */][4] =
	{
		{ {  38.0F, 50.0F }, { 50.0F,  75.0F }, {  38.0F, 96.0F }, { 38.0F,  103.0F } },
		{ { 150.0F, 50.0F }, { 150.0F, 75.0F }, { 150.0F, 96.0F }, { 150.0F, 103.0F } },
		{ { 245.0F, 50.0F }, { 237.0F, 75.0F }, { 254.0F, 96.0F }, { 258.0F, 103.0F } }
	};
	Vec2f pos_xy_4p[/* */][4] =
	{
		{ {  38.0F, 50.0F }, {  50.0F, 75.0F }, {  35.0F, 96.0F }, {  35.0F, 103.0F } },
		{ { 115.0F, 50.0F }, { 112.0F, 75.0F }, { 115.0F, 96.0F }, { 115.0F, 103.0F } },
		{ { 173.0F, 50.0F }, { 177.0F, 75.0F }, { 188.0F, 96.0F }, { 186.0F, 103.0F } },
		{ { 245.0F, 50.0F }, { 237.0F, 75.0F }, { 258.0F, 96.0F }, { 258.0F, 103.0F } }
	};
	f32 pos_y_kinds[/* */][4] =
	{
		{ 0.0F, 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F, 0.0F },
		{ 0.0F, 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F, 0.0F },
		{ 0.0F, 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F, 0.0F }, { 0.0F, 0.0F, 0.0F, 0.0F }
	};

	spot = mnVSResultsGetSpot(player);
	dist = mnVSResultsGetPlayerDistanceID(player);

	switch (mnVSResultsGetPresentCount())
	{
	case 2:
		SObjGetStruct(gobj)->pos.x = pos_xy_2p[dist][spot].x;
		SObjGetStruct(gobj)->pos.y = pos_xy_2p[dist][spot].y + pos_y_kinds[mnVSResultsGetFighterKind(player)][dist];
		break;
		
	case 3:
		SObjGetStruct(gobj)->pos.x = pos_xy_3p[dist][spot].x;
		SObjGetStruct(gobj)->pos.y = pos_xy_3p[dist][spot].y + pos_y_kinds[mnVSResultsGetFighterKind(player)][dist];
		break;
		
	case 4:
	default:
		SObjGetStruct(gobj)->pos.x = pos_xy_4p[dist][spot].x;
		SObjGetStruct(gobj)->pos.y = pos_xy_4p[dist][spot].y + pos_y_kinds[mnVSResultsGetFighterKind(player)][dist];
		break;
	}
}

// 0x80133C58
void mnVSResultsMakePlayerTag(s32 player, s32 color_index)
{
	GObj *gobj;
	SObj *sobj;
	SYColorRGBPair colors[/* */] =
	{
		{ { 0x00, 0x00, 0x00 }, { 0xED, 0x36, 0x36 } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0x4E, 0xE9 } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xDF, 0x1A } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } }
	};
	intptr_t offsets[4] =
	{
		0x258, 0x4F8, 0x798, 0xA38
	};

	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);

	if (gSCManagerTransferBattleState.players[player].pkind == nFTPlayerKindMan)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSResultsFiles[1], offsets[player]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		sobj->envcolor.r = dIFCommonPlayerTagEnvColorsR[color_index];
		sobj->envcolor.g = dIFCommonPlayerTagEnvColorsG[color_index];
		sobj->envcolor.b = dIFCommonPlayerTagEnvColorsB[color_index];
		sobj->sprite.red = dIFCommonPlayerTagPrimColorsR[color_index];
		sobj->sprite.green = dIFCommonPlayerTagPrimColorsG[color_index];
		sobj->sprite.blue = dIFCommonPlayerTagPrimColorsB[color_index];
	}
	else
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSResultsFiles[1], &FILE_026_INDICATOR_CP_IMAGE_OFFSET));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		sobj->envcolor.r = dIFCommonPlayerTagEnvColorsR[color_index];
		sobj->envcolor.g = dIFCommonPlayerTagEnvColorsG[color_index];
		sobj->envcolor.b = dIFCommonPlayerTagEnvColorsB[color_index];
		sobj->sprite.red = dIFCommonPlayerTagPrimColorsR[color_index];
		sobj->sprite.green = dIFCommonPlayerTagPrimColorsG[color_index];
		sobj->sprite.blue = dIFCommonPlayerTagPrimColorsB[color_index];
	}

	mnVSResultsSetPlayerTagPosition(gobj, player);
}

// 0x80133E7C
void mnVSResultsMakePlayerTagCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			30,
			COBJ_MASK_DLLINK(27),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133F1C
s32 mnVSResultsGetChrIndex(char c)
{
	switch (c)
	{
		case '!':
			return 0x1A;
		case '.':
			return 0x1B;
		case ' ':
			return 0x1C;
		default:
			return c - 'A';
	}
}

// 0x80133F6C
void mnVSResultsMakeString(const char *str, f32 x, f32 y, s32 color_index, f32 scale)
{
	GObj *gobj;
	SObj *sobj;
	s32 i;
	f32 current_x;
	s32 char_index;

	f32 widths[/* */] =
	{
		35.0F, 24.0F, 24.0F, 28.0F, 22.0F, 20.0F, 31.0F, 27.0F, 9.0F, 20.0F, 27.0F, 20.0F, 37.0F, 29.0F,
		34.0F, 24.0F, 37.0F, 27.0F, 24.0F, 24.0F, 26.0F, 28.0F, 39.0F, 31.0F, 29.0F, 30.0F, 10.0F, 8.0F
	};
	intptr_t offsets[/* */] =
	{
		&lIFCommonAnnounceCommonLetterA, &lIFCommonAnnounceCommonLetterB,
		&lIFCommonAnnounceCommonLetterC, &lIFCommonAnnounceCommonLetterD,
		&lIFCommonAnnounceCommonLetterE, &lIFCommonAnnounceCommonLetterF,
		&lIFCommonAnnounceCommonLetterG, &lIFCommonAnnounceCommonLetterH,
		&lIFCommonAnnounceCommonLetterI, &lIFCommonAnnounceCommonLetterJ,
		&lIFCommonAnnounceCommonLetterK, &lIFCommonAnnounceCommonLetterL,
		&lIFCommonAnnounceCommonLetterM, &lIFCommonAnnounceCommonLetterN,
		&lIFCommonAnnounceCommonLetterO, &lIFCommonAnnounceCommonLetterP,
		&lIFCommonAnnounceCommonLetterQ, &lIFCommonAnnounceCommonLetterR,
		&lIFCommonAnnounceCommonLetterS, &lIFCommonAnnounceCommonLetterT,
		&lIFCommonAnnounceCommonLetterU, &lIFCommonAnnounceCommonLetterV,
		&lIFCommonAnnounceCommonLetterW, &lIFCommonAnnounceCommonLetterX,
		&lIFCommonAnnounceCommonLetterY, &lIFCommonAnnounceCommonLetterZ,

		&lIFCommonAnnounceCommonSymbolExclaim,
		&lIFCommonAnnounceCommonSymbolPeriod
	};
	SYColorRGBPair colors[/* */] =
	{
		{ { 0xFF, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } },
		{ { 0x12, 0x00, 0xD9 }, { 0xFF, 0xFF, 0xFF } },
		{ { 0x03, 0x73, 0x00 }, { 0xFF, 0xFF, 0xFF } },
		{ { 0x60, 0x03, 0xD4 }, { 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } }
	};

	current_x = x;
	gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 29, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
			current_x += str[i] - '0';
		}
		else
		{
			char_index = mnVSResultsGetChrIndex(str[i]);

			if (char_index == 0x1C) // space
			{
				current_x += 10.0F * scale;
			}
			else
			{

				sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSResultsFiles[6], offsets[char_index]));
				sobj->sprite.scalex = scale;
				sobj->pos.x = current_x;

				if (char_index == 0x1B) // .
				{
					sobj->pos.y = y + 26.0F;
				}
				else sobj->pos.y = y;

				sobj->sprite.attr &= ~SP_FASTCOPY;
				sobj->sprite.attr |= SP_TRANSPARENT;
				sobj->envcolor.r = colors[color_index].prim.r;
				sobj->envcolor.g = colors[color_index].prim.g;
				sobj->envcolor.b = colors[color_index].prim.b;
				sobj->sprite.red = colors[color_index].env.r;
				sobj->sprite.green = colors[color_index].env.g;
				sobj->sprite.blue = colors[color_index].env.b;

				current_x += widths[char_index] * scale;
			}
		}
	}
}

// 0x8013423C
void mnVSResultsMakeWinnerText(s32 winner)
{
	char win[/* */] = "W1I1N1!";
	char wins[/* */] = "W1I1N1S1!";

	f32 x_fkinds[/* */] =
	{
		175.0F, 160.0F, 150.0F, 176.0F, 163.0F, 160.0F,
		170.0F, 178.0F, 165.0F, 172.0F, 173.0F, 160.0F
	};
	f32 x_teams[/* */] =
	{
		160.0F,
		170.0F,
		180.0F
	};

	if (sMNVSResultsIsTeamBattle == TRUE)
	{
		mnVSResultsMakeString(wins, x_teams[winner], 180.0F, 3, 1.0F);
	}
	if (sMNVSResultsIsTeamBattle == FALSE)
	{
		mnVSResultsMakeString(wins, x_fkinds[winner], 180.0F, 3, 1.0F);
	}
}

// 0x80134364
s32 mnVSResultGetWinFighterKind(void)
{
	return mnVSResultsGetFighterKind(mnVSResultsGetWinPlayer());
}

// 0x8013438C
void mnVSResultMakeFighterName(void)
{
	s32 fkind;

	char *names[/* */] =
	{
		"MARIO",
		"FOX",
		"D3K",
		"SAMUS",
		"LU1I1G1I",
		"L1I1N1K",
		"YOSH3I",
		"C2.2FA1L1C1O1N",
		"K1I1RBY",
		"P4I4KAC3H3U",
		"JIGGLYPUFF",
		"N2E2S2S"
	};
	f32 pos_x[/* */] =
	{
		30.0F, 60.0F, 70.0F, 25.0F, 50.0F, 55.0F,
		30.0F, 27.0F, 40.0F, 30.0F, 27.0F, 50.0F
	};
	f32 scales[/* */] = {

		1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
		1.0F, 0.7F, 1.0F, 0.7F, 0.6F, 1.0F
	};
	
	fkind = mnVSResultGetWinFighterKind();

	mnVSResultsMakeString(names[fkind], pos_x[fkind], 180.0F, 0, scales[fkind]);
	mnVSResultsMakeWinnerText(fkind);
}

// 0x80134480
void mnVSResultMakeTeamName(void)
{
	u32 team;

	char *names[/* */] =
	{
		"RED",
		"BLUE",
		"GREEN",
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL
	};
	f32 pos_x[/* */] =
	{
		70.0F, 60.0F, 30.0F,
		 0.0F,  0.0F,  0.0F,
		 0.0F,  0.0F,  0.0F
	};

	team = mnVSResultsGetWinTeam();

	mnVSResultsMakeString(names[team], pos_x[team], 180.0F, team, 1.0F);
	mnVSResultsMakeWinnerText(team);
}

// 0x80134540
void mnVSResultMakeNoContestText(void)
{
	mnVSResultsMakeString("NO CONTEST", 30.0F, 180.0F, 4, 1.0F);
}

// 0x8013457C
void mnVSResultsMakeResultsText(void)
{
	if (sMNVSResultsGameRule == 4)
	{
		mnVSResultMakeNoContestText();
	}
	else
	{
		if (sMNVSResultsIsTeamBattle == FALSE)
		{
			mnVSResultMakeFighterName();
		}
		if (sMNVSResultsIsTeamBattle == TRUE)
		{
			mnVSResultMakeTeamName();
		}
	}
}

// 0x801345E8
void mnVSResultsMakeResultsTextCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			20,
			COBJ_MASK_DLLINK(29),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80134688
s32 mnVSResultsGetHundredsDigit(s32 number)
{
	if (number < 0)
	{
		return -(number / 100);
	}
	else return number / 100;
}

// 0x801346C0
s32 mnVSResultsGetTensDigit(s32 number)
{
	if (number < 0)
	{
		return -((number % 100) / 10);
	}
	else return (number % 100) / 10;
}

// 0x80134718
s32 mnVSResultsGetOnesDigit(s32 number)
{
	if (number < 0)
	{
		return -((number % 100) % 10);
	}
	else return (number % 100) % 10;
}

// 0x80134770
void mnVSResultsSetNumberColor(SObj *sobj, s32 color_index)
{
	SYColorRGBPair colors[/* */] = 
	{
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0x82, 0x82 } },
		{ { 0x00, 0x00, 0x00 }, { 0x91, 0xC0, 0xFF } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xDF, 0x1A } },
		{ { 0x00, 0x00, 0x00 }, { 0x9F, 0xFF, 0x9F } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } }
	};

	sobj->envcolor.r = colors[color_index].prim.r;
	sobj->envcolor.g = colors[color_index].prim.g;
	sobj->envcolor.b = colors[color_index].prim.b;
	sobj->sprite.red = colors[color_index].env.r;
	sobj->sprite.green = colors[color_index].env.g;
	sobj->sprite.blue = colors[color_index].env.b;
}

// 0x80134808
SObj* mnVSResultsCreateNumber(GObj *number_gobj, s32 number, s32 color_id)
{
	SObj* sobj;
	intptr_t offsets[10] =
	{
		0x068, 0x118, 0x1C8, 0x278, 0x328, 0x3D8, 0x488, 0x538, 0x5E8, 0x698
	};
	SYColorRGBPair unused_colors[5] = {

		{ { 0x00, 0x00, 0x00 }, { 0xED, 0x36, 0x36 } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0x4E, 0xE9 } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xDF, 0x1A } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } }
	};

	sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(Sprite*, sMNVSResultsFiles[5], offsets[number]));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	mnVSResultsSetNumberColor(sobj, color_id);

	return sobj;
}

// 0x801348F8
SObj* mnVSResultsCreatePlaceNumber(GObj* place_gobj, s32 player, s32 place, s32 color_id)
{
	SObj *place_sobj;
	intptr_t offsets[/* */] =
	{
		0x0148, 0x02D8, 0x0500, 0x0698, 0x08C0, 0x0A58, 0x0C80, 0x0E18, 0x1040, 0x1270
	};
	SYColorRGBPair unused_colors[5] = {

		{ { 0x00, 0x00, 0x00 }, { 0xED, 0x36, 0x36 } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0x4E, 0xE9 } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xDF, 0x1A } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } }
	};

	if (place == 1)
	{
		if (sMNVSResultsIsTeamBattle == TRUE)
		{
			if ((mnVSResultsGetWinPlayer() == player) || (sMNVSResultsIsSharedWinner[player]))
			{
				place_sobj = lbCommonMakeSObjForGObj(place_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[0], &FILE_022_FIRST_PLACE_ICON_IMAGE_OFFSET));
				place_sobj->user_data.s = 1;
			}
			else
			{
				place_sobj = lbCommonMakeSObjForGObj(place_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[3], &FILE_0A4_1_IMAGE_OFFSET));
				place_sobj->user_data.s = 0;
				mnVSResultsSetNumberColor(place_sobj, color_id);
			}
		}
		else
		{
			place_sobj = lbCommonMakeSObjForGObj(place_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[0], &FILE_022_FIRST_PLACE_ICON_IMAGE_OFFSET));
			place_sobj->user_data.s = 1;
		}

		place_sobj->sprite.attr &= ~SP_FASTCOPY;
		place_sobj->sprite.attr |= SP_TRANSPARENT;
	}
	else
	{
		place_sobj = lbCommonMakeSObjForGObj(place_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[3], offsets[place]));
		place_sobj->sprite.attr &= ~SP_FASTCOPY;
		place_sobj->sprite.attr |= SP_TRANSPARENT;
		mnVSResultsSetNumberColor(place_sobj, color_id);
	}
	return place_sobj;
}

// 0x80134AC4
void mnVSResultsDrawNumber(GObj* number_gobj, f32 x, f32 y, s32 number, s32 color_id)
{
	SObj* sobj;
	s32 hundreds_digit;
	s32 tens_digit;

	if (number < 0)
	{
		sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[5], &FILE_024_DASH_IMAGE_OFFSET));

		if (mnVSResultsGetHundredsDigit(number) != 0)
			sobj->pos.x = x;
		else
		{
			if (mnVSResultsGetTensDigit(number) != 0)
				sobj->pos.x = x + 8.0F;
			else
				sobj->pos.x = x + 16.0F;
		}
		sobj->pos.y = y + 3.0F;
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		mnVSResultsSetNumberColor(sobj, color_id);
	}

	hundreds_digit = mnVSResultsGetHundredsDigit(number);

	if (hundreds_digit != 0)
	{
		sobj = mnVSResultsCreateNumber(number_gobj, hundreds_digit, color_id);
		sobj->pos.x = x + 8.0F;
		sobj->pos.y = y;
	}

	tens_digit = mnVSResultsGetTensDigit(number);

	if ((tens_digit != 0) || (hundreds_digit != 0))
	{
		sobj = mnVSResultsCreateNumber(number_gobj, tens_digit, color_id);
		sobj->pos.x = x + 16.0F;
		sobj->pos.y = y;
	}

	sobj = mnVSResultsCreateNumber(number_gobj, mnVSResultsGetOnesDigit(number), color_id);
	sobj->pos.x = x + 24.0F;
	sobj->pos.y = y;
}

// 0x80134C5C
void mnVSResultsRenderOverlay(GObj* overlay_gobj)
{
	if (sMNVSResultsOverlayAlpha < 0x80)
	{
		sMNVSResultsOverlayAlpha += 9;

		if (sMNVSResultsOverlayAlpha > 0x80)
			sMNVSResultsOverlayAlpha = 0x80;
	}

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 0, 0, sMNVSResultsOverlayAlpha);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

	lbCommonClearExternSpriteParams();
}

// 0x80134DA0
void mnVSResultsCreateOverlay()
{
	sMNVSResultsOverlayAlpha = 0;
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x15, 0x80000000), mnVSResultsRenderOverlay, 0x1E, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80134DF4
void mnVSResultsCreateOverlayViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000, lbCommonDrawSprite, 0x11, 0x40000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80134E94
void mnVSResultsWallpaperProcDisplayOverlay(GObj* bg_overlay_gobj)
{
	if (sMNVSResultsBackgroundOverlayAlpha > 0)
	{
		sMNVSResultsBackgroundOverlayAlpha -= 5;

		if (sMNVSResultsBackgroundOverlayAlpha < 0)
			gcEjectGObj(bg_overlay_gobj);
	}

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 0, 0, sMNVSResultsBackgroundOverlayAlpha);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80134FD0
void mnVSResultsMakeWallpaperOverlay()
{
	sMNVSResultsBackgroundOverlayAlpha = 0xFF;
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x19, 0x80000000), mnVSResultsWallpaperProcDisplayOverlay, 0x23, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80135028
void mnVSResultsMakeWallpaperOverlayViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000, lbCommonDrawSprite, 0x37, 0x800000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801350C8
void mnVSResultsWallpaperProcDisplayOverlay2(GObj* bg_overlay_gobj)
{
	if (sMNVSResultsBackgroundOverlay2Alpha > 0)
	{
		sMNVSResultsBackgroundOverlay2Alpha -= 5;

		if (sMNVSResultsBackgroundOverlay2Alpha < 0)
			gcEjectGObj(bg_overlay_gobj);
	}

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 0, 0, sMNVSResultsBackgroundOverlay2Alpha);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80135204
void mnVSResultsMakeWallpaperOverlay2()
{
	sMNVSResultsBackgroundOverlay2Alpha = 0xFF;
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x18, 0x80000000), mnVSResultsWallpaperProcDisplayOverlay2, 0x22, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x8013525C
void mnVSResultsMakeWallpaperOverlay2Viewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000, lbCommonDrawSprite, 0x46, 0x400000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801352FC
f32 mnVSResultsGetColumnX(s32 player)
{
	f32 column_x_2p[2] = {

		135.0F, 215.0
	};
	f32 column_x_3p[3] = {

		125.0F, 175.0F, 225.0
	};
	f32 column_x_4p[4] = {

		115.0F, 155.0F, 195.0F, 235.0
	};

	switch (mnVSResultsGetPresentCount())
	{
		case 2:
			return column_x_2p[mnVSResultsGetPresentLowerCount(player)];
		case 3:
			return column_x_3p[mnVSResultsGetPresentLowerCount(player)];
		case 4:
			/* fallthrough */
		default:
			return column_x_4p[mnVSResultsGetPresentLowerCount(player)];
	}
}

// 0x801353F4
s32 mnVSResultsGetNumberColorIndex(s32 player)
{
	s32 color_ids[3] = {

		0, 1, 3
	};

	if (sMNVSResultsIsTeamBattle != TRUE)
		return 4;

	return color_ids[gSCManagerTransferBattleState.players[player].team];
}

// 0x80135468
void mnVSResultsSetColumnPortIndicatorColors(SObj* column_port_sobj)
{
	column_port_sobj->sprite.attr &= ~SP_FASTCOPY;
	column_port_sobj->sprite.attr |= SP_TRANSPARENT;
	column_port_sobj->envcolor.r = 0;
	column_port_sobj->envcolor.g = 0;
	column_port_sobj->envcolor.b = 0;
	column_port_sobj->sprite.red = 0xFF;
	column_port_sobj->sprite.green = 0xFF;
	column_port_sobj->sprite.blue = 0xFF;
}

// 0x8013549C
void mnVSResultsCreateColumnHeaders()
{
	SObj* column_port_sobj;
	SObj* column_stock_icon_sobj;
	GObj* column_header_gobj;
	intptr_t offsets[4] = {

		0x49E8, 0x4B08, 0x4C28, 0x4D48
	};
	s32 i;
	FTStruct *fp;

	column_header_gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(column_header_gobj, lbCommonDrawSObjAttr, 31, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if (sMNVSResultsIsPresent[i] != FALSE)
		{
			column_port_sobj = lbCommonMakeSObjForGObj(column_header_gobj, lbRelocGetFileData(Sprite*, sMNVSResultsFiles[0], offsets[i]));
			column_port_sobj->pos.x = mnVSResultsGetColumnX(i) + 17.0F;
			column_port_sobj->pos.y = 49.0F;
			mnVSResultsSetColumnPortIndicatorColors(column_port_sobj);

			fp = ftGetStruct(sMNVSResultsFighterGObjs[i]);

			column_stock_icon_sobj = lbCommonMakeSObjForGObj(column_header_gobj, fp->attr->sprites->stock_sprite);
			column_stock_icon_sobj->sprite.LUT = fp->attr->sprites->stock_luts[fp->costume];
			column_stock_icon_sobj->sprite.attr &= ~SP_FASTCOPY;
			column_stock_icon_sobj->sprite.attr |= SP_TRANSPARENT;
			column_stock_icon_sobj->pos.x = column_port_sobj->pos.x - 10.0F;
			column_stock_icon_sobj->pos.y = column_port_sobj->pos.y;
		}
	}
}

// 0x80135670
s32 mnVSResultsGetKOs(s32 player)
{
	if (sMNVSResultsKOs[player] > 999)
	{
		return 999;
	}
	return sMNVSResultsKOs[player];
}

// 0x8013569C
void mnVSResultsDrawKOs(s32 y)
{
	GObj *gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		22,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		31,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNVSResultsFiles[0],
			&FILE_022_KOS_TEXTURE_IMAGE_OFFSET
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	SObjGetStruct(gobj)->pos.x = 26.0F;
	SObjGetStruct(gobj)->pos.y = y;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(gobj)->sprite.red = 0x00;
	SObjGetStruct(gobj)->sprite.green = 0x00;
	SObjGetStruct(gobj)->sprite.blue = 0x00;
	SObjGetStruct(gobj)->sprite.red = 0xFF;
	SObjGetStruct(gobj)->sprite.green = 0xFF;
	SObjGetStruct(gobj)->sprite.blue = 0xFF;

	if (sMNVSResultsIsPresent[0] != FALSE)
	{
		mnVSResultsDrawNumber(gobj, mnVSResultsGetColumnX(0), y, mnVSResultsGetKOs(0), mnVSResultsGetNumberColorIndex(0));
	}
	if (sMNVSResultsIsPresent[1] != FALSE)
	{
		mnVSResultsDrawNumber(gobj, mnVSResultsGetColumnX(1), y, mnVSResultsGetKOs(1), mnVSResultsGetNumberColorIndex(1));
	}
	if (sMNVSResultsIsPresent[2] != FALSE)
	{
		mnVSResultsDrawNumber(gobj, mnVSResultsGetColumnX(2), y, mnVSResultsGetKOs(2), mnVSResultsGetNumberColorIndex(2));
	}
	if (sMNVSResultsIsPresent[3] != FALSE)
	{
		mnVSResultsDrawNumber(gobj, mnVSResultsGetColumnX(3), y, mnVSResultsGetKOs(3), mnVSResultsGetNumberColorIndex(3));
	}
}

// 0x801358C4
s32 mnVSResultsGetTKO(s32 player)
{
	if (sMNVSResultsTKO[player] > 999)
	{
		return 999;
	}
	return sMNVSResultsTKO[player];
}

// 0x801358F0
void mnVSResultsDrawTKO(s32 y)
{
	GObj *gobj =
	lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		22,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		31,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNVSResultsFiles[0],
			&FILE_022_TKO_TEXTURE_IMAGE_OFFSET
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	SObjGetStruct(gobj)->pos.x = 26.0F;
	SObjGetStruct(gobj)->pos.y = y;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(gobj)->sprite.red = 0x00;
	SObjGetStruct(gobj)->sprite.green = 0x00;
	SObjGetStruct(gobj)->sprite.blue = 0x00;
	SObjGetStruct(gobj)->sprite.red = 0xFF;
	SObjGetStruct(gobj)->sprite.green = 0xFF;
	SObjGetStruct(gobj)->sprite.blue = 0xFF;

	if (sMNVSResultsGameRule != 4)
	{
		SObj *sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNVSResultsFiles[5], &FILE_024_DASH_IMAGE_OFFSET));
		sobj->pos.x = 90.0F;
		sobj->pos.y = y + 3;
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
	}
	if (sMNVSResultsIsPresent[0] != FALSE)
	{
		mnVSResultsDrawNumber(gobj, mnVSResultsGetColumnX(0), y, mnVSResultsGetTKO(0), mnVSResultsGetNumberColorIndex(0));
	}
	if (sMNVSResultsIsPresent[1] != FALSE)
	{
		mnVSResultsDrawNumber(gobj, mnVSResultsGetColumnX(1), y, mnVSResultsGetTKO(1), mnVSResultsGetNumberColorIndex(1));
	}
	if (sMNVSResultsIsPresent[2] != FALSE)
	{
		mnVSResultsDrawNumber(gobj, mnVSResultsGetColumnX(2), y, mnVSResultsGetTKO(2), mnVSResultsGetNumberColorIndex(2));
	}
	if (sMNVSResultsIsPresent[3] != FALSE)
	{
		mnVSResultsDrawNumber(gobj, mnVSResultsGetColumnX(3), y, mnVSResultsGetTKO(3), mnVSResultsGetNumberColorIndex(3));
	}
}

// 0x80135B78
void mnVSResultsBarProcDisplay(GObj *gobj)
{
	f32 y = gobj->user_data.s;

	sMNVSResultsHorizontalLineWidth += 10;

	if (sMNVSResultsHorizontalLineWidth > 190)
	{
		sMNVSResultsHorizontalLineWidth = 190;
	}
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_FILL);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_NOOP, G_RM_NOOP2);
	gDPSetFillColor(gSYTaskmanDLHeads[0]++, syVideoGetFillColor(GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF)));
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 87, y, 87 + sMNVSResultsHorizontalLineWidth, y);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

	lbCommonClearExternSpriteParams();
}

// 0x80135D58
void mnVSResultsMakeBar(s32 y)
{
	GObj *gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mnVSResultsBarProcDisplay, 31, GOBJ_PRIORITY_DEFAULT, ~0);
	gobj->user_data.s = y;
}

// 0x80135DB8
s32 mnVSResultsGetPoints(s32 player)
{
	return sMNVSResultsPoints[player];
}

// 0x80135DCC
void mnVSResultsDrawPointsRow(void)
{
	GObj *gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		22,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		31,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNVSResultsFiles[0],
			&FILE_022_POINTS_TEXTURE_IMAGE_OFFSET
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	SObjGetStruct(gobj)->pos.x = 26.0F;
	SObjGetStruct(gobj)->pos.y = 104.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(gobj)->sprite.red = 0x00;
	SObjGetStruct(gobj)->sprite.green = 0x00;
	SObjGetStruct(gobj)->sprite.blue = 0x00;
	SObjGetStruct(gobj)->sprite.red = 0xFF;
	SObjGetStruct(gobj)->sprite.green = 0xFF;
	SObjGetStruct(gobj)->sprite.blue = 0xFF;

	if (sMNVSResultsIsPresent[0] != FALSE)
	{
		mnVSResultsDrawNumber(gobj, mnVSResultsGetColumnX(0), 104.0F, mnVSResultsGetPoints(0), mnVSResultsGetNumberColorIndex(0));
	}
	if (sMNVSResultsIsPresent[1] != FALSE)
	{
		mnVSResultsDrawNumber(gobj, mnVSResultsGetColumnX(1), 104.0F, mnVSResultsGetPoints(1), mnVSResultsGetNumberColorIndex(1));
	}
	if (sMNVSResultsIsPresent[2] != FALSE)
	{
		mnVSResultsDrawNumber(gobj, mnVSResultsGetColumnX(2), 104.0F, mnVSResultsGetPoints(2), mnVSResultsGetNumberColorIndex(2));
	}
	if (sMNVSResultsIsPresent[3] != FALSE)
	{
		mnVSResultsDrawNumber(gobj, mnVSResultsGetColumnX(3), 104.0F, mnVSResultsGetPoints(3), mnVSResultsGetNumberColorIndex(3));
	}
}

// 0x80135FE8 - Unused?
void func_ovl31_80135FE8(void)
{
	return;
}

// 0x80135FF0
void mnVSResultsSetPlacePosition(SObj *sobj, s32 player, s32 place, f32 y)
{
	if ((place == 1) && (sobj->user_data.s != 0))
	{
		sobj->pos.x = mnVSResultsGetColumnX(player) + 2.0F;
		sobj->pos.y = y;
	}
	else
	{
		sobj->pos.x = mnVSResultsGetColumnX(player) + 15.0F;
		sobj->pos.y = y;
	}
}

// 0x8013607C
s32 mnVSResultsGetDisplayPlace(s32 player)
{
	if
	(
		(mnVSResultsGetPresentCount() == GMCOMMON_PLAYERS_MAX) &&
		(sMNVSResultsIsTeamBattle == FALSE) &&
		(mnVSResultsGetPlayerCountByPlace(1) == 2) &&
		(sMNVSResultsPlaces[player] == 2)
	)
	{
		return GMCOMMON_PLAYERS_MAX;
	}
	else return sMNVSResultsPlaces[player] + 1;
}

// 0x80136100
void mnVSResultsDrawPlaceRow(s32 y)
{
	GObj *gobj;
	s32 i;

	gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		22,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		31,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNVSResultsFiles[0],
			&FILE_022_PLACE_TEXTURE_IMAGE_OFFSET
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	SObjGetStruct(gobj)->pos.x = 10.0F;
	SObjGetStruct(gobj)->pos.y = y;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(gobj)->sprite.red = 0x00;
	SObjGetStruct(gobj)->sprite.green = 0x00;
	SObjGetStruct(gobj)->sprite.blue = 0x00;
	SObjGetStruct(gobj)->sprite.red = 0xFF;
	SObjGetStruct(gobj)->sprite.green = 0xFF;
	SObjGetStruct(gobj)->sprite.blue = 0xFF;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if (sMNVSResultsIsPresent[i] != FALSE)
		{
			mnVSResultsSetPlacePosition
			(
				mnVSResultsCreatePlaceNumber
				(
					gobj,
					i,
					mnVSResultsGetDisplayPlace(i),
					mnVSResultsGetNumberColorIndex(i)
				),
				i,
				mnVSResultsGetDisplayPlace(i),
				y
			);
		}
	}
}

// 0x80136290
void mnVSResultsDrawResults0(GObj *gobj)
{
	if (sMNVSResultsTotalTimeTics == 180)
	{
		mnVSResultsCreateOverlay();
	}
	if (sMNVSResultsTotalTimeTics == 210)
	{
		mnVSResultsCreateColumnHeaders();
		mnVSResultsDrawKOs(66);
	}
	if (sMNVSResultsTotalTimeTics == 230)
	{
		mnVSResultsDrawTKO(81);
	}
	if (sMNVSResultsTotalTimeTics == 250)
	{
		mnVSResultsMakeBar(98);
	}
	if (sMNVSResultsTotalTimeTics == 270)
	{
		mnVSResultsDrawPointsRow();
	}
	if (sMNVSResultsTotalTimeTics == 290)
	{
		mnVSResultsDrawPlaceRow(124);
	}
}

// 0x80136358
void mnVSResultsDrawResults1(GObj *gobj)
{
	if (sMNVSResultsTotalTimeTics == 180)
	{
		mnVSResultsCreateOverlay();
	}
	if (sMNVSResultsTotalTimeTics == 210)
	{
		mnVSResultsDrawPlaceRow(66);
	}
	if (sMNVSResultsTotalTimeTics == 230)
	{
		mnVSResultsMakeBar(110);
	}
	if (sMNVSResultsTotalTimeTics == 250)
	{
		mnVSResultsCreateColumnHeaders();
		mnVSResultsDrawKOs(124);
	}
}

// 0x801363E8
void mnVSResultsDrawResults2(GObj *gobj)
{
	if (sMNVSResultsTotalTimeTics == 180)
	{
		mnVSResultsCreateOverlay();
	}
	if (sMNVSResultsTotalTimeTics == 210)
	{
		mnVSResultsCreateColumnHeaders();
		mnVSResultsDrawKOs(66);
	}
	if (sMNVSResultsTotalTimeTics == 230)
	{
		mnVSResultsDrawTKO(81);
	}
	if (sMNVSResultsTotalTimeTics == 250)
	{
		mnVSResultsMakeBar(98);
	}
	if (sMNVSResultsTotalTimeTics == 270)
	{
		mnVSResultsDrawPointsRow();
	}
	if (sMNVSResultsTotalTimeTics == 290)
	{
		mnVSResultsDrawPlaceRow(124);
	}
}

// 0x801364B0
void mnVSResultsDrawResults3(GObj *gobj)
{
	if (sMNVSResultsTotalTimeTics == 180)
	{
		mnVSResultsCreateOverlay();
	}
	if (sMNVSResultsTotalTimeTics == 210)
	{
		mnVSResultsDrawPlaceRow(66);
	}
	if (sMNVSResultsTotalTimeTics == 230)
	{
		mnVSResultsMakeBar(110);
	}
	if (sMNVSResultsTotalTimeTics == 250)
	{
		mnVSResultsCreateColumnHeaders();
		mnVSResultsDrawKOs(124);
	}
}

// 0x80136540
void mnVSResultsDrawResultsNoContest(GObj *gobj)
{
	if (sMNVSResultsTotalTimeTics == 30)
	{
		mnVSResultsCreateOverlay();
	}
	if (sMNVSResultsTotalTimeTics == 60)
	{
		mnVSResultsCreateColumnHeaders();
		mnVSResultsDrawKOs(66);
	}
	if (sMNVSResultsTotalTimeTics == 80)
	{
		mnVSResultsDrawTKO(81);
	}
}

// 0x801365B4
u8 mnVSResultsCheckTeamBattle(void)
{
	return sMNVSResultsIsTeamBattle;
}

// 0x801365C0
void mnVSResultsRenderScreenTitle(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_FILL);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_NOOP, G_RM_NOOP2);
	gDPSetFillColor(gSYTaskmanDLHeads[0]++, syVideoGetFillColor(GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF)));
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 32, 42, 282, 44);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

	lbCommonClearExternSpriteParams();
	lbCommonDrawSObjAttr(gobj);

	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
}

// 0x801396B8
f32 dMNVSResultsUnused0x801396B8[/* */] = { 140.0F, 180.0F, 120.0F, 160.0F, 200.0F, 100.0F, 140.0F, 180.0F, 220.0F };

// 0x801366F0
void mnVSResultsCreateScreenTitle(void)
{
	GObj *gobj;

	intptr_t offsets[/* */] =
	{
		0x280, 0x4E0
	};
	void (*procs[/* */])(GObj*) =
	{
		mnVSResultsDrawResults0,
		mnVSResultsDrawResults1,
		mnVSResultsDrawResults2,
		mnVSResultsDrawResults3,
		mnVSResultsDrawResultsNoContest
	};

	gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		22,
		GOBJ_PRIORITY_DEFAULT,
		mnVSResultsRenderScreenTitle,
		31,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNVSResultsFiles[2],
			offsets[mnVSResultsCheckTeamBattle()]
		),
		nGCProcessKindFunc,
		procs[sMNVSResultsGameRule],
		1
	);
	SObjGetStruct(gobj)->pos.x = 32.0F;
	SObjGetStruct(gobj)->pos.y = 29.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(gobj)->sprite.red = 0xFF;
	SObjGetStruct(gobj)->sprite.green = 0xFF;
	SObjGetStruct(gobj)->sprite.blue = 0xFF;
}

// 0x80136830
void mnVSResultsCreateResultsSYRdpViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xF, GOBJ_PRIORITY_DEFAULT, ~0, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801368D0
void mnVSResultsMakeEmblemViewport()
{
	CObj *cobj = CObjGetStruct((GObj*)gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000, func_80017DBC, 0x3C, 0x200000000, -1, 1, 1, 0, 1, 0));
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cobj->vec.eye.x = 0.0F;
	cobj->vec.eye.y = 0.0F;
	cobj->vec.eye.z = 1800.0F;
	cobj->vec.at.x = 0.0F;
	cobj->vec.at.y = 0.0F;
	cobj->vec.at.z = 0.0F;
	cobj->vec.up.x = 0.0F;
	cobj->vec.up.y = 1.0F;
	cobj->vec.up.z = 0.0F;
}

// 0x801369B4
void mnVSResultsMakeFighterCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			func_80017DBC,
			50,
			COBJ_MASK_DLLINK(18) | COBJ_MASK_DLLINK(15) |
			COBJ_MASK_DLLINK(10) | COBJ_MASK_DLLINK(9),
			~0,
			TRUE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cobj->vec.eye.x = 0.0F;
	cobj->vec.eye.y = 0.0F;
	cobj->vec.eye.z = 1800.0F;
	cobj->vec.at.x = 0.0F;
	cobj->vec.at.y = 0.0F;
	cobj->vec.at.z = 0.0F;
	cobj->vec.up.x = 0.0F;
	cobj->vec.up.y = 1.0F;
	cobj->vec.up.z = 0.0F;
}

// 0x80136A9C
void mnVSResultsSetKOs(void)
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(sMNVSResultsIsPresent) + ARRAY_COUNT(sMNVSResultsKOs) + ARRAY_COUNT(gSCManagerTransferBattleState.players)) / 3; i++)
	{
		if (sMNVSResultsIsPresent[i] != FALSE)
		{
			sMNVSResultsKOs[i] = gSCManagerTransferBattleState.players[i].score;
		}
	}
}

// 0x80136B1C
void mnVSResultsSetTKO(void)
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(sMNVSResultsIsPresent) + ARRAY_COUNT(sMNVSResultsTKO) + ARRAY_COUNT(gSCManagerTransferBattleState.players)) / 3; i++)
	{
		if (sMNVSResultsIsPresent[i] != FALSE)
		{
			sMNVSResultsTKO[i] = gSCManagerTransferBattleState.players[i].falls;
		}
	}
}

// 0x80136B9C
void mnVSResultsSetPoints(void)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsPoints); i++)
	{
		sMNVSResultsPoints[i] = mnVSResultsGetKOs(i) - mnVSResultsGetTKO(i);
	}
}

// 0x80136C08
s32 mnVSResultsGetPointsDirect(s32 player)
{
	return sMNVSResultsKOs[player] - sMNVSResultsTKO[player];
}

// 0x80136C2C
void mnVSResultsOrderResults(MNVSResultsScore *results, s32 players_num)
{
	MNVSResultsScore temp;
	s32 i, j;

	for (i = 0; i < players_num; i++)
	{
		for (j = i + 1; j < players_num; j++)
		{
			if
			(
				(results[i].score < results[j].score) ||
				(
					(gSCManagerSceneData.is_suddendeath != FALSE) &&
					(results[i].score == results[j].score) &&
					(results[j].place < results[i].place)
				)
			)
			{
				temp = results[i];
				results[i] = results[j];
				results[j] = temp;
			}
		}
	}
}

// 0x80136D28
void mnVSResultsSetRoyalPlace(void)
{
	MNVSResultsScore results[GMCOMMON_PLAYERS_MAX];
	s32 place;
	s32 score;
	s32 winner;
	s32 players_num;
	s32 i;

	for (i = 0, players_num = 0; i < (ARRAY_COUNT(sMNVSResultsIsPresent) + ARRAY_COUNT(gSCManagerVSBattleState.players)) / 2; i++)
	{
		if (sMNVSResultsIsPresent[i])
		{
			results[players_num].score = mnVSResultsGetPointsDirect(i);
			results[players_num].place = gSCManagerVSBattleState.players[i].place;
			results[players_num].player = i;
			players_num++;
		}
	}
	mnVSResultsOrderResults(results, players_num);

	for (i = 0, place = 0, score = results[0].score, winner = results[0].place; i < players_num; i++)
	{
		if (score != results[i].score || ((gSCManagerSceneData.is_suddendeath) && (winner != results[i].place)))
		{
			place++;
			score = results[i].score;
			winner = results[i].place;
		}
		sMNVSResultsPlaces[results[i].player] = place;
	}
}

// 0x80136FB8
s32 mnVSResultsGetTeamTotalPoints(s32 team)
{
	s32 i;
	s32 total = 0;

	for (i = 0; i < (ARRAY_COUNT(sMNVSResultsIsPresent) + ARRAY_COUNT(gSCManagerTransferBattleState.players)) / 2; i++)
	{
		if ((sMNVSResultsIsPresent[i] != FALSE) && (team == gSCManagerTransferBattleState.players[i].team))
		{
			total += mnVSResultsGetPointsDirect(i);
		}
	}
	return total;
}

// 0x80137068
void mnVSResultsSetTeamPlace(s32 team, s32 place)
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(sMNVSResultsIsPresent) + ARRAY_COUNT(gSCManagerTransferBattleState.players)) / 2; i++)
	{
		if ((sMNVSResultsIsPresent[i] != FALSE) && (team == gSCManagerTransferBattleState.players[i].team))
		{
			sMNVSResultsPlaces[i] = place;
		}
	}
}

// 0x80137108
s32 mnVSResultsGetTeamFirstPlayer(s32 team)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gSCManagerTransferBattleState.players); i++)
	{
		if ((team == gSCManagerTransferBattleState.players[i].team) && (gSCManagerTransferBattleState.players[i].pkind != nFTPlayerKindNot))
		{
			return i + 1;
		}
	}
	return 0;
}

// 0x801371B8 - order team placements
void mnVSResultsSetTeamPlaceAll(void)
{
	MNVSResultsScore results[GMCOMMON_PLAYERS_MAX];
	s32 place;
	s32 score;
	s32 winner;
	s32 players;
	s32 i;

	for (i = nSCBattleTeamIDBattleStart, players = 0; i <= nSCBattleTeamIDBattleEnd; i++)
	{
		s32 j = mnVSResultsGetTeamFirstPlayer(i);

		if (j != 0)
		{
			results[players].score = mnVSResultsGetTeamTotalPoints(i);
			results[players].place = gSCManagerVSBattleState.players[j - 1].place;
			results[players].player = i;
			players++;
		}
	}
	mnVSResultsOrderResults(results, players);

	for (i = 0, place = 0, score = results[0].score, winner = results[0].place; i < players; i++)
	{
		if ((score != results[i].score) || ((gSCManagerSceneData.is_suddendeath) && (winner != results[i].place)))
		{
			place++;
			score = results[i].score;
			winner = results[i].place;
		}
		mnVSResultsSetTeamPlace(results[i].player, place);
	}
}

// 0x801372F4 - set place by time
void mnVSResultsSetPlaceTime(void)
{
	if (sMNVSResultsIsTeamBattle == FALSE)
	{
		mnVSResultsSetRoyalPlace();
	}
	else mnVSResultsSetTeamPlaceAll();
}

// 0x80137334 - set place by stock
void mnVSResultsSetPlaceStock(void)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if (sMNVSResultsIsPresent[i] != FALSE)
		{
			sMNVSResultsPlaces[i] = gSCManagerTransferBattleState.players[i].place;
		}
	}
}

// 0x801373B4
void mnVSResultsInitRankings(void)
{
	if (gSCManagerTransferBattleState.game_rules == SCBATTLE_GAMERULE_STOCK)
	{
		mnVSResultsSetKOs();
		mnVSResultsSetTKO();
		mnVSResultsSetPoints();
		mnVSResultsSetPlaceStock();
	}
	else
	{
		mnVSResultsSetKOs();
		mnVSResultsSetTKO();
		mnVSResultsSetPoints();
		mnVSResultsSetPlaceTime();
	}
	if (sMNVSResultsGameRule == 4)
	{
		s32 i;

		for (i = 0; i < ARRAY_COUNT(sMNVSResultsPlaces); i++)
		{
			sMNVSResultsPlaces[i] = 0;
		}
	}
	mnVSResultsSetFighterKindAll();
}

// 0x80137454
void mnVSResultsSetIsPresent(void)
{
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(sMNVSResultsIsPresent) + ARRAY_COUNT(gSCManagerTransferBattleState.players)) / 2; i++)
	{
		if (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindNot)
		{
			sMNVSResultsIsPresent[i] = FALSE;
		}
		else sMNVSResultsIsPresent[i] = TRUE;
	}
}

// 0x801374F4
void mnVSResultsInitFighter(s32 player)
{
	mnVSResultsMakeFighter(player);
	mnVSResultsSetFighterPosition(sMNVSResultsFighterGObjs[player], player, mnVSResultsGetSpot(player));
	mnVSResultsSetFighterScale(sMNVSResultsFighterGObjs[player], player, mnVSResultsGetFighterKind(player), mnVSResultsGetSpot(player));
	mnVSResultsMakePlayerTag(player, gSCManagerTransferBattleState.players[player].color);
	mnVSResultsSetFighterStatus(sMNVSResultsFighterGObjs[player], player);
}

// 0x801375AC
void mnVSResultsInitFightersAll(void)
{
	s32 i;

	if (sMNVSResultsIsPresent[0] != FALSE)
	{
		mnVSResultsInitFighter(0);
	}
	if (sMNVSResultsIsPresent[1] != FALSE)
	{
		mnVSResultsInitFighter(1);
	}
	if (sMNVSResultsIsPresent[2] != FALSE)
	{
		mnVSResultsInitFighter(2);
	}
	if (sMNVSResultsIsPresent[3] != FALSE)
	{
		mnVSResultsInitFighter(3);
	}
	if (sMNVSResultsGameRule != 4)
	{
		for (i = 0; i < (ARRAY_COUNT(sMNVSResultsIsPresent) + ARRAY_COUNT(sMNVSResultsFighterGObjs)) / 2; i++)
		{
			if (sMNVSResultsIsPresent[i] != FALSE)
			{
				mnVSResultsFaceWinner(sMNVSResultsFighterGObjs[i], i, mnVSResultsGetPlace(i));
			}
		}
	}
}

// 0x80137698
void mnVSResultsInitVars(void)
{
	s32 i;

	sMNVSResultsTotalTimeTics = 0;
	sMNVSResultsHorizontalLineWidth = 0;
	sMNVSResultsCharacterAlpha = 0x00;
	sMNVSResultsIsTeamBattle = gSCManagerTransferBattleState.is_team_battle;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsSharedWinner); i++)
	{
		sMNVSResultsIsSharedWinner[i] = FALSE;
	}
	if (gSCManagerTransferBattleState.game_rules == SCBATTLE_GAMERULE_TIME)
	{
		if (sMNVSResultsIsTeamBattle == FALSE)
		{
			sMNVSResultsGameRule = 0;
		}
		else sMNVSResultsGameRule = 2;

		sMNVSResultsAllowExitWait = 410;
	}
	else
	{
		if (sMNVSResultsIsTeamBattle == FALSE)
		{
			sMNVSResultsGameRule = 1;
		}
		else sMNVSResultsGameRule = 3;

		sMNVSResultsAllowExitWait = 370;
	}
	if (gSCManagerSceneData.is_reset)
	{
		sMNVSResultsGameRule = 4;
		sMNVSResultsAllowExitWait = 200;

		sMNVSResultsDrawBackgroundFrame = 1;
		smnVSResultsMakeResultsTextFrame = 1;
		smnVSResultsInitFightersAllFrame = 1;
	}
	else
	{
		sMNVSResultsDrawBackgroundFrame = 80;
		smnVSResultsMakeResultsTextFrame = 120;
		smnVSResultsInitFightersAllFrame = 120;
	}
}

// 0x801377C0
void mnVSResultsAudioThreadUpdate(GObj *gobj)
{
	while (gSYAudioALCSPlayers->state == AL_STOPPED)
	{
		gcStopCurrentGObjThread(1);
	}
	while (TRUE)
	{
		if (gSYAudioALCSPlayers->state == AL_STOPPED)
		{
			syAudioPlaySong(0, nSYAudioBGMResults);
			gcEjectGObj(NULL);
		}
		gcStopCurrentGObjThread(1);
	}
}

// 0x80137854
void mnVSResultsMakeAudioThread(void)
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT), mnVSResultsAudioThreadUpdate, nGCProcessKindThread, 1);
}

// 0x80137898
void func_ovl31_80137898(GObj *gobj)
{
	u32 frame = 0;
	s32 winner = mnVSResultsGetWinPlayer();

	while (TRUE)
	{
		frame++;

		if (frame == 120)
		{
			func_800044B4(winner);
			func_80004494(winner);

			gcEjectGObj(NULL);
			gcStopCurrentGObjThread(1);
		}
		if (frame % 2)
		{
			func_80004474(winner);
		}
		else func_80004494(winner);

		gcStopCurrentGObjThread(1);
	}
}

// 0x80137938
void func_ovl31_80137938(void)
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0, NULL, 15, GOBJ_PRIORITY_DEFAULT), func_ovl31_80137898, nGCProcessKindThread, 1);
}

// 0x8013797C
void func_ovl31_8013797C(void)
{
	s32 i;

	for (i = 0; i < GMCOMMON_PLAYERS_MAX; i++)
	{
		func_800044B4(i);
		func_80004494(i);
	}
}

// 0x801379C4
s32 mnVSResultsGetManCount(void)
{
	s32 i, total = 0;

	for (i = 0; i < ARRAY_COUNT(gSCManagerTransferBattleState.players); i++)
	{
		if (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindMan)
		{
			total++;
		}
	}
	return total;
}

// 0x80137A1C
s32 mnVSResultsGetBestMan(void)
{
	s32 i;
	sb32 is_human[GMCOMMON_PLAYERS_MAX];
	s32 first_man;
	sb32 tie_exists;

	// determine if human or cpu
	for (i = 0; i < ARRAY_COUNT(is_human); i++)
	{
		is_human[i] = (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindMan) ? TRUE : FALSE;
	}

	// determine player of first human
	for (i = 0; i < ARRAY_COUNT(is_human); i++)
	{
		if (is_human[i] != FALSE)
		{
			first_man = i;
			break;
		}
	}
	tie_exists = FALSE;

	// determine the human with the most points and if any humans have the same points total
	for (i = first_man; i < (ARRAY_COUNT(is_human) + ARRAY_COUNT(sMNVSResultsPoints)) / 2; i++)
	{
		if (is_human[i] != FALSE)
		{
			if (sMNVSResultsPoints[first_man] == sMNVSResultsPoints[i])
			{
				tie_exists = TRUE;
			}
			if (sMNVSResultsPoints[first_man] < sMNVSResultsPoints[i])
			{
				first_man = i;
			}
		}
	}

	// break the tie based on the handicap level
	if (tie_exists != FALSE)
	{
		for (i = first_man; i < (ARRAY_COUNT(is_human) + ARRAY_COUNT(sMNVSResultsPoints) + ARRAY_COUNT(gSCManagerTransferBattleState.players)) / 3; i++)
		{
			if
			(
				(is_human[i] != FALSE) &&
				(sMNVSResultsPoints[first_man] == sMNVSResultsPoints[i]) &&
				(gSCManagerTransferBattleState.players[first_man].handicap < gSCManagerTransferBattleState.players[i].handicap)
			)
			{
				first_man = i;
			}
		}
	}
	return first_man;
}

// 0x80137E34
s32 mnVSResultsGetBestManExcept(s32 player)
{
	s32 i;
	sb32 is_human[GMCOMMON_PLAYERS_MAX];
	s32 first_man;
	s32 found;

	// determine if human or cpu
	for (i = 0; i < ARRAY_COUNT(is_human); i++)
	{
		is_human[i] = (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindMan) ? TRUE : FALSE;
	}

	// if a human exists with the same score, return that one
	for (i = first_man; i < (ARRAY_COUNT(is_human) + ARRAY_COUNT(sMNVSResultsPoints)) / 2; i++)
	{
		if ((is_human[i] != FALSE) && (player != i) && (sMNVSResultsPoints[player] == sMNVSResultsPoints[i]))
		{
			return i;
		}
	}
	found = 666;

	for (i = 0; i < ARRAY_COUNT(is_human); i++)
	{
		if ((is_human[i] != FALSE) && (player != i))
		{
			found = i;
		}
	}

	// return 666 if there are no other humans
	if (found == 666)
	{
		return 666;
	}

	// return the other human with the highest score
	for (i = 0; i < (ARRAY_COUNT(is_human) + ARRAY_COUNT(sMNVSResultsPoints)) / 2; i++)
	{
		if ((is_human[i] != FALSE) && (player != i) && (found != i) && (sMNVSResultsPoints[found] < sMNVSResultsPoints[i]))
		{
			found = i;
		}
	}
	return found;
}

// 0x80138130
s32 mnVSResultsGetWorstMan(void)
{
	s32 i;
	sb32 is_human[GMCOMMON_PLAYERS_MAX];
	s32 first_man;
	sb32 tie_exists;

	// determine if human or cpu
	for (i = 0; i < ARRAY_COUNT(is_human); i++)
	{
		is_human[i] = (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindMan) ? TRUE : FALSE;
	}
	// determine player of first human
	for (i = 0; i < ARRAY_COUNT(is_human); i++)
	{
		if (is_human[i] != FALSE)
		{
			first_man = i;
			break;
		}
	}
	tie_exists = FALSE;

	// determine the human with the least points and if any humans have the same points total
	for (i = first_man; i < ARRAY_COUNT(sMNVSResultsPoints); i++)
	{
		if (is_human[i] != FALSE)
		{
			if (sMNVSResultsPoints[first_man] == sMNVSResultsPoints[i])
			{
				tie_exists = TRUE;
			}
			if (sMNVSResultsPoints[first_man] > sMNVSResultsPoints[i])
			{
				first_man = i;
			}
		}
	}
	// break the tie based on the handicap level
	if (tie_exists != FALSE)
	{
		for (i = first_man; i < (ARRAY_COUNT(is_human) + ARRAY_COUNT(sMNVSResultsPoints) + ARRAY_COUNT(gSCManagerTransferBattleState.players)) / 3; i++)
		{
			if
			(
				(is_human[i] != FALSE) &&
				(sMNVSResultsPoints[first_man] == sMNVSResultsPoints[i]) &&
				(gSCManagerTransferBattleState.players[first_man].handicap > gSCManagerTransferBattleState.players[i].handicap)
			)
			{
				first_man = i;
			}
		}
	}
	return first_man;
}

// 0x80138548
void mnVSResultsSetAutoHandicaps(s32 best, s32 worst)
{
	s32 handicap_best = gSCManagerTransferBattleState.players[best].handicap;
	s32 handicap_worst = gSCManagerTransferBattleState.players[worst].handicap;
	s32 other;

	if ((handicap_best == 1) && (handicap_worst == 9))
	{
		return;
	}
	else if ((handicap_best > 1) && (handicap_worst < 9))
	{
		gSCManagerTransferBattleState.players[best].handicap--;
		gSCManagerTransferBattleState.players[worst].handicap++;
	}
	else if ((handicap_best == 1) && (handicap_worst < 8))
	{
		gSCManagerTransferBattleState.players[worst].handicap += 2;
	}
	else if ((handicap_best > 2) && (handicap_worst == 9))
	{
		gSCManagerTransferBattleState.players[best].handicap -= 2;
	}
	else if ((handicap_best == 1) && (handicap_worst == 8))
	{
		other = mnVSResultsGetBestManExcept(best);

		if (other != 666)
		{
			gSCManagerTransferBattleState.players[other].handicap--;
			gSCManagerTransferBattleState.players[worst].handicap++;
		}
	}
	else if ((handicap_best == 2) && (handicap_worst == 9))
	{
		other = mnVSResultsGetBestManExcept(best);

		if (other != 666)
		{
			gSCManagerTransferBattleState.players[best].handicap--;
			gSCManagerTransferBattleState.players[other].handicap--;
		}
	}
}

// 0x801386BC
void mnVSResultsUpdateAutoHandicap(void)
{
	if ((sMNVSResultsGameRule != 4) && (mnVSResultsGetManCount() >= 2))
	{
		mnVSResultsSetAutoHandicaps(mnVSResultsGetBestMan(), mnVSResultsGetWorstMan());
	}
}

// 0x80138714
void mnVSResultsPlayWinBGM(void)
{
	switch (mnVSResultsGetFighterKind(mnVSResultsGetWinPlayer()))
	{
	case nFTKindMario:
	case nFTKindLuigi:
		syAudioPlaySong(0, nSYAudioBGMWinMario);
		break;

	case nFTKindFox:
		syAudioPlaySong(0, nSYAudioBGMWinFox);
		break;

	case nFTKindDonkey:
		syAudioPlaySong(0, nSYAudioBGMWinDonkey);
		break;

	case nFTKindSamus:
		syAudioPlaySong(0, nSYAudioBGMWinMetroid);
		break;

	case nFTKindLink:
		syAudioPlaySong(0, nSYAudioBGMWinZelda);
		break;

	case nFTKindYoshi:
		syAudioPlaySong(0, nSYAudioBGMWinYoshi);
		break;

	case nFTKindCaptain:
		syAudioPlaySong(0, nSYAudioBGMWinFZero);
		break;

	case nFTKindPikachu:
	case nFTKindPurin:
		syAudioPlaySong(0, nSYAudioBGMWinPMonsters);
		break;

	case nFTKindKirby:
		syAudioPlaySong(0, nSYAudioBGMWinKirby);
		break;

	case nFTKindNess:
		syAudioPlaySong(0, nSYAudioBGMWinMother);
		break;

	default:
		syAudioPlaySong(0, nSYAudioBGMWinDefault);
		break;
	}
}

// 0x80138830
void mnVSResultsMakeConfetti(void)
{
	Vec3f pos1 = { 0.0F, 1000.0F,  -400.0F };
	Vec3f pos0 = { 0.0F, 1000.0F, -1000.0F };
	s32 unused;

	efManagerConfettiMakeEffect(&pos0, 0);
	efManagerConfettiMakeEffect(&pos1, 1);
}

// 0x801388A4 - Unused?
void func_ovl31_801388A4(void)
{
	return;
}

// 0x801388AC
void mnVSResultsProcRun(GObj *gobj)
{
	s32 unlocks_num;
	u16 spgame_complete_mask;
	s32 i;

	sMNVSResultsTotalTimeTics++;

	if (sMNVSResultsTotalTimeTics == sMNVSResultsDrawBackgroundFrame)
	{
		if (sMNVSResultsGameRule != 4)
		{
			mnVSResultsMakeWallpaperOverlay2();
		}
		mnVSResultsMakeWallpaper();
	}
	if (sMNVSResultsTotalTimeTics == smnVSResultsMakeResultsTextFrame)
	{
		mnVSResultsMakeResultsText();
		mnVSResultsCreateScreenTitle();

		if (sMNVSResultsGameRule != 4)
		{
			mnVSResultsMakeConfetti();
		}
	}
	if (sMNVSResultsTotalTimeTics == smnVSResultsInitFightersAllFrame)
	{
		mnVSResultsInitFightersAll();
	}
	if (smnVSResultsInitFightersAllFrame < sMNVSResultsTotalTimeTics)
	{
		if (sMNVSResultsCharacterAlpha < 0xFF)
		{
			sMNVSResultsCharacterAlpha += 0x16;

			if (sMNVSResultsCharacterAlpha > 0xFF)
			{
				sMNVSResultsCharacterAlpha = 0xFF;
			}
		}
		scSubsysFighterSetLightParams(10.0F, 10.0F, 0xFF, 0xFF, 0xFF, sMNVSResultsCharacterAlpha);
	}
	mnVSResultsAnnounceWinner();

	if ((sMNVSResultsGameRule != 4) && (sMNVSResultsTotalTimeTics == 120))
	{
		mnVSResultsPlayWinBGM();
		mnVSResultsMakeAudioThread();
	}
	if (mnVSResultsCheckExit())
	{
		unlocks_num = 0;

		if (!(gSCManagerBackupData.unlock_mask & LBBACKUP_UNLOCK_MASK_ITEMSWITCH) && (gSCManagerBackupData.vs_itemswitch_battles >= 100))
		{
			gSCManagerSceneData.unlock_messages[unlocks_num] = nLBBackupUnlockItemSwitch;
			unlocks_num = 1;
		}
		if (!(gSCManagerBackupData.unlock_mask & LBBACKUP_UNLOCK_MASK_INISHIE))
		{
			if ((gSCManagerBackupData.ground_mask & LBBACKUP_GROUND_MASK_ALL) == LBBACKUP_GROUND_MASK_ALL)
			{
				for (i = nFTKindPlayableStart, spgame_complete_mask = 0; i <= nFTKindPlayableEnd; i++)
				{
					if (gSCManagerBackupData.spgame_records[i].is_spgame_complete)
					{
						spgame_complete_mask |= (1 << i);
					}
				}
				if ((spgame_complete_mask & LBBACKUP_CHARACTER_MASK_STARTER) == LBBACKUP_CHARACTER_MASK_STARTER)
				{
					gSCManagerSceneData.unlock_messages[unlocks_num] = nLBBackupUnlockInishie;
					unlocks_num++;
				}
			}
		}
		if (unlocks_num != 0)
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = nSCKindMessage;
		}
		else
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = nSCKindVSPlayers;
		}
		func_800266A0_272A0();
		syAudioStopSongAll();
		syTaskmanSetLoadScene();
	}
}

// 0x80138B70
void mnVSResultsFuncStart(void)
{
	LBRelocSetup rl_setup;
	s32 i;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMNVSResultsStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMNVSResultsStatusBuffer);
	rl_setup.force_status_buffer = sMNVSResultsForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMNVSResultsForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dMNVSResultsFileIDs,
		ARRAY_COUNT(dMNVSResultsFileIDs),
		sMNVSResultsFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dMNVSResultsFileIDs,
				ARRAY_COUNT(dMNVSResultsFileIDs)
			),
			0x10
		)
	);
	gcMakeGObjSPAfter(0, mnVSResultsProcRun, 0, GOBJ_PRIORITY_DEFAULT);
	gcMakeDefaultCameraGObj(0, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_FILLCOLOR | COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	efParticleInitAll();
	efManagerInitEffects();
	ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 4);

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		ftManagerSetupFilesAllKind(i);
	}
	for (i = 0; i < ARRAY_COUNT(sMNVSResultsFigatreeHeaps); i++)
	{
		sMNVSResultsFigatreeHeaps[i] = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	}
	mnVSResultsSaveBackup();
	mnVSResultsInitVars();
	mnVSResultsSetIsPresent();
	mnVSResultsInitRankings();

	if (gSCManagerTransferBattleState.handicap == nSCBattleHandicapAuto)
	{
		mnVSResultsUpdateAutoHandicap();
	}
	if (sMNVSResultsGameRule != 4)
	{
		lbTransitionSetupTransition();
		lbTransitionMakeCamera(0x20000002, 0, 10, COBJ_MASK_DLLINK(32));
		lbTransitionMakeTransition(syUtilsGetRandomIntRange(ARRAY_COUNT(dLBTransitionDescs)), 0x20000000, 0, lbTransitionProcDisplay, 32, lbTransitionProcUpdate);
	}
	mnVSResultsMakeEmblemViewport();
	mnVSResultsMakeFighterCamera();
	mnVSResultsMakePlayerTagCamera();
	mnVSResultsMakeResultsTextCamera();
	mnVSResultsCreateOverlayViewport();
	mnVSResultsCreateResultsSYRdpViewport();
	mnVSResultsMakeWallpaperOverlayViewport();
	mnVSResultsMakeWallpaperOverlay2Viewport();

	if (sMNVSResultsGameRule != 4)
	{
		mnVSResultsMakeEmblem();
	}
	mnVSResultsMakeWallpaperOverlay();
	func_ovl31_8013797C();

	if ((sMNVSResultsGameRule != 4) && (gSCManagerTransferBattleState.players[mnVSResultsGetWinPlayer()].pkind == nFTPlayerKindMan))
	{
		func_ovl31_80137938();
	}
	scSubsysFighterSetLightParams(10.0F, 10.0F, 0xFF, 0xFF, 0xFF, sMNVSResultsCharacterAlpha);

	if (sMNVSResultsGameRule != 4)
	{
		func_800269C0_275C0(nSYAudioVoicePublicWin);
	}
}

// 0x80139710
SYVideoSetup dMNVSResultsVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x8013972C
SYTaskmanSetup dMNVSResultsTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                          // ???
        gcRunAll,              		// Update function
        scManagerFuncDraw,        	// Frame draw function
        &ovl31_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 2500,         // Display List Buffer 0 Size
        sizeof(Gfx) * 128,          // Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x8000,                     // Graphics Heap Size
        2,                          // ???
        0xC000,                     // RDP Output Buffer Size
        mnVSResultsFuncLights,   	// Pre-render function
        syControllerFuncRead,       // Controller I/O function
    },

    0,                              // Number of GObjThreads
    sizeof(u64) * 192,              // Thread stack size
    0,                              // Number of thread stacks
    0,                              // ???
    0,                              // Number of GObjProcesses
    0,                              // Number of GObjs
    sizeof(GObj),                   // GObj size
    0,                              // Number of XObjs
    dLBCommonFuncMatrixList,        // Matrix function list
    NULL,                           // DObjVec eject function
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of Cameras
    sizeof(CObj),                 	// CObj size
    
    mnVSResultsFuncStart         	// Task start function
};

// 0x80138E64
void mnVSResultsStartScene(void)
{
	s32 i;

	dMNVSResultsVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMNVSResultsVideoSetup);

	dMNVSResultsTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl31_BSS_END);
	scManagerFuncUpdate(&dMNVSResultsTaskmanSetup);

	for (i = 0; i < GMCOMMON_PLAYERS_MAX; i++)
	{
		func_800044B4(i);
		func_80004494(i);
	}
}
