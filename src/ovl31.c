#include <sys/develop.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <sys/video.h>
#include <lb/library.h>


typedef struct gmResultsTemp
{
	s32 kos_minus_tkos;
	s32 placement;
	s32 port_id;

} gmResultsTemp;

typedef struct halAudioUnknown
{
	s32 unks[13];
	s32 unk34;

} halAudioUnknown;


#define AttributesGetStruct(fp) \
((FTAttributes*)fp->attr)
#define FTSpritesGetStruct(fa) \
((FTSprites*)fa->sprites)


// Externs
extern f32 dSCSubsysFighterScales[12];           // 0x80390D90
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay31ArenaLo;  // 0x8013A070
extern intptr_t lOverlay31ArenaHi;  // 0x803903E0
extern intptr_t FILE_022_TKO_TEXTURE_IMAGE_OFFSET; // file 0x022 image offset for TKO texture
extern intptr_t FILE_022_PLACE_TEXTURE_IMAGE_OFFSET; // file 0x022 image offset for Place texture
extern intptr_t FILE_022_POINTS_TEXTURE_IMAGE_OFFSET; // file 0x022 image offset for Pts texture
extern intptr_t FILE_022_KOS_TEXTURE_IMAGE_OFFSET; // file 0x022 image offset for KOs texture
extern intptr_t FILE_022_BACKGROUND_IMAGE_OFFSET; // file 0x022 image offset for background image
extern intptr_t FILE_022_FIRST_PLACE_ICON_IMAGE_OFFSET; // file 0x022 image offset for 1st place icon
extern intptr_t FILE_024_DASH_IMAGE_OFFSET; // file 0x024 image offset for dash
extern intptr_t FILE_026_INDICATOR_CP_IMAGE_OFFSET; // file 0x026 image offset for CPU player indicator
extern intptr_t FILE_0A4_1_IMAGE_OFFSET; // file 0x0A4 image offset for number 1

extern void scSubsysFighterSetLightParams(f32 light_angle_x, f32 light_angle_y, u8 r, u8 g, u8 b, u8 a);


extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);
extern f32 scSubsysFighterGetLightAngleX();
extern f32 scSubsysFighterGetLightAngleY();
extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern void* func_800269C0_275C0(u16);
extern void lbTransitionFuncDisplay();
extern void lbTransitionProcUpdate();

extern u8 dIFCommonPlayerTagShadowColorsR[];
extern u8 dIFCommonPlayerTagShadowColorsG[];
extern u8 dIFCommonPlayerTagShadowColorsB[];
extern u8 dIFCommonPlayerTagSpriteColorsR[];
extern u8 dIFCommonPlayerTagSpriteColorsG[];
extern u8 dIFCommonPlayerTagSpriteColorsB[];
extern halAudioUnknown* auBGMPlayers;


// Forward declarations
void mnVSResultsInit();
void mnVSResultsDrawResults0(s32 arg0);
void mnVSResultsDrawResults1(s32 arg0);
void mnVSResultsDrawResults2(s32 arg0);
void mnVSResultsDrawResults3(s32 arg0);
void mnVSResultsDrawResultsNoContest(s32 arg0);
u8 mnVSResultsGetWinningTeam();
s32 mnVSResultsGetWinnerPort();
s32 mnVSResultsGetFighterKind(s32 port_id);
s32 mnVSResultsGetKOsMinusTKOs(s32 port_id);
s32 mnVSResultsGetPlayerCountByPlace(s32 place);


