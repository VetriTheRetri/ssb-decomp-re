#include <sys/develop.h>
// #include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <results.h>

// ovl30 stuff
// extern RldmFileId D_ovl30_801344D0[5];

extern s32 dMnResultsAnnouncerNames[12]; // 0x80138FA8
extern s32 dMnResultsAnnouncerTeams[12]; // 0x80138FD8
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

// extern s32 gMnStageScrollBuffer; // 0x80134C28; // frames until can move cursor again
// extern s32 gMnStageMaxFramesElapsed; // 0x80134C2C // frames to wait until exiting the SSS

extern s32 gMnResultsKOs[4]; // 0x80139B80
extern s32 gMnResultsTKOs[4]; // 0x80139B90

extern s32 gMnResultsPlacement[4]; // 0x80139BB0

extern sb32 gMnResultsIsPresent[4]; // 0x80139BD0

extern s32 gMnResultsFtKind[4]; // 0x80139BF0

extern s32 gMnResultsGameRule; // 0x80139C10
extern sb32 gMnResultsIsTeamBattle; // 0x80139C14
extern s32 gMnResultsMinFramesElapsed; // 0x80139C18 // frames to wait until pressing start will exit the Results screen

extern sb32 gMnResultsIsSharedWinner[4]; // 0x80139C20

// extern uintptr_t gMnStageModelHeap0Ptr; // 80134E24;
// extern uintptr_t gMnStageModelHeap1Ptr; // 80134E28;

// extern rdFileNode D_ovl30_80134D20;
// extern u32 D_ovl30_80134C30[240];
// extern uintptr_t D_NF_001AC870;
// extern uintptr_t D_NF_00000854;

// extern s32 gMnStageFilesArray[5]; // 0x80134E10[5]
// // // extern s32 gFile014; // 0x80134E10; // file 0x014 pointer
// // // extern s32 gFile015; // 0x80134E14; // file 0x015 pointer
// // // extern s32 gFile01E; // 0x80134E18; // file 0x01E pointer
// // // extern s32 gFile021; // 0x80134E1C; // file 0x021 pointer
// // // extern s32 gFile01A; // 0x80134E20; // file 0x01A pointer

