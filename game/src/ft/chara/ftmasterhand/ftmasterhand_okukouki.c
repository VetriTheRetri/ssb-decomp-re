#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x8015A2F0
void ftMasterHand_Okukouki_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Wait_SetStatus);
}

// 0x8015A314
void ftMasterHand_Okukouki_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_Okukouki, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    func_ovl3_80158030(fighter_gobj);
}
