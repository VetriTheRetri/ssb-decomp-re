#include <ft/fighter.h>

// 0x80144700
void ftCommon_PassiveStand_SetStatus(GObj *fighter_gobj, s32 status_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftMap_SetGround(fp);
    }
    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_VelDamageTransferGround(fp);
}

// 0x80144760
bool32 ftCommon_PassiveStand_CheckInterruptDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if (fp->time_since_last_z < FTCOMMON_PASSIVE_BUFFER_FRAMES_MAX)
    {
        if (ABS(fp->input.pl.stick_range.x) >= FTCOMMON_PASSIVE_F_OR_B_RANGE)
        {
            if ((fp->input.pl.stick_range.x * fp->lr) >= 0)
            {
                status_id = ftStatus_Common_PassiveStandF;
            }
            else status_id = ftStatus_Common_PassiveStandB;

            ftCommon_PassiveStand_SetStatus(fighter_gobj, status_id);

            return TRUE;
        }
    }
    return FALSE;
}