#include <ft/fighter.h>

// 0x80159380
void ftMasterHand_Hippataku_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Wait_SetStatus);
}

// 0x801593A4
void ftMasterHand_Hippataku_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Hippataku, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    func_ovl3_80157F90(fighter_gobj);
}
