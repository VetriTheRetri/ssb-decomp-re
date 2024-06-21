#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define FTCOMMON_SHIELDBREAKDOWN_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80149680 - Probably its own file?
void ftCommonShieldBreakDownProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonShieldBreakStandSetStatus);
}

// 0x801496A4
void ftCommonShieldBreakDownSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if (fp->ground_or_air == GA_Air)
    {
        ftMap_SetGround(fp);
    }
    status_id = (ftCommonDownBounceCheckUpOrDown(fighter_gobj) != 0) ? ftStatus_Common_ShieldBreakDownD : ftStatus_Common_ShieldBreakDownU;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTCOMMON_SHIELDBREAKDOWN_STATUPDATE_FLAGS);
    ftCommonDownBounceUpdateEffects(fighter_gobj);
}
