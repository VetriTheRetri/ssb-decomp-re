#include <sys/develop.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <ovl0/reloc_data_mgr.h>


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
((ftAttributes*)fp->attributes)
#define ftSpritesGetStruct(fa) \
((ftSprites*)fa->sprites)


// Externs
extern f32 menu_zoom[12];           // 80390D90
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay31ArenaLo;  // 8013A070
extern intptr_t lOverlay31ArenaHi;  // 803903E0
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;
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
extern GObj* func_ovl0_800CD050(s32, void*, s32, u32, void*, s32, u32, s32, void*, u32, void*, u32);
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
extern void ftRenderLightsDrawReflect(Gfx**, f32, f32);
extern f32 scSubsysFighterGetLightAngleX();
extern f32 scSubsysFighterGetLightAngleY();
extern void func_80007080(void*, f32, f32, f32, f32);
extern void lbCommonDrawSObjAttr();
extern void lbCommonScissorSpriteCamera();
extern void* func_800269C0_275C0(u16);
extern void func_ovl0_800D4248();
extern void func_ovl0_800D42C8();

extern u8 dIFCommonPlayerTagShadowColorsR[];
extern u8 dIFCommonPlayerTagShadowColorsG[];
extern u8 dIFCommonPlayerTagShadowColorsB[];
extern u8 dIFCommonPlayerTagSpriteColorsR[];
extern u8 dIFCommonPlayerTagSpriteColorsG[];
extern u8 dIFCommonPlayerTagSpriteColorsB[];
extern halAudioUnknown* D_8009D960_96D60;


// Forward declarations
void mnResultsInit();
void mnResultsDrawResults0(s32 arg0);
void mnResultsDrawResults1(s32 arg0);
void mnResultsDrawResults2(s32 arg0);
void mnResultsDrawResults3(s32 arg0);
void mnResultsDrawResultsNoContest(s32 arg0);
u8 mnResultsGetWinningTeam();
s32 mnResultsGetWinnerPort();
s32 mnResultsGetFtKind(s32 port_id);
s32 mnResultsGetKOsMinusTKOs(s32 port_id);
s32 mnResultsGetPlayerCountByPlace(s32 place);


// Data
// 80138EF0
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

// 80138F10
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

// 80138F30
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

// 80138F50
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

// 80138F70
rdFileID D_ovl31_80138F70[8] = {

	0x22,
	0x26,
	0x12,
	0xA4,
	0x23,
	0x24,
	0x25,
	0x19
};

// 80138F90
s32 D_ovl31_80138F90[] = {

	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x0A0A3C00,
	0x00000000
};

// BSS
// 801398A0
s32 D_ovl31_801398A0[182];

// 80139B78 frames elapsed on Results screen
s32 gMNResultsFramesElapsed;

// 80139B7C
s32 gMNResultsHorizontalLineWidth;

// 80139B80
s32 gMNResultsKOs[4];

// 80139B90
s32 gMNResultsTKOs[4];

// 80139BA0;
s32 gMNResultsPoints[4];

// 80139BB0
s32 gMNResultsPlacement[4];

// 80139BC0
u32 gMNResultsOverlayAlpha;

// 80139BC4
s32 gMNResultsBackgroundOverlayAlpha;

// 80139BC8
s32 gMNResultsBackgroundOverlay2Alpha;

// 80139BD0
sb32 gMNResultsIsPresent[4];

// 80139BE0
GObj* gMNResultsFighterGObjs[4];

// 80139BF0
s32 gMNResultsFTKind[4];

// 80139C00
void* gMNResultsAnimHeaps[4];

// 80139C10
s32 gMNResultsGameRule;

// 80139C14
ub8 gMNResultsIsTeamBattle;

// 80139C18 frames to wait until pressing start will exit the Results screen
s32 gMNResultsMinFramesElapsed;

// 80139C20
sb32 gMNResultsIsSharedWinner[4];

// 80139C30
sb32 D_ovl31_80139C30[4];

// 80139C40
s32 gMNResultsCharacterAlpha;

// 80139C44
s32 gMNResultsDrawBackgroundFrame;

// 80139C48
s32 gMNResultsDrawWinnerTextFrame;

// 80139C4C
s32 gMNResultsDrawFightersFrame;

// 80139C50
u32 D_ovl31_80139C50[240];

// 8013A010
rdFileNode D_ovl31_8013A010;

// 8013A018
s32 D_ovl31_8013A018[12];

// 8013A048
s32 gMNResultsFilesArray[8];



// 80131B20
void mnResultsSetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftRenderLightsDrawReflect(display_list, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 80131B78
s32 mnResultsGetPlayerCount()
{
	return gTransferBattleState.pl_count + gTransferBattleState.cp_count;
}

// 80131B90
void mnResultsSaveDataToSRAM()
{
	scBackupBattleRecord* vs_record;
	s32 i, j;
	u8 ft_kind, opp_ft_kind;

	gSaveData.vs_total_battles += 1;
	gSaveData.unlock_task_inishie |= 1 << gTransferBattleState.gr_kind;

	if (gSaveData.unlock_task_itemswitch < 0xFF)
	{
		gSaveData.unlock_task_itemswitch += 1;
	}

	for (i = 0; i < 4; i++)
	{
		if (gTransferBattleState.players[i].pl_kind != 2)
		{
			ft_kind = gTransferBattleState.players[i].ft_kind;
			vs_record = &gSaveData.vs_records[ft_kind];

			vs_record->time_used += (gTransferBattleState.battle_time_current / 60);

			if (vs_record->time_used >= I_MIN_TO_FRAMES(1000))
				vs_record->time_used = I_MIN_TO_FRAMES(1000) - 1;

			vs_record->damage_dealt += gTransferBattleState.players[i].total_damage_dealt;

			if (vs_record->damage_dealt >= 1000000)
				vs_record->damage_dealt = 999999;

			vs_record->damage_taken += gTransferBattleState.players[i].total_damage_all;

			if (vs_record->damage_taken >= 1000000)
				vs_record->damage_taken = 999999;

			vs_record->self_destructs += gTransferBattleState.players[i].total_self_destruct;

			if (vs_record->self_destructs >= 10000)
				vs_record->self_destructs = 9999;

			vs_record->games_played += 1;
			vs_record->player_count_tally += mnResultsGetPlayerCount();

			for (j = 0; j < 4; j++)
			{
				if ((i != j) && (gTransferBattleState.players[j].pl_kind != nFTPlayerKindNot))
				{
					opp_ft_kind = gTransferBattleState.players[j].ft_kind;

					gSaveData.vs_records[ft_kind].ko_count[opp_ft_kind] += gTransferBattleState.players[i].total_ko_player[j];

					if (gSaveData.vs_records[ft_kind].ko_count[opp_ft_kind] >= 10000)
						gSaveData.vs_records[ft_kind].ko_count[opp_ft_kind] = 9999;

					gSaveData.vs_records[ft_kind].player_count_tallies[opp_ft_kind] += mnResultsGetPlayerCount();
					gSaveData.vs_records[ft_kind].played_against[opp_ft_kind] += 1;
				}
			}
		}
	}

	scBackupWrite();
}

// 80131E18
sb32 mnResultsCheckStartPressed()
{
	s32 i;

	if (gMNResultsFramesElapsed >= gMNResultsMinFramesElapsed)
	{
		for (i = 0; i < ARRAY_COUNT(gPlayerControllers); i++)
		{
			if (gPlayerControllers[i].button_tap & START_BUTTON)
				return TRUE;
		}
	}

	return FALSE;
}

// 80131EB0
void mnResultsAnnounceWinner()
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

	if (gMNResultsGameRule == 4)
	{
		// No Contest
		switch (gMNResultsFramesElapsed)
		{
			case 0x2:
				func_800269C0_275C0(0x1F6U);
				return;
			case 0x47:
				func_800269C0_275C0(0x270U);
				return;
		}
	}
	else if (!gMNResultsIsTeamBattle)
	{
		// FFA - "This Game's Winner Is..."
		switch (gMNResultsFramesElapsed)
		{
			case 0x51:
				func_800269C0_275C0(0x216U);
				return;
			case 0xD2:
				func_800269C0_275C0(announcer_names[mnResultsGetFtKind(mnResultsGetWinnerPort())]);
				return;
			case 0x10E:
				func_800269C0_275C0(0x272U);
				return;
		}
	}
	else
	{
		// Teams - "Red/Blue/Grean Team Wins!"
		switch (gMNResultsFramesElapsed)
		{
			case 0x51:
				func_800269C0_275C0(announcer_teams[mnResultsGetWinningTeam()]);
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

// 8013205C
s32 mnResultsGetPresentCount()
{
	s32 i, sum = 0;

	for (i = 0; i < ARRAY_COUNT(gMNResultsIsPresent); i++)
	{
		if (gMNResultsIsPresent[i] == TRUE)
			sum += 1;
	}

	return sum;
}

// 801320B8
s32 mnResultsGetLowerPortCount(s32 port_id) {
	s32 i;
	s32 sum = 0;

	for (i = 0; i < ARRAY_COUNT(gMNResultsIsPresent); i++)
	{
		if (port_id != i)
		{
			if (gMNResultsIsPresent[i] == TRUE)
				sum += 1;
		}
		else
			break;
	}

	return sum;
}

// 80132100
s32 mnResultsGetPortByPlace(s32 place)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gMNResultsIsPresent); i++)
	{
		if ((gMNResultsIsPresent[i]) && (place == gMNResultsPlacement[i]))
			return i;
	}

	return -1;
}