// Data
// 0x80138EF0
s32 D_ovl31_80138EF0[] = {

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
s32 D_ovl31_80138F10[] = {

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
s32 D_ovl31_80138F30[] = {

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
s32 D_ovl31_80138F50[] = {

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
u32 D_ovl31_80138F70[8] = {

	0x22,
	0x26,
	0x12,
	0xA4,
	0x23,
	0x24,
	0x25,
	0x19
};

// 0x80138F90
s32 D_ovl31_80138F90[] = {

	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x0A0A3C00,
	0x00000000
};

// BSS
// 0x801398A0
s32 D_ovl31_801398A0[182];

// 0x80139B78 frames elapsed on Results screen
s32 gMNVSResultsTotalTimeTics;

// 0x80139B7C
s32 gMNVSResultsHorizontalLineWidth;

// 0x80139B80
s32 gMNVSResultsKOs[4];

// 0x80139B90
s32 gMNVSResultsTKOs[4];

// 0x80139BA0;
s32 gMNVSResultsPoints[4];

// 0x80139BB0
s32 gMNVSResultsPlacement[4];

// 0x80139BC0
u32 gMNVSResultsOverlayAlpha;

// 0x80139BC4
s32 gMNVSResultsBackgroundOverlayAlpha;

// 0x80139BC8
s32 gMNVSResultsBackgroundOverlay2Alpha;

// 0x80139BD0
sb32 gMNVSResultsIsPresent[4];

// 0x80139BE0
GObj* gMNVSResultsFighterGObjs[4];

// 0x80139BF0
s32 gMNVSResultsFTKind[4];

// 0x80139C00
void* gMNVSResultsFigatreeHeaps[4];

// 0x80139C10
s32 gMNVSResultsGameRule;

// 0x80139C14
ub8 gMNVSResultsIsTeamBattle;

// 0x80139C18 frames to wait until pressing start will exit the Results screen
s32 gMNVSResultsMinTotalTimeTics;

// 0x80139C20
sb32 gMNVSResultsIsSharedWinner[4];

// 0x80139C30
sb32 D_ovl31_80139C30[4];

// 0x80139C40
s32 gMNVSResultsCharacterAlpha;

// 0x80139C44
s32 gMNVSResultsDrawBackgroundFrame;

// 0x80139C48
s32 gMNVSResultsDrawWinnerTextFrame;

// 0x80139C4C
s32 gMNVSResultsDrawFightersFrame;

// 0x80139C50
u32 D_ovl31_80139C50[240];

// 0x8013A010
LBFileNode D_ovl31_8013A010;

// 0x8013A018
s32 D_ovl31_8013A018[12];

// 0x8013A048
void *gMNVSResultsFiles[8];

// 0x80131B20
void mnVSResultsFuncLights(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
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

	if (gMNVSResultsTotalTimeTics >= gMNVSResultsMinTotalTimeTics)
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

	if (gMNVSResultsGameRule == 4)
	{
		// No Contest
		switch (gMNVSResultsTotalTimeTics)
		{
			case 0x2:
				func_800269C0_275C0(0x1F6U);
				return;
			case 0x47:
				func_800269C0_275C0(0x270U);
				return;
		}
	}
	else if (!gMNVSResultsIsTeamBattle)
	{
		// FFA - "This Game's Winner Is..."
		switch (gMNVSResultsTotalTimeTics)
		{
			case 0x51:
				func_800269C0_275C0(0x216U);
				return;
			case 0xD2:
				func_800269C0_275C0(announcer_names[mnVSResultsGetFighterKind(mnVSResultsGetWinnerPort())]);
				return;
			case 0x10E:
				func_800269C0_275C0(0x272U);
				return;
		}
	}
	else
	{
		// Teams - "Red/Blue/Grean Team Wins!"
		switch (gMNVSResultsTotalTimeTics)
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

	for (i = 0; i < ARRAY_COUNT(gMNVSResultsIsPresent); i++)
	{
		if (gMNVSResultsIsPresent[i] == TRUE)
			sum += 1;
	}

	return sum;
}

// 0x801320B8
s32 mnVSResultsGetLowerPortCount(s32 port_id) {
	s32 i;
	s32 sum = 0;

	for (i = 0; i < ARRAY_COUNT(gMNVSResultsIsPresent); i++)
	{
		if (port_id != i)
		{
			if (gMNVSResultsIsPresent[i] == TRUE)
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

	for (i = 0; i < ARRAY_COUNT(gMNVSResultsIsPresent); i++)
	{
		if ((gMNVSResultsIsPresent[i]) && (place == gMNVSResultsPlacement[i]))
			return i;
	}

	return -1;
}

// 0x801321AC
s32 func_ovl31_801321AC(s32 port_id)
{
	s32 num_opponents;
	s32 num_players;

	num_opponents = mnVSResultsGetLowerPortCount(port_id);

	if (mnVSResultsGetPlayerCountByPlace(0) == 1)
	{
		switch (mnVSResultsGetPresentCount())
		{
			case 2:
				break;
			case 3:
				if (gMNVSResultsPlacement[port_id] == 0)
				{
					switch (mnVSResultsGetLowerPortCount(port_id))
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
					if (mnVSResultsGetLowerPortCount(port_id) == 1)
						num_opponents = mnVSResultsGetLowerPortCount(mnVSResultsGetPortByPlace(0));
				}
				break;
			default:
				switch (port_id)
				{
					case 0:
						if ((gMNVSResultsPlacement[0] == 0) && (gMNVSResultsPlacement[1] != 0))
							num_opponents = 1;
						break;
					case 1:
						if ((gMNVSResultsPlacement[0] == 0) && (gMNVSResultsPlacement[1] != 0))
							num_opponents = 0;
						break;
					case 2:
						if ((gMNVSResultsPlacement[3] == 0) && (gMNVSResultsPlacement[2] != 0))
							num_opponents = 3;
						break;
					case 3:
						if ((gMNVSResultsPlacement[3] == 0) && (gMNVSResultsPlacement[2] != 0))
							num_opponents = 2;
						break;
				}
				break;
		}
	}

	return num_opponents;
}

// 0x8013234C
s32 mnVSResultsGetWinnerPort()
{
	s32 i;
	sb32 potential_first_place[4];
	s32 kos_minus_tkos[4];
	s32 winner_port_id = 0x29A;
	sb32 multi_winner[4];
	sb32 is_multi_winner;
	int foo;

	// If FFA, use place
	if ((gMNVSResultsGameRule == nSCBattleGameRuleTime) || (gMNVSResultsGameRule == nSCBattleGameRuleStock))
	{
		for (i = 0; i < 4; i++)
		{
			if ((gMNVSResultsIsPresent[i] == TRUE) && (gMNVSResultsPlacement[i] == 0))
				return i;
		}
	}
	else
	{
		// If here, it's teams

		// Get KOs minus TKOs for each port
		for (i = 0; i < 4; i++)
			kos_minus_tkos[i] = mnVSResultsGetKOsMinusTKOs(i); // gets kos minus tkos

		// Set lowest present port to winner and remember which ports may be the winner
		for (i = 0; i < 4; i++)
		{
			if ((gMNVSResultsIsPresent[i]) && (gMNVSResultsPlacement[i] == 0))
			{
				if (winner_port_id == 0x29A)
					winner_port_id = i;

				potential_first_place[i] = TRUE;
			}
			else
				potential_first_place[i] = FALSE;
		}

		// Initialize as no multi winners
		for (i = 0; i < 4; i++)
			multi_winner[i] = FALSE;

		// Get the winner port based on highest KOs minus TKOs score
		for (i = winner_port_id + 1; i < 4; i++)
		{
			if ((potential_first_place[i]) && (kos_minus_tkos[winner_port_id] < kos_minus_tkos[i]))
				winner_port_id = i;
		}

		is_multi_winner = FALSE;

		// Figure out if any potential winners have the same KOs minus TKOs score
		for (i = winner_port_id + 1; i < 4; i++)
		{
			if ((potential_first_place[i]) && (kos_minus_tkos[winner_port_id] == kos_minus_tkos[i]))
			{
				multi_winner[winner_port_id] = multi_winner[i] = TRUE;
				is_multi_winner = TRUE;
			}
		}

		if (is_multi_winner)
		{
			// Break the tie based on number of KOs
			for (i = winner_port_id + 1; i < 4; i++)
			{
				if ((multi_winner[i]) && (gMNVSResultsKOs[winner_port_id] < gMNVSResultsKOs[i]))
					winner_port_id = i;
			}

			for (i = 0; i < 4; i++)
			{
				gMNVSResultsIsSharedWinner[i] = FALSE;
			}

			for (i = winner_port_id + 1; i < 4; i++)
			{
				if (gMNVSResultsKOs[winner_port_id] == gMNVSResultsKOs[i])
				{
					gMNVSResultsIsSharedWinner[i] = TRUE;
					gMNVSResultsIsSharedWinner[winner_port_id] = TRUE;
				}
			}
		}

		return winner_port_id;
	}
}

// 0x80132A2C
u8 mnVSResultsGetWinningTeam()
{
	return gSCManagerTransferBattleState.players[mnVSResultsGetWinnerPort()].team;
}

// 0x80132A68
void mnVSResultsAnimateLogo(GObj* logo_gobj)
{
	f32 new_scale;
	f32 min_scale = 10.0F;
	f32 max_y = 1000.0F;

	if (gMNVSResultsTotalTimeTics >= 0x28)
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
	s32 winner_port_id;
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

	if (gMNVSResultsIsTeamBattle == FALSE)
	{
		winner_port_id = mnVSResultsGetWinnerPort();
		winner_char_id = mnVSResultsGetFighterKind(winner_port_id);
		color = winner_port_id;
	}

	if (gMNVSResultsIsTeamBattle == TRUE)
	{
		winner_char_id = mnVSResultsGetFighterKind(mnVSResultsGetWinnerPort());
		color = colors[mnVSResultsGetWinningTeam()];
	}

	logo_gobj = gcMakeGObjSPAfter(0, 0, 0x17, 0x80000000);

	gcSetupCommonDObjs(logo_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[4], offsets1[winner_char_id]), 0);
	gcAddGObjDisplay(logo_gobj, gcDrawDObjTreeForGObj, 0x21, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddMObjAll(logo_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[4], offsets2[winner_char_id]));
	gcAddMatAnimJointAll(logo_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[4], offsets3[winner_char_id]), color);
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
	s32 winner_port_id;
	SYColorRGBPair unused_colors[4] = {

		{{ 0xAB, 0x31, 0x25 }, { 0xAF, 0x56, 0x4E }},
		{{ 0x00, 0x3F, 0xFF }, { 0x39, 0x6A, 0xFF }},
		{{ 0xDE, 0xB2, 0x00 }, { 0xFF, 0xD7, 0x33 }},
		{{ 0x17, 0x7E, 0x43 }, { 0x2A, 0x98, 0x45 }}
	};
	uintptr_t unused_array_pointers[4] = {

		D_ovl31_80138EF0,
		D_ovl31_80138F30,
		D_ovl31_80138F50,
		D_ovl31_80138F10
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

	if (gMNVSResultsGameRule == 4)
		winner_port_id = mtTrigGetRandomIntRange(4);
	else
	{
		if (gMNVSResultsIsTeamBattle == FALSE)
			winner_port_id = mnVSResultsGetWinnerPort();

		if (gMNVSResultsIsTeamBattle == TRUE)
			winner_port_id = team_colors[mnVSResultsGetWinningTeam()];
	}

	bg_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(bg_gobj, mnVSResultsRenderBackground, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0);

	bg_sobj = lbCommonMakeSObjForGObj(bg_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[0], &FILE_022_BACKGROUND_IMAGE_OFFSET));

	SObjGetStruct(bg_gobj)->pos.x = 10.0f;
	SObjGetStruct(bg_gobj)->pos.y = 10.0f;
	bg_sobj->envcolor.r = colors[winner_port_id].prim.r;
	bg_sobj->envcolor.g = colors[winner_port_id].prim.g;
	bg_sobj->envcolor.b = colors[winner_port_id].prim.b;
	bg_sobj->sprite.red = colors[winner_port_id].env.r;
	bg_sobj->sprite.green = colors[winner_port_id].env.g;
	bg_sobj->sprite.blue = colors[winner_port_id].env.b;
}

// 0x80133134
s32 mnVSResultsGetPlacement(s32 port_id)
{
	return gMNVSResultsPlacement[port_id];
}

// 0x80133148
s32 mnVSResultsGetFighterKind(s32 port_id)
{
	return gMNVSResultsFTKind[port_id];
}

// 0x8013315C
void mnVSResultsSetFighterKind()
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gMNVSResultsIsPresent); i++)
	{
		if (gMNVSResultsIsPresent[i])
			gMNVSResultsFTKind[i] = gSCManagerTransferBattleState.players[i].fkind;
	}
}

// 0x801331DC
void mnVSResultsSetFighterPosition(GObj* fighter_gobj, s32 port_id, s32 place)
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
			DObjGetStruct(fighter_gobj)->translate.vec.f.x = x_positions_2p[func_ovl31_801321AC(port_id)][place];
			break;
		case 3:
			DObjGetStruct(fighter_gobj)->translate.vec.f.x = x_positions_3p[func_ovl31_801321AC(port_id)][place];
			break;
		case 4:
		default:
			DObjGetStruct(fighter_gobj)->translate.vec.f.x = x_positions_4p[func_ovl31_801321AC(port_id)][place];
			break;
	}

	DObjGetStruct(fighter_gobj)->translate.vec.f.y = yz_positions[place].x;
	DObjGetStruct(fighter_gobj)->translate.vec.f.z = yz_positions[place].y;
}

// 0x801333E4
void mnVSResultsMakeFighterFaceWinner(GObj* fighter_gobj, s32 port_id, s32 place)
{
	s32 winner_port_id = mnVSResultsGetWinnerPort();

	if (place != 0)
	{
		DObj* fighter_dobj = DObjGetStruct(fighter_gobj);
		DObj* winner_dobj = DObjGetStruct(gMNVSResultsFighterGObjs[winner_port_id]);
		f32 x1 = fighter_dobj->translate.vec.f.x;
		f32 z1 = fighter_dobj->translate.vec.f.z;
		f32 x2 = winner_dobj->translate.vec.f.x;
		f32 z2 = winner_dobj->translate.vec.f.z;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = atan2f(x2 - x1, z2 - z1);
	}
}

// 0x8013345C
s32 mnVSResultsGetVictoryAnim(s32 fkind)
{
	s32 victory_anims[3] = {

		0x10001, 0x10002, 0x10003
	};

	if (fkind == nFTKindKirby)
		return victory_anims[mtTrigGetRandomIntRange(2)];
	else
		return victory_anims[mtTrigGetRandomIntRange(3)];
}

// 0x801334CC
s32 mnVSResultsGetDefeatedAnim(s32 fkind)
{
	return 0x10005;
}

