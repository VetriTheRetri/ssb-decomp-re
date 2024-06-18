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

    fp->lr = LR_Left;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_DeadRight, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;
}
