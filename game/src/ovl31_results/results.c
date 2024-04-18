#include <sys/develop.h>
// #include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <results.h>

// ovl1 stuff
extern f32 menu_zoom[12]; // D_ovl1_80390D90

// hal_audio stuff
typedef struct halAudioUnknown
{
    s32 unks[13];
    s32 unk34;
} halAudioUnknown;
extern halAudioUnknown* D_8009D960;

// ovl30 stuff
// extern RldmFileId D_ovl30_801344D0[5];

extern s32 dMnResultsAnnouncerNames[12]; // 0x80138FA8
extern s32 dMnResultsAnnouncerTeams[12]; // 0x80138FD8

extern intptr_t dMnResultsLogoOffsets[12]; // 0x80138FE4;
extern intptr_t dMnResultsLogoZoomAnimOffsets[12]; // 0x80139014;
extern intptr_t dMnResultsLogoColorAnimOffsets[12]; // 0x80139044;
extern s32 dMnResultsTeamColorIndexes[3]; // 0x80139074;
extern gsColorRGBPair dMnResultsUnusedBackgroundColors[4]; // 0x80139080;
extern uintptr_t dMnResultsUnusedBackgroundColorArrays[4]; // 0x80139098;
extern s32 dMnResultsBackgroundTeamColorIndexes[3]; // 0x801390A8;
extern gsColorRGBPair dMnResultsBackgroundColors[4]; // 0x801390B4;

extern f32 dMnResultsFighterXPositions2P[2][4]; // 0x801390CC;
extern f32 dMnResultsFighterXPositions3P[3][4]; // 0x801390EC;
extern f32 dMnResultsFighterXPositions4P[4][4]; // 0x8013911C;
extern Vec2f dMnResultsFighterYZPositions[4]; // 0x8013915C;
extern s32 mnResultsVictoryAnims[3]; // 0x8013917C;

extern Vec2f dMnResultsIndicatorPositions2P[2][4]; // 0x801391AC;
extern Vec2f dMnResultsIndicatorPositions3P[3][4]; // 0x801391EC;
extern Vec2f dMnResultsIndicatorPositions4P[4][4]; // 0x8013924C;
extern f32 dMnResultsIndicatorYOffsets[12][4] = {
    {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0},
    {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}
}; // 0x801392CC;
extern gsColorRGBPair dMnResultsUnusedIndicatorColors[4]; // 0x8013938C;
extern intptr_t dMnResultsIndicatorOffsets[4]; // 0x801393A4;
extern f32 dMnResultsCharWidths[28]; // 0x801393B4;
extern intptr_t dMnResultsCharOffsets[28]; // 0x80139424;
extern gsColorRGBPair dMnResultsCharColors[5]; // 0x80139494;
extern f32 dMnResultsWinsXByKind[12]; // 0x801394B4;
extern f32 dMnResultsWinsXByTeam[3]; // 0x801394E4;
extern char* dMnResultsWinnerStringByKind[12]; // 0x801394F0;
extern f32 dMnResultsNameXByKind[12]; // 0x80139520;
extern f32 dMnResultsNameScaleXByKind[12]; // 0x80139550;
extern char* dMnResultsWinnerStringByTeam[9]; // 0x80139580;
extern f32 dMnResultsNameXByTeam[9]; // 0x801395A4;
extern gsColorRGBPair dMnResultsNumberColors[5]; // 0x801395C8
extern intptr_t dMnResultsNumberOffsets[10]; // 0x801395E8
extern gsColorRGBPair dMnResultsUnusedNumberColors[5]; // 0x80139610
extern intptr_t dMnResultsPlaceNumberOffsets[10]; // 0x80139630;
extern gsColorRGBPair dMnResultsPlaceNumberUnusedColors[5]; // 0x80139658;
extern f32 dMnResultsColumnX2P[2]; // 0x80139678;
extern f32 dMnResultsColumnX3P[3]; // 0x80139680;
extern f32 dMnResultsColumnX4P[4]; // 0x8013968C;
extern s32 dMnResultsNumberTeamColorIndexes[3]; // 0x8013969C
extern intptr_t dMnResultsPortIndicatorOffsets[4]; // 0x801396A8

extern intptr_t dMnResultsScreenTitleOffsets[2]; // 0x801396DC
extern uintptr_t dMnResultsRoutines[5]; // 0x801396E4

extern char dMnResultsStringWin[] = "W1I1N1!"; // 0x801397C0
extern char dMnResultsStringWins[] = "W1I1N1S1!"; // 0x801397C8

extern char dMnResultsStringNoContest[] = "NO CONTEST"; // 0x80139854

// extern rdFileNode dMnStageTrainingBackgroundFileNodes[3]; // 0x80134550
// extern s32 dMnStageTrainingBackgroundIDs[10]; // 0x80134568

// extern Lights1 D_ovl30_80134590 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14); // 20202000 20202000 FFFFFF00 FFFFFF00 14141400 00000000
// extern Gfx D_ovl30_801345A8[/* */] =
// {
//     gsSPSetGeometryMode(G_LIGHTING),
//     gsSPSetLights1(D_ovl30_80134590),
//     gsSPEndDisplayList()
// };

// extern intptr_t dMnStageChrOffsets[29]; // 0x801345D0[29]

// extern s32 dMnStageIDOrder[10]; // 0x80134644[10];
// extern intptr_t dMnStageImageOffsets[10]; // 0x8013466C[10]
// extern Vec2f dMnStageNamePositions[9]; // 0x80134694[9];
// extern intptr_t dMnStageNameImageOffsets[9]; // 0x801346DC[9];
// extern Vec2f dMnStageLogoPositions[10]; // 0x801347E4[10]
// extern Vec2f dMnStageLogoOffsets[9]; // 0x80134834[9]
// extern f32 dMnStagePreviewScale[9]; // 0x80134858[9]
// extern Vec2f dMnStagePreviewTranslations[9]; // 0x8013487C[9]

// extern scUnkDataBounds D_ovl30_8013490C;
// extern scRuntimeInfo D_ovl30_80134928;

// extern s32 D_ovl30_801348E8[9]; // unused, probably stage_ids

// extern s32 gMnStageCursorSlotId; // 0x80134BD8
// extern GObj* gMnStageCursorGobj; // 0x80134BDC
// extern GObj* gMnStageNameLogoGobj; // 0x80134BE0
// extern GObj* gMnStageHeap0BackgroundGobj; // 0x80134BE4
// extern GObj* gMnStageHeap1BackgroundGobj; // 0x80134BE8
// extern GObj* gMnStageHeap0StageInfoArray[4]; // 0x80134BF0
// extern GObj* gMnStageHeap1StageInfoArray[4]; // 0x80134C00
// extern gmGroundInfo* gMnStageGroundInfo; // 0x80134C10
// extern Camera* gMnStagePreviewCam; // 0x80134C14;
// extern sb32 gMnStageIsTrainingMode; // 0x80134C18
// extern u8 gMnStageUnlockedMask; // 0x80134C1C; // flag indicating which bonus features are available
// extern s32 gMnStageCurrentHeap; // 0x80134C20

extern s32 gMnResultsFramesElapsed; // 0x80139B78; // frames elapsed on Results screen

extern s32 gMnResultsHorizontalLineWidth; // 0x80139B7C;
extern s32 gMnResultsKOs[4]; // 0x80139B80
extern s32 gMnResultsTKOs[4]; // 0x80139B90
extern s32 gMnResultsPoints[4]; // 0x80139BA0;
extern s32 gMnResultsPlacement[4]; // 0x80139BB0
extern u32 gMnResultsOverlayAlpha; // 0x80139BC0;
extern u32 gMnResultsBackgroundOverlayAlpha; // 0x80139BC4;
extern u32 gMnResultsBackgroundOverlay2Alpha; // 0x80139BC8;

extern sb32 gMnResultsIsPresent[4]; // 0x80139BD0
extern GObj* gMnResultsFighterGObjs[4]; // 0x80139BE0
extern s32 gMnResultsFtKind[4]; // 0x80139BF0
extern void* gMnResultsAnimHeaps[4]; // 0x80139C00
extern s32 gMnResultsGameRule; // 0x80139C10
extern ub8 gMnResultsIsTeamBattle; // 0x80139C14
extern s32 gMnResultsMinFramesElapsed; // 0x80139C18 // frames to wait until pressing start will exit the Results screen

extern sb32 gMnResultsIsSharedWinner[4]; // 0x80139C20

// extern uintptr_t gMnStageModelHeap0Ptr; // 80134E24;
// extern uintptr_t gMnStageModelHeap1Ptr; // 80134E28;

// extern rdFileNode D_ovl30_80134D20;
// extern u32 D_ovl30_80134C30[240];
// extern uintptr_t D_NF_001AC870;
// extern uintptr_t D_NF_00000854;

extern s32 gMnResultsFilesArray[8]; // 0x8013A048[8]
// gMnResultsFilesArray[0] - 0x8013A048; // file 0x022 pointer
// gMnResultsFilesArray[1] - 0x8013A04C; // file 0x026 pointer
// gMnResultsFilesArray[2] - 0x8013A050; // file 0x012 pointer
// gMnResultsFilesArray[3] - 0x8013A054; // file 0x0A4 pointer
// gMnResultsFilesArray[4] - 0x8013A058; // file 0x023 pointer
// gMnResultsFilesArray[5] - 0x8013A05C; // file 0x024 pointer
// gMnResultsFilesArray[6] - 0x8013A060; // file 0x025 pointer
// gMnResultsFilesArray[7] - 0x8013A064; // file 0x019 pointer

// Offsets
extern intptr_t FILE_022_TKO_TEXTURE_IMAGE_OFFSET = 0x358; // file 0x022 image offset for TKO texture
extern intptr_t FILE_022_PLACE_TEXTURE_IMAGE_OFFSET = 0x990; // file 0x022 image offset for Place texture
extern intptr_t FILE_022_POINTS_TEXTURE_IMAGE_OFFSET = 0x10D8; // file 0x022 image offset for Pts texture
extern intptr_t FILE_022_KOS_TEXTURE_IMAGE_OFFSET = 0xD38; // file 0x022 image offset for KOs texture
extern intptr_t FILE_022_BACKGROUND_IMAGE_OFFSET = 0xD5C8; // file 0x022 image offset for background image
extern intptr_t FILE_022_FIRST_PLACE_ICON_IMAGE_OFFSET = 0xE2A0; // file 0x022 image offset for 1st place icon

extern intptr_t FILE_024_DASH_IMAGE_OFFSET = 0x710; // file 0x024 image offset for dash

extern intptr_t FILE_026_INDICATOR_CP_IMAGE_OFFSET = 0xCD8; // file 0x026 image offset for CPU player indicator

extern intptr_t FILE_0A4_1_IMAGE_OFFSET = 0x2D8; // file 0x0A4 image offset for number 1

// extern intptr_t FILE_01A_TRAINING_BACKGROUND_IMAGE_OFFSET = 0x20718; // also file 0x1B and 0x1C

