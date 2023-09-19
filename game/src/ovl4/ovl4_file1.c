#include <ft/fighter.h>
#include <if/interface.h>
#include <gm/battle.h>

extern ftSpawnInfo D_ovl2_80116DD0;

extern intptr_t D_NF_00000000;
extern intptr_t D_NF_00000030;
extern intptr_t D_NF_000000C7;

// Until there is a better place for this...
typedef struct Unk800D4060
{
    u32 unk_b0 : 1;

} Unk800D4060;

Unk800D4060 D_ovl4_8018E3D0;

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

    func_ovl2_800FAF64(target_player, &target_spawn_pos);

    for (loop_player = 0; loop_player < ARRAY_COUNT(gBattleState->player_block); loop_player++)
    {
        if (loop_player == target_player) continue;

        if (gBattleState->player_block[loop_player].player_kind == Pl_Kind_None) continue;

        if (gBattleState->player_block[loop_player].player != gBattleState->player_block[target_player].player)
        {
            func_ovl2_800FAF64(loop_player, &loop_spawn_pos);

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
void func_ovl4_8018D228(void)
{
    s32 unused[4];
    s32 player;
    bool32(*proc_cache)();
    void *base_addr;
    ftSpawnInfo player_spawn;
    Unk800D4060 unk_struct;

    gSceneData.unk12 = 0;
    gSceneData.unk10 = 0;

    func_ovl4_8018E330();

    if (!(gSaveData.unk5E2 & 4) && (gSaveData.unk5E3 >= 0x45))
    {
        base_addr = rldm_get_file_with_external_heap((intptr_t)&D_NF_000000C7, hal_alloc(rldm_bytes_needed_to_load((intptr_t)&D_NF_000000C7), 0x10));

        proc_cache = (void*) ((uintptr_t)base_addr + (intptr_t)&D_NF_00000000);

        osWritebackDCache(proc_cache, *(s32*) ((uintptr_t)base_addr + (intptr_t)&D_NF_00000030));
        osInvalICache(proc_cache, *(s32*) ((uintptr_t)base_addr + (intptr_t)&D_NF_00000030));

        if (proc_cache() == FALSE)
        {
            gSaveData.unk5E2 |= 4;
        }
    }
    func_8000B9FC(9, 0x80000000, 0x64, 1, 0xFF);
    func_ovl2_80115890();
    func_ovl2_800EC130();
    mpData_SetMapCollisionData();
    cmManager_SetViewportCoordinates(10, 10, 310, 230);
    cmManager_MakeWallpaperCamera();
    grWallpaper_SetGroundWallpaper();
    func_ovl2_8010DB00();
    itManager_AllocUserData();
    grNodeInit_SetGroundFiles();
    ftManager_AllocFighterData(2, 4);
    wpManager_AllocUserData();
    efManager_AllocUserData();
    ifScreen_SetScreenFlash(0xFF);
    gmRumble_SetPlayerRumble();
    ftPublicity_SetPlayerPublicReact();

    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        player_spawn = D_ovl2_80116DD0;

        if (gBattleState->player_block[player].player_kind == Pl_Kind_None) continue;

        ftManager_SetFileDataKind(gBattleState->player_block[player].character_kind);
        player_spawn.ft_kind = gBattleState->player_block[player].character_kind;

        func_ovl2_800FAF64(player, &player_spawn.pos);
        player_spawn.lr_spawn = func_ovl4_8018D0E0(player);

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
        player_spawn.p_controller = &gPlayerControllers[player];

        player_spawn.unk_rebirth_0x38 = func_ovl2_800D78B4(gBattleState->player_block[player].character_kind);

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
    mpData_SetGroundMusicID();
    func_800269C0(0x272U);
    ifTimer_BattleTime_SetInterface(func_ovl2_80114D98);
    ifTimer_BattleTime_SetTimerDigits();

    unk_struct = D_ovl4_8018E3D0;

    func_ovl0_800D4060(0x3FD, 0xD, 0xA, &unk_struct, 0xC, 1, 0);
}