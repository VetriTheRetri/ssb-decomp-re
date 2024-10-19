#include <gr/ground.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/dma.h>

extern void sc1PStageCardStartScene();

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80130D60
u8 sSC1PManagerScenePrev;

// 0x80130D64 - Total time (in frames) taken to complete 1P Game
u32 gSC1PManagerTotalTimeTics;

// 0x80130D68 - Total times fallen in 1P Game
s32 gSC1PManagerTotalFalls;

// 0x80130D6C - Total damage taken in 1P Game
s32 gSC1PManagerTotalDamage;

// 0x80130D70 - Starts at 0, increments by 1 each time a continue is used; lowers CP difficulty (on current stage?)
s32 gSC1PManagerLevelDrop;

// 0x80130D74 - Starts at 2, each time this reaches 0 it increments gSC1PManagerLevelDrop
u8 sSC1PManagerLevelGuard;

// 0x80130D75 - Copy ability of final Kirby on Kirby Team in 1P Game
u8 gSC1PManagerKirbyTeamFinalCopy;

// 0x80130D76
u8 gSC1PManagerKirbyTeamModelPartID;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80116BF0
syOverlay dSC1PManagerSubsysOverlay = SCMANAGER_OVERLAY_DEFINE(1);

// 0x80116C14
syOverlay dSC1PManager1PStageCardOverlay = SCMANAGER_OVERLAY_DEFINE(24);

// 0x80116C38
syOverlay dSC1PManager1PStageClearOverlay = SCMANAGER_OVERLAY_DEFINE(56);

// 0x80116C5C
syOverlay dSC1PManager1PChallengerOverlay = SCMANAGER_OVERLAY_DEFINE(23);

// 0x80116C80
syOverlay dSC1PManagerEndingOverlay = SCMANAGER_OVERLAY_DEFINE(54);

// 0x80116CA4
syOverlay dSC1PManagerMessageOverlay = SCMANAGER_OVERLAY_DEFINE(22);

// 0x80116CC8
syOverlay dSC1PManagerCongraOverlay = SCMANAGER_OVERLAY_DEFINE(57);

// 0x80116CEC
syOverlay dSC1PManagerStaffrollOverlay = SCMANAGER_OVERLAY_DEFINE(59);

// 0x80116D10
syOverlay dSC1PManager1PGameOverlay = SCMANAGER_OVERLAY_DEFINE(65);

// 0x80116D34
syOverlay dSC1PManagerObjectsOverlay = SCMANAGER_OVERLAY_DEFINE(3);

// 0x80116D58
syOverlay dSC1PManager1PBonusGameOverlay = SCMANAGER_OVERLAY_DEFINE(6);

// 0x80116D7C
syOverlay dSC1PManager1PContinueOverlay = SCMANAGER_OVERLAY_DEFINE(55);

// 0x80116DA0
u8 dSC1PManagerKirbyTeamModelPartIDs[/* */] =
{
    12,  7,  4,  8,
    11, 10,  5,  9,
     0,  6,  3, 13
};

// 0x80116DAC
s32 dSC1PManagerChallangerFighterKinds[/* */] = { nFTKindLuigi, nFTKindNess, nFTKindPurin, nFTKindCaptain };

// 0x80116DBC
u32 dSC1PManagerUnlockNewcomerKinds[/* */] = { nLBBackupUnlockLuigi, nLBBackupUnlockNess, nLBBackupUnlockPurin, nLBBackupUnlockCaptain };

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800D6490
s32 sc1PManagerGetFighterKindsNum(u16 mask)
{
    s32 i, j;

    for (i = 0, j = 0; i < (sizeof(u16) * 8); i++, mask = mask >> 1)
    {
        if (mask & 1)
        {
            j++;
        }
    }
    return j;
}

// 0x800D6508
s32 sc1PManagerGetShuffledFighterKind(u16 this_mask, u16 prev_mask, s32 random)
{
    s32 ft_kind = -1;

    random++;

    do
    {
        ft_kind++;

        if ((this_mask & (1 << ft_kind)) && !(prev_mask & (1 << ft_kind)))
        {
            random--;
        }
    }
    while (random != 0);

    return ft_kind;
}

// 0x800D6554
s32 sc1PManagerGetShuffledKirbyCopy(u16 flags, s32 random)
{
    s32 ret = -1;

    random++;

    do
    {
        ret++;

        if (flags & (1 << ret))
        {
            random--;
        }
    }
    while (random != 0);

    return ret;
}