// extern intptr_t FILE_01E_CURSOR_IMAGE_OFFSET = 0x1AB8; // file 0x1E image offset for cursor
// extern intptr_t FILE_01E_SMASH_LOGO_IMAGE_OFFSET = 0x1DD8; // file 0x1E image offset for Smash logo
// extern intptr_t FILE_01E_STAGE_SELECT_IMAGE_OFFSET = 0x26A0; // file 0x1E image offset for wooden circle
// extern intptr_t FILE_01E_WOODEN_CIRCLE_IMAGE_OFFSET = 0x3840; // file 0x1E image offset for wooden circle
// extern intptr_t FILE_01E_YELLOW_OVAL_RIGHT_IMAGE_OFFSET = 0x3C68; // file 0x1E image offset for yellow oval right edge
// extern intptr_t FILE_01E_YELLOW_OVAL_CENTER_IMAGE_OFFSET = 0x3D68; // file 0x1E image offset for yellow oval center
// extern intptr_t FILE_01E_YELLOW_OVAL_LEFT_IMAGE_OFFSET = 0x3FA8; // file 0x1E image offset for yellow oval left edge
// extern intptr_t FILE_01E_STAGE_PREVIEW_PATTERNED_BG_IMAGE_OFFSET = 0xC728; // file 0x1E image offset for patterned stage preview bg texture
// extern intptr_t FILE_01E_RANDOM_IMAGE_OFFSET = 0xCB10; // file 0x1E image offset for Random stage image
// extern intptr_t FILE_01E_RANDOM_STAGE_PREVIEW_BG_IMAGE_OFFSET = 0xDE30; // file 0x1E image offset for Random stage image

// 0x80131B20
void mnResultsSetupDisplayList(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
}

// 0x80131B78
s32 mnResultsGetPlayerCount()
{
    return D_800A4D08.pl_count + D_800A4D08.cp_count;
}

// 0x80131B90
void mnResultsSaveDataToSRAM()
{
    struct gmSaveVSRecord* vs_record;
    s32 i, j;
    u8 ft_kind, opp_ft_kind;

    gSaveData.vsgame_total += 1;
    gSaveData.unlock_task_inishie |= 1 << D_800A4D08.gr_kind;

    if (gSaveData.unlock_task_itemswitch < 0xFF)
    {
        gSaveData.unlock_task_itemswitch += 1;
    }

    for (i = 0; i < 4; i++)
    {
        if (D_800A4D08.player_block[i].player_kind != 2)
        {
            ft_kind = D_800A4D08.player_block[i].character_kind;
            vs_record = &gSaveData.vs_records[ft_kind];

            vs_record->time_used += (D_800A4D08.match_time_current / 60);

            if (vs_record->time_used >= I_MIN_TO_FRAMES(1000))
            {
                vs_record->time_used = I_MIN_TO_FRAMES(1000) - 1;
            }

            vs_record->damage_dealt += D_800A4D08.player_block[i].total_damage_dealt;

            if (vs_record->damage_dealt >= 1000000)
            {
                vs_record->damage_dealt = 999999;
            }

            vs_record->damage_taken += D_800A4D08.player_block[i].total_damage_all;

            if (vs_record->damage_taken >= 1000000)
            {
                vs_record->damage_taken = 999999;
            }

            vs_record->self_destructs += D_800A4D08.player_block[i].total_self_destruct;

            if (vs_record->self_destructs >= 10000)
            {
                vs_record->self_destructs = 9999;
            }

            vs_record->games_played += 1;
            vs_record->player_count_tally += mnResultsGetPlayerCount();

            for (j = 0; j < 4; j++)
            {
                if ((i != j) && (D_800A4D08.player_block[j].player_kind != Pl_Kind_Not))
                {
                    opp_ft_kind = D_800A4D08.player_block[j].character_kind;

                    gSaveData.vs_records[ft_kind].ko_count[opp_ft_kind] += D_800A4D08.player_block[i].total_ko_player[j];
                    if (gSaveData.vs_records[ft_kind].ko_count[opp_ft_kind] >= 10000)
                    {
                        gSaveData.vs_records[ft_kind].ko_count[opp_ft_kind] = 9999;
                    }

                    gSaveData.vs_records[ft_kind].player_count_tallies[opp_ft_kind] += mnResultsGetPlayerCount();
                    gSaveData.vs_records[ft_kind].played_against[opp_ft_kind] += 1;
                }
            }
        }
    }

    lbMemory_SaveData_WriteSRAM();
}

// 0x80131E18
sb32 mnResultsCheckStartPressed()
{
    s32 i;

    if (gMnResultsFramesElapsed >= gMnResultsMinFramesElapsed)
    {
        for (i = 0; i < ARRAY_COUNT(gPlayerControllers); i++)
        {
            if (gPlayerControllers[i].button_new & START_BUTTON)
            {
                return TRUE;
            }
        }
    }

    return FALSE;
}

// 0x80131EB0
void mnResultsAnnounceWinner()
{
    s32 announcer_names[12] = dMnResultsAnnouncerNames;
    s32 announcer_teams[3] = dMnResultsAnnouncerTeams;

    if (gMnResultsGameRule == 4)
    {
        // No Contest
        switch (gMnResultsFramesElapsed)
        {
            case 0x2:
                func_800269C0(0x1F6U);
                return;
            case 0x47:
                func_800269C0(0x270U);
                return;
        }
    }
    else if (gMnResultsIsTeamBattle == FALSE)
    {
        // FFA - "This Game's Winner Is..."
        switch (gMnResultsFramesElapsed)
        {
            case 0x51:
                func_800269C0(0x216U);
                return;
            case 0xD2:
                func_800269C0(announcer_names[mnResultsGetFtKind(mnResultsGetWinnerPort())]);
                return;
            case 0x10E:
                func_800269C0(0x272U);
                return;
        }
    }
    else
    {
        // Teams - "Red/Blue/Grean Team Wins!"
        switch (gMnResultsFramesElapsed)
        {
            case 0x51:
                func_800269C0(announcer_teams[mnResultsGetWinningTeam()]);
                return;
            case 0x82:
                func_800269C0(0x215U);
                return;
            case 0x96:
                func_800269C0(0x272U);
                return;
        }
    }
}

// 0x8013205C
s32 mnResultsGetPresentCount()
{
    s32 i, sum = 0;

    for (i = 0; i < ARRAY_COUNT(gMnResultsIsPresent); i++)
    {
        if (gMnResultsIsPresent[i] == TRUE)
        {
            sum += 1;
        }
    }

    return sum;
}

// 0x801320B8
s32 mnResultsGetLowerPortCount(s32 port_id) {
    s32 i;
    s32 sum = 0;

    for (i = 0; i < ARRAY_COUNT(gMnResultsIsPresent); i++)
    {
        if (port_id != i)
        {
            if (gMnResultsIsPresent[i] == TRUE)
            {
                sum += 1;
            }
        }
        else break;
    }

    return sum;
}

// 0x80132100
s32 mnResultsGetPortByPlace(s32 place)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gMnResultsIsPresent); i++)
    {
        if ((gMnResultsIsPresent[i] != FALSE) && (place == gMnResultsPlacement[i]))
        {
            return i;
        }
    }

    return -1;
}

// 0x801321AC
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
                if (gMnResultsPlacement[port_id] == 0)
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
                    {
                        num_opponents = mnResultsGetLowerPortCount(mnResultsGetPortByPlace(0));
                    }
                }
                break;
            default:
                switch (port_id)
                {
                    case 0:
                        if ((gMnResultsPlacement[0] == 0) && (gMnResultsPlacement[1] != 0)) {
                            num_opponents = 1;
                        }
                        break;
                    case 1:
                        if ((gMnResultsPlacement[0] == 0) && (gMnResultsPlacement[1] != 0)) {
                            num_opponents = 0;
                        }
                        break;
                    case 2:
                        if ((gMnResultsPlacement[3] == 0) && (gMnResultsPlacement[2] != 0)) {
                            num_opponents = 3;
                        }
                        break;
                    case 3:
                        if ((gMnResultsPlacement[3] == 0) && (gMnResultsPlacement[2] != 0)) {
                            num_opponents = 2;
                        }
                        break;
                }
                break;
        }
    }

    return num_opponents;
}

// 0x8013234C
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
    if ((gMnResultsGameRule == gmMatch_GameRule_Time) || (gMnResultsGameRule == gmMatch_GameRule_Stock))
    {
        for (i = 0; i < 4; i++)
        {
            if ((gMnResultsIsPresent[i] == TRUE) && (gMnResultsPlacement[i] == 0)) {
                return i;
            }
        }
    }
    else
    {
        // If here, it's teams

        // Get KOs minus TKOs for each port
        for (i = 0; i < 4; i++)
        {
            kos_minus_tkos[i] = mnResultsGetKOsMinusTKOs(i); // gets kos minus tkos
        }

        // Set lowest present port to winner and remember which ports may be the winner
        for (i = 0; i < 4; i++)
        {
            if ((gMnResultsIsPresent[i] != FALSE) && (gMnResultsPlacement[i] == 0))
            {
                if (winner_port_id == 0x29A)
                {
                    winner_port_id = i;
                }
                potential_first_place[i] = TRUE;
            }
            else
            {
                potential_first_place[i] = FALSE;
            }
        }

        // Initialize as no multi winners
        for (i = 0; i < 4; i++)
        {
            multi_winner[i] = FALSE;
        }

        // Get the winner port based on highest KOs minus TKOs score
        for (i = winner_port_id + 1; i < 4; i++)
        {
            if ((potential_first_place[i] != FALSE) && (kos_minus_tkos[winner_port_id] < kos_minus_tkos[i]))
            {
                winner_port_id = i;
            }
        }

        is_multi_winner = FALSE;

        // Figure out if any potential winners have the same KOs minus TKOs score
        for (i = winner_port_id + 1; i < 4; i++)
        {
            if ((potential_first_place[i] != FALSE) && (kos_minus_tkos[winner_port_id] == kos_minus_tkos[i]))
            {
                multi_winner[winner_port_id] = multi_winner[i] = TRUE;
                is_multi_winner = TRUE;
            }
        }

        if (is_multi_winner != FALSE)
        {
            // Break the tie based on number of KOs
            for (i = winner_port_id + 1; i < 4; i++)
            {
                if ((multi_winner[i] != FALSE) && (gMnResultsKOs[winner_port_id] < gMnResultsKOs[i]))
                {
                    winner_port_id = i;
                }
            }

            for (i = 0; i < 4; i++)
            {
                gMnResultsIsSharedWinner[i] = FALSE;
            }

            for (i = winner_port_id + 1; i < 4; i++)
            {
                if (gMnResultsKOs[winner_port_id] == gMnResultsKOs[i])
                {
                    gMnResultsIsSharedWinner[i] = TRUE;
                    gMnResultsIsSharedWinner[winner_port_id] = TRUE;
                }
            }
        }

        return winner_port_id;
    }
}

