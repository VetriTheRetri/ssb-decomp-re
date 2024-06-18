#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80159E20
void ftBossGootsubusuDownProcMap(GObj *fighter_gobj)
{
    if (ftMap_CheckAirLanding(fighter_gobj) != FALSE)
    {
        ftBossGootsubusuEndSetStatus(fighter_gobj);
    }
}

// 0x80159E50
void ftBossGootsubusuDownSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_GootsubusuDown, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_air.x = 0.0F;
    fp->phys_info.vel_air.y = -400.0F;
}
