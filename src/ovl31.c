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
	s32 kos_minus_tkos;
	s32 placement;
	s32 player;

} MNVSResultsScore;

// Externs
extern f32 dSCSubsysFighterScales[12];           // 0x80390D90

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

extern u8 dIFCommonPlayerTagShadowColorsR[];
extern u8 dIFCommonPlayerTagShadowColorsG[];
extern u8 dIFCommonPlayerTagShadowColorsB[];
extern u8 dIFCommonPlayerTagSpriteColorsR[];
extern u8 dIFCommonPlayerTagSpriteColorsG[];
extern u8 dIFCommonPlayerTagSpriteColorsB[];
extern ALCSPlayer *gSYAudioALCSPlayers;

// Forward declarations
void mnVSResultsFuncStart();
void mnVSResultsDrawResults0(GObj *gobj);
void mnVSResultsDrawResults1(GObj *gobj);
void mnVSResultsDrawResults2(GObj *gobj);
void mnVSResultsDrawResults3(GObj *gobj);
void mnVSResultsDrawResultsNoContest(GObj *gobj);
u8 mnVSResultsGetWinningTeam();
s32 mnVSResultsGetWinPlayer();
s32 mnVSResultsGetFighterKind(s32 player);
s32 mnVSResultsGetKOsMinusTKO(s32 player);
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
s32 sMNVSResultsPlacement[GMCOMMON_PLAYERS_MAX];

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
s32 sMNVSResultsDrawWinnerTextFrame;

// 0x80139C4C
s32 sMNVSResultsDrawFightersFrame;

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
s32 mnVSResultsGetPlayerCount()
{
	return gSCManagerTransferBattleState.pl_count + gSCManagerTransferBattleState.cp_count;
}

// 0x80131B90
void mnVSResultsSaveDataToSRAM()
{
	LBBackupVSRecord* vs_record;
	s32 i, j;
	u8 fkind, opp_fkind;

	gSCManagerBackupData.vs_total_battles++;
	gSCManagerBackupData.ground_mask |= (1 << gSCManagerTransferBattleState.gkind);

	if (gSCManagerBackupData.vs_itemswitch_battles < U8_MAX)
	{
		gSCManagerBackupData.vs_itemswitch_battles++;
	}

	for (i = 0; i < 4; i++)
	{
		if (gSCManagerTransferBattleState.players[i].pkind != 2)
		{
			fkind = gSCManagerTransferBattleState.players[i].fkind;
			vs_record = &gSCManagerBackupData.vs_records[fkind];

			vs_record->time_used += (gSCManagerTransferBattleState.time_passed / 60);

			if (vs_record->time_used > I_MIN_TO_TICS(1000) - 1)
				vs_record->time_used = I_MIN_TO_TICS(1000) - 1;

			vs_record->damage_given += gSCManagerTransferBattleState.players[i].total_damage_given;

			if (vs_record->damage_given > 999999)
				vs_record->damage_given = 999999;

			vs_record->damage_taken += gSCManagerTransferBattleState.players[i].total_damage_all;

			if (vs_record->damage_taken > 999999)
				vs_record->damage_taken = 999999;

			vs_record->selfdestructs += gSCManagerTransferBattleState.players[i].total_selfdestructs;

			if (vs_record->selfdestructs > 9999)
				vs_record->selfdestructs = 9999;

			vs_record->games_played += 1;
			vs_record->player_count_tally += mnVSResultsGetPlayerCount();

			for (j = 0; j < 4; j++)
			{
				if ((i != j) && (gSCManagerTransferBattleState.players[j].pkind != nFTPlayerKindNot))
				{
					opp_fkind = gSCManagerTransferBattleState.players[j].fkind;

					gSCManagerBackupData.vs_records[fkind].ko_count[opp_fkind] += gSCManagerTransferBattleState.players[i].total_kos_players[j];

					if (gSCManagerBackupData.vs_records[fkind].ko_count[opp_fkind] > 9999)
						gSCManagerBackupData.vs_records[fkind].ko_count[opp_fkind] = 9999;

					gSCManagerBackupData.vs_records[fkind].player_count_tallies[opp_fkind] += mnVSResultsGetPlayerCount();
					gSCManagerBackupData.vs_records[fkind].played_against[opp_fkind] += 1;
				}
			}
		}
	}

	lbBackupWrite();
}

// 0x80131E18
sb32 mnVSResultsCheckStartPressed()
{
	s32 i;

	if (sMNVSResultsTotalTimeTics >= sMNVSResultsAllowExitWait)
	{
		for (i = 0; i < ARRAY_COUNT(gSYControllerDevices); i++)
		{
			if (gSYControllerDevices[i].button_tap & START_BUTTON)
				return TRUE;
		}
	}

	return FALSE;
}

// 0x80131EB0
void mnVSResultsAnnounceWinner()
{
	s32 announcer_names[12] = {

		0x1F3,
		0x1E6,
		0x1E3,
		0x201,
		0x1F2,
		0x1F1,
		0x217,
		0x1E5,
		0x1F0,
		0x1FB,
		0x1FC,
		0x1F5
	};
	s32 announcer_teams[3] = {

		0x1FE,
		0x1DB,
		0x1EB
	};

	if (sMNVSResultsGameRule == 4)
	{
		// No Contest
		switch (sMNVSResultsTotalTimeTics)
		{
			case 0x2:
				func_800269C0_275C0(0x1F6U);
				return;
			case 0x47:
				func_800269C0_275C0(0x270U);
				return;
		}
	}
	else if (!sMNVSResultsIsTeamBattle)
	{
		// FFA - "This Game's Winner Is..."
		switch (sMNVSResultsTotalTimeTics)
		{
			case 0x51:
				func_800269C0_275C0(0x216U);
				return;
			case 0xD2:
				func_800269C0_275C0(announcer_names[mnVSResultsGetFighterKind(mnVSResultsGetWinPlayer())]);
				return;
			case 0x10E:
				func_800269C0_275C0(0x272U);
				return;
		}
	}
	else
	{
		// Teams - "Red/Blue/Grean Team Wins!"
		switch (sMNVSResultsTotalTimeTics)
		{
			case 0x51:
				func_800269C0_275C0(announcer_teams[mnVSResultsGetWinningTeam()]);
				return;
			case 0x82:
				func_800269C0_275C0(0x215U);
				return;
			case 0x96:
				func_800269C0_275C0(0x272U);
				return;
		}
	}
}