// 0x80132A2C
u8 mnResultsGetWinningTeam()
{
    return D_800A4D08.player_block[mnResultsGetWinnerPort()].team_index;
}

// 0x80132A68
void mnResultsAnimateLogo(GObj* logo_gobj)
{
    f32 new_scale;
    f32 min_scale = 10.0F;
    f32 max_y = 1000.0F;

    if (gMnResultsFramesElapsed >= 0x28)
    {
        if (min_scale < DObjGetStruct(logo_gobj)->scale.vec.f.x)
        {
            new_scale = DObjGetStruct(logo_gobj)->scale.vec.f.x - 0.15F;

            if (new_scale < min_scale)
            {
                new_scale = min_scale;
            }

            DObjGetStruct(logo_gobj)->scale.vec.f.x = new_scale;
            DObjGetStruct(logo_gobj)->scale.vec.f.y = new_scale;
        }

        if (DObjGetStruct(logo_gobj)->translate.vec.f.y < max_y)
        {
            DObjGetStruct(logo_gobj)->translate.vec.f.y += 11.0F;

            if (max_y < DObjGetStruct(logo_gobj)->translate.vec.f.y)
            {
                DObjGetStruct(logo_gobj)->translate.vec.f.y = max_y;
            }
        }
    }
}

// 0x80132B20
void mnResultsCreateLogo()
{
    GObj* logo_gobj;
    s32 winner_port_id;
    s32 winner_char_id;
    s32 color;
    intptr_t offsets1[12] = dMnResultsLogoOffsets;
    intptr_t offsets2[12] = dMnResultsLogoZoomAnimOffsets;
    intptr_t offsets3[12] = dMnResultsLogoColorAnimOffsets;
    s32 colors[3] = dMnResultsTeamColorIndexes;

    if (gMnResultsIsTeamBattle == FALSE)
    {
        s32 winner_port_id;
        winner_port_id = mnResultsGetWinnerPort();
        winner_char_id = mnResultsGetFtKind(winner_port_id);
        color = winner_port_id;
    }

    if (gMnResultsIsTeamBattle == TRUE)
    {
        winner_char_id = mnResultsGetFtKind(mnResultsGetWinnerPort());
        color = colors[mnResultsGetWinningTeam()];
    }

    logo_gobj = omMakeGObjCommon(0, 0, 0x17, 0x80000000);

    func_8000F120(logo_gobj, GetAddressFromOffset(gMnResultsFilesArray[4], offsets1[winner_char_id]), 0);
    omAddGObjRenderProc(logo_gobj, odRenderDObjTreeForGObj, 0x21, 0x80000000, -1);
    func_8000F8F4(logo_gobj, GetAddressFromOffset(gMnResultsFilesArray[4], offsets2[winner_char_id]));
    func_8000BE28(logo_gobj, GetAddressFromOffset(gMnResultsFilesArray[4], offsets3[winner_char_id]), color);
    func_8000DF34(logo_gobj);
    omAddGObjCommonProc(logo_gobj, &mnResultsAnimateLogo, 1, 1);

    DObjGetStruct(logo_gobj)->translate.vec.f.x = 0.0F;
    DObjGetStruct(logo_gobj)->translate.vec.f.y = 100.0F;
    DObjGetStruct(logo_gobj)->translate.vec.f.z = -11000.0F;
    DObjGetStruct(logo_gobj)->scale.vec.f.x = 25.0F;
    DObjGetStruct(logo_gobj)->scale.vec.f.y = 25.0F;
}

// 0x80132D84
void mnResultsRenderBackground(GObj* bg_gobj)
{
    SObj* bg_sobj = SObjGetStruct(bg_gobj);

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, bg_sobj->sprite.red, bg_sobj->sprite.green, bg_sobj->sprite.blue, bg_sobj->sprite.alpha);
    gDPSetEnvColor(gDisplayListHead[0]++, bg_sobj->shadow_color.r, bg_sobj->shadow_color.g, bg_sobj->shadow_color.b, bg_sobj->shadow_color.a);
    gDPSetCombineLERP(gDisplayListHead[0]++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,  0, 0, 0, 1,  PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT,  0, 0, 0, 1);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    func_ovl0_800CCF74(bg_gobj);
}

// 0x80132EA8
void mnResultsCreateBackground()
{
    GObj* bg_gobj;
    SObj* bg_sobj;
    GObj *camera_gobj;
    s32 stack_fix_1, stack_fix_2;
    s32 winner_port_id;
    gsColorRGBPair unused_colors[4] = dMnResultsUnusedBackgroundColors;
    uintptr_t unused_array_pointers[4] = dMnResultsUnusedBackgroundColorArrays;
    s32 team_colors[3] = dMnResultsBackgroundTeamColorIndexes;
    gsColorRGBPair colors[4] = dMnResultsBackgroundColors;
    Camera *cam;

    camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    if (gMnResultsGameRule == 4)
    {
        winner_port_id = lbRandom_GetIntRange(4);
    }
    else
    {
        if (gMnResultsIsTeamBattle == FALSE)
        {
            winner_port_id = mnResultsGetWinnerPort();
        }

        if (gMnResultsIsTeamBattle == TRUE)
        {
            winner_port_id = team_colors[mnResultsGetWinningTeam()];
        }
    }

    bg_gobj = omMakeGObjCommon(0, 0, 0x11, 0x80000000);
    omAddGObjRenderProc(bg_gobj, mnResultsRenderBackground, 0x1A, 0x80000000, -1);

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(gMnResultsFilesArray[0], &FILE_022_BACKGROUND_IMAGE_OFFSET));

    SObjGetStruct(bg_gobj)->pos.x = 10.0f;
    SObjGetStruct(bg_gobj)->pos.y = 10.0f;
    bg_sobj->shadow_color.r = colors[winner_port_id].prim.r;
    bg_sobj->shadow_color.g = colors[winner_port_id].prim.g;
    bg_sobj->shadow_color.b = colors[winner_port_id].prim.b;
    bg_sobj->sprite.red = colors[winner_port_id].env.r;
    bg_sobj->sprite.green = colors[winner_port_id].env.g;
    bg_sobj->sprite.blue = colors[winner_port_id].env.b;
}

// 0x80133134
s32 mnResultsGetPlacement(s32 port_id)
{
    return gMnResultsPlacement[port_id];
}

// 0x80133148
s32 mnResultsGetFtKind(s32 port_id)
{
    return gMnResultsFtKind[port_id];
}

// 0x8013315C
void mnResultsSetFtKind()
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gMnResultsIsPresent); i++)
    {
        if (gMnResultsIsPresent[i] != FALSE)
        {
            gMnResultsFtKind[i] = D_800A4D08.player_block[i].character_kind;
        }
    }
}

// 0x801331DC
void mnResultsSetFighterPosition(GObj* fighter_gobj, s32 port_id, s32 place)
{
    f32 x_positions_2p[2][4] = dMnResultsFighterXPositions2P;
    f32 x_positions_3p[3][4] = dMnResultsFighterXPositions3P;
    f32 x_positions_4p[4][4] = dMnResultsFighterXPositions4P;
    Vec2f yz_positions[4] = dMnResultsFighterYZPositions;

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

// 0x801333E4
void mnResultsMakeFighterFaceWinner(GObj* fighter_gobj, s32 port_id, s32 place)
{
    s32 winner_port_id = mnResultsGetWinnerPort();

    if (place != 0)
    {
        DObj* fighter_dobj = DObjGetStruct(fighter_gobj);
        DObj* winner_dobj = DObjGetStruct(gMnResultsFighterGObjs[winner_port_id]);
        f32 x1 = fighter_dobj->translate.vec.f.x;
        f32 z1 = fighter_dobj->translate.vec.f.z;
        f32 x2 = winner_dobj->translate.vec.f.x;
        f32 z2 = winner_dobj->translate.vec.f.z;

        DObjGetStruct(fighter_gobj)->rotate.vec.f.y = atan2f(x2 - x1, z2 - z1);
    }
}

// 0x8013345C
s32 mnResultsGetVictoryAnim(s32 ft_kind)
{
    s32 victory_anims[3] = mnResultsVictoryAnims;

    if (ft_kind == Ft_Kind_Kirby)
    {
        return victory_anims[lbRandom_GetIntRange(2)];
    }
    else
    {
        return victory_anims[lbRandom_GetIntRange(3)];
    }
}

// 0x801334CC
s32 mnResultsGetDefeatedAnim(s32 ft_kind)
{
    return 0x10005;
}

// 0x801334DC
void mnResultsSetAnim(GObj* fighter_gobj, s32 port_id)
{
    if (gMnResultsGameRule == 4)
    {
        func_ovl1_803905CC(fighter_gobj, mnResultsGetDefeatedAnim(mnResultsGetFtKind(port_id)));
        return;
    }

    switch (mnResultsGetPresentCount())
    {
        case 2:
            switch (gMnResultsPlacement[port_id])
            {
                case 0:
                    func_ovl1_803905CC(fighter_gobj, mnResultsGetVictoryAnim(mnResultsGetFtKind(port_id)));
                    return;
                case 1:
                    func_ovl1_803905CC(fighter_gobj, mnResultsGetDefeatedAnim(mnResultsGetFtKind(port_id)));
                    return;
            }
            break;
        case 3:
            if (gMnResultsPlacement[port_id] == 0)
            {
                func_ovl1_803905CC(fighter_gobj, mnResultsGetVictoryAnim(mnResultsGetFtKind(port_id)));
                return;
            }
            else
            {
                func_ovl1_803905CC(fighter_gobj, mnResultsGetDefeatedAnim(mnResultsGetFtKind(port_id)));
                return;
            }
        case 4:
        default:
            if (gMnResultsPlacement[port_id] == 0)
            {
                func_ovl1_803905CC(fighter_gobj, mnResultsGetVictoryAnim(mnResultsGetFtKind(port_id)));
                return;
            }
            else
            {
                func_ovl1_803905CC(fighter_gobj, mnResultsGetDefeatedAnim(mnResultsGetFtKind(port_id)));
                return;
            }
    }
}

// 0x80133684
s32 mnResultsGetPlayerCountByPlace(s32 place)
{
    s32 sum = 0;
    s32 i;

    for (i = 0; i < 4; i++)
    {
        if ((gMnResultsIsPresent[i] != FALSE) && (place == gMnResultsPlacement[i]))
        {
            sum += 1;
        }
    }

    return sum;
}

// 0x80133718
s32 mnResultsGetPlayerCountAhead(s32 port_id)
{
    s32 sum = 0;
    s32 i;

    for (i = 0; i < 4; i++)
    {
        if ((port_id != i) && (gMnResultsIsPresent[i] != FALSE) && (gMnResultsPlacement[i] < gMnResultsPlacement[port_id]))
        {
            sum += 1;
        }
    }

    return sum;
}

// 0x80133810
s32 func_ovl31_80133810(s32 port_id)
{
    s32 sp40[4] = D_ovl31_80139188;
    s32 sp2C[5] = D_ovl31_80139198;

    return  gMnResultsPlacement[port_id] + sp40[gMnResultsPlacement[port_id] - mnResultsGetPlayerCountAhead(port_id)] + sp2C[mnResultsGetPlayerCountByPlace(gMnResultsPlacement[port_id])];
}

// 0x801338EC
void mnResultsSetFighterScale(GObj* fighter_gobj, s32 port_id, s32 ft_kind, s32 place)
{
    DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ft_kind];
    DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ft_kind];
    DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ft_kind];
}