// 801321AC
s32 func_ovl31_801321AC(s32 port_id)
{
	s32 num_opponents;
	s32 num_players;

	num_opponents = mnResultsGetLowerPortCount(port_id);

	if (mnResultsGetPlayerCountByPlace(0) == 1)
	{
		switch (mnResultsGetPresentCount())
		{
			case 2:
				break;
			case 3:
				if (gMNResultsPlacement[port_id] == 0)
				{
					switch (mnResultsGetLowerPortCount(port_id))
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
					if (mnResultsGetLowerPortCount(port_id) == 1)
						num_opponents = mnResultsGetLowerPortCount(mnResultsGetPortByPlace(0));
				}
				break;
			default:
				switch (port_id)
				{
					case 0:
						if ((gMNResultsPlacement[0] == 0) && (gMNResultsPlacement[1] != 0))
							num_opponents = 1;
						break;
					case 1:
						if ((gMNResultsPlacement[0] == 0) && (gMNResultsPlacement[1] != 0))
							num_opponents = 0;
						break;
					case 2:
						if ((gMNResultsPlacement[3] == 0) && (gMNResultsPlacement[2] != 0))
							num_opponents = 3;
						break;
					case 3:
						if ((gMNResultsPlacement[3] == 0) && (gMNResultsPlacement[2] != 0))
							num_opponents = 2;
						break;
				}
				break;
		}
	}

	return num_opponents;
}

// 8013234C
s32 mnResultsGetWinnerPort()
{
	s32 i;
	sb32 potential_first_place[4];
	s32 kos_minus_tkos[4];
	s32 winner_port_id = 0x29A;
	sb32 multi_winner[4];
	sb32 is_multi_winner;
	int foo;

	// If FFA, use place
	if ((gMNResultsGameRule == nSCBattleGameRuleTime) || (gMNResultsGameRule == nSCBattleGameRuleStock))
	{
		for (i = 0; i < 4; i++)
		{
			if ((gMNResultsIsPresent[i] == TRUE) && (gMNResultsPlacement[i] == 0))
				return i;
		}
	}
	else
	{
		// If here, it's teams

		// Get KOs minus TKOs for each port
		for (i = 0; i < 4; i++)
			kos_minus_tkos[i] = mnResultsGetKOsMinusTKOs(i); // gets kos minus tkos

		// Set lowest present port to winner and remember which ports may be the winner
		for (i = 0; i < 4; i++)
		{
			if ((gMNResultsIsPresent[i]) && (gMNResultsPlacement[i] == 0))
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
				if ((multi_winner[i]) && (gMNResultsKOs[winner_port_id] < gMNResultsKOs[i]))
					winner_port_id = i;
			}

			for (i = 0; i < 4; i++)
			{
				gMNResultsIsSharedWinner[i] = FALSE;
			}

			for (i = winner_port_id + 1; i < 4; i++)
			{
				if (gMNResultsKOs[winner_port_id] == gMNResultsKOs[i])
				{
					gMNResultsIsSharedWinner[i] = TRUE;
					gMNResultsIsSharedWinner[winner_port_id] = TRUE;
				}
			}
		}

		return winner_port_id;
	}
}

// 80132A2C
u8 mnResultsGetWinningTeam()
{
	return gTransferBattleState.players[mnResultsGetWinnerPort()].team;
}

// 80132A68
void mnResultsAnimateLogo(GObj* logo_gobj)
{
	f32 new_scale;
	f32 min_scale = 10.0F;
	f32 max_y = 1000.0F;

	if (gMNResultsFramesElapsed >= 0x28)
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

// 80132B20
void mnResultsCreateLogo()
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

	if (gMNResultsIsTeamBattle == FALSE)
	{
		winner_port_id = mnResultsGetWinnerPort();
		winner_char_id = mnResultsGetFtKind(winner_port_id);
		color = winner_port_id;
	}

	if (gMNResultsIsTeamBattle == TRUE)
	{
		winner_char_id = mnResultsGetFtKind(mnResultsGetWinnerPort());
		color = colors[mnResultsGetWinningTeam()];
	}

	logo_gobj = gcMakeGObjSPAfter(0, 0, 0x17, 0x80000000);

	gcSetupCommonDObjs(logo_gobj, GetAddressFromOffset(gMNResultsFilesArray[4], offsets1[winner_char_id]), 0);
	gcAddGObjDisplay(logo_gobj, gcDrawDObjTreeForGObj, 0x21, 0x80000000, -1);
	gcAddMObjAll(logo_gobj, GetAddressFromOffset(gMNResultsFilesArray[4], offsets2[winner_char_id]));
	gcAddMatAnimJointAll(logo_gobj, GetAddressFromOffset(gMNResultsFilesArray[4], offsets3[winner_char_id]), color);
	gcPlayAnimAll(logo_gobj);
	gcAddGObjProcess(logo_gobj, &mnResultsAnimateLogo, 1, 1);

	DObjGetStruct(logo_gobj)->translate.vec.f.x = 0.0F;
	DObjGetStruct(logo_gobj)->translate.vec.f.y = 100.0F;
	DObjGetStruct(logo_gobj)->translate.vec.f.z = -11000.0F;
	DObjGetStruct(logo_gobj)->scale.vec.f.x = 25.0F;
	DObjGetStruct(logo_gobj)->scale.vec.f.y = 25.0F;
}

// 80132D84
void mnResultsRenderBackground(GObj* bg_gobj)
{
	SObj* bg_sobj = SObjGetStruct(bg_gobj);

	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, bg_sobj->sprite.red, bg_sobj->sprite.green, bg_sobj->sprite.blue, bg_sobj->sprite.alpha);
	gDPSetEnvColor(gDisplayListHead[0]++, bg_sobj->env_color.r, bg_sobj->env_color.g, bg_sobj->env_color.b, bg_sobj->env_color.a);
	gDPSetCombineLERP(gDisplayListHead[0]++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,  0, 0, 0, 1,  PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,  0, 0, 0, 1);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

	lbCommonDrawSObjNoAttr(bg_gobj);
}

// 80132EA8
void mnResultsCreateBackground()
{
	GObj* bg_gobj;
	SObj* bg_sobj;
	GObj *camera_gobj;
	s32 stack_fix_1, stack_fix_2;
	s32 winner_port_id;
	syColorRGBPair unused_colors[4] = {

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
	syColorRGBPair colors[4] = {

		{{ 0x5C, 0x2B, 0x27 }, { 0x98, 0x6F, 0x6C }},
		{{ 0x39, 0x39, 0x99 }, { 0x86, 0x86, 0xD1 }},
		{{ 0x69, 0x58, 0x2B }, { 0x9B, 0x8E, 0x6C }},
		{{ 0x2B, 0x44, 0x36 }, { 0x71, 0x82, 0x78 }}
	};
	Camera *cam;

	camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	if (gMNResultsGameRule == 4)
		winner_port_id = mtTrigGetRandomIntRange(4);
	else
	{
		if (gMNResultsIsTeamBattle == FALSE)
			winner_port_id = mnResultsGetWinnerPort();

		if (gMNResultsIsTeamBattle == TRUE)
			winner_port_id = team_colors[mnResultsGetWinningTeam()];
	}

	bg_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(bg_gobj, mnResultsRenderBackground, 0x1A, 0x80000000, -1);

	bg_sobj = lbCommonMakeSObjForGObj(bg_gobj, GetAddressFromOffset(gMNResultsFilesArray[0], &FILE_022_BACKGROUND_IMAGE_OFFSET));

	SObjGetStruct(bg_gobj)->pos.x = 10.0f;
	SObjGetStruct(bg_gobj)->pos.y = 10.0f;
	bg_sobj->env_color.r = colors[winner_port_id].prim.r;
	bg_sobj->env_color.g = colors[winner_port_id].prim.g;
	bg_sobj->env_color.b = colors[winner_port_id].prim.b;
	bg_sobj->sprite.red = colors[winner_port_id].env.r;
	bg_sobj->sprite.green = colors[winner_port_id].env.g;
	bg_sobj->sprite.blue = colors[winner_port_id].env.b;
}

// 80133134
s32 mnResultsGetPlacement(s32 port_id)
{
	return gMNResultsPlacement[port_id];
}

// 80133148
s32 mnResultsGetFtKind(s32 port_id)
{
	return gMNResultsFTKind[port_id];
}

// 8013315C
void mnResultsSetFtKind()
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gMNResultsIsPresent); i++)
	{
		if (gMNResultsIsPresent[i])
			gMNResultsFTKind[i] = gTransferBattleState.players[i].ft_kind;
	}
}

// 801331DC
void mnResultsSetFighterPosition(GObj* fighter_gobj, s32 port_id, s32 place)
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

	switch (mnResultsGetPresentCount())
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

// 801333E4
void mnResultsMakeFighterFaceWinner(GObj* fighter_gobj, s32 port_id, s32 place)
{
	s32 winner_port_id = mnResultsGetWinnerPort();

	if (place != 0)
	{
		DObj* fighter_dobj = DObjGetStruct(fighter_gobj);
		DObj* winner_dobj = DObjGetStruct(gMNResultsFighterGObjs[winner_port_id]);
		f32 x1 = fighter_dobj->translate.vec.f.x;
		f32 z1 = fighter_dobj->translate.vec.f.z;
		f32 x2 = winner_dobj->translate.vec.f.x;
		f32 z2 = winner_dobj->translate.vec.f.z;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = atan2f(x2 - x1, z2 - z1);
	}
}

// 8013345C
s32 mnResultsGetVictoryAnim(s32 ft_kind)
{
	s32 victory_anims[3] = {

		0x10001, 0x10002, 0x10003
	};

	if (ft_kind == nFTKindKirby)
		return victory_anims[mtTrigGetRandomIntRange(2)];
	else
		return victory_anims[mtTrigGetRandomIntRange(3)];
}

// 801334CC
s32 mnResultsGetDefeatedAnim(s32 ft_kind)
{
	return 0x10005;
}