// 0x8013205C
s32 mnVSResultsGetPresentCount()
{
	s32 i, sum = 0;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if (sMNVSResultsIsPresent[i] == TRUE)
			sum += 1;
	}

	return sum;
}

// 0x801320B8
s32 mnVSResultsGetLowerPortCount(s32 player) {
	s32 i;
	s32 sum = 0;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if (player != i)
		{
			if (sMNVSResultsIsPresent[i] == TRUE)
				sum += 1;
		}
		else
			break;
	}

	return sum;
}

// 0x80132100
s32 mnVSResultsGetPortByPlace(s32 place)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if ((sMNVSResultsIsPresent[i]) && (place == sMNVSResultsPlacement[i]))
			return i;
	}

	return -1;
}

// 0x801321AC
s32 func_ovl31_801321AC(s32 player)
{
	s32 num_opponents;
	s32 players_num;

	num_opponents = mnVSResultsGetLowerPortCount(player);

	if (mnVSResultsGetPlayerCountByPlace(0) == 1)
	{
		switch (mnVSResultsGetPresentCount())
		{
			case 2:
				break;
			case 3:
				if (sMNVSResultsPlacement[player] == 0)
				{
					switch (mnVSResultsGetLowerPortCount(player))
					{
						case 0:
							num_opponents = 1;
							break;
						case 2:
							num_opponents = 1;
							break;
					}
				}
				else
				{
					if (mnVSResultsGetLowerPortCount(player) == 1)
						num_opponents = mnVSResultsGetLowerPortCount(mnVSResultsGetPortByPlace(0));
				}
				break;
			default:
				switch (player)
				{
					case 0:
						if ((sMNVSResultsPlacement[0] == 0) && (sMNVSResultsPlacement[1] != 0))
							num_opponents = 1;
						break;
					case 1:
						if ((sMNVSResultsPlacement[0] == 0) && (sMNVSResultsPlacement[1] != 0))
							num_opponents = 0;
						break;
					case 2:
						if ((sMNVSResultsPlacement[3] == 0) && (sMNVSResultsPlacement[2] != 0))
							num_opponents = 3;
						break;
					case 3:
						if ((sMNVSResultsPlacement[3] == 0) && (sMNVSResultsPlacement[2] != 0))
							num_opponents = 2;
						break;
				}
				break;
		}
	}

	return num_opponents;
}

// 0x8013234C
s32 mnVSResultsGetWinPlayer()
{
	s32 i;
	sb32 potential_first_place[4];
	s32 kos_minus_tkos[4];
	s32 winner_player = 0x29A;
	sb32 multi_winner[4];
	sb32 is_multi_winner;
	int foo;

	// If FFA, use place
	if ((sMNVSResultsGameRule == nSCBattleGameRuleTime) || (sMNVSResultsGameRule == nSCBattleGameRuleStock))
	{
		for (i = 0; i < 4; i++)
		{
			if ((sMNVSResultsIsPresent[i] == TRUE) && (sMNVSResultsPlacement[i] == 0))
				return i;
		}
	}
	else
	{
		// If here, it's teams

		// Get KOs minus TKO for each port
		for (i = 0; i < 4; i++)
			kos_minus_tkos[i] = mnVSResultsGetKOsMinusTKO(i); // gets kos minus tkos

		// Set lowest present port to winner and remember which ports may be the winner
		for (i = 0; i < 4; i++)
		{
			if ((sMNVSResultsIsPresent[i]) && (sMNVSResultsPlacement[i] == 0))
			{
				if (winner_player == 0x29A)
					winner_player = i;

				potential_first_place[i] = TRUE;
			}
			else
				potential_first_place[i] = FALSE;
		}

		// Initialize as no multi winners
		for (i = 0; i < 4; i++)
			multi_winner[i] = FALSE;

		// Get the winner port based on highest KOs minus TKO score
		for (i = winner_player + 1; i < 4; i++)
		{
			if ((potential_first_place[i]) && (kos_minus_tkos[winner_player] < kos_minus_tkos[i]))
				winner_player = i;
		}

		is_multi_winner = FALSE;

		// Figure out if any potential winners have the same KOs minus TKO score
		for (i = winner_player + 1; i < 4; i++)
		{
			if ((potential_first_place[i]) && (kos_minus_tkos[winner_player] == kos_minus_tkos[i]))
			{
				multi_winner[winner_player] = multi_winner[i] = TRUE;
				is_multi_winner = TRUE;
			}
		}

		if (is_multi_winner)
		{
			// Break the tie based on number of KOs
			for (i = winner_player + 1; i < 4; i++)
			{
				if ((multi_winner[i]) && (sMNVSResultsKOs[winner_player] < sMNVSResultsKOs[i]))
					winner_player = i;
			}

			for (i = 0; i < 4; i++)
			{
				sMNVSResultsIsSharedWinner[i] = FALSE;
			}

			for (i = winner_player + 1; i < 4; i++)
			{
				if (sMNVSResultsKOs[winner_player] == sMNVSResultsKOs[i])
				{
					sMNVSResultsIsSharedWinner[i] = TRUE;
					sMNVSResultsIsSharedWinner[winner_player] = TRUE;
				}
			}
		}

		return winner_player;
	}
}

// 0x80132A2C
u8 mnVSResultsGetWinningTeam()
{
	return gSCManagerTransferBattleState.players[mnVSResultsGetWinPlayer()].team;
}

// 0x80132A68
void mnVSResultsAnimateLogo(GObj* logo_gobj)
{
	f32 new_scale;
	f32 min_scale = 10.0F;
	f32 max_y = 1000.0F;

	if (sMNVSResultsTotalTimeTics >= 0x28)
	{
		if (min_scale < DObjGetStruct(logo_gobj)->scale.vec.f.x)
		{
			new_scale = DObjGetStruct(logo_gobj)->scale.vec.f.x - 0.15F;

			if (new_scale < min_scale)
				new_scale = min_scale;

			DObjGetStruct(logo_gobj)->scale.vec.f.x = new_scale;
			DObjGetStruct(logo_gobj)->scale.vec.f.y = new_scale;
		}

		if (DObjGetStruct(logo_gobj)->translate.vec.f.y < max_y)
		{
			DObjGetStruct(logo_gobj)->translate.vec.f.y += 11.0F;

			if (max_y < DObjGetStruct(logo_gobj)->translate.vec.f.y)
				DObjGetStruct(logo_gobj)->translate.vec.f.y = max_y;
		}
	}
}

