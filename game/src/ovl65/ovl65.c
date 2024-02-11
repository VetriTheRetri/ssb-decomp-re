#include <ft/fighter.h>
#include <gr/ground.h>
#include <if/interface.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

#include "gm1pgame.h"

// EXTERN

extern s32 D_ovl2_80130D70;
extern u8 D_ovl2_80130D75;
extern void *gCommonSpriteFiles[/* */];
extern RldmFileNode D_ovl65_80193068[100];
extern RldmFileNode D_ovl65_80193388[7];
extern u32 D_ovl2_80116BD0[8];

extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000019;
extern intptr_t D_NF_00000068;
extern intptr_t D_NF_00000080;
extern intptr_t D_NF_00000854;

// DATA

// 0x80192800
u8 gm1PGame_KirbyTeamCopyIDs[8];   

// 0x80192808
f32 D_ovl65_80192808[6] = { -15.0F, 0.0F, 15.0F, 30.0F, 45.0F, 60.0F };

// 0x80192820
f32 D_ovl65_80192820[4] = { 1.0F, 2.0F, -8.0F, -30.0F };

// 0x80192830
gm1PGameCom D_ovl65_80192830[18];

// 0x801929BC
gm1PGameStage D_ovl65_801929BC[18];

// 0x80192ADC
s32 gm1PGame_Interface4PlayersPositionsX[/* */] = {  55, 125, 195, 265 };

// 0x80192AEC
s32 gm1PGame_Interface3PlayersPositionsX[/* */] = {  90, 160, 230 };

// 0x80192AF8
s32 gm1PGame_Interface2PlayersPositionsX[/* */] = { 125, 195 };

// 0x80192B00 - Pointer to player HUD X-Position spacing setups for player counts of 2, 3 and 4
s32 *gm1PGame_InterfaceCountSetups[/* */] = { gm1PGame_Interface2PlayersPositionsX, gm1PGame_Interface3PlayersPositionsX, gm1PGame_Interface4PlayersPositionsX };

// 0x80192B0C - Some kind of process ID list?
u16 D_ovl65_80192B0C[3] = { 0x16, 0xF, 0x3C };

// GLOBAL VARAIBLES

// 0x80192FA0 - Total number of enemies on current stage?
u8 g1PGameEnemyPlayerCount;

// 0x80192FA1 - Remaining stocks of enemy team
u8 g1PGameEnemyStocksRemaining;

// 0x80192FA4 - Flag to hide stock icons of defeated "VS *character* Team" members
u32 g1PGameEnemyStockSpriteFlags;

// 0x80192FA8 - "VS *character* Team" members defeated?
u8 g1PGameEnemyPlayersDefeated;

// 0x80192FA9 - Current enemy variation?
u8 g1PGameCurrentEnemyVariation;

// 0x80192FB0 - Number of unique enemy patterns in "VS *character* Team" battles (e.g. 6 randomly selected colors repeated 3 times for Yoshi Team)
u8 g1PGameEnemyVariations[GM1PGAME_STAGE_MAX_VARIATIONS_COUNT];

// 0x80192FD0 - Camera target position when Master Hand is defeated
Vec3f g1PGameBossDefeatZoomPosition;

// 0x80192FE0
gm1PGameTeam g1PGameTeamSetups[GMMATCH_PLAYERS_MAX];

// 0x80193060 - Costume ID for all members of Kirby Team?
s32 g1PGameEnemyKirbyCostume;

// 0x80193064 - Base of Fighting Polygon Team stock sprite file?
void *g1PGameZakoStockSprite;

// 0x801933C0
sb32 gIsEnd1PGameStage;

// 0x801933C4 - Only works on Meta Crystal and Duel Zone?
sb32 gIsStart1PGameStage;

// 0x801933C8
s32 D_ovl65_801933C8;

// 0x801933CC
s32 D_ovl65_801933CC;

// 0x801933D0 - Specific stats of all enemy players?
gm1PGameStats gBonusStatEnemyStats[2];

// 0x801936A4 - Number of KOs scored on enemies?
s32 gBonusStatNumEnemyKOs;

// 0x801936A4
sb32 gBonusStatBrosCalamity;

// 0x801936A8
u8 gBonusStatTomatoCount;

// 0x801936A9
u8 gBonusStatHeartCount;

// 0x801936AA
u8 D_ovl65_801936AA;

// 0x801936AB
ub8 gBonusStatShieldBreaker;

// 0x801936AC
u8 D_ovl65_801936AC;

// 0x801936AD
ub8 gBonusStatMewCatcher;

// 0x801936B0
s32 gBonusStatAttackIDCount[ftMotion_AttackIndex_EnumMax];

// 0x80193798
sb32 gBonusStatAttackIsSmashCount[2];

// 0x801937A0
sb32 gBonusStatAttackGroundAirCount[2];

// 0x801937A8
sb32 gBonusStatAttackIsSpecialCount[2];

// 0x801937B0
sb32 gBonusStatDefendIDCount[ftMotion_AttackIndex_EnumMax];

// 0x80193898
sb32 gBonusStatDefendIsSmashCount[2];

// 0x801938A0
sb32 gBonusStatDefendGroundAirCount[2];

// 0x801938A8
sb32 gBonusStatDefendIsSpecialCount[2];

// 0x801938B8
s32 g1PGamePlayerInterfacePositionsX[GMMATCH_PLAYERS_MAX];

// 0x801938C8 - Number of enemy stock icons to display?
u8 g1PGameEnemyStocksDisplay;

// 0x801938CC
ftSprites *g1PGameEnemyTeamSprites;