// 0x801334DC
void mnVSResultsSetAnim(GObj* fighter_gobj, s32 port_id)
{
	if (gMNVSResultsGameRule == 4)
	{
		scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetDefeatedAnim(mnVSResultsGetFighterKind(port_id)));
		return;
	}

	switch (mnVSResultsGetPresentCount())
	{
		case 2:
			switch (gMNVSResultsPlacement[port_id])
			{
				case 0:
					scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetVictoryAnim(mnVSResultsGetFighterKind(port_id)));
					return;
				case 1:
					scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetDefeatedAnim(mnVSResultsGetFighterKind(port_id)));
					return;
			}
			break;
		case 3:
			if (gMNVSResultsPlacement[port_id] == 0)
			{
				scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetVictoryAnim(mnVSResultsGetFighterKind(port_id)));
				return;
			}
			else
			{
				scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetDefeatedAnim(mnVSResultsGetFighterKind(port_id)));
				return;
			}
		case 4:
		default:
			if (gMNVSResultsPlacement[port_id] == 0)
			{
				scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetVictoryAnim(mnVSResultsGetFighterKind(port_id)));
				return;
			}
			else
			{
				scSubsysFighterSetStatus(fighter_gobj, mnVSResultsGetDefeatedAnim(mnVSResultsGetFighterKind(port_id)));
				return;
			}
	}
}

// 0x80133684
s32 mnVSResultsGetPlayerCountByPlace(s32 place)
{
	s32 sum = 0;
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if ((gMNVSResultsIsPresent[i]) && (place == gMNVSResultsPlacement[i]))
			sum += 1;
	}

	return sum;
}

// 0x80133718
s32 mnVSResultsGetPlayerCountAhead(s32 port_id)
{
	s32 sum = 0;
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if ((port_id != i) && (gMNVSResultsIsPresent[i]) && (gMNVSResultsPlacement[i] < gMNVSResultsPlacement[port_id]))
			sum += 1;
	}

	return sum;
}

// 0x80133810
s32 func_ovl31_80133810(s32 port_id)
{
	s32 sp40[4] = {

		0, 0, 1, 1
	};
	s32 sp2C[5] = {

		0, 0, 1, 1, 1
	};

	return  gMNVSResultsPlacement[port_id] + sp40[gMNVSResultsPlacement[port_id] - mnVSResultsGetPlayerCountAhead(port_id)] + sp2C[mnVSResultsGetPlayerCountByPlace(gMNVSResultsPlacement[port_id])];
}

// 0x801338EC
void mnVSResultsSetFighterScale(GObj* fighter_gobj, s32 port_id, s32 fkind, s32 place)
{
	DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysFighterScales[fkind];
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysFighterScales[fkind];
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysFighterScales[fkind];
}

// 0x8013392C
void mnVSResultsSpawnFighter(s32 port_id)
{
	s32 foo, bar, baz;
	FTDesc desc = dFTManagerDefaultFighterDesc;

	desc.fkind = mnVSResultsGetFighterKind(port_id);
	desc.costume = gSCManagerTransferBattleState.players[port_id].costume;
	desc.shade = gSCManagerTransferBattleState.players[port_id].shade;
	desc.figatree_heap = gMNVSResultsFigatreeHeaps[port_id];
	gMNVSResultsFighterGObjs[port_id] = ftManagerMakeFighter(&desc);
}

// 0x801339F4
void mnVSResultsSetIndicatorPosition(GObj* indicator_gobj, s32 port_id)
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

	sp214 = func_ovl31_80133810(port_id);
	temp_s0 = func_ovl31_801321AC(port_id);

	switch (mnVSResultsGetPresentCount())
	{
		case 2:
			SObjGetStruct(indicator_gobj)->pos.x = xy_positions_2p[temp_s0][sp214].x;
			SObjGetStruct(indicator_gobj)->pos.y = xy_positions_2p[temp_s0][sp214].y + y_positions_kind[mnVSResultsGetFighterKind(port_id)][temp_s0];
			break;
		case 3:
			SObjGetStruct(indicator_gobj)->pos.x = xy_positions_3p[temp_s0][sp214].x;
			SObjGetStruct(indicator_gobj)->pos.y = xy_positions_3p[temp_s0][sp214].y + y_positions_kind[mnVSResultsGetFighterKind(port_id)][temp_s0];
			break;
		case 4:
		default:
			SObjGetStruct(indicator_gobj)->pos.x = xy_positions_4p[temp_s0][sp214].x;
			SObjGetStruct(indicator_gobj)->pos.y = xy_positions_4p[temp_s0][sp214].y + y_positions_kind[mnVSResultsGetFighterKind(port_id)][temp_s0]    ;
			break;
	}
}

// 0x80133C58
void mnVSResultsCreatePlayerIndicator(s32 port_id, s32 color_index)
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

	if (gSCManagerTransferBattleState.players[port_id].pkind == 0)
	{
		indicator_sobj = lbCommonMakeSObjForGObj(indicator_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[1], offsets[port_id]));
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
		indicator_sobj = lbCommonMakeSObjForGObj(indicator_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[1], &FILE_026_INDICATOR_CP_IMAGE_OFFSET));
		indicator_sobj->sprite.attr &= ~SP_FASTCOPY;
		indicator_sobj->sprite.attr |= SP_TRANSPARENT;
		indicator_sobj->envcolor.r = dIFCommonPlayerTagShadowColorsR[color_index];
		indicator_sobj->envcolor.g = dIFCommonPlayerTagShadowColorsG[color_index];
		indicator_sobj->envcolor.b = dIFCommonPlayerTagShadowColorsB[color_index];
		indicator_sobj->sprite.red = dIFCommonPlayerTagSpriteColorsR[color_index];
		indicator_sobj->sprite.green = dIFCommonPlayerTagSpriteColorsG[color_index];
		indicator_sobj->sprite.blue = dIFCommonPlayerTagSpriteColorsB[color_index];
	}

	mnVSResultsSetIndicatorPosition(indicator_gobj, port_id);
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

				string_sobj = lbCommonMakeSObjForGObj(string_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[6], offsets[char_index]));
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

	if (gMNVSResultsIsTeamBattle == TRUE)
		mnVSResultsDrawString(strWins, x_by_team[winner_id], 180.0F, 3, 1.0F);

	if (gMNVSResultsIsTeamBattle == FALSE)
		mnVSResultsDrawString(strWins, x_by_kind[winner_id], 180.0F, 3, 1.0F);
}

// 0x80134364
s32 mnVSResultsGetWinnerKind()
{
	return mnVSResultsGetFighterKind(mnVSResultsGetWinnerPort());
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
	if (gMNVSResultsGameRule == 4)
		mnVSResultsDrawNoContest();
	else
	{
		if (gMNVSResultsIsTeamBattle == FALSE)
			mnVSResultsDrawFighterWins();

		if (gMNVSResultsIsTeamBattle == TRUE)
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
void mnVSResultsSetNumberColor(SObj* number_sobj, s32 color_index)
{
	SYColorRGBPair colors[5] = {

		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0x82, 0x82 } },
		{ { 0x00, 0x00, 0x00 }, { 0x91, 0xC0, 0xFF } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xDF, 0x1A } },
		{ { 0x00, 0x00, 0x00 }, { 0x9F, 0xFF, 0x9F } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } }
	};

	number_sobj->envcolor.r = colors[color_index].prim.r;
	number_sobj->envcolor.g = colors[color_index].prim.g;
	number_sobj->envcolor.b = colors[color_index].prim.b;
	number_sobj->sprite.red = colors[color_index].env.r;
	number_sobj->sprite.green = colors[color_index].env.g;
	number_sobj->sprite.blue = colors[color_index].env.b;
}

// 0x80134808
SObj* mnVSResultsCreateNumber(GObj* number_gobj, s32 number, s32 color_id)
{
	SObj* number_sobj;
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

	number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[5], offsets[number]));
	number_sobj->sprite.attr &= ~SP_FASTCOPY;
	number_sobj->sprite.attr |= SP_TRANSPARENT;
	mnVSResultsSetNumberColor(number_sobj, color_id);

	return number_sobj;
}

// 0x801348F8
SObj* mnVSResultsCreatePlaceNumber(GObj* place_gobj, s32 port_id, s32 place, s32 color_id)
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
		if (gMNVSResultsIsTeamBattle == TRUE)
		{
			if ((mnVSResultsGetWinnerPort() == port_id) || (gMNVSResultsIsSharedWinner[port_id]))
			{
				place_sobj = lbCommonMakeSObjForGObj(place_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[0], &FILE_022_FIRST_PLACE_ICON_IMAGE_OFFSET));
				place_sobj->user_data.s = 1;
			}
			else
			{
				place_sobj = lbCommonMakeSObjForGObj(place_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[3], &FILE_0A4_1_IMAGE_OFFSET));
				place_sobj->user_data.s = 0;
				mnVSResultsSetNumberColor(place_sobj, color_id);
			}
		}
		else
		{
			place_sobj = lbCommonMakeSObjForGObj(place_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[0], &FILE_022_FIRST_PLACE_ICON_IMAGE_OFFSET));
			place_sobj->user_data.s = 1;
		}

		place_sobj->sprite.attr &= ~SP_FASTCOPY;
		place_sobj->sprite.attr |= SP_TRANSPARENT;
	}
	else
	{
		place_sobj = lbCommonMakeSObjForGObj(place_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[3], offsets[place]));
		place_sobj->sprite.attr &= ~SP_FASTCOPY;
		place_sobj->sprite.attr |= SP_TRANSPARENT;
		mnVSResultsSetNumberColor(place_sobj, color_id);
	}
	return place_sobj;
}

