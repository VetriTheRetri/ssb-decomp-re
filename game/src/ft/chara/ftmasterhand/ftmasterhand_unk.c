#include <ft/fighter.h>
#include <gm/battle.h>

// 0x80158750
void ftMasterHand_Default_ProcInterrupt(GObj *fighter_gobj)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        ftMasterHand_Wait_SetStatus(fighter_gobj);
    }
}

// 0x80158784
void ftMasterHand_Default_SetStatus(GObj *fighter_gobj) // Unused
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_MasterHand_Default, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}