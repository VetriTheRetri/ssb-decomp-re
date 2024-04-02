#include <ft/fighter.h>
#include <if/interface.h>
#include <gr/ground.h>
#include <gm/battle.h>

extern ftCreateDesc dFtDefaultFighterDesc;

extern intptr_t D_NF_00000000;
extern intptr_t D_NF_00000030;
extern intptr_t D_NF_000000C7;

// Until there is a better place for this...
Unk800D4060 D_ovl4_8018E3D0, D_ovl4_8018E3D4;

// 0x8018D0C0
void scBattle_UpdateGameStatus(void)
{
    func_ovl2_8011485C();
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

    mpCollision_GetPlayerMPointPosition(target_player, &target_spawn_pos);

    for (loop_player = 0; loop_player < ARRAY_COUNT(gBattleState->player_block); loop_player++)
    {
        if (loop_player == target_player) continue;

        if (gBattleState->player_block[loop_player].player_kind == Pl_Kind_Not) continue;

        if (gBattleState->player_block[loop_player].player != gBattleState->player_block[target_player].player)
        {
            mpCollision_GetPlayerMPointPosition(loop_player, &loop_spawn_pos);

            distx = (loop_spawn_pos.x < target_spawn_pos.x) ? -(loop_spawn_pos.x - target_spawn_pos.x) : (loop_spawn_pos.x - target_spawn_pos.x);

            if (near_dist > distx)
            {
                near_dist = distx;
                near_spawn = loop_spawn_pos.x - target_spawn_pos.x;
            }
        }
    }
    lr = (near_spawn >= 0.0F) ? LR_Right : LR_Left;

    return lr;
}

// 0x8018D228
void scBattle_StartStockBattle(void)
{
    s32 unused[4];
    s32 player;
    sb32(*proc_cache)();
    void *base_addr;
    ftCreateDesc player_spawn;
    Unk800D4060 unk_struct;

    gSceneData.is_reset = 0;
    gSceneData.unk10 = 0;

    func_ovl4_8018E330();

    if (!(gSaveData.mprotect_fail & GMSAVE_PROTECTFAIL_1PGAMEMARIO) && (gSaveData.unk5E3 >= 0x45))
    {
        base_addr = rdManagerGetFileWithExternHeap((intptr_t)&D_NF_000000C7, gsMemoryAlloc(rdManagerGetFileSize((intptr_t)&D_NF_000000C7), 0x10));

        proc_cache = (void*) ((uintptr_t)base_addr + (intptr_t)&D_NF_00000000);

        osWritebackDCache(proc_cache, *(s32*) ((uintptr_t)base_addr + (intptr_t)&D_NF_00000030));
        osInvalICache(proc_cache, *(s32*) ((uintptr_t)base_addr + (intptr_t)&D_NF_00000030));

        if (proc_cache() == FALSE)
        {
            gSaveData.mprotect_fail |= GMSAVE_PROTECTFAIL_1PGAMEMARIO;
        }
    }
    func_8000B9FC(9, 0x80000000, 0x64, 1, 0xFF);
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    grWallpaper_SetGroundWallpaper();
    func_ovl2_8010DB00();
    itManagerInitItems();
    grNodeInit_SetGroundFiles();
    ftManager_AllocFighterData(2, GMMATCH_PLAYERS_MAX);
    wpManagerAllocWeapons();
    efManager_AllocUserData();
    ifScreenFlash_InitInterfaceVars(0xFF);
    gmRumble_SetPlayerRumble();
    ftPublicity_SetPlayerPublicReact();

    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        player_spawn = dFtDefaultFighterDesc;

        if (gBattleState->player_block[player].player_kind == Pl_Kind_Not) continue;

        ftManager_SetFileDataKind(gBattleState->player_block[player].character_kind);
        player_spawn.ft_kind = gBattleState->player_block[player].character_kind;

        mpCollision_GetPlayerMPointPosition(player, &player_spawn.pos);
        player_spawn.lr_spawn = scBattle_GetPlayerStartLR(player);

        player_spawn.team = gBattleState->player_block[player].player;
        player_spawn.player = player;

        player_spawn.model_lod = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? ftParts_LOD_HighPoly : ftParts_LOD_LowPoly;

        player_spawn.costume = gBattleState->player_block[player].costume_index;
        player_spawn.shade = gBattleState->player_block[player].shade_index;
        player_spawn.handicap = gBattleState->player_block[player].handicap;
        player_spawn.cp_level = gBattleState->player_block[player].level;
        player_spawn.stock_count = gBattleState->stock_setting;
        player_spawn.damage = 0;
        player_spawn.pl_kind = gBattleState->player_block[player].player_kind;
        player_spawn.controller = &gPlayerControllers[player];

        player_spawn.anim_heap = ftManager_AllocAnimHeapKind(gBattleState->player_block[player].character_kind);

        ftCommon_ClearPlayerMatchStats(player, ftManager_MakeFighter(&player_spawn));
    }
    ftManager_SetFileDataPlayables();
    ifMain_SetGameStatusWait();
    func_ovl2_8010E2D4();
    ifPlayer_MagnifyArrows_SetInterface();
    func_ovl2_8010E1A4();
    ifPlayer_MagnifyGlass_SetInterface();
    func_ovl2_8010DDC4();
    func_ovl2_8010E374();
    func_ovl2_8010E498();
    ifPlayer_Tag_SetInterface();
    func_ovl2_8010F3A0();
    func_ovl2_8010F3C0();
    ifPlayer_Stocks_SetInterface();
    ifStart_TrafficLamp_SetInterface();
    mpCollision_SetPlayMusicID();
    func_800269C0(0x272U);
    ifTimer_BattleTime_SetInterface(func_ovl2_80114D98);
    ifTimer_BattleTime_SetTimerDigits();

    unk_struct = D_ovl4_8018E3D0;

    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &unk_struct, 0xC, 1, 0);
}