// 0x8013392C
void mnResultsSpawnFighter(s32 port_id)
{
    s32 foo, bar, baz;
    ftCreateDesc spawn_info = dFtDefaultFighterDesc;

    spawn_info.ft_kind = mnResultsGetFtKind(port_id);
    spawn_info.costume = D_800A4D08.player_block[port_id].costume_index;
    spawn_info.shade = D_800A4D08.player_block[port_id].shade_index;
    spawn_info.anim_heap = gMnResultsAnimHeaps[port_id];
    gMnResultsFighterGObjs[port_id] = ftManager_MakeFighter(&spawn_info);
}

// 0x801339F4
void mnResultsSetIndicatorPosition(GObj* indicator_gobj, s32 port_id)
{
    s32 sp214;
    s32 temp_s0;
    Vec2f xy_positions_2p[2][4] = dMnResultsIndicatorPositions2P;
    Vec2f xy_positions_3p[3][4] = dMnResultsIndicatorPositions3P;
    Vec2f xy_positions_4p[4][4] = dMnResultsIndicatorPositions4P;
    f32 y_positions_kind[12][4] = dMnResultsIndicatorYOffsets;

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

// 0x80133C58
void mnResultsCreatePlayerIndicator(s32 port_id, s32 color_index)
{
    GObj* indicator_gobj;
    SObj* indicator_sobj;
    gsColorRGBPair colors[4] = dMnResultsUnusedIndicatorColors;
    intptr_t offsets[4] = dMnResultsIndicatorOffsets;

    indicator_gobj = omMakeGObjCommon(0, 0, 0x12, 0x80000000);
    omAddGObjRenderProc(indicator_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

    if (D_800A4D08.player_block[port_id].player_kind == 0)
    {
        indicator_sobj = gcAppendSObjWithSprite(indicator_gobj, GetAddressFromOffset(gMnResultsFilesArray[1], offsets[port_id]));
        indicator_sobj->sprite.attr &= ~SP_FASTCOPY;
        indicator_sobj->sprite.attr |= SP_TRANSPARENT;
        indicator_sobj->shadow_color.r = ifPlayer_Tag_ShadowColorsR[color_index];
        indicator_sobj->shadow_color.g = ifPlayer_Tag_ShadowColorsG[color_index];
        indicator_sobj->shadow_color.b = ifPlayer_Tag_ShadowColorsB[color_index];
        indicator_sobj->sprite.red = ifPlayer_Tag_SpriteColorsR[color_index];
        indicator_sobj->sprite.green = ifPlayer_Tag_SpriteColorsG[color_index];
        indicator_sobj->sprite.blue = ifPlayer_Tag_SpriteColorsB[color_index];
    }
    else
    {
        indicator_sobj = gcAppendSObjWithSprite(indicator_gobj, GetAddressFromOffset(gMnResultsFilesArray[1], &FILE_026_INDICATOR_CP_IMAGE_OFFSET));
        indicator_sobj->sprite.attr &= ~SP_FASTCOPY;
        indicator_sobj->sprite.attr |= SP_TRANSPARENT;
        indicator_sobj->shadow_color.r = ifPlayer_Tag_ShadowColorsR[color_index];
        indicator_sobj->shadow_color.g = ifPlayer_Tag_ShadowColorsG[color_index];
        indicator_sobj->shadow_color.b = ifPlayer_Tag_ShadowColorsB[color_index];
        indicator_sobj->sprite.red = ifPlayer_Tag_SpriteColorsR[color_index];
        indicator_sobj->sprite.green = ifPlayer_Tag_SpriteColorsG[color_index];
        indicator_sobj->sprite.blue = ifPlayer_Tag_SpriteColorsB[color_index];
    }

    mnResultsSetIndicatorPosition(indicator_gobj, port_id);
}

// 0x80133E7C
void mnResultsCreatePlayerIndicatorViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x1E, 0x08000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133F1C
s32 mnResultsGetCharIndex(char c)
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
void mnResultsDrawString(const char *str, f32 x, f32 y, s32 color_index, f32 scale)
{
    GObj* string_gobj;
    SObj* string_sobj;
    s32 i;
    f32 current_x;
    s32 char_index;
    f32 widths[28] = dMnResultsCharWidths;
    intptr_t offsets[28] = dMnResultsCharOffsets;
    gsColorRGBPair colors[5] = dMnResultsCharColors;

    current_x = x;
    string_gobj = omMakeGObjCommon(0, 0, 0x14, 0x80000000);
    omAddGObjRenderProc(string_gobj, func_ovl0_800CCF00, 0x1D, 0x80000000, -1);

    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            current_x += str[i] - '0';
        }
        else
        {
            char_index = mnResultsGetCharIndex(str[i]);

            if (char_index == 0x1C) // space
            {
                current_x += 10.0F * scale;
            }
            else
            {

                string_sobj = gcAppendSObjWithSprite(string_gobj, GetAddressFromOffset(gMnResultsFilesArray[6], offsets[char_index]));
                string_sobj->sprite.scalex = scale;
                string_sobj->pos.x = current_x;

                if (char_index == 0x1B) // .
                {
                    string_sobj->pos.y = y + 26.0F;
                }
                else
                {
                    string_sobj->pos.y = y;
                }

                string_sobj->sprite.attr &= ~SP_FASTCOPY;
                string_sobj->sprite.attr |= SP_TRANSPARENT;
                string_sobj->shadow_color.r = colors[color_index].prim.r;
                string_sobj->shadow_color.g = colors[color_index].prim.g;
                string_sobj->shadow_color.b = colors[color_index].prim.b;
                string_sobj->sprite.red = colors[color_index].env.r;
                string_sobj->sprite.green = colors[color_index].env.g;
                string_sobj->sprite.blue = colors[color_index].env.b;

                current_x += widths[char_index] * scale;
            }
        }
    }
}

// 0x8013423C
void mnResultsDrawWinsText(s32 winner_id)
{
    // char strWin[] = "W1I1N1!";
    // char strWins[] = "W1I1N1S1!";
    char strWin[sizeof(dMnResultsStringWin)] = dMnResultsStringWin;
    char strWins[sizeof(dMnResultsStringWins)] = dMnResultsStringWins;
    f32 x_by_kind[12] = dMnResultsWinsXByKind;
    f32 x_by_team[3] = dMnResultsWinsXByTeam;

    if (gMnResultsIsTeamBattle == TRUE) {
        mnResultsDrawString(strWins, x_by_team[winner_id], 180.0F, 3, 1.0F);
    }
    if (gMnResultsIsTeamBattle == FALSE) {
        mnResultsDrawString(strWins, x_by_kind[winner_id], 180.0F, 3, 1.0F);
    }
}

// 0x80134364
s32 mnResultsGetWinnerKind()
{
    return mnResultsGetFtKind(mnResultsGetWinnerPort());
}

// 0x8013438C
void mnResultsDrawFighterWins()
{
    s32 ft_kind;
    char* name_strings[12] = dMnResultsWinnerStringByKind;
    f32 x_positions[12] = dMnResultsNameXByKind;
    f32 scale[12] = dMnResultsNameScaleXByKind;

    ft_kind = mnResultsGetWinnerKind();

    mnResultsDrawString(name_strings[ft_kind], x_positions[ft_kind], 180.0F, 0, scale[ft_kind]);
    mnResultsDrawWinsText(ft_kind);
}

// 0x80134480
void mnResultsDrawTeamWins()
{
    s32 team_id;
    char* team_strings[9] = dMnResultsWinnerStringByTeam;
    f32 x_positions[9] = dMnResultsNameXByTeam;

    team_id = mnResultsGetWinningTeam();

    mnResultsDrawString(team_strings[team_id], x_positions[team_id], 180.0F, team_id, 1.0F);
    mnResultsDrawWinsText(team_id);
}

// 0x80134540
void mnResultsDrawNoContest()
{
    mnResultsDrawString(dMnResultsStringNoContest, 30.0F, 180.0F, 4, 1.0f);
    // mnResultsDrawString("NO CONTEST", 30.0F, 180.0F, 4, 1.0f);
}

// 0x8013457C
void mnResultsDrawWinnerText()
{
    if (gMnResultsGameRule == 4)
    {
        mnResultsDrawNoContest();
    }
    else
    {
        if (gMnResultsIsTeamBattle == FALSE)
        {
            mnResultsDrawFighterWins();
        }
        if (gMnResultsIsTeamBattle == TRUE)
        {
            mnResultsDrawTeamWins();
        }
    }
}

// 0x801345E8
void mnResultsCreateWinnerTextViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x14, 0x20000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80134688
s32 mnResultsGetHundredsDigit(s32 number)
{
    if (number < 0)
    {
         return -(number / 100);
    }
    return number / 100;
}

// 0x801346C0
s32 mnResultsGetTensDigit(s32 number)
{
    if (number < 0)
    {
        return -((number % 100) / 10);
    }
    return (number % 100) / 10;
}

// 0x80134718
s32 mnResultsGetOnesDigit(s32 number)
{
    if (number < 0)
    {
        return -((number % 100) % 10);
    }
    return (number % 100) % 10;
}

// 0x80134770
void mnResultsSetNumberColor(SObj* number_sobj, s32 color_index)
{
    gsColorRGBPair colors[5] = dMnResultsNumberColors;

    number_sobj->shadow_color.r = colors[color_index].prim.r;
    number_sobj->shadow_color.g = colors[color_index].prim.g;
    number_sobj->shadow_color.b = colors[color_index].prim.b;
    number_sobj->sprite.red = colors[color_index].env.r;
    number_sobj->sprite.green = colors[color_index].env.g;
    number_sobj->sprite.blue = colors[color_index].env.b;
}

// 0x80134808
SObj* mnResultsCreateNumber(GObj* number_gobj, s32 number, s32 color_id)
{
    SObj* number_sobj;
    intptr_t offsets[10] = dMnResultsNumberOffsets;
    gsColorRGBPair unused_colors[5] = dMnResultsUnusedNumberColors;

    number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMnResultsFilesArray[5], offsets[number]));
    number_sobj->sprite.attr &= ~SP_FASTCOPY;
    number_sobj->sprite.attr |= SP_TRANSPARENT;
    mnResultsSetNumberColor(number_sobj, color_id);

    return number_sobj;
}

