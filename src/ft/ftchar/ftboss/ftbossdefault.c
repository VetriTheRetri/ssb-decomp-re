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
    if (gBattleState->game_status != nGMBattleGameStatusWait)
    {
        ftBossWaitSetStatus(fighter_gobj);
    }
}

// 0x80158784
void ftBossDefaultSetStatus(GObj *fighter_gobj) // Unused
{
    ftMainSetFighterStatus(fighter_gobj, nFTBossStatusDefault, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
}