// 0x80132B20
void mnVSResultsCreateLogo()
{
	GObj* logo_gobj;
	s32 winner_player;
	s32 winner_char_id;
	s32 color;
	intptr_t offsets1[12] = {

		0x0990, 0x21D0, 0x1348, 0x1860, 0x0990, 0x2520,
		0x2F10, 0x3828, 0x3E68, 0x4710, 0x4710, 0x5A00
	};
	intptr_t offsets2[12] = {

		0x0000, 0x1940, 0x0B00, 0x1470, 0x0000, 0x22B0,
		0x2690, 0x2FF0, 0x3900, 0x3F40, 0x3F40, 0x4840
	};
	intptr_t offsets3[12] = {

		0x0A14, 0x2254, 0x13CC, 0x18E4, 0x0A14, 0x25A4,
		0x2F94, 0x38AC, 0x3EEC, 0x4794, 0x4794, 0x5A84
	};
	s32 colors[3] = {

		0, 1, 3
	};

	if (sMNVSResultsIsTeamBattle == FALSE)
	{
		winner_player = mnVSResultsGetWinPlayer();
		winner_char_id = mnVSResultsGetFighterKind(winner_player);
		color = winner_player;
	}

	if (sMNVSResultsIsTeamBattle == TRUE)
	{
		winner_char_id = mnVSResultsGetFighterKind(mnVSResultsGetWinPlayer());
		color = colors[mnVSResultsGetWinningTeam()];
	}

	logo_gobj = gcMakeGObjSPAfter(0, 0, 0x17, 0x80000000);

	gcSetupCommonDObjs(logo_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[4], offsets1[winner_char_id]), 0);
	gcAddGObjDisplay(logo_gobj, gcDrawDObjTreeForGObj, 0x21, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(logo_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[4], offsets2[winner_char_id]));
	gcAddMatAnimJointAll(logo_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[4], offsets3[winner_char_id]), color);
	gcPlayAnimAll(logo_gobj);
	gcAddGObjProcess(logo_gobj, &mnVSResultsAnimateLogo, 1, 1);

	DObjGetStruct(logo_gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(logo_gobj)->translate.vec.f.y = 100.0F;
	DObjGetStruct(logo_gobj)->translate.vec.f.z = -11000.0F;
	DObjGetStruct(logo_gobj)->scale.vec.f.x = 25.0F;
	DObjGetStruct(logo_gobj)->scale.vec.f.y = 25.0F;
}

// 0x80132D84
void mnVSResultsRenderBackground(GObj* bg_gobj)
{
	SObj* bg_sobj = SObjGetStruct(bg_gobj);

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, bg_sobj->sprite.red, bg_sobj->sprite.green, bg_sobj->sprite.blue, bg_sobj->sprite.alpha);
	gDPSetEnvColor(gSYTaskmanDLHeads[0]++, bg_sobj->envcolor.r, bg_sobj->envcolor.g, bg_sobj->envcolor.b, bg_sobj->envcolor.a);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,  0, 0, 0, 1,  PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,  0, 0, 0, 1);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

	lbCommonDrawSObjNoAttr(bg_gobj);
}

// 0x80132EA8
void mnVSResultsCreateBackground()
{
	GObj* bg_gobj;
	SObj* bg_sobj;
	GObj *camera_gobj;
	s32 stack_fix_1, stack_fix_2;
	s32 winner_player;
	SYColorRGBPair unused_colors[4] = {

		{{ 0xAB, 0x31, 0x25 }, { 0xAF, 0x56, 0x4E }},
		{{ 0x00, 0x3F, 0xFF }, { 0x39, 0x6A, 0xFF }},
		{{ 0xDE, 0xB2, 0x00 }, { 0xFF, 0xD7, 0x33 }},
		{{ 0x17, 0x7E, 0x43 }, { 0x2A, 0x98, 0x45 }}
	};
	uintptr_t unused_array_pointers[4] = {

		dMNVSResultsUnused0x80138EF0,
		dMNVSResultsUnused0x80138F30,
		dMNVSResultsUnused0x80138F50,
		dMNVSResultsUnused0x80138F10
	};
	s32 team_colors[3] = {

		0, 1, 3
	};
	SYColorRGBPair colors[4] = {

		{{ 0x5C, 0x2B, 0x27 }, { 0x98, 0x6F, 0x6C }},
		{{ 0x39, 0x39, 0x99 }, { 0x86, 0x86, 0xD1 }},
		{{ 0x69, 0x58, 0x2B }, { 0x9B, 0x8E, 0x6C }},
		{{ 0x2B, 0x44, 0x36 }, { 0x71, 0x82, 0x78 }}
	};
	CObj *cobj;

	camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
	cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	if (sMNVSResultsGameRule == 4)
		winner_player = syUtilsGetRandomIntRange(4);
	else
	{
		if (sMNVSResultsIsTeamBattle == FALSE)
			winner_player = mnVSResultsGetWinPlayer();

		if (sMNVSResultsIsTeamBattle == TRUE)
			winner_player = team_colors[mnVSResultsGetWinningTeam()];
	}

	bg_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(bg_gobj, mnVSResultsRenderBackground, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0);

	bg_sobj = lbCommonMakeSObjForGObj(bg_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[0], &FILE_022_BACKGROUND_IMAGE_OFFSET));

	SObjGetStruct(bg_gobj)->pos.x = 10.0f;
	SObjGetStruct(bg_gobj)->pos.y = 10.0f;
	bg_sobj->envcolor.r = colors[winner_player].prim.r;
	bg_sobj->envcolor.g = colors[winner_player].prim.g;
	bg_sobj->envcolor.b = colors[winner_player].prim.b;
	bg_sobj->sprite.red = colors[winner_player].env.r;
	bg_sobj->sprite.green = colors[winner_player].env.g;
	bg_sobj->sprite.blue = colors[winner_player].env.b;
}

// 0x80133134
s32 mnVSResultsGetPlacement(s32 player)
{
	return sMNVSResultsPlacement[player];
}

// 0x80133148
s32 mnVSResultsGetFighterKind(s32 player)
{
	return sMNVSResultsFighterKinds[player];
}