// 0x8018D5E0 - Sort time battle winners and check for sudden death
sb32 scBattle_CheckSDSetTimeBattleResults(void)
{
    s32 result_count;
    s32 tied_players;
    s32 i, j;
    gmBattleResults winner_results;
    gmBattleResults player_results[GMMATCH_PLAYERS_MAX];

    if (!(gBattleState->match_rules & GMMATCH_GAMERULE_TIME))
    {
        return FALSE;
    }
    D_800A4EF8 = D_800A4D08;
    D_800A4EF8.pl_count = D_800A4EF8.cp_count = 0;

    for (i = 0; i < ARRAY_COUNT(D_800A4EF8.player_block); i++)
    {
        D_800A4EF8.player_block[i].player_kind = Pl_Kind_Not;
    }
    switch (gBattleState->is_team_battle)
    {
    case FALSE:
        for (result_count = i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
        {
            if (gBattleState->player_block[i].player_kind == Pl_Kind_Not) continue;

            player_results[result_count].tko = gBattleState->player_block[i].score - gBattleState->player_block[i].falls;
            player_results[result_count].kos = gBattleState->player_block[i].score;
            player_results[result_count].player_or_team = i;
            player_results[result_count].unk_battleres_0x9 = FALSE;

            if (gBattleState->player_block[i].player_kind == Pl_Kind_Man)
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
            D_800A4EF8.player_block[player_results[i].player_or_team].player_kind = gBattleState->player_block[player_results[i].player_or_team].player_kind;

            switch (D_800A4EF8.player_block[player_results[i].player_or_team].player_kind)
            {
            case Pl_Kind_Man:
                D_800A4EF8.pl_count++;
                break;

            case Pl_Kind_Com:
                D_800A4EF8.cp_count++;
                break;
            }
        }
        break;

    case TRUE:
        for (result_count = i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
        {
            if (gBattleState->player_block[i].player_kind == Pl_Kind_Not) continue;

            for (j = 0; j < result_count; j++)
            {
                if (gBattleState->player_block[i].team_index == player_results[j].player_or_team)
                {
                    player_results[j].tko += gBattleState->player_block[i].score - gBattleState->player_block[i].falls;
                    player_results[j].kos += gBattleState->player_block[i].score;

                    if ((player_results[j].is_human_player != FALSE) || (gBattleState->player_block[i].player_kind == Pl_Kind_Man))
                    {
                        player_results[j].is_human_player = TRUE;
                    }
                    else player_results[j].is_human_player = FALSE;

                    goto l_continue;
                }
            }
            player_results[result_count].tko = gBattleState->player_block[i].score - gBattleState->player_block[i].falls;
            player_results[result_count].kos = gBattleState->player_block[i].score;
            player_results[result_count].player_or_team = gBattleState->player_block[i].team_index;
            player_results[result_count].unk_battleres_0x9 = FALSE;

            if ((player_results[result_count].is_human_player != FALSE) || (gBattleState->player_block[i].player_kind == Pl_Kind_Man))
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
            for (j = 0; j < ARRAY_COUNT(gBattleState->player_block); j++)
            {
                if (gBattleState->player_block[j].player_kind == Pl_Kind_Not) continue;

                if (gBattleState->player_block[j].team_index == player_results[i].player_or_team)
                {
                    D_800A4EF8.player_block[j].player_kind = gBattleState->player_block[j].player_kind;

                    switch (D_800A4EF8.player_block[j].player_kind)
                    {
                    case Pl_Kind_Man:
                        D_800A4EF8.pl_count++;
                        break;

                    case Pl_Kind_Com:
                        D_800A4EF8.cp_count++;
                        break;
                    }
                }
            }
        }
        break;
    }
    D_800A4EF8.match_rules = GMMATCH_GAMERULE_STOCK;
    D_800A4EF8.is_display_score = FALSE;

    gSceneData.unk10 = 1;

    return TRUE;
}

// 0x8018DE20 - Start sudden death
void scBattle_StartSDBattle(void)
{
    s32 unused[3];
    GObj *fighter_gobj;
    s32 player;
    ftCreateDesc player_spawn;
    Unk800D4060 unk_struct;

    gSceneData.is_reset = FALSE;

    func_ovl4_8018E330();
    func_8000B9FC(9, 0x80000000, 0x64, 1, 0xFF);
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpCollision_InitMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    grWallpaper_SetGroundWallpaper();
    func_ovl2_8010DB00();
    itManagerInitItems();
    grNodeInit_SetGroundFiles();
    ftManager_AllocFighterData(2, GMMATCH_PLAYERS_MAX);
    wpManagerAllocWeapons();
    efManager_AllocUserData();
    ifScreenFlash_InitInterfaceVars(0xFF);
    gmRumble_SetPlayerRumble();
    ftPublicity_SetPlayerPublicReact();

    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        player_spawn = dFtDefaultFighterDesc;

        if (gBattleState->player_block[player].player_kind == Pl_Kind_Not) continue;

        ftManager_SetFileDataKind(gBattleState->player_block[player].character_kind);
        player_spawn.ft_kind = gBattleState->player_block[player].character_kind;

        mpCollision_GetPlayerMPointPosition(player, &player_spawn.pos);

        player_spawn.lr_spawn = scBattle_GetPlayerStartLR(player);

        player_spawn.team = gBattleState->player_block[player].player;
        player_spawn.player = player;

        player_spawn.model_lod = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? ftParts_LOD_HighPoly : ftParts_LOD_LowPoly;

        player_spawn.costume = gBattleState->player_block[player].costume_index;
        player_spawn.shade = gBattleState->player_block[player].shade_index;
        player_spawn.handicap = gBattleState->player_block[player].handicap;
        player_spawn.cp_level = gBattleState->player_block[player].level;
        player_spawn.stock_count = 0;
        player_spawn.damage = 300;
        player_spawn.is_skip_entry = TRUE;
        player_spawn.pl_kind = gBattleState->player_block[player].player_kind;
        player_spawn.controller = &gPlayerControllers[player];

        player_spawn.anim_heap = ftManager_AllocAnimHeapKind(gBattleState->player_block[player].character_kind);

        fighter_gobj = ftManager_MakeFighter(&player_spawn);

        ftCommon_ClearPlayerMatchStats(player, fighter_gobj);

        gBattleState->player_block[player].is_permanent_stock = FALSE;
    }
    ftManager_SetFileDataPlayables();
    ifMain_SetGameStatusWait();
    func_ovl2_8010E2D4();
    ifPlayer_MagnifyArrows_SetInterface();
    func_ovl2_8010E1A4();
    ifPlayer_MagnifyGlass_SetInterface();
    func_ovl2_8010DDC4();
    func_ovl2_8010E374();
    func_ovl2_8010E498();
    ifPlayer_Tag_SetInterface();
    func_ovl2_8010F3A0();
    func_ovl2_8010F3C0();
    ifPlayer_Stocks_SetInterface();
    func_ovl2_80112B74();
    mpCollision_SetPlayMusicID();
    func_800269C0(0x272U);
    ifTimer_BattleTime_SetInterface(func_ovl2_80114D98);
    ifTimer_BattleTime_SetTimerDigits();

    unk_struct = D_ovl4_8018E3D4;

    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &unk_struct, 0xC, 1, 0);
}