// 0x801348F8
SObj* mnResultsCreatePlaceNumber(GObj* place_gobj, s32 port_id, s32 place, s32 color_id)
{
    SObj* place_sobj;
    intptr_t offsets[10] = dMnResultsPlaceNumberOffsets;
    gsColorRGBPair unused_colors[5] = dMnResultsPlaceNumberUnusedColors;

    if (place == 1)
    {
        if (gMnResultsIsTeamBattle == TRUE)
        {
            if ((mnResultsGetWinnerPort() == port_id) || (gMnResultsIsSharedWinner[port_id] != FALSE))
            {
                place_sobj = gcAppendSObjWithSprite(place_gobj, GetAddressFromOffset(gMnResultsFilesArray[0], &FILE_022_FIRST_PLACE_ICON_IMAGE_OFFSET));
                place_sobj->user_data.s = 1;
            }
            else
            {
                place_sobj = gcAppendSObjWithSprite(place_gobj, GetAddressFromOffset(gMnResultsFilesArray[3], &FILE_0A4_1_IMAGE_OFFSET));
                place_sobj->user_data.s = 0;
                mnResultsSetNumberColor(place_sobj, color_id);
            }
        }
        else
        {
            place_sobj = gcAppendSObjWithSprite(place_gobj, GetAddressFromOffset(gMnResultsFilesArray[0], &FILE_022_FIRST_PLACE_ICON_IMAGE_OFFSET));
            place_sobj->user_data.s = 1;
        }

        place_sobj->sprite.attr &= ~SP_FASTCOPY;
        place_sobj->sprite.attr |= SP_TRANSPARENT;
    }
    else
    {
        place_sobj = gcAppendSObjWithSprite(place_gobj, GetAddressFromOffset(gMnResultsFilesArray[3], offsets[place]));
        place_sobj->sprite.attr &= ~SP_FASTCOPY;
        place_sobj->sprite.attr |= SP_TRANSPARENT;
        mnResultsSetNumberColor(place_sobj, color_id);
    }
    return place_sobj;
}

// 0x80134AC4
void mnResultsDrawNumber(GObj* number_gobj, f32 x, f32 y, s32 number, s32 color_id)
{
    SObj* number_sobj;
    s32 hundreds_digit;
    s32 tens_digit;

    if (number < 0)
    {
        number_sobj = gcAppendSObjWithSprite(number_gobj, GetAddressFromOffset(gMnResultsFilesArray[5], &FILE_024_DASH_IMAGE_OFFSET));

        if (mnResultsGetHundredsDigit(number) != 0)
        {
            number_sobj->pos.x = x;
        }
        else
        {
            if (mnResultsGetTensDigit(number) != 0)
            {
                number_sobj->pos.x = x + 8.0F;
            }
            else
            {
                number_sobj->pos.x = x + 16.0F;
            }
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

// 0x80134C5C
void mnResultsRenderOverlay(GObj* overlay_gobj)
{
    if (gMnResultsOverlayAlpha < 0x80)
    {
        gMnResultsOverlayAlpha += 9;

        if (gMnResultsOverlayAlpha > 0x80)
        {
            gMnResultsOverlayAlpha = 0x80;
        }
    }

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, gMnResultsOverlayAlpha);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

    func_ovl0_800CCEAC();
}

// 0x80134DA0
void mnResultsCreateOverlay()
{
    gMnResultsOverlayAlpha = 0;
    omAddGObjRenderProc(omMakeGObjCommon(0, 0, 0x15, 0x80000000), mnResultsRenderOverlay, 0x1E, 0x80000000, -1);
}

// 0x80134DF4
void mnResultsCreateOverlayViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x11, 0x40000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80134E94
void mnResultsRenderBackgroundOverlay(GObj* bg_overlay_gobj)
{
    if (gMnResultsBackgroundOverlayAlpha > 0)
    {
        gMnResultsBackgroundOverlayAlpha -= 5;

        if (gMnResultsBackgroundOverlayAlpha < 0)
        {
            omEjectGObjCommon(bg_overlay_gobj);
        }
    }

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, gMnResultsBackgroundOverlayAlpha);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80134FD0
void mnResultsCreateBackgroundOverlay()
{
    gMnResultsBackgroundOverlayAlpha = 0xFF;
    omAddGObjRenderProc(omMakeGObjCommon(0, 0, 0x19, 0x80000000), mnResultsRenderBackgroundOverlay, 0x23, 0x80000000, -1);
}

// 0x80135028
void mnResultsCreateBackgroundOverlayViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x37, 0x800000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801350C8
void mnResultsRenderBackgroundOverlay2(GObj* bg_overlay_gobj)
{
    if (gMnResultsBackgroundOverlay2Alpha > 0)
    {
        gMnResultsBackgroundOverlay2Alpha -= 5;

        if (gMnResultsBackgroundOverlay2Alpha < 0)
        {
            omEjectGObjCommon(bg_overlay_gobj);
        }
    }

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, gMnResultsBackgroundOverlay2Alpha);
    gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80135204
void mnResultsCreateBackgroundOverlay2()
{
    gMnResultsBackgroundOverlay2Alpha = 0xFF;
    omAddGObjRenderProc(omMakeGObjCommon(0, 0, 0x18, 0x80000000), mnResultsRenderBackgroundOverlay2, 0x22, 0x80000000, -1);
}

// 0x8013525C
void mnResultsCreateBackgroundOverlay2Viewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000, func_ovl0_800CD2CC, 0x46, 0x400000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801352FC
f32 mnResultsGetColumnX(s32 port_id)
{
    f32 column_x_2p[2] = dMnResultsColumnX2P;
    f32 column_x_3p[3] = dMnResultsColumnX3P;
    f32 column_x_4p[4] = dMnResultsColumnX4P;

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

// 0x801353F4
s32 mnResultsGetNumberColorIndex(s32 port_id)
{
    s32 color_ids[3] = dMnResultsNumberTeamColorIndexes;

    if (gMnResultsIsTeamBattle != TRUE)
    {
        return 4;
    }

    return color_ids[D_800A4D08.player_block[port_id].team_index];
}

// 0x80135468
void mnResultsSetColumnPortIndicatorColors(SObj* column_port_indicator_sobj)
{
    column_port_indicator_sobj->sprite.attr &= ~SP_FASTCOPY;
    column_port_indicator_sobj->sprite.attr |= SP_TRANSPARENT;
    column_port_indicator_sobj->shadow_color.r = 0;
    column_port_indicator_sobj->shadow_color.g = 0;
    column_port_indicator_sobj->shadow_color.b = 0;
    column_port_indicator_sobj->sprite.red = 0xFF;
    column_port_indicator_sobj->sprite.green = 0xFF;
    column_port_indicator_sobj->sprite.blue = 0xFF;
}

// 0x8013549C
void mnResultsCreateColumnHeaders()
{
    SObj* column_port_indicator_sobj;
    SObj* column_stock_icon_sobj;
    GObj* column_header_gobj;
    intptr_t offsets[4] = dMnResultsPortIndicatorOffsets;
    s32 i;
    ftStruct* ft_struct;

    column_header_gobj = omMakeGObjCommon(0, 0, 0x16, 0x80000000);
    omAddGObjRenderProc(column_header_gobj, func_ovl0_800CCF00, 0x1F, 0x80000000, -1);

    for (i = 0; i < 4; i++)
    {
        if (gMnResultsIsPresent[i] != FALSE)
        {
            column_port_indicator_sobj = gcAppendSObjWithSprite(column_header_gobj, GetAddressFromOffset(gMnResultsFilesArray[0], offsets[i]));
            column_port_indicator_sobj->pos.x = mnResultsGetColumnX(i) + 17.0F;
            column_port_indicator_sobj->pos.y = 49.0F;
            mnResultsSetColumnPortIndicatorColors(column_port_indicator_sobj);

            ft_struct = ftGetStruct(gMnResultsFighterGObjs[i]);

            column_stock_icon_sobj = gcAppendSObjWithSprite(column_header_gobj, ftSpritesGetStruct(AttributesGetStruct(ft_struct))->stock_spr);
            column_stock_icon_sobj->sprite.LUT = ftSpritesGetStruct(AttributesGetStruct(ft_struct))->stock_lut[ft_struct->costume];
            column_stock_icon_sobj->sprite.attr &= ~SP_FASTCOPY;
            column_stock_icon_sobj->sprite.attr |= SP_TRANSPARENT;
            column_stock_icon_sobj->pos.x = column_port_indicator_sobj->pos.x - 10.0F;
            column_stock_icon_sobj->pos.y = column_port_indicator_sobj->pos.y;
        }
    }
}

// 0x80135670
s32 mnResultsGetKOs(s32 port_id)
{
    if (gMnResultsKOs[port_id] >= 1000)
    {
        return 999;
    }
    return gMnResultsKOs[port_id];
}

// 0x8013569C
void mnResultsDrawKOs(s32 y)
{
    GObj* kos_row_gobj;

    kos_row_gobj = func_ovl0_800CD050(0, 0, 0x16, 0x80000000, func_ovl0_800CCF00, 0x1F, 0x80000000, -1, GetAddressFromOffset(gMnResultsFilesArray[0], &FILE_022_KOS_TEXTURE_IMAGE_OFFSET), 1, 0, 1);
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

    if (gMnResultsIsPresent[0] != FALSE)
    {
        mnResultsDrawNumber(kos_row_gobj, mnResultsGetColumnX(0), y, mnResultsGetKOs(0), mnResultsGetNumberColorIndex(0));
    }

    if (gMnResultsIsPresent[1] != FALSE)
    {
        mnResultsDrawNumber(kos_row_gobj, mnResultsGetColumnX(1), y, mnResultsGetKOs(1), mnResultsGetNumberColorIndex(1));
    }

    if (gMnResultsIsPresent[2] != FALSE)
    {
        mnResultsDrawNumber(kos_row_gobj, mnResultsGetColumnX(2), y, mnResultsGetKOs(2), mnResultsGetNumberColorIndex(2));
    }

    if (gMnResultsIsPresent[3] != FALSE)
    {
        mnResultsDrawNumber(kos_row_gobj, mnResultsGetColumnX(3), y, mnResultsGetKOs(3), mnResultsGetNumberColorIndex(3));
    }
}

// 0x801358C4
s32 mnResultsGetTKOs(s32 port_id)
{
    if (gMnResultsTKOs[port_id] >= 1000)
    {
        return 999;
    }
    return gMnResultsTKOs[port_id];
}

// 0x801358F0
void mnResultsDrawTKOs(s32 y)
{
    GObj* tkos_row_gobj;
    SObj* negative_symbol_sobj;

    tkos_row_gobj = func_ovl0_800CD050(0, 0, 0x16, 0x80000000, func_ovl0_800CCF00, 0x1F, 0x80000000, -1, GetAddressFromOffset(gMnResultsFilesArray[0], &FILE_022_TKO_TEXTURE_IMAGE_OFFSET), 1, 0, 1);
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

    if (gMnResultsGameRule != 4)
    {
        negative_symbol_sobj = gcAppendSObjWithSprite(tkos_row_gobj, GetAddressFromOffset(gMnResultsFilesArray[5], &FILE_024_DASH_IMAGE_OFFSET));
        negative_symbol_sobj->pos.x = 90.0F;
        negative_symbol_sobj->pos.y = y + 3;
        negative_symbol_sobj->sprite.attr &= ~SP_FASTCOPY;
        negative_symbol_sobj->sprite.attr |= SP_TRANSPARENT;
    }

    if (gMnResultsIsPresent[0] != FALSE)
    {
        mnResultsDrawNumber(tkos_row_gobj, mnResultsGetColumnX(0), y, mnResultsGetTKOs(0), mnResultsGetNumberColorIndex(0));
    }

    if (gMnResultsIsPresent[1] != FALSE)
    {
        mnResultsDrawNumber(tkos_row_gobj, mnResultsGetColumnX(1), y, mnResultsGetTKOs(1), mnResultsGetNumberColorIndex(1));
    }

    if (gMnResultsIsPresent[2] != FALSE)
    {
        mnResultsDrawNumber(tkos_row_gobj, mnResultsGetColumnX(2), y, mnResultsGetTKOs(2), mnResultsGetNumberColorIndex(2));
    }

    if (gMnResultsIsPresent[3] != FALSE)
    {
        mnResultsDrawNumber(tkos_row_gobj, mnResultsGetColumnX(3), y, mnResultsGetTKOs(3), mnResultsGetNumberColorIndex(3));
    }
}

// 0x80135B78
void mnResultsRenderHorizontalLine(GObj* line_gobj)
{
    f32 y = line_gobj->user_data.s;

    gMnResultsHorizontalLineWidth += 10;
    if (gMnResultsHorizontalLineWidth > 190)
    {
        gMnResultsHorizontalLineWidth = 190;
    }

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gDisplayListHead[0]++, gsGetFillColor(0xFFFFFFFF));
    gDPFillRectangle(gDisplayListHead[0]++, 87, y, 87 + gMnResultsHorizontalLineWidth, y);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

    func_ovl0_800CCEAC();
}

// 0x80135D58
void mnResultsCreateHorizontalLine(s32 y)
{
    GObj* horizontal_line_gobj;

    horizontal_line_gobj = omMakeGObjCommon(0, 0, 0x16, 0x80000000);
    omAddGObjRenderProc(horizontal_line_gobj, mnResultsRenderHorizontalLine, 0x1F, 0x80000000, -1);
    horizontal_line_gobj->user_data.s = y;
}

// 0x80135DB8
s32 mnResultsGetPoints(s32 port_id)
{
    return gMnResultsPoints[port_id];
}

// 0x80135DCC
void mnResultsDrawPointsRow()
{
    GObj* points_row_gobj;

    points_row_gobj = func_ovl0_800CD050(0, 0, 0x16, 0x80000000, func_ovl0_800CCF00, 0x1F, 0x80000000, -1, GetAddressFromOffset(gMnResultsFilesArray[0], &FILE_022_POINTS_TEXTURE_IMAGE_OFFSET), 1, 0, 1);
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

    if (gMnResultsIsPresent[0] != FALSE)
    {
        mnResultsDrawNumber(points_row_gobj, mnResultsGetColumnX(0), 104.0F, mnResultsGetPoints(0), mnResultsGetNumberColorIndex(0));
    }

    if (gMnResultsIsPresent[1] != FALSE)
    {
        mnResultsDrawNumber(points_row_gobj, mnResultsGetColumnX(1), 104.0F, mnResultsGetPoints(1), mnResultsGetNumberColorIndex(1));
    }

    if (gMnResultsIsPresent[2] != FALSE)
    {
        mnResultsDrawNumber(points_row_gobj, mnResultsGetColumnX(2), 104.0F, mnResultsGetPoints(2), mnResultsGetNumberColorIndex(2));
    }

    if (gMnResultsIsPresent[3] != FALSE)
    {
        mnResultsDrawNumber(points_row_gobj, mnResultsGetColumnX(3), 104.0F, mnResultsGetPoints(3), mnResultsGetNumberColorIndex(3));
    }
}

// 0x80135FE8 - Unused?
void func_ovl31_80135FE8()
{
    return;
}

// 0x80135FF0
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

// 0x8013607C
s32 mnResultsGetPlaceForDisplay(s32 port_id)
{
    if ((mnResultsGetPresentCount() == 4) &&
        (gMnResultsIsTeamBattle == FALSE) &&
        (mnResultsGetPlayerCountByPlace(1) == 2) &&
        (gMnResultsPlacement[port_id] == 2))
    {
        return 4;
    }
    else return gMnResultsPlacement[port_id] + 1;
}

// 0x80136100
void mnResultsDrawPlaceRow(s32 y)
{
    GObj* place_row_gobj;
    s32 i;

    place_row_gobj = func_ovl0_800CD050(0, 0, 0x16, 0x80000000, func_ovl0_800CCF00, 0x1F, 0x80000000, -1, GetAddressFromOffset(D_ovl31_8013A048[0], &FILE_022_PLACE_TEXTURE_IMAGE_OFFSET), 1, NULL, 1);
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
        if (gMnResultsIsPresent[i] != FALSE) {
            mnResultsPositionPlaceNumber(mnResultsCreatePlaceNumber(place_row_gobj, i, mnResultsGetPlaceForDisplay(i), mnResultsGetNumberColorIndex(i)), i, mnResultsGetPlaceForDisplay(i), y);
        }
    }
}

// 0x80136290
void mnResultsDrawResults0(s32 arg0)
{
    if (gMnResultsFramesElapsed == 0xB4)
    {
        mnResultsCreateOverlay();
    }
    if (gMnResultsFramesElapsed == 0xD2)
    {
        mnResultsCreateColumnHeaders();
        mnResultsDrawKOs(0x42);
    }
    if (gMnResultsFramesElapsed == 0xE6)
    {
        mnResultsDrawTKOs(0x51);
    }
    if (gMnResultsFramesElapsed == 0xFA)
    {
        mnResultsCreateHorizontalLine(0x62);
    }
    if (gMnResultsFramesElapsed == 0x10E)
    {
        mnResultsDrawPointsRow();
    }
    if (gMnResultsFramesElapsed == 0x122)
    {
        mnResultsDrawPlaceRow(0x7C);
    }
}

// 0x80136358
void mnResultsDrawResults1(s32 arg0)
{
    if (gMnResultsFramesElapsed == 0xB4)
    {
        mnResultsCreateOverlay();
    }
    if (gMnResultsFramesElapsed == 0xD2)
    {
        mnResultsDrawPlaceRow(0x42);
    }
    if (gMnResultsFramesElapsed == 0xE6)
    {
        mnResultsCreateHorizontalLine(0x6E);
    }
    if (gMnResultsFramesElapsed == 0xFA)
    {
        mnResultsCreateColumnHeaders();
        mnResultsDrawKOs(0x7C);
    }
}

// 0x801363E8
void mnResultsDrawResults2(s32 arg0)
{
    if (gMnResultsFramesElapsed == 0xB4)
    {
        mnResultsCreateOverlay();
    }
    if (gMnResultsFramesElapsed == 0xD2)
    {
        mnResultsCreateColumnHeaders();
        mnResultsDrawKOs(0x42);
    }
    if (gMnResultsFramesElapsed == 0xE6)
    {
        mnResultsDrawTKOs(0x51);
    }
    if (gMnResultsFramesElapsed == 0xFA)
    {
        mnResultsCreateHorizontalLine(0x62);
    }
    if (gMnResultsFramesElapsed == 0x10E)
    {
        mnResultsDrawPointsRow();
    }
    if (gMnResultsFramesElapsed == 0x122)
    {
        mnResultsDrawPlaceRow(0x7C);
    }
}

// 0x801364B0
void mnResultsDrawResults3(s32 arg0)
{
    if (gMnResultsFramesElapsed == 0xB4)
    {
        mnResultsCreateOverlay();
    }
    if (gMnResultsFramesElapsed == 0xD2)
    {
        mnResultsDrawPlaceRow(0x42);
    }
    if (gMnResultsFramesElapsed == 0xE6)
    {
        mnResultsCreateHorizontalLine(0x6E);
    }
    if (gMnResultsFramesElapsed == 0xFA)
    {
        mnResultsCreateColumnHeaders();
        mnResultsDrawKOs(0x7C);
    }
}

// 0x80136540
void mnResultsDrawResultsNoContest(s32 arg0)
{
    if (gMnResultsFramesElapsed == 0x1E)
    {
        mnResultsCreateOverlay();
    }
    if (gMnResultsFramesElapsed == 0x3C)
    {
        mnResultsCreateColumnHeaders();
        mnResultsDrawKOs(0x42);
    }
    if (gMnResultsFramesElapsed == 0x50)
    {
        mnResultsDrawTKOs(0x51);
    }
}

// 0x801365B4
u8 mnResultsGetIsTeamBattle()
{
    return gMnResultsIsTeamBattle;
}

// 0x801365C0
void mnResultsRenderScreenTitle(s32 screen_title_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gDisplayListHead[0]++, gsGetFillColor(0xFFFFFFFF));
    gDPFillRectangle(gDisplayListHead[0]++, 32, 42, 282, 44);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

    func_ovl0_800CCEAC();
    func_ovl0_800CCF00(screen_title_gobj);

    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
}