// FUNCTIONS
void func_ovl65_8018D0C0(void)
{
    RldmSetup rldm_setup;

    rldm_setup.tableRomAddr = (intptr_t)&D_NF_001AC870;
    rldm_setup.tableFileCount = (uintptr_t)&D_NF_00000854;
    rldm_setup.fileHeap = NULL;
    rldm_setup.fileHeapSize = 0;
    rldm_setup.statusBuf = D_ovl65_80193068;
    rldm_setup.statusBufSize = ARRAY_COUNT(D_ovl65_80193068);
    rldm_setup.forceBuf = D_ovl65_80193388;
    rldm_setup.forceBufSize = ARRAY_COUNT(D_ovl65_80193388);

    rldm_initialize(&rldm_setup);
    rldm_load_files_into(D_ovl2_80116BD0, ARRAY_COUNT(D_ovl2_80116BD0), gCommonSpriteFiles, hal_alloc(rldm_bytes_need_to_load(D_ovl2_80116BD0, ARRAY_COUNT(D_ovl2_80116BD0)), 0x10));
}

// New file?
void func_ovl65_8018D160(void)
{
    gIsStart1PGameStage = TRUE;

    if ((gSceneData.spgame_stage == gm1PGame_Stage_Metal) || (gSceneData.spgame_stage == gm1PGame_Stage_Zako))
    {
        mpCollision_SetPlayMusicID();
    }
}

// 0x8018D1A8
void func_ovl65_8018D1A8(void)
{
    GObj *fighter_gobj;
    ftStruct *fp;

    gIsEnd1PGameStage = TRUE;

    fighter_gobj = gBattleState->player_block[gSceneData.player_port].fighter_gobj;
    fp = ftGetStruct(fighter_gobj);

    D_ovl65_801933C8 = fp->status_info.status_id;
    D_ovl65_801933CC = fp->star_invincible_timer;
}

// 0x8018D200
void func_ovl65_8018D200(void)
{
    func_ovl2_8011485C();

    if ((gIsStart1PGameStage == FALSE) && (gBattleState->game_status == gmMatch_GameStatus_Go))
    {
        func_ovl65_8018D160();
    }
    if ((gIsEnd1PGameStage == FALSE) && (gBattleState->game_status == gmMatch_GameStatus_Set))
    {
        func_ovl65_8018D1A8();
    }
}

// 0x8018D280
s32 gm1PGame_GetNextFreePlayerPort(s32 player)
{
    return (player == (GMMATCH_PLAYERS_MAX - 1)) ? 0 : player + 1;
}

// 0x8018D29C - Really weird match, gets next available costume for CPU player in 1P Game
s32 func_ovl65_8018D29C(s32 com)
{
    s32 player;
    s32 used_costume;
    s32 com_costume;
    s32 com_ft_kind;

    com_ft_kind = gBattleState->player_block[com].character_kind;

    // WARNING: Newline memes. get_costume should be on the same line as used_costume = 0, player = 0;
    used_costume = 0, player = 0; get_costume:

    com_costume = ftCostume_GetIndexFFA(com_ft_kind, used_costume);

    while (player != ARRAY_COUNT(gBattleState->player_block))
    {
        if (player == com) goto cont; // This goto is required

        else if (gBattleState->player_block[player].player_kind == Pl_Kind_Not) goto cont; // This one is not

        else if ((gBattleState->player_block[player].character_kind == com_ft_kind) && (gBattleState->player_block[player].costume_index == com_costume))
        {
            used_costume++, player = 0;

            goto get_costume;
        }
    cont:
        player++;
    }
    return com_costume;
}

// 0x8018D38C - Empty function because of course
void func_ovl65_8018D38C(void)
{
    return;
}

// 0x8018D394 - Get random shuffled variable, used for Yoshi Team, Kirby Team (?), Race to the Finish and Fighting Polygon Team
s32 func_ovl65_8018D394(u16 shuf, s32 max)
{
    s32 i = -1;

    max++;

    do
    {
        i++;

        if (!(shuf & (1 << i)))
        {
            max--;
        }
    } 
    while (max != 0);

    return i;
}

// 0x8018D3D0 - Yet ANOTHER empty function
void func_ovl65_8018D3D0(void)
{
    return;
}

// 0x8018D3D8
void func_ovl65_8018D3D8(Vec3f *mpoint_pos, s32 mpoint_kind)
{
    s32 mpoint;

    if (mpCollision_GetMPointCountKind(mpoint_kind) != 1)
    {
        while (TRUE)
        {
            fatal_printf("getMapObjPos:mpGetMapObjNumId(%d) = %d\n", mpoint_kind, mpCollision_GetMPointCountKind(mpoint_kind));
            scnmgr_crash_print_gobj_state();
        }
    }
    mpCollision_GetMPointIDsKind(mpoint_kind, &mpoint);
    mpCollision_GetMPointPositionID(mpoint, mpoint_pos);
}

// 0x8018D45C
void func_ovl65_8018D45C(Vec3f *mpoint_pos, s32 mpoint_kind)
{
    s32 mpoint_count = mpCollision_GetMPointCountKind(mpoint_kind);
    s32 mpoint[10];

    if ((mpoint_count == 0) || (mpoint_count > ARRAY_COUNT(mpoint)))
    {
        while (TRUE)
        {
            fatal_printf("getMapObjPosRandom:mpGetMapObjNumId(%d) = 0\n", mpoint_kind);
            scnmgr_crash_print_gobj_state();
        }
    }
    mpCollision_GetMPointIDsKind(mpoint_kind, mpoint);
    mpCollision_GetMPointPositionID(mpoint[lbRandom_GetIntRange(mpoint_count)], mpoint_pos);
}

