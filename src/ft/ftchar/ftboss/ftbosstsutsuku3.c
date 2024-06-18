#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80159EF0
void ftBossTsutsuku3ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftBossWaitSetStatus);
}

// 0x80159F14
void ftBossTsutsuku3SetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_Tsutsuku3, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}
