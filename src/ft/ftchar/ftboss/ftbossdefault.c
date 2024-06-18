#include <ft/fighter.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80158750
void ftBossDefaultProcInterrupt(GObj *fighter_gobj)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        ftBossWaitSetStatus(fighter_gobj);
    }
}

// 0x80158784
void ftBossDefaultSetStatus(GObj *fighter_gobj) // Unused
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Boss_Default, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}