// 801334DC
void mnResultsSetAnim(GObj* fighter_gobj, s32 port_id)
{
	if (gMNResultsGameRule == 4)
	{
		scSubsysFighterSetStatus(fighter_gobj, mnResultsGetDefeatedAnim(mnResultsGetFtKind(port_id)));
		return;
	}

	switch (mnResultsGetPresentCount())
	{
		case 2:
			switch (gMNResultsPlacement[port_id])
			{
				case 0:
					scSubsysFighterSetStatus(fighter_gobj, mnResultsGetVictoryAnim(mnResultsGetFtKind(port_id)));
					return;
				case 1:
					scSubsysFighterSetStatus(fighter_gobj, mnResultsGetDefeatedAnim(mnResultsGetFtKind(port_id)));
					return;
			}
			break;
		case 3:
			if (gMNResultsPlacement[port_id] == 0)
			{
				scSubsysFighterSetStatus(fighter_gobj, mnResultsGetVictoryAnim(mnResultsGetFtKind(port_id)));
				return;
			}
			else
			{
				scSubsysFighterSetStatus(fighter_gobj, mnResultsGetDefeatedAnim(mnResultsGetFtKind(port_id)));
				return;
			}
		case 4:
		default:
			if (gMNResultsPlacement[port_id] == 0)
			{
				scSubsysFighterSetStatus(fighter_gobj, mnResultsGetVictoryAnim(mnResultsGetFtKind(port_id)));
				return;
			}
			else
			{
				scSubsysFighterSetStatus(fighter_gobj, mnResultsGetDefeatedAnim(mnResultsGetFtKind(port_id)));
				return;
			}
	}
}

// 80133684
s32 mnResultsGetPlayerCountByPlace(s32 place)
{
	s32 sum = 0;
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if ((gMNResultsIsPresent[i]) && (place == gMNResultsPlacement[i]))
			sum += 1;
	}

	return sum;
}

// 80133718
s32 mnResultsGetPlayerCountAhead(s32 port_id)
{
	s32 sum = 0;
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if ((port_id != i) && (gMNResultsIsPresent[i]) && (gMNResultsPlacement[i] < gMNResultsPlacement[port_id]))
			sum += 1;
	}

	return sum;
}

// 80133810
s32 func_ovl31_80133810(s32 port_id)
{
	s32 sp40[4] = {

		0, 0, 1, 1
	};
	s32 sp2C[5] = {

		0, 0, 1, 1, 1
	};

	return  gMNResultsPlacement[port_id] + sp40[gMNResultsPlacement[port_id] - mnResultsGetPlayerCountAhead(port_id)] + sp2C[mnResultsGetPlayerCountByPlace(gMNResultsPlacement[port_id])];
}

// 801338EC
void mnResultsSetFighterScale(GObj* fighter_gobj, s32 port_id, s32 ft_kind, s32 place)
{
	DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ft_kind];
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ft_kind];
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ft_kind];
}

// 8013392C
void mnResultsSpawnFighter(s32 port_id)
{
	s32 foo, bar, baz;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = mnResultsGetFtKind(port_id);
	spawn_info.costume = gTransferBattleState.players[port_id].costume;
	spawn_info.shade = gTransferBattleState.players[port_id].shade;
	spawn_info.anim_heap = gMNResultsAnimHeaps[port_id];
	gMNResultsFighterGObjs[port_id] = ftManagerMakeFighter(&spawn_info);
}

// 801339F4
void mnResultsSetIndicatorPosition(GObj* indicator_gobj, s32 port_id)
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

	switch (mnResultsGetPresentCount())
	{
		case 2:
			SObjGetStruct(indicator_gobj)->pos.x = xy_positions_2p[temp_s0][sp214].x;
			SObjGetStruct(indicator_gobj)->pos.y = xy_positions_2p[temp_s0][sp214].y + y_positions_kind[mnResultsGetFtKind(port_id)][temp_s0];
			break;
		case 3:
			SObjGetStruct(indicator_gobj)->pos.x = xy_positions_3p[temp_s0][sp214].x;
			SObjGetStruct(indicator_gobj)->pos.y = xy_positions_3p[temp_s0][sp214].y + y_positions_kind[mnResultsGetFtKind(port_id)][temp_s0];
			break;
		case 4:
		default:
			SObjGetStruct(indicator_gobj)->pos.x = xy_positions_4p[temp_s0][sp214].x;
			SObjGetStruct(indicator_gobj)->pos.y = xy_positions_4p[temp_s0][sp214].y + y_positions_kind[mnResultsGetFtKind(port_id)][temp_s0]    ;
			break;
	}
}

// 80133C58
void mnResultsCreatePlayerIndicator(s32 port_id, s32 color_index)
{
	GObj* indicator_gobj;
	SObj* indicator_sobj;
	syColorRGBPair colors[4] = {

		{ { 0x00, 0x00, 0x00 }, { 0xED, 0x36, 0x36 } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0x4E, 0xE9 } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xDF, 0x1A } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } }
	};
	intptr_t offsets[4] = {

		0x258, 0x4F8, 0x798, 0xA38
	};

	indicator_gobj = gcMakeGObjSPAfter(0, 0, 0x12, 0x80000000);
	gcAddGObjDisplay(indicator_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	if (gTransferBattleState.players[port_id].pl_kind == 0)
	{
		indicator_sobj = lbCommonMakeSObjForGObj(indicator_gobj, GetAddressFromOffset(gMNResultsFilesArray[1], offsets[port_id]));
		indicator_sobj->sprite.attr &= ~SP_FASTCOPY;
		indicator_sobj->sprite.attr |= SP_TRANSPARENT;
		indicator_sobj->env_color.r = dIFCommonPlayerTagShadowColorsR[color_index];
		indicator_sobj->env_color.g = dIFCommonPlayerTagShadowColorsG[color_index];
		indicator_sobj->env_color.b = dIFCommonPlayerTagShadowColorsB[color_index];
		indicator_sobj->sprite.red = dIFCommonPlayerTagSpriteColorsR[color_index];
		indicator_sobj->sprite.green = dIFCommonPlayerTagSpriteColorsG[color_index];
		indicator_sobj->sprite.blue = dIFCommonPlayerTagSpriteColorsB[color_index];
	}
	else
	{
		indicator_sobj = lbCommonMakeSObjForGObj(indicator_gobj, GetAddressFromOffset(gMNResultsFilesArray[1], &FILE_026_INDICATOR_CP_IMAGE_OFFSET));
		indicator_sobj->sprite.attr &= ~SP_FASTCOPY;
		indicator_sobj->sprite.attr |= SP_TRANSPARENT;
		indicator_sobj->env_color.r = dIFCommonPlayerTagShadowColorsR[color_index];
		indicator_sobj->env_color.g = dIFCommonPlayerTagShadowColorsG[color_index];
		indicator_sobj->env_color.b = dIFCommonPlayerTagShadowColorsB[color_index];
		indicator_sobj->sprite.red = dIFCommonPlayerTagSpriteColorsR[color_index];
		indicator_sobj->sprite.green = dIFCommonPlayerTagSpriteColorsG[color_index];
		indicator_sobj->sprite.blue = dIFCommonPlayerTagSpriteColorsB[color_index];
	}

	mnResultsSetIndicatorPosition(indicator_gobj, port_id);
}

// 80133E7C
void mnResultsCreatePlayerIndicatorViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x1E, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80133F1C
s32 mnResultsGetChrIndex(char c)
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

// 80133F6C
void mnResultsDrawString(const char *str, f32 x, f32 y, s32 color_index, f32 scale)
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
	syColorRGBPair colors[5] = {

		{ { 0xFF, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } },
		{ { 0x12, 0x00, 0xD9 }, { 0xFF, 0xFF, 0xFF } },
		{ { 0x03, 0x73, 0x00 }, { 0xFF, 0xFF, 0xFF } },
		{ { 0x60, 0x03, 0xD4 }, { 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } }
	};

	current_x = x;
	string_gobj = gcMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
	gcAddGObjDisplay(string_gobj, lbCommonDrawSObjAttr, 0x1D, 0x80000000, -1);

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			current_x += str[i] - '0';
		else
		{
			char_index = mnResultsGetChrIndex(str[i]);

			if (char_index == 0x1C) // space
				current_x += 10.0F * scale;
			else
			{

				string_sobj = lbCommonMakeSObjForGObj(string_gobj, GetAddressFromOffset(gMNResultsFilesArray[6], offsets[char_index]));
				string_sobj->sprite.scalex = scale;
				string_sobj->pos.x = current_x;

				if (char_index == 0x1B) // .
					string_sobj->pos.y = y + 26.0F;
				else
					string_sobj->pos.y = y;

				string_sobj->sprite.attr &= ~SP_FASTCOPY;
				string_sobj->sprite.attr |= SP_TRANSPARENT;
				string_sobj->env_color.r = colors[color_index].prim.r;
				string_sobj->env_color.g = colors[color_index].prim.g;
				string_sobj->env_color.b = colors[color_index].prim.b;
				string_sobj->sprite.red = colors[color_index].env.r;
				string_sobj->sprite.green = colors[color_index].env.g;
				string_sobj->sprite.blue = colors[color_index].env.b;

				current_x += widths[char_index] * scale;
			}
		}
	}
}

// 8013423C
void mnResultsDrawWinsText(s32 winner_id)
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

	if (gMNResultsIsTeamBattle == TRUE)
		mnResultsDrawString(strWins, x_by_team[winner_id], 180.0F, 3, 1.0F);

	if (gMNResultsIsTeamBattle == FALSE)
		mnResultsDrawString(strWins, x_by_kind[winner_id], 180.0F, 3, 1.0F);
}

// 80134364
s32 mnResultsGetWinnerKind()
{
	return mnResultsGetFtKind(mnResultsGetWinnerPort());
}