// 0x80134AC4
void mnVSResultsDrawNumber(GObj* number_gobj, f32 x, f32 y, s32 number, s32 color_id)
{
	SObj* number_sobj;
	s32 hundreds_digit;
	s32 tens_digit;

	if (number < 0)
	{
		number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[5], &FILE_024_DASH_IMAGE_OFFSET));

		if (mnVSResultsGetHundredsDigit(number) != 0)
			number_sobj->pos.x = x;
		else
		{
			if (mnVSResultsGetTensDigit(number) != 0)
				number_sobj->pos.x = x + 8.0F;
			else
				number_sobj->pos.x = x + 16.0F;
		}
		number_sobj->pos.y = y + 3.0F;
		number_sobj->sprite.attr &= ~SP_FASTCOPY;
		number_sobj->sprite.attr |= SP_TRANSPARENT;

		mnVSResultsSetNumberColor(number_sobj, color_id);
	}

	hundreds_digit = mnVSResultsGetHundredsDigit(number);

	if (hundreds_digit != 0)
	{
		number_sobj = mnVSResultsCreateNumber(number_gobj, hundreds_digit, color_id);
		number_sobj->pos.x = x + 8.0F;
		number_sobj->pos.y = y;
	}

	tens_digit = mnVSResultsGetTensDigit(number);

	if ((tens_digit != 0) || (hundreds_digit != 0))
	{
		number_sobj = mnVSResultsCreateNumber(number_gobj, tens_digit, color_id);
		number_sobj->pos.x = x + 16.0F;
		number_sobj->pos.y = y;
	}

	number_sobj = mnVSResultsCreateNumber(number_gobj, mnVSResultsGetOnesDigit(number), color_id);
	number_sobj->pos.x = x + 24.0F;
	number_sobj->pos.y = y;
}

// 0x80134C5C
void mnVSResultsRenderOverlay(GObj* overlay_gobj)
{
	if (gMNVSResultsOverlayAlpha < 0x80)
	{
		gMNVSResultsOverlayAlpha += 9;

		if (gMNVSResultsOverlayAlpha > 0x80)
			gMNVSResultsOverlayAlpha = 0x80;
	}

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 0, 0, gMNVSResultsOverlayAlpha);
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
	gMNVSResultsOverlayAlpha = 0;
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
	if (gMNVSResultsBackgroundOverlayAlpha > 0)
	{
		gMNVSResultsBackgroundOverlayAlpha -= 5;

		if (gMNVSResultsBackgroundOverlayAlpha < 0)
			gcEjectGObj(bg_overlay_gobj);
	}

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 0, 0, gMNVSResultsBackgroundOverlayAlpha);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80134FD0
void mnVSResultsCreateBackgroundOverlay()
{
	gMNVSResultsBackgroundOverlayAlpha = 0xFF;
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
	if (gMNVSResultsBackgroundOverlay2Alpha > 0)
	{
		gMNVSResultsBackgroundOverlay2Alpha -= 5;

		if (gMNVSResultsBackgroundOverlay2Alpha < 0)
			gcEjectGObj(bg_overlay_gobj);
	}

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 0, 0, gMNVSResultsBackgroundOverlay2Alpha);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80135204
void mnVSResultsCreateBackgroundOverlay2()
{
	gMNVSResultsBackgroundOverlay2Alpha = 0xFF;
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
f32 mnVSResultsGetColumnX(s32 port_id)
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
			return column_x_2p[mnVSResultsGetLowerPortCount(port_id)];
		case 3:
			return column_x_3p[mnVSResultsGetLowerPortCount(port_id)];
		case 4:
			/* fallthrough */
		default:
			return column_x_4p[mnVSResultsGetLowerPortCount(port_id)];
	}
}

// 0x801353F4
s32 mnVSResultsGetNumberColorIndex(s32 port_id)
{
	s32 color_ids[3] = {

		0, 1, 3
	};

	if (gMNVSResultsIsTeamBattle != TRUE)
		return 4;

	return color_ids[gSCManagerTransferBattleState.players[port_id].team];
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
	FTStruct* ft_struct;

	column_header_gobj = gcMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
	gcAddGObjDisplay(column_header_gobj, lbCommonDrawSObjAttr, 0x1F, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = 0; i < 4; i++)
	{
		if (gMNVSResultsIsPresent[i])
		{
			column_port_indicator_sobj = lbCommonMakeSObjForGObj(column_header_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[0], offsets[i]));
			column_port_indicator_sobj->pos.x = mnVSResultsGetColumnX(i) + 17.0F;
			column_port_indicator_sobj->pos.y = 49.0F;
			mnVSResultsSetColumnPortIndicatorColors(column_port_indicator_sobj);

			ft_struct = ftGetStruct(gMNVSResultsFighterGObjs[i]);

			column_stock_icon_sobj = lbCommonMakeSObjForGObj(column_header_gobj, FTSpritesGetStruct(AttributesGetStruct(ft_struct))->stock_sprite);
			column_stock_icon_sobj->sprite.LUT = FTSpritesGetStruct(AttributesGetStruct(ft_struct))->stock_luts[ft_struct->costume];
			column_stock_icon_sobj->sprite.attr &= ~SP_FASTCOPY;
			column_stock_icon_sobj->sprite.attr |= SP_TRANSPARENT;
			column_stock_icon_sobj->pos.x = column_port_indicator_sobj->pos.x - 10.0F;
			column_stock_icon_sobj->pos.y = column_port_indicator_sobj->pos.y;
		}
	}
}

// 0x80135670
s32 mnVSResultsGetKOs(s32 port_id)
{
	if (gMNVSResultsKOs[port_id] >= 1000)
		return 999;

	return gMNVSResultsKOs[port_id];
}

// 0x8013569C
void mnVSResultsDrawKOs(s32 y)
{
	GObj* kos_row_gobj;

	kos_row_gobj = lbCommonMakeSpriteGObj(0, 0, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1F, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, gMNVSResultsFiles[0], &FILE_022_KOS_TEXTURE_IMAGE_OFFSET), 1, 0, 1);
	SObjGetStruct(kos_row_gobj)->pos.x = 26.0F;
	SObjGetStruct(kos_row_gobj)->pos.y = y;
	SObjGetStruct(kos_row_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(kos_row_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(kos_row_gobj)->sprite.red = 0;
	SObjGetStruct(kos_row_gobj)->sprite.green = 0;
	SObjGetStruct(kos_row_gobj)->sprite.blue = 0;
	SObjGetStruct(kos_row_gobj)->sprite.red = 0xFF;
	SObjGetStruct(kos_row_gobj)->sprite.green = 0xFF;
	SObjGetStruct(kos_row_gobj)->sprite.blue = 0xFF;

	if (gMNVSResultsIsPresent[0])
		mnVSResultsDrawNumber(kos_row_gobj, mnVSResultsGetColumnX(0), y, mnVSResultsGetKOs(0), mnVSResultsGetNumberColorIndex(0));

	if (gMNVSResultsIsPresent[1])
		mnVSResultsDrawNumber(kos_row_gobj, mnVSResultsGetColumnX(1), y, mnVSResultsGetKOs(1), mnVSResultsGetNumberColorIndex(1));

	if (gMNVSResultsIsPresent[2])
		mnVSResultsDrawNumber(kos_row_gobj, mnVSResultsGetColumnX(2), y, mnVSResultsGetKOs(2), mnVSResultsGetNumberColorIndex(2));

	if (gMNVSResultsIsPresent[3])
		mnVSResultsDrawNumber(kos_row_gobj, mnVSResultsGetColumnX(3), y, mnVSResultsGetKOs(3), mnVSResultsGetNumberColorIndex(3));
}

// 0x801358C4
s32 mnVSResultsGetTKOs(s32 port_id)
{
	if (gMNVSResultsTKOs[port_id] >= 1000)
		return 999;

	return gMNVSResultsTKOs[port_id];
}

// 0x801358F0
void mnVSResultsDrawTKOs(s32 y)
{
	GObj* tkos_row_gobj;
	SObj* negative_symbol_sobj;

	tkos_row_gobj = lbCommonMakeSpriteGObj(0, 0, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1F, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, gMNVSResultsFiles[0], &FILE_022_TKO_TEXTURE_IMAGE_OFFSET), 1, 0, 1);
	SObjGetStruct(tkos_row_gobj)->pos.x = 26.0F;
	SObjGetStruct(tkos_row_gobj)->pos.y = y;
	SObjGetStruct(tkos_row_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(tkos_row_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(tkos_row_gobj)->sprite.red = 0;
	SObjGetStruct(tkos_row_gobj)->sprite.green = 0;
	SObjGetStruct(tkos_row_gobj)->sprite.blue = 0;
	SObjGetStruct(tkos_row_gobj)->sprite.red = 0xFF;
	SObjGetStruct(tkos_row_gobj)->sprite.green = 0xFF;
	SObjGetStruct(tkos_row_gobj)->sprite.blue = 0xFF;

	if (gMNVSResultsGameRule != 4)
	{
		negative_symbol_sobj = lbCommonMakeSObjForGObj(tkos_row_gobj, lbRelocGetFileData(void*, gMNVSResultsFiles[5], &FILE_024_DASH_IMAGE_OFFSET));
		negative_symbol_sobj->pos.x = 90.0F;
		negative_symbol_sobj->pos.y = y + 3;
		negative_symbol_sobj->sprite.attr &= ~SP_FASTCOPY;
		negative_symbol_sobj->sprite.attr |= SP_TRANSPARENT;
	}

	if (gMNVSResultsIsPresent[0])
		mnVSResultsDrawNumber(tkos_row_gobj, mnVSResultsGetColumnX(0), y, mnVSResultsGetTKOs(0), mnVSResultsGetNumberColorIndex(0));

	if (gMNVSResultsIsPresent[1])
		mnVSResultsDrawNumber(tkos_row_gobj, mnVSResultsGetColumnX(1), y, mnVSResultsGetTKOs(1), mnVSResultsGetNumberColorIndex(1));

	if (gMNVSResultsIsPresent[2])
		mnVSResultsDrawNumber(tkos_row_gobj, mnVSResultsGetColumnX(2), y, mnVSResultsGetTKOs(2), mnVSResultsGetNumberColorIndex(2));

	if (gMNVSResultsIsPresent[3])
		mnVSResultsDrawNumber(tkos_row_gobj, mnVSResultsGetColumnX(3), y, mnVSResultsGetTKOs(3), mnVSResultsGetNumberColorIndex(3));
}

// 0x80135B78
void mnVSResultsRenderHorizontalLine(GObj* line_gobj)
{
	f32 y = line_gobj->user_data.s;

	gMNVSResultsHorizontalLineWidth += 10;
	if (gMNVSResultsHorizontalLineWidth > 190)
		gMNVSResultsHorizontalLineWidth = 190;

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_FILL);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_NOOP, G_RM_NOOP2);
	gDPSetFillColor(gSYTaskmanDLHeads[0]++, syVideoGetFillColor(0xFFFFFFFF));
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 87, y, 87 + gMNVSResultsHorizontalLineWidth, y);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

	lbCommonClearExternSpriteParams();
}