// 0x8013315C
void mnVSResultsSetFighterKind()
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if (sMNVSResultsIsPresent[i])
			sMNVSResultsFighterKinds[i] = gSCManagerTransferBattleState.players[i].fkind;
	}
}

// 0x801331DC
void mnVSResultsSetFighterPosition(GObj* fighter_gobj, s32 player, s32 place)
{
	f32 x_positions_2p[2][4] = {

		-150.0, -350.0, -700.0, -1000.0,
		100.0, 250.0, 600.0, 1000.0
	};
	f32 x_positions_3p[3][4] = {

		-450.0, -900.0, -2000.0, -3000.0,
		0.0, 0.0, 0.0, 0.0,
		400.0, 800.0, 1800.0, 2800.0
	};
	f32 x_positions_4p[4][4] = {

		-450.0, -900.0, -2000.0, -3000.0,
		-150.0, -350.0, -700.0, -1000.0,
		150.0, 300.0, 700.0, 1000.0,
		400.0, 800.0, 1800.0, 2800.0
	};
	Vec2f yz_positions[4] = {

		{ -350.0, 0.0 },
		{ -450.0, -2000.0 },
		{ -700.0, -5000.0 },
		{ -900.0, -9000.0 }
	};

	switch (mnVSResultsGetPresentCount())
	{
		case 2:
			DObjGetStruct(fighter_gobj)->translate.vec.f.x = x_positions_2p[func_ovl31_801321AC(player)][place];
			break;
		case 3:
			DObjGetStruct(fighter_gobj)->translate.vec.f.x = x_positions_3p[func_ovl31_801321AC(player)][place];
			break;
		case 4:
		default:
			DObjGetStruct(fighter_gobj)->translate.vec.f.x = x_positions_4p[func_ovl31_801321AC(player)][place];
			break;
	}

	DObjGetStruct(fighter_gobj)->translate.vec.f.y = yz_positions[place].x;
	DObjGetStruct(fighter_gobj)->translate.vec.f.z = yz_positions[place].y;
}

// 0x801333E4
void mnVSResultsFaceWinner(GObj *fighter_gobj, s32 player, s32 place)
{
	s32 winner_player = mnVSResultsGetWinPlayer();

	if (place != 0)
	{
		DObj* fighter_dobj = DObjGetStruct(fighter_gobj);
		DObj* winner_dobj = DObjGetStruct(sMNVSResultsFighterGObjs[winner_player]);
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
		switch (sMNVSResultsPlacement[player])
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
		if (sMNVSResultsPlacement[player] == 0)
		{
			scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetStatusWin(mnVSResultsGetFighterKind(player)));
		}
		else scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetStatusLose(mnVSResultsGetFighterKind(player)));
		break;
		
	case 4:
	default:
		if (sMNVSResultsPlacement[player] == 0)
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
	s32 sum = 0;
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if ((sMNVSResultsIsPresent[i] != FALSE) && (place == sMNVSResultsPlacement[i]))
		{
			sum++;
		}
	}
	return sum;
}

// 0x80133718
s32 mnVSResultsGetPlayerCountAhead(s32 player)
{
	s32 num = 0;
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(sMNVSResultsIsPresent) + ARRAY_COUNT(sMNVSResultsPlacement)) / 2; i++)
	{
		if ((player != i) && (sMNVSResultsIsPresent[i]) && (sMNVSResultsPlacement[i] < sMNVSResultsPlacement[player]))
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

	return sMNVSResultsPlacement[player] + sp40[sMNVSResultsPlacement[player] - mnVSResultsGetPlayerCountAhead(player)] + sp2C[mnVSResultsGetPlayerCountByPlace(sMNVSResultsPlacement[player])];
}

// 0x801338EC
void mnVSResultsSetFighterScale(GObj* fighter_gobj, s32 player, s32 fkind, s32 place)
{
	DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysFighterScales[fkind];
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysFighterScales[fkind];
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysFighterScales[fkind];
}

// 0x8013392C
void mnVSResultsSpawnFighter(s32 player)
{
	s32 foo, bar, baz;
	FTDesc desc = dFTManagerDefaultFighterDesc;

	desc.fkind = mnVSResultsGetFighterKind(player);
	desc.costume = gSCManagerTransferBattleState.players[player].costume;
	desc.shade = gSCManagerTransferBattleState.players[player].shade;
	desc.figatree_heap = sMNVSResultsFigatreeHeaps[player];
	sMNVSResultsFighterGObjs[player] = ftManagerMakeFighter(&desc);
}

// 0x801339F4
void mnVSResultsSetIndicatorPosition(GObj* indicator_gobj, s32 player)
{
	s32 sp214;
	s32 temp_s0;
	Vec2f xy_positions_2p[2][4] = {

		115.0, 50.0, 112.0, 75.0,
		115.0, 96.0, 115.0, 103.0,
		173.0, 50.0, 177.0, 75.0,
		183.0, 96.0, 186.0, 103.0
	};
	Vec2f xy_positions_3p[3][4] = {

		38.0, 50.0, 50.0, 75.0,
		38.0, 96.0, 38.0, 103.0,
		150.0, 50.0, 150.0, 75.0,
		150.0, 96.0, 150.0, 103.0,
		245.0, 50.0, 237.0, 75.0,
		254.0, 96.0, 258.0, 103.0
	};
	Vec2f xy_positions_4p[4][4] = {

		38.0, 50.0, 50.0, 75.0,
		35.0, 96.0, 35.0, 103.0,
		115.0, 50.0, 112.0, 75.0,
		115.0, 96.0, 115.0, 103.0,
		173.0, 50.0, 177.0, 75.0,
		188.0, 96.0, 186.0, 103.0,
		245.0, 50.0, 237.0, 75.0,
		258.0, 96.0, 258.0, 103.0
	};
	f32 y_positions_kind[12][4] = {

		{ 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 },
		{ 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 },
		{ 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }
	};

	sp214 = mnVSResultsGetSpot(player);
	temp_s0 = func_ovl31_801321AC(player);

	switch (mnVSResultsGetPresentCount())
	{
		case 2:
			SObjGetStruct(indicator_gobj)->pos.x = xy_positions_2p[temp_s0][sp214].x;
			SObjGetStruct(indicator_gobj)->pos.y = xy_positions_2p[temp_s0][sp214].y + y_positions_kind[mnVSResultsGetFighterKind(player)][temp_s0];
			break;
		case 3:
			SObjGetStruct(indicator_gobj)->pos.x = xy_positions_3p[temp_s0][sp214].x;
			SObjGetStruct(indicator_gobj)->pos.y = xy_positions_3p[temp_s0][sp214].y + y_positions_kind[mnVSResultsGetFighterKind(player)][temp_s0];
			break;
		case 4:
		default:
			SObjGetStruct(indicator_gobj)->pos.x = xy_positions_4p[temp_s0][sp214].x;
			SObjGetStruct(indicator_gobj)->pos.y = xy_positions_4p[temp_s0][sp214].y + y_positions_kind[mnVSResultsGetFighterKind(player)][temp_s0];
			break;
	}
}

