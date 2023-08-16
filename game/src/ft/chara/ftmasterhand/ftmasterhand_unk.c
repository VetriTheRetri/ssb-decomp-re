#include <ft/fighter.h>
#include <gm/gmmatch.h>

// 0x80158750
void ftMasterHand_Unk_ProcInterrupt(GObj *fighter_gobj)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        ftMasterHand_Wait_SetStatus(fighter_gobj);
    }
}

// 0x80158784
void ftMasterHand_Unk_SetStatus(GObj *fighter_gobj) // Unused
{
    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Unk, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}