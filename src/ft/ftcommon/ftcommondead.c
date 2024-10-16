#include <ft/fighter.h>
#include <if/interface.h>
#include <sc/scene.h>

extern alSoundEffect* func_800269C0_275C0(u16);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8013BC60
void ftCommonDeadAddDeadSFXSoundQueue(u16 sfx_id)
{
    func_800269C0_275C0(sfx_id);
    ifCommonBattleEndAddSoundQueueID(sfx_id);
}

// 0x8013BC8C
void ftCommonDeadUpdateRumble(ftStruct *this_fp)
{
    s32 i;

    ftParamMakeRumble(this_fp, 0, 30);

    for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
    {
        if ((i != this_fp->player) && (gBattleState->players[i].pl_kind == nFTPlayerKindMan))
        {
            GObj *fighter_gobj = gBattleState->players[i].fighter_gobj;

            if (fighter_gobj != NULL)
            {
                ftStruct *other_fp = ftGetStruct(fighter_gobj);

                if ((!(gBattleState->game_rules & SCBATTLE_GAMERULE_STOCK)) || (other_fp->stock_count != -1))
                {
                    ftParamMakeRumble(other_fp, 1, 15);
                }
                else continue;
            }
        }
    }
}

// 0x8013BD64
void ftCommonDeadUpdateScore(ftStruct *this_fp)
{
    ifCommonPlayerDamageStartBreakAnim(this_fp);
    ifCommonPlayerInterfaceAddToViewport(this_fp);

    gBattleState->players[this_fp->player].falls++;

    if (gBattleState->is_display_score)
    {
        ifCommonPlayerScoreMakeEffect(this_fp, -1);
    }
    if ((this_fp->damage_player != -1) && (this_fp->damage_player != GMCOMMON_PLAYERS_MAX))
    {
        gBattleState->players[this_fp->damage_player].score++;

        gBattleState->players[this_fp->damage_player].total_ko_player[this_fp->player]++;

        if (gBattleState->is_display_score)
        {
            ifCommonPlayerScoreMakeEffect(ftGetStruct(gBattleState->players[this_fp->damage_player].fighter_gobj), 1);
        }
    }
    else gBattleState->players[this_fp->player].total_self_destruct++;
    
    if (gBattleState->game_rules & SCBATTLE_GAMERULE_STOCK)
    {
        this_fp->stock_count--;

        gBattleState->players[this_fp->player].stock_count--;

        ifCommonBattleUpdateScoreStocks(this_fp);
    }
    if (gBattleState->game_rules & SCBATTLE_GAMERULE_1PGAME)
    {
        this_fp->stock_count--;

        gBattleState->players[this_fp->player].stock_count--;

        sc1PGameSetPlayerDefeatStats(this_fp->player, this_fp->team_order);
    }
    if (gBattleState->game_rules & SCBATTLE_GAMERULE_BONUS)
    {
        ifCommonAnnounceEndMessage();
    }
}

// 0x8013BF94
void ftCommonDeadCheckRebirth(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (gBattleState->game_rules & SCBATTLE_GAMERULE_STOCK)
    {
        if (fp->stock_count == -1)
        {
            ftCommonSleepSetStatus(fighter_gobj);

            return;
        }
    }
    else if (gBattleState->game_rules & SCBATTLE_GAMERULE_1PGAME)
    {
        if (gBattleState->players[fp->player].is_spgame_team != FALSE)
        {
            sc1PGameSpawnEnemyTeamNext(fighter_gobj);

            return;
        }
        else if (fp->stock_count == -1)
        {
            ftCommonSleepSetStatus(fighter_gobj);

            return;
        }
    }
    ftCommonRebirthDownSetStatus(fighter_gobj);
}

// 0x8013C050
void ftCommonDeadResetCommonVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftParamStopVoiceRunProcDamage(fighter_gobj);
    ftManagerDestroyFighterWeapons(fighter_gobj);
    ftCommonThrownDecideDeadResult(fighter_gobj);

    fp->ga = nMPKineticsAir;
    fp->coll_data.ground_line_id = -1;

    if (fp->item_hold != NULL)
    {
        itMainDestroyItem(fp->item_hold);
    }
}