// 0x8018D4EC
void func_ovl65_8018D4EC(gm1PGameStage *stagesetup, gm1PGameCom *comsetup, s32 player, s32 enemy_player_num)
{
    s32 level = comsetup->level[gSaveData.spgame_difficulty];

    level -= D_ovl2_80130D70;

    if (level <= 0)
    {
        level = 1;
    }
    gBattleState->player_block[player].level = level;
    gBattleState->player_block[player].handicap = comsetup->handicap[gSaveData.spgame_difficulty];
    gBattleState->player_block[player].character_kind = stagesetup->character_kind[enemy_player_num];
    gBattleState->player_block[player].team_index = 3;
    gBattleState->player_block[player].costume_index = 0;
    gBattleState->player_block[player].shade_index = 0;
    gBattleState->player_block[player].team_color_index = 4;
    gBattleState->player_block[player].tag_index = ifPlayerTag_Kind_CP;
    gBattleState->player_block[player].is_permanent_stock = TRUE;
    gBattleState->player_block[player].stock_count = 0;
    gBattleState->player_block[player].is_rebirth_multi = TRUE;
    gBattleState->player_block[player].player_kind = Pl_Kind_Com;

    g1PGameTeamSetups[player].com_behavior = stagesetup->opponent_behavior;

    g1PGameEnemyPlayersDefeated--;
}

