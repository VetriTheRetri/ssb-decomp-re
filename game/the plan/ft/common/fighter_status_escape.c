#include <ft/fighter.h>

// 0x801491D0
void ftCommon_Escape_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;
        fp->lr = -fp->lr;
    }
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;
        fp->phys_info.vel_ground.x = fp->phys_info.vel_ground.y = fp->phys_info.vel_ground.z = 0.0F;

        if ((fp->ft_kind != Ft_Kind_Yoshi) && (fp->ft_kind != Ft_Kind_PolyYoshi) || (ftCommon_GuardOn_CheckInterruptEscape(fighter_gobj) == FALSE))
        {
            ftCommon_Wait_SetStatus(fighter_gobj);
        }
    }
}

// 0x80149268
void ftCommon_Escape_ProcInterrupt(GObj *fighter_gobj)
{
    ftCommon_LightThrow_CheckInterruptEscape(fighter_gobj);
}

// 0x80149288
void ftCommon_Escape_ProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;
}

// 0x80149294
void ftCommon_Escape_SetStatus(GObj *fighter_gobj, s32 status_id, s32 arg2)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftCommon_Escape_ProcStatus;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->x18F_flag_b4 = TRUE;

    fp->status_vars.common.escape.unk_0x0 = arg2;
}

// 0x801492F8
s32 ftCommon_Escape_GetStatus(ftStruct *fp)
{
    if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_ESCAPE_STICK_RANGE_MIN) && (fp->tap_stick_x < FTCOMMON_ESCAPE_BUFFER_FRAMES_MAX))
    {
        return ((fp->input.pl.stick_range.x * fp->lr) >= 0) ? ftStatus_Common_EscapeF : ftStatus_Common_EscapeB;
    }
    else return -1;
}

// 0x8014935C
bool32 ftCommon_Escape_CheckInterruptSpecialNDonkey(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id = ftCommon_Escape_GetStatus(fp);

    if (status_id != -1)
    {
        ftCommon_Escape_SetStatus(fighter_gobj, status_id, 0);

        return TRUE;
    }
    else return FALSE;
}

// 0x801493A4
bool32 ftCommon_Escape_CheckInterruptDash(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_tap & fp->input.button_mask_z)
    {
        ftCommon_Escape_SetStatus(fighter_gobj, ftStatus_Common_EscapeF, 0);

        return TRUE;
    }
    else return FALSE;
}

// 0x801493EC
bool32 ftCommon_Escape_CheckInterruptGuard(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id = ftCommon_Escape_GetStatus(fp);

    if (status_id != -1)
    {
        ftCommon_Escape_SetStatus(fighter_gobj, status_id, 5);

        return TRUE;
    }
    else return FALSE;
}