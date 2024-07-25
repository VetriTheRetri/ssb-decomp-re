#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80144660
void ftCommonPassiveSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == nMPKineticsAir)
    {
        ftMap_SetGround(fp);
    }
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_Passive, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_VelDamageTransferGround(fp);
}

// 0x801446BC
sb32 ftCommonPassiveCheckInterruptDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->time_since_last_z < FTCOMMON_PASSIVE_BUFFER_FRAMES_MAX)
    {
        ftCommonPassiveSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
