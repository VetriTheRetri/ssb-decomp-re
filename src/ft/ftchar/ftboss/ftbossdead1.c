#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015AD50
void ftBossDead1ProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftBossDead2SetStatus);
}

// 0x8015AD74
void ftBossDead1SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_Dead1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp = ftGetStruct(fighter_gobj);
    
    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;
}