// 0x80133C58
void mnVSResultsCreatePlayerIndicator(s32 player, s32 color_index)
{
	GObj* indicator_gobj;
	SObj* indicator_sobj;
	SYColorRGBPair colors[4] = {

		{ { 0x00, 0x00, 0x00 }, { 0xED, 0x36, 0x36 } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0x4E, 0xE9 } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xDF, 0x1A } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } }
	};
	intptr_t offsets[4] = {

		0x258, 0x4F8, 0x798, 0xA38
	};

	indicator_gobj = gcMakeGObjSPAfter(0, 0, 0x12, 0x80000000);
	gcAddGObjDisplay(indicator_gobj, lbCommonDrawSObjAttr, 0x1B, GOBJ_PRIORITY_DEFAULT, ~0);

	if (gSCManagerTransferBattleState.players[player].pkind == nFTPlayerKindMan)
	{
		indicator_sobj = lbCommonMakeSObjForGObj(indicator_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[1], offsets[player]));
		indicator_sobj->sprite.attr &= ~SP_FASTCOPY;
		indicator_sobj->sprite.attr |= SP_TRANSPARENT;
		indicator_sobj->envcolor.r = dIFCommonPlayerTagShadowColorsR[color_index];
		indicator_sobj->envcolor.g = dIFCommonPlayerTagShadowColorsG[color_index];
		indicator_sobj->envcolor.b = dIFCommonPlayerTagShadowColorsB[color_index];
		indicator_sobj->sprite.red = dIFCommonPlayerTagSpriteColorsR[color_index];
		indicator_sobj->sprite.green = dIFCommonPlayerTagSpriteColorsG[color_index];
		indicator_sobj->sprite.blue = dIFCommonPlayerTagSpriteColorsB[color_index];
	}
	else
	{
		indicator_sobj = lbCommonMakeSObjForGObj(indicator_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[1], &FILE_026_INDICATOR_CP_IMAGE_OFFSET));
		indicator_sobj->sprite.attr &= ~SP_FASTCOPY;
		indicator_sobj->sprite.attr |= SP_TRANSPARENT;
		indicator_sobj->envcolor.r = dIFCommonPlayerTagShadowColorsR[color_index];
		indicator_sobj->envcolor.g = dIFCommonPlayerTagShadowColorsG[color_index];
		indicator_sobj->envcolor.b = dIFCommonPlayerTagShadowColorsB[color_index];
		indicator_sobj->sprite.red = dIFCommonPlayerTagSpriteColorsR[color_index];
		indicator_sobj->sprite.green = dIFCommonPlayerTagSpriteColorsG[color_index];
		indicator_sobj->sprite.blue = dIFCommonPlayerTagSpriteColorsB[color_index];
	}

	mnVSResultsSetIndicatorPosition(indicator_gobj, player);
}

// 0x80133E7C
void mnVSResultsCreatePlayerIndicatorViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x1E, 0x08000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
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
void mnVSResultsDrawString(const char *str, f32 x, f32 y, s32 color_index, f32 scale)
{
	GObj* string_gobj;
	SObj* string_sobj;
	s32 i;
	f32 current_x;
	s32 char_index;
	f32 widths[28] = {

		35.0, 24.0, 24.0, 28.0, 22.0, 20.0, 31.0, 27.0, 9.0, 20.0, 27.0, 20.0, 37.0, 29.0,
		34.0, 24.0, 37.0, 27.0, 24.0, 24.0, 26.0, 28.0, 39.0, 31.0, 29.0, 30.0, 10.0, 8.0
	};
	intptr_t offsets[28] = {

		0x05E0, 0x09A8, 0x0D80, 0x1268, 0x1628, 0x1A00, 0x1F08, 0x2408, 0x26B8, 0x2A90, 0x2F98, 0x3358, 0x3980, 0x3E88,
		0x44B0, 0x4890, 0x4F10, 0x5418, 0x57F0, 0x5BD0, 0x60D8, 0x65D8, 0x6C00, 0x7108, 0x7608, 0x7AE8, 0x7D98, 0x7E50
	};
	SYColorRGBPair colors[5] = {

		{ { 0xFF, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } },
		{ { 0x12, 0x00, 0xD9 }, { 0xFF, 0xFF, 0xFF } },
		{ { 0x03, 0x73, 0x00 }, { 0xFF, 0xFF, 0xFF } },
		{ { 0x60, 0x03, 0xD4 }, { 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } }
	};

	current_x = x;
	string_gobj = gcMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
	gcAddGObjDisplay(string_gobj, lbCommonDrawSObjAttr, 0x1D, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			current_x += str[i] - '0';
		else
		{
			char_index = mnVSResultsGetChrIndex(str[i]);

			if (char_index == 0x1C) // space
				current_x += 10.0F * scale;
			else
			{

				string_sobj = lbCommonMakeSObjForGObj(string_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[6], offsets[char_index]));
				string_sobj->sprite.scalex = scale;
				string_sobj->pos.x = current_x;

				if (char_index == 0x1B) // .
					string_sobj->pos.y = y + 26.0F;
				else
					string_sobj->pos.y = y;

				string_sobj->sprite.attr &= ~SP_FASTCOPY;
				string_sobj->sprite.attr |= SP_TRANSPARENT;
				string_sobj->envcolor.r = colors[color_index].prim.r;
				string_sobj->envcolor.g = colors[color_index].prim.g;
				string_sobj->envcolor.b = colors[color_index].prim.b;
				string_sobj->sprite.red = colors[color_index].env.r;
				string_sobj->sprite.green = colors[color_index].env.g;
				string_sobj->sprite.blue = colors[color_index].env.b;

				current_x += widths[char_index] * scale;
			}
		}
	}
}