// 0x8013C0B0
void ftCommonDeadClearSpecialStats(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->star_invincible_tics = 0;
    fp->is_nullstatus = TRUE;
    fp->x18E_flag_b0 = TRUE;

    ftParamTryUpdateItemMusic();
}

// 0x8013C0EC
void ftCommonDeadCommonProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.dead.rebirth_wait--;

    if (fp->status_vars.common.dead.rebirth_wait == 0)
    {
        ftCommonDeadCheckRebirth(fighter_gobj);
    }
}

// 0x8013C120
void ftCommonDeadInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.dead.rebirth_wait = FTCOMMON_DEAD_REBIRTH_WAIT;

    ftPhysicsStopVelAll(fighter_gobj);

    fp->is_invisible = TRUE;
    fp->is_ignore_training_menu = TRUE;
    fp->is_playertag_hide = TRUE;

    efManagerQuakeMakeEffect(2);
    ftCommonDeadUpdateRumble(fp);
    ftCommonDeadUpdateScore(fp);

    if (fp->attributes->dead_sfx[0] != nSYAudioFGMVoiceEnd)
    {
        ftCommonDeadAddDeadSFXSoundQueue(fp->attributes->dead_sfx[0]);
    }
    if (fp->attributes->dead_sfx[1] != nSYAudioFGMVoiceEnd)
    {
        ftCommonDeadAddDeadSFXSoundQueue(fp->attributes->dead_sfx[1]);
    }
}

// 0x8013C1C4
void ftCommonDeadDownSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    u32 sfx_id;

    ftCommonDeadResetCommonVars(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusDeadDown, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftCommonDeadClearSpecialStats(fighter_gobj);
    ftCommonDeadInitStatusVars(fighter_gobj);

    pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

    if (gBattleState->game_type != nSCBattleGameTypeBonus)
    {
        if (pos.x > gMPCollisionGroundData->cam_bound_right)
        {
            pos.x = gMPCollisionGroundData->cam_bound_right;
        }

        if (pos.x < gMPCollisionGroundData->cam_bound_left)
        {
            pos.x = gMPCollisionGroundData->cam_bound_left;
        }
    }
    efManagerDeadExplodeMakeEffect(&pos, fp->player, 0);
    ifScreenFlashSetColAnimID(0x51, 0);

    if 
    (
        ((gBattleState->gr_kind >= nGRKindBonus1Start) && (gBattleState->gr_kind <= nGRKindBonus1End)) ||
        ((gBattleState->gr_kind >= nGRKindBonus2Start) && (gBattleState->gr_kind <= nGRKindBonus2End))
    )
    {
        sfx_id = nSYAudioFGMMapBoundHitS;
    }
    else sfx_id = nSYAudioFGMMapBoundHitL;

    ftCommonDeadAddDeadSFXSoundQueue(sfx_id);
}

// 0x8013C30C
void ftCommonDeadRightSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    u32 sfx_id;

    ftCommonDeadResetCommonVars(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusDeadLeftRight, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftCommonDeadClearSpecialStats(fighter_gobj);
    ftCommonDeadInitStatusVars(fighter_gobj);

    pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

    if (gBattleState->game_type != nSCBattleGameTypeBonus)
    {
        if (pos.y > gMPCollisionGroundData->cam_bound_top)
        {
            pos.y = gMPCollisionGroundData->cam_bound_top;
        }

        if (pos.y < gMPCollisionGroundData->cam_bound_bottom)
        {
            pos.y = gMPCollisionGroundData->cam_bound_bottom;
        }
    }
    efManagerDeadExplodeMakeEffect(&pos, fp->player, 1);
    ifScreenFlashSetColAnimID(0x51, 0);

    if 
    (
        ((gBattleState->gr_kind >= nGRKindBonus1Start) && (gBattleState->gr_kind <= nGRKindBonus1End)) ||
        ((gBattleState->gr_kind >= nGRKindBonus2Start) && (gBattleState->gr_kind <= nGRKindBonus2End))
    )
    {
        sfx_id = nSYAudioFGMMapBoundHitS;
    }
    else sfx_id = nSYAudioFGMMapBoundHitL;

    ftCommonDeadAddDeadSFXSoundQueue(sfx_id);
}

