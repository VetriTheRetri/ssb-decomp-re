#include <ft/fighter.h>
#include <it/item.h>

// 0x801508E0
void ftCommon_AttackAirLw_ProcHit(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->ft_kind == Ft_Kind_Link) || (fp->ft_kind == Ft_Kind_PolyLink))
    {
        ftCommon_ClearHitAll(fighter_gobj);

        fp->is_fast_fall = FALSE;

        fp->phys_info.vel_air.y = FTCOMMON_ATTACKAIRLW_LINK_REHIT_BOUNCE_VEL_Y;

        if (fighter_gobj->anim_frame > FTCOMMON_ATTACKAIRLW_LINK_REHIT_FRAME_BEGIN)
        {
            ftStatus_Update(fighter_gobj, ftStatus_Common_AttackAirLw, FTCOMMON_ATTACKAIRLW_LINK_REHIT_FRAME_BEGIN, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        }
        fp->status_vars.common.attackair.rehit_timer = FTCOMMON_ATTACKAIRLW_LINK_REHIT_TIMER;
    }
}

// 0x80150980
void ftCommon_AttackAirLw_ProcUpdate(GObj *fighter_gobj)
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
    ftCommon_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x80150A08
void ftCommon_AttackAir_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE6B0(fighter_gobj) != FALSE)
    {
        if ((fp->command_vars.flags.flag1 != 0) && (fp->time_since_last_z > FTCOMMON_ATTACKAIR_SMOOTH_LANDING_BUFFER_FRAMES_MAX))
        {
            if (fp->ft_data->script1->script_info[fp->status_info.script_id + (ftStatus_Common_LandingAirN - ftStatus_Common_AttackAirN)].anim_id != 0)
            {
                ftCommon_LandingAir_SetStatus(fighter_gobj);
            }
            else ftCommon_LandingAirNull_SetStatus(fighter_gobj, fp->command_vars.flags.flag1 * 0.01F);
        }
        else if (fp->phys_info.vel_air.y > FTCOMMON_ATTACKAIR_SKIP_LANDING_VEL_Y_MAX)
        {
            ftCommon_Wait_SetStatus(fighter_gobj);
        }
        else ftCommon_Landing_SetStatus(fighter_gobj);
    }
}

// 0x80150B00 - Also checks LightThrowAir and ItemShoot
bool32 ftCommon_AttackAir_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    s32 status_id;
    u32 is_have_attack_flag;
    f32 angle;
    bool32 is_goto_shoot = FALSE;

    if (fp->input.pl.button_tap & fp->input.button_mask_a)
    {
        if (ftCommon_HammerCheckHold(fighter_gobj) == FALSE)
        {
            if (ftCommon_LightThrow_CheckItemTypeThrow(fp) != 0)
            {
                if ((ABS(fp->input.pl.stick_range.x) < FTCOMMON_ATTACKAIR_DIRECTION_STICK_RANGE_MIN) && (ABS(fp->input.pl.stick_range.y) < FTCOMMON_ATTACKAIR_DIRECTION_STICK_RANGE_MIN))
                {
                    if (itGetStruct(fp->item_hold)->type == It_Type_Throw)
                    {
                        ftCommon_ItemThrow_SetStatus(fighter_gobj, ftStatus_Common_LightThrowAirF);

                        return TRUE;
                    }
                    else ftSetupDropItem(fp);

                    return FALSE;
                }
                else
                {
                    angle = ftCommon_GetStickAngleRadians(fp);

                    if (angle > F_DEG_TO_RAD(50.0F)) // 0.87266463F
                    {
                        if (fp->hold_stick_y < FTCOMMON_LIGHTTHROWAIR4_BUFFER_FRAMES_MAX)
                        {
                            status_id = ftStatus_Common_LightThrowAirHi4;
                        }
                        else status_id = ftStatus_Common_LightThrowAirHi;
                    }
                    else if (angle < F_DEG_TO_RAD(-50.0F)) // -0.87266463F
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

                    ftCommon_ItemThrow_SetStatus(fighter_gobj, status_id);

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

                    if (angle > F_DEG_TO_RAD(50.0F)) // 0.87266463F
                    {
                        status_id = ftStatus_Common_AttackAirHi;
                        is_have_attack_flag = attributes->is_have_attackairhi;
                    }
                    else if (angle < F_DEG_TO_RAD(-50.0F)) // -0.87266463F
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
                    ftCommon_ItemShootAir_SetStatus(fighter_gobj, status_id);

                    return TRUE;
                }
            }
            if (is_have_attack_flag)
            {
                fp->command_vars.flags.flag1 = 0;

                ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);

                if (status_id == ftStatus_Common_AttackAirLw)
                {
                    fp->proc_hit = ftCommon_AttackAirLw_ProcHit;

                    fp->status_vars.common.attackair.rehit_timer = 0;
                }
                ftAnim_Update(fighter_gobj);

                fp->time_since_last_z = U16_MAX + 1;

                return TRUE;
            }
        }
    }
    return FALSE;
}

// 0x80150E80
void ftCommon_LandingAir_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, fp->status_info.status_id + (ftStatus_Common_LandingAirNull - ftStatus_Common_LandingAirN), 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}