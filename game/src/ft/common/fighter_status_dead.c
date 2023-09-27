#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include "ground.h"

// 0x8013BC60
void func_ovl3_8013BC60(u16 sfx_id)
{
    func_800269C0(sfx_id);
    func_ovl2_80113804(sfx_id);
}

// 0x8013BC8C
void func_ovl3_8013BC8C(ftStruct *this_fp)
{
    s32 i;

    ftMain_MakeRumble(this_fp, 0, 30);

    for (i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
    {
        if ((i != this_fp->player) && (gBattleState->player_block[i].player_kind == Ft_Kind_Mario))
        {
            GObj *fighter_gobj = gBattleState->player_block[i].fighter_gobj;

            if (fighter_gobj != NULL)
            {
                ftStruct *other_fp = ftGetStruct(fighter_gobj);

                if ((!(gBattleState->match_rules & GMMATCH_GAMERULE_STOCK)) || (other_fp->stock_count != -1))
                {
                    ftMain_MakeRumble(other_fp, 1, 15);
                }
                else continue;
            }
        }
    }
}

// 0x8013BD64
void ftCommon_Dead_UpdateScore(ftStruct *this_fp)
{
    ifPlayer_Damage_StartBreakAnim(this_fp);
    func_ovl2_80114968(this_fp);

    gBattleState->player_block[this_fp->player].falls++;

    if (gBattleState->is_display_score)
    {
        ifDisplayScoreFighter(this_fp, -1);
    }
    if ((this_fp->damage_player != -1) && (this_fp->damage_player != GMMATCH_PLAYERS_MAX))
    {
        gBattleState->player_block[this_fp->damage_player].score++;

        gBattleState->player_block[this_fp->damage_player].total_ko_player[this_fp->player]++;

        if (gBattleState->is_display_score)
        {
            ifDisplayScoreFighter(ftGetStruct(gBattleState->player_block[this_fp->damage_player].fighter_gobj), 1);
        }
    }
    else gBattleState->player_block[this_fp->player].total_self_destruct++;
    
    if (gBattleState->match_rules & GMMATCH_GAMERULE_STOCK)
    {
        this_fp->stock_count--;

        gBattleState->player_block[this_fp->player].stock_count--;

        ifPlayer_BattleStats_UpdateScoreStocks(this_fp);
    }
    if (gBattleState->match_rules & GMMATCH_GAMERULE_1PGAME)
    {
        this_fp->stock_count--;

        gBattleState->player_block[this_fp->player].stock_count--;

        func_unkmulti_8018EFFC(this_fp->player, this_fp->unk_0x15);
    }
    if (gBattleState->match_rules & GMMATCH_GAMERULE_BONUS)
    {
        ifAnnounce_GameEnd_DisplayMessage();
    }
}

// 0x8013BF94
void ftCommon_Dead_CheckRebirth(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (gBattleState->match_rules & GMMATCH_GAMERULE_STOCK)
    {
        if (fp->stock_count == -1)
        {
            ftCommon_Sleep_SetStatus(fighter_gobj);

            return;
        }
    }
    else if (gBattleState->match_rules & GMMATCH_GAMERULE_1PGAME)
    {
        if (gBattleState->player_block[fp->player].is_rebirth_multi != FALSE)
        {
            func_unkmulti_8018E18C(fighter_gobj);

            return;
        }
        else if (fp->stock_count == -1)
        {
            ftCommon_Sleep_SetStatus(fighter_gobj);

            return;
        }
    }
    ftCommon_RebirthDown_SetStatus(fighter_gobj);
}

// 0x8013C050
void ftCommon_Dead_ResetCommonVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_ProcDamageStopVoice(fighter_gobj);
    func_ovl2_800D7994(fighter_gobj);
    func_ovl3_8014AF2C(fighter_gobj);

    fp->ground_or_air = GA_Air;
    fp->coll_data.ground_line_id = -1;

    if (fp->item_hold != NULL)
    {
        itMain_DestroyItem(fp->item_hold);
    }
}

// 0x8013C0B0
void ftCommon_Dead_ClearSpecialStats(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->star_invincible_timer = 0;
    fp->is_nullstatus = TRUE;
    fp->x18E_flag_b0 = TRUE;

    ftSpecialItem_BGMCheckFighters(fighter_gobj);
}

