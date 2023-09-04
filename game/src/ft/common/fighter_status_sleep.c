#include <ft/fighter.h>
#include <gm/battle.h>

// 0x8013D580
bool32 ftCommon_Sleep_CheckIgnorePauseMenu(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 steal_from_player[GMMATCH_PLAYERS_MAX];
    s32 active_teammate_count;
    s32 player;
    s32 stock_count;

    if ((gBattleState->match_rules & GMMATCH_GAMERULE_STOCK) && (gBattleState->is_team_battle == TRUE) && (fp->status_info.status_id == ftStatus_Common_Sleep))
    {
        if (fp->status_vars.common.sleep.stock_steal_wait == 0)
        {
            for (active_teammate_count = 0, stock_count = 0, player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
            {
                if ((player != fp->player) && (gBattleState->player_block[player].player_kind != Pl_Kind_None1) && (fp->team == gBattleState->player_block[player].player))
                {
                    if (gBattleState->player_block[player].stock_count > 0)
                    {
                        if (stock_count < gBattleState->player_block[player].stock_count)
                        {
                            active_teammate_count = 0;
                            stock_count = gBattleState->player_block[player].stock_count;
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
void ftCommon_Sleep_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *steal_gobj;
    s32 active_teammate_count;
    s32 steal_from_player[GMMATCH_PLAYERS_MAX];
    s32 player;
    s32 random_steal_target;
    s32 stock_count;

    if ((gBattleState->match_rules & GMMATCH_GAMERULE_STOCK) && (gBattleState->is_team_battle == TRUE))
    {
        if (this_fp->status_vars.common.sleep.stock_steal_wait != 0)
        {
            this_fp->status_vars.common.sleep.stock_steal_wait--;

            if (this_fp->status_vars.common.sleep.stock_steal_wait == 0)
            {
                this_fp->stock_count = 0;
                gBattleState->player_block[this_fp->player].stock_count = 0;

                ftCommon_RebirthDown_SetStatus(fighter_gobj);
            }
        }
        else
        {
            if (this_fp->input.pl.button_tap & HAL_BUTTON_START)
            {
                for (active_teammate_count = 0, stock_count = 0, player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
                {
                    if ((player != this_fp->player) && (gBattleState->player_block[player].player_kind != Pl_Kind_None1) && (this_fp->team == gBattleState->player_block[player].player)) 
                    {
                        if (gBattleState->player_block[player].stock_count > 0)
                        {
                            if (stock_count < gBattleState->player_block[player].stock_count)
                            {
                                active_teammate_count = 0;
                                stock_count = gBattleState->player_block[player].stock_count;
                            }
                            steal_from_player[active_teammate_count] = player;
                            active_teammate_count++;
                        }
                    }
                }
                if (active_teammate_count != 0)
                {
                    random_steal_target = lbRandom_GetIntRange(active_teammate_count);

                    gBattleState->player_block[steal_from_player[random_steal_target]].stock_count--;

                    steal_gobj = gBattleState->player_block[steal_from_player[random_steal_target]].fighter_gobj;

                    ftGetStruct(steal_gobj)->stock_count--;

                    this_fp->stock_count = -2;

                    gBattleState->player_block[this_fp->player].stock_count = -2;

                    this_fp->status_vars.common.sleep.stock_steal_wait = FTCOMMON_SLEEP_STOCK_STEAL_WAIT;

                    func_ovl2_801102B0(this_fp->player, steal_from_player[random_steal_target]);

                    func_800269C0(0x114U);
                }
            }
        }
    }
}

// 0x8013D8B0
void ftCommon_Sleep_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_Sleep, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->is_invisible = TRUE;
    fp->x18E_flag_b0 = TRUE;
    fp->is_nullstatus = TRUE;
    fp->is_ignore_startbutton = TRUE;

    fp->status_vars.common.sleep.stock_steal_wait = 0;

    fp->camera_mode = 1;

    fp->is_playertag_hide = TRUE;
}