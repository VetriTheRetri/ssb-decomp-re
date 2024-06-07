#include <ft/fighter.h>

// 0x80159EF0
void ftMasterHand_Tsutsuku3_ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Wait_SetStatus);
}

// 0x80159F14
void ftMasterHand_Tsutsuku3_SetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_MasterHand_Tsutsuku3, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}
