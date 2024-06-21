#include <ft/fighter.h>

extern f32 ftCommon_GetStickAngleRadians(ftStruct*);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80144530
void ftCommonDownStandProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 != 0) && (ftCommon_KneeBend_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommonPassCheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommonDokanStartCheckInterruptCommon(fighter_gobj);
    }
}

// 0x80144580
void ftCommonDownStandSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if ((fp->status_info.status_id == ftStatus_Common_DownBounceD) || (fp->status_info.status_id == ftStatus_Common_DownWaitD))
    {
        status_id = ftStatus_Common_DownStandD;
    }
    else status_id = ftStatus_Common_DownStandU;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->command_vars.flags.flag1 = 0;
}

// 0x801445D8
sb32 ftCommonDownStandCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (((fp->input.pl.stick_range.y >= FTCOMMON_DOWNWAIT_STAND_STICK_RANGE_MIN) && (ftCommon_GetStickAngleRadians(fp) >= F_CST_DTOR32(50.0F)) || (fp->input.pl.button_tap & fp->input.button_mask_z)))
    {
        ftCommonDownStandSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