// 0x8013C454
void ftCommonDeadLeftSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    u32 sfx_id;

    ftCommonDeadResetCommonVars(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusDeadLeftRight, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftCommonDeadClearSpecialStats(fighter_gobj);
    ftCommonDeadInitStatusVars(fighter_gobj);

    pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

    if (gBattleState->game_type != nSCBattleGameTypeBonus)
    {
        if (pos.y > gMPCollisionGroundData->cam_bound_top)
        {
            pos.y = gMPCollisionGroundData->cam_bound_top;
        }
        if (pos.y < gMPCollisionGroundData->cam_bound_bottom)
        {
            pos.y = gMPCollisionGroundData->cam_bound_bottom;
        }
    }
    efManagerDeadExplodeMakeEffect(&pos, fp->player, 3);
    ifScreenFlashSetColAnimID(0x51, 0);

    if 
    (
        ((gBattleState->gr_kind >= nGRKindBonus1Start) && (gBattleState->gr_kind <= nGRKindBonus1End)) ||
        ((gBattleState->gr_kind >= nGRKindBonus2Start) && (gBattleState->gr_kind <= nGRKindBonus2End))
    )
    {
        sfx_id = nSYAudioFGMMapBoundHitS;
    }
    else sfx_id = nSYAudioFGMMapBoundHitL;

    ftCommonDeadAddDeadSFXSoundQueue(sfx_id);
}

// 0x8013C59C
void ftCommonDeadUpStarProcUpdate(GObj *fighter_gobj)
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
            fp->phys_info.vel_air.y = ((gMPCollisionGroundData->cam_bound_top * 0.6F) - DObjGetStruct(fighter_gobj)->translate.vec.f.y) / 180.0F;
            fp->phys_info.vel_air.z = FTCOMMON_DEADUPFALL_VEL_Z;

            fp->colanim.is_use_maincolor = TRUE;

            fp->colanim.maincolor.r = gMPCollisionGroundData->fog_color.r;
            fp->colanim.maincolor.g = gMPCollisionGroundData->fog_color.g;
            fp->colanim.maincolor.b = gMPCollisionGroundData->fog_color.b;
            fp->colanim.maincolor.a = 0;

            fp->status_vars.common.dead.rebirth_wait = FTCOMMON_DEADUP_REBIRTH_WAIT;

            fp->command_vars.flags.flag1++;
            break;

        case 1:
            ftPhysicsStopVelAll(fighter_gobj);
            efManagerSparkleWhiteDeadMakeEffect(&fp->joints[nFTPartsJointTopN]->translate.vec.f, 5.0F);

            fp->is_invisible = TRUE;
            fp->is_ignore_training_menu = TRUE;

            ftCommonDeadUpdateScore(fp);
            ftCommonDeadAddDeadSFXSoundQueue(nSYAudioFGMDeadUpStar);

            fp->is_playertag_hide = TRUE;
            fp->colanim.is_use_maincolor = FALSE;

            fp->status_vars.common.dead.rebirth_wait = FTCOMMON_DEAD_REBIRTH_WAIT;

            fp->command_vars.flags.flag1++;
            break;

        case 2:
            ftCommonDeadCheckRebirth(fighter_gobj);
            break;

        default:
            break;
        }
    }
}

// 0x8013C740
void ftCommonDeadUpStarSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonDeadResetCommonVars(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusDeadUpStar, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftPhysicsStopVelAll(fighter_gobj);

    fp->status_vars.common.dead.pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

    fp->camera_mode = 2;

    fp->status_vars.common.dead.rebirth_wait = 1;

    fp->command_vars.flags.flag1 = 0;

    ftCommonDeadClearSpecialStats(fighter_gobj);
    ftParamSetPlayerTagWait(fighter_gobj, 1);

    if (fp->attributes->deadup_sfx != nSYAudioFGMVoiceEnd)
    {
        func_800269C0_275C0(fp->attributes->deadup_sfx);
    }
    ftParamMoveDLLink(fighter_gobj, 1);
    ftParamResetFighterColAnim(fighter_gobj);
}

