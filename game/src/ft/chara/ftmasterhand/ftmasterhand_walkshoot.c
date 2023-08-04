#include <ft/chara/ftmasterhand/ftmasterhand.h>

// 0x80159AA0
void ftMasterHand_WalkShoot_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftMasterHand_Wait_SetStatus);
}

// 0x80159AC4
void ftMasterHand_WalkShoot_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_MasterHand_WalkShoot, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}
