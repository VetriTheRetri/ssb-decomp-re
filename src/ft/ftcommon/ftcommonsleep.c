#include <ft/fighter.h>
#include <if/interface.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8013D580
sb32 ftCommonSleepCheckIgnorePauseMenu(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 steal_from_player[GMBATTLE_PLAYERS_MAX];
    s32 active_teammate_count;
    s32 player;
    s32 stock_count;

    if ((gBattleState->game_rules & GMBATTLE_GAMERULE_STOCK) && (gBattleState->is_team_battle == TRUE) && (fp->status_info.status_id == nFTCommonStatusSleep))
    {
        if (fp->status_vars.common.sleep.stock_steal_wait == 0)
        {
            for (active_teammate_count = 0, stock_count = 0, player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
            {
                if ((player != fp->player) && (gBattleState->players[player].pl_kind != nFTPlayerKindNot) && (fp->team == gBattleState->players[player].player))
                {
                    if (gBattleState->players[player].stock_count > 0)
                    {
                        if (stock_count < gBattleState->players[player].stock_count)
                        {
                            active_teammate_count = 0;
                            stock_count = gBattleState->players[player].stock_count;
                        }
                        steal_from_player[active_teammate_count] = player;

                        active_teammate_count++;
                    }
                }
            }
            if (active_teammate_count != 0)
            {
                return TRUE; // Do not bring up pause menu
            }
        }
    }
    return FALSE; // Bring up pause menu
}

// 0x8013D6D0
void ftCommonSleepProcUpdate(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *steal_gobj;
    s32 active_teammate_count;
    s32 steal_from_player[GMBATTLE_PLAYERS_MAX];
    s32 player;
    s32 random_steal_target;
    s32 stock_count;

    if ((gBattleState->game_rules & GMBATTLE_GAMERULE_STOCK) && (gBattleState->is_team_battle == TRUE))
    {
        if (this_fp->status_vars.common.sleep.stock_steal_wait != 0)
        {
            this_fp->status_vars.common.sleep.stock_steal_wait--;

            if (this_fp->status_vars.common.sleep.stock_steal_wait == 0)
            {
                this_fp->stock_count = 0;
                gBattleState->players[this_fp->player].stock_count = 0;

                ftCommonRebirthDownSetStatus(fighter_gobj);
            }
        }
        else
        {
            if (this_fp->input.pl.button_tap & START_BUTTON)
            {
                for (active_teammate_count = 0, stock_count = 0, player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
                {
                    if ((player != this_fp->player) && (gBattleState->players[player].pl_kind != nFTPlayerKindNot) && (this_fp->team == gBattleState->players[player].player)) 
                    {
                        if (gBattleState->players[player].stock_count > 0)
                        {
                            if (stock_count < gBattleState->players[player].stock_count)
                            {
                                active_teammate_count = 0;
                                stock_count = gBattleState->players[player].stock_count;
                            }
                            steal_from_player[active_teammate_count] = player;
                            active_teammate_count++;
                        }
                    }
                }
                if (active_teammate_count != 0)
                {
                    random_steal_target = mtTrigGetRandomIntRange(active_teammate_count);

                    gBattleState->players[steal_from_player[random_steal_target]].stock_count--;

                    steal_gobj = gBattleState->players[steal_from_player[random_steal_target]].fighter_gobj;

                    ftGetStruct(steal_gobj)->stock_count--;

                    this_fp->stock_count = -2;

                    gBattleState->players[this_fp->player].stock_count = -2;

                    this_fp->status_vars.common.sleep.stock_steal_wait = FTCOMMON_SLEEP_STOCK_STEAL_WAIT;

                    ifCommonPlayerStockStealMakeInterface(this_fp->player, steal_from_player[random_steal_target]);

                    func_800269C0_275C0(nGMSoundFGMStockSteal);
                }
            }
        }
    }
}

// 0x8013D8B0
void ftCommonSleepSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusSleep, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

    fp->is_invisible = TRUE;
    fp->x18E_flag_b0 = TRUE;
    fp->is_nullstatus = TRUE;
    fp->is_ignore_training_menu = TRUE;

    fp->status_vars.common.sleep.stock_steal_wait = 0;

    fp->camera_mode = 1;

    fp->is_playertag_hide = TRUE;
}