// 0x801366F0
void mnResultsCreateScreenTitle()
{
    GObj* screen_title_gobj;
    intptr_t offsets[2] = dMnResultsScreenTitleOffsets;
    uintptr_t results_routines[5] = dMnResultsRoutines;

    screen_title_gobj = func_ovl0_800CD050(0, 0, 0x16, 0x80000000, mnResultsRenderScreenTitle, 0x1F, 0x80000000, -1, GetAddressFromOffset(gMnResultsFilesArray[2], offsets[mnResultsGetIsTeamBattle()]), 1, results_routines[gMnResultsGameRule], 1);
    SObjGetStruct(screen_title_gobj)->pos.x = 32.0f;
    SObjGetStruct(screen_title_gobj)->pos.y = 29.0f;
    SObjGetStruct(screen_title_gobj)->sprite.attr &= ~SP_FASTCOPY;
    SObjGetStruct(screen_title_gobj)->sprite.attr |= SP_TRANSPARENT;
    SObjGetStruct(screen_title_gobj)->sprite.red = 0xFF;
    SObjGetStruct(screen_title_gobj)->sprite.green = 0xFF;
    SObjGetStruct(screen_title_gobj)->sprite.blue = 0xFF;
}

// 0x80136830
void mnResultsCreateResultsViewport()
{
    GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0xF, 0x80000000, -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801368D0
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

// 0x801369B4
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

// 0x80136A9C
void mnResultsSetKOs()
{
    s32 i;

    for (i = 0; i < 4; i++)
    {
        if (gMnResultsIsPresent[i] != FALSE) {
            gMnResultsKOs[i] = D_800A4D08.player_block[i].score;
        }
    }
}

// 0x80136B1C
void mnResultsSetTKOs()
{
    s32 i;

    for (i = 0; i < 4; i++)
    {
        if (gMnResultsIsPresent[i] != FALSE) {
            gMnResultsTKOs[i] = D_800A4D08.player_block[i].falls;
        }
    }
}

// 0x80136B9C
void mnResultsSetPoints()
{
    s32 i;

    for (i = 0; i < 4; i++)
    {
        gMnResultsPoints[i] = mnResultsGetKOs(i) - mnResultsGetTKOs(i);
    }
}

// 0x80136C08
s32 mnResultsGetKOsMinusTKOs(s32 port_id)
{
    return gMnResultsKOs[port_id] - gMnResultsTKOs[port_id];
}

// 0x80136C2C
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

// 0x80136D28
void mnResultsSetPlacementFFA()
{
    gmResultsTemp results[4];
    s32 place;
    s32 score;
    s32 winner;
    s32 num_players;
    s32 i;

    for (i = 0, num_players = 0; i < ARRAY_COUNT(gMnResultsIsPresent); i++)
    {
        if (gMnResultsIsPresent[i] != FALSE)
        {
            results[num_players].kos_minus_tkos = mnResultsGetKOsMinusTKOs(i);
            results[num_players].placement = D_800A4EF8.player_block[i].placement;
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
        gMnResultsPlacement[results[i].port_id] = place;
    }
}

// 0x80136FB8
s32 mnResultsGetTeamKOsMinusTKOs(s32 team_id)
{
    s32 i;
    s32 total = 0;

    for (i = 0; i < ARRAY_COUNT(gMnResultsIsPresent); i++)
    {
        if ((gMnResultsIsPresent[i] != FALSE) && (team_id == D_800A4D08.player_block[i].team_index))
        {
            total += mnResultsGetKOsMinusTKOs(i);
        }
    }

    return total;
}

// 0x80137068
void mnResultsSetTeamPlacement(s32 team_index, s32 placement)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gMnResultsIsPresent); i++)
    {
        if ((gMnResultsIsPresent[i] != FALSE) && (team_index == D_800A4D08.player_block[i].team_index)) {
            gMnResultsPlacement[i] = placement;
        }
    }
}