// 8013438C
void mnResultsDrawFighterWins()
{
	s32 ft_kind;
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

	ft_kind = mnResultsGetWinnerKind();

	mnResultsDrawString(name_strings[ft_kind], x_positions[ft_kind], 180.0F, 0, scale[ft_kind]);
	mnResultsDrawWinsText(ft_kind);
}

// 80134480
void mnResultsDrawTeamWins()
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

	team_id = mnResultsGetWinningTeam();

	mnResultsDrawString(team_strings[team_id], x_positions[team_id], 180.0F, team_id, 1.0F);
	mnResultsDrawWinsText(team_id);
}

// 80134540
void mnResultsDrawNoContest()
{
	mnResultsDrawString("NO CONTEST", 30.0F, 180.0F, 4, 1.0f);
}

// 8013457C
void mnResultsDrawWinnerText()
{
	if (gMNResultsGameRule == 4)
		mnResultsDrawNoContest();
	else
	{
		if (gMNResultsIsTeamBattle == FALSE)
			mnResultsDrawFighterWins();

		if (gMNResultsIsTeamBattle == TRUE)
			mnResultsDrawTeamWins();
	}
}

// 801345E8
void mnResultsCreateWinnerTextViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x14, 0x20000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80134688
s32 mnResultsGetHundredsDigit(s32 number)
{
	if (number < 0)
		 return -(number / 100);

	return number / 100;
}

// 801346C0
s32 mnResultsGetTensDigit(s32 number)
{
	if (number < 0)
		return -((number % 100) / 10);

	return (number % 100) / 10;
}

// 80134718
s32 mnResultsGetOnesDigit(s32 number)
{
	if (number < 0)
		return -((number % 100) % 10);

	return (number % 100) % 10;
}

// 80134770
void mnResultsSetNumberColor(SObj* number_sobj, s32 color_index)
{
	syColorRGBPair colors[5] = {

		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0x82, 0x82 } },
		{ { 0x00, 0x00, 0x00 }, { 0x91, 0xC0, 0xFF } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xDF, 0x1A } },
		{ { 0x00, 0x00, 0x00 }, { 0x9F, 0xFF, 0x9F } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xFF, 0xFF } }
	};

	number_sobj->env_color.r = colors[color_index].prim.r;
	number_sobj->env_color.g = colors[color_index].prim.g;
	number_sobj->env_color.b = colors[color_index].prim.b;
	number_sobj->sprite.red = colors[color_index].env.r;
	number_sobj->sprite.green = colors[color_index].env.g;
	number_sobj->sprite.blue = colors[color_index].env.b;
}

// 80134808
SObj* mnResultsCreateNumber(GObj* number_gobj, s32 number, s32 color_id)
{
	SObj* number_sobj;
	intptr_t offsets[10] = {

		0x068, 0x118, 0x1C8, 0x278, 0x328, 0x3D8, 0x488, 0x538, 0x5E8, 0x698
	};
	syColorRGBPair unused_colors[5] = {

		{ { 0x00, 0x00, 0x00 }, { 0xED, 0x36, 0x36 } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0x4E, 0xE9 } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xDF, 0x1A } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } }
	};

	number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gMNResultsFilesArray[5], offsets[number]));
	number_sobj->sprite.attr &= ~SP_FASTCOPY;
	number_sobj->sprite.attr |= SP_TRANSPARENT;
	mnResultsSetNumberColor(number_sobj, color_id);

	return number_sobj;
}

// 801348F8
SObj* mnResultsCreatePlaceNumber(GObj* place_gobj, s32 port_id, s32 place, s32 color_id)
{
	SObj* place_sobj;
	intptr_t offsets[10] = {

		0x0148, 0x02D8, 0x0500, 0x0698, 0x08C0, 0x0A58, 0x0C80, 0x0E18, 0x1040, 0x1270
	};
	syColorRGBPair unused_colors[5] = {

		{ { 0x00, 0x00, 0x00 }, { 0xED, 0x36, 0x36 } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0x4E, 0xE9 } },
		{ { 0x00, 0x00, 0x00 }, { 0xFF, 0xDF, 0x1A } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } },
		{ { 0x00, 0x00, 0x00 }, { 0x4E, 0xB9, 0x4E } }
	};

	if (place == 1)
	{
		if (gMNResultsIsTeamBattle == TRUE)
		{
			if ((mnResultsGetWinnerPort() == port_id) || (gMNResultsIsSharedWinner[port_id]))
			{
				place_sobj = lbCommonMakeSObjForGObj(place_gobj, GetAddressFromOffset(gMNResultsFilesArray[0], &FILE_022_FIRST_PLACE_ICON_IMAGE_OFFSET));
				place_sobj->user_data.s = 1;
			}
			else
			{
				place_sobj = lbCommonMakeSObjForGObj(place_gobj, GetAddressFromOffset(gMNResultsFilesArray[3], &FILE_0A4_1_IMAGE_OFFSET));
				place_sobj->user_data.s = 0;
				mnResultsSetNumberColor(place_sobj, color_id);
			}
		}
		else
		{
			place_sobj = lbCommonMakeSObjForGObj(place_gobj, GetAddressFromOffset(gMNResultsFilesArray[0], &FILE_022_FIRST_PLACE_ICON_IMAGE_OFFSET));
			place_sobj->user_data.s = 1;
		}

		place_sobj->sprite.attr &= ~SP_FASTCOPY;
		place_sobj->sprite.attr |= SP_TRANSPARENT;
	}
	else
	{
		place_sobj = lbCommonMakeSObjForGObj(place_gobj, GetAddressFromOffset(gMNResultsFilesArray[3], offsets[place]));
		place_sobj->sprite.attr &= ~SP_FASTCOPY;
		place_sobj->sprite.attr |= SP_TRANSPARENT;
		mnResultsSetNumberColor(place_sobj, color_id);
	}
	return place_sobj;
}

// 80134AC4
void mnResultsDrawNumber(GObj* number_gobj, f32 x, f32 y, s32 number, s32 color_id)
{
	SObj* number_sobj;
	s32 hundreds_digit;
	s32 tens_digit;

	if (number < 0)
	{
		number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gMNResultsFilesArray[5], &FILE_024_DASH_IMAGE_OFFSET));

		if (mnResultsGetHundredsDigit(number) != 0)
			number_sobj->pos.x = x;
		else
		{
			if (mnResultsGetTensDigit(number) != 0)
				number_sobj->pos.x = x + 8.0F;
			else
				number_sobj->pos.x = x + 16.0F;
		}
		number_sobj->pos.y = y + 3.0F;
		number_sobj->sprite.attr &= ~SP_FASTCOPY;
		number_sobj->sprite.attr |= SP_TRANSPARENT;

		mnResultsSetNumberColor(number_sobj, color_id);
	}

	hundreds_digit = mnResultsGetHundredsDigit(number);

	if (hundreds_digit != 0)
	{
		number_sobj = mnResultsCreateNumber(number_gobj, hundreds_digit, color_id);
		number_sobj->pos.x = x + 8.0F;
		number_sobj->pos.y = y;
	}

	tens_digit = mnResultsGetTensDigit(number);

	if ((tens_digit != 0) || (hundreds_digit != 0))
	{
		number_sobj = mnResultsCreateNumber(number_gobj, tens_digit, color_id);
		number_sobj->pos.x = x + 16.0F;
		number_sobj->pos.y = y;
	}

	number_sobj = mnResultsCreateNumber(number_gobj, mnResultsGetOnesDigit(number), color_id);
	number_sobj->pos.x = x + 24.0F;
	number_sobj->pos.y = y;
}

// 80134C5C
void mnResultsRenderOverlay(GObj* overlay_gobj)
{
	if (gMNResultsOverlayAlpha < 0x80)
	{
		gMNResultsOverlayAlpha += 9;

		if (gMNResultsOverlayAlpha > 0x80)
			gMNResultsOverlayAlpha = 0x80;
	}

	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, gMNResultsOverlayAlpha);
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

	lbCommonClearExternSpriteParams();
}

// 80134DA0
void mnResultsCreateOverlay()
{
	gMNResultsOverlayAlpha = 0;
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x15, 0x80000000), mnResultsRenderOverlay, 0x1E, 0x80000000, -1);
}

// 80134DF4
void mnResultsCreateOverlayViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000, lbCommonScissorSpriteCamera, 0x11, 0x40000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80134E94
void mnResultsRenderBackgroundOverlay(GObj* bg_overlay_gobj)
{
	if (gMNResultsBackgroundOverlayAlpha > 0)
	{
		gMNResultsBackgroundOverlayAlpha -= 5;

		if (gMNResultsBackgroundOverlayAlpha < 0)
			gcEjectGObj(bg_overlay_gobj);
	}

	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, gMNResultsBackgroundOverlayAlpha);
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 80134FD0
void mnResultsCreateBackgroundOverlay()
{
	gMNResultsBackgroundOverlayAlpha = 0xFF;
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x19, 0x80000000), mnResultsRenderBackgroundOverlay, 0x23, 0x80000000, -1);
}

// 80135028
void mnResultsCreateBackgroundOverlayViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000, lbCommonScissorSpriteCamera, 0x37, 0x800000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801350C8
void mnResultsRenderBackgroundOverlay2(GObj* bg_overlay_gobj)
{
	if (gMNResultsBackgroundOverlay2Alpha > 0)
	{
		gMNResultsBackgroundOverlay2Alpha -= 5;

		if (gMNResultsBackgroundOverlay2Alpha < 0)
			gcEjectGObj(bg_overlay_gobj);
	}

	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, gMNResultsBackgroundOverlay2Alpha);
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 80135204
void mnResultsCreateBackgroundOverlay2()
{
	gMNResultsBackgroundOverlay2Alpha = 0xFF;
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x18, 0x80000000), mnResultsRenderBackgroundOverlay2, 0x22, 0x80000000, -1);
}