// 0x8018D60C
void gm1PGame_SetupStageAll(void)
{
    gm1PGameStage *stagesetup = &D_ovl65_801929BC[gSceneData.spgame_stage];
    gm1PGameCom *comsetup = &D_ovl65_80192830[gSceneData.spgame_stage];
    s32 player, com;
    u16 flags;
    s32 i;
    s32 variations;
    s32 level;
    s32 costume, kind;

    gSceneData.is_reset = FALSE;

    gBattleState->gr_kind = stagesetup->gr_kind;
    gBattleState->is_team_attack = comsetup->is_team_attack;

    switch (gSceneData.spgame_stage)
    {
    case gm1PGame_Stage_Bonus3:
        gBattleState->time_limit = 1;
        break;

    case gm1PGame_Stage_Luigi:
    case gm1PGame_Stage_Ness:
    case gm1PGame_Stage_Purin:
    case gm1PGame_Stage_Captain:
        gBattleState->time_limit = 100;
        break;

    default:
        gBattleState->time_limit = gSceneData.spgame_time_limit;
        break;
    }
    gBattleState->item_toggles = stagesetup->item_toggles;
    gBattleState->item_switch = comsetup->item_switch;

    g1PGameEnemyPlayerCount = g1PGameEnemyStocksRemaining = g1PGameEnemyPlayersDefeated = stagesetup->opponent_count;

    g1PGameEnemyStockSpriteFlags = 0;

    for (i = 0; i < (ARRAY_COUNT(gBattleState->player_block) + ARRAY_COUNT(g1PGameTeamSetups)) / 2; i++)
    {
        g1PGameTeamSetups[i].unk_gm1punk_0x4 = 0;
        g1PGameTeamSetups[i].copy_kind = Ft_Kind_Kirby;
        g1PGameTeamSetups[i].team_order = 0;
        g1PGameTeamSetups[i].unk_gm1punk_0x10 = FALSE;
        g1PGameTeamSetups[i].is_skip_magnify = FALSE;
        g1PGameTeamSetups[i].com_behavior = 0;
        g1PGameTeamSetups[i].cam_frame_mul = 1.0F;

        if (i != gSceneData.player_port)
        {
            gBattleState->player_block[i].player_kind = Pl_Kind_Not;
        }
    }
    if (gSceneData.spgame_stage < gm1PGame_Stage_ChallengerStart)
    {
        D_800A4B18.player_block[gSceneData.player_port].is_permanent_stock = FALSE;
        g1PGameTeamSetups[gSceneData.player_port].mpoint_kind = mpMPoint_Kind_1PGamePlayerSpawn;
    }
    else
    {
        D_800A4B18.player_block[gSceneData.player_port].is_permanent_stock = TRUE;
        g1PGameTeamSetups[gSceneData.player_port].mpoint_kind = mpMPoint_Kind_1PGameChallengerPlayerSpawn;
    }
    switch (gSceneData.spgame_stage)
    {
    case gm1PGame_Stage_Boss:
    case gm1PGame_Stage_Bonus3:
        g1PGameTeamSetups[gSceneData.player_port].unk_gm1punk_0x10 = TRUE;
        break;

    default:
        g1PGameTeamSetups[gSceneData.player_port].unk_gm1punk_0x10 = FALSE;
        break;
    }
    player = gSceneData.player_port;

    switch (gSceneData.spgame_stage)
    {
    case gm1PGame_Stage_Link:
    case gm1PGame_Stage_Fox:
    case gm1PGame_Stage_Mario:
    case gm1PGame_Stage_Pikachu:
    case gm1PGame_Stage_Donkey:
    case gm1PGame_Stage_Samus:
    case gm1PGame_Stage_Metal:
    case gm1PGame_Stage_Boss:
    case gm1PGame_Stage_Luigi:
    case gm1PGame_Stage_Ness:
    case gm1PGame_Stage_Purin:
    case gm1PGame_Stage_Captain:
        for (i = 0; i < stagesetup->ally_count; i++)
        {
            gBattleState->player_block[gSceneData.cpu_port[i]].level = comsetup->level2[gSaveData.spgame_difficulty];
            gBattleState->player_block[gSceneData.cpu_port[i]].handicap = comsetup->handicap2[gSaveData.spgame_difficulty];
            gBattleState->player_block[gSceneData.cpu_port[i]].team_index = 0;
            gBattleState->player_block[gSceneData.cpu_port[i]].team_color_index = gSceneData.player_port;
            gBattleState->player_block[gSceneData.cpu_port[i]].tag_index = ifPlayerTag_Kind_Heart;
            gBattleState->player_block[gSceneData.cpu_port[i]].is_permanent_stock = TRUE;
            gBattleState->player_block[gSceneData.cpu_port[i]].stock_count = 0;
            gBattleState->player_block[gSceneData.cpu_port[i]].is_rebirth_multi = FALSE;
            gBattleState->player_block[gSceneData.cpu_port[i]].player_kind = Pl_Kind_Com;

            player = gSceneData.cpu_port[i];

            g1PGameTeamSetups[gSceneData.cpu_port[i]].mpoint_kind = i + mpMPoint_Kind_1PGameAllySpawnStart;
            g1PGameTeamSetups[gSceneData.cpu_port[i]].com_behavior = stagesetup->ally_behavior;
        }
        for (i = 0; i < stagesetup->opponent_count; i++)
        {
            player = gm1PGame_GetNextFreePlayerPort(player);

            func_ovl65_8018D4EC(stagesetup, comsetup, player, i);

            gBattleState->player_block[player].costume_index = func_ovl65_8018D29C(player);

            if (gSceneData.spgame_stage < gm1PGame_Stage_ChallengerStart)
            {
                g1PGameTeamSetups[player].mpoint_kind = i + mpMPoint_Kind_1PGameEnemySpawnStart;
            }
            else
            {
                g1PGameTeamSetups[player].mpoint_kind = i + mpMPoint_Kind_1PGameChallengerEnemySpawnStart;

                level = gBattleState->player_block[player].level - gSceneData.unk43;

                gBattleState->player_block[player].level = (level <= 0) ? 1 : level;
            }
            if (gSceneData.spgame_stage == gm1PGame_Stage_Boss)
            {
                g1PGameTeamSetups[player].is_skip_magnify = 1;
            }
        }
        break;

    case gm1PGame_Stage_Yoshi:
        variations = GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT;
        flags = 0;

        for (i = 0; i < GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT; i++)
        {
            g1PGameEnemyVariations[i] = func_ovl65_8018D394(flags, lbRandom_GetIntRange(variations));

            flags |= (1 << g1PGameEnemyVariations[i]);

            variations--;
        }
        for (costume = 0, i = GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT; i < stagesetup->opponent_count; i++)
        {
            g1PGameEnemyVariations[i] = g1PGameEnemyVariations[costume];

            if (costume == (GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT - 1))
            {
                costume = 0;
            }
            else costume++;
        }
        g1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            player = gm1PGame_GetNextFreePlayerPort(player);

            func_ovl65_8018D4EC(stagesetup, comsetup, player, 0);

            gBattleState->player_block[player].costume_index = g1PGameEnemyVariations[g1PGameCurrentEnemyVariation];

            if ((gSceneData.ft_kind == Ft_Kind_Yoshi) && (gSceneData.costume_index == gBattleState->player_block[player].costume_index))
            {
                gBattleState->player_block[player].shade_index = 1;
            }
            else gBattleState->player_block[player].shade_index = 0;

            g1PGameTeamSetups[player].mpoint_kind = i + mpMPoint_Kind_1PGameEnemySpawnStart;
            g1PGameTeamSetups[player].team_order = g1PGameCurrentEnemyVariation;
            g1PGameTeamSetups[player].cam_frame_mul = 0.3F;
            g1PGameTeamSetups[player].is_skip_magnify = TRUE;

            g1PGameCurrentEnemyVariation++;
        }
        break;

    case gm1PGame_Stage_Zako:
        variations = GM1PGAME_STAGE_MAX_VARIATIONS_COUNT;
        flags = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_VARIATIONS_COUNT; i++)
        {
            g1PGameEnemyVariations[i] = func_ovl65_8018D394(flags, lbRandom_GetIntRange(variations));

            flags |= (1 << g1PGameEnemyVariations[i]);

            g1PGameEnemyVariations[i] += 14;

            variations--;
        }
        for (kind = 0, i = GM1PGAME_STAGE_MAX_VARIATIONS_COUNT; i < stagesetup->opponent_count; i++)
        {
            g1PGameEnemyVariations[i] = g1PGameEnemyVariations[kind];

            if (kind == (GM1PGAME_STAGE_MAX_VARIATIONS_COUNT - 1))
            {
                kind = 0;
            }
            else kind++;
        }
        g1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            player = gm1PGame_GetNextFreePlayerPort(player);

            func_ovl65_8018D4EC(stagesetup, comsetup, player, 0);

            gBattleState->player_block[player].character_kind = g1PGameEnemyVariations[g1PGameCurrentEnemyVariation];

            g1PGameTeamSetups[player].mpoint_kind = i + mpMPoint_Kind_1PGameEnemySpawnStart;
            g1PGameTeamSetups[player].team_order = g1PGameCurrentEnemyVariation;
            g1PGameTeamSetups[player].cam_frame_mul = 0.3F;
            g1PGameTeamSetups[player].is_skip_magnify = TRUE;

            g1PGameCurrentEnemyVariation++;
        }
        break;

    case gm1PGame_Stage_Kirby:
        g1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < GM1PGAME_STAGE_KIRBY_OPPONENT_COUNT; i++)
        {
            player = gm1PGame_GetNextFreePlayerPort(player);

            func_ovl65_8018D4EC(stagesetup, comsetup, player, 0);

            g1PGameEnemyKirbyCostume = gBattleState->player_block[player].costume_index =

            ((gSceneData.ft_kind == Ft_Kind_Kirby) && (gSceneData.costume_index == gBattleState->player_block[player].costume_index)) ? ftCostume_GetIndexFFA(Ft_Kind_Kirby, 1) : 0;

            g1PGameTeamSetups[player].team_order = g1PGameCurrentEnemyVariation;
            g1PGameTeamSetups[player].copy_kind = gm1PGame_KirbyTeamCopyIDs[g1PGameCurrentEnemyVariation];
            g1PGameTeamSetups[player].mpoint_kind = i + mpMPoint_Kind_1PGameEnemySpawnStart;

            g1PGameTeamSetups[player].cam_frame_mul = 0.3F;
            g1PGameTeamSetups[player].is_skip_magnify = TRUE;

            g1PGameCurrentEnemyVariation++;
        }
        break;

    case gm1PGame_Stage_Bonus3:
        variations = GM1PGAME_STAGE_MAX_VARIATIONS_COUNT;
        flags = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            g1PGameEnemyVariations[i] = func_ovl65_8018D394(flags, lbRandom_GetIntRange(variations));

            flags |= (1 << g1PGameEnemyVariations[i]);

            g1PGameEnemyVariations[i] += 14;

            variations--;
        }
        g1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            player = gm1PGame_GetNextFreePlayerPort(player);

            func_ovl65_8018D4EC(stagesetup, comsetup, player, 0);

            gBattleState->player_block[player].character_kind = g1PGameEnemyVariations[g1PGameCurrentEnemyVariation];

            g1PGameTeamSetups[player].mpoint_kind = i + mpMPoint_Kind_1PGameEnemySpawnStart;
            g1PGameTeamSetups[player].is_skip_magnify = g1PGameTeamSetups[player].unk_gm1punk_0x10 = TRUE;

            g1PGameCurrentEnemyVariation++;
        }
        break;

    default:
        break;
    }
    gBattleState->pl_count = gBattleState->cp_count = 0;

    for (i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
    {
        switch (gBattleState->player_block[i].player_kind)
        {
        case Pl_Kind_Man:
            gBattleState->pl_count++;
            break;

        case Pl_Kind_Com:
            gBattleState->cp_count++;
            break;
        }
    }
    gBonusStatTomatoCount = 0;
    gBonusStatHeartCount = 0;
    D_ovl65_801936AA = 0;
    gBonusStatShieldBreaker = FALSE;
    D_ovl65_801936AC = 0;
    gBonusStatMewCatcher = FALSE;

    gIsStart1PGameStage = FALSE;
    gIsEnd1PGameStage = FALSE;

    gBonusStatNumEnemyKOs = 0;
    D_ovl65_801933C8 = -1;
    D_ovl65_801933CC = 0;
    gBonusStatBrosCalamity = FALSE;

    for (i = 0; i < ((ARRAY_COUNT(gBonusStatAttackIDCount) + ARRAY_COUNT(gBonusStatDefendIDCount)) / 2); i++)
    {
        gBonusStatAttackIDCount[i] = gBonusStatDefendIDCount[i] = 0;
    }
    for 
    (
        i = 0; 
        i < (ARRAY_COUNT(gBonusStatAttackIsSmashCount) + ARRAY_COUNT(gBonusStatAttackGroundAirCount) + ARRAY_COUNT(gBonusStatAttackIsSpecialCount) +
             ARRAY_COUNT(gBonusStatDefendIsSmashCount) + ARRAY_COUNT(gBonusStatDefendGroundAirCount) + ARRAY_COUNT(gBonusStatDefendIsSpecialCount)) / 6;
        i++
    )
    {
        gBonusStatAttackIsSmashCount[i] = gBonusStatDefendIsSmashCount[i] = 0;
        gBonusStatAttackGroundAirCount[i] = gBonusStatDefendGroundAirCount[i] = 0;
        gBonusStatAttackIsSpecialCount[i] = gBonusStatDefendIsSpecialCount[i] = 0;
    }
}