// 0x8013C0EC
void ftCommon_Dead_UpdateRebirthWait(GObj *fighter_gobj) // Unused
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.dead.rebirth_wait--;

    if (fp->status_vars.common.dead.rebirth_wait == 0)
    {
        ftCommon_Dead_CheckRebirth(fighter_gobj);
    }
}

// 0x8013C120
void ftCommon_Dead_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.dead.rebirth_wait = FTCOMMON_DEAD_REBIRTH_WAIT;

    ftPhysics_StopVelAll(fighter_gobj);

    fp->is_invisible = TRUE;
    fp->is_ignore_startbutton = TRUE;
    fp->is_playertag_hide = TRUE;

    efParticle_Quake_MakeEffect(2);
    func_ovl3_8013BC8C(fp);
    ftCommon_Dead_UpdateScore(fp);

    if (fp->attributes->dead_sfx[0] != 0x2B7)
    {
        func_ovl3_8013BC60(fp->attributes->dead_sfx[0]);
    }
    if (fp->attributes->dead_sfx[1] != 0x2B7)
    {
        func_ovl3_8013BC60(fp->attributes->dead_sfx[1]);
    }
}

// 0x8013C1C4
void ftCommon_DeadDown_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    u32 sfx_id;

    ftCommon_Dead_ResetCommonVars(fighter_gobj);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_DeadDown, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_Dead_ClearSpecialStats(fighter_gobj);
    ftCommon_Dead_InitStatusVars(fighter_gobj);

    pos = DObjGetStruct(fighter_gobj)->translate;

    if (gBattleState->game_type != gmMatch_GameType_Bonus)
    {
        if (pos.x > gGroundInfo->cam_bound_right)
        {
            pos.x = gGroundInfo->cam_bound_right;
        }

        if (pos.x < gGroundInfo->cam_bound_left)
        {
            pos.x = gGroundInfo->cam_bound_left;
        }
    }
    efParticle_DeadBlast_MakeEffect(&pos, fp->player, 0);
    func_ovl2_80115BF0(0x51, 0);

    if (((gBattleState->gr_kind >= Gr_Kind_Bonus1Start) && (gBattleState->gr_kind <= Gr_Kind_Bonus1End)) || ((gBattleState->gr_kind >= Gr_Kind_Bonus2Start) && (gBattleState->gr_kind <= Gr_Kind_Bonus2End)))
    {
        sfx_id = 0x9B;
    }
    else sfx_id = 0x9A;

    func_ovl3_8013BC60(sfx_id);
}

// 0x8013C30C
void ftCommon_DeadRight_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    u32 sfx_id;

    ftCommon_Dead_ResetCommonVars(fighter_gobj);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_DeadLeftRight, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_Dead_ClearSpecialStats(fighter_gobj);
    ftCommon_Dead_InitStatusVars(fighter_gobj);

    pos = DObjGetStruct(fighter_gobj)->translate;

    if (gBattleState->game_type != gmMatch_GameType_Bonus)
    {
        if (pos.y > gGroundInfo->cam_bound_top)
        {
            pos.y = gGroundInfo->cam_bound_top;
        }

        if (pos.y < gGroundInfo->cam_bound_bottom)
        {
            pos.y = gGroundInfo->cam_bound_bottom;
        }
    }
    efParticle_DeadBlast_MakeEffect(&pos, fp->player, 1);
    func_ovl2_80115BF0(0x51, 0);

    if (((gBattleState->gr_kind >= Gr_Kind_Bonus1Start) && (gBattleState->gr_kind <= Gr_Kind_Bonus1End)) || ((gBattleState->gr_kind >= Gr_Kind_Bonus2Start) && (gBattleState->gr_kind <= Gr_Kind_Bonus2End)))
    {
        sfx_id = 0x9B;
    }
    else sfx_id = 0x9A;

    func_ovl3_8013BC60(sfx_id);
}