// 0x80137108
s32 mnResultsGetFirstPortForTeam(s32 team_id)
{
    s32 i;

    for (i = 0; i < 4; i++)
    {
        if ((team_id == D_800A4D08.player_block[i].team_index) && (D_800A4D08.player_block[i].player_kind != Pl_Kind_Not))
        {
            return i + 1;
        }
    }

    return 0;
}

// 0x801371B8
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
            results[num_players].placement = D_800A4EF8.player_block[j - 1].placement;
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

// 0x801372F4
void mnResultsSetPlacementTime()
{
    if (gMnResultsIsTeamBattle == FALSE)
    {
        mnResultsSetPlacementFFA();
    }
    else mnResultsSetPlacementTeam();
}

// 0x80137334
void mnResultsSetPlacementStock()
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gMnResultsIsPresent); i++)
    {
        if (gMnResultsIsPresent[i] != FALSE)
        {
            gMnResultsPlacement[i] = D_800A4D08.player_block[i].placement;
        }
    }
}

// 0x801373B4
void mnResultsSetArrays()
{
    if (D_800A4D08.match_rules == GMMATCH_GAMERULE_STOCK)
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

    if (gMnResultsGameRule == 4)
    {
        s32 i, j;

        for (i = 0; i < ARRAY_COUNT(gMnResultsPlacement); i++)
        {
            gMnResultsPlacement[i] = 0;
        }
    }

    mnResultsSetFtKind();
}

// 0x80137454
void mnResultsSetIsPresent()
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gMnResultsIsPresent); i++)
    {
        if (D_800A4D08.player_block[i].player_kind == Pl_Kind_Not)
        {
            gMnResultsIsPresent[i] = FALSE;
        }
        else gMnResultsIsPresent[i] = TRUE;
    }
}

// 0x801374F4
void mnResultsDrawFighter(s32 port_id)
{
    mnResultsSpawnFighter(port_id);
    mnResultsSetFighterPosition(gMnResultsFighterGObjs[port_id], port_id, func_ovl31_80133810(port_id));
    mnResultsSetFighterScale(gMnResultsFighterGObjs[port_id], port_id, mnResultsGetFtKind(port_id), func_ovl31_80133810(port_id));
    mnResultsCreatePlayerIndicator(port_id, D_800A4D08.player_block[port_id].player_color_index);
    mnResultsSetAnim(gMnResultsFighterGObjs[port_id], port_id);
}

// 0x801375AC
void mnResultsDrawFighters()
{
    s32 i;

    if (gMnResultsIsPresent[0] != FALSE)
    {
        mnResultsDrawFighter(0);
    }
    if (gMnResultsIsPresent[1] != FALSE)
    {
        mnResultsDrawFighter(1);
    }
    if (gMnResultsIsPresent[2] != FALSE)
    {
        mnResultsDrawFighter(2);
    }
    if (gMnResultsIsPresent[3] != FALSE)
    {
        mnResultsDrawFighter(3);
    }

    if (gMnResultsGameRule != 4)
    {
        for (i = 0; i < ARRAY_COUNT(gMnResultsIsPresent); i++)
        {
            if (gMnResultsIsPresent[i] != FALSE)
            {
                mnResultsMakeFighterFaceWinner(gMnResultsFighterGObjs[i], i, mnResultsGetPlacement(i));
            }
        }
    }
}

// 0x80137698
void mnResultsLoadMatchInfo()
{
    s32 i;

    gMnResultsFramesElapsed = 0;
    gMnResultsHorizontalLineWidth = 0;
    D_ovl31_80139C40 = 0;
    gMnResultsIsTeamBattle = D_800A4D08.is_team_battle;

    for (i = 0; i < ARRAY_COUNT(gMnResultsIsSharedWinner); i++)
    {
        gMnResultsIsSharedWinner[i] = 0;
    }

    if (D_800A4D08.match_rules == GMMATCH_GAMERULE_TIME)
    {
        if (gMnResultsIsTeamBattle == FALSE)
        {
            gMnResultsGameRule = 0;
        }
        else gMnResultsGameRule = 2;

        gMnResultsMinFramesElapsed = 0x19A;
    }
    else
    {
        if (gMnResultsIsTeamBattle == FALSE)
        {
            gMnResultsGameRule = 1;
        }
        else gMnResultsGameRule = 3;

        gMnResultsMinFramesElapsed = 0x172;
    }


    if (gSceneData.is_reset != FALSE)
    {
        gMnResultsGameRule = 4;
        gMnResultsMinFramesElapsed = 0xC8;

        D_ovl31_80139C44 = 1;
        D_ovl31_80139C48 = 1;
        D_ovl31_80139C4C = 1;
    }
    else
    {
        D_ovl31_80139C44 = 0x50;
        D_ovl31_80139C48 = 0x78;
        D_ovl31_80139C4C = 0x78;
    }
}

// 0x801377C0
void func_ovl31_801377C0(s32 arg0)
{
    while (D_8009D960->unk34 == 0)
    {
        gsStopCurrentProcess(1);
    }

    while (TRUE)
    {
        if (D_8009D960->unk34 == 0)
        {
            func_80020AB4(0, 0x16);
            omEjectGObjCommon(0);
        }
        gsStopCurrentProcess(1);
    }
}

// 0x80137854
void func_ovl31_80137854()
{
    omAddGObjCommonProc(omMakeGObjCommon(0, 0, 0x11, 0x80000000), func_ovl31_801377C0, 0, 1);
}

// 0x80137898
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
            omEjectGObjCommon(0);
            gsStopCurrentProcess(1);
        }

        if (frame & 1)
        {
            func_80004474(winner);
        }
        else
        {
            func_80004494(winner);
        }

        gsStopCurrentProcess(1);
    }
}