// 0x8013423C
void mnVSResultsDrawWinsText(s32 winner_id)
{
	char strWin[] = "W1I1N1!";
	char strWins[] = "W1I1N1S1!";
	f32 x_by_kind[12] = {

		175.0, 160.0, 150.0, 176.0, 163.0, 160.0,
		170.0, 178.0, 165.0, 172.0, 173.0, 160.0
	};
	f32 x_by_team[3] = {

		160.0,
		170.0,
		180.0
	};

	if (sMNVSResultsIsTeamBattle == TRUE)
		mnVSResultsDrawString(strWins, x_by_team[winner_id], 180.0F, 3, 1.0F);

	if (sMNVSResultsIsTeamBattle == FALSE)
		mnVSResultsDrawString(strWins, x_by_kind[winner_id], 180.0F, 3, 1.0F);
}

// 0x80134364
s32 mnVSResultsGetWinnerKind()
{
	return mnVSResultsGetFighterKind(mnVSResultsGetWinPlayer());
}

// 0x8013438C
void mnVSResultsDrawFighterWins()
{
	s32 fkind;
	char* name_strings[12] = {

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
	f32 x_positions[12] = {

		30.0, 60.0, 70.0, 25.0, 50.0, 55.0,
		30.0, 27.0, 40.0, 30.0, 27.0, 50.0
	};
	f32 scale[12] = {

		1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
		1.0, 0.7, 1.0, 0.7, 0.6, 1.0
	};

	fkind = mnVSResultsGetWinnerKind();

	mnVSResultsDrawString(name_strings[fkind], x_positions[fkind], 180.0F, 0, scale[fkind]);
	mnVSResultsDrawWinsText(fkind);
}

// 0x80134480
void mnVSResultsDrawTeamWins()
{
	u32 team_id;
	char* team_strings[9] = {

		"RED",
		"BLUE",
		"GREEN"//,
	};
	f32 x_positions[9] = {

		70.0, 60.0, 30.0,
		0.0, 0.0, 0.0,
		0.0, 0.0, 0.0
	};

	team_id = mnVSResultsGetWinningTeam();

	mnVSResultsDrawString(team_strings[team_id], x_positions[team_id], 180.0F, team_id, 1.0F);
	mnVSResultsDrawWinsText(team_id);
}

// 0x80134540
void mnVSResultsDrawNoContest()
{
	mnVSResultsDrawString("NO CONTEST", 30.0F, 180.0F, 4, 1.0f);
}

// 0x8013457C
void mnVSResultsDrawWinnerText()
{
	if (sMNVSResultsGameRule == 4)
		mnVSResultsDrawNoContest();
	else
	{
		if (sMNVSResultsIsTeamBattle == FALSE)
			mnVSResultsDrawFighterWins();

		if (sMNVSResultsIsTeamBattle == TRUE)
			mnVSResultsDrawTeamWins();
	}
}

// 0x801345E8
void mnVSResultsCreateWinnerTextViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x14, 0x20000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80134688
s32 mnVSResultsGetHundredsDigit(s32 number)
{
	if (number < 0)
		 return -(number / 100);

	return number / 100;
}

// 0x801346C0
s32 mnVSResultsGetTensDigit(s32 number)
{
	if (number < 0)
		return -((number % 100) / 10);

	return (number % 100) / 10;
}

// 0x80134718
s32 mnVSResultsGetOnesDigit(s32 number)
{
	if (number < 0)
		return -((number % 100) % 10);

	return (number % 100) % 10;
}

// 0x80134770
void mnVSResultsSetNumberColor(SObj* sobj, s32 color_index)
{
	SYColorRGBPair colors[5] = {

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
SObj* mnVSResultsCreateNumber(GObj* number_gobj, s32 number, s32 color_id)
{
	SObj* sobj;
	intptr_t offsets[10] = {

		0x068, 0x118, 0x1C8, 0x278, 0x328, 0x3D8, 0x488, 0x538, 0x5E8, 0x698
	};
	SYColorRGBPair unused_colors[5] = {

		{ { 0x00, 0x00, 0x00 }, { 0xED, 0x36, 0x36 } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0x4E, 0xE9 } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xDF, 0x1A } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } }
	};

	sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, sMNVSResultsFiles[5], offsets[number]));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	mnVSResultsSetNumberColor(sobj, color_id);

	return sobj;
}