// 0x8018E18C - Spawn next member of enemy team
void gm1PGame_SpawnEnemyTeamNext(GObj *player_gobj)
{
    ftStruct *fp;
    ftAttributes *attributes;
    void *unused2;
    ftSpawnInfo player_spawn;
    void *anim_bank;
    GObj *com_gobj;
    s32 player;
    void *unused1;

    fp = ftGetStruct(player_gobj);
    attributes = fp->attributes;
    player = fp->player;
    anim_bank = fp->anim_load;

    if (g1PGameEnemyPlayersDefeated == 0)
    {
        ftCommon_Sleep_SetStatus(player_gobj);
    }
    else
    {
        g1PGameEnemyPlayersDefeated--;

        func_ovl2_800D78E8(player_gobj);

        gBattleState->player_block[player].stock_count = 0;

        switch (gSceneData.spgame_stage)
        {
        case gm1PGame_Stage_Yoshi:
            gBattleState->player_block[player].costume_index = g1PGameEnemyVariations[g1PGameCurrentEnemyVariation];

            gBattleState->player_block[player].shade_index = ((gSceneData.ft_kind == Ft_Kind_Yoshi) && (gSceneData.costume_index == gBattleState->player_block[player].costume_index)) ? 1 : 0;

            func_ovl2_8010FF78(player, gBattleState->player_block[player].costume_index, attributes);
            break;

        case gm1PGame_Stage_Zako:
            gBattleState->player_block[player].character_kind = g1PGameEnemyVariations[g1PGameCurrentEnemyVariation];
            break;

        case gm1PGame_Stage_Kirby:
            g1PGameTeamSetups[player].copy_kind = (g1PGameCurrentEnemyVariation == 7) ? D_ovl2_80130D75 : gm1PGame_KirbyTeamCopyIDs[g1PGameCurrentEnemyVariation];
            break;
        }
        g1PGameTeamSetups[player].team_order = g1PGameCurrentEnemyVariation++;

        player_spawn = ftGlobal_SpawnInfo_MainData;

        player_spawn.ft_kind = gBattleState->player_block[player].character_kind;

        func_ovl65_8018D45C(&player_spawn.pos, mpMPoint_Kind_1PGameEnemyTeamSpawn);

        player_spawn.pos.y = (gGroundInfo->cam_bound_top + gGroundInfo->blastzone_top) * 0.5F;

        player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? LR_Left : LR_Right;

        player_spawn.team = gBattleState->player_block[player].team_index;

        player_spawn.player = player;

        player_spawn.model_lod = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? ftParts_LOD_HighPoly : ftParts_LOD_LowPoly;

        player_spawn.costume = gBattleState->player_block[player].costume_index;

        player_spawn.shade = gBattleState->player_block[player].shade_index;

        player_spawn.handicap = gBattleState->player_block[player].handicap;

        player_spawn.cp_level = gBattleState->player_block[player].level;

        player_spawn.stock_count = gBattleState->player_block[player].stock_count;

        player_spawn.damage = 0;

        player_spawn.pl_kind = gBattleState->player_block[player].player_kind;

        player_spawn.p_controller = &gPlayerControllers[player];

        player_spawn.anim_heap = anim_bank;

        player_spawn.copy_kind = g1PGameTeamSetups[player].copy_kind;
        player_spawn.team_order = g1PGameTeamSetups[player].team_order;

        player_spawn.is_skip_entry = TRUE;
        player_spawn.is_skip_magnify = g1PGameTeamSetups[player].is_skip_magnify;
        player_spawn.is_skip_shadow_setup = TRUE;

        com_gobj = ftManager_MakeFighter(&player_spawn);

        fp = ftGetStruct(com_gobj);

        ftCommon_ClearPlayerMatchStats(player, com_gobj);
        ftCommon_SetAllowPlayerControl(com_gobj);

        fp->fighter_com.behavior_write = g1PGameTeamSetups[player].com_behavior;

        ifPlayer_Damage_StopBreakAnim(fp);

        fp->fighter_cam_zoom_frame *= g1PGameTeamSetups[player].cam_frame_mul;
    }
}