// 0x800D6590
void sc1PManagerTrySetChallengers(void)
{
    if
    (
        !(gSaveData.unlock_mask & LBBACKUP_UNLOCK_MASK_NESS) && 
        (gSaveData.spgame_difficulty >= nSC1PGameDifficultyNormal) && 
        (gSceneData.continues_used == 0) &&
        (gSaveData.spgame_stock_count < 3)
    )
    {
        gSceneData.spgame_stage = nSC1PGameStageNess;
    }
    else if (!(gSaveData.unlock_mask & LBBACKUP_UNLOCK_MASK_CAPTAIN) && (gSC1PManagerTotalTimeTics < I_MIN_TO_TICS(12)))
    {
        // Captain Falcon's unlock criteria is 12 minutes instead of the reported 20???
        gSceneData.spgame_stage = nSC1PGameStageCaptain;
    }
    else if (!(gSaveData.unlock_mask & LBBACKUP_UNLOCK_MASK_PURIN))
    {
        gSceneData.spgame_stage = nSC1PGameStagePurin;
    }
}

// 0x800D6630
sb32 sc1PManagerCheckUnlockSoundTest(void)
{
    s32 ft_kind;
    u16 bonus_record_count;

    if (!(gSaveData.unlock_mask & LBBACKUP_UNLOCK_MASK_SOUNDTEST))
    {
        for (ft_kind = 0, bonus_record_count = 0; ft_kind < ARRAY_COUNT(gSaveData.spgame_records); ft_kind++)
        {
            if (gSaveData.spgame_records[ft_kind].bonus1_task_count == SCBATTLE_BONUSGAME_TASK_MAX) // Check if fighter has broken all targets
            {
                bonus_record_count |= (1 << ft_kind);
            }
        }
        if ((bonus_record_count & LBBACKUP_CHARACTER_MASK_ALL) == LBBACKUP_CHARACTER_MASK_ALL)
        {
            for (ft_kind = 0, bonus_record_count = 0; ft_kind < ARRAY_COUNT(gSaveData.spgame_records); ft_kind++)
            {
                if (gSaveData.spgame_records[ft_kind].bonus2_task_count == SCBATTLE_BONUSGAME_TASK_MAX) // Check if fighter has boarded all platforms
                {
                    bonus_record_count |= (1 << ft_kind);
                }
            }
            if ((bonus_record_count & LBBACKUP_CHARACTER_MASK_ALL) == LBBACKUP_CHARACTER_MASK_ALL)
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// 0x800D6738
void sc1PManagerTrySaveBackup(sb32 is_complete_spgame)
{
    sb32 is_write_data = FALSE;

    if (gSaveData.spgame_records[gSceneData.ft_kind].spgame_hiscore < gSceneData.spgame_score)
    {
        gSaveData.spgame_records[gSceneData.ft_kind].spgame_hiscore   = gSceneData.spgame_score;
        gSaveData.spgame_records[gSceneData.ft_kind].spgame_continues = gSceneData.continues_used;
        gSaveData.spgame_records[gSceneData.ft_kind].spgame_bonuses   = gSceneData.bonus_count;

        if (is_complete_spgame != FALSE)
        {
            gSaveData.spgame_records[gSceneData.ft_kind].spgame_best_difficulty = gSaveData.spgame_difficulty + 1;
        }
        else gSaveData.spgame_records[gSceneData.ft_kind].spgame_best_difficulty = 0;

        is_write_data = TRUE;
    }
    if ((gSaveData.spgame_records[gSceneData.ft_kind].spgame_complete == FALSE) && (is_complete_spgame != 0))
    {
        gSaveData.spgame_records[gSceneData.ft_kind].spgame_complete = TRUE;

        is_write_data = TRUE;
    }
    if (is_write_data != FALSE)
    {
        lbBackupWrite();
    }
}

// 0x800D67DC
void sc1PManagerUpdateScene(void)
{
    s32 i, j;
    u16 this_mask;
    s32 bonus_stat_count;
    sb32 is_player_lose;
    u16 spgame_characters_complete;
    u32 bonus_stat_mask;
    s32 random;
    s32 player;
    s32 spgame_stage;

    sSC1PManagerScenePrev = gSceneData.scene_previous;

    gSCManager1PGameBattleState.is_team_battle = TRUE;
    gSCManager1PGameBattleState.game_rules = (SCBATTLE_GAMERULE_1PGAME | SCBATTLE_GAMERULE_TIME);
    gSCManager1PGameBattleState.damage_ratio = 100;
    gSCManager1PGameBattleState.is_display_score = FALSE;
    gSCManager1PGameBattleState.is_not_teamshadows = TRUE;

    if (gSaveData.error_flags & LBBACKUP_ERROR_1PGAMEMARIO)
    {
        gSceneData.ft_kind = nFTKindMario;
        gSceneData.costume = 0;
    }
    gSCManager1PGameBattleState.players[gSceneData.spgame_player].handicap = FTCOMMON_HANDICAP_DEFAULT;
    gSCManager1PGameBattleState.players[gSceneData.spgame_player].pl_kind = nFTPlayerKindMan;
    gSCManager1PGameBattleState.players[gSceneData.spgame_player].team = 0;
    gSCManager1PGameBattleState.players[gSceneData.spgame_player].shade = 0;
    gSCManager1PGameBattleState.players[gSceneData.spgame_player].player_color = gSceneData.spgame_player;
    gSCManager1PGameBattleState.players[gSceneData.spgame_player].tag_kind = gSceneData.spgame_player;
    gSCManager1PGameBattleState.players[gSceneData.spgame_player].ft_kind = gSceneData.ft_kind;
    gSCManager1PGameBattleState.players[gSceneData.spgame_player].costume = gSceneData.costume;
    gSCManager1PGameBattleState.players[gSceneData.spgame_player].stock_count = gSaveData.spgame_stock_count;
    gSCManager1PGameBattleState.players[gSceneData.spgame_player].is_spgame_team = FALSE;

    gSceneData.spgame_score = 0;
    gSceneData.continues_used = 0;
    gSceneData.bonus_count = 0;

    gSC1PManagerTotalTimeTics = 0;

    gSC1PManagerTotalFalls = 0;
    gSC1PManagerTotalDamage = 0;
    gSC1PManagerLevelDrop = 0;
    sSC1PManagerLevelGuard = 2;

    player = gSceneData.spgame_player;

    for (i = 0; i < ARRAY_COUNT(gSceneData.ally_players); i++)
    {
        if (player == (GMCOMMON_PLAYERS_MAX - 1))
        {
            player = 0;
        }
        else player++;

        gSceneData.ally_players[i] = player;
    }
    if (gSceneData.spgame_stage >= nSC1PGameStageChallengerStart)
    {
        goto skip_main_stages;
    }
    else
    {
        while (gSceneData.spgame_stage <= nSC1PGameStageCommonEnd)
        {
            this_mask = (gSaveData.fighter_mask | LBBACKUP_CHARACTER_MASK_STARTER) & ~(1 << gSceneData.ft_kind);

            is_player_lose = FALSE;

            switch (gSceneData.spgame_stage)
            {
            case nSC1PGameStageMario:
                this_mask &= ~1;

                gSCManager1PGameBattleState.players[gSceneData.ally_players[0]].ft_kind = sc1PManagerGetShuffledFighterKind(this_mask, 0, mtTrigGetRandomIntRange(sc1PManagerGetFighterKindsNum(this_mask)));

                if (gSCManager1PGameBattleState.players[gSceneData.ally_players[0]].ft_kind == nFTKindLuigi)
                {
                    gSCManager1PGameBattleState.players[gSceneData.ally_players[0]].costume = ftParamGetCostumeCommonID(nFTKindLuigi, 1);
                }
                else gSCManager1PGameBattleState.players[gSceneData.ally_players[0]].costume = 0;

                gSCManager1PGameBattleState.players[gSceneData.ally_players[0]].shade = 0;
                break;

            case nSC1PGameStageDonkey:
                random = sc1PManagerGetFighterKindsNum(this_mask);

                gSCManager1PGameBattleState.players[gSceneData.ally_players[0]].ft_kind = sc1PManagerGetShuffledFighterKind(this_mask, 0, mtTrigGetRandomIntRange(random));
                gSCManager1PGameBattleState.players[gSceneData.ally_players[0]].costume = 0;
                gSCManager1PGameBattleState.players[gSceneData.ally_players[0]].shade = 0;

                gSCManager1PGameBattleState.players[gSceneData.ally_players[1]].ft_kind = sc1PManagerGetShuffledFighterKind(this_mask, (1 << gSCManager1PGameBattleState.players[gSceneData.ally_players[0]].ft_kind), mtTrigGetRandomIntRange(random - 1));
                gSCManager1PGameBattleState.players[gSceneData.ally_players[1]].costume = 0;
                gSCManager1PGameBattleState.players[gSceneData.ally_players[1]].shade = 0;
                break;

            case nSC1PGameStageKirby:
                this_mask = (gSaveData.fighter_mask | LBBACKUP_FIGHTER_MASK_DEFINE(nFTKindKirby));

                gSC1PManagerKirbyTeamFinalCopy = sc1PManagerGetShuffledKirbyCopy(this_mask, mtTrigGetRandomIntRange(sc1PManagerGetFighterKindsNum(this_mask)));

                gSC1PManagerKirbyTeamModelPartID = dSC1PManagerKirbyTeamModelPartIDs[gSC1PManagerKirbyTeamFinalCopy];
                break;
            }
            syDmaLoadOverlay(&dSC1PManagerSubsysOverlay);
            syDmaLoadOverlay(&dSC1PManager1PStageCardOverlay);

            gSceneData.scene_previous = nSCKind1PGame;
            gSceneData.scene_current = nSCKind1PStageCard;

            sc1PStageCardStartScene();

            switch (gSceneData.spgame_stage)
            {
            case nSC1PGameStageBonus1:
            case nSC1PGameStageBonus2:
                syDmaLoadOverlay(&dSC1PManagerObjectsOverlay);
                syDmaLoadOverlay(&dSC1PManager1PBonusGameOverlay);

                gSceneData.scene_previous = nSCKind1PGame;
                gSceneData.scene_current = nSCKind1PBonusGame;

                sc1PBonusGameStartScene();
                break;

            default:
                syDmaLoadOverlay(&dSC1PManagerObjectsOverlay);
                syDmaLoadOverlay(&dSC1PManager1PGameOverlay);

                sc1PGameStartScene();

                if (gSceneData.spgame_stage != nSC1PGameStageBonus3)
                {
                    if((gSCManager1PGameBattleState.players[gSceneData.spgame_player].stock_count == -1) || (gSCManager1PGameBattleState.battle_time_remain == 0))
                    {
                        is_player_lose = TRUE;
                    }
                }
                break;
            }
            if (gSceneData.is_reset != FALSE)
            {
                gSceneData.scene_previous = nSCKind1PGame;
                gSceneData.scene_current = nSCKind1PMode;

                return;
            }
            if (is_player_lose != FALSE)
            {
                syDmaLoadOverlay(&dSC1PManagerSubsysOverlay);
                syDmaLoadOverlay(&dSC1PManager1PContinueOverlay);

                sc1PContinueStartScene();

                if (gSceneData.is_select_continue != FALSE)
                {
                    gSceneData.continues_used++;

                    gSCManager1PGameBattleState.players[gSceneData.spgame_player].stock_count = gSaveData.spgame_stock_count;

                    gSceneData.spgame_stage--;

                    if (--sSC1PManagerLevelGuard == 0)
                    {
                        sSC1PManagerLevelGuard = 2;

                        gSC1PManagerLevelDrop++;

                        if (gSC1PManagerLevelDrop > 9)
                        {
                            gSC1PManagerLevelDrop = 9;
                        }
                    }
                }
                else
                {
                    sc1PManagerTrySaveBackup(FALSE);

                    gSceneData.scene_previous = nSCKind1PGame;
                    gSceneData.scene_current = nSCKindN64;

                    return;
                }
            }
            else
            {
                gSC1PManagerLevelDrop = 0;
                sSC1PManagerLevelGuard = 2;

                bonus_stat_count = 0;

                for (i = 0; i < ARRAY_COUNT(gSceneData.bonus_get_mask); i++)
                {
                    bonus_stat_mask = gSceneData.bonus_get_mask[i];

                    for (j = 0; j < (sizeof(u32) * 8); j++, bonus_stat_mask >>= 1)
                    {
                        if (bonus_stat_mask & 1)
                        {
                            bonus_stat_count++;
                        }
                    }
                }
                gSceneData.bonus_count += bonus_stat_count;

                syDmaLoadOverlay(&dSC1PManagerSubsysOverlay);
                syDmaLoadOverlay(&dSC1PManager1PStageClearOverlay);

                gSceneData.scene_previous = nSCKind1PGame;
                gSceneData.scene_current = nSCKind1PStageClear;

                sc1PStageClearStartScene();
            }
            gSceneData.spgame_stage++;
        }
        sc1PManagerTrySaveBackup(TRUE);

        syDmaLoadOverlay(&dSC1PManagerSubsysOverlay);
        syDmaLoadOverlay(&dSC1PManagerEndingOverlay);

        gSceneData.scene_previous = nSCKind1PGame;
        gSceneData.scene_current = nSCKindEnding;

        mvEndingStartScene();

        syDmaLoadOverlay(&dSC1PManagerStaffrollOverlay);

        gSceneData.scene_previous = nSCKind1PGame;
        gSceneData.scene_current = nSCKindStaffroll;

        gmStaffrollStartScene();

        syDmaLoadOverlay(&dSC1PManagerCongraOverlay);

        gSceneData.scene_previous = nSCKind1PGame;
        gSceneData.scene_current = nSCKindCongra;

        mnCongraStartScene();

        gSceneData.spgame_stage--;

        sc1PManagerTrySetChallengers();
    }
skip_main_stages:
    if (gSceneData.spgame_stage >= nSC1PGameStageChallengerStart)
    {
        gSceneData.challenger_ft_kind = dSC1PManagerChallangerFighterKinds[gSceneData.spgame_stage - nSC1PGameStageChallengerStart];

        syDmaLoadOverlay(&dSC1PManagerSubsysOverlay);
        syDmaLoadOverlay(&dSC1PManager1PChallengerOverlay);

        gSceneData.scene_previous = nSCKind1PGame;
        gSceneData.scene_current = nSCKind1PChallenger;

        sc1PChallengerStartScene();

        gSCManager1PGameBattleState.players[gSceneData.spgame_player].stock_count = 0;

        syDmaLoadOverlay(&dSC1PManagerObjectsOverlay);
        syDmaLoadOverlay(&dSC1PManager1PGameOverlay);

        sc1PGameStartScene();

        if (gSceneData.is_reset != FALSE)
        {
            gSceneData.scene_previous = nSCKind1PGame;
            gSceneData.scene_current = nSCKind1PMode;

            return;
        }
        if ((gSCManager1PGameBattleState.players[gSceneData.spgame_player].stock_count != -1) && (gSCManager1PGameBattleState.battle_time_remain != 0))
        {
            gSceneData.challenger_level_drop = gDefaultSceneData.challenger_level_drop;
            gSceneData.unlock_messages[0] = dSC1PManagerUnlockNewcomerKinds[gSceneData.spgame_stage - nSC1PGameStageChallengerStart];

            syDmaLoadOverlay(&dSC1PManagerSubsysOverlay);
            syDmaLoadOverlay(&dSC1PManagerMessageOverlay);

            gSceneData.scene_previous = nSCKind1PGame;
            gSceneData.scene_current = nSCKindMessage;

            mnMessageStartScene();
        }
        else if (gSceneData.challenger_level_drop < 9)
        {
            gSceneData.challenger_level_drop += 2;
        }
        if (gSceneData.spgame_stage == nSC1PGameStageLuigi)
        {
            gSceneData.scene_previous = nSCKind1PBonusGame;
            gSceneData.scene_current = nSCKind1PBonus1Fighters;
            return;
        }
    }
    if (!(gSaveData.unlock_mask & LBBACKUP_UNLOCK_MASK_INISHIE))
    {
        if ((gSaveData.unlock_task_inishie & LBBACKUP_GROUND_MASK_ALL) == LBBACKUP_GROUND_MASK_ALL)
        {
            for (i = 0, spgame_characters_complete = 0; i < ARRAY_COUNT(gSaveData.spgame_records); i++)
            {
                if (gSaveData.spgame_records[i].spgame_complete != FALSE)
                {
                    spgame_characters_complete |= (1 << i);
                }
            }
            if ((spgame_characters_complete & LBBACKUP_CHARACTER_MASK_STARTER) == LBBACKUP_CHARACTER_MASK_STARTER)
            {
                gSceneData.unlock_messages[0] = nLBBackupUnlockInishie;

                syDmaLoadOverlay(&dSC1PManagerSubsysOverlay);
                syDmaLoadOverlay(&dSC1PManagerMessageOverlay);

                gSceneData.scene_previous = nSCKind1PGame;
                gSceneData.scene_current = nSCKindMessage;

                mnMessageStartScene();
            }
        }
    }
    gSceneData.scene_previous = nSCKind1PGame;
    gSceneData.scene_current = nSCKindN64;
}
