#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80159A30
void ftBossWalkWaitProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftBossWaitSetStatus);
}

// 0x80159A54
void ftBossWalkWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTBossStatusWalkWait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0;
}