// 0x8013C80C
void ftCommonDeadUpFallProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 sfx_id;

    switch (fp->command_vars.flags.flag1)
    {
    case 1:
        if (DObjGetStruct(fighter_gobj)->translate.vec.f.y < gMPCollisionGroundData->map_bound_bottom)
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
            fp->phys_info.vel_air.y = (gMPCollisionGroundData->cam_bound_bottom - DObjGetStruct(fighter_gobj)->translate.vec.f.y) / 180.0F;

            DObjGetStruct(fighter_gobj)->translate.vec.f.z = CameraGetStruct(gCMManagerCameraGObj)->vec.eye.z - 3000.0F;

            if (DObjGetStruct(fighter_gobj)->translate.vec.f.z < 2000.0F)
            {
                DObjGetStruct(fighter_gobj)->translate.vec.f.z = 2000.0F;
            }
            DObjGetStruct(fighter_gobj)->translate.vec.f.x = CameraGetStruct(gCMManagerCameraGObj)->vec.eye.x;
            DObjGetStruct(fighter_gobj)->translate.vec.f.y = CameraGetStruct(gCMManagerCameraGObj)->vec.eye.y + 3000.0F;

            if (gMPCollisionGroundData->map_bound_top < DObjGetStruct(fighter_gobj)->translate.vec.f.y)
            {
                DObjGetStruct(fighter_gobj)->translate.vec.f.y = gMPCollisionGroundData->map_bound_top;
            }
            fp->status_vars.common.dead.rebirth_wait = FTCOMMON_DEADUP_REBIRTH_WAIT;

            fp->command_vars.flags.flag1++;
            break;

        case 1:
            ftPhysicsStopVelAll(fighter_gobj);
            ifScreenFlashSetColAnimID(0x51, 0);
            efManagerQuakeMakeEffect(2);
            ftCommonDeadUpdateRumble(fp);

            fp->is_playertag_hide = TRUE;
            fp->is_invisible = TRUE;
            fp->is_ignore_training_menu = TRUE;

            ftCommonDeadUpdateScore(fp);

            if 
            (
                ((gBattleState->gr_kind >= nGRKindBonus1Start) && (gBattleState->gr_kind <= nGRKindBonus1End)) ||
                ((gBattleState->gr_kind >= nGRKindBonus2Start) && (gBattleState->gr_kind <= nGRKindBonus2End))
            )
            {
                sfx_id = nSYAudioFGMMapBoundHitS;
            }
            else sfx_id = nSYAudioFGMMapBoundHitL;

            ftCommonDeadAddDeadSFXSoundQueue(sfx_id);

            if (fp->attributes->dead_sfx[0] != nSYAudioFGMVoiceEnd)
            {
                ftCommonDeadAddDeadSFXSoundQueue(fp->attributes->dead_sfx[0]);
            }
            if (fp->attributes->dead_sfx[1] != nSYAudioFGMVoiceEnd)
            {
                ftCommonDeadAddDeadSFXSoundQueue(fp->attributes->dead_sfx[1]);
            }
            fp->status_vars.common.dead.rebirth_wait = FTCOMMON_DEAD_REBIRTH_WAIT;
            fp->command_vars.flags.flag1++;
            break;

        case 2:
            ftCommonDeadCheckRebirth(fighter_gobj);
            break;

        default:
            break;
        }
    }
}

// 0x8013CAAC
void ftCommonDeadUpFallSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonDeadResetCommonVars(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusDeadUpFall, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftPhysicsStopVelAll(fighter_gobj);

    fp->status_vars.common.dead.pos = DObjGetStruct(fighter_gobj)->translate.vec.f;

    fp->camera_mode = 2;

    fp->status_vars.common.dead.rebirth_wait = 1;

    fp->command_vars.flags.flag1 = 0;

    ftCommonDeadClearSpecialStats(fighter_gobj);
    ftParamSetPlayerTagWait(fighter_gobj, 1);

    if (fp->attributes->deadup_sfx != nSYAudioFGMVoiceEnd)
    {
        func_800269C0_275C0(fp->attributes->deadup_sfx);
    }
    ftParamMoveDLLink(fighter_gobj, 19);
    ftParamSetModelPartDetailAll(fighter_gobj, nFTPartsDetailHigh);
}