// 0x80135D58
void mnVSResultsCreateHorizontalLine(s32 y)
{
	GObj* horizontal_line_gobj;

	horizontal_line_gobj = gcMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
	gcAddGObjDisplay(horizontal_line_gobj, mnVSResultsRenderHorizontalLine, 0x1F, GOBJ_PRIORITY_DEFAULT, ~0);
	horizontal_line_gobj->user_data.s = y;
}

// 0x80135DB8
s32 mnVSResultsGetPoints(s32 port_id)
{
	return gMNVSResultsPoints[port_id];
}

// 0x80135DCC
void mnVSResultsDrawPointsRow()
{
	GObj* points_row_gobj;

	points_row_gobj = lbCommonMakeSpriteGObj(0, 0, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1F, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, gMNVSResultsFiles[0], &FILE_022_POINTS_TEXTURE_IMAGE_OFFSET), 1, 0, 1);
	SObjGetStruct(points_row_gobj)->pos.x = 26.0F;
	SObjGetStruct(points_row_gobj)->pos.y = 104.0F;
	SObjGetStruct(points_row_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(points_row_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(points_row_gobj)->sprite.red = 0;
	SObjGetStruct(points_row_gobj)->sprite.green = 0;
	SObjGetStruct(points_row_gobj)->sprite.blue = 0;
	SObjGetStruct(points_row_gobj)->sprite.red = 0xFF;
	SObjGetStruct(points_row_gobj)->sprite.green = 0xFF;
	SObjGetStruct(points_row_gobj)->sprite.blue = 0xFF;

	if (gMNVSResultsIsPresent[0])
		mnVSResultsDrawNumber(points_row_gobj, mnVSResultsGetColumnX(0), 104.0F, mnVSResultsGetPoints(0), mnVSResultsGetNumberColorIndex(0));

	if (gMNVSResultsIsPresent[1])
		mnVSResultsDrawNumber(points_row_gobj, mnVSResultsGetColumnX(1), 104.0F, mnVSResultsGetPoints(1), mnVSResultsGetNumberColorIndex(1));

	if (gMNVSResultsIsPresent[2])
		mnVSResultsDrawNumber(points_row_gobj, mnVSResultsGetColumnX(2), 104.0F, mnVSResultsGetPoints(2), mnVSResultsGetNumberColorIndex(2));

	if (gMNVSResultsIsPresent[3])
		mnVSResultsDrawNumber(points_row_gobj, mnVSResultsGetColumnX(3), 104.0F, mnVSResultsGetPoints(3), mnVSResultsGetNumberColorIndex(3));
}

// 0x80135FE8 - Unused?
void func_ovl31_80135FE8() {}

// 0x80135FF0
void mnVSResultsPositionPlaceNumber(SObj* number_sobj, s32 port_id, s32 place, f32 y)
{
	if ((place == 1) && (number_sobj->user_data.s != 0))
	{
		number_sobj->pos.x = mnVSResultsGetColumnX(port_id) + 2.0F;
		number_sobj->pos.y = y;
	}
	else
	{
		number_sobj->pos.x = mnVSResultsGetColumnX(port_id) + 15.0F;
		number_sobj->pos.y = y;
	}
}

// 0x8013607C
s32 mnVSResultsGetPlaceForDisplay(s32 port_id)
{
	if ((mnVSResultsGetPresentCount() == 4) &&
		(!gMNVSResultsIsTeamBattle) &&
		(mnVSResultsGetPlayerCountByPlace(1) == 2) &&
		(gMNVSResultsPlacement[port_id] == 2))
	{
		return 4;
	}
	else
		return gMNVSResultsPlacement[port_id] + 1;
}

// 0x80136100
void mnVSResultsDrawPlaceRow(s32 y)
{
	GObj* place_row_gobj;
	s32 i;

	place_row_gobj = lbCommonMakeSpriteGObj(0, 0, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1F, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, gMNVSResultsFiles[0], &FILE_022_PLACE_TEXTURE_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(place_row_gobj)->pos.x = 10.0F;
	SObjGetStruct(place_row_gobj)->pos.y = y;
	SObjGetStruct(place_row_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(place_row_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(place_row_gobj)->sprite.red = 0;
	SObjGetStruct(place_row_gobj)->sprite.green = 0;
	SObjGetStruct(place_row_gobj)->sprite.blue = 0;
	SObjGetStruct(place_row_gobj)->sprite.red = 0xFF;
	SObjGetStruct(place_row_gobj)->sprite.green = 0xFF;
	SObjGetStruct(place_row_gobj)->sprite.blue = 0xFF;

	for (i = 0; i < 4; i++)
	{
		if (gMNVSResultsIsPresent[i]) {
			mnVSResultsPositionPlaceNumber(mnVSResultsCreatePlaceNumber(place_row_gobj, i, mnVSResultsGetPlaceForDisplay(i), mnVSResultsGetNumberColorIndex(i)), i, mnVSResultsGetPlaceForDisplay(i), y);
		}
	}
}

// 0x80136290
void mnVSResultsDrawResults0(s32 arg0)
{
	if (gMNVSResultsTotalTimeTics == 0xB4)
		mnVSResultsCreateOverlay();

	if (gMNVSResultsTotalTimeTics == 0xD2)
	{
		mnVSResultsCreateColumnHeaders();
		mnVSResultsDrawKOs(0x42);
	}

	if (gMNVSResultsTotalTimeTics == 0xE6)
		mnVSResultsDrawTKOs(0x51);

	if (gMNVSResultsTotalTimeTics == 0xFA)
		mnVSResultsCreateHorizontalLine(0x62);

	if (gMNVSResultsTotalTimeTics == 0x10E)
		mnVSResultsDrawPointsRow();

	if (gMNVSResultsTotalTimeTics == 0x122)
		mnVSResultsDrawPlaceRow(0x7C);
}

// 0x80136358
void mnVSResultsDrawResults1(s32 arg0)
{
	if (gMNVSResultsTotalTimeTics == 0xB4)
		mnVSResultsCreateOverlay();

	if (gMNVSResultsTotalTimeTics == 0xD2)
		mnVSResultsDrawPlaceRow(0x42);

	if (gMNVSResultsTotalTimeTics == 0xE6)
		mnVSResultsCreateHorizontalLine(0x6E);

	if (gMNVSResultsTotalTimeTics == 0xFA)
	{
		mnVSResultsCreateColumnHeaders();
		mnVSResultsDrawKOs(0x7C);
	}
}

// 0x801363E8
void mnVSResultsDrawResults2(s32 arg0)
{
	if (gMNVSResultsTotalTimeTics == 0xB4)
		mnVSResultsCreateOverlay();

	if (gMNVSResultsTotalTimeTics == 0xD2)
	{
		mnVSResultsCreateColumnHeaders();
		mnVSResultsDrawKOs(0x42);
	}

	if (gMNVSResultsTotalTimeTics == 0xE6)
		mnVSResultsDrawTKOs(0x51);

	if (gMNVSResultsTotalTimeTics == 0xFA)
		mnVSResultsCreateHorizontalLine(0x62);

	if (gMNVSResultsTotalTimeTics == 0x10E)
		mnVSResultsDrawPointsRow();

	if (gMNVSResultsTotalTimeTics == 0x122)
		mnVSResultsDrawPlaceRow(0x7C);
}

// 0x801364B0
void mnVSResultsDrawResults3(s32 arg0)
{
	if (gMNVSResultsTotalTimeTics == 0xB4)
		mnVSResultsCreateOverlay();

	if (gMNVSResultsTotalTimeTics == 0xD2)
		mnVSResultsDrawPlaceRow(0x42);

	if (gMNVSResultsTotalTimeTics == 0xE6)
		mnVSResultsCreateHorizontalLine(0x6E);

	if (gMNVSResultsTotalTimeTics == 0xFA)
	{
		mnVSResultsCreateColumnHeaders();
		mnVSResultsDrawKOs(0x7C);
	}
}

// 0x80136540
void mnVSResultsDrawResultsNoContest(s32 arg0)
{
	if (gMNVSResultsTotalTimeTics == 0x1E)
		mnVSResultsCreateOverlay();

	if (gMNVSResultsTotalTimeTics == 0x3C)
	{
		mnVSResultsCreateColumnHeaders();
		mnVSResultsDrawKOs(0x42);
	}

	if (gMNVSResultsTotalTimeTics == 0x50)
		mnVSResultsDrawTKOs(0x51);
}

// 0x801365B4
u8 mnVSResultsGetIsTeamBattle()
{
	return gMNVSResultsIsTeamBattle;
}

// 0x801365C0
void mnVSResultsRenderScreenTitle(s32 screen_title_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_FILL);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_NOOP, G_RM_NOOP2);
	gDPSetFillColor(gSYTaskmanDLHeads[0]++, syVideoGetFillColor(0xFFFFFFFF));
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 32, 42, 282, 44);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

	lbCommonClearExternSpriteParams();
	lbCommonDrawSObjAttr(screen_title_gobj);

	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
}

// 0x801396B8
f32 D_ovl31_801396B8[] = {

	140.0, 180.0, 120.0, 160.0, 200.0, 100.0, 140.0, 180.0, 220.0
};

// 0x801366F0
void mnVSResultsCreateScreenTitle()
{
	GObj* screen_title_gobj;
	intptr_t offsets[2] = {

		0x280, 0x4E0
	};
	uintptr_t results_routines[5] = {

		mnVSResultsDrawResults0,
		mnVSResultsDrawResults1,
		mnVSResultsDrawResults2,
		mnVSResultsDrawResults3,
		mnVSResultsDrawResultsNoContest
	};

	screen_title_gobj = lbCommonMakeSpriteGObj(0, 0, 0x16, 0x80000000, mnVSResultsRenderScreenTitle, 0x1F, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, gMNVSResultsFiles[2], offsets[mnVSResultsGetIsTeamBattle()]), 1, results_routines[gMNVSResultsGameRule], 1);
	SObjGetStruct(screen_title_gobj)->pos.x = 32.0f;
	SObjGetStruct(screen_title_gobj)->pos.y = 29.0f;
	SObjGetStruct(screen_title_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(screen_title_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(screen_title_gobj)->sprite.red = 0xFF;
	SObjGetStruct(screen_title_gobj)->sprite.green = 0xFF;
	SObjGetStruct(screen_title_gobj)->sprite.blue = 0xFF;
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
		if (gMNVSResultsIsPresent[i])
			gMNVSResultsKOs[i] = gSCManagerTransferBattleState.players[i].score;
	}
}

// 0x80136B1C
void mnVSResultsSetTKOs()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMNVSResultsIsPresent[i]) {
			gMNVSResultsTKOs[i] = gSCManagerTransferBattleState.players[i].falls;
		}
	}
}

