#include <ft/fighter.h>

// 0x8013EA40
void ftCommon_Dash_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        fp->phys_info.vel_ground.x *= 0.75F;

        ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// 0x8013EA90
void ftCommon_Dash_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 != 0) && (fighter_gobj->anim_frame <= 5.0F))
    {
        if ((ftCommon_SpecialN_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_Catch_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_AttackS4_CheckInterruptDash(fighter_gobj) == FALSE) && (!(fighter_gobj->anim_frame <= 3.0F) || (ftCommon_Escape_CheckInterruptDash(fighter_gobj) == FALSE)))
        {
            if (ftCommon_GuardOn_CheckInterruptCommon(fighter_gobj) != FALSE) // Jump interrupt?
            {
                return;
            }
            else goto next;
        }
    }
    else if (fighter_gobj->anim_frame <= 20.0F)
    {
        if (ftCommon_SpecialN_CheckInterruptCommon(fighter_gobj) == FALSE)
        {
            if (ftCommon_Catch_CheckInterruptRunDash(fighter_gobj) == FALSE)
            {
                if ((ftCommon_AttackDash_CheckInterruptCommon(fighter_gobj) == FALSE) && (((fp->input.pl.stick_range.x * fp->lr) >= 0) || (ftCommon_Dash_CheckInterruptCommon(fighter_gobj) == FALSE)))
                {
                    if (func_ovl3_80148D2C(fighter_gobj, (s32) (20.0F - fighter_gobj->anim_frame)) != FALSE)
                    {
                        return;
                    }
                    else goto next;
                }
            }
        }
    }
    else if ((ftCommon_Catch_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_Dash_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_GuardOn_CheckInterruptCommon(fighter_gobj) == FALSE))
    {
    next:
        if ((ftCommon_Appeal_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_KneeBend_CheckInterruptRun(fighter_gobj) == FALSE))
        {
            ftCommon_Run_CheckInterruptDash(fighter_gobj);
        }
    }
}

// 0x8013EC58
void ftCommon_Dash_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fighter_gobj->anim_frame >= FTCOMMON_DASH_DECELERATE_BEGIN)
    {
        func_ovl2_800D8978(fp, attributes->dash_decelerate);
    }
    func_ovl2_800D87D0(fighter_gobj);
}

// 0x8013ECB0
void ftCommon_Dash_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (attributes->dash_to_run <= fighter_gobj->anim_frame)
    {
        jtgt_ovl2_800DDEE8(fighter_gobj);
    }
    else jtgt_ovl2_800DDEC4(fighter_gobj);
}

// 0x8013ED00
void ftCommon_Dash_SetStatus(GObj *fighter_gobj, u32 flag)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_Dash, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->phys_info.vel_ground.x = fp->attributes->dash_speed;
    fp->tap_stick_x = U8_MAX - 1;
    fp->command_vars.flags.flag1 = flag;
}

// 0x8013ED64
bool32 ftCommon_Dash_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_DASH_STICK_RANGE_MIN) && (fp->tap_stick_x < FTCOMMON_DASH_BUFFER_FRAMES_MAX))
    {
        if ((fp->input.pl.stick_range.x * fp->lr) < 0)
        {
            ftCommon_Turn_SetStatusInvertLR(fighter_gobj);

            return TRUE;
        }
        ftCommon_StickInputSetLR(fp);
        ftCommon_Dash_SetStatus(fighter_gobj, 1);

        return TRUE;
    }
    return FALSE;
}

// 0x8013EDFC
bool32 ftCommon_Dash_CheckTurn(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (((fp->input.pl.stick_range.x * fp->status_vars.common.turn.lr_turn) >= FTCOMMON_DASH_STICK_RANGE_MIN) && (fp->tap_stick_x < FTCOMMON_DASH_BUFFER_FRAMES_MAX))
    {
        fp->status_vars.common.turn.lr_dash = fp->status_vars.common.turn.lr_turn;
        fp->status_vars.common.turn.unk_0x14 = 0;

        return TRUE;
    }
    else return FALSE;
}