// 8013525C
void mnResultsCreateBackgroundOverlay2Viewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000, lbCommonScissorSpriteCamera, 0x46, 0x400000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801352FC
f32 mnResultsGetColumnX(s32 port_id)
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

	switch (mnResultsGetPresentCount())
	{
		case 2:
			return column_x_2p[mnResultsGetLowerPortCount(port_id)];
		case 3:
			return column_x_3p[mnResultsGetLowerPortCount(port_id)];
		case 4:
			/* fallthrough */
		default:
			return column_x_4p[mnResultsGetLowerPortCount(port_id)];
	}
}

// 801353F4
s32 mnResultsGetNumberColorIndex(s32 port_id)
{
	s32 color_ids[3] = {

		0, 1, 3
	};

	if (gMNResultsIsTeamBattle != TRUE)
		return 4;

	return color_ids[gTransferBattleState.players[port_id].team];
}

// 80135468
void mnResultsSetColumnPortIndicatorColors(SObj* column_port_indicator_sobj)
{
	column_port_indicator_sobj->sprite.attr &= ~SP_FASTCOPY;
	column_port_indicator_sobj->sprite.attr |= SP_TRANSPARENT;
	column_port_indicator_sobj->env_color.r = 0;
	column_port_indicator_sobj->env_color.g = 0;
	column_port_indicator_sobj->env_color.b = 0;
	column_port_indicator_sobj->sprite.red = 0xFF;
	column_port_indicator_sobj->sprite.green = 0xFF;
	column_port_indicator_sobj->sprite.blue = 0xFF;
}

// 8013549C
void mnResultsCreateColumnHeaders()
{
	SObj* column_port_indicator_sobj;
	SObj* column_stock_icon_sobj;
	GObj* column_header_gobj;
	intptr_t offsets[4] = {

		0x49E8, 0x4B08, 0x4C28, 0x4D48
	};
	s32 i;
	ftStruct* ft_struct;

	column_header_gobj = gcMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
	gcAddGObjDisplay(column_header_gobj, lbCommonDrawSObjAttr, 0x1F, 0x80000000, -1);

	for (i = 0; i < 4; i++)
	{
		if (gMNResultsIsPresent[i])
		{
			column_port_indicator_sobj = lbCommonMakeSObjForGObj(column_header_gobj, GetAddressFromOffset(gMNResultsFilesArray[0], offsets[i]));
			column_port_indicator_sobj->pos.x = mnResultsGetColumnX(i) + 17.0F;
			column_port_indicator_sobj->pos.y = 49.0F;
			mnResultsSetColumnPortIndicatorColors(column_port_indicator_sobj);

			ft_struct = ftGetStruct(gMNResultsFighterGObjs[i]);

			column_stock_icon_sobj = lbCommonMakeSObjForGObj(column_header_gobj, ftSpritesGetStruct(AttributesGetStruct(ft_struct))->stock_spr);
			column_stock_icon_sobj->sprite.LUT = ftSpritesGetStruct(AttributesGetStruct(ft_struct))->stock_lut[ft_struct->costume];
			column_stock_icon_sobj->sprite.attr &= ~SP_FASTCOPY;
			column_stock_icon_sobj->sprite.attr |= SP_TRANSPARENT;
			column_stock_icon_sobj->pos.x = column_port_indicator_sobj->pos.x - 10.0F;
			column_stock_icon_sobj->pos.y = column_port_indicator_sobj->pos.y;
		}
	}
}

// 80135670
s32 mnResultsGetKOs(s32 port_id)
{
	if (gMNResultsKOs[port_id] >= 1000)
		return 999;

	return gMNResultsKOs[port_id];
}

// 8013569C
void mnResultsDrawKOs(s32 y)
{
	GObj* kos_row_gobj;

	kos_row_gobj = func_ovl0_800CD050(0, 0, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1F, 0x80000000, -1, GetAddressFromOffset(gMNResultsFilesArray[0], &FILE_022_KOS_TEXTURE_IMAGE_OFFSET), 1, 0, 1);
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

	if (gMNResultsIsPresent[0])
		mnResultsDrawNumber(kos_row_gobj, mnResultsGetColumnX(0), y, mnResultsGetKOs(0), mnResultsGetNumberColorIndex(0));

	if (gMNResultsIsPresent[1])
		mnResultsDrawNumber(kos_row_gobj, mnResultsGetColumnX(1), y, mnResultsGetKOs(1), mnResultsGetNumberColorIndex(1));

	if (gMNResultsIsPresent[2])
		mnResultsDrawNumber(kos_row_gobj, mnResultsGetColumnX(2), y, mnResultsGetKOs(2), mnResultsGetNumberColorIndex(2));

	if (gMNResultsIsPresent[3])
		mnResultsDrawNumber(kos_row_gobj, mnResultsGetColumnX(3), y, mnResultsGetKOs(3), mnResultsGetNumberColorIndex(3));
}

// 801358C4
s32 mnResultsGetTKOs(s32 port_id)
{
	if (gMNResultsTKOs[port_id] >= 1000)
		return 999;

	return gMNResultsTKOs[port_id];
}

// 801358F0
void mnResultsDrawTKOs(s32 y)
{
	GObj* tkos_row_gobj;
	SObj* negative_symbol_sobj;

	tkos_row_gobj = func_ovl0_800CD050(0, 0, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1F, 0x80000000, -1, GetAddressFromOffset(gMNResultsFilesArray[0], &FILE_022_TKO_TEXTURE_IMAGE_OFFSET), 1, 0, 1);
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

	if (gMNResultsGameRule != 4)
	{
		negative_symbol_sobj = lbCommonMakeSObjForGObj(tkos_row_gobj, GetAddressFromOffset(gMNResultsFilesArray[5], &FILE_024_DASH_IMAGE_OFFSET));
		negative_symbol_sobj->pos.x = 90.0F;
		negative_symbol_sobj->pos.y = y + 3;
		negative_symbol_sobj->sprite.attr &= ~SP_FASTCOPY;
		negative_symbol_sobj->sprite.attr |= SP_TRANSPARENT;
	}

	if (gMNResultsIsPresent[0])
		mnResultsDrawNumber(tkos_row_gobj, mnResultsGetColumnX(0), y, mnResultsGetTKOs(0), mnResultsGetNumberColorIndex(0));

	if (gMNResultsIsPresent[1])
		mnResultsDrawNumber(tkos_row_gobj, mnResultsGetColumnX(1), y, mnResultsGetTKOs(1), mnResultsGetNumberColorIndex(1));

	if (gMNResultsIsPresent[2])
		mnResultsDrawNumber(tkos_row_gobj, mnResultsGetColumnX(2), y, mnResultsGetTKOs(2), mnResultsGetNumberColorIndex(2));

	if (gMNResultsIsPresent[3])
		mnResultsDrawNumber(tkos_row_gobj, mnResultsGetColumnX(3), y, mnResultsGetTKOs(3), mnResultsGetNumberColorIndex(3));
}

// 80135B78
void mnResultsRenderHorizontalLine(GObj* line_gobj)
{
	f32 y = line_gobj->user_data.s;

	gMNResultsHorizontalLineWidth += 10;
	if (gMNResultsHorizontalLineWidth > 190)
		gMNResultsHorizontalLineWidth = 190;

	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
	gDPSetFillColor(gDisplayListHead[0]++, syDisplayGetFillColor(0xFFFFFFFF));
	gDPFillRectangle(gDisplayListHead[0]++, 87, y, 87 + gMNResultsHorizontalLineWidth, y);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

	lbCommonClearExternSpriteParams();
}

// 80135D58
void mnResultsCreateHorizontalLine(s32 y)
{
	GObj* horizontal_line_gobj;

	horizontal_line_gobj = gcMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
	gcAddGObjDisplay(horizontal_line_gobj, mnResultsRenderHorizontalLine, 0x1F, 0x80000000, -1);
	horizontal_line_gobj->user_data.s = y;
}

// 80135DB8
s32 mnResultsGetPoints(s32 port_id)
{
	return gMNResultsPoints[port_id];
}

// 80135DCC
void mnResultsDrawPointsRow()
{
	GObj* points_row_gobj;

	points_row_gobj = func_ovl0_800CD050(0, 0, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1F, 0x80000000, -1, GetAddressFromOffset(gMNResultsFilesArray[0], &FILE_022_POINTS_TEXTURE_IMAGE_OFFSET), 1, 0, 1);
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

	if (gMNResultsIsPresent[0])
		mnResultsDrawNumber(points_row_gobj, mnResultsGetColumnX(0), 104.0F, mnResultsGetPoints(0), mnResultsGetNumberColorIndex(0));

	if (gMNResultsIsPresent[1])
		mnResultsDrawNumber(points_row_gobj, mnResultsGetColumnX(1), 104.0F, mnResultsGetPoints(1), mnResultsGetNumberColorIndex(1));

	if (gMNResultsIsPresent[2])
		mnResultsDrawNumber(points_row_gobj, mnResultsGetColumnX(2), 104.0F, mnResultsGetPoints(2), mnResultsGetNumberColorIndex(2));

	if (gMNResultsIsPresent[3])
		mnResultsDrawNumber(points_row_gobj, mnResultsGetColumnX(3), 104.0F, mnResultsGetPoints(3), mnResultsGetNumberColorIndex(3));
}

// 80135FE8 - Unused?
void func_ovl31_80135FE8() {}

// 80135FF0
void mnResultsPositionPlaceNumber(SObj* number_sobj, s32 port_id, s32 place, f32 y)
{
	if ((place == 1) && (number_sobj->user_data.s != 0))
	{
		number_sobj->pos.x = mnResultsGetColumnX(port_id) + 2.0F;
		number_sobj->pos.y = y;
	}
	else
	{
		number_sobj->pos.x = mnResultsGetColumnX(port_id) + 15.0F;
		number_sobj->pos.y = y;
	}
}