// 0x8018E598
void gm1PGame_SetupPlayerInterfacePositions(void)
{
    s32 *pos = gm1PGame_InterfaceCountSetups[(gBattleState->pl_count + gBattleState->cp_count) - 2];
    s32 player = gSceneData.player_port;
    s32 i;

    for (i = 0; i < (gBattleState->pl_count + gBattleState->cp_count); i++)
    {
        g1PGamePlayerInterfacePositionsX[player] = *pos;
        player = gm1PGame_GetNextFreePlayerPort(player);

        pos++;
    }
    gPlayerCommonInterface.ifplayers_pos_x = g1PGamePlayerInterfacePositionsX;
    gPlayerCommonInterface.ifplayers_pos_y = 210;
}

// 0x8018E670
void func_ovl65_8018E670(void)
{
    GObj *fighter_gobj;
    s32 random;
    s32 player_count;
    s32 process_id;
    s32 player;
    s32 i;

    random = lbRandom_GetIntRange(ARRAY_COUNT(D_ovl65_80192B0C));
    stop_current_process(0x5A);
    func_ovl2_80112668();

    process_id = D_ovl65_80192B0C[random];

    if (random == 1)
    {
        stop_current_process(0x5A);
    }
    player_count = gBattleState->pl_count + gBattleState->cp_count;

    if (player_count < 3)
    {
        stop_current_process(process_id);
    }
    player = gSceneData.player_port;

    for (i = 0; i < player_count; i++)
    {
        fighter_gobj = gBattleState->player_block[player].fighter_gobj;

        ftCommon_Appear_SetStatus(fighter_gobj);

        if (random == 2)
        {
            stop_current_process(0x1E);
            func_ovl2_8010CF44(fighter_gobj, 0.0F, 0.0F, ftGetStruct(fighter_gobj)->attributes->closeup_cam_zoom, 0.1F, 28.0F);
            stop_current_process(process_id - 0x1E);
        }
        else stop_current_process(process_id);

        player = gm1PGame_GetNextFreePlayerPort(player);
    }
    if (random == 2)
    {
        stop_current_process(0x1E);
        func_ovl2_8010CF20();
    }
}

// 0x8018E824
void func_ovl65_8018E824(void)
{
    GObj *fighter_gobj;
    s32 player_count;
    s32 player;
    s32 i;

    stop_current_process(0x5A);
    func_ovl2_80112668();

    player_count = gBattleState->pl_count + gBattleState->cp_count;
    player = gSceneData.player_port;

    for (i = 0; i < player_count; i++)
    {
        fighter_gobj = gBattleState->player_block[player].fighter_gobj;

        if (player == gSceneData.player_port)
        {
            ftCommon_Appear_SetStatus(fighter_gobj);
        }
        else ftCommon_Appear_SetPosition(fighter_gobj);

        stop_current_process(0x3C);

        player = gm1PGame_GetNextFreePlayerPort(player);
    }
}

// 0x8018E8F8
void func_ovl65_8018E8F8(void)
{
    func_ovl2_8010CFA8(gBattleState->player_block[gSceneData.player_port].fighter_gobj, 0.0F, F_DEG_TO_RAD(-15.0F), 7000.0F, 0.3F, 31.5F);
    stop_current_process(0x3C);
    func_ovl2_801120D4();
    ifPlayer_Damage_InitInterface();
    func_800269C0(0x1EA);
    func_ovl2_801121C4();
    omEjectGObjCommon(NULL);
    stop_current_process(1);
}

// 0x8018E9A4
void func_ovl65_8018E9A4(void)
{
    GObj *player_gobj;
    ftStruct *player_fp;
    ftStruct *com_fp;
    GObj *com_gobj;
    s32 player;
    Vec3f sp20;

    player_gobj = gBattleState->player_block[gSceneData.player_port].fighter_gobj;

    player_fp = ftGetStruct(player_gobj);

    sp20.x = 0.0F;
    sp20.y = 0.0F;
    sp20.z = 0.0F;

    func_ovl2_8010D030((void*) (((uintptr_t)gGroundInfo->gr_desc[1].dobj_desc - (intptr_t)&D_NF_00004D48) + (intptr_t)&D_NF_00006010), 0.0F, &sp20);

    for (player = 0; TRUE; player++) // Wut da haeiyll
    {
        if (gBattleState->player_block[player].player_kind == Pl_Kind_Not)
        {
            continue;
        }
        else if (gBattleState->player_block[player].is_rebirth_multi == FALSE)
        {
            continue;
        }
        else
        {
            com_gobj = gBattleState->player_block[player].fighter_gobj;

            break;
        }
    }
    com_fp = ftGetStruct(com_gobj);

    ftCommon_Appear_SetStatus(com_gobj);
    stop_current_process(0x258);
    ftCommon_SetAllowPlayerControl(player_gobj);
    ftCommon_SetAllowPlayerControl(com_gobj);

    player_fp->camera_mode = 0;
    com_fp->camera_mode = 0;
    gBattleState->game_status = gmMatch_GameStatus_Go;
    gPlayerCommonInterface.is_ifmagnify_display = TRUE;

    ifPlayer_Damage_InitInterface();

    gMusicIndexDefault = 0x19;
    ftSpecialItem_BGMCheckFighters();
}