// 0x8013C454
void ftCommon_DeadLeft_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    u32 sfx_id;

    ftCommon_Dead_ResetCommonVars(fighter_gobj);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_DeadLeftRight, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_Dead_ClearSpecialStats(fighter_gobj);
    ftCommon_Dead_InitStatusVars(fighter_gobj);

    pos = DObjGetStruct(fighter_gobj)->translate;

    if (gBattleState->game_type != gmMatch_GameType_Bonus)
    {
        if (pos.y > gGroundInfo->cam_bound_top)
        {
            pos.y = gGroundInfo->cam_bound_top;
        }
        if (pos.y < gGroundInfo->cam_bound_bottom)
        {
            pos.y = gGroundInfo->cam_bound_bottom;
        }
    }
    efParticle_DeadBlast_MakeEffect(&pos, fp->player, 3);
    func_ovl2_80115BF0(0x51, 0);

    if (((gBattleState->gr_kind >= Gr_Kind_Bonus1Start) && (gBattleState->gr_kind < Gr_Kind_Bonus2Start)) || ((gBattleState->gr_kind >= Gr_Kind_Bonus2Start) && (gBattleState->gr_kind < Gr_Kind_Bonus2End)))
    {
        sfx_id = 0x9B;
    }
    else sfx_id = 0x9A;

    func_ovl3_8013BC60(sfx_id);
}

// 0x8013C59C
void ftCommon_DeadUpStar_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    switch (fp->command_vars.flags.flag1)
    {
    case 1:
        fp->colanim.maincolor.a = 128 - ((fp->status_vars.common.dead.rebirth_wait * 128) / FTCOMMON_DEADUP_REBIRTH_WAIT);
        break;

    default:
        break;
    }
    if (fp->status_vars.common.dead.rebirth_wait != 0)
    {
        fp->status_vars.common.dead.rebirth_wait--;
    }
    if (fp->status_vars.common.dead.rebirth_wait == 0)
    {
        switch (fp->command_vars.flags.flag1)
        {
        case 0:
            fp->phys_info.vel_air.y = ((gGroundInfo->cam_bound_top * 0.6F) - DObjGetStruct(fighter_gobj)->translate.vec.f.y) / 180.0F;
            fp->phys_info.vel_air.z = FTCOMMON_DEADUPFALL_VEL_Z;

            fp->colanim.is_use_maincolor = TRUE;

            fp->colanim.maincolor.r = gGroundInfo->fog_color.r;
            fp->colanim.maincolor.g = gGroundInfo->fog_color.g;
            fp->colanim.maincolor.b = gGroundInfo->fog_color.b;
            fp->colanim.maincolor.a = 0;

            fp->status_vars.common.dead.rebirth_wait = FTCOMMON_DEADUP_REBIRTH_WAIT;

            fp->command_vars.flags.flag1++;
            break;

        case 1:
            ftPhysics_StopVelAll(fighter_gobj);
            efParticle_SparkleWhiteDead_MakeEffect(&fp->joint[ftParts_Joint_TopN]->translate, 5.0F);

            fp->is_invisible = TRUE;
            fp->is_ignore_startbutton = TRUE;

            ftCommon_Dead_UpdateScore(fp);
            func_ovl3_8013BC60(0xCU);

            fp->is_playertag_hide = TRUE;
            fp->colanim.is_use_maincolor = FALSE;

            fp->status_vars.common.dead.rebirth_wait = FTCOMMON_DEAD_REBIRTH_WAIT;

            fp->command_vars.flags.flag1++;
            break;

        case 2:
            ftCommon_Dead_CheckRebirth(fighter_gobj);
            break;

        default:
            break;
        }
    }
}

// 0x8013C740
void ftCommon_DeadUpStar_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Dead_ResetCommonVars(fighter_gobj);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_DeadUpStar, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftPhysics_StopVelAll(fighter_gobj);

    fp->status_vars.common.dead.pos = DObjGetStruct(fighter_gobj)->translate;

    fp->camera_mode = 2;

    fp->status_vars.common.dead.rebirth_wait = 1;

    fp->command_vars.flags.flag1 = 0;

    ftCommon_Dead_ClearSpecialStats(fighter_gobj);
    func_ovl2_800E7F7C(fighter_gobj, 1);

    if (fp->attributes->deadup_sfx != 0x2B7)
    {
        func_800269C0(fp->attributes->deadup_sfx);
    }
    func_ovl2_800E827C(fighter_gobj, 1);
    ftCommon_ResetColAnim(fighter_gobj);
}