// 8013607C
s32 mnResultsGetPlaceForDisplay(s32 port_id)
{
	if ((mnResultsGetPresentCount() == 4) &&
		(!gMNResultsIsTeamBattle) &&
		(mnResultsGetPlayerCountByPlace(1) == 2) &&
		(gMNResultsPlacement[port_id] == 2))
	{
		return 4;
	}
	else
		return gMNResultsPlacement[port_id] + 1;
}

// 80136100
void mnResultsDrawPlaceRow(s32 y)
{
	GObj* place_row_gobj;
	s32 i;

	place_row_gobj = func_ovl0_800CD050(0, 0, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1F, 0x80000000, -1, GetAddressFromOffset(gMNResultsFilesArray[0], &FILE_022_PLACE_TEXTURE_IMAGE_OFFSET), 1, NULL, 1);
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
		if (gMNResultsIsPresent[i]) {
			mnResultsPositionPlaceNumber(mnResultsCreatePlaceNumber(place_row_gobj, i, mnResultsGetPlaceForDisplay(i), mnResultsGetNumberColorIndex(i)), i, mnResultsGetPlaceForDisplay(i), y);
		}
	}
}

// 80136290
void mnResultsDrawResults0(s32 arg0)
{
	if (gMNResultsFramesElapsed == 0xB4)
		mnResultsCreateOverlay();

	if (gMNResultsFramesElapsed == 0xD2)
	{
		mnResultsCreateColumnHeaders();
		mnResultsDrawKOs(0x42);
	}

	if (gMNResultsFramesElapsed == 0xE6)
		mnResultsDrawTKOs(0x51);

	if (gMNResultsFramesElapsed == 0xFA)
		mnResultsCreateHorizontalLine(0x62);

	if (gMNResultsFramesElapsed == 0x10E)
		mnResultsDrawPointsRow();

	if (gMNResultsFramesElapsed == 0x122)
		mnResultsDrawPlaceRow(0x7C);
}

// 80136358
void mnResultsDrawResults1(s32 arg0)
{
	if (gMNResultsFramesElapsed == 0xB4)
		mnResultsCreateOverlay();

	if (gMNResultsFramesElapsed == 0xD2)
		mnResultsDrawPlaceRow(0x42);

	if (gMNResultsFramesElapsed == 0xE6)
		mnResultsCreateHorizontalLine(0x6E);

	if (gMNResultsFramesElapsed == 0xFA)
	{
		mnResultsCreateColumnHeaders();
		mnResultsDrawKOs(0x7C);
	}
}

// 801363E8
void mnResultsDrawResults2(s32 arg0)
{
	if (gMNResultsFramesElapsed == 0xB4)
		mnResultsCreateOverlay();

	if (gMNResultsFramesElapsed == 0xD2)
	{
		mnResultsCreateColumnHeaders();
		mnResultsDrawKOs(0x42);
	}

	if (gMNResultsFramesElapsed == 0xE6)
		mnResultsDrawTKOs(0x51);

	if (gMNResultsFramesElapsed == 0xFA)
		mnResultsCreateHorizontalLine(0x62);

	if (gMNResultsFramesElapsed == 0x10E)
		mnResultsDrawPointsRow();

	if (gMNResultsFramesElapsed == 0x122)
		mnResultsDrawPlaceRow(0x7C);
}

// 801364B0
void mnResultsDrawResults3(s32 arg0)
{
	if (gMNResultsFramesElapsed == 0xB4)
		mnResultsCreateOverlay();

	if (gMNResultsFramesElapsed == 0xD2)
		mnResultsDrawPlaceRow(0x42);

	if (gMNResultsFramesElapsed == 0xE6)
		mnResultsCreateHorizontalLine(0x6E);

	if (gMNResultsFramesElapsed == 0xFA)
	{
		mnResultsCreateColumnHeaders();
		mnResultsDrawKOs(0x7C);
	}
}

// 80136540
void mnResultsDrawResultsNoContest(s32 arg0)
{
	if (gMNResultsFramesElapsed == 0x1E)
		mnResultsCreateOverlay();

	if (gMNResultsFramesElapsed == 0x3C)
	{
		mnResultsCreateColumnHeaders();
		mnResultsDrawKOs(0x42);
	}

	if (gMNResultsFramesElapsed == 0x50)
		mnResultsDrawTKOs(0x51);
}

// 801365B4
u8 mnResultsGetIsTeamBattle()
{
	return gMNResultsIsTeamBattle;
}

// 801365C0
void mnResultsRenderScreenTitle(s32 screen_title_gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
	gDPSetFillColor(gDisplayListHead[0]++, syDisplayGetFillColor(0xFFFFFFFF));
	gDPFillRectangle(gDisplayListHead[0]++, 32, 42, 282, 44);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

	lbCommonClearExternSpriteParams();
	lbCommonDrawSObjAttr(screen_title_gobj);

	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
}

// 801396B8
f32 D_ovl31_801396B8[] = {

	140.0, 180.0, 120.0, 160.0, 200.0, 100.0, 140.0, 180.0, 220.0
};

// 801366F0
void mnResultsCreateScreenTitle()
{
	GObj* screen_title_gobj;
	intptr_t offsets[2] = {

		0x280, 0x4E0
	};
	uintptr_t results_routines[5] = {

		mnResultsDrawResults0,
		mnResultsDrawResults1,
		mnResultsDrawResults2,
		mnResultsDrawResults3,
		mnResultsDrawResultsNoContest
	};

	screen_title_gobj = func_ovl0_800CD050(0, 0, 0x16, 0x80000000, mnResultsRenderScreenTitle, 0x1F, 0x80000000, -1, GetAddressFromOffset(gMNResultsFilesArray[2], offsets[mnResultsGetIsTeamBattle()]), 1, results_routines[gMNResultsGameRule], 1);
	SObjGetStruct(screen_title_gobj)->pos.x = 32.0f;
	SObjGetStruct(screen_title_gobj)->pos.y = 29.0f;
	SObjGetStruct(screen_title_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(screen_title_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(screen_title_gobj)->sprite.red = 0xFF;
	SObjGetStruct(screen_title_gobj)->sprite.green = 0xFF;
	SObjGetStruct(screen_title_gobj)->sprite.blue = 0xFF;
}

// 80136830
void mnResultsCreateResultsViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0xF, 0x80000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801368D0
void mnResultsCreateLogoViewport()
{
	Camera *cam = CameraGetStruct((GObj*)func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_80017DBC, 0x3C, 0x200000000, -1, 1, 1, 0, 1, 0));
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cam->vec.eye.x = 0.0F;
	cam->vec.eye.y = 0.0F;
	cam->vec.eye.z = 1800.0F;
	cam->vec.at.x = 0.0F;
	cam->vec.at.y = 0.0F;
	cam->vec.at.z = 0.0F;
	cam->vec.up.x = 0.0F;
	cam->vec.up.y = 1.0F;
	cam->vec.up.z = 0.0F;
}

// 801369B4
void mnResultsCreateFighterViewport()
{
	Camera *cam = CameraGetStruct((GObj*)func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_80017DBC, 0x32, 0x00048600, -1, 1, 1, 0, 1, 0));
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cam->vec.eye.x = 0.0F;
	cam->vec.eye.y = 0.0F;
	cam->vec.eye.z = 1800.0F;
	cam->vec.at.x = 0.0F;
	cam->vec.at.y = 0.0F;
	cam->vec.at.z = 0.0F;
	cam->vec.up.x = 0.0F;
	cam->vec.up.y = 1.0F;
	cam->vec.up.z = 0.0F;
}

// 80136A9C
void mnResultsSetKOs()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMNResultsIsPresent[i])
			gMNResultsKOs[i] = gTransferBattleState.players[i].score;
	}
}

// 80136B1C
void mnResultsSetTKOs()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMNResultsIsPresent[i]) {
			gMNResultsTKOs[i] = gTransferBattleState.players[i].falls;
		}
	}
}

// 80136B9C
void mnResultsSetPoints()
{
	s32 i;

	for (i = 0; i < 4; i++)
		gMNResultsPoints[i] = mnResultsGetKOs(i) - mnResultsGetTKOs(i);
}

// 80136C08
s32 mnResultsGetKOsMinusTKOs(s32 port_id)
{
	return gMNResultsKOs[port_id] - gMNResultsTKOs[port_id];
}

// 80136C2C
void mnResultsOrderResults(gmResultsTemp *results, s32 num_players)
{
	gmResultsTemp temp;
	s32 i, j;

	for (i = 0; i < num_players; i++)
	{
		for (j = i + 1; j < num_players; j++)
		{
			if ((results[i].kos_minus_tkos < results[j].kos_minus_tkos) ||
				(
					(gSceneData.unk10) &&
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

// 80136D28
void mnResultsSetPlacementFFA()
{
	gmResultsTemp results[4];
	s32 place;
	s32 score;
	s32 winner;
	s32 num_players;
	s32 i;

	for (i = 0, num_players = 0; i < ARRAY_COUNT(gMNResultsIsPresent); i++)
	{
		if (gMNResultsIsPresent[i])
		{
			results[num_players].kos_minus_tkos = mnResultsGetKOsMinusTKOs(i);
			results[num_players].placement = D_800A4EF8.players[i].placement;
			results[num_players].port_id = i;
			num_players += 1;
		}
	}

	mnResultsOrderResults(results, num_players);

	for (i = 0, place = 0, score = results[0].kos_minus_tkos, winner = results[0].placement; i < num_players; i++)
	{
		if (score != results[i].kos_minus_tkos || ((gSceneData.unk10) && (winner != results[i].placement)))
		{
			place += 1;
			score = results[i].kos_minus_tkos;
			winner = results[i].placement;
		}
		gMNResultsPlacement[results[i].port_id] = place;
	}
}

// 80136FB8
s32 mnResultsGetTeamKOsMinusTKOs(s32 team_id)
{
	s32 i;
	s32 total = 0;

	for (i = 0; i < ARRAY_COUNT(gMNResultsIsPresent); i++)
	{
		if ((gMNResultsIsPresent[i]) && (team_id == gTransferBattleState.players[i].team))
			total += mnResultsGetKOsMinusTKOs(i);
	}

	return total;
}

// 80137068
void mnResultsSetTeamPlacement(s32 team_index, s32 placement)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gMNResultsIsPresent); i++)
	{
		if ((gMNResultsIsPresent[i]) && (team_index == gTransferBattleState.players[i].team))
			gMNResultsPlacement[i] = placement;
	}
}

// 80137108
s32 mnResultsGetFirstPortForTeam(s32 team_id)
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if ((team_id == gTransferBattleState.players[i].team) && (gTransferBattleState.players[i].pl_kind != nFTPlayerKindNot))
			return i + 1;
	}

	return 0;
}