// 0x801348F8
SObj* mnVSResultsCreatePlaceNumber(GObj* place_gobj, s32 player, s32 place, s32 color_id)
{
	SObj* place_sobj;
	intptr_t offsets[10] = {

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
void mnVSResultsRenderBackgroundOverlay(GObj* bg_overlay_gobj)
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
void mnVSResultsCreateBackgroundOverlay()
{
	sMNVSResultsBackgroundOverlayAlpha = 0xFF;
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x19, 0x80000000), mnVSResultsRenderBackgroundOverlay, 0x23, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80135028
void mnVSResultsCreateBackgroundOverlayViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000, lbCommonDrawSprite, 0x37, 0x800000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801350C8
void mnVSResultsRenderBackgroundOverlay2(GObj* bg_overlay_gobj)
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
void mnVSResultsCreateBackgroundOverlay2()
{
	sMNVSResultsBackgroundOverlay2Alpha = 0xFF;
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x18, 0x80000000), mnVSResultsRenderBackgroundOverlay2, 0x22, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x8013525C
void mnVSResultsCreateBackgroundOverlay2Viewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000, lbCommonDrawSprite, 0x46, 0x400000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801352FC
f32 mnVSResultsGetColumnX(s32 player)
{
	f32 column_x_2p[2] = {

		135.0, 215.0
	};
	f32 column_x_3p[3] = {

		125.0, 175.0, 225.0
	};
	f32 column_x_4p[4] = {

		115.0, 155.0, 195.0, 235.0
	};

	switch (mnVSResultsGetPresentCount())
	{
		case 2:
			return column_x_2p[mnVSResultsGetLowerPortCount(player)];
		case 3:
			return column_x_3p[mnVSResultsGetLowerPortCount(player)];
		case 4:
			/* fallthrough */
		default:
			return column_x_4p[mnVSResultsGetLowerPortCount(player)];
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
void mnVSResultsSetColumnPortIndicatorColors(SObj* column_port_indicator_sobj)
{
	column_port_indicator_sobj->sprite.attr &= ~SP_FASTCOPY;
	column_port_indicator_sobj->sprite.attr |= SP_TRANSPARENT;
	column_port_indicator_sobj->envcolor.r = 0;
	column_port_indicator_sobj->envcolor.g = 0;
	column_port_indicator_sobj->envcolor.b = 0;
	column_port_indicator_sobj->sprite.red = 0xFF;
	column_port_indicator_sobj->sprite.green = 0xFF;
	column_port_indicator_sobj->sprite.blue = 0xFF;
}

// 0x8013549C
void mnVSResultsCreateColumnHeaders()
{
	SObj* column_port_indicator_sobj;
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
			column_port_indicator_sobj = lbCommonMakeSObjForGObj(column_header_gobj, lbRelocGetFileData(Sprite*, sMNVSResultsFiles[0], offsets[i]));
			column_port_indicator_sobj->pos.x = mnVSResultsGetColumnX(i) + 17.0F;
			column_port_indicator_sobj->pos.y = 49.0F;
			mnVSResultsSetColumnPortIndicatorColors(column_port_indicator_sobj);

			fp = ftGetStruct(sMNVSResultsFighterGObjs[i]);

			column_stock_icon_sobj = lbCommonMakeSObjForGObj(column_header_gobj, fp->attr->sprites->stock_sprite);
			column_stock_icon_sobj->sprite.LUT = fp->attr->sprites->stock_luts[fp->costume];
			column_stock_icon_sobj->sprite.attr &= ~SP_FASTCOPY;
			column_stock_icon_sobj->sprite.attr |= SP_TRANSPARENT;
			column_stock_icon_sobj->pos.x = column_port_indicator_sobj->pos.x - 10.0F;
			column_stock_icon_sobj->pos.y = column_port_indicator_sobj->pos.y;
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
void mnVSResultsBarProcDisplay(GObj *line_gobj)
{
	f32 y = line_gobj->user_data.s;

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
void mnVSResultsSetPlacementPosition(SObj *sobj, s32 player, s32 placement, f32 y)
{
	if ((placement == 1) && (sobj->user_data.s != 0))
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
s32 mnVSResultsGetDisplayPlacement(s32 player)
{
	if
	(
		(mnVSResultsGetPresentCount() == GMCOMMON_PLAYERS_MAX) &&
		(sMNVSResultsIsTeamBattle == FALSE) &&
		(mnVSResultsGetPlayerCountByPlace(1) == 2) &&
		(sMNVSResultsPlacement[player] == 2)
	)
	{
		return GMCOMMON_PLAYERS_MAX;
	}
	else return sMNVSResultsPlacement[player] + 1;
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
			mnVSResultsSetPlacementPosition
			(
				mnVSResultsCreatePlaceNumber
				(
					gobj,
					i,
					mnVSResultsGetDisplayPlacement(i),
					mnVSResultsGetNumberColorIndex(i)
				),
				i,
				mnVSResultsGetDisplayPlacement(i),
				y
			);
		}
	}
}

// 0x80136290
void mnVSResultsDrawResults0(GObj *gobj)
{
	if (sMNVSResultsTotalTimeTics == 180)
		mnVSResultsCreateOverlay();

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
void mnVSResultsCreateLogoViewport()
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
void mnVSResultsCreateFighterViewport()
{
	CObj *cobj = CObjGetStruct((GObj*)gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000, func_80017DBC, 0x32, 0x00048600, -1, 1, 1, 0, 1, 0));
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
void mnVSResultsSetKOs()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (sMNVSResultsIsPresent[i])
			sMNVSResultsKOs[i] = gSCManagerTransferBattleState.players[i].score;
	}
}

// 0x80136B1C
void mnVSResultsSetTKO()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (sMNVSResultsIsPresent[i]) {
			sMNVSResultsTKO[i] = gSCManagerTransferBattleState.players[i].falls;
		}
	}
}

// 0x80136B9C
void mnVSResultsSetPoints()
{
	s32 i;

	for (i = 0; i < 4; i++)
		sMNVSResultsPoints[i] = mnVSResultsGetKOs(i) - mnVSResultsGetTKO(i);
}

// 0x80136C08
s32 mnVSResultsGetKOsMinusTKO(s32 player)
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
			if ((results[i].kos_minus_tkos < results[j].kos_minus_tkos) ||
				(
					(gSCManagerSceneData.is_suddendeath) &&
					(results[i].kos_minus_tkos == results[j].kos_minus_tkos) &&
					(results[j].placement < results[i].placement)
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
void mnVSResultsSetPlacementRoyal(void)
{
	MNVSResultsScore results[4];
	s32 place;
	s32 score;
	s32 winner;
	s32 players_num;
	s32 i;

	for (i = 0, players_num = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if (sMNVSResultsIsPresent[i])
		{
			results[players_num].kos_minus_tkos = mnVSResultsGetKOsMinusTKO(i);
			results[players_num].placement = gSCManagerVSBattleState.players[i].placement;
			results[players_num].player = i;
			players_num += 1;
		}
	}

	mnVSResultsOrderResults(results, players_num);

	for (i = 0, place = 0, score = results[0].kos_minus_tkos, winner = results[0].placement; i < players_num; i++)
	{
		if (score != results[i].kos_minus_tkos || ((gSCManagerSceneData.is_suddendeath) && (winner != results[i].placement)))
		{
			place += 1;
			score = results[i].kos_minus_tkos;
			winner = results[i].placement;
		}
		sMNVSResultsPlacement[results[i].player] = place;
	}
}

// 0x80136FB8
s32 mnVSResultsGetTeamKOsMinusTKO(s32 team_id)
{
	s32 i;
	s32 total = 0;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if ((sMNVSResultsIsPresent[i]) && (team_id == gSCManagerTransferBattleState.players[i].team))
			total += mnVSResultsGetKOsMinusTKO(i);
	}

	return total;
}

// 0x80137068
void mnVSResultsSetTeamPlacement(s32 team_index, s32 placement)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if ((sMNVSResultsIsPresent[i]) && (team_index == gSCManagerTransferBattleState.players[i].team))
			sMNVSResultsPlacement[i] = placement;
	}
}

// 0x80137108
s32 mnVSResultsGetFirstPortForTeam(s32 team_id)
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if ((team_id == gSCManagerTransferBattleState.players[i].team) && (gSCManagerTransferBattleState.players[i].pkind != nFTPlayerKindNot))
			return i + 1;
	}

	return 0;
}