// // // // Offsets
// extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET = 0x440; // file 0x015 image offset for background tile

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
s32 mnResultsGetOpponentCount(s32 port_id) {
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

    num_opponents = mnResultsGetOpponentCount(port_id);

    if (func_ovl31_80133684(0) == 1)
    {
        switch (mnResultsGetPresentCount())
        {
            case 2:
                break;
            case 3:
                if (gMnResultsPlacement[port_id] == 0)
                {
                    switch (mnResultsGetOpponentCount(port_id))
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
                    if (mnResultsGetOpponentCount(port_id) == 1)
                    {
                        num_opponents = mnResultsGetOpponentCount(mnResultsGetPortByPlace(0));
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
// TODO - cleanup
void func_ovl31_80132B20()
{
    GObj* logo_gobj;
    s32 winner_port_id;
    s32 winner_char_id;
    s32 color;
    intptr_t offsets1[12] = D_ovl31_80138FE4;
    intptr_t offsets2[12] = D_ovl31_80139014;
    intptr_t offsets3[12] = D_ovl31_80139044;
    s32 colors[3] = D_ovl31_80139074;

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

    func_8000F120(logo_gobj, GetAddressFromOffset(D_ovl31_8013A058, offsets1[winner_char_id]), 0);
    omAddGObjRenderProc(logo_gobj, odRenderDObjTreeForGObj, 0x21, 0x80000000, -1);
    func_8000F8F4(logo_gobj, GetAddressFromOffset(D_ovl31_8013A058, offsets2[winner_char_id]));
    func_8000BE28(logo_gobj, GetAddressFromOffset(D_ovl31_8013A058, offsets3[winner_char_id]), color);
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
// TODO - cleanup
void func_ovl31_80132EA8()
{
    GObj* bg_gobj;
    SObj* bg_sobj;
    GObj *camera_gobj;
    s32 stack_fix_1, stack_fix_2;
    s32 winner_port_id;
    gsColorRGBPair unused_colors[4] = D_ovl31_80139080;
    uintptr_t unused_array_pointers[4] = D_ovl31_80139098;
    s32 team_colors[3] = D_ovl31_801390A8;
    gsColorRGBPair colors[4] = D_ovl31_801390B4;
    Camera *cam;

    // func_80007080(func_8000B93C(0x401, 0, 0x10, 0x80000000, &func_ovl0_800CD2CC, 0x50, 0, 0x04000000, -1, 0, 1, 0, 1, 0)->unk74 + 8, 0x41200000, 0x41200000, 0x439B0000, 230.0f);
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

    bg_sobj = gcAppendSObjWithSprite(bg_gobj, GetAddressFromOffset(D_ovl31_8013A048, &D_NF_0000D5C8));

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

// func_ovl31_801331DC

// func_ovl31_801333E4

// func_ovl31_8013345C

// func_ovl31_801334CC

// func_ovl31_801334DC

// func_ovl31_80133684

// func_ovl31_80133718

// func_ovl31_80133810

// func_ovl31_801338EC

// func_ovl31_8013392C

// func_ovl31_801339F4

// func_ovl31_80133C58

// func_ovl31_80133E7C

// func_ovl31_80133F1C

// func_ovl31_80133F6C

// func_ovl31_8013423C

// func_ovl31_80134364

// func_ovl31_8013438C

// func_ovl31_80134480

// func_ovl31_80134540

// func_ovl31_8013457C

// func_ovl31_801345E8

// func_ovl31_80134688

// func_ovl31_801346C0

// func_ovl31_80134718

// func_ovl31_80134770

// func_ovl31_80134808

// func_ovl31_801348F8

// func_ovl31_80134AC4

// func_ovl31_80134C5C

// func_ovl31_80134DA0

// func_ovl31_80134DF4

// func_ovl31_80134E94

// func_ovl31_80134FD0

// func_ovl31_80135028

// func_ovl31_801350C8

// func_ovl31_80135204

// func_ovl31_8013525C

// func_ovl31_801352FC

// func_ovl31_801353F4

// func_ovl31_80135468

// func_ovl31_8013549C

// func_ovl31_80135670

// func_ovl31_8013569C

// func_ovl31_801358C4

// func_ovl31_801358F0

// func_ovl31_80135B78

// func_ovl31_80135D58

// func_ovl31_80135DB8

// func_ovl31_80135DCC

// func_ovl31_80135FF0

// func_ovl31_8013607C

// func_ovl31_80136100

// func_ovl31_801365B4

// func_ovl31_801365C0

// func_ovl31_801366F0

// func_ovl31_80136830

// func_ovl31_801368D0

// func_ovl31_801369B4

// func_ovl31_80136A9C

// func_ovl31_80136B1C

// func_ovl31_80136B9C

// 0x80136C08
s32 mnResultsGetKOsMinusTKOs(s32 port_id)
{
    return gMnResultsKOs[port_id] - gMnResultsTKOs[port_id];
}

// func_ovl31_80136C2C

// func_ovl31_80136D28

// func_ovl31_80136FB8

// func_ovl31_80137068

// func_ovl31_80137108

// func_ovl31_801371B8

// func_ovl31_801372F4

// func_ovl31_80137334

// func_ovl31_801373B4

// func_ovl31_80137454

// func_ovl31_801374F4

// func_ovl31_801375AC

// func_ovl31_80137698

// func_ovl31_801377C0

// func_ovl31_80137854

// func_ovl31_80137898

// func_ovl31_80137938

// func_ovl31_8013797C

// func_ovl31_801379C4

// func_ovl31_80137A1C

// func_ovl31_80137E34

// func_ovl31_80138130

// func_ovl31_80138548

// func_ovl31_801386BC

// func_ovl31_80138714

// func_ovl31_80138830

// func_ovl31_801388AC

// func_ovl31_80138B70

// vs_results_entry