// 0x8013CB7C
sb32 ftCommonDeadCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f *pos = &fp->joints[nFTPartsJointTopN]->translate.vec.f;

    if (fp->ft_kind == nFTKindBoss)
    {
        return FALSE;
    }
    if (fp->is_ignore_dead)
    {
        return FALSE;
    }
    if (fp->is_limit_map_bounds)
    {
        if (pos->y < gMPCollisionGroundData->map_bound_bottom)
        {
            pos->y = gMPCollisionGroundData->map_bound_bottom + 500.0F;

            fp->phys_info.vel_air.x = 0.0F;
            fp->phys_info.vel_air.y = 0.0F;
            fp->phys_info.vel_air.z = 0.0F;
        }
        else if (pos->y > gMPCollisionGroundData->map_bound_top)
        {
            pos->y = gMPCollisionGroundData->map_bound_top - 500.0F;

            fp->phys_info.vel_air.x = 0.0F;
            fp->phys_info.vel_air.y = 0.0F;
            fp->phys_info.vel_air.z = 0.0F;
        }
        if (pos->x > gMPCollisionGroundData->map_bound_right)
        {
            pos->x = gMPCollisionGroundData->map_bound_right - 500.0F;

            fp->phys_info.vel_air.x = 0.0F;
            fp->phys_info.vel_air.y = 0.0F;
            fp->phys_info.vel_air.z = 0.0F;
        }
        else if (pos->x < gMPCollisionGroundData->map_bound_left)
        {
            pos->x = gMPCollisionGroundData->map_bound_left + 500.0F;

            fp->phys_info.vel_air.x = 0.0F;
            fp->phys_info.vel_air.y = 0.0F;
            fp->phys_info.vel_air.z = 0.0F;
        }
        return FALSE;
    }
    else if (!(fp->is_nullstatus))
    {
        if ((gBattleState->game_type == nSCBattleGameType1PGame) && (gBattleState->players[fp->player].is_spgame_team != FALSE))
        {
            if (pos->y < gMPCollisionGroundData->map_bound_team_bottom)
            {
                ftCommonDeadDownSetStatus(fighter_gobj);

                return TRUE;
            }
            if (pos->x > gMPCollisionGroundData->map_bound_team_right)
            {
                ftCommonDeadRightSetStatus(fighter_gobj);

                return TRUE;
            }
            if (pos->x < gMPCollisionGroundData->map_bound_team_left)
            {
                ftCommonDeadLeftSetStatus(fighter_gobj);

                return TRUE;
            }
            if (pos->y > gMPCollisionGroundData->map_bound_team_top)
            {
                if (mtTrigGetRandomFloat() < (1.0F / 6.0F))
                {
                    ftCommonDeadUpFallSetStatus(fighter_gobj);

                    return TRUE;
                }
                else ftCommonDeadUpStarSetStatus(fighter_gobj);

                return TRUE;
            }
        }
        else if (pos->y < gMPCollisionGroundData->map_bound_bottom)
        {
            ftCommonDeadDownSetStatus(fighter_gobj);

            return TRUE;
        }
        else if (pos->x > gMPCollisionGroundData->map_bound_right)
        {
            ftCommonDeadRightSetStatus(fighter_gobj);

            return TRUE;
        }
        else if (pos->x < gMPCollisionGroundData->map_bound_left)
        {
            ftCommonDeadLeftSetStatus(fighter_gobj);

            return TRUE;
        }
        else if (pos->y > gMPCollisionGroundData->map_bound_top)
        {
            if (mtTrigGetRandomFloat() < (1.0F / 6.0F))
            {
                ftCommonDeadUpFallSetStatus(fighter_gobj);
            }
            else ftCommonDeadUpStarSetStatus(fighter_gobj);

            return TRUE;
        }
    }
    return FALSE;
}
