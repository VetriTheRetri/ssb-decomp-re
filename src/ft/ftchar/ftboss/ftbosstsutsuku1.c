#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80159EA0
void ftBossTsutsuku1ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftBossTsutsuku2SetStatus);
}

// 0x80159EC4
void ftBossTsutsuku1SetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_Tsutsuku1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}