// 801371B8
void mnResultsSetPlacementTeam()
{
	gmResultsTemp results[4];
	s32 place;
	s32 score;
	s32 winner;
	s32 num_players;
	s32 i;

	for (i = 0, num_players = 0; i < 3; i++)
	{
		s32 j = mnResultsGetFirstPortForTeam(i);

		if (j != 0)
		{
			results[num_players].kos_minus_tkos = mnResultsGetTeamKOsMinusTKOs(i);
			results[num_players].placement = D_800A4EF8.players[j - 1].placement;
			results[num_players].port_id = i;
			num_players += 1;
		}
	}

	mnResultsOrderResults(results, num_players);

	for (i = 0, place = 0, score = results[0].kos_minus_tkos, winner = results[0].placement; i < num_players; i++)
	{
		if (score != results[i].kos_minus_tkos || ((gSceneData.unk10) && (winner != results[i].placement)))
		{
			place += 1;
			score = results[i].kos_minus_tkos;
			winner = results[i].placement;
		}
		mnResultsSetTeamPlacement(results[i].port_id, place);
	}
}

// 801372F4
void mnResultsSetPlacementTime()
{
	if (!gMNResultsIsTeamBattle)
		mnResultsSetPlacementFFA();
	else
		mnResultsSetPlacementTeam();
}

// 80137334
void mnResultsSetPlacementStock()
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gMNResultsIsPresent); i++)
	{
		if (gMNResultsIsPresent[i])
			gMNResultsPlacement[i] = gTransferBattleState.players[i].placement;
	}
}

// 801373B4
void mnResultsSetArrays()
{
	if (gTransferBattleState.game_rules == SCBATTLE_GAMERULE_STOCK)
	{
		mnResultsSetKOs();
		mnResultsSetTKOs();
		mnResultsSetPoints();
		mnResultsSetPlacementStock();
	}
	else
	{
		mnResultsSetKOs();
		mnResultsSetTKOs();
		mnResultsSetPoints();
		mnResultsSetPlacementTime();
	}

	if (gMNResultsGameRule == 4)
	{
		s32 i, j;

		for (i = 0; i < ARRAY_COUNT(gMNResultsPlacement); i++)
			gMNResultsPlacement[i] = 0;
	}

	mnResultsSetFtKind();
}

// 80137454
void mnResultsSetIsPresent()
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gMNResultsIsPresent); i++)
	{
		if (gTransferBattleState.players[i].pl_kind == nFTPlayerKindNot)
			gMNResultsIsPresent[i] = FALSE;
		else
			gMNResultsIsPresent[i] = TRUE;
	}
}

// 801374F4
void mnResultsDrawFighter(s32 port_id)
{
	mnResultsSpawnFighter(port_id);
	mnResultsSetFighterPosition(gMNResultsFighterGObjs[port_id], port_id, func_ovl31_80133810(port_id));
	mnResultsSetFighterScale(gMNResultsFighterGObjs[port_id], port_id, mnResultsGetFtKind(port_id), func_ovl31_80133810(port_id));
	mnResultsCreatePlayerIndicator(port_id, gTransferBattleState.players[port_id].player_color);
	mnResultsSetAnim(gMNResultsFighterGObjs[port_id], port_id);
}

// 801375AC
void mnResultsDrawFighters()
{
	s32 i;

	if (gMNResultsIsPresent[0])
		mnResultsDrawFighter(0);

	if (gMNResultsIsPresent[1])
		mnResultsDrawFighter(1);

	if (gMNResultsIsPresent[2])
		mnResultsDrawFighter(2);

	if (gMNResultsIsPresent[3])
		mnResultsDrawFighter(3);

	if (gMNResultsGameRule != 4)
	{
		for (i = 0; i < ARRAY_COUNT(gMNResultsIsPresent); i++)
		{
			if (gMNResultsIsPresent[i])
				mnResultsMakeFighterFaceWinner(gMNResultsFighterGObjs[i], i, mnResultsGetPlacement(i));
		}
	}
}

// 80137698
void mnResultsLoadMatchInfo()
{
	s32 i;

	gMNResultsFramesElapsed = 0;
	gMNResultsHorizontalLineWidth = 0;
	gMNResultsCharacterAlpha = 0;
	gMNResultsIsTeamBattle = gTransferBattleState.is_team_battle;

	for (i = 0; i < ARRAY_COUNT(gMNResultsIsSharedWinner); i++)
		gMNResultsIsSharedWinner[i] = 0;

	if (gTransferBattleState.game_rules == SCBATTLE_GAMERULE_TIME)
	{
		if (gMNResultsIsTeamBattle == FALSE)
			gMNResultsGameRule = 0;
		else
			gMNResultsGameRule = 2;

		gMNResultsMinFramesElapsed = 0x19A;
	}
	else
	{
		if (gMNResultsIsTeamBattle == FALSE)
			gMNResultsGameRule = 1;
		else
			gMNResultsGameRule = 3;

		gMNResultsMinFramesElapsed = 0x172;
	}


	if (gSceneData.is_reset)
	{
		gMNResultsGameRule = 4;
		gMNResultsMinFramesElapsed = 0xC8;

		gMNResultsDrawBackgroundFrame = 1;
		gMNResultsDrawWinnerTextFrame = 1;
		gMNResultsDrawFightersFrame = 1;
	}
	else
	{
		gMNResultsDrawBackgroundFrame = 0x50;
		gMNResultsDrawWinnerTextFrame = 0x78;
		gMNResultsDrawFightersFrame = 0x78;
	}
}

// 801377C0
void func_ovl31_801377C0(s32 arg0)
{
	while (D_8009D960_96D60->unk34 == 0)
		gcStopCurrentProcess(1);

	while (TRUE)
	{
		if (D_8009D960_96D60->unk34 == 0)
		{
			auPlaySong(0, 0x16);
			gcEjectGObj(0);
		}
		gcStopCurrentProcess(1);
	}
}

// 80137854
void func_ovl31_80137854()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000), func_ovl31_801377C0, 0, 1);
}

// 80137898
void func_ovl31_80137898(s32 arg0)
{
	s32 frame = 0;
	s32 winner = mnResultsGetWinnerPort();

	while (TRUE)
	{
		frame += 1;

		if (frame == 0x78)
		{
			func_800044B4(winner);
			func_80004494(winner);
			gcEjectGObj(0);
			gcStopCurrentProcess(1);
		}

		if (frame & 1)
			func_80004474(winner);
		else
			func_80004494(winner);

		gcStopCurrentProcess(1);
	}
}

// 80137938
void func_ovl31_80137938()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0, 0, 0xF, 0x80000000), func_ovl31_80137898, 0, 1);
}

// 8013797C
void func_ovl31_8013797C()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		func_800044B4(i);
		func_80004494(i);
	}
}

// 801379C4
s32 mnResultsGetHumanCount()
{
	s32 i, total = 0;

	for (i = 0; i < 4; i++)
	{
		if (gTransferBattleState.players[i].pl_kind == nFTPlayerKindMan)
			total += 1;
	}

	return total;
}

// 80137A1C
s32 mnResultsGetBestHuman()
{
	s32 i;
	sb32 is_human[4];
	s32 first_human;
	sb32 tie_exists;

	// determine if human or cpu
	for (i = 0; i < 4; i++)
		is_human[i] = (gTransferBattleState.players[i].pl_kind == nFTPlayerKindMan) ? TRUE : FALSE;

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
			if (gMNResultsPoints[first_human] == gMNResultsPoints[i])
				tie_exists = TRUE;

			if (gMNResultsPoints[first_human] < gMNResultsPoints[i])
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
				(gMNResultsPoints[first_human] == gMNResultsPoints[i]) &&
				(gTransferBattleState.players[first_human].handicap < gTransferBattleState.players[i].handicap)
			)
			{
				first_human = i;
			}
		}
	}

	return first_human;
}

// 80137E34
s32 mnResultsGetBestHumanOtherThan(s32 port_id)
{
	s32 i;
	sb32 is_human[4];
	s32 first_human;
	s32 var_a1;

	// determine if human or cpu
	for (i = 0; i < 4; i++)
	{
		is_human[i] = (gTransferBattleState.players[i].pl_kind == nFTPlayerKindMan) ? TRUE : FALSE;
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
		if (is_human[i] && port_id != i && gMNResultsPoints[port_id] == gMNResultsPoints[i])
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
		if (is_human[i] && port_id != i && var_a1 != i && gMNResultsPoints[var_a1] < gMNResultsPoints[i])
			var_a1 = i;
	}

	return var_a1;
}

