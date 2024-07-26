#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80159830
void ftBossWalkProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftBossWalkLoopSetStatus);
}

// 0x80159854
void ftBossWalkSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTBossStatusWalk, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftBossCommonCheckEdgeInvertLR(fighter_gobj);

    fp->phys_info.vel_air.x = 0.0F;
    fp->phys_info.vel_air.y = fp->coll_data.ground_dist / 60.0F;
}
