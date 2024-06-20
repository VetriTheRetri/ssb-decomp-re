#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define FTCOMMON_SHIELDBREAKSTAND_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801497A0
void ftCommonShieldBreakStandProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonFuraFuraSetStatus);
}

// 0x801497C4
void ftCommonShieldBreakStandSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id = (fp->status_info.status_id == ftStatus_Common_ShieldBreakDownD) ? ftStatus_Common_ShieldBreakStandD : ftStatus_Common_ShieldBreakStandU;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTCOMMON_SHIELDBREAKSTAND_STATUPDATE_FLAGS);
}
