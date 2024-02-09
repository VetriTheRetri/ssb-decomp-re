#include <ft/fighter.h>
#include <gr/ground.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

#include "gm1pgame.h"

extern s32 D_ovl2_80130D70;
extern u8 D_ovl2_80130D75;
extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;
extern void *gCommonSpriteFiles[/* */];
extern RldmFileNode D_ovl65_80193068[100];
extern RldmFileNode D_ovl65_80193388[7];
extern u32 D_ovl2_80116BD0[8];

// DATA

u8 D_ovl65_80192800[0x30];              // 0x80192800
gm1PGameCom D_ovl65_80192830[18];       // 0x80192830
gm1PGameStage D_ovl65_801929BC[18];     // 0x801929BC

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

u8 D_ovl65_80192FA0;
u8 D_ovl65_80192FA1;
s32 D_ovl65_80192FA4;

// 0x80192FA8 - "VS *character* Team" members remaining?
u8 g1PGameStageEnemiesRemaining;

// 0x80192FA9 - Current enemy variation?
u8 g1PGameCurrentEnemyVariation;

// 0x80192FB0 - Number of unique enemy patterns in "VS *character* Team" battles (e.g. 6 randomly selected colors repeated 3 times for Yoshi Team)
u8 g1PGameStageEnemyVariations[GM1PGAME_STAGE_MAX_VARIATIONS_COUNT];

// 0x80192FE0
gm1PGameTeam g1PGameStageTeamSetups[GMMATCH_PLAYERS_MAX];

// 0x80193060 - Costume ID for all members of Kirby Team?
s32 g1PGameStageKirbyCostume;

// 0x801933C0
sb32 gIsEnd1PGameStage;

// 0x801933C4 - Only works on Meta Crystal and Duel Zone?
sb32 gIsStart1PGameStage;

// 0x801933C8
s32 D_ovl65_801933C8;

// 0x801933CC
s32 D_ovl65_801933CC;

