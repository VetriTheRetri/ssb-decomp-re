#include <ft/fighter.h>
#include <it/item.h>

extern f32 ftCommon_GetStickAngleRadians(ftStruct*);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801508E0
void ftCommonAttackAirLwProcHit(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->ft_kind == Ft_Kind_Link) || (fp->ft_kind == Ft_Kind_PolyLink))
    {
        ftCommon_ClearHitAll(fighter_gobj);

        fp->is_fast_fall = FALSE;

        fp->phys_info.vel_air.y = FTCOMMON_ATTACKAIRLW_LINK_REHIT_BOUNCE_VEL_Y;

        if (fighter_gobj->anim_frame > FTCOMMON_ATTACKAIRLW_LINK_REHIT_FRAME_BEGIN)
        {
            ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_AttackAirLw, FTCOMMON_ATTACKAIRLW_LINK_REHIT_FRAME_BEGIN, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        }
        fp->status_vars.common.attackair.rehit_timer = FTCOMMON_ATTACKAIRLW_LINK_REHIT_TIMER;
    }
}

// 0x80150980
void ftCommonAttackAirLwProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->ft_kind == Ft_Kind_Link) || (fp->ft_kind == Ft_Kind_PolyLink))
    {
        if (fp->status_vars.common.attackair.rehit_timer != 0)
        {
            fp->status_vars.common.attackair.rehit_timer--;

            if ((fp->status_vars.common.attackair.rehit_timer == 0) && (fighter_gobj->anim_frame < FTCOMMON_ATTACKAIRLW_LINK_REHIT_FRAME_END))
            {
                ftCollision_RefreshHitIndex(fighter_gobj, 0);
                ftCollision_RefreshHitIndex(fighter_gobj, 1);
            }
        }
    }
    ftStatusFallOnAnimEnd(fighter_gobj);
}

// 0x80150A08
void ftCommonAttackAirProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckAirLanding(fighter_gobj) != FALSE)
    {
        if ((fp->command_vars.flags.flag1 != 0) && (fp->time_since_last_z > FTCOMMON_ATTACKAIR_SMOOTH_LANDING_BUFFER_FRAMES_MAX))
        {
            if (fp->ft_data->battlemotion->script_info[fp->status_info.motion_id + (ftStatus_Common_LandingAirN - ftStatus_Common_AttackAirN)].anim_id != 0)
            {
                ftCommonLandingAirSetStatus(fighter_gobj);
            }
            else ftCommonLandingAirNullSetStatus(fighter_gobj, fp->command_vars.flags.flag1 * 0.01F);
        }
        else if (fp->phys_info.vel_air.y > FTCOMMON_ATTACKAIR_SKIPLANDING_VEL_Y_MAX)
        {
            ftCommon_Wait_SetStatus(fighter_gobj);
        }
        else ftCommonLandingSetStatus(fighter_gobj);
    }
}