// 0x8013C80C
void ftCommon_DeadUpFall_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 sfx_id;

    switch (fp->command_vars.flags.flag1)
    {
    case 1:
        if (DObjGetStruct(fighter_gobj)->translate.vec.f.y < gGroundInfo->blastzone_bottom)
        {
            fp->phys_info.vel_air.y = 0.0F;
        }
        break;

    default:
        break;
    }
    if (fp->status_vars.common.dead.rebirth_wait != 0)
    {
        fp->status_vars.common.dead.rebirth_wait--;
    }
    if (fp->status_vars.common.dead.rebirth_wait == 0)
    {
        switch (fp->command_vars.flags.flag1)
        {
        case 0:
            fp->phys_info.vel_air.y = (gGroundInfo->cam_bound_bottom - DObjGetStruct(fighter_gobj)->translate.vec.f.y) / 180.0F;

            DObjGetStruct(fighter_gobj)->translate.vec.f.z = OMCameraGetStruct(gCameraGObj)->view.tilt.z - 3000.0F;

            if (DObjGetStruct(fighter_gobj)->translate.vec.f.z < 2000.0F)
            {
                DObjGetStruct(fighter_gobj)->translate.vec.f.z = 2000.0F;
            }
            DObjGetStruct(fighter_gobj)->translate.vec.f.x = OMCameraGetStruct(gCameraGObj)->view.tilt.x;
            DObjGetStruct(fighter_gobj)->translate.vec.f.y = OMCameraGetStruct(gCameraGObj)->view.tilt.y + 3000.0F;

            if (gGroundInfo->blastzone_top < DObjGetStruct(fighter_gobj)->translate.vec.f.y)
            {
                DObjGetStruct(fighter_gobj)->translate.vec.f.y = gGroundInfo->blastzone_top;
            }
            fp->status_vars.common.dead.rebirth_wait = FTCOMMON_DEADUP_REBIRTH_WAIT;

            fp->command_vars.flags.flag1++;

            break;

        case 1:
            ftPhysics_StopVelAll(fighter_gobj);
            func_ovl2_80115BF0(0x51, 0);
            efParticle_Quake_MakeEffect(2);
            func_ovl3_8013BC8C(fp);

            fp->is_playertag_hide = TRUE;
            fp->is_invisible = TRUE;
            fp->is_ignore_startbutton = TRUE;

            ftCommon_Dead_UpdateScore(fp);

            if (((gBattleState->gr_kind >= Gr_Kind_Bonus1Start) && (gBattleState->gr_kind <= Gr_Kind_Bonus1End)) || ((gBattleState->gr_kind >= Gr_Kind_Bonus2Start) && (gBattleState->gr_kind <= Gr_Kind_Bonus2End)))
            {
                sfx_id = 0x9B;
            }
            else sfx_id = 0x9A;

            func_ovl3_8013BC60(sfx_id);

            if (fp->attributes->dead_sfx[0] != 0x2B7)
            {
                func_ovl3_8013BC60(fp->attributes->dead_sfx[0]);
            }
            if (fp->attributes->dead_sfx[1] != 0x2B7)
            {
                func_ovl3_8013BC60(fp->attributes->dead_sfx[1]);
            }
            fp->status_vars.common.dead.rebirth_wait = FTCOMMON_DEAD_REBIRTH_WAIT;
            fp->command_vars.flags.flag1++;

            break;

        case 2:
            ftCommon_Dead_CheckRebirth(fighter_gobj);

            break;

        default:
            break;
        }
    }
}

