#include <ft/fighter.h>

// 0x80144660
void ftCommon_Passive_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftMap_SetGround(fp);
    }
    ftStatus_Update(fighter_gobj, ftStatus_Common_Passive, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_VelDamageTransferGround(fp);
}

// 0x801446BC
bool32 ftCommon_Passive_CheckInterruptDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->time_since_last_z < FTCOMMON_PASSIVE_BUFFER_FRAMES_MAX)
    {
        ftCommon_Passive_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}