// 0x80150B00 - Also checks LightThrowAir and ItemShoot
sb32 ftCommonAttackAirCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    s32 status_id;
    ub32 is_have_attack_flag;
    f32 angle;
    sb32 is_goto_shoot = FALSE;

    if (fp->input.pl.button_tap & fp->input.button_mask_a)
    {
        if (ftHammer_CheckItemHold(fighter_gobj) == FALSE)
        {
            if (ftCommonLightThrowCheckItemTypeThrow(fp) != FALSE)
            {
                if ((ABS(fp->input.pl.stick_range.x) < FTCOMMON_ATTACKAIR_DIRECTION_STICK_RANGE_MIN) && (ABS(fp->input.pl.stick_range.y) < FTCOMMON_ATTACKAIR_DIRECTION_STICK_RANGE_MIN))
                {
                    if (itGetStruct(fp->item_hold)->type == It_Type_Throw)
                    {
                        ftCommonItemThrowSetStatus(fighter_gobj, ftStatus_Common_LightThrowAirF);

                        return TRUE;
                    }
                    else ftSetupDropItem(fp);

                    return FALSE;
                }
                else
                {
                    angle = ftCommon_GetStickAngleRadians(fp);

                    if (angle > F_CST_DTOR32(50.0F)) // 0.87266463F
                    {
                        if (fp->hold_stick_y < FTCOMMON_LIGHTTHROWAIR4_BUFFER_FRAMES_MAX)
                        {
                            status_id = ftStatus_Common_LightThrowAirHi4;
                        }
                        else status_id = ftStatus_Common_LightThrowAirHi;
                    }
                    else if (angle < F_CST_DTOR32(-50.0F)) // -0.87266463F
                    {
                        if (fp->hold_stick_y < FTCOMMON_LIGHTTHROWAIR4_BUFFER_FRAMES_MAX)
                        {
                            status_id = ftStatus_Common_LightThrowAirLw4;
                        }
                        else status_id = ftStatus_Common_LightThrowAirLw;
                    }
                    else if ((fp->input.pl.stick_range.x * fp->lr) >= 0)
                    {
                        if (fp->hold_stick_x < FTCOMMON_LIGHTTHROWAIR4_BUFFER_FRAMES_MAX)
                        {
                            status_id = ftStatus_Common_LightThrowAirF4;
                        }
                        else status_id = ftStatus_Common_LightThrowAirF;
                    }
                    else if (fp->hold_stick_x < FTCOMMON_LIGHTTHROWAIR4_BUFFER_FRAMES_MAX)
                    {
                        status_id = ftStatus_Common_LightThrowAirB4;
                    }
                    else status_id = ftStatus_Common_LightThrowAirB;

                    ftCommonItemThrowSetStatus(fighter_gobj, status_id);

                    return TRUE;
                }
            }
            else
            {
                if ((ABS(fp->input.pl.stick_range.x) < FTCOMMON_ATTACKAIR_DIRECTION_STICK_RANGE_MIN) && (ABS(fp->input.pl.stick_range.y) < FTCOMMON_ATTACKAIR_DIRECTION_STICK_RANGE_MIN))
                {
                    status_id = ftStatus_Common_AttackAirN;
                    is_have_attack_flag = attributes->is_have_attackairn;
                    is_goto_shoot = TRUE;
                }
                else
                {
                    angle = ftCommon_GetStickAngleRadians(fp);

                    if (angle > F_CST_DTOR32(50.0F)) // 0.87266463F
                    {
                        status_id = ftStatus_Common_AttackAirHi;
                        is_have_attack_flag = attributes->is_have_attackairhi;
                    }
                    else if (angle < F_CST_DTOR32(-50.0F)) // -0.87266463F
                    {
                        status_id = ftStatus_Common_AttackAirLw;
                        is_have_attack_flag = attributes->is_have_attackairlw;
                    }
                    else if ((fp->input.pl.stick_range.x * fp->lr) >= 0)
                    {
                        status_id = ftStatus_Common_AttackAirF;
                        is_have_attack_flag = attributes->is_have_attackairf;
                        is_goto_shoot = TRUE;
                    }
                    else
                    {
                        status_id = ftStatus_Common_AttackAirB;
                        is_have_attack_flag = attributes->is_have_attackairb;
                    }
                }
            }
            if (is_goto_shoot != FALSE)
            {
                if ((fp->item_hold != NULL) && (itGetStruct(fp->item_hold)->type == It_Type_Shoot))
                {
                    ftCommonItemShootAirSetStatus(fighter_gobj);

                    return TRUE;
                }
            }
            if (is_have_attack_flag)
            {
                fp->command_vars.flags.flag1 = 0;

                ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);

                if (status_id == ftStatus_Common_AttackAirLw)
                {
                    fp->proc_hit = ftCommonAttackAirLwProcHit;

                    fp->status_vars.common.attackair.rehit_timer = 0;
                }
                ftMainUpdateAnimCheckInterrupt(fighter_gobj);

                fp->time_since_last_z = FTINPUT_ZTRIGLAST_FRAMES_MAX;

                return TRUE;
            }
        }
    }
    return FALSE;
}
