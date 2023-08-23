#include <ft/fighter.h>

// 0x801447E0
void ftCommon_DownForwardOrBack_SetStatus(GObj *fighter_gobj, s32 status_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->x18F_flag_b4 = TRUE;
}

// 0x8014482C
bool32 ftCommon_DownForwardOrBack_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if (ABS(fp->input.pl.stick_range.x) >= FTCOMMON_DOWN_FORWARD_BACK_RANGE_MIN)
    {
        if (ftCommon_GetStickAngleRadians(fp) < F_DEG_TO_RAD(50.0F)) // 0.87266463F
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

            ftCommon_DownForwardOrBack_SetStatus(fighter_gobj, status_id);

            return TRUE;
        }
    }
    return FALSE;
}