// 0x80136B9C
void mnVSResultsSetPoints()
{
	s32 i;

	for (i = 0; i < 4; i++)
		gMNVSResultsPoints[i] = mnVSResultsGetKOs(i) - mnVSResultsGetTKOs(i);
}

// 0x80136C08
s32 mnVSResultsGetKOsMinusTKOs(s32 port_id)
{
	return gMNVSResultsKOs[port_id] - gMNVSResultsTKOs[port_id];
}

// 0x80136C2C
void mnVSResultsOrderResults(gmResultsTemp *results, s32 num_players)
{
	gmResultsTemp temp;
	s32 i, j;

	for (i = 0; i < num_players; i++)
	{
		for (j = i + 1; j < num_players; j++)
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
void mnVSResultsSetPlacementFFA()
{
	gmResultsTemp results[4];
	s32 place;
	s32 score;
	s32 winner;
	s32 num_players;
	s32 i;

	for (i = 0, num_players = 0; i < ARRAY_COUNT(gMNVSResultsIsPresent); i++)
	{
		if (gMNVSResultsIsPresent[i])
		{
			results[num_players].kos_minus_tkos = mnVSResultsGetKOsMinusTKOs(i);
			results[num_players].placement = gSCManagerVSBattleState.players[i].placement;
			results[num_players].port_id = i;
			num_players += 1;
		}
	}

	mnVSResultsOrderResults(results, num_players);

	for (i = 0, place = 0, score = results[0].kos_minus_tkos, winner = results[0].placement; i < num_players; i++)
	{
		if (score != results[i].kos_minus_tkos || ((gSCManagerSceneData.is_suddendeath) && (winner != results[i].placement)))
		{
			place += 1;
			score = results[i].kos_minus_tkos;
			winner = results[i].placement;
		}
		gMNVSResultsPlacement[results[i].port_id] = place;
	}
}

// 0x80136FB8
s32 mnVSResultsGetTeamKOsMinusTKOs(s32 team_id)
{
	s32 i;
	s32 total = 0;

	for (i = 0; i < ARRAY_COUNT(gMNVSResultsIsPresent); i++)
	{
		if ((gMNVSResultsIsPresent[i]) && (team_id == gSCManagerTransferBattleState.players[i].team))
			total += mnVSResultsGetKOsMinusTKOs(i);
	}

	return total;
}

// 0x80137068
void mnVSResultsSetTeamPlacement(s32 team_index, s32 placement)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gMNVSResultsIsPresent); i++)
	{
		if ((gMNVSResultsIsPresent[i]) && (team_index == gSCManagerTransferBattleState.players[i].team))
			gMNVSResultsPlacement[i] = placement;
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
	gmResultsTemp results[4];
	s32 place;
	s32 score;
	s32 winner;
	s32 num_players;
	s32 i;

	for (i = 0, num_players = 0; i < 3; i++)
	{
		s32 j = mnVSResultsGetFirstPortForTeam(i);

		if (j != 0)
		{
			results[num_players].kos_minus_tkos = mnVSResultsGetTeamKOsMinusTKOs(i);
			results[num_players].placement = gSCManagerVSBattleState.players[j - 1].placement;
			results[num_players].port_id = i;
			num_players += 1;
		}
	}

	mnVSResultsOrderResults(results, num_players);

	for (i = 0, place = 0, score = results[0].kos_minus_tkos, winner = results[0].placement; i < num_players; i++)
	{
		if (score != results[i].kos_minus_tkos || ((gSCManagerSceneData.is_suddendeath) && (winner != results[i].placement)))
		{
			place += 1;
			score = results[i].kos_minus_tkos;
			winner = results[i].placement;
		}
		mnVSResultsSetTeamPlacement(results[i].port_id, place);
	}
}

// 0x801372F4
void mnVSResultsSetPlacementTime()
{
	if (!gMNVSResultsIsTeamBattle)
		mnVSResultsSetPlacementFFA();
	else
		mnVSResultsSetPlacementTeam();
}

// 0x80137334
void mnVSResultsSetPlacementStock()
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gMNVSResultsIsPresent); i++)
	{
		if (gMNVSResultsIsPresent[i])
			gMNVSResultsPlacement[i] = gSCManagerTransferBattleState.players[i].placement;
	}
}

// 0x801373B4
void mnVSResultsSetArrays()
{
	if (gSCManagerTransferBattleState.game_rules == SCBATTLE_GAMERULE_STOCK)
	{
		mnVSResultsSetKOs();
		mnVSResultsSetTKOs();
		mnVSResultsSetPoints();
		mnVSResultsSetPlacementStock();
	}
	else
	{
		mnVSResultsSetKOs();
		mnVSResultsSetTKOs();
		mnVSResultsSetPoints();
		mnVSResultsSetPlacementTime();
	}

	if (gMNVSResultsGameRule == 4)
	{
		s32 i, j;

		for (i = 0; i < ARRAY_COUNT(gMNVSResultsPlacement); i++)
			gMNVSResultsPlacement[i] = 0;
	}

	mnVSResultsSetFighterKind();
}

// 0x80137454
void mnVSResultsSetIsPresent()
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gMNVSResultsIsPresent); i++)
	{
		if (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindNot)
			gMNVSResultsIsPresent[i] = FALSE;
		else
			gMNVSResultsIsPresent[i] = TRUE;
	}
}

// 0x801374F4
void mnVSResultsDrawFighter(s32 port_id)
{
	mnVSResultsSpawnFighter(port_id);
	mnVSResultsSetFighterPosition(gMNVSResultsFighterGObjs[port_id], port_id, func_ovl31_80133810(port_id));
	mnVSResultsSetFighterScale(gMNVSResultsFighterGObjs[port_id], port_id, mnVSResultsGetFighterKind(port_id), func_ovl31_80133810(port_id));
	mnVSResultsCreatePlayerIndicator(port_id, gSCManagerTransferBattleState.players[port_id].color);
	mnVSResultsSetAnim(gMNVSResultsFighterGObjs[port_id], port_id);
}