s32 D_ovl65_801936A0;
s32 D_ovl65_801936A4;

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
    gBattleState->player_block[player].tag_index = 4;
    gBattleState->player_block[player].is_permanent_stock = TRUE;
    gBattleState->player_block[player].stock_count = 0;
    gBattleState->player_block[player].is_rebirth_multi = TRUE;
    gBattleState->player_block[player].player_kind = Pl_Kind_Com;

    g1PGameStageTeamSetups[player].com_behavior = stagesetup->opponent_behavior;

    g1PGameStageEnemiesRemaining--;
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

    D_ovl65_80192FA0 = D_ovl65_80192FA1 = g1PGameStageEnemiesRemaining = stagesetup->opponent_count;

    D_ovl65_80192FA4 = 0;

    for (i = 0; i < (ARRAY_COUNT(gBattleState->player_block) + ARRAY_COUNT(g1PGameStageTeamSetups)) / 2; i++)
    {
        g1PGameStageTeamSetups[i].unk_gm1punk_0x4 = 0;
        g1PGameStageTeamSetups[i].copy_kind = Ft_Kind_Kirby;
        g1PGameStageTeamSetups[i].unk_gm1punk_0xC = 0;
        g1PGameStageTeamSetups[i].unk_gm1punk_0x10 = FALSE;
        g1PGameStageTeamSetups[i].unk_gm1punk_0x14 = FALSE;
        g1PGameStageTeamSetups[i].com_behavior = 0;
        g1PGameStageTeamSetups[i].cam_frame_mul = 1.0F;

        if (i != gSceneData.player_port)
        {
            gBattleState->player_block[i].player_kind = Pl_Kind_Not;
        }
    }
    if (gSceneData.spgame_stage < gm1PGame_Stage_ChallengerStart)
    {
        D_800A4B18.player_block[gSceneData.player_port].is_permanent_stock = FALSE;
        g1PGameStageTeamSetups[gSceneData.player_port].unk_gm1punk_0x0 = 0x21;
    }
    else
    {
        D_800A4B18.player_block[gSceneData.player_port].is_permanent_stock = TRUE;
        g1PGameStageTeamSetups[gSceneData.player_port].unk_gm1punk_0x0 = 0x2C;
    }
    switch (gSceneData.spgame_stage)
    {
    case gm1PGame_Stage_Boss:
    case gm1PGame_Stage_Bonus3:
        g1PGameStageTeamSetups[gSceneData.player_port].unk_gm1punk_0x10 = TRUE;
        break;

    default:
        g1PGameStageTeamSetups[gSceneData.player_port].unk_gm1punk_0x10 = FALSE;
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
            gBattleState->player_block[gSceneData.cpu_port[i]].tag_index = 5;
            gBattleState->player_block[gSceneData.cpu_port[i]].is_permanent_stock = TRUE;
            gBattleState->player_block[gSceneData.cpu_port[i]].stock_count = 0;
            gBattleState->player_block[gSceneData.cpu_port[i]].is_rebirth_multi = FALSE;
            gBattleState->player_block[gSceneData.cpu_port[i]].player_kind = Pl_Kind_Com;

            player = gSceneData.cpu_port[i];

            g1PGameStageTeamSetups[gSceneData.cpu_port[i]].unk_gm1punk_0x0 = i + 0x22;
            g1PGameStageTeamSetups[gSceneData.cpu_port[i]].com_behavior = stagesetup->ally_behavior;
        }
        for (i = 0; i < stagesetup->opponent_count; i++)
        {
            player = gm1PGame_GetNextFreePlayerPort(player);

            func_ovl65_8018D4EC(stagesetup, comsetup, player, i);

            gBattleState->player_block[player].costume_index = func_ovl65_8018D29C(player);

            if (gSceneData.spgame_stage < gm1PGame_Stage_ChallengerStart)
            {
                g1PGameStageTeamSetups[player].unk_gm1punk_0x0 = i + 0x25;
            }
            else
            {
                g1PGameStageTeamSetups[player].unk_gm1punk_0x0 = i + 0x2D;

                level = gBattleState->player_block[player].level - gSceneData.unk43;

                gBattleState->player_block[player].level = (level <= 0) ? 1 : level;
            }
            if (gSceneData.spgame_stage == gm1PGame_Stage_Boss)
            {
                g1PGameStageTeamSetups[player].unk_gm1punk_0x14 = 1;
            }
        }
        break;

    case gm1PGame_Stage_Yoshi:
        variations = GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT;
        flags = 0;

        for (i = 0; i < GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT; i++)
        {
            g1PGameStageEnemyVariations[i] = func_ovl65_8018D394(flags, lbRandom_GetIntRange(variations));

            flags |= (1 << g1PGameStageEnemyVariations[i]);

            variations--;
        }
        for (costume = 0, i = GM1PGAME_STAGE_YOSHI_VARIATIONS_COUNT; i < stagesetup->opponent_count; i++)
        {
            g1PGameStageEnemyVariations[i] = g1PGameStageEnemyVariations[costume];

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

            gBattleState->player_block[player].costume_index = g1PGameStageEnemyVariations[g1PGameCurrentEnemyVariation];

            if ((gSceneData.ft_kind == Ft_Kind_Yoshi) && (gSceneData.costume_index == gBattleState->player_block[player].costume_index))
            {
                gBattleState->player_block[player].shade_index = 1;
            }
            else gBattleState->player_block[player].shade_index = 0;

            g1PGameStageTeamSetups[player].unk_gm1punk_0x0 = i + 0x25;
            g1PGameStageTeamSetups[player].unk_gm1punk_0xC = g1PGameCurrentEnemyVariation;
            g1PGameStageTeamSetups[player].cam_frame_mul = 0.3F;
            g1PGameStageTeamSetups[player].unk_gm1punk_0x14 = TRUE;

            g1PGameCurrentEnemyVariation++;
        }
        break;

    case gm1PGame_Stage_Zako:
        variations = GM1PGAME_STAGE_MAX_VARIATIONS_COUNT;
        flags = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_VARIATIONS_COUNT; i++)
        {
            g1PGameStageEnemyVariations[i] = func_ovl65_8018D394(flags, lbRandom_GetIntRange(variations));

            flags |= (1 << g1PGameStageEnemyVariations[i]);

            g1PGameStageEnemyVariations[i] += 14;

            variations--;
        }
        for (kind = 0, i = GM1PGAME_STAGE_MAX_VARIATIONS_COUNT; i < stagesetup->opponent_count; i++)
        {
            g1PGameStageEnemyVariations[i] = g1PGameStageEnemyVariations[kind];

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

            gBattleState->player_block[player].character_kind = g1PGameStageEnemyVariations[g1PGameCurrentEnemyVariation];

            g1PGameStageTeamSetups[player].unk_gm1punk_0x0 = i + 0x25;
            g1PGameStageTeamSetups[player].unk_gm1punk_0xC = g1PGameCurrentEnemyVariation;
            g1PGameStageTeamSetups[player].cam_frame_mul = 0.3F;
            g1PGameStageTeamSetups[player].unk_gm1punk_0x14 = TRUE;

            g1PGameCurrentEnemyVariation++;
        }
        break;

    case gm1PGame_Stage_Kirby:
        g1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < GM1PGAME_STAGE_KIRBY_OPPONENT_COUNT; i++)
        {
            player = gm1PGame_GetNextFreePlayerPort(player);

            func_ovl65_8018D4EC(stagesetup, comsetup, player, 0);

            g1PGameStageKirbyCostume = gBattleState->player_block[player].costume_index =

            ((gSceneData.ft_kind == Ft_Kind_Kirby) && (gSceneData.costume_index == gBattleState->player_block[player].costume_index)) ? ftCostume_GetIndexFFA(Ft_Kind_Kirby, 1) : 0;

            g1PGameStageTeamSetups[player].unk_gm1punk_0xC = g1PGameCurrentEnemyVariation;
            g1PGameStageTeamSetups[player].copy_kind = D_ovl65_80192800[g1PGameCurrentEnemyVariation];
            g1PGameStageTeamSetups[player].unk_gm1punk_0x0 = i + 0x25;

            g1PGameStageTeamSetups[player].cam_frame_mul = 0.3F;
            g1PGameStageTeamSetups[player].unk_gm1punk_0x14 = TRUE;

            g1PGameCurrentEnemyVariation++;
        }
        break;

    case gm1PGame_Stage_Bonus3:
        variations = GM1PGAME_STAGE_MAX_VARIATIONS_COUNT;
        flags = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            g1PGameStageEnemyVariations[i] = func_ovl65_8018D394(flags, lbRandom_GetIntRange(variations));

            flags |= (1 << g1PGameStageEnemyVariations[i]);

            g1PGameStageEnemyVariations[i] += 14;

            variations--;
        }
        g1PGameCurrentEnemyVariation = 0;

        for (i = 0; i < GM1PGAME_STAGE_MAX_OPPONENT_COUNT; i++)
        {
            player = gm1PGame_GetNextFreePlayerPort(player);

            func_ovl65_8018D4EC(stagesetup, comsetup, player, 0);

            gBattleState->player_block[player].character_kind = g1PGameStageEnemyVariations[g1PGameCurrentEnemyVariation];

            g1PGameStageTeamSetups[player].unk_gm1punk_0x0 = i + 0x25;
            g1PGameStageTeamSetups[player].unk_gm1punk_0x14 = g1PGameStageTeamSetups[player].unk_gm1punk_0x10 = TRUE;

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

    D_ovl65_801936A0 = 0;
    D_ovl65_801933C8 = -1;
    D_ovl65_801933CC = 0;
    D_ovl65_801936A4 = 0;

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

    if (g1PGameStageEnemiesRemaining == 0)
    {
        ftCommon_Sleep_SetStatus(player_gobj);
    }
    else
    {
        g1PGameStageEnemiesRemaining--;

        func_ovl2_800D78E8(player_gobj);

        gBattleState->player_block[player].stock_count = 0;

        switch (gSceneData.spgame_stage)
        {
        case gm1PGame_Stage_Yoshi:
            gBattleState->player_block[player].costume_index = g1PGameStageEnemyVariations[g1PGameCurrentEnemyVariation];

            gBattleState->player_block[player].shade_index = ((gSceneData.ft_kind == Ft_Kind_Yoshi) && (gSceneData.costume_index == gBattleState->player_block[player].costume_index)) ? 1 : 0;

            func_ovl2_8010FF78(player, gBattleState->player_block[player].costume_index, attributes);
            break;

        case gm1PGame_Stage_Zako:
            gBattleState->player_block[player].character_kind = g1PGameStageEnemyVariations[g1PGameCurrentEnemyVariation];
            break;

        case gm1PGame_Stage_Kirby:
            g1PGameStageTeamSetups[player].copy_kind = (g1PGameCurrentEnemyVariation == 7) ? D_ovl2_80130D75 : D_ovl65_80192800[g1PGameCurrentEnemyVariation];
            break;
        }
        g1PGameStageTeamSetups[player].unk_gm1punk_0xC = g1PGameCurrentEnemyVariation++;

        player_spawn = ftGlobal_SpawnInfo_MainData;

        player_spawn.ft_kind = gBattleState->player_block[player].character_kind;

        func_ovl65_8018D45C(&player_spawn.pos, mpMPoint_Kind_1PEnemyTeamSpawn);

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

        player_spawn.copy_kind = g1PGameStageTeamSetups[player].copy_kind;
        player_spawn.unk_rebirth_0x1E = g1PGameStageTeamSetups[player].unk_gm1punk_0xC;

        player_spawn.is_skip_entry = TRUE;
        player_spawn.is_skip_magnify = g1PGameStageTeamSetups[player].unk_gm1punk_0x14;
        player_spawn.is_skip_shadow_setup = TRUE;

        com_gobj = ftManager_MakeFighter(&player_spawn);

        fp = ftGetStruct(com_gobj);

        ftCommon_ClearPlayerMatchStats(player, com_gobj);
        ftCommon_SetAllowPlayerControl(com_gobj);

        fp->fighter_com.behavior_write = g1PGameStageTeamSetups[player].com_behavior;

        ifPlayer_Damage_StopBreakAnim(fp);

        fp->fighter_cam_zoom_frame *= g1PGameStageTeamSetups[player].cam_frame_mul;
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
