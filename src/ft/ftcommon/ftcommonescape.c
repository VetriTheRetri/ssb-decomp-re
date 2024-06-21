#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801491D0
void ftCommonEscapeProcUpdate(GObj *fighter_gobj)
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

        if ((fp->ft_kind != Ft_Kind_Yoshi) && (fp->ft_kind != Ft_Kind_PolyYoshi) || (ftCommonGuardCheckInterruptEscape(fighter_gobj) == FALSE))
        {
            ftCommon_Wait_SetStatus(fighter_gobj);
        }
    }
}

// 0x80149268
void ftCommonEscapeProcInterrupt(GObj *fighter_gobj)
{
    ftCommonLightThrowCheckInterruptEscape(fighter_gobj);
}

// 0x80149288
void ftCommonEscapeProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;
}

// 0x80149294
void ftCommonEscapeSetStatus(GObj *fighter_gobj, s32 status_id, s32 itemthrow_buffer_frames)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftCommonEscapeProcStatus;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->is_ignore_jostle = TRUE;

    fp->status_vars.common.escape.itemthrow_buffer_frames = itemthrow_buffer_frames;
}

// 0x801492F8
s32 ftCommonEscapeGetStatus(ftStruct *fp)
{
    if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_ESCAPE_STICK_RANGE_MIN) && (fp->tap_stick_x < FTCOMMON_ESCAPE_BUFFER_FRAMES_MAX))
    {
        return ((fp->input.pl.stick_range.x * fp->lr) >= 0) ? ftStatus_Common_EscapeF : ftStatus_Common_EscapeB;
    }
    else return -1;
}

// 0x8014935C
sb32 ftCommonEscapeCheckInterruptSpecialNDonkey(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id = ftCommonEscapeGetStatus(fp);

    if (status_id != -1)
    {
        ftCommonEscapeSetStatus(fighter_gobj, status_id, 0);

        return TRUE;
    }
    else return FALSE;
}

// 0x801493A4
sb32 ftCommonEscapeCheckInterruptDash(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_tap & fp->input.button_mask_z)
    {
        ftCommonEscapeSetStatus(fighter_gobj, ftStatus_Common_EscapeF, 0);

        return TRUE;
    }
    else return FALSE;
}

// 0x801493EC
sb32 ftCommonEscapeCheckInterruptGuard(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id = ftCommonEscapeGetStatus(fp);

    if (status_id != -1)
    {
        ftCommonEscapeSetStatus(fighter_gobj, status_id, 5);

        return TRUE;
    }
    else return FALSE;
}
