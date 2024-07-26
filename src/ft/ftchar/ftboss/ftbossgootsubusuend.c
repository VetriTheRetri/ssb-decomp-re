#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80159DB0
void ftBossGootsubusuEndProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftBossWaitSetStatus);
}

// 0x80159DD4
void ftBossGootsubusuEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTBossStatusGootsubusuEnd, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

    fp->phys_info.vel_air.y = 0.0F;
}
