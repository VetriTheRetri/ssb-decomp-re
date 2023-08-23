#include <ft/fighter.h>

// 0x80144530
void ftCommon_DownStand_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 != 0) && (ftCommon_KneeBend_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_Pass_CheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommon_DokanStart_CheckInterruptCommon(fighter_gobj);
    }
}

// 0x80144580
void ftCommon_DownStand_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if ((fp->status_info.status_id == ftStatus_Common_DownBounceD) || (fp->status_info.status_id == ftStatus_Common_DownWaitD))
    {
        status_id = ftStatus_Common_DownStandD;
    }
    else status_id = ftStatus_Common_DownStandU;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->command_vars.flags.flag1 = 0;
}

// 0x801445D8
bool32 ftCommon_DownStand_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (((fp->input.pl.stick_range.y >= FTCOMMON_DOWNWAIT_STAND_STICK_RANGE_MIN) && (F_DEG_TO_RAD(50.0F) /* 0.87266463F */ <= ftCommon_GetStickAngleRadians(fp)) || (fp->input.pl.button_tap & fp->input.button_mask_z)))
    {
        ftCommon_DownStand_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}