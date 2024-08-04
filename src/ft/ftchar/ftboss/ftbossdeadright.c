#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015AE80
void ftBossDeadRightSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->lr = nGMFacingL;

    ftMainSetFighterStatus(fighter_gobj, nFTBossStatusDeadRight, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;
}