// 0x801375AC
void mnVSResultsDrawFighters()
{
	s32 i;

	if (gMNVSResultsIsPresent[0])
		mnVSResultsDrawFighter(0);

	if (gMNVSResultsIsPresent[1])
		mnVSResultsDrawFighter(1);

	if (gMNVSResultsIsPresent[2])
		mnVSResultsDrawFighter(2);

	if (gMNVSResultsIsPresent[3])
		mnVSResultsDrawFighter(3);

	if (gMNVSResultsGameRule != 4)
	{
		for (i = 0; i < ARRAY_COUNT(gMNVSResultsIsPresent); i++)
		{
			if (gMNVSResultsIsPresent[i])
				mnVSResultsMakeFighterFaceWinner(gMNVSResultsFighterGObjs[i], i, mnVSResultsGetPlacement(i));
		}
	}
}

// 0x80137698
void mnVSResultsLoadMatchInfo()
{
	s32 i;

	gMNVSResultsTotalTimeTics = 0;
	gMNVSResultsHorizontalLineWidth = 0;
	gMNVSResultsCharacterAlpha = 0;
	gMNVSResultsIsTeamBattle = gSCManagerTransferBattleState.is_team_battle;

	for (i = 0; i < ARRAY_COUNT(gMNVSResultsIsSharedWinner); i++)
		gMNVSResultsIsSharedWinner[i] = 0;

	if (gSCManagerTransferBattleState.game_rules == SCBATTLE_GAMERULE_TIME)
	{
		if (gMNVSResultsIsTeamBattle == FALSE)
			gMNVSResultsGameRule = 0;
		else
			gMNVSResultsGameRule = 2;

		gMNVSResultsMinTotalTimeTics = 0x19A;
	}
	else
	{
		if (gMNVSResultsIsTeamBattle == FALSE)
			gMNVSResultsGameRule = 1;
		else
			gMNVSResultsGameRule = 3;

		gMNVSResultsMinTotalTimeTics = 0x172;
	}


	if (gSCManagerSceneData.is_reset)
	{
		gMNVSResultsGameRule = 4;
		gMNVSResultsMinTotalTimeTics = 0xC8;

		gMNVSResultsDrawBackgroundFrame = 1;
		gMNVSResultsDrawWinnerTextFrame = 1;
		gMNVSResultsDrawFightersFrame = 1;
	}
	else
	{
		gMNVSResultsDrawBackgroundFrame = 0x50;
		gMNVSResultsDrawWinnerTextFrame = 0x78;
		gMNVSResultsDrawFightersFrame = 0x78;
	}
}

// 0x801377C0
void func_ovl31_801377C0(s32 arg0)
{
	while (auBGMPlayers->unk34 == 0)
		gcStopCurrentGObjThread(1);

	while (TRUE)
	{
		if (auBGMPlayers->unk34 == 0)
		{
			auPlaySong(0, 0x16);
			gcEjectGObj(0);
		}
		gcStopCurrentGObjThread(1);
	}
}

// 0x80137854
void func_ovl31_80137854()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000), func_ovl31_801377C0, 0, 1);
}

// 0x80137898
void func_ovl31_80137898(s32 arg0)
{
	s32 frame = 0;
	s32 winner = mnVSResultsGetWinnerPort();

	while (TRUE)
	{
		frame += 1;

		if (frame == 0x78)
		{
			func_800044B4(winner);
			func_80004494(winner);
			gcEjectGObj(0);
			gcStopCurrentGObjThread(1);
		}

		if (frame & 1)
			func_80004474(winner);
		else
			func_80004494(winner);

		gcStopCurrentGObjThread(1);
	}
}

// 0x80137938
void func_ovl31_80137938()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0, 0, 0xF, 0x80000000), func_ovl31_80137898, 0, 1);
}

// 0x8013797C
void func_ovl31_8013797C()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		func_800044B4(i);
		func_80004494(i);
	}
}

// 0x801379C4
s32 mnVSResultsGetHumanCount()
{
	s32 i, total = 0;

	for (i = 0; i < 4; i++)
	{
		if (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindMan)
			total += 1;
	}

	return total;
}

// 0x80137A1C
s32 mnVSResultsGetBestHuman()
{
	s32 i;
	sb32 is_human[4];
	s32 first_human;
	sb32 tie_exists;

	// determine if human or cpu
	for (i = 0; i < 4; i++)
		is_human[i] = (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindMan) ? TRUE : FALSE;

	// determine port_id of first human
	for (i = 0; i < 4; i++)
	{
		if (is_human[i])
		{
			first_human = i;
			break;
		}
	}

	tie_exists = FALSE;

	// determine the human with the most points and if any humans have the same points total
	for (i = first_human; i < 4; i++)
	{
		if (is_human[i])
		{
			if (gMNVSResultsPoints[first_human] == gMNVSResultsPoints[i])
				tie_exists = TRUE;

			if (gMNVSResultsPoints[first_human] < gMNVSResultsPoints[i])
				first_human = i;
		}
	}

	// break the tie based on the handicap level
	if (tie_exists)
	{
		for (i = first_human; i < 4; i++)
		{
			if (
				(is_human[i]) &&
				(gMNVSResultsPoints[first_human] == gMNVSResultsPoints[i]) &&
				(gSCManagerTransferBattleState.players[first_human].handicap < gSCManagerTransferBattleState.players[i].handicap)
			)
			{
				first_human = i;
			}
		}
	}

	return first_human;
}

// 0x80137E34
s32 mnVSResultsGetBestHumanOtherThan(s32 port_id)
{
	s32 i;
	sb32 is_human[4];
	s32 first_human;
	s32 var_a1;

	// determine if human or cpu
	for (i = 0; i < 4; i++)
	{
		is_human[i] = (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindMan) ? TRUE : FALSE;
	}

	// determine port_id of first human - shouldn't have been commented out! first_human is undefined below!
	// for (i = 0; i < 4; i++)
	// {
	//     if (is_human[i] && port_id != i)
	//     {
	//         first_human = i;
	//         break;
	//     }
	// }

	// if a human exists with the same score, return that one
	for (i = first_human; i < 4; i++)
	{
		if (is_human[i] && port_id != i && gMNVSResultsPoints[port_id] == gMNVSResultsPoints[i])
			return i;
	}

	var_a1 = 0x29A;

	for (i = 0; i < 4; i++)
	{
		if (is_human[i] && port_id != i)
			var_a1 = i;
	}

	// return 0x29A if there are no other humans
	if (var_a1 == 0x29A) {
		return 0x29A;
	}

	// return the other human with the highest score
	for (i = 0; i < 4; i++)
	{
		if (is_human[i] && port_id != i && var_a1 != i && gMNVSResultsPoints[var_a1] < gMNVSResultsPoints[i])
			var_a1 = i;
	}

	return var_a1;
}

// 0x80138130
s32 mnVSResultsGetWorstHuman()
{
	s32 i;
	sb32 is_human[4];
	s32 first_human;
	sb32 tie_exists;

	// determine if human or cpu
	for (i = 0; i < 4; i++)
		is_human[i] = (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindMan) ? TRUE : FALSE;

	// determine port_id of first human
	for (i = 0; i < 4; i++)
	{
		if (is_human[i])
		{
			first_human = i;
			break;
		}
	}

	tie_exists = FALSE;

	// determine the human with the least points and if any humans have the same points total
	for (i = first_human; i < 4; i++)
	{
		if (is_human[i])
		{
			if (gMNVSResultsPoints[first_human] == gMNVSResultsPoints[i])
				tie_exists = TRUE;

			if (gMNVSResultsPoints[first_human] > gMNVSResultsPoints[i])
				first_human = i;
		}
	}

	// break the tie based on the handicap level
	if (tie_exists)
	{
		for (i = first_human; i < 4; i++)
		{
			if (
				(is_human[i]) &&
				(gMNVSResultsPoints[first_human] == gMNVSResultsPoints[i]) &&
				(gSCManagerTransferBattleState.players[first_human].handicap > gSCManagerTransferBattleState.players[i].handicap)
			)
			{
				first_human = i;
			}
		}
	}

	return first_human;
}

// 0x80138548
void mnVSResultsSetAutoHandicaps(s32 best_human_port_id, s32 worst_human_port_id)
{
	s32 handicap_0 = gSCManagerTransferBattleState.players[best_human_port_id].handicap;
	s32 handicap_1 = gSCManagerTransferBattleState.players[worst_human_port_id].handicap;
	s32 other_human_port_id;

	if ((handicap_0 == 1) && (handicap_1 == 9))
	{
		return;
	}
	else if ((handicap_0 > 1) && (handicap_1 < 9))
	{
		gSCManagerTransferBattleState.players[best_human_port_id].handicap--;
		gSCManagerTransferBattleState.players[worst_human_port_id].handicap++;
	}
	else if ((handicap_0 == 1) && (handicap_1 < 8))
	{
		gSCManagerTransferBattleState.players[worst_human_port_id].handicap += 2;
	}
	else if ((handicap_0 > 2) && (handicap_1 == 9))
	{
		gSCManagerTransferBattleState.players[best_human_port_id].handicap -= 2;
	}
	else if ((handicap_0 == 1) && (handicap_1 == 8))
	{
		other_human_port_id = mnVSResultsGetBestHumanOtherThan(best_human_port_id);

		if (other_human_port_id != 0x29A)
		{
			gSCManagerTransferBattleState.players[other_human_port_id].handicap--;
			gSCManagerTransferBattleState.players[worst_human_port_id].handicap++;
		}
	}
	else if ((handicap_0 == 2) && (handicap_1 == 9))
	{
		other_human_port_id = mnVSResultsGetBestHumanOtherThan(best_human_port_id);

		if (other_human_port_id != 0x29A)
		{
			gSCManagerTransferBattleState.players[best_human_port_id].handicap--;
			gSCManagerTransferBattleState.players[other_human_port_id].handicap--;
		}
	}
}