// 0x8018EADC
void func_ovl65_8018EADC(GObj *gobj)
{
    switch (gSceneData.spgame_stage)
    {
    case gm1PGame_Stage_Link:
    case gm1PGame_Stage_Fox:
    case gm1PGame_Stage_Mario:
    case gm1PGame_Stage_Pikachu:
    case gm1PGame_Stage_Donkey:
    case gm1PGame_Stage_Samus:
    case gm1PGame_Stage_Metal:
    case gm1PGame_Stage_Luigi:
    case gm1PGame_Stage_Ness:
    case gm1PGame_Stage_Purin:
    case gm1PGame_Stage_Captain:
        func_ovl65_8018E670();
        break;

    case gm1PGame_Stage_Yoshi:
    case gm1PGame_Stage_Kirby:
    case gm1PGame_Stage_Zako:
        func_ovl65_8018E824();
        break;

    case gm1PGame_Stage_Bonus3:
        func_ovl65_8018E8F8();
        break;

    case gm1PGame_Stage_Boss:
        func_ovl65_8018E9A4();
        break;
    }
    omEjectGObjCommon(NULL);
    stop_current_process(1);
}

// 0x8018EB68
void func_ovl65_8018EB68(void)
{
    omAddGObjCommonProc(omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xA, 0x80000000), func_ovl65_8018EADC, 0, 5);
    gBattleState->game_status = gmMatch_GameStatus_Wait;
}

// 0x8018EBB8
void func_ovl65_8018EBB8(GObj *interface_gobj)
{
    SObj *sobj;
    s32 stock_num;
    s32 ix, iy;

    if (g1PGameEnemyStocksRemaining != 0)
    {
        if (g1PGameEnemyStocksRemaining != g1PGameEnemyStocksDisplay)
        {
            g1PGameEnemyStocksDisplay = g1PGameEnemyStocksRemaining;

            sobj = SObjGetStruct(interface_gobj);

            for (stock_num = g1PGameEnemyPlayerCount - 1, ix = iy = 0; sobj != NULL; sobj = sobj->next, stock_num--)
            {
                if ((1 << stock_num) & g1PGameEnemyStockSpriteFlags)
                {
                    sobj->sprite.attr |= SP_HIDDEN;
                }
                else
                {
                    sobj->pos.x = (ix * 10) + 20;
                    sobj->pos.y = (iy * 10) + 20;

                    ix++;

                    if (ix >= 10)
                    {
                        ix = 0, iy++;
                    }
                    switch (gSceneData.spgame_stage)
                    {
                    case gm1PGame_Stage_Yoshi:
                        sobj->sprite = *g1PGameEnemyTeamSprites->stock_spr;
                        sobj->sprite.LUT = g1PGameEnemyTeamSprites->stock_lut[g1PGameEnemyVariations[stock_num]];
                        break;

                    case gm1PGame_Stage_Kirby:
                        sobj->sprite = *g1PGameEnemyTeamSprites->stock_spr;
                        sobj->sprite.LUT = g1PGameEnemyTeamSprites->stock_lut[g1PGameEnemyKirbyCostume];
                        break;

                    case gm1PGame_Stage_Zako:
                        sobj->sprite = *(Sprite*) ((uintptr_t)g1PGameZakoStockSprite + (intptr_t)&D_NF_00000080);
                        break;
                    }
                    sobj->sprite.attr &= ~SP_HIDDEN;
                }
            }
        }
        func_ovl0_800CCF00(interface_gobj);
    }
}