// 0x801371B8
void mnVSResultsSetPlacementTeam()
{
	MNVSResultsScore results[4];
	s32 place;
	s32 score;
	s32 winner;
	s32 players_num;
	s32 i;

	for (i = 0, players_num = 0; i < 3; i++)
	{
		s32 j = mnVSResultsGetFirstPortForTeam(i);

		if (j != 0)
		{
			results[players_num].kos_minus_tkos = mnVSResultsGetTeamKOsMinusTKO(i);
			results[players_num].placement = gSCManagerVSBattleState.players[j - 1].placement;
			results[players_num].player = i;
			players_num++;
		}
	}

	mnVSResultsOrderResults(results, players_num);

	for (i = 0, place = 0, score = results[0].kos_minus_tkos, winner = results[0].placement; i < players_num; i++)
	{
		if (score != results[i].kos_minus_tkos || ((gSCManagerSceneData.is_suddendeath) && (winner != results[i].placement)))
		{
			place++;
			score = results[i].kos_minus_tkos;
			winner = results[i].placement;
		}
		mnVSResultsSetTeamPlacement(results[i].player, place);
	}
}

// 0x801372F4
void mnVSResultsSetPlacementTime(void)
{
	if (sMNVSResultsIsTeamBattle == FALSE)
	{
		mnVSResultsSetPlacementRoyal();
	}
	else mnVSResultsSetPlacementTeam();
}

// 0x80137334
void mnVSResultsSetPlacementStock(void)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if (sMNVSResultsIsPresent[i] != FALSE)
		{
			sMNVSResultsPlacement[i] = gSCManagerTransferBattleState.players[i].placement;
		}
	}
}

// 0x801373B4
void mnVSResultsSetArrays(void)
{
	if (gSCManagerTransferBattleState.game_rules == SCBATTLE_GAMERULE_STOCK)
	{
		mnVSResultsSetKOs();
		mnVSResultsSetTKO();
		mnVSResultsSetPoints();
		mnVSResultsSetPlacementStock();
	}
	else
	{
		mnVSResultsSetKOs();
		mnVSResultsSetTKO();
		mnVSResultsSetPoints();
		mnVSResultsSetPlacementTime();
	}
	if (sMNVSResultsGameRule == 4)
	{
		s32 i;

		for (i = 0; i < ARRAY_COUNT(sMNVSResultsPlacement); i++)
		{
			sMNVSResultsPlacement[i] = 0;
		}
	}
	mnVSResultsSetFighterKind();
}

// 0x80137454
void mnVSResultsSetIsPresent(void)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
	{
		if (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindNot)
		{
			sMNVSResultsIsPresent[i] = FALSE;
		}
		else sMNVSResultsIsPresent[i] = TRUE;
	}
}

// 0x801374F4
void mnVSResultsDrawFighter(s32 player)
{
	mnVSResultsSpawnFighter(player);
	mnVSResultsSetFighterPosition(sMNVSResultsFighterGObjs[player], player, mnVSResultsGetSpot(player));
	mnVSResultsSetFighterScale(sMNVSResultsFighterGObjs[player], player, mnVSResultsGetFighterKind(player), mnVSResultsGetSpot(player));
	mnVSResultsCreatePlayerIndicator(player, gSCManagerTransferBattleState.players[player].color);
	mnVSResultsSetFighterStatus(sMNVSResultsFighterGObjs[player], player);
}

// 0x801375AC
void mnVSResultsDrawFighters(void)
{
	s32 i;

	if (sMNVSResultsIsPresent[0] != FALSE)
	{
		mnVSResultsDrawFighter(0);
	}
	if (sMNVSResultsIsPresent[1] != FALSE)
	{
		mnVSResultsDrawFighter(1);
	}
	if (sMNVSResultsIsPresent[2] != FALSE)
	{
		mnVSResultsDrawFighter(2);
	}
	if (sMNVSResultsIsPresent[3] != FALSE)
	{
		mnVSResultsDrawFighter(3);
	}
	if (sMNVSResultsGameRule != 4)
	{
		for (i = 0; i < ARRAY_COUNT(sMNVSResultsIsPresent); i++)
		{
			if (sMNVSResultsIsPresent[i])
			{
				mnVSResultsFaceWinner(sMNVSResultsFighterGObjs[i], i, mnVSResultsGetPlacement(i));
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
		sMNVSResultsDrawWinnerTextFrame = 1;
		sMNVSResultsDrawFightersFrame = 1;
	}
	else
	{
		sMNVSResultsDrawBackgroundFrame = 80;
		sMNVSResultsDrawWinnerTextFrame = 120;
		sMNVSResultsDrawFightersFrame = 120;
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
	s32 frame = 0;
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
		if (frame & 1)
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

	// return 0x29A if there are no other humans
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
			mnVSResultsCreateBackgroundOverlay2();
		}
		mnVSResultsCreateBackground();
	}
	if (sMNVSResultsTotalTimeTics == sMNVSResultsDrawWinnerTextFrame)
	{
		mnVSResultsDrawWinnerText();
		mnVSResultsCreateScreenTitle();

		if (sMNVSResultsGameRule != 4)
		{
			mnVSResultsMakeConfetti();
		}
	}
	if (sMNVSResultsTotalTimeTics == sMNVSResultsDrawFightersFrame)
	{
		mnVSResultsDrawFighters();
	}
	if (sMNVSResultsDrawFightersFrame < sMNVSResultsTotalTimeTics)
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
	if (mnVSResultsCheckStartPressed())
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
	mnVSResultsSaveDataToSRAM();
	mnVSResultsInitVars();
	mnVSResultsSetIsPresent();
	mnVSResultsSetArrays();

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
	mnVSResultsCreateLogoViewport();
	mnVSResultsCreateFighterViewport();
	mnVSResultsCreatePlayerIndicatorViewport();
	mnVSResultsCreateWinnerTextViewport();
	mnVSResultsCreateOverlayViewport();
	mnVSResultsCreateResultsSYRdpViewport();
	mnVSResultsCreateBackgroundOverlayViewport();
	mnVSResultsCreateBackgroundOverlay2Viewport();

	if (sMNVSResultsGameRule != 4)
	{
		mnVSResultsCreateLogo();
	}
	mnVSResultsCreateBackgroundOverlay();
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
