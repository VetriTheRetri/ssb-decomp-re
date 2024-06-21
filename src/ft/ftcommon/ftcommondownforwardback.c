#include <ft/fighter.h>

extern f32 ftCommon_GetStickAngleRadians(ftStruct*);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801447E0
void ftCommonDownForwardOrBackSetStatus(GObj *fighter_gobj, s32 status_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->is_ignore_jostle = TRUE;
}

// 0x8014482C
sb32 ftCommonDownForwardOrBackCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if (ABS(fp->input.pl.stick_range.x) >= FTCOMMON_DOWN_FORWARD_BACK_RANGE_MIN)
    {
        if (ftCommon_GetStickAngleRadians(fp) < F_CST_DTOR32(50.0F)) // 0.87266463F
        {
            if ((fp->input.pl.stick_range.x * fp->lr) >= 0)
            {
                if ((fp->status_info.status_id == ftStatus_Common_DownBounceD) || (fp->status_info.status_id == ftStatus_Common_DownWaitD))
                {
                    status_id = ftStatus_Common_DownForwardD;
                }
                else status_id = ftStatus_Common_DownForwardU;
            }
            else if ((fp->status_info.status_id == ftStatus_Common_DownBounceD) || (fp->status_info.status_id == ftStatus_Common_DownWaitD))
            {
                status_id = ftStatus_Common_DownBackD;
            }
            else status_id = ftStatus_Common_DownBackU;

            ftCommonDownForwardOrBackSetStatus(fighter_gobj, status_id);

            return TRUE;
        }
    }
    return FALSE;
}