// 0x8013CAAC
void ftCommon_DeadUpFall_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_Dead_ResetCommonVars(fighter_gobj);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_DeadUpFall, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftPhysics_StopVelAll(fighter_gobj);

    fp->status_vars.common.dead.pos = DObjGetStruct(fighter_gobj)->translate;

    fp->camera_mode = 2;

    fp->status_vars.common.dead.rebirth_wait = 1;

    fp->command_vars.flags.flag1 = 0;

    ftCommon_Dead_ClearSpecialStats(fighter_gobj);
    func_ovl2_800E7F7C(fighter_gobj, 1);

    if (fp->attributes->deadup_sfx != 0x2B7)
    {
        func_800269C0(fp->attributes->deadup_sfx);
    }
    func_ovl2_800E827C(fighter_gobj, 0x13);
    ftCommon_SetModelPartLevelDetailAll(fighter_gobj, 1);
}

// 0x8013CB7C
bool32 ftCommon_Dead_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *pos = &fp->joint[ftParts_Joint_TopN]->translate;

    if (fp->ft_kind == Ft_Kind_MasterHand)
    {
        return FALSE;
    }
    if (fp->x192_flag_b1)
    {
        return FALSE;
    }
    if (fp->is_check_blastzone)
    {
        if (pos->y < gGroundInfo->blastzone_bottom)
        {
            pos->y = gGroundInfo->blastzone_bottom + 500.0F;

            fp->phys_info.vel_air.x = 0.0F;
            fp->phys_info.vel_air.y = 0.0F;
            fp->phys_info.vel_air.z = 0.0F;
        }
        else if (gGroundInfo->blastzone_top < pos->y)
        {
            pos->y = gGroundInfo->blastzone_top - 500.0F;

            fp->phys_info.vel_air.x = 0.0F;
            fp->phys_info.vel_air.y = 0.0F;
            fp->phys_info.vel_air.z = 0.0F;
        }
        if (gGroundInfo->blastzone_right < pos->x)
        {
            pos->x = gGroundInfo->blastzone_right - 500.0F;

            fp->phys_info.vel_air.x = 0.0F;
            fp->phys_info.vel_air.y = 0.0F;
            fp->phys_info.vel_air.z = 0.0F;
        }
        else if (pos->x < gGroundInfo->blastzone_left)
        {
            pos->x = gGroundInfo->blastzone_left + 500.0F;

            fp->phys_info.vel_air.x = 0.0F;
            fp->phys_info.vel_air.y = 0.0F;
            fp->phys_info.vel_air.z = 0.0F;
        }
        return FALSE;
    }
    else if (!(fp->is_nullstatus))
    {
        if ((gBattleState->game_type == gmMatch_GameType_1PGame) && (gBattleState->player_block[fp->player].is_rebirth_multi != FALSE))
        {
            if (pos->y < gGroundInfo->unk_bound_bottom)
            {
                ftCommon_DeadDown_SetStatus(fighter_gobj);

                return TRUE;
            }
            if (pos->x > gGroundInfo->unk_bound_right)
            {
                ftCommon_DeadRight_SetStatus(fighter_gobj);

                return TRUE;
            }
            if (pos->x < gGroundInfo->unk_bound_left)
            {
                ftCommon_DeadLeft_SetStatus(fighter_gobj);

                return TRUE;
            }
            if (pos->y > gGroundInfo->unk_bound_top)
            {
                if (lbRandom_GetFloat() < 0.16666667F)
                {
                    ftCommon_DeadUpFall_SetStatus(fighter_gobj);

                    return TRUE;
                }
                else ftCommon_DeadUpStar_SetStatus(fighter_gobj);

                return TRUE;
            }
        }
        else if (pos->y < gGroundInfo->blastzone_bottom)
        {
            ftCommon_DeadDown_SetStatus(fighter_gobj);

            return TRUE;
        }
        else if (pos->x > gGroundInfo->blastzone_right)
        {
            ftCommon_DeadRight_SetStatus(fighter_gobj);

            return TRUE;
        }
        else if (pos->x < gGroundInfo->blastzone_left)
        {
            ftCommon_DeadLeft_SetStatus(fighter_gobj);

            return TRUE;
        }
        else if (pos->y > gGroundInfo->blastzone_top)
        {
            if (lbRandom_GetFloat() < 0.16666667F)
            {
                ftCommon_DeadUpFall_SetStatus(fighter_gobj);
            }
            else ftCommon_DeadUpStar_SetStatus(fighter_gobj);

            return TRUE;
        }
    }
    return FALSE;
}