// 0x8018E144
void scBattle_SetGeometryRenderLights(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);

    ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}

uintptr_t D_NF_800A5240;
uintptr_t D_NF_8018E7E0;
uintptr_t D_NF_80392A00;

extern scUnkDataBounds D_ovl4_8018E3D8;
extern scRuntimeInfo D_ovl4_8018E3F4;

// 0x8018E190
void scBattleRoyalStartScene(void)
{
    gBattleState = &D_800A4D08;

    gBattleState->game_type = gmMatch_GameType_VSMode;

    gBattleState->gr_kind = gSceneData.gr_kind;

    if (gSaveData.mprotect_fail & GMSAVE_PROTECTFAIL_VSMODECASTLE)
    {
        gBattleState->gr_kind = Gr_Kind_Castle;
    }
    D_ovl4_8018E3D8.unk_scdatabounds_0xC = (void*)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl4_8018E3D8);
    D_ovl4_8018E3F4.arena_size = (uintptr_t)((uintptr_t)&D_NF_80392A00 - (uintptr_t)&D_NF_8018E7E0);
    D_ovl4_8018E3F4.proc_start = scBattle_StartStockBattle;
    func_800A2698(&D_ovl4_8018E3F4);
    func_80020A74();

    while (func_80020D58(0) != FALSE)
    {
        continue;
    }
    func_80020B38(0, 0x7800);
    func_800266A0();
    func_ovl2_801157EC();

    if ((gSceneData.is_reset == FALSE) && (scBattle_CheckSDSetTimeBattleResults() != FALSE))
    {
        gBattleState = &D_800A4EF8;

        gBattleState->game_type = gmMatch_GameType_VSMode;

        D_ovl4_8018E3F4.proc_start = scBattle_StartSDBattle;

        func_800A2698(&D_ovl4_8018E3F4);
        func_80020A74();

        while (func_80020D58(0) != FALSE)
        {
            continue;
        }
        func_80020B38(0, 0x7800);
        func_800266A0();
        func_ovl2_801157EC();
    }
    gSceneData.scene_previous = gSceneData.scene_current;
    gSceneData.scene_current = scMajor_Kind_VSResults;
}
