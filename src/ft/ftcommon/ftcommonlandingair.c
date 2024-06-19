#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80150E80
void ftCommonLandingAirSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, fp->status_info.status_id + (ftStatus_Common_LandingAirEnd - ftStatus_Common_LandingAirStart), 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}