// 0x80137938
void func_ovl31_80137938()
{
    omAddGObjCommonProc(omMakeGObjCommon(0, 0, 0xF, 0x80000000), func_ovl31_80137898, 0, 1);
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
s32 mnResultsGetHumanCount()
{
    s32 i, total = 0;

    for (i = 0; i < 4; i++)
    {
        if (D_800A4D08.player_block[i].player_kind == Pl_Kind_Man)
        {
            total += 1;
        }
    }

    return total;
}

// 0x80137A1C
s32 mnResultsGetBestHuman()
{
    s32 i;
    sb32 is_human[4];
    s32 first_human;
    sb32 tie_exists;

    // determine if human or cpu
    for (i = 0; i < 4; i++)
    {
        is_human[i] = (D_800A4D08.player_block[i].player_kind == Pl_Kind_Man) ? TRUE : FALSE;
    }

    // determine port_id of first human
    for (i = 0; i < 4; i++)
    {
        if (is_human[i] != FALSE)
        {
            first_human = i;
            break;
        }
    }

    tie_exists = FALSE;

    // determine the human with the most points and if any humans have the same points total
    for (i = first_human; i < 4; i++)
    {
        if (is_human[i] != FALSE)
        {
            if (gMnResultsPoints[first_human] == gMnResultsPoints[i])
            {
                tie_exists = TRUE;
            }
            if (gMnResultsPoints[first_human] < gMnResultsPoints[i])
            {
                first_human = i;
            }
        }
    }

    // break the tie based on the handicap level
    if (tie_exists != FALSE)
    {
        for (i = first_human; i < 4; i++)
        {
            if (
                (is_human[i] != FALSE) &&
                (gMnResultsPoints[first_human] == gMnResultsPoints[i]) &&
                (D_800A4D08.player_block[first_human].handicap < D_800A4D08.player_block[i].handicap)
            )
            {
                first_human = i;
            }
        }
    }

    return first_human;
}

// 0x80137E34
s32 mnResultsGetBestHumanOtherThan(s32 port_id)
{
    s32 i;
    sb32 is_human[4];
    s32 first_human;
    s32 var_a1;

    // determine if human or cpu
    for (i = 0; i < 4; i++)
    {
        is_human[i] = (D_800A4D08.player_block[i].player_kind == Pl_Kind_Man) ? TRUE : FALSE;
    }

    // determine port_id of first human - shouldn't have been commented out! first_human is undefined below!
    // for (i = 0; i < 4; i++)
    // {
    //     if (is_human[i] != FALSE && port_id != i)
    //     {
    //         first_human = i;
    //         break;
    //     }
    // }

    // if a human exists with the same score, return that one
    for (i = first_human; i < 4; i++)
    {
        if (is_human[i] != FALSE && port_id != i && gMnResultsPoints[port_id] == gMnResultsPoints[i])
        {
            return i;
        }
    }

    var_a1 = 0x29A;

    for (i = 0; i < 4; i++)
    {
        if (is_human[i] != FALSE && port_id != i)
        {
            var_a1 = i;
        }
    }

    // return 0x29A if there are no other humans
    if (var_a1 == 0x29A) {
        return 0x29A;
    }

    // return the other human with the highest score
    for (i = 0; i < 4; i++)
    {
        if (is_human[i] != FALSE && port_id != i && var_a1 != i && gMnResultsPoints[var_a1] < gMnResultsPoints[i])
        {
            var_a1 = i;
        }
    }

    return var_a1;
}

// 0x80138130
s32 mnResultsGetWorstHuman()
{
    s32 i;
    sb32 is_human[4];
    s32 first_human;
    sb32 tie_exists;

    // determine if human or cpu
    for (i = 0; i < 4; i++)
    {
        is_human[i] = (D_800A4D08.player_block[i].player_kind == Pl_Kind_Man) ? TRUE : FALSE;
    }

    // determine port_id of first human
    for (i = 0; i < 4; i++)
    {
        if (is_human[i] != FALSE)
        {
            first_human = i;
            break;
        }
    }

    tie_exists = FALSE;

    // determine the human with the least points and if any humans have the same points total
    for (i = first_human; i < 4; i++)
    {
        if (is_human[i] != FALSE)
        {
            if (gMnResultsPoints[first_human] == gMnResultsPoints[i])
            {
                tie_exists = TRUE;
            }
            if (gMnResultsPoints[first_human] > gMnResultsPoints[i])
            {
                first_human = i;
            }
        }
    }

    // break the tie based on the handicap level
    if (tie_exists != FALSE)
    {
        for (i = first_human; i < 4; i++)
        {
            if (
                (is_human[i] != FALSE) &&
                (gMnResultsPoints[first_human] == gMnResultsPoints[i]) &&
                (D_800A4D08.player_block[first_human].handicap > D_800A4D08.player_block[i].handicap)
            )
            {
                first_human = i;
            }
        }
    }

    return first_human;
}

// 0x80138548
void mnResultsSetAutoHandicaps(s32 best_human_port_id, s32 worst_human_port_id)
{
    s32 handicap_0 = D_800A4D08.player_block[best_human_port_id].handicap;
    s32 handicap_1 = D_800A4D08.player_block[worst_human_port_id].handicap;
    s32 other_human_port_id;

    if ((handicap_0 == 1) && (handicap_1 == 9))
    {
        return;
    }
    else if ((handicap_0 > 1) && (handicap_1 < 9))
    {
        D_800A4D08.player_block[best_human_port_id].handicap--;
        D_800A4D08.player_block[worst_human_port_id].handicap++;
    }
    else if ((handicap_0 == 1) && (handicap_1 < 8))
    {
        D_800A4D08.player_block[worst_human_port_id].handicap += 2;
    }
    else if ((handicap_0 > 2) && (handicap_1 == 9))
    {
        D_800A4D08.player_block[best_human_port_id].handicap -= 2;
    }
    else if ((handicap_0 == 1) && (handicap_1 == 8))
    {
        other_human_port_id = mnResultsGetBestHumanOtherThan(best_human_port_id);

        if (other_human_port_id != 0x29A)
        {
            D_800A4D08.player_block[other_human_port_id].handicap--;
            D_800A4D08.player_block[worst_human_port_id].handicap++;
        }
    }
    else if ((handicap_0 == 2) && (handicap_1 == 9))
    {
        other_human_port_id = mnResultsGetBestHumanOtherThan(best_human_port_id);

        if (other_human_port_id != 0x29A)
        {
            D_800A4D08.player_block[best_human_port_id].handicap--;
            D_800A4D08.player_block[other_human_port_id].handicap--;
        }
    }
}

// 0x801386BC
void mnResultsAutoHandicap()
{
    if ((gMnResultsGameRule != 4) && (mnResultsGetHumanCount() >= 2))
    {
        mnResultsSetAutoHandicaps(mnResultsGetBestHuman(), mnResultsGetWorstHuman());
    }
}

// 0x80138714
void mnResultsGetVictoryTheme()
{
    switch (mnResultsGetFtKind(mnResultsGetWinnerPort()))
    {
        case Ft_Kind_Mario:
        case Ft_Kind_Luigi:
            func_80020AB4(0, 0xC);
            return;
        case Ft_Kind_Fox:
            func_80020AB4(0, 0x10);
            return;
        case Ft_Kind_Donkey:
            func_80020AB4(0, 0xE);
            return;
        case Ft_Kind_Samus:
            func_80020AB4(0, 0xD);
            return;
        case Ft_Kind_Link:
            func_80020AB4(0, 0x15);
            return;
        case Ft_Kind_Yoshi:
            func_80020AB4(0, 0x12);
            return;
        case Ft_Kind_Captain:
            func_80020AB4(0, 0x13);
            return;
        case Ft_Kind_Pikachu:
        case Ft_Kind_Purin:
            func_80020AB4(0, 0x14);
            return;
        case Ft_Kind_Kirby:
            func_80020AB4(0, 0xF);
            return;
        case Ft_Kind_Ness:
            func_80020AB4(0, 0x11);
            return;
        default:
            func_80020AB4(0, 0xB);
            return;
    }
}

// 0x80138830
void func_ovl31_80138830()
{
    f32 sp2C[3] = D_ovl31_801396F8;
    f32 sp20[3] = D_ovl31_80139704;
    s32 foo;

    func_ovl2_80104554(sp20, 0);
    func_ovl2_80104554(sp2C, 1);
}

// 0x801388A4 - Unused?
void func_ovl31_801388A4()
{
    return;
}

// 0x801388AC
void mnResultsMain(s32 arg0)
{
    s32 unlocked_features;
    u16 sp_game_complete_mask;
    s32 i;

    gMnResultsFramesElapsed += 1;

    if (gMnResultsFramesElapsed == D_ovl31_80139C44)
    {
        if (gMnResultsGameRule != 4)
        {
            mnResultsCreateBackgroundOverlay2();
        }

        mnResultsCreateBackground();
    }

    if (gMnResultsFramesElapsed == D_ovl31_80139C48)
    {
        mnResultsDrawWinnerText();
        mnResultsCreateScreenTitle();

        if (gMnResultsGameRule != 4)
        {
            func_ovl31_80138830();
        }
    }

    if (gMnResultsFramesElapsed == D_ovl31_80139C4C)
    {
        mnResultsDrawFighters();
    }

    if (D_ovl31_80139C4C < gMnResultsFramesElapsed)
    {
        if (D_ovl31_80139C40 < 0xFF)
        {
            D_ovl31_80139C40 += 0x16;

            if (D_ovl31_80139C40 >= 0x100) {
                D_ovl31_80139C40 = 0xFF;
            }
        }

        func_ovl1_803904E0(10.0F, 10.0F, 0xFF, 0xFF, 0xFF, D_ovl31_80139C40);
    }

    mnResultsAnnounceWinner();

    if ((gMnResultsGameRule != 4) && (gMnResultsFramesElapsed == 0x78))
    {
        mnResultsGetVictoryTheme();
        func_ovl31_80137854();
    }

    if (mnResultsCheckStartPressed() != FALSE)
    {
        unlocked_features = 0;

        if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_ITEMSWITCH) && (gSaveData.unlock_task_itemswitch >= 100))
        {
            gSceneData.unlocked_features[unlocked_features] = gmSave_Unlock_ItemSwitch;
            unlocked_features = 1;
        }

        if (!(gSaveData.unlock_mask & GMSAVE_UNLOCK_MASK_INISHIE))
        {
            if ((gSaveData.unlock_task_inishie & GMSAVE_GROUND_MASK_ALL) == GMSAVE_GROUND_MASK_ALL)
            {
                for (i = 0, sp_game_complete_mask = 0; i < 12; i++)
                {
                    if (gSaveData.spgame_records[i].spgame_complete != FALSE)
                    {
                        sp_game_complete_mask |= (1 << i);
                    }
                }

                if ((sp_game_complete_mask & GMSAVEINFO_CHARACTER_MASK_STARTER) == GMSAVEINFO_CHARACTER_MASK_STARTER)
                {
                    gSceneData.unlocked_features[unlocked_features] = gmSave_Unlock_Inishie;
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

        func_800266A0();
        func_80020A74();
        func_80005C74();
    }
}

// 0x80138B70
void mnResultsInit()
{
    rdSetup rldmSetup;
    s32 i;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl31_80139C50;
    rldmSetup.statusBufSize = 0x78;
    rldmSetup.forceBuf = (rdFileNode*) &D_ovl31_8013A010;
    rldmSetup.forceBufSize = 7;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl31_80138F70, 8, D_ovl31_8013A048, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl31_80138F70, 8), 0x10));

    omMakeGObjCommon(0, mnResultsMain, 0, 0x80000000U);
    func_8000B9FC(0, 0x80000000U, 0x64, 3, 0xFF);
    func_ovl2_80115890();
    efManager_AllocUserData();
    ftManager_AllocFighterData(1, 4);

    for (i = 0; i < 12; i++)
    {
        ftManager_SetFileDataKind(i);
    }

    for (i = 0; i < ARRAY_COUNT(gMnResultsAnimHeaps); i++)
    {
        gMnResultsAnimHeaps[i] = gsMemoryAlloc(D_ovl2_80130D9C, 0x10);
    }

    mnResultsSaveDataToSRAM();
    mnResultsLoadMatchInfo();
    mnResultsSetIsPresent();
    mnResultsSetArrays();

    if (D_800A4D08.handicap_setting == 2) // AUTO
    {
        mnResultsAutoHandicap();
    }

    if (gMnResultsGameRule != 4)
    {
        func_ovl0_800D4404();
        func_ovl0_800D4130(0x20000002, 0, 0xA, 0x100000000);
        func_ovl0_800D430C(lbRandom_GetIntRange(0xB), 0x20000000, 0, func_ovl0_800D4248, 0x20, func_ovl0_800D42C8);
    }

    mnResultsCreateLogoViewport();
    mnResultsCreateFighterViewport();
    mnResultsCreatePlayerIndicatorViewport();
    mnResultsCreateWinnerTextViewport();
    mnResultsCreateOverlayViewport();
    mnResultsCreateResultsViewport();
    mnResultsCreateBackgroundOverlayViewport();
    mnResultsCreateBackgroundOverlay2Viewport();

    if (gMnResultsGameRule != 4)
    {
        mnResultsCreateLogo();
    }

    mnResultsCreateBackgroundOverlay();
    func_ovl31_8013797C();

    if ((gMnResultsGameRule != 4) && (D_800A4D08.player_block[mnResultsGetWinnerPort()].player_kind == Pl_Kind_Man))
    {
        func_ovl31_80137938();
    }

    func_ovl1_803904E0(10.0F, 10.0F, 0xFF, 0xFF, 0xFF, D_ovl31_80139C40);

    if (gMnResultsGameRule != 4)
    {
        func_800269C0(0x26D);
    }
}

// vs_results_entry
void vs_results_entry()
{
    s32 i;

    D_ovl31_80139710.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl31_80139710);
    D_ovl31_8013972C.arena_size = (u32) ((uintptr_t)&lOverlay31ArenaHi - (uintptr_t)&lOverlay31ArenaLo);
    func_800A2698(&D_ovl31_8013972C);

    for (i = 0; i < 4; i++)
    {
        func_800044B4(i);
        func_80004494(i);
    }
}