// 0x801386BC
void mnVSResultsAutoHandicap()
{
	if ((gMNVSResultsGameRule != 4) && (mnVSResultsGetHumanCount() >= 2))
	{
		mnVSResultsSetAutoHandicaps(mnVSResultsGetBestHuman(), mnVSResultsGetWorstHuman());
	}
}

// 0x80138714
void mnVSResultsPlayVictoryTheme()
{
	switch (mnVSResultsGetFighterKind(mnVSResultsGetWinnerPort()))
	{
		case nFTKindMario:
		case nFTKindLuigi:
			auPlaySong(0, 0xC);
			return;
		case nFTKindFox:
			auPlaySong(0, 0x10);
			return;
		case nFTKindDonkey:
			auPlaySong(0, 0xE);
			return;
		case nFTKindSamus:
			auPlaySong(0, 0xD);
			return;
		case nFTKindLink:
			auPlaySong(0, 0x15);
			return;
		case nFTKindYoshi:
			auPlaySong(0, 0x12);
			return;
		case nFTKindCaptain:
			auPlaySong(0, 0x13);
			return;
		case nFTKindPikachu:
		case nFTKindPurin:
			auPlaySong(0, 0x14);
			return;
		case nFTKindKirby:
			auPlaySong(0, 0xF);
			return;
		case nFTKindNess:
			auPlaySong(0, 0x11);
			return;
		default:
			auPlaySong(0, 0xB);
			return;
	}
}

// 0x80138830
void func_ovl31_80138830()
{
	f32 sp2C[3] = {

		0.0, 1000.0, -400.0
	};
	f32 sp20[3] = {

		0.0, 1000.0, -1000.0
	};
	s32 foo;

	efManagerConfettiMakeEffect(sp20, 0);
	efManagerConfettiMakeEffect(sp2C, 1);
}

// 0x801388A4 - Unused?
void func_ovl31_801388A4() {}

// 0x801388AC
void mnVSResultsMain(s32 arg0)
{
	s32 unlocked_features;
	u16 sp_game_complete_mask;
	s32 i;

	gMNVSResultsTotalTimeTics += 1;

	if (gMNVSResultsTotalTimeTics == gMNVSResultsDrawBackgroundFrame)
	{
		if (gMNVSResultsGameRule != 4)
			mnVSResultsCreateBackgroundOverlay2();

		mnVSResultsCreateBackground();
	}

	if (gMNVSResultsTotalTimeTics == gMNVSResultsDrawWinnerTextFrame)
	{
		mnVSResultsDrawWinnerText();
		mnVSResultsCreateScreenTitle();

		if (gMNVSResultsGameRule != 4)
			func_ovl31_80138830();
	}

	if (gMNVSResultsTotalTimeTics == gMNVSResultsDrawFightersFrame)
	{
		mnVSResultsDrawFighters();
	}

	if (gMNVSResultsDrawFightersFrame < gMNVSResultsTotalTimeTics)
	{
		if (gMNVSResultsCharacterAlpha < 0xFF)
		{
			gMNVSResultsCharacterAlpha += 0x16;

			if (gMNVSResultsCharacterAlpha >= 0x100)
				gMNVSResultsCharacterAlpha = 0xFF;
		}

		scSubsysFighterSetLightParams(10.0F, 10.0F, 0xFF, 0xFF, 0xFF, gMNVSResultsCharacterAlpha);
	}

	mnVSResultsAnnounceWinner();

	if ((gMNVSResultsGameRule != 4) && (gMNVSResultsTotalTimeTics == 0x78))
	{
		mnVSResultsPlayVictoryTheme();
		func_ovl31_80137854();
	}

	if (mnVSResultsCheckStartPressed())
	{
		unlocked_features = 0;

		if (!(gSCManagerBackupData.unlock_mask & LBBACKUP_UNLOCK_MASK_ITEMSWITCH) && (gSCManagerBackupData.vs_itemswitch_battles >= 100))
		{
			gSCManagerSceneData.unlock_messages[unlocked_features] = nLBBackupUnlockItemSwitch;
			unlocked_features = 1;
		}

		if (!(gSCManagerBackupData.unlock_mask & LBBACKUP_UNLOCK_MASK_INISHIE))
		{
			if ((gSCManagerBackupData.ground_mask & LBBACKUP_GROUND_MASK_ALL) == LBBACKUP_GROUND_MASK_ALL)
			{
				for (i = 0, sp_game_complete_mask = 0; i < 12; i++)
				{
					if (gSCManagerBackupData.spgame_records[i].is_spgame_complete)
						sp_game_complete_mask |= (1 << i);
				}

				if ((sp_game_complete_mask & LBBACKUP_CHARACTER_MASK_STARTER) == LBBACKUP_CHARACTER_MASK_STARTER)
				{
					gSCManagerSceneData.unlock_messages[unlocked_features] = nLBBackupUnlockInishie;
					unlocked_features += 1;
				}
			}
		}

		if (unlocked_features != 0)
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = 0xC;
		}
		else
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = 0x10;
		}

		func_800266A0_272A0();
		auStopBGM();
		syTaskmanSetLoadScene();
	}
}

// 0x80139710
SYVideoSetup D_ovl31_80139710 = {

	&gSYFramebufferSets[0],
	&gSYFramebufferSets[1],
	&gSYFramebufferSets[2],
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 0x8013972C
scRuntimeInfo D_ovl31_8013972C = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay31ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004E20, 0x00000400,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mnVSResultsFuncLights, syControllerFuncRead,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mnVSResultsInit,
};

// 0x80138B70
void mnVSResultsInit()
{
	LBRelocSetup rl_setup;
	s32 i;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (LBFileNode*) &D_ovl31_80139C50;
	rl_setup.status_buffer_size = 0x78;
	rl_setup.force_status_buffer = (LBFileNode*) &D_ovl31_8013A010;
	rl_setup.force_status_buffer_size = 7;
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl31_80138F70, ARRAY_COUNT(D_ovl31_80138F70), gMNVSResultsFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl31_80138F70, ARRAY_COUNT(D_ovl31_80138F70)), 0x10));

	gcMakeGObjSPAfter(0, mnVSResultsMain, 0, 0x80000000U);
	gcMakeDefaultCameraGObj(0, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_FILLCOLOR | COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	efParticleInitAll();
	efManagerInitEffects();
	ftManagerAllocFighter(1, 4);

	for (i = 0; i < 12; i++)
		ftManagerSetupFilesAllKind(i);

	for (i = 0; i < ARRAY_COUNT(gMNVSResultsFigatreeHeaps); i++)
		gMNVSResultsFigatreeHeaps[i] = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);

	mnVSResultsSaveDataToSRAM();
	mnVSResultsLoadMatchInfo();
	mnVSResultsSetIsPresent();
	mnVSResultsSetArrays();

	if (gSCManagerTransferBattleState.handicap == 2) // AUTO
		mnVSResultsAutoHandicap();

	if (gMNVSResultsGameRule != 4)
	{
		lbTransitionSetupTransition();
		lbTransitionMakeCamera(0x20000002, 0, 0xA, 0x100000000);
		lbTransitionMakeTransition(mtTrigGetRandomIntRange(0xB), 0x20000000, 0, lbTransitionFuncDisplay, 0x20, lbTransitionProcUpdate);
	}

	mnVSResultsCreateLogoViewport();
	mnVSResultsCreateFighterViewport();
	mnVSResultsCreatePlayerIndicatorViewport();
	mnVSResultsCreateWinnerTextViewport();
	mnVSResultsCreateOverlayViewport();
	mnVSResultsCreateResultsSYRdpViewport();
	mnVSResultsCreateBackgroundOverlayViewport();
	mnVSResultsCreateBackgroundOverlay2Viewport();

	if (gMNVSResultsGameRule != 4)
		mnVSResultsCreateLogo();

	mnVSResultsCreateBackgroundOverlay();
	func_ovl31_8013797C();

	if ((gMNVSResultsGameRule != 4) && (gSCManagerTransferBattleState.players[mnVSResultsGetWinnerPort()].pkind == nFTPlayerKindMan))
		func_ovl31_80137938();

	scSubsysFighterSetLightParams(10.0F, 10.0F, 0xFF, 0xFF, 0xFF, gMNVSResultsCharacterAlpha);

	if (gMNVSResultsGameRule != 4)
		func_800269C0_275C0(0x26D);
}

// 0x80138E64
void vs_results_entry()
{
	s32 i;

	D_ovl31_80139710.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl31_80139710);
	D_ovl31_8013972C.arena_size = (u32) ((uintptr_t)&lOverlay31ArenaHi - (uintptr_t)&lOverlay31ArenaLo);
	scManagerFuncUpdate(&D_ovl31_8013972C);

	for (i = 0; i < 4; i++)
	{
		func_800044B4(i);
		func_80004494(i);
	}
}