// 0x8018EE44
void func_ovl65_8018EE44(void)
{
    GObj *interface_gobj;
    ftStruct *fp;
    Sprite *sprite;
    s32 i;

    switch (gSceneData.spgame_stage)
    {
    case gm1PGame_Stage_Yoshi:
    case gm1PGame_Stage_Kirby:
        for (i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
        {
            if (gBattleState->player_block[i].player_kind == Pl_Kind_Not) continue;

            else if (gBattleState->player_block[i].is_rebirth_multi == FALSE) continue;

            else
            {
                fp = ftGetStruct(gBattleState->player_block[i].fighter_gobj);

                break;
            }
        }
        g1PGameEnemyTeamSprites = fp->attributes->sprites;

        sprite = g1PGameEnemyTeamSprites->stock_spr;

        sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;

        goto make_gobj;

    case gm1PGame_Stage_Zako:
        g1PGameZakoStockSprite = rldm_get_file_with_external_heap((uintptr_t)&D_NF_00000019, hal_alloc(rldm_bytes_needed_to_load((uintptr_t)&D_NF_00000019), 0x10));

        sprite = (Sprite*) ((uintptr_t)g1PGameZakoStockSprite + (intptr_t)&D_NF_00000080);

        sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;

    make_gobj:
        interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

        omAddGObjRenderProc(interface_gobj, func_ovl65_8018EBB8, 0x17, 0x80000000, -1);

        for (i = 0; i < g1PGameEnemyStocksRemaining; i++)
        {
            func_ovl0_800CCFDC(interface_gobj, (Sprite*) ((uintptr_t)gCommonSpriteFiles[4] + (intptr_t)&D_NF_00000068));
        }
        g1PGameEnemyStocksDisplay = g1PGameEnemyStocksRemaining + 1;

        break;
    }
}

// 0x8018EFFC
void func_ovl65_8018EFFC(s32 player, s32 stock_num)
{
    GObj *fighter_gobj = gBattleState->player_block[player].fighter_gobj;
    ftStruct *fp = ftGetStruct(fighter_gobj);
    gm1PGameStats *enemy_stats;

    if ((player == gSceneData.player_port) && (gBattleState->player_block[player].stock_count == -1) && (gBattleState->game_status != gmMatch_GameStatus_End))
    {
        ifAnnounce_GameEnd_DisplayMessage();
    }
    else if (gBattleState->player_block[player].is_rebirth_multi != FALSE)
    {
        g1PGameEnemyStocksRemaining--;
        g1PGameEnemyStockSpriteFlags |= (1 << stock_num);

        enemy_stats = &gBonusStatEnemyStats[gBonusStatNumEnemyKOs];

        enemy_stats->team_order = fp->team_order;
        enemy_stats->damage_status_id = fp->status_info.status_id;
        enemy_stats->damage_player = fp->damage_player;
        enemy_stats->damage_object_class = fp->damage_object_class;
        enemy_stats->damage_object_kind = fp->damage_object_kind;
        enemy_stats->damage_stat_flags = fp->damage_stat_flags;
        enemy_stats->damage_stat_count = fp->damage_stat_count;

        gBonusStatNumEnemyKOs++;

        if ((gSceneData.spgame_stage == gm1PGame_Stage_Mario) && (fp->ft_kind == Ft_Kind_Luigi) && (g1PGameEnemyStocksRemaining != 0) && (fp->damage_player == gSceneData.player_port))
        {
            if (gBattleState->player_block[(fp->player == 0) ? 3 : fp->player - 1].total_damage_player[gSceneData.player_port] == 0)
            {
                gBonusStatBrosCalamity = TRUE; // Bros. Calamity bonus
            }
        }
        if (g1PGameEnemyStocksRemaining == 0)
        {
            ifAnnounce_GameEnd_DisplayMessage();
        }
    }
}

// 0x8018F1C0
void func_ovl65_8018F1C0(void)
{
    if (gSceneData.spgame_stage != gm1PGame_Stage_Bonus3)
    {
        func_ovl2_8010E2D4();
        func_ovl2_801118E4();
    }
}

// 0x8018F1F8
void func_ovl65_8018F1F8(void)
{
    if (gSceneData.spgame_stage != gm1PGame_Stage_Bonus3)
    {
        func_ovl2_80113398(func_ovl2_80114D98);
    }
    else func_ovl2_80113398(func_ovl2_80114DD4);
}

// 0x8018F240
s32 func_ovl65_8018F240(s32 target_player)
{
    f32 lr_dist;
    f32 closest_dist;
    f32 current_dist;
    s32 current_player;
    Vec3f current_pos;
    Vec3f target_pos;
    s32 lr;

    closest_dist = 65536.0F;
    lr_dist = 0.0F;

    func_ovl65_8018D3D8(&target_pos, g1PGameTeamSetups[target_player].mpoint_kind);

    for (current_player = 0; current_player < (ARRAY_COUNT(gBattleState->player_block) + ARRAY_COUNT(g1PGameTeamSetups)) / 2; current_player++)
    {
        if (current_player == target_player) continue;

        else if (gBattleState->player_block[current_player].player_kind == Pl_Kind_Not) continue;

        else if (gBattleState->player_block[current_player].team_index != gBattleState->player_block[target_player].team_index)
        {
            func_ovl65_8018D3D8(&current_pos, g1PGameTeamSetups[current_player].mpoint_kind);

            current_dist = (current_pos.x < target_pos.x) ? -(current_pos.x - target_pos.x) : (current_pos.x - target_pos.x);

            if (current_dist < closest_dist)
            {
                closest_dist = current_dist;

                lr_dist = (current_pos.x - target_pos.x);
            }
        }
    }
    lr = (lr_dist >= 0.0F) ? LR_Right : LR_Left;

    return lr;
}

// 0x8018F3AC
void func_ovl65_8018F3AC(void)
{
    GObj *fighter_gobj = gBattleState->player_block[gSceneData.player_port].fighter_gobj;
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl2_8010CF44
    (
        fighter_gobj,
        F_DEG_TO_RAD(D_ovl65_80192808[lbRandom_GetIntRange(ARRAY_COUNT(D_ovl65_80192808))]) * fp->lr,
        F_DEG_TO_RAD(D_ovl65_80192820[lbRandom_GetIntRange(ARRAY_COUNT(D_ovl65_80192820))]),
        ftGetStruct(fighter_gobj)->attributes->closeup_cam_zoom,
        0.06F,
        28.0F
    );
    ftCommon_SetModelPartLevelDetailAll(fighter_gobj, ftParts_LOD_HighPoly);
}

// 0x8018F4B0
void func_ovl65_8018F4B0(ftStruct *fp)
{
    Vec3f world_pos;
    Vec3f zoom;

    world_pos.x = world_pos.y = world_pos.z = 0.0F;

    ftParts_GetDObjWorldPosition(fp->joint[fp->damage_joint_index], &world_pos);

    g1PGameBossDefeatZoomPosition = world_pos;

    zoom.x = world_pos.x;
    zoom.y = world_pos.y;
    zoom.z = world_pos.z + 3000.0F;

    func_ovl2_8010D0A4(&world_pos, &zoom);
}

// 0x8018F540
void func_ovl65_8018F540(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        fp->is_playertag_movie = TRUE;

        fighter_gobj = fighter_gobj->group_gobj_next;
    }
}

// 0x8018F574
void func_ovl65_8018F574(GObj *fighter_gobj, s32 arg1)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ft_kind == Ft_Kind_MasterHand)
    {
        func_ovl2_80114968(fp);
    }
}