// 80138130
s32 mnResultsGetWorstHuman()
{
	s32 i;
	sb32 is_human[4];
	s32 first_human;
	sb32 tie_exists;

	// determine if human or cpu
	for (i = 0; i < 4; i++)
		is_human[i] = (gTransferBattleState.players[i].pl_kind == nFTPlayerKindMan) ? TRUE : FALSE;

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
			if (gMNResultsPoints[first_human] == gMNResultsPoints[i])
				tie_exists = TRUE;

			if (gMNResultsPoints[first_human] > gMNResultsPoints[i])
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
				(gMNResultsPoints[first_human] == gMNResultsPoints[i]) &&
				(gTransferBattleState.players[first_human].handicap > gTransferBattleState.players[i].handicap)
			)
			{
				first_human = i;
			}
		}
	}

	return first_human;
}

// 80138548
void mnResultsSetAutoHandicaps(s32 best_human_port_id, s32 worst_human_port_id)
{
	s32 handicap_0 = gTransferBattleState.players[best_human_port_id].handicap;
	s32 handicap_1 = gTransferBattleState.players[worst_human_port_id].handicap;
	s32 other_human_port_id;

	if ((handicap_0 == 1) && (handicap_1 == 9))
	{
		return;
	}
	else if ((handicap_0 > 1) && (handicap_1 < 9))
	{
		gTransferBattleState.players[best_human_port_id].handicap--;
		gTransferBattleState.players[worst_human_port_id].handicap++;
	}
	else if ((handicap_0 == 1) && (handicap_1 < 8))
	{
		gTransferBattleState.players[worst_human_port_id].handicap += 2;
	}
	else if ((handicap_0 > 2) && (handicap_1 == 9))
	{
		gTransferBattleState.players[best_human_port_id].handicap -= 2;
	}
	else if ((handicap_0 == 1) && (handicap_1 == 8))
	{
		other_human_port_id = mnResultsGetBestHumanOtherThan(best_human_port_id);

		if (other_human_port_id != 0x29A)
		{
			gTransferBattleState.players[other_human_port_id].handicap--;
			gTransferBattleState.players[worst_human_port_id].handicap++;
		}
	}
	else if ((handicap_0 == 2) && (handicap_1 == 9))
	{
		other_human_port_id = mnResultsGetBestHumanOtherThan(best_human_port_id);

		if (other_human_port_id != 0x29A)
		{
			gTransferBattleState.players[best_human_port_id].handicap--;
			gTransferBattleState.players[other_human_port_id].handicap--;
		}
	}
}

// 801386BC
void mnResultsAutoHandicap()
{
	if ((gMNResultsGameRule != 4) && (mnResultsGetHumanCount() >= 2))
	{
		mnResultsSetAutoHandicaps(mnResultsGetBestHuman(), mnResultsGetWorstHuman());
	}
}

// 80138714
void mnResultsPlayVictoryTheme()
{
	switch (mnResultsGetFtKind(mnResultsGetWinnerPort()))
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

// 80138830
void func_ovl31_80138830()
{
	f32 sp2C[3] = {

		0.0, 1000.0, -400.0
	};
	f32 sp20[3] = {

		0.0, 1000.0, -1000.0
	};
	s32 foo;

	func_ovl2_80104554(sp20, 0);
	func_ovl2_80104554(sp2C, 1);
}

// 801388A4 - Unused?
void func_ovl31_801388A4() {}

// 801388AC
void mnResultsMain(s32 arg0)
{
	s32 unlocked_features;
	u16 sp_game_complete_mask;
	s32 i;

	gMNResultsFramesElapsed += 1;

	if (gMNResultsFramesElapsed == gMNResultsDrawBackgroundFrame)
	{
		if (gMNResultsGameRule != 4)
			mnResultsCreateBackgroundOverlay2();

		mnResultsCreateBackground();
	}

	if (gMNResultsFramesElapsed == gMNResultsDrawWinnerTextFrame)
	{
		mnResultsDrawWinnerText();
		mnResultsCreateScreenTitle();

		if (gMNResultsGameRule != 4)
			func_ovl31_80138830();
	}

	if (gMNResultsFramesElapsed == gMNResultsDrawFightersFrame)
	{
		mnResultsDrawFighters();
	}

	if (gMNResultsDrawFightersFrame < gMNResultsFramesElapsed)
	{
		if (gMNResultsCharacterAlpha < 0xFF)
		{
			gMNResultsCharacterAlpha += 0x16;

			if (gMNResultsCharacterAlpha >= 0x100)
				gMNResultsCharacterAlpha = 0xFF;
		}

		scSubsysFighterSetLightParams(10.0F, 10.0F, 0xFF, 0xFF, 0xFF, gMNResultsCharacterAlpha);
	}

	mnResultsAnnounceWinner();

	if ((gMNResultsGameRule != 4) && (gMNResultsFramesElapsed == 0x78))
	{
		mnResultsPlayVictoryTheme();
		func_ovl31_80137854();
	}

	if (mnResultsCheckStartPressed())
	{
		unlocked_features = 0;

		if (!(gSaveData.unlock_mask & SCBACKUP_UNLOCK_MASK_ITEMSWITCH) && (gSaveData.unlock_task_itemswitch >= 100))
		{
			gSceneData.prize_unlocks[unlocked_features] = nSCBackupUnlockItemSwitch;
			unlocked_features = 1;
		}

		if (!(gSaveData.unlock_mask & SCBACKUP_UNLOCK_MASK_INISHIE))
		{
			if ((gSaveData.unlock_task_inishie & SCBACKUP_GROUND_MASK_ALL) == SCBACKUP_GROUND_MASK_ALL)
			{
				for (i = 0, sp_game_complete_mask = 0; i < 12; i++)
				{
					if (gSaveData.spgame_records[i].spgame_complete)
						sp_game_complete_mask |= (1 << i);
				}

				if ((sp_game_complete_mask & SCBACKUP_CHARACTER_MASK_STARTER) == SCBACKUP_CHARACTER_MASK_STARTER)
				{
					gSceneData.prize_unlocks[unlocked_features] = nSCBackupUnlockInishie;
					unlocked_features += 1;
				}
			}
		}

		if (unlocked_features != 0)
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = 0xC;
		}
		else
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = 0x10;
		}

		func_800266A0_272A0();
		auStopBGM();
		leoInitUnit_atten();
	}
}

// 80139710
syDisplaySetup D_ovl31_80139710 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 8013972C
scRuntimeInfo D_ovl31_8013972C = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay31ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004E20, 0x00000400,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mnResultsSetupDisplayList, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mnResultsInit,
};

// 80138B70
void mnResultsInit()
{
	rdSetup rldmSetup;
	s32 i;

	rldmSetup.table_addr = &D_NF_001AC870;
	rldmSetup.table_files_num = &D_NF_00000854;
	rldmSetup.file_heap = 0;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = (rdFileNode*) &D_ovl31_80139C50;
	rldmSetup.status_buf_size = 0x78;
	rldmSetup.force_buf = (rdFileNode*) &D_ovl31_8013A010;
	rldmSetup.force_buf_size = 7;
	rdManagerInitSetup(&rldmSetup);
	rdManagerLoadFiles(D_ovl31_80138F70, ARRAY_COUNT(D_ovl31_80138F70), gMNResultsFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl31_80138F70, ARRAY_COUNT(D_ovl31_80138F70)), 0x10));

	gcMakeGObjSPAfter(0, mnResultsMain, 0, 0x80000000U);
	func_8000B9FC(0, 0x80000000U, 0x64, 3, 0xFF);
	efAllocInitParticleBank();
	efManagerInitEffects();
	ftManagerAllocFighter(1, 4);

	for (i = 0; i < 12; i++)
		ftManagerSetupFilesAllKind(i);

	for (i = 0; i < ARRAY_COUNT(gMNResultsAnimHeaps); i++)
		gMNResultsAnimHeaps[i] = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);

	mnResultsSaveDataToSRAM();
	mnResultsLoadMatchInfo();
	mnResultsSetIsPresent();
	mnResultsSetArrays();

	if (gTransferBattleState.handicap_setting == 2) // AUTO
		mnResultsAutoHandicap();

	if (gMNResultsGameRule != 4)
	{
		func_ovl0_800D4404();
		func_ovl0_800D4130(0x20000002, 0, 0xA, 0x100000000);
		func_ovl0_800D430C(mtTrigGetRandomIntRange(0xB), 0x20000000, 0, func_ovl0_800D4248, 0x20, func_ovl0_800D42C8);
	}

	mnResultsCreateLogoViewport();
	mnResultsCreateFighterViewport();
	mnResultsCreatePlayerIndicatorViewport();
	mnResultsCreateWinnerTextViewport();
	mnResultsCreateOverlayViewport();
	mnResultsCreateResultsViewport();
	mnResultsCreateBackgroundOverlayViewport();
	mnResultsCreateBackgroundOverlay2Viewport();

	if (gMNResultsGameRule != 4)
		mnResultsCreateLogo();

	mnResultsCreateBackgroundOverlay();
	func_ovl31_8013797C();

	if ((gMNResultsGameRule != 4) && (gTransferBattleState.players[mnResultsGetWinnerPort()].pl_kind == nFTPlayerKindMan))
		func_ovl31_80137938();

	scSubsysFighterSetLightParams(10.0F, 10.0F, 0xFF, 0xFF, 0xFF, gMNResultsCharacterAlpha);

	if (gMNResultsGameRule != 4)
		func_800269C0_275C0(0x26D);
}

// 80138E64
void vs_results_entry()
{
	s32 i;

	D_ovl31_80139710.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl31_80139710);
	D_ovl31_8013972C.arena_size = (u32) ((uintptr_t)&lOverlay31ArenaHi - (uintptr_t)&lOverlay31ArenaLo);
	func_800A2698(&D_ovl31_8013972C);

	for (i = 0; i < 4; i++)
	{
		func_800044B4(i);
		func_80004494(i);
	}